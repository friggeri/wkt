module.exports = grammar({
  name: 'workoutlang',
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
      $.goal,
      optional(seq('@', $.alert))
    ),

    alert: $ => choice(
      $.heartRateAlert,
      $.paceAlert,
    ),

    heartRateAlert: $ => choice(
      'z1',
      'z2',
      'z3',
      'z4',
      'z5',
    ),

    paceAlert: $ => seq(
      $.paceTime,
      '/',
      $.unitLength
    ),

    paceTime: $ => /\d+:\d\d/,

    goal: $ => choice(
      'run',
      seq($.number, $.unitLength),
      seq($.number, $.unitDuration)
    ),

    unitLength: $ => choice(
      alias(choice('mile', 'miles', 'mi'), 'miles'),
      alias(choice('yard', 'yards', 'yd'), 'yards'),
      alias(choice('foot', 'feet', 'ft'), 'feet'),
      alias(choice('meter', 'meters', 'm'), 'meter'),
      alias(choice('kilometer', 'kilometers', 'km'), 'kilometer'),
    ),

    unitDuration: $ => choice(
      'sec',
      'min',
      'hr'
    ),

    number: $ => /\d+(\.\d+)?/,
  }
});