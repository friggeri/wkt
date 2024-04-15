module.exports = grammar({
  name: "wkt",
  conflicts: ($) => [[$._intervalBlocks]],
  rules: {
    workout: ($) =>
      seq(
        optional($._warmupStep),
        $._intervalBlocks,
        optional($._cooldownStep)
      ),

    _warmupStep: ($) => seq(field("warmup", $.workoutStep), "warmup", "+"),

    _cooldownStep: ($) =>
      seq("+", field("cooldown", $.workoutStep), "cooldown"),

    _intervalBlocks: ($) =>
      prec.dynamic(
        -1,
        seq(
          field("intervalBlock", $.intervalBlock),
          repeat(seq("+", field("intervalBlock", $.intervalBlock)))
        )
      ),

    intervalBlock: ($) =>
      choice(
        field("intervalStep", $.intervalStep),
        seq(field("iterations", $.number), "x", "(", $._intervalReps, ")")
      ),

    _intervalReps: ($) =>
      prec.left(
        2,
        seq(
          field("intervalStep", $.intervalStep),
          repeat(seq("+", field("intervalStep", $.intervalStep)))
        )
      ),

    intervalStep: ($) =>
      seq($.workoutStep, field("purpose", optional($.recovery))),

    recovery: ($) => "recovery",

    workoutStep: ($) =>
      seq(field("goal", $._goal), optional(seq("@", field("alert", $._alert)))),

    _alert: ($) =>
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
      seq(field("lowerBound", $.pace), "-", field("upperBound", $.pace)),

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
