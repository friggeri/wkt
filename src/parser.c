#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  anon_sym_warmup = 1,
  anon_sym_PLUS = 2,
  anon_sym_cooldown = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_x = 6,
  anon_sym_recovery = 7,
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
  sym_seconds = 32,
  sym_minutes = 33,
  sym_hours = 34,
  sym_number = 35,
  sym_workout = 36,
  sym_warmupStep = 37,
  sym_cooldownStep = 38,
  sym_intervalBlock = 39,
  sym_intervalReps = 40,
  sym_intervalStep = 41,
  sym_workoutStep = 42,
  sym_alert = 43,
  sym_heartRateAlert = 44,
  sym_pace = 45,
  sym_paceThresholdAlert = 46,
  sym_paceRangeAlert = 47,
  sym__goal = 48,
  sym_distanceGoal = 49,
  sym_durationGoal = 50,
  sym__unitLength = 51,
  sym_miles = 52,
  sym_yards = 53,
  sym_feet = 54,
  sym_meter = 55,
  sym_kilometer = 56,
  sym__unitDuration = 57,
  aux_sym_intervalReps_repeat1 = 58,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_warmup] = "warmup",
  [anon_sym_PLUS] = "+",
  [anon_sym_cooldown] = "cooldown",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_x] = "x",
  [anon_sym_recovery] = "recovery",
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
  [sym_seconds] = "seconds",
  [sym_minutes] = "minutes",
  [sym_hours] = "hours",
  [sym_number] = "number",
  [sym_workout] = "workout",
  [sym_warmupStep] = "warmupStep",
  [sym_cooldownStep] = "cooldownStep",
  [sym_intervalBlock] = "intervalBlock",
  [sym_intervalReps] = "intervalReps",
  [sym_intervalStep] = "intervalStep",
  [sym_workoutStep] = "workoutStep",
  [sym_alert] = "alert",
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
  [aux_sym_intervalReps_repeat1] = "intervalReps_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_warmup] = anon_sym_warmup,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_cooldown] = anon_sym_cooldown,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_recovery] = anon_sym_recovery,
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
  [sym_seconds] = sym_seconds,
  [sym_minutes] = sym_minutes,
  [sym_hours] = sym_hours,
  [sym_number] = sym_number,
  [sym_workout] = sym_workout,
  [sym_warmupStep] = sym_warmupStep,
  [sym_cooldownStep] = sym_cooldownStep,
  [sym_intervalBlock] = sym_intervalBlock,
  [sym_intervalReps] = sym_intervalReps,
  [sym_intervalStep] = sym_intervalStep,
  [sym_workoutStep] = sym_workoutStep,
  [sym_alert] = sym_alert,
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
  [aux_sym_intervalReps_repeat1] = aux_sym_intervalReps_repeat1,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_recovery] = {
    .visible = true,
    .named = false,
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
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_workout] = {
    .visible = true,
    .named = true,
  },
  [sym_warmupStep] = {
    .visible = true,
    .named = true,
  },
  [sym_cooldownStep] = {
    .visible = true,
    .named = true,
  },
  [sym_intervalBlock] = {
    .visible = true,
    .named = true,
  },
  [sym_intervalReps] = {
    .visible = true,
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
  [sym_alert] = {
    .visible = true,
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
  [aux_sym_intervalReps_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_duration = 1,
  field_lower = 2,
  field_purpose = 3,
  field_unit = 4,
  field_upper = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_duration] = "duration",
  [field_lower] = "lower",
  [field_purpose] = "purpose",
  [field_unit] = "unit",
  [field_upper] = "upper",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_unit, 1},
    {field_value, 0},
  [2] =
    {field_purpose, 1},
  [3] =
    {field_duration, 0},
    {field_unit, 2},
  [5] =
    {field_lower, 0},
    {field_upper, 2},
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
  [32] = 28,
  [33] = 33,
  [34] = 34,
  [35] = 30,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(50);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'h') ADVANCE(32);
      if (lookahead == 'k') ADVANCE(19);
      if (lookahead == 'm') ADVANCE(78);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead == 'w') ADVANCE(4);
      if (lookahead == 'x') ADVANCE(56);
      if (lookahead == 'y') ADVANCE(5);
      if (lookahead == 'z') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 2:
      if (lookahead == '1') ADVANCE(59);
      if (lookahead == '2') ADVANCE(60);
      if (lookahead == '3') ADVANCE(61);
      if (lookahead == '4') ADVANCE(62);
      if (lookahead == '5') ADVANCE(63);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(30);
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 22:
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 43:
      if (lookahead == 'v') ADVANCE(16);
      END_STATE();
    case 44:
      if (lookahead == 'w') ADVANCE(24);
      END_STATE();
    case 45:
      if (lookahead == 'y') ADVANCE(57);
      END_STATE();
    case 46:
      if (lookahead == 'z') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_warmup);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_cooldown);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_recovery);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_z1);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_z2);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_z3);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_z4);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_z5);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_paceTime);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_mile);
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_miles);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_mi);
      if (lookahead == 'l') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_yard);
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_yards);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_yd);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_foot);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_feet);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_ft);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_meter);
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_meters);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_kilometer);
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_kilometers);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_km);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_seconds);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_minutes);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_hours);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == ':') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 46},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 46},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_warmup] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_cooldown] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_recovery] = ACTIONS(1),
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
    [sym_seconds] = ACTIONS(1),
    [sym_minutes] = ACTIONS(1),
    [sym_hours] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_workout] = STATE(50),
    [sym_warmupStep] = STATE(6),
    [sym_intervalBlock] = STATE(31),
    [sym_intervalReps] = STATE(38),
    [sym_intervalStep] = STATE(35),
    [sym_workoutStep] = STATE(27),
    [sym__goal] = STATE(14),
    [sym_distanceGoal] = STATE(14),
    [sym_durationGoal] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(3),
    [sym_number] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(7), 1,
      anon_sym_x,
    ACTIONS(11), 1,
      anon_sym_miles,
    ACTIONS(13), 1,
      anon_sym_yard,
    ACTIONS(21), 1,
      anon_sym_meters,
    ACTIONS(23), 1,
      anon_sym_kilometer,
    STATE(17), 1,
      sym__unitDuration,
    ACTIONS(9), 2,
      anon_sym_mile,
      anon_sym_mi,
    ACTIONS(15), 2,
      anon_sym_yards,
      anon_sym_yd,
    ACTIONS(19), 2,
      anon_sym_meter,
      anon_sym_m,
    ACTIONS(25), 2,
      anon_sym_kilometers,
      anon_sym_km,
    ACTIONS(17), 3,
      anon_sym_foot,
      anon_sym_feet,
      anon_sym_ft,
    ACTIONS(27), 3,
      sym_seconds,
      sym_minutes,
      sym_hours,
    STATE(16), 6,
      sym__unitLength,
      sym_miles,
      sym_yards,
      sym_feet,
      sym_meter,
      sym_kilometer,
  [53] = 12,
    ACTIONS(11), 1,
      anon_sym_miles,
    ACTIONS(13), 1,
      anon_sym_yard,
    ACTIONS(21), 1,
      anon_sym_meters,
    ACTIONS(23), 1,
      anon_sym_kilometer,
    STATE(17), 1,
      sym__unitDuration,
    ACTIONS(9), 2,
      anon_sym_mile,
      anon_sym_mi,
    ACTIONS(15), 2,
      anon_sym_yards,
      anon_sym_yd,
    ACTIONS(19), 2,
      anon_sym_meter,
      anon_sym_m,
    ACTIONS(25), 2,
      anon_sym_kilometers,
      anon_sym_km,
    ACTIONS(17), 3,
      anon_sym_foot,
      anon_sym_feet,
      anon_sym_ft,
    ACTIONS(27), 3,
      sym_seconds,
      sym_minutes,
      sym_hours,
    STATE(16), 6,
      sym__unitLength,
      sym_miles,
      sym_yards,
      sym_feet,
      sym_meter,
      sym_kilometer,
  [103] = 10,
    ACTIONS(11), 1,
      anon_sym_miles,
    ACTIONS(13), 1,
      anon_sym_yard,
    ACTIONS(21), 1,
      anon_sym_meters,
    ACTIONS(23), 1,
      anon_sym_kilometer,
    ACTIONS(9), 2,
      anon_sym_mile,
      anon_sym_mi,
    ACTIONS(15), 2,
      anon_sym_yards,
      anon_sym_yd,
    ACTIONS(19), 2,
      anon_sym_meter,
      anon_sym_m,
    ACTIONS(25), 2,
      anon_sym_kilometers,
      anon_sym_km,
    ACTIONS(17), 3,
      anon_sym_foot,
      anon_sym_feet,
      anon_sym_ft,
    STATE(12), 6,
      sym__unitLength,
      sym_miles,
      sym_yards,
      sym_feet,
      sym_meter,
      sym_kilometer,
  [145] = 5,
    ACTIONS(31), 1,
      sym_paceTime,
    STATE(15), 1,
      sym_pace,
    STATE(20), 1,
      sym_alert,
    STATE(21), 3,
      sym_heartRateAlert,
      sym_paceThresholdAlert,
      sym_paceRangeAlert,
    ACTIONS(29), 5,
      sym_z1,
      sym_z2,
      sym_z3,
      sym_z4,
      sym_z5,
  [167] = 7,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      sym_number,
    STATE(25), 1,
      sym_workoutStep,
    STATE(34), 1,
      sym_intervalBlock,
    STATE(35), 1,
      sym_intervalStep,
    STATE(38), 1,
      sym_intervalReps,
    STATE(14), 3,
      sym__goal,
      sym_distanceGoal,
      sym_durationGoal,
  [191] = 1,
    ACTIONS(33), 8,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      anon_sym_recovery,
      anon_sym_AT,
      anon_sym_DASH,
  [202] = 1,
    ACTIONS(35), 8,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      anon_sym_recovery,
      anon_sym_AT,
      anon_sym_DASH,
  [213] = 1,
    ACTIONS(37), 8,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      anon_sym_recovery,
      anon_sym_AT,
      anon_sym_DASH,
  [224] = 1,
    ACTIONS(39), 8,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      anon_sym_recovery,
      anon_sym_AT,
      anon_sym_DASH,
  [235] = 1,
    ACTIONS(41), 8,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      anon_sym_recovery,
      anon_sym_AT,
      anon_sym_DASH,
  [246] = 1,
    ACTIONS(43), 7,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      anon_sym_recovery,
      anon_sym_DASH,
  [256] = 5,
    ACTIONS(45), 1,
      sym_number,
    STATE(25), 1,
      sym_workoutStep,
    STATE(30), 1,
      sym_intervalStep,
    STATE(44), 1,
      sym_intervalReps,
    STATE(14), 3,
      sym__goal,
      sym_distanceGoal,
      sym_durationGoal,
  [274] = 2,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(47), 6,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      anon_sym_recovery,
  [286] = 2,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(51), 6,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      anon_sym_recovery,
  [298] = 1,
    ACTIONS(55), 7,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      anon_sym_recovery,
      anon_sym_AT,
  [308] = 1,
    ACTIONS(57), 7,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      anon_sym_recovery,
      anon_sym_AT,
  [318] = 5,
    ACTIONS(45), 1,
      sym_number,
    STATE(25), 1,
      sym_workoutStep,
    STATE(30), 1,
      sym_intervalStep,
    STATE(42), 1,
      sym_intervalReps,
    STATE(14), 3,
      sym__goal,
      sym_distanceGoal,
      sym_durationGoal,
  [336] = 1,
    ACTIONS(59), 6,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      anon_sym_recovery,
  [345] = 1,
    ACTIONS(61), 6,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      anon_sym_recovery,
  [354] = 1,
    ACTIONS(63), 6,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      anon_sym_recovery,
  [363] = 4,
    ACTIONS(45), 1,
      sym_number,
    STATE(25), 1,
      sym_workoutStep,
    STATE(33), 1,
      sym_intervalStep,
    STATE(14), 3,
      sym__goal,
      sym_distanceGoal,
      sym_durationGoal,
  [378] = 1,
    ACTIONS(65), 6,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      anon_sym_recovery,
  [387] = 3,
    ACTIONS(45), 1,
      sym_number,
    STATE(48), 1,
      sym_workoutStep,
    STATE(14), 3,
      sym__goal,
      sym_distanceGoal,
      sym_durationGoal,
  [399] = 2,
    ACTIONS(69), 1,
      anon_sym_recovery,
    ACTIONS(67), 3,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [408] = 3,
    ACTIONS(73), 1,
      anon_sym_PLUS,
    STATE(26), 1,
      aux_sym_intervalReps_repeat1,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [419] = 3,
    ACTIONS(69), 1,
      anon_sym_recovery,
    ACTIONS(76), 1,
      anon_sym_warmup,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [430] = 3,
    ACTIONS(78), 1,
      anon_sym_PLUS,
    ACTIONS(80), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      aux_sym_intervalReps_repeat1,
  [440] = 1,
    ACTIONS(82), 3,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [446] = 3,
    ACTIONS(78), 1,
      anon_sym_PLUS,
    ACTIONS(84), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_intervalReps_repeat1,
  [456] = 3,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 1,
      anon_sym_PLUS,
    STATE(49), 1,
      sym_cooldownStep,
  [466] = 2,
    STATE(26), 1,
      aux_sym_intervalReps_repeat1,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [474] = 1,
    ACTIONS(71), 3,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [480] = 3,
    ACTIONS(88), 1,
      anon_sym_PLUS,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    STATE(41), 1,
      sym_cooldownStep,
  [490] = 2,
    STATE(32), 1,
      aux_sym_intervalReps_repeat1,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [498] = 2,
    ACTIONS(31), 1,
      sym_paceTime,
    STATE(23), 1,
      sym_pace,
  [505] = 1,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [510] = 1,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [515] = 1,
    ACTIONS(96), 2,
      anon_sym_LPAREN,
      sym_number,
  [520] = 1,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [525] = 1,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
  [529] = 1,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
  [533] = 1,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
  [537] = 1,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
  [541] = 1,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
  [545] = 1,
    ACTIONS(110), 1,
      anon_sym_PLUS,
  [549] = 1,
    ACTIONS(112), 1,
      anon_sym_SLASH,
  [553] = 1,
    ACTIONS(114), 1,
      anon_sym_cooldown,
  [557] = 1,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
  [561] = 1,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 53,
  [SMALL_STATE(4)] = 103,
  [SMALL_STATE(5)] = 145,
  [SMALL_STATE(6)] = 167,
  [SMALL_STATE(7)] = 191,
  [SMALL_STATE(8)] = 202,
  [SMALL_STATE(9)] = 213,
  [SMALL_STATE(10)] = 224,
  [SMALL_STATE(11)] = 235,
  [SMALL_STATE(12)] = 246,
  [SMALL_STATE(13)] = 256,
  [SMALL_STATE(14)] = 274,
  [SMALL_STATE(15)] = 286,
  [SMALL_STATE(16)] = 298,
  [SMALL_STATE(17)] = 308,
  [SMALL_STATE(18)] = 318,
  [SMALL_STATE(19)] = 336,
  [SMALL_STATE(20)] = 345,
  [SMALL_STATE(21)] = 354,
  [SMALL_STATE(22)] = 363,
  [SMALL_STATE(23)] = 378,
  [SMALL_STATE(24)] = 387,
  [SMALL_STATE(25)] = 399,
  [SMALL_STATE(26)] = 408,
  [SMALL_STATE(27)] = 419,
  [SMALL_STATE(28)] = 430,
  [SMALL_STATE(29)] = 440,
  [SMALL_STATE(30)] = 446,
  [SMALL_STATE(31)] = 456,
  [SMALL_STATE(32)] = 466,
  [SMALL_STATE(33)] = 474,
  [SMALL_STATE(34)] = 480,
  [SMALL_STATE(35)] = 490,
  [SMALL_STATE(36)] = 498,
  [SMALL_STATE(37)] = 505,
  [SMALL_STATE(38)] = 510,
  [SMALL_STATE(39)] = 515,
  [SMALL_STATE(40)] = 520,
  [SMALL_STATE(41)] = 525,
  [SMALL_STATE(42)] = 529,
  [SMALL_STATE(43)] = 533,
  [SMALL_STATE(44)] = 537,
  [SMALL_STATE(45)] = 541,
  [SMALL_STATE(46)] = 545,
  [SMALL_STATE(47)] = 549,
  [SMALL_STATE(48)] = 553,
  [SMALL_STATE(49)] = 557,
  [SMALL_STATE(50)] = 561,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kilometer, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meter, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feet, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yards, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_miles, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pace, 3, .production_id = 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workoutStep, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paceThresholdAlert, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_distanceGoal, 2, .production_id = 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_durationGoal, 2, .production_id = 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heartRateAlert, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workoutStep, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alert, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paceRangeAlert, 3, .production_id = 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intervalStep, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_intervalReps_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_intervalReps_repeat1, 2), SHIFT_REPEAT(22),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intervalReps, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intervalStep, 2, .production_id = 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intervalReps, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workout, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workout, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intervalBlock, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intervalBlock, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warmupStep, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intervalBlock, 5),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workout, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cooldownStep, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [116] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
