#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 45
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_warmup = 1,
  anon_sym_PLUS = 2,
  anon_sym_cooldown = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_x = 6,
  anon_sym_recovery = 7,
  anon_sym_AT = 8,
  anon_sym_z1 = 9,
  anon_sym_z2 = 10,
  anon_sym_z3 = 11,
  anon_sym_z4 = 12,
  anon_sym_z5 = 13,
  anon_sym_SLASH = 14,
  sym_paceTime = 15,
  anon_sym_run = 16,
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
  anon_sym_min = 33,
  anon_sym_hr = 34,
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
  sym_paceAlert = 45,
  sym_goal = 46,
  sym_unitLength = 47,
  sym_unitDuration = 48,
  aux_sym_intervalReps_repeat1 = 49,
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
  [anon_sym_z1] = "z1",
  [anon_sym_z2] = "z2",
  [anon_sym_z3] = "z3",
  [anon_sym_z4] = "z4",
  [anon_sym_z5] = "z5",
  [anon_sym_SLASH] = "/",
  [sym_paceTime] = "paceTime",
  [anon_sym_run] = "run",
  [anon_sym_mile] = "miles",
  [anon_sym_miles] = "miles",
  [anon_sym_mi] = "miles",
  [anon_sym_yard] = "yards",
  [anon_sym_yards] = "yards",
  [anon_sym_yd] = "yards",
  [anon_sym_foot] = "feet",
  [anon_sym_feet] = "feet",
  [anon_sym_ft] = "feet",
  [anon_sym_meter] = "meter",
  [anon_sym_meters] = "meter",
  [anon_sym_m] = "meter",
  [anon_sym_kilometer] = "kilometer",
  [anon_sym_kilometers] = "kilometer",
  [anon_sym_km] = "kilometer",
  [anon_sym_sec] = "sec",
  [anon_sym_min] = "min",
  [anon_sym_hr] = "hr",
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
  [sym_paceAlert] = "paceAlert",
  [sym_goal] = "goal",
  [sym_unitLength] = "unitLength",
  [sym_unitDuration] = "unitDuration",
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
  [anon_sym_z1] = anon_sym_z1,
  [anon_sym_z2] = anon_sym_z2,
  [anon_sym_z3] = anon_sym_z3,
  [anon_sym_z4] = anon_sym_z4,
  [anon_sym_z5] = anon_sym_z5,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_paceTime] = sym_paceTime,
  [anon_sym_run] = anon_sym_run,
  [anon_sym_mile] = anon_sym_mile,
  [anon_sym_miles] = anon_sym_mile,
  [anon_sym_mi] = anon_sym_mile,
  [anon_sym_yard] = anon_sym_yard,
  [anon_sym_yards] = anon_sym_yard,
  [anon_sym_yd] = anon_sym_yard,
  [anon_sym_foot] = anon_sym_foot,
  [anon_sym_feet] = anon_sym_foot,
  [anon_sym_ft] = anon_sym_foot,
  [anon_sym_meter] = anon_sym_meter,
  [anon_sym_meters] = anon_sym_meter,
  [anon_sym_m] = anon_sym_meter,
  [anon_sym_kilometer] = anon_sym_kilometer,
  [anon_sym_kilometers] = anon_sym_kilometer,
  [anon_sym_km] = anon_sym_kilometer,
  [anon_sym_sec] = anon_sym_sec,
  [anon_sym_min] = anon_sym_min,
  [anon_sym_hr] = anon_sym_hr,
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
  [sym_paceAlert] = sym_paceAlert,
  [sym_goal] = sym_goal,
  [sym_unitLength] = sym_unitLength,
  [sym_unitDuration] = sym_unitDuration,
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
  [anon_sym_z1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_z2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_z3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_z4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_z5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_paceTime] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_run] = {
    .visible = true,
    .named = false,
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
  [anon_sym_min] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hr] = {
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
  [sym_paceAlert] = {
    .visible = true,
    .named = true,
  },
  [sym_goal] = {
    .visible = true,
    .named = true,
  },
  [sym_unitLength] = {
    .visible = true,
    .named = true,
  },
  [sym_unitDuration] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_intervalReps_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_purpose = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_purpose] = "purpose",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_purpose, 1},
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
  [28] = 24,
  [29] = 29,
  [30] = 26,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(52);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(57);
      if (lookahead == '+') ADVANCE(54);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'h') ADVANCE(33);
      if (lookahead == 'k') ADVANCE(19);
      if (lookahead == 'm') ADVANCE(80);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead == 'w') ADVANCE(4);
      if (lookahead == 'x') ADVANCE(58);
      if (lookahead == 'y') ADVANCE(5);
      if (lookahead == 'z') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 2:
      if (lookahead == '1') ADVANCE(61);
      if (lookahead == '2') ADVANCE(62);
      if (lookahead == '3') ADVANCE(63);
      if (lookahead == '4') ADVANCE(64);
      if (lookahead == '5') ADVANCE(65);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(7);
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 45:
      if (lookahead == 'v') ADVANCE(16);
      END_STATE();
    case 46:
      if (lookahead == 'w') ADVANCE(25);
      END_STATE();
    case 47:
      if (lookahead == 'y') ADVANCE(59);
      END_STATE();
    case 48:
      if (lookahead == 'z') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_warmup);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_cooldown);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_recovery);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_z1);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_z2);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_z3);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_z4);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_z5);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_paceTime);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_mile);
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_miles);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_mi);
      if (lookahead == 'l') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_yard);
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_yards);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_yd);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_foot);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_feet);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_ft);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_meter);
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_meters);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_kilometer);
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_kilometers);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_km);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_sec);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_hr);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == ':') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
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
  [5] = {.lex_state = 48},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
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
    [anon_sym_z1] = ACTIONS(1),
    [anon_sym_z2] = ACTIONS(1),
    [anon_sym_z3] = ACTIONS(1),
    [anon_sym_z4] = ACTIONS(1),
    [anon_sym_z5] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_paceTime] = ACTIONS(1),
    [anon_sym_run] = ACTIONS(1),
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
    [anon_sym_min] = ACTIONS(1),
    [anon_sym_hr] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_workout] = STATE(40),
    [sym_warmupStep] = STATE(6),
    [sym_intervalBlock] = STATE(29),
    [sym_intervalReps] = STATE(34),
    [sym_intervalStep] = STATE(24),
    [sym_workoutStep] = STATE(20),
    [sym_goal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_run] = ACTIONS(5),
    [sym_number] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(9), 1,
      anon_sym_x,
    STATE(7), 2,
      sym_unitLength,
      sym_unitDuration,
    ACTIONS(15), 3,
      anon_sym_sec,
      anon_sym_min,
      anon_sym_hr,
    ACTIONS(11), 6,
      anon_sym_mile,
      anon_sym_mi,
      anon_sym_yard,
      anon_sym_meter,
      anon_sym_m,
      anon_sym_kilometer,
    ACTIONS(13), 9,
      anon_sym_miles,
      anon_sym_yards,
      anon_sym_yd,
      anon_sym_foot,
      anon_sym_feet,
      anon_sym_ft,
      anon_sym_meters,
      anon_sym_kilometers,
      anon_sym_km,
  [32] = 4,
    STATE(7), 2,
      sym_unitLength,
      sym_unitDuration,
    ACTIONS(15), 3,
      anon_sym_sec,
      anon_sym_min,
      anon_sym_hr,
    ACTIONS(11), 6,
      anon_sym_mile,
      anon_sym_mi,
      anon_sym_yard,
      anon_sym_meter,
      anon_sym_m,
      anon_sym_kilometer,
    ACTIONS(13), 9,
      anon_sym_miles,
      anon_sym_yards,
      anon_sym_yd,
      anon_sym_foot,
      anon_sym_feet,
      anon_sym_ft,
      anon_sym_meters,
      anon_sym_kilometers,
      anon_sym_km,
  [61] = 3,
    STATE(13), 1,
      sym_unitLength,
    ACTIONS(11), 6,
      anon_sym_mile,
      anon_sym_mi,
      anon_sym_yard,
      anon_sym_meter,
      anon_sym_m,
      anon_sym_kilometer,
    ACTIONS(13), 9,
      anon_sym_miles,
      anon_sym_yards,
      anon_sym_yd,
      anon_sym_foot,
      anon_sym_feet,
      anon_sym_ft,
      anon_sym_meters,
      anon_sym_kilometers,
      anon_sym_km,
  [84] = 4,
    ACTIONS(19), 1,
      sym_paceTime,
    STATE(15), 1,
      sym_alert,
    STATE(14), 2,
      sym_heartRateAlert,
      sym_paceAlert,
    ACTIONS(17), 5,
      anon_sym_z1,
      anon_sym_z2,
      anon_sym_z3,
      anon_sym_z4,
      anon_sym_z5,
  [102] = 8,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_run,
    ACTIONS(7), 1,
      sym_number,
    STATE(9), 1,
      sym_goal,
    STATE(19), 1,
      sym_workoutStep,
    STATE(24), 1,
      sym_intervalStep,
    STATE(27), 1,
      sym_intervalBlock,
    STATE(34), 1,
      sym_intervalReps,
  [127] = 1,
    ACTIONS(21), 7,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      anon_sym_recovery,
      anon_sym_AT,
  [137] = 1,
    ACTIONS(23), 7,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      anon_sym_recovery,
      anon_sym_AT,
  [147] = 2,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(25), 6,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      anon_sym_recovery,
  [159] = 1,
    ACTIONS(29), 7,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      anon_sym_recovery,
      anon_sym_AT,
  [169] = 1,
    ACTIONS(31), 7,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      anon_sym_recovery,
      anon_sym_AT,
  [179] = 6,
    ACTIONS(5), 1,
      anon_sym_run,
    ACTIONS(33), 1,
      sym_number,
    STATE(9), 1,
      sym_goal,
    STATE(19), 1,
      sym_workoutStep,
    STATE(28), 1,
      sym_intervalStep,
    STATE(35), 1,
      sym_intervalReps,
  [198] = 1,
    ACTIONS(35), 6,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      anon_sym_recovery,
  [207] = 1,
    ACTIONS(37), 6,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      anon_sym_recovery,
  [216] = 1,
    ACTIONS(39), 6,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      anon_sym_recovery,
  [225] = 1,
    ACTIONS(41), 6,
      ts_builtin_sym_end,
      anon_sym_warmup,
      anon_sym_PLUS,
      anon_sym_cooldown,
      anon_sym_RPAREN,
      anon_sym_recovery,
  [234] = 6,
    ACTIONS(5), 1,
      anon_sym_run,
    ACTIONS(33), 1,
      sym_number,
    STATE(9), 1,
      sym_goal,
    STATE(19), 1,
      sym_workoutStep,
    STATE(28), 1,
      sym_intervalStep,
    STATE(38), 1,
      sym_intervalReps,
  [253] = 5,
    ACTIONS(5), 1,
      anon_sym_run,
    ACTIONS(33), 1,
      sym_number,
    STATE(9), 1,
      sym_goal,
    STATE(19), 1,
      sym_workoutStep,
    STATE(23), 1,
      sym_intervalStep,
  [269] = 2,
    ACTIONS(45), 1,
      anon_sym_recovery,
    ACTIONS(43), 3,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [278] = 3,
    ACTIONS(45), 1,
      anon_sym_recovery,
    ACTIONS(47), 1,
      anon_sym_warmup,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [289] = 4,
    ACTIONS(5), 1,
      anon_sym_run,
    ACTIONS(33), 1,
      sym_number,
    STATE(9), 1,
      sym_goal,
    STATE(43), 1,
      sym_workoutStep,
  [302] = 3,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    STATE(22), 1,
      aux_sym_intervalReps_repeat1,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [313] = 1,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [319] = 2,
    STATE(30), 1,
      aux_sym_intervalReps_repeat1,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [327] = 1,
    ACTIONS(56), 3,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [333] = 3,
    ACTIONS(58), 1,
      anon_sym_PLUS,
    ACTIONS(60), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      aux_sym_intervalReps_repeat1,
  [343] = 3,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 1,
      anon_sym_PLUS,
    STATE(44), 1,
      sym_cooldownStep,
  [353] = 3,
    ACTIONS(54), 1,
      anon_sym_RPAREN,
    ACTIONS(58), 1,
      anon_sym_PLUS,
    STATE(26), 1,
      aux_sym_intervalReps_repeat1,
  [363] = 3,
    ACTIONS(64), 1,
      anon_sym_PLUS,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_cooldownStep,
  [373] = 2,
    STATE(22), 1,
      aux_sym_intervalReps_repeat1,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [381] = 1,
    ACTIONS(68), 3,
      anon_sym_LPAREN,
      anon_sym_run,
      sym_number,
  [387] = 1,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [392] = 1,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [397] = 1,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [402] = 1,
    ACTIONS(76), 1,
      anon_sym_RPAREN,
  [406] = 1,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
  [410] = 1,
    ACTIONS(78), 1,
      anon_sym_SLASH,
  [414] = 1,
    ACTIONS(80), 1,
      anon_sym_RPAREN,
  [418] = 1,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
  [422] = 1,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
  [426] = 1,
    ACTIONS(86), 1,
      anon_sym_PLUS,
  [430] = 1,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
  [434] = 1,
    ACTIONS(90), 1,
      anon_sym_cooldown,
  [438] = 1,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 61,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 102,
  [SMALL_STATE(7)] = 127,
  [SMALL_STATE(8)] = 137,
  [SMALL_STATE(9)] = 147,
  [SMALL_STATE(10)] = 159,
  [SMALL_STATE(11)] = 169,
  [SMALL_STATE(12)] = 179,
  [SMALL_STATE(13)] = 198,
  [SMALL_STATE(14)] = 207,
  [SMALL_STATE(15)] = 216,
  [SMALL_STATE(16)] = 225,
  [SMALL_STATE(17)] = 234,
  [SMALL_STATE(18)] = 253,
  [SMALL_STATE(19)] = 269,
  [SMALL_STATE(20)] = 278,
  [SMALL_STATE(21)] = 289,
  [SMALL_STATE(22)] = 302,
  [SMALL_STATE(23)] = 313,
  [SMALL_STATE(24)] = 319,
  [SMALL_STATE(25)] = 327,
  [SMALL_STATE(26)] = 333,
  [SMALL_STATE(27)] = 343,
  [SMALL_STATE(28)] = 353,
  [SMALL_STATE(29)] = 363,
  [SMALL_STATE(30)] = 373,
  [SMALL_STATE(31)] = 381,
  [SMALL_STATE(32)] = 387,
  [SMALL_STATE(33)] = 392,
  [SMALL_STATE(34)] = 397,
  [SMALL_STATE(35)] = 402,
  [SMALL_STATE(36)] = 406,
  [SMALL_STATE(37)] = 410,
  [SMALL_STATE(38)] = 414,
  [SMALL_STATE(39)] = 418,
  [SMALL_STATE(40)] = 422,
  [SMALL_STATE(41)] = 426,
  [SMALL_STATE(42)] = 430,
  [SMALL_STATE(43)] = 434,
  [SMALL_STATE(44)] = 438,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workoutStep, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unitLength, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unitDuration, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paceAlert, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alert, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workoutStep, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heartRateAlert, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intervalStep, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_intervalReps_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_intervalReps_repeat1, 2), SHIFT_REPEAT(18),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intervalReps, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intervalStep, 2, .production_id = 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intervalReps, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workout, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workout, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warmupStep, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intervalBlock, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intervalBlock, 5),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intervalBlock, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cooldownStep, 3),
  [84] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workout, 3),
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

TS_PUBLIC const TSLanguage *tree_sitter_workoutlang() {
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
