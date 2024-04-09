module.exports = grammar({
  name: 'wkt',
  rules: {
    workout: $ => seq(
      optional($.warmupStep),
      $.intervalBlock,
      optional($.cooldownStep),
    ),

    warmupStep: $ => seq(
      $.workoutStep,
      'warmup',
      '+'
    ),

    cooldownStep: $ => seq(
      '+',
      $.workoutStep,
      'cooldown'
    ),

    intervalBlock: $ => choice(
      $.intervalReps,
      seq('(', $.intervalReps, ')'),
      seq(
        $.number, 'x', '(', $.intervalReps, ')'
      ),
    ),

    intervalReps: $ => prec.left(2, seq(
      $.intervalStep,
      repeat(seq('+', $.intervalStep)),
    )),

    intervalStep: $ => seq(
      $.workoutStep,
      field('purpose', optional('recovery')),
    ),

    workoutStep: $ => seq(
      $._goal,
      optional(seq('@', $.alert))
    ),

    alert: $ => choice(
      $.heartRateAlert,
      $.paceThresholdAlert,
      $.paceRangeAlert,
    ),

    heartRateAlert: $ => choice(
      $.z1,
      $.z2,
      $.z3,
      $.z4,
      $.z5,
    ),

    z1: $ => 'z1',
    z2: $ => 'z2',
    z3: $ => 'z3',
    z4: $ => 'z4',
    z5: $ => 'z5',

    pace: $ => seq(
      field("duration", $.paceTime),
      '/',
      field("unit", $._unitLength),
    ),

    paceThresholdAlert: $ => $.pace,

    paceRangeAlert: $ => seq(
      field("lower", $.pace),
      '-',
      field("upper", $.pace),
    ),

    paceTime: $ => /\d+:\d\d/,

    _goal: $ => choice(
      $.openGoal,
      $.distanceGoal,
      $.durationGoal,
    ),

    openGoal: $ => choice('open', 'run'),
    distanceGoal: $ => seq(field('value', $.number), field('unit', $._unitLength)),
    durationGoal: $ => seq(field('value', $.number), field('unit', $._unitDuration)),

    _unitLength: $ => choice(
      $.miles,
      $.yards,
      $.feet,
      $.meter,
      $.kilometer,
    ),

    miles: $ => choice('mile', 'miles', 'mi'),
    yards: $ => choice('yard', 'yards', 'yd'),
    feet: $ => choice('foot', 'feet', 'ft'),
    meter: $ => choice('meter', 'meters', 'm'),
    kilometer: $ => choice('kilometer', 'kilometers', 'km'),

    _unitDuration: $ => choice(
      $.seconds,
      $.minutes,
      $.hours,
    ),

    seconds: $ => 'sec',
    minutes: $ => 'min',
    hours: $ => 'hr',

    number: $ => /\d+(\.\d+)?/,
  }
});