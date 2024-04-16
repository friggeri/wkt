#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 70
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 22

enum ts_symbol_identifiers {
  anon_sym_warmup = 1,
  anon_sym_PLUS = 2,
  anon_sym_cooldown = 3,
  anon_sym_x = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  sym_recovery = 7,
  anon_sym_AT = 8,
  sym_z1 = 9,
  sym_z2 = 10,
  sym_z3 = 11,
  sym_z4 = 12,
  sym_z5 = 13,
  anon_sym_SLASH = 14,
  anon_sym_DASH = 15,
  sym_paceTime = 16,
  anon_sym_mile = 17,
  anon_sym_miles = 18,
  anon_sym_mi = 19,
  anon_sym_yard = 20,
  anon_sym_yards = 21,
  anon_sym_yd = 22,
  anon_sym_foot = 23,
  anon_sym_feet = 24,
  anon_sym_ft = 25,
  anon_sym_meter = 26,
  anon_sym_meters = 27,
  anon_sym_m = 28,
  anon_sym_kilometer = 29,
  anon_sym_kilometers = 30,
  anon_sym_km = 31,
  anon_sym_sec = 32,
  anon_sym_seconds = 33,
  anon_sym_second = 34,
  anon_sym_min = 35,
  anon_sym_minutes = 36,
  anon_sym_minute = 37,
  anon_sym_hr = 38,
  anon_sym_hours = 39,
  anon_sym_hour = 40,
  sym_number = 41,
  sym_workout = 42,
  sym__warmupStep = 43,
  sym__cooldownStep = 44,
  sym__intervalBlocks = 45,
  sym_intervalBlock = 46,
  sym__intervalReps = 47,
  sym_intervalStep = 48,
  sym_workoutStep = 49,
  sym__alert = 50,
  sym_heartRateAlert = 51,
  sym_pace = 52,
  sym_paceThresholdAlert = 53,
  sym_paceRangeAlert = 54,
  sym__goal = 55,
  sym_distanceGoal = 56,
  sym_durationGoal = 57,
  sym__unitLength = 58,
  sym_miles = 59,
  sym_yards = 60,
  sym_feet = 61,
  sym_meter = 62,
  sym_kilometer = 63,
  sym__unitDuration = 64,
  sym_seconds = 65,
  sym_minutes = 66,
  sym_hours = 67,
  aux_sym__intervalBlocks_repeat1 = 68,
  aux_sym__intervalReps_repeat1 = 69,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_warmup] = "warmup",
  [anon_sym_PLUS] = "+",
  [anon_sym_cooldown] = "cooldown",
  [anon_sym_x] = "x",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_recovery] = "recovery",
  [anon_sym_AT] = "@",
  [sym_z1] = "z1",
  [sym_z2] = "z2",
  [sym_z3] = "z3",
  [sym_z4] = "z4",
  [sym_z5] = "z5",
  [anon_sym_SLASH] = "/",
  [anon_sym_DASH] = "-",
  [sym_paceTime] = "paceTime",
  [anon_sym_mile] = "mile",
  [anon_sym_miles] = "miles",
  [anon_sym_mi] = "mi",
  [anon_sym_yard] = "yard",
  [anon_sym_yards] = "yards",
  [anon_sym_yd] = "yd",
  [anon_sym_foot] = "foot",
  [anon_sym_feet] = "feet",
  [anon_sym_ft] = "ft",
  [anon_sym_meter] = "meter",
  [anon_sym_meters] = "meters",
  [anon_sym_m] = "m",
  [anon_sym_kilometer] = "kilometer",
  [anon_sym_kilometers] = "kilometers",
  [anon_sym_km] = "km",
  [anon_sym_sec] = "sec",
  [anon_sym_seconds] = "seconds",
  [anon_sym_second] = "second",
  [anon_sym_min] = "min",
  [anon_sym_minutes] = "minutes",
  [anon_sym_minute] = "minute",
  [anon_sym_hr] = "hr",
  [anon_sym_hours] = "hours",
  [anon_sym_hour] = "hour",
  [sym_number] = "number",
  [sym_workout] = "workout",
  [sym__warmupStep] = "_warmupStep",
  [sym__cooldownStep] = "_cooldownStep",
  [sym__intervalBlocks] = "_intervalBlocks",
  [sym_intervalBlock] = "intervalBlock",
  [sym__intervalReps] = "_intervalReps",
  [sym_intervalStep] = "intervalStep",
  [sym_workoutStep] = "workoutStep",
  [sym__alert] = "_alert",
  [sym_heartRateAlert] = "heartRateAlert",
  [sym_pace] = "pace",
  [sym_paceThresholdAlert] = "paceThresholdAlert",
  [sym_paceRangeAlert] = "paceRangeAlert",
  [sym__goal] = "_goal",
  [sym_distanceGoal] = "distanceGoal",
  [sym_durationGoal] = "durationGoal",
  [sym__unitLength] = "_unitLength",
  [sym_miles] = "miles",
  [sym_yards] = "yards",
  [sym_feet] = "feet",
  [sym_meter] = "meter",
  [sym_kilometer] = "kilometer",
  [sym__unitDuration] = "_unitDuration",
  [sym_seconds] = "seconds",
  [sym_minutes] = "minutes",
  [sym_hours] = "hours",
  [aux_sym__intervalBlocks_repeat1] = "_intervalBlocks_repeat1",
  [aux_sym__intervalReps_repeat1] = "_intervalReps_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_warmup] = anon_sym_warmup,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_cooldown] = anon_sym_cooldown,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_recovery] = sym_recovery,
  [anon_sym_AT] = anon_sym_AT,
  [sym_z1] = sym_z1,
  [sym_z2] = sym_z2,
  [sym_z3] = sym_z3,
  [sym_z4] = sym_z4,
  [sym_z5] = sym_z5,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_paceTime] = sym_paceTime,
  [anon_sym_mile] = anon_sym_mile,
  [anon_sym_miles] = anon_sym_miles,
  [anon_sym_mi] = anon_sym_mi,
  [anon_sym_yard] = anon_sym_yard,
  [anon_sym_yards] = anon_sym_yards,
  [anon_sym_yd] = anon_sym_yd,
  [anon_sym_foot] = anon_sym_foot,
  [anon_sym_feet] = anon_sym_feet,
  [anon_sym_ft] = anon_sym_ft,
  [anon_sym_meter] = anon_sym_meter,
  [anon_sym_meters] = anon_sym_meters,
  [anon_sym_m] = anon_sym_m,
  [anon_sym_kilometer] = anon_sym_kilometer,
  [anon_sym_kilometers] = anon_sym_kilometers,
  [anon_sym_km] = anon_sym_km,
  [anon_sym_sec] = anon_sym_sec,
  [anon_sym_seconds] = anon_sym_seconds,
  [anon_sym_second] = anon_sym_second,
  [anon_sym_min] = anon_sym_min,
  [anon_sym_minutes] = anon_sym_minutes,
  [anon_sym_minute] = anon_sym_minute,
  [anon_sym_hr] = anon_sym_hr,
  [anon_sym_hours] = anon_sym_hours,
  [anon_sym_hour] = anon_sym_hour,
  [sym_number] = sym_number,
  [sym_workout] = sym_workout,
  [sym__warmupStep] = sym__warmupStep,
  [sym__cooldownStep] = sym__cooldownStep,
  [sym__intervalBlocks] = sym__intervalBlocks,
  [sym_intervalBlock] = sym_intervalBlock,
  [sym__intervalReps] = sym__intervalReps,
  [sym_intervalStep] = sym_intervalStep,
  [sym_workoutStep] = sym_workoutStep,
  [sym__alert] = sym__alert,
  [sym_heartRateAlert] = sym_heartRateAlert,
  [sym_pace] = sym_pace,
  [sym_paceThresholdAlert] = sym_paceThresholdAlert,
  [sym_paceRangeAlert] = sym_paceRangeAlert,
  [sym__goal] = sym__goal,
  [sym_distanceGoal] = sym_distanceGoal,
  [sym_durationGoal] = sym_durationGoal,
  [sym__unitLength] = sym__unitLength,
  [sym_miles] = sym_miles,
  [sym_yards] = sym_yards,
  [sym_feet] = sym_feet,
  [sym_meter] = sym_meter,
  [sym_kilometer] = sym_kilometer,
  [sym__unitDuration] = sym__unitDuration,
  [sym_seconds] = sym_seconds,
  [sym_minutes] = sym_minutes,
  [sym_hours] = sym_hours,
  [aux_sym__intervalBlocks_repeat1] = aux_sym__intervalBlocks_repeat1,
  [aux_sym__intervalReps_repeat1] = aux_sym__intervalReps_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_warmup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cooldown] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_recovery] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_z1] = {
    .visible = true,
    .named = true,
  },
  [sym_z2] = {
    .visible = true,
    .named = true,
  },
  [sym_z3] = {
    .visible = true,
    .named = true,
  },
  [sym_z4] = {
    .visible = true,
    .named = true,
  },
  [sym_z5] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_paceTime] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_miles] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yard] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yards] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_foot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_feet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ft] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_meter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_meters] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_m] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kilometer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kilometers] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_km] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seconds] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_second] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_min] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_minutes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_minute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hours] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hour] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_workout] = {
    .visible = true,
    .named = true,
  },
  [sym__warmupStep] = {
    .visible = false,
    .named = true,
  },
  [sym__cooldownStep] = {
    .visible = false,
    .named = true,
  },
  [sym__intervalBlocks] = {
    .visible = false,
    .named = true,
  },
  [sym_intervalBlock] = {
    .visible = true,
    .named = true,
  },
  [sym__intervalReps] = {
    .visible = false,
    .named = true,
  },
  [sym_intervalStep] = {
    .visible = true,
    .named = true,
  },
  [sym_workoutStep] = {
    .visible = true,
    .named = true,
  },
  [sym__alert] = {
    .visible = false,
    .named = true,
  },
  [sym_heartRateAlert] = {
    .visible = true,
    .named = true,
  },
  [sym_pace] = {
    .visible = true,
    .named = true,
  },
  [sym_paceThresholdAlert] = {
    .visible = true,
    .named = true,
  },
  [sym_paceRangeAlert] = {
    .visible = true,
    .named = true,
  },
  [sym__goal] = {
    .visible = false,
    .named = true,
  },
  [sym_distanceGoal] = {
    .visible = true,
    .named = true,
  },
  [sym_durationGoal] = {
    .visible = true,
    .named = true,
  },
  [sym__unitLength] = {
    .visible = false,
    .named = true,
  },
  [sym_miles] = {
    .visible = true,
    .named = true,
  },
  [sym_yards] = {
    .visible = true,
    .named = true,
  },
  [sym_feet] = {
    .visible = true,
    .named = true,
  },
  [sym_meter] = {
    .visible = true,
    .named = true,
  },
  [sym_kilometer] = {
    .visible = true,
    .named = true,
  },
  [sym__unitDuration] = {
    .visible = false,
    .named = true,
  },
  [sym_seconds] = {
    .visible = true,
    .named = true,
  },
  [sym_minutes] = {
    .visible = true,
    .named = true,
  },
  [sym_hours] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__intervalBlocks_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__intervalReps_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_alert = 1,
  field_cooldown = 2,
  field_distance = 3,
  field_duration = 4,
  field_goal = 5,
  field_intervalBlock = 6,
  field_intervalStep = 7,
  field_iterations = 8,
  field_lowerBound = 9,
  field_purpose = 10,
  field_quantity = 11,
  field_unit = 12,
  field_upperBound = 13,
  field_warmup = 14,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alert] = "alert",
  [field_cooldown] = "cooldown",
  [field_distance] = "distance",
  [field_duration] = "duration",
  [field_goal] = "goal",
  [field_intervalBlock] = "intervalBlock",
  [field_intervalStep] = "intervalStep",
  [field_iterations] = "iterations",
  [field_lowerBound] = "lowerBound",
  [field_purpose] = "purpose",
  [field_quantity] = "quantity",
  [field_unit] = "unit",
  [field_upperBound] = "upperBound",
  [field_warmup] = "warmup",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 3},
  [11] = {.index = 16, .length = 1},
  [12] = {.index = 17, .length = 2},
  [13] = {.index = 19, .length = 1},
  [14] = {.index = 20, .length = 2},
  [15] = {.index = 22, .length = 1},
  [16] = {.index = 23, .length = 2},
  [17] = {.index = 25, .length = 2},
  [18] = {.index = 27, .length = 2},
  [19] = {.index = 29, .length = 2},
  [20] = {.index = 31, .length = 1},
  [21] = {.index = 32, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_intervalBlock, 0, .inherited = true},
  [1] =
    {field_intervalBlock, 0},
  [2] =
    {field_intervalStep, 0},
  [3] =
    {field_goal, 0},
  [4] =
    {field_quantity, 0},
    {field_unit, 1},
  [6] =
    {field_intervalBlock, 1, .inherited = true},
    {field_warmup, 0, .inherited = true},
  [8] =
    {field_cooldown, 1, .inherited = true},
    {field_intervalBlock, 0, .inherited = true},
  [10] =
    {field_intervalBlock, 0},
    {field_intervalBlock, 1, .inherited = true},
  [12] =
    {field_purpose, 1},
  [13] =
    {field_cooldown, 2, .inherited = true},
    {field_intervalBlock, 1, .inherited = true},
    {field_warmup, 0, .inherited = true},
  [16] =
    {field_intervalBlock, 1},
  [17] =
    {field_intervalBlock, 0, .inherited = true},
    {field_intervalBlock, 1, .inherited = true},
  [19] =
    {field_warmup, 0},
  [20] =
    {field_alert, 2},
    {field_goal, 0},
  [22] =
    {field_cooldown, 1},
  [23] =
    {field_intervalStep, 3, .inherited = true},
    {field_iterations, 0},
  [25] =
    {field_intervalStep, 0},
    {field_intervalStep, 1, .inherited = true},
  [27] =
    {field_distance, 2},
    {field_duration, 0},
  [29] =
    {field_lowerBound, 0},
    {field_upperBound, 2},
  [31] =
    {field_intervalStep, 1},
  [32] =
    {field_intervalStep, 0, .inherited = true},
    {field_intervalStep, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(56);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '+') ADVANCE(58);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == 'c') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'h') ADVANCE(27);
      if (lookahead == 'k') ADVANCE(20);
      if (lookahead == 'm') ADVANCE(84);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 's') ADVANCE(15);
      if (lookahead == 'w') ADVANCE(3);
      if (lookahead == 'x') ADVANCE(60);
      if (lookahead == 'y') ADVANCE(4);
      if (lookahead == 'z') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 1:
      if (lookahead == '1') ADVANCE(65);
      if (lookahead == '2') ADVANCE(66);
      if (lookahead == '3') ADVANCE(67);
      if (lookahead == '4') ADVANCE(68);
      if (lookahead == '5') ADVANCE(69);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'm') ADVANCE(87);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 24:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 34:
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 48:
      if (lookahead == 'v') ADVANCE(17);
      END_STATE();
    case 49:
      if (lookahead == 'w') ADVANCE(25);
      END_STATE();
    case 50:
      if (lookahead == 'y') ADVANCE(63);
      END_STATE();
    case 51:
      if (lookahead == 'z') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(51)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 52:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_warmup);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_cooldown);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_recovery);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_z1);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_z2);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_z3);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_z4);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_z5);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_paceTime);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_mile);
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_miles);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_mi);
      if (lookahead == 'l') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_yard);
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_yards);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_yd);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_foot);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_feet);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_ft);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_meter);
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_meters);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_kilometer);
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_kilometers);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_km);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_sec);
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_seconds);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_second);
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_min);
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_minutes);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_minute);
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_hr);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_hours);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_hour);
      if (lookahead == 's') ADVANCE(95);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 52},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 51},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 52},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 52},
  [15] = {.lex_state = 52},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 52},
  [26] = {.lex_state = 52},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 51},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 52},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_warmup] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_cooldown] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_recovery] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym_z1] = ACTIONS(1),
    [sym_z2] = ACTIONS(1),
    [sym_z3] = ACTIONS(1),
    [sym_z4] = ACTIONS(1),
    [sym_z5] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_paceTime] = ACTIONS(1),
    [anon_sym_mile] = ACTIONS(1),
    [anon_sym_miles] = ACTIONS(1),
    [anon_sym_mi] = ACTIONS(1),
    [anon_sym_yard] = ACTIONS(1),
    [anon_sym_yards] = ACTIONS(1),
    [anon_sym_yd] = ACTIONS(1),
    [anon_sym_foot] = ACTIONS(1),
    [anon_sym_feet] = ACTIONS(1),
    [anon_sym_ft] = ACTIONS(1),
    [anon_sym_meter] = ACTIONS(1),
    [anon_sym_meters] = ACTIONS(1),
    [anon_sym_m] = ACTIONS(1),
    [anon_sym_kilometer] = ACTIONS(1),
    [anon_sym_kilometers] = ACTIONS(1),
    [anon_sym_km] = ACTIONS(1),
    [anon_sym_sec] = ACTIONS(1),
    [anon_sym_seconds] = ACTIONS(1),
    [anon_sym_second] = ACTIONS(1),
    [anon_sym_min] = ACTIONS(1),
    [anon_sym_minutes] = ACTIONS(1),
    [anon_sym_minute] = ACTIONS(1),
    [anon_sym_hr] = ACTIONS(1),
    [anon_sym_hours] = ACTIONS(1),
    [anon_sym_hour] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_workout] = STATE(46),
    [sym__warmupStep] = STATE(7),
    [sym__intervalBlocks] = STATE(33),
    [sym_intervalBlock] = STATE(35),
    [sym_intervalStep] = STATE(38),
    [sym_workoutStep] = STATE(27),
    [sym__goal] = STATE(13),
    [sym_distanceGoal] = STATE(13),
    [sym_durationGoal] = STATE(13),
    [sym_number] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(5), 1,
      anon_sym_x,
    ACTIONS(9), 1,
      anon_sym_miles,
    ACTIONS(11), 1,
      anon_sym_yard,
    ACTIONS(19), 1,
      anon_sym_meters,
    ACTIONS(21), 1,
      anon_sym_kilometer,
    ACTIONS(27), 1,
      anon_sym_seconds,
    ACTIONS(31), 1,
      anon_sym_minutes,
    ACTIONS(35), 1,
      anon_sym_hour,
    ACTIONS(7), 2,
      anon_sym_mile,
      anon_sym_mi,
    ACTIONS(13), 2,
      anon_sym_yards,
      anon_sym_yd,
    ACTIONS(17), 2,
      anon_sym_meter,
      anon_sym_m,
    ACTIONS(23), 2,
      anon_sym_kilometers,
      anon_sym_km,
    ACTIONS(25), 2,
      anon_sym_sec,
      anon_sym_second,
    ACTIONS(29), 2,
      anon_sym_min,
      anon_sym_minute,
    ACTIONS(33), 2,
      anon_sym_hr,
      anon_sym_hours,
    ACTIONS(15), 3,
      anon_sym_foot,
      anon_sym_feet,
      anon_sym_ft,
    STATE(20), 4,
      sym__unitDuration,
      sym_seconds,
      sym_minutes,
      sym_hours,
    STATE(19), 6,
      sym__unitLength,
      sym_miles,
      sym_yards,
      sym_feet,
      sym_meter,
      sym_kilometer,
  [72] = 17,
    ACTIONS(9), 1,
      anon_sym_miles,
    ACTIONS(11), 1,
      anon_sym_yard,
    ACTIONS(19), 1,
      anon_sym_meters,
    ACTIONS(21), 1,
      anon_sym_kilometer,
    ACTIONS(27), 1,
      anon_sym_seconds,
    ACTIONS(31), 1,
      anon_sym_minutes,
    ACTIONS(35), 1,
      anon_sym_hour,
    ACTIONS(7), 2,
      anon_sym_mile,
      anon_sym_mi,
    ACTIONS(13), 2,
      anon_sym_yards,
      anon_sym_yd,
    ACTIONS(17), 2,
      anon_sym_meter,
      anon_sym_m,
    ACTIONS(23), 2,
      anon_sym_kilometers,
      anon_sym_km,
    ACTIONS(25), 2,
      anon_sym_sec,
      anon_sym_second,
    ACTIONS(29), 2,
      anon_sym_min,
      anon_sym_minute,
    ACTIONS(33), 2,
      anon_sym_hr,
      anon_sym_hours,
    ACTIONS(15), 3,
      anon_sym_foot,
      anon_sym_feet,
      anon_sym_ft,
    STATE(20), 4,
      sym__unitDuration,
      sym_seconds,
      sym_minutes,
      sym_hours,
    STATE(19), 6,
      sym__unitLength,
      sym_miles,
      sym_yards,
      sym_feet,
      sym_meter,
      sym_kilometer,
  [141] = 10,
    ACTIONS(9), 1,
      anon_sym_miles,
    ACTIONS(11), 1,
      anon_sym_yard,
    ACTIONS(19), 1,
      anon_sym_meters,
    ACTIONS(21), 1,
      anon_sym_kilometer,
    ACTIONS(7), 2,
      anon_sym_mile,
      anon_sym_mi,
    ACTIONS(13), 2,
      anon_sym_yards,
      anon_sym_yd,
    ACTIONS(17), 2,
      anon_sym_meter,
      anon_sym_m,
    ACTIONS(23), 2,
      anon_sym_kilometers,
      anon_sym_km,
    ACTIONS(15), 3,
      anon_sym_foot,
      anon_sym_feet,
      anon_sym_ft,
    STATE(21), 6,
      sym__unitLength,
      sym_miles,
      sym_yards,
      sym_feet,
      sym_meter,
      sym_kilometer,
  [183] = 4,
    ACTIONS(39), 1,
      sym_paceTime,
    STATE(12), 1,
      sym_pace,
    STATE(22), 4,
      sym__alert,
      sym_heartRateAlert,
      sym_paceThresholdAlert,
      sym_paceRangeAlert,
    ACTIONS(37), 5,
      sym_z1,
      sym_z2,
      sym_z3,
      sym_z4,
      sym_z5,
  [203] = 1,
    ACTIONS(41), 8,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      sym_recovery,
      anon_sym_AT,
      anon_sym_DASH,
  [214] = 6,
    ACTIONS(3), 1,
      sym_number,
    STATE(28), 1,
      sym_workoutStep,
    STATE(29), 1,
      sym__intervalBlocks,
    STATE(35), 1,
      sym_intervalBlock,
    STATE(38), 1,
      sym_intervalStep,
    STATE(13), 3,
      sym__goal,
      sym_distanceGoal,
      sym_durationGoal,
  [235] = 1,
    ACTIONS(43), 8,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      sym_recovery,
      anon_sym_AT,
      anon_sym_DASH,
  [246] = 1,
    ACTIONS(45), 8,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      sym_recovery,
      anon_sym_AT,
      anon_sym_DASH,
  [257] = 1,
    ACTIONS(47), 8,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      sym_recovery,
      anon_sym_AT,
      anon_sym_DASH,
  [268] = 1,
    ACTIONS(49), 8,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      sym_recovery,
      anon_sym_AT,
      anon_sym_DASH,
  [279] = 2,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(51), 6,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      sym_recovery,
  [291] = 2,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(55), 6,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      sym_recovery,
  [303] = 5,
    ACTIONS(59), 1,
      sym_number,
    STATE(28), 1,
      sym_workoutStep,
    STATE(37), 1,
      sym_intervalStep,
    STATE(45), 1,
      sym__intervalReps,
    STATE(13), 3,
      sym__goal,
      sym_distanceGoal,
      sym_durationGoal,
  [321] = 5,
    ACTIONS(3), 1,
      sym_number,
    STATE(28), 1,
      sym_workoutStep,
    STATE(38), 1,
      sym_intervalStep,
    STATE(41), 1,
      sym_intervalBlock,
    STATE(13), 3,
      sym__goal,
      sym_distanceGoal,
      sym_durationGoal,
  [339] = 1,
    ACTIONS(61), 7,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      sym_recovery,
      anon_sym_AT,
  [349] = 1,
    ACTIONS(63), 7,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      sym_recovery,
      anon_sym_AT,
  [359] = 1,
    ACTIONS(65), 7,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      sym_recovery,
      anon_sym_AT,
  [369] = 1,
    ACTIONS(67), 7,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      sym_recovery,
      anon_sym_AT,
  [379] = 1,
    ACTIONS(69), 7,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      sym_recovery,
      anon_sym_AT,
  [389] = 1,
    ACTIONS(71), 7,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      sym_recovery,
      anon_sym_DASH,
  [399] = 1,
    ACTIONS(73), 6,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      sym_recovery,
  [408] = 1,
    ACTIONS(75), 6,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      sym_recovery,
  [417] = 1,
    ACTIONS(77), 6,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      sym_recovery,
  [426] = 4,
    ACTIONS(59), 1,
      sym_number,
    STATE(28), 1,
      sym_workoutStep,
    STATE(42), 1,
      sym_intervalStep,
    STATE(13), 3,
      sym__goal,
      sym_distanceGoal,
      sym_durationGoal,
  [441] = 3,
    ACTIONS(59), 1,
      sym_number,
    STATE(50), 1,
      sym_workoutStep,
    STATE(13), 3,
      sym__goal,
      sym_distanceGoal,
      sym_durationGoal,
  [453] = 3,
    ACTIONS(81), 1,
      anon_sym_warmup,
    ACTIONS(83), 1,
      sym_recovery,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [464] = 2,
    ACTIONS(83), 1,
      sym_recovery,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [473] = 3,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 1,
      anon_sym_PLUS,
    STATE(52), 1,
      sym__cooldownStep,
  [483] = 1,
    ACTIONS(89), 3,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [489] = 3,
    ACTIONS(91), 1,
      anon_sym_PLUS,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      aux_sym__intervalReps_repeat1,
  [499] = 3,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(98), 1,
      anon_sym_PLUS,
    STATE(36), 1,
      aux_sym__intervalBlocks_repeat1,
  [509] = 3,
    ACTIONS(87), 1,
      anon_sym_PLUS,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    STATE(44), 1,
      sym__cooldownStep,
  [519] = 3,
    ACTIONS(103), 1,
      anon_sym_PLUS,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      aux_sym__intervalReps_repeat1,
  [529] = 3,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      anon_sym_PLUS,
    STATE(32), 1,
      aux_sym__intervalBlocks_repeat1,
  [539] = 3,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(114), 1,
      anon_sym_PLUS,
    STATE(36), 1,
      aux_sym__intervalBlocks_repeat1,
  [549] = 3,
    ACTIONS(103), 1,
      anon_sym_PLUS,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      aux_sym__intervalReps_repeat1,
  [559] = 1,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [564] = 2,
    ACTIONS(39), 1,
      sym_paceTime,
    STATE(24), 1,
      sym_pace,
  [571] = 1,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [576] = 1,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [581] = 1,
    ACTIONS(125), 2,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [586] = 1,
    ACTIONS(127), 1,
      anon_sym_SLASH,
  [590] = 1,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
  [594] = 1,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
  [598] = 1,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
  [602] = 1,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
  [606] = 1,
    ACTIONS(137), 1,
      sym_number,
  [610] = 1,
    ACTIONS(139), 1,
      anon_sym_PLUS,
  [614] = 1,
    ACTIONS(141), 1,
      anon_sym_cooldown,
  [618] = 1,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
  [622] = 1,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 72,
  [SMALL_STATE(4)] = 141,
  [SMALL_STATE(5)] = 183,
  [SMALL_STATE(6)] = 203,
  [SMALL_STATE(7)] = 214,
  [SMALL_STATE(8)] = 235,
  [SMALL_STATE(9)] = 246,
  [SMALL_STATE(10)] = 257,
  [SMALL_STATE(11)] = 268,
  [SMALL_STATE(12)] = 279,
  [SMALL_STATE(13)] = 291,
  [SMALL_STATE(14)] = 303,
  [SMALL_STATE(15)] = 321,
  [SMALL_STATE(16)] = 339,
  [SMALL_STATE(17)] = 349,
  [SMALL_STATE(18)] = 359,
  [SMALL_STATE(19)] = 369,
  [SMALL_STATE(20)] = 379,
  [SMALL_STATE(21)] = 389,
  [SMALL_STATE(22)] = 399,
  [SMALL_STATE(23)] = 408,
  [SMALL_STATE(24)] = 417,
  [SMALL_STATE(25)] = 426,
  [SMALL_STATE(26)] = 441,
  [SMALL_STATE(27)] = 453,
  [SMALL_STATE(28)] = 464,
  [SMALL_STATE(29)] = 473,
  [SMALL_STATE(30)] = 483,
  [SMALL_STATE(31)] = 489,
  [SMALL_STATE(32)] = 499,
  [SMALL_STATE(33)] = 509,
  [SMALL_STATE(34)] = 519,
  [SMALL_STATE(35)] = 529,
  [SMALL_STATE(36)] = 539,
  [SMALL_STATE(37)] = 549,
  [SMALL_STATE(38)] = 559,
  [SMALL_STATE(39)] = 564,
  [SMALL_STATE(40)] = 571,
  [SMALL_STATE(41)] = 576,
  [SMALL_STATE(42)] = 581,
  [SMALL_STATE(43)] = 586,
  [SMALL_STATE(44)] = 590,
  [SMALL_STATE(45)] = 594,
  [SMALL_STATE(46)] = 598,
  [SMALL_STATE(47)] = 602,
  [SMALL_STATE(48)] = 606,
  [SMALL_STATE(49)] = 610,
  [SMALL_STATE(50)] = 614,
  [SMALL_STATE(51)] = 618,
  [SMALL_STATE(52)] = 622,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kilometer, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_miles, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yards, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feet, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meter, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paceThresholdAlert, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workoutStep, 1, .production_id = 4),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seconds, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_minutes, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hours, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_distanceGoal, 2, .production_id = 5),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_durationGoal, 2, .production_id = 5),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pace, 3, .production_id = 18),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workoutStep, 3, .production_id = 14),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heartRateAlert, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paceRangeAlert, 3, .production_id = 19),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intervalStep, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workout, 2, .production_id = 6),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intervalStep, 2, .production_id = 9),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intervalReps_repeat1, 2, .production_id = 21), SHIFT_REPEAT(25),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__intervalReps_repeat1, 2, .production_id = 21),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__intervalBlocks, 2, .dynamic_precedence = -1, .production_id = 8),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__intervalBlocks, 2, .dynamic_precedence = -1, .production_id = 8), SHIFT(15),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workout, 1, .production_id = 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__intervalReps, 2, .production_id = 17),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__intervalBlocks, 1, .dynamic_precedence = -1, .production_id = 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__intervalBlocks, 1, .dynamic_precedence = -1, .production_id = 2), SHIFT(15),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__intervalBlocks_repeat1, 2, .production_id = 12),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intervalBlocks_repeat1, 2, .production_id = 12), SHIFT_REPEAT(15),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__intervalReps, 1, .production_id = 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intervalBlock, 1, .production_id = 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intervalBlock, 5, .production_id = 16),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__intervalBlocks_repeat1, 2, .production_id = 11),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__intervalReps_repeat1, 2, .production_id = 20),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workout, 2, .production_id = 7),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [133] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cooldownStep, 3, .production_id = 15),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warmupStep, 3, .production_id = 13),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workout, 3, .production_id = 10),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_wkt() {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
