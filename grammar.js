module.exports = grammar({
  name: "wkt",
  conflicts: ($) => [[$.intervalBlocks]],
  rules: {
    workout: ($) =>
      seq(
        field("warmup", optional($._warmupStep)),
        field("intervalBlocks", $.intervalBlocks),
        field("cooldown", optional($._cooldownStep))
      ),

    _warmupStep: ($) => seq($.workoutStep, "warmup", "+"),

    _cooldownStep: ($) => seq("+", $.workoutStep, "cooldown"),

    intervalBlocks: ($) =>
      prec.dynamic(-1, seq($.intervalBlock, repeat(seq("+", $.intervalBlock)))),

    intervalBlock: ($) =>
      choice(
        field("step", $.intervalStep),
        seq(field("iterations", $.number), "x", "(", $._intervalReps, ")")
      ),

    _intervalReps: ($) =>
      prec.left(
        2,
        seq(
          field("step", $.intervalStep),
          repeat(seq("+", field("step", $.intervalStep)))
        )
      ),

    intervalStep: ($) =>
      seq($.workoutStep, field("purpose", optional($.recovery))),

    recovery: ($) => "recovery",

    workoutStep: ($) => seq($._goal, optional(seq("@", $.alert))),

    alert: ($) =>
      choice($.heartRateAlert, $.paceThresholdAlert, $.paceRangeAlert),

    heartRateAlert: ($) => choice($.z1, $.z2, $.z3, $.z4, $.z5),

    z1: ($) => "z1",
    z2: ($) => "z2",
    z3: ($) => "z3",
    z4: ($) => "z4",
    z5: ($) => "z5",

    pace: ($) =>
      seq(field("duration", $.paceTime), "/", field("distance", $._unitLength)),

    paceThresholdAlert: ($) => $.pace,

    paceRangeAlert: ($) =>
      seq(field("lower", $.pace), "-", field("upper", $.pace)),

    paceTime: ($) => /\d+:\d\d/,

    _goal: ($) => choice($.distanceGoal, $.durationGoal),

    distanceGoal: ($) =>
      seq(field("quantity", $.number), field("unit", $._unitLength)),
    durationGoal: ($) =>
      seq(field("quantity", $.number), field("unit", $._unitDuration)),

    _unitLength: ($) => choice($.miles, $.yards, $.feet, $.meter, $.kilometer),

    miles: ($) => choice("mile", "miles", "mi"),
    yards: ($) => choice("yard", "yards", "yd"),
    feet: ($) => choice("foot", "feet", "ft"),
    meter: ($) => choice("meter", "meters", "m"),
    kilometer: ($) => choice("kilometer", "kilometers", "km"),

    _unitDuration: ($) => choice($.seconds, $.minutes, $.hours),

    seconds: ($) => "sec",
    minutes: ($) => "min",
    hours: ($) => "hr",

    number: ($) => /\d+(\.\d+)?/,
  },
});
