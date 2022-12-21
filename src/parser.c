#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 145
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 76
#define ALIAS_COUNT 3
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_Alias = 1,
  anon_sym_COLON = 2,
  anon_sym_EQ = 3,
  anon_sym_Profile = 4,
  anon_sym_Extension = 5,
  anon_sym_Invariant = 6,
  anon_sym_Instance = 7,
  anon_sym_ValueSet = 8,
  anon_sym_CodeSystem = 9,
  anon_sym_Mapping = 10,
  anon_sym_Logical = 11,
  anon_sym_Resource = 12,
  anon_sym_Parent = 13,
  anon_sym_Id = 14,
  anon_sym_STAR = 15,
  anon_sym_from = 16,
  anon_sym_LPAREN = 17,
  anon_sym_exactly = 18,
  anon_sym_RPAREN = 19,
  anon_sym_contains = 20,
  anon_sym_and = 21,
  anon_sym_obeys = 22,
  anon_sym_POUND = 23,
  aux_sym_sequence_token1 = 24,
  anon_sym_CARET = 25,
  aux_sym_cardinality_token1 = 26,
  anon_sym_DOT_DOT = 27,
  anon_sym_STAR2 = 28,
  anon_sym_DQUOTE = 29,
  sym_double_quote_string_fragment = 30,
  anon_sym_system = 31,
  anon_sym_example = 32,
  anon_sym_preferred = 33,
  anon_sym_extensible = 34,
  anon_sym_required = 35,
  anon_sym_named = 36,
  sym_doc = 37,
  sym_alias = 38,
  sym_profile = 39,
  sym_extension = 40,
  sym_invariant = 41,
  sym_instance = 42,
  sym_valueset = 43,
  sym_codesystem = 44,
  sym_mapping = 45,
  sym_logical = 46,
  sym_resource = 47,
  sym_sd_metadata = 48,
  sym_parent = 49,
  sym_id = 50,
  sym_sd_rule = 51,
  sym_cardinality_rule = 52,
  sym_valueset_rule = 53,
  sym_fixed_value_rule = 54,
  sym_contains_rule = 55,
  sym_caret_value_rule = 56,
  sym_obeys_rule = 57,
  sym_path_rule = 58,
  sym_code = 59,
  sym_sequence = 60,
  sym_caret_path = 61,
  sym_name = 62,
  sym_cardinality = 63,
  sym_string = 64,
  sym_path = 65,
  sym_strength = 66,
  sym_value = 67,
  sym_item = 68,
  aux_sym_doc_repeat1 = 69,
  aux_sym_profile_repeat1 = 70,
  aux_sym_profile_repeat2 = 71,
  aux_sym_contains_rule_repeat1 = 72,
  aux_sym_obeys_rule_repeat1 = 73,
  aux_sym_sequence_repeat1 = 74,
  aux_sym_string_repeat1 = 75,
  alias_sym_alias_name = 76,
  alias_sym_code_system = 77,
  alias_sym_code_value = 78,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_Alias] = "Alias",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_Profile] = "Profile",
  [anon_sym_Extension] = "Extension",
  [anon_sym_Invariant] = "Invariant",
  [anon_sym_Instance] = "Instance",
  [anon_sym_ValueSet] = "ValueSet",
  [anon_sym_CodeSystem] = "CodeSystem",
  [anon_sym_Mapping] = "Mapping",
  [anon_sym_Logical] = "Logical",
  [anon_sym_Resource] = "Resource",
  [anon_sym_Parent] = "Parent",
  [anon_sym_Id] = "Id",
  [anon_sym_STAR] = "*",
  [anon_sym_from] = "from",
  [anon_sym_LPAREN] = "(",
  [anon_sym_exactly] = "exactly",
  [anon_sym_RPAREN] = ")",
  [anon_sym_contains] = "contains",
  [anon_sym_and] = "and",
  [anon_sym_obeys] = "obeys",
  [anon_sym_POUND] = "#",
  [aux_sym_sequence_token1] = "sequence_token1",
  [anon_sym_CARET] = "^",
  [aux_sym_cardinality_token1] = "cardinality_token1",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_STAR2] = "*",
  [anon_sym_DQUOTE] = "\"",
  [sym_double_quote_string_fragment] = "double_quote_string_fragment",
  [anon_sym_system] = "system",
  [anon_sym_example] = "example",
  [anon_sym_preferred] = "preferred",
  [anon_sym_extensible] = "extensible",
  [anon_sym_required] = "required",
  [anon_sym_named] = "named",
  [sym_doc] = "doc",
  [sym_alias] = "alias",
  [sym_profile] = "profile",
  [sym_extension] = "extension",
  [sym_invariant] = "invariant",
  [sym_instance] = "instance",
  [sym_valueset] = "valueset",
  [sym_codesystem] = "codesystem",
  [sym_mapping] = "mapping",
  [sym_logical] = "logical",
  [sym_resource] = "resource",
  [sym_sd_metadata] = "sd_metadata",
  [sym_parent] = "parent",
  [sym_id] = "id",
  [sym_sd_rule] = "sd_rule",
  [sym_cardinality_rule] = "cardinality_rule",
  [sym_valueset_rule] = "valueset_rule",
  [sym_fixed_value_rule] = "fixed_value_rule",
  [sym_contains_rule] = "contains_rule",
  [sym_caret_value_rule] = "caret_value_rule",
  [sym_obeys_rule] = "obeys_rule",
  [sym_path_rule] = "path_rule",
  [sym_code] = "code",
  [sym_sequence] = "sequence",
  [sym_caret_path] = "caret_path",
  [sym_name] = "name",
  [sym_cardinality] = "cardinality",
  [sym_string] = "string",
  [sym_path] = "path",
  [sym_strength] = "strength",
  [sym_value] = "value",
  [sym_item] = "item",
  [aux_sym_doc_repeat1] = "doc_repeat1",
  [aux_sym_profile_repeat1] = "profile_repeat1",
  [aux_sym_profile_repeat2] = "profile_repeat2",
  [aux_sym_contains_rule_repeat1] = "contains_rule_repeat1",
  [aux_sym_obeys_rule_repeat1] = "obeys_rule_repeat1",
  [aux_sym_sequence_repeat1] = "sequence_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [alias_sym_alias_name] = "alias_name",
  [alias_sym_code_system] = "code_system",
  [alias_sym_code_value] = "code_value",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_Alias] = anon_sym_Alias,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_Profile] = anon_sym_Profile,
  [anon_sym_Extension] = anon_sym_Extension,
  [anon_sym_Invariant] = anon_sym_Invariant,
  [anon_sym_Instance] = anon_sym_Instance,
  [anon_sym_ValueSet] = anon_sym_ValueSet,
  [anon_sym_CodeSystem] = anon_sym_CodeSystem,
  [anon_sym_Mapping] = anon_sym_Mapping,
  [anon_sym_Logical] = anon_sym_Logical,
  [anon_sym_Resource] = anon_sym_Resource,
  [anon_sym_Parent] = anon_sym_Parent,
  [anon_sym_Id] = anon_sym_Id,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_exactly] = anon_sym_exactly,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_contains] = anon_sym_contains,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_obeys] = anon_sym_obeys,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_sequence_token1] = aux_sym_sequence_token1,
  [anon_sym_CARET] = anon_sym_CARET,
  [aux_sym_cardinality_token1] = aux_sym_cardinality_token1,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_STAR2] = anon_sym_STAR,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_double_quote_string_fragment] = sym_double_quote_string_fragment,
  [anon_sym_system] = anon_sym_system,
  [anon_sym_example] = anon_sym_example,
  [anon_sym_preferred] = anon_sym_preferred,
  [anon_sym_extensible] = anon_sym_extensible,
  [anon_sym_required] = anon_sym_required,
  [anon_sym_named] = anon_sym_named,
  [sym_doc] = sym_doc,
  [sym_alias] = sym_alias,
  [sym_profile] = sym_profile,
  [sym_extension] = sym_extension,
  [sym_invariant] = sym_invariant,
  [sym_instance] = sym_instance,
  [sym_valueset] = sym_valueset,
  [sym_codesystem] = sym_codesystem,
  [sym_mapping] = sym_mapping,
  [sym_logical] = sym_logical,
  [sym_resource] = sym_resource,
  [sym_sd_metadata] = sym_sd_metadata,
  [sym_parent] = sym_parent,
  [sym_id] = sym_id,
  [sym_sd_rule] = sym_sd_rule,
  [sym_cardinality_rule] = sym_cardinality_rule,
  [sym_valueset_rule] = sym_valueset_rule,
  [sym_fixed_value_rule] = sym_fixed_value_rule,
  [sym_contains_rule] = sym_contains_rule,
  [sym_caret_value_rule] = sym_caret_value_rule,
  [sym_obeys_rule] = sym_obeys_rule,
  [sym_path_rule] = sym_path_rule,
  [sym_code] = sym_code,
  [sym_sequence] = sym_sequence,
  [sym_caret_path] = sym_caret_path,
  [sym_name] = sym_name,
  [sym_cardinality] = sym_cardinality,
  [sym_string] = sym_string,
  [sym_path] = sym_path,
  [sym_strength] = sym_strength,
  [sym_value] = sym_value,
  [sym_item] = sym_item,
  [aux_sym_doc_repeat1] = aux_sym_doc_repeat1,
  [aux_sym_profile_repeat1] = aux_sym_profile_repeat1,
  [aux_sym_profile_repeat2] = aux_sym_profile_repeat2,
  [aux_sym_contains_rule_repeat1] = aux_sym_contains_rule_repeat1,
  [aux_sym_obeys_rule_repeat1] = aux_sym_obeys_rule_repeat1,
  [aux_sym_sequence_repeat1] = aux_sym_sequence_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [alias_sym_alias_name] = alias_sym_alias_name,
  [alias_sym_code_system] = alias_sym_code_system,
  [alias_sym_code_value] = alias_sym_code_value,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_Alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Profile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Extension] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Invariant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Instance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ValueSet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CodeSystem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Mapping] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Logical] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Resource] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Parent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Id] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exactly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contains] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_obeys] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_cardinality_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_double_quote_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_system] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_example] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_preferred] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extensible] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_required] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_named] = {
    .visible = true,
    .named = false,
  },
  [sym_doc] = {
    .visible = true,
    .named = true,
  },
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_profile] = {
    .visible = true,
    .named = true,
  },
  [sym_extension] = {
    .visible = true,
    .named = true,
  },
  [sym_invariant] = {
    .visible = true,
    .named = true,
  },
  [sym_instance] = {
    .visible = true,
    .named = true,
  },
  [sym_valueset] = {
    .visible = true,
    .named = true,
  },
  [sym_codesystem] = {
    .visible = true,
    .named = true,
  },
  [sym_mapping] = {
    .visible = true,
    .named = true,
  },
  [sym_logical] = {
    .visible = true,
    .named = true,
  },
  [sym_resource] = {
    .visible = true,
    .named = true,
  },
  [sym_sd_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_parent] = {
    .visible = true,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym_sd_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_cardinality_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_valueset_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_fixed_value_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_contains_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_caret_value_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_obeys_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_path_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_caret_path] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_cardinality] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_strength] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_item] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_doc_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_profile_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_profile_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_contains_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_obeys_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sequence_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_alias_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_code_system] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_code_value] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [2] = alias_sym_alias_name,
  },
  [2] = {
    [1] = alias_sym_code_value,
  },
  [3] = {
    [0] = alias_sym_code_system,
    [2] = alias_sym_code_value,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_sequence, 4,
    sym_sequence,
    alias_sym_alias_name,
    alias_sym_code_system,
    alias_sym_code_value,
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
  [21] = 15,
  [22] = 22,
  [23] = 10,
  [24] = 11,
  [25] = 11,
  [26] = 10,
  [27] = 27,
  [28] = 10,
  [29] = 29,
  [30] = 11,
  [31] = 11,
  [32] = 10,
  [33] = 33,
  [34] = 34,
  [35] = 11,
  [36] = 11,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 10,
  [44] = 10,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 11,
  [51] = 10,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 10,
  [84] = 84,
  [85] = 85,
  [86] = 11,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 91,
  [93] = 10,
  [94] = 11,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 90,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 10,
  [107] = 11,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 10,
  [117] = 117,
  [118] = 118,
  [119] = 11,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 138,
  [143] = 123,
  [144] = 144,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(148);
      if (lookahead == '"') ADVANCE(198);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == ')') ADVANCE(167);
      if (lookahead == '*') ADVANCE(197);
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == '=') ADVANCE(151);
      if (lookahead == 'A') ADVANCE(183);
      if (lookahead == 'C') ADVANCE(186);
      if (lookahead == 'E') ADVANCE(191);
      if (lookahead == 'I') ADVANCE(181);
      if (lookahead == 'L') ADVANCE(187);
      if (lookahead == 'M') ADVANCE(174);
      if (lookahead == 'P') ADVANCE(176);
      if (lookahead == 'R') ADVANCE(182);
      if (lookahead == 'V') ADVANCE(177);
      if (lookahead == '^') ADVANCE(194);
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == 'c') ADVANCE(188);
      if (lookahead == 'f') ADVANCE(190);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead == 'o') ADVANCE(179);
      if (lookahead == 's') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(172);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(172);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(200);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(172);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(172);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(172);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(196);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(172);
      END_STATE();
    case 8:
      if (lookahead == 'I') ADVANCE(180);
      if (lookahead == 'P') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(172);
      END_STATE();
    case 9:
      if (lookahead == 'S') ADVANCE(50);
      END_STATE();
    case 10:
      if (lookahead == 'S') ADVANCE(136);
      END_STATE();
    case 11:
      if (lookahead == '^') ADVANCE(194);
      if (lookahead == 'o') ADVANCE(179);
      if (lookahead == 's') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(172);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(75);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(126);
      if (lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(162);
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(206);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(205);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 56:
      if (lookahead == 'f') ADVANCE(62);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(53);
      END_STATE();
    case 58:
      if (lookahead == 'g') ADVANCE(158);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(61);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(164);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(201);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(157);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 98:
      if (lookahead == 'p') ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 101:
      if (lookahead == 'q') ADVANCE(131);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(124);
      if (lookahead == 'v') ADVANCE(17);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 129:
      if (lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 132:
      if (lookahead == 'x') ADVANCE(123);
      END_STATE();
    case 133:
      if (lookahead == 'x') ADVANCE(16);
      END_STATE();
    case 134:
      if (lookahead == 'y') ADVANCE(166);
      END_STATE();
    case 135:
      if (lookahead == 'y') ADVANCE(112);
      END_STATE();
    case 136:
      if (lookahead == 'y') ADVANCE(119);
      END_STATE();
    case 137:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(137)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(172);
      END_STATE();
    case 138:
      if (eof) ADVANCE(148);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == 'A') ADVANCE(183);
      if (lookahead == 'C') ADVANCE(186);
      if (lookahead == 'E') ADVANCE(191);
      if (lookahead == 'I') ADVANCE(184);
      if (lookahead == 'L') ADVANCE(187);
      if (lookahead == 'M') ADVANCE(174);
      if (lookahead == 'P') ADVANCE(189);
      if (lookahead == 'R') ADVANCE(182);
      if (lookahead == 'V') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(138)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(172);
      END_STATE();
    case 139:
      if (eof) ADVANCE(148);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == ')') ADVANCE(167);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == '=') ADVANCE(151);
      if (lookahead == 'A') ADVANCE(69);
      if (lookahead == 'C') ADVANCE(91);
      if (lookahead == 'E') ADVANCE(132);
      if (lookahead == 'I') ADVANCE(29);
      if (lookahead == 'L') ADVANCE(92);
      if (lookahead == 'M') ADVANCE(12);
      if (lookahead == 'P') ADVANCE(13);
      if (lookahead == 'R') ADVANCE(35);
      if (lookahead == 'V') ADVANCE(14);
      if (lookahead == '^') ADVANCE(194);
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'c') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(23);
      if (lookahead == 'p') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(139)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 140:
      if (eof) ADVANCE(148);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == 'A') ADVANCE(183);
      if (lookahead == 'C') ADVANCE(186);
      if (lookahead == 'E') ADVANCE(191);
      if (lookahead == 'I') ADVANCE(184);
      if (lookahead == 'L') ADVANCE(187);
      if (lookahead == 'M') ADVANCE(174);
      if (lookahead == 'P') ADVANCE(189);
      if (lookahead == 'R') ADVANCE(182);
      if (lookahead == 'V') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(140)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(172);
      END_STATE();
    case 141:
      if (eof) ADVANCE(148);
      if (lookahead == '*') ADVANCE(197);
      if (lookahead == 'A') ADVANCE(69);
      if (lookahead == 'C') ADVANCE(91);
      if (lookahead == 'E') ADVANCE(132);
      if (lookahead == 'I') ADVANCE(80);
      if (lookahead == 'L') ADVANCE(92);
      if (lookahead == 'M') ADVANCE(12);
      if (lookahead == 'P') ADVANCE(102);
      if (lookahead == 'R') ADVANCE(35);
      if (lookahead == 'V') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(141)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 142:
      if (eof) ADVANCE(148);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == '=') ADVANCE(151);
      if (lookahead == 'A') ADVANCE(183);
      if (lookahead == 'C') ADVANCE(186);
      if (lookahead == 'E') ADVANCE(191);
      if (lookahead == 'I') ADVANCE(184);
      if (lookahead == 'L') ADVANCE(187);
      if (lookahead == 'M') ADVANCE(174);
      if (lookahead == 'P') ADVANCE(189);
      if (lookahead == 'R') ADVANCE(182);
      if (lookahead == 'V') ADVANCE(177);
      if (lookahead == '^') ADVANCE(194);
      if (lookahead == 'c') ADVANCE(188);
      if (lookahead == 'f') ADVANCE(190);
      if (lookahead == 'o') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(142)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(172);
      END_STATE();
    case 143:
      if (eof) ADVANCE(148);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == 'A') ADVANCE(183);
      if (lookahead == 'C') ADVANCE(186);
      if (lookahead == 'E') ADVANCE(191);
      if (lookahead == 'I') ADVANCE(181);
      if (lookahead == 'L') ADVANCE(187);
      if (lookahead == 'M') ADVANCE(174);
      if (lookahead == 'P') ADVANCE(176);
      if (lookahead == 'R') ADVANCE(182);
      if (lookahead == 'V') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(143)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(172);
      END_STATE();
    case 144:
      if (eof) ADVANCE(148);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == 'A') ADVANCE(183);
      if (lookahead == 'C') ADVANCE(186);
      if (lookahead == 'E') ADVANCE(191);
      if (lookahead == 'I') ADVANCE(184);
      if (lookahead == 'L') ADVANCE(187);
      if (lookahead == 'M') ADVANCE(174);
      if (lookahead == 'P') ADVANCE(189);
      if (lookahead == 'R') ADVANCE(182);
      if (lookahead == 'V') ADVANCE(177);
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(144)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(172);
      END_STATE();
    case 145:
      if (eof) ADVANCE(148);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == 'A') ADVANCE(183);
      if (lookahead == 'C') ADVANCE(186);
      if (lookahead == 'E') ADVANCE(191);
      if (lookahead == 'I') ADVANCE(184);
      if (lookahead == 'L') ADVANCE(187);
      if (lookahead == 'M') ADVANCE(174);
      if (lookahead == 'P') ADVANCE(189);
      if (lookahead == 'R') ADVANCE(182);
      if (lookahead == 'V') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(145)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(172);
      END_STATE();
    case 146:
      if (eof) ADVANCE(148);
      if (lookahead == 'A') ADVANCE(183);
      if (lookahead == 'C') ADVANCE(186);
      if (lookahead == 'E') ADVANCE(191);
      if (lookahead == 'I') ADVANCE(181);
      if (lookahead == 'L') ADVANCE(187);
      if (lookahead == 'M') ADVANCE(174);
      if (lookahead == 'P') ADVANCE(176);
      if (lookahead == 'R') ADVANCE(182);
      if (lookahead == 'V') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(146)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(172);
      END_STATE();
    case 147:
      if (eof) ADVANCE(148);
      if (lookahead == 'A') ADVANCE(183);
      if (lookahead == 'C') ADVANCE(186);
      if (lookahead == 'E') ADVANCE(191);
      if (lookahead == 'I') ADVANCE(184);
      if (lookahead == 'L') ADVANCE(187);
      if (lookahead == 'M') ADVANCE(174);
      if (lookahead == 'P') ADVANCE(189);
      if (lookahead == 'R') ADVANCE(182);
      if (lookahead == 'V') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(147)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(172);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_Alias);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_Profile);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_Extension);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_Invariant);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_Instance);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_ValueSet);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_CodeSystem);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_Mapping);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_Logical);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_Resource);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_Parent);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_Id);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_exactly);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_obeys);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(196);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'b') ADVANCE(36);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(162);
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(123);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'y') ADVANCE(118);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_cardinality_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_example);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_preferred);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_extensible);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_named);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 139},
  [3] = {.lex_state = 139},
  [4] = {.lex_state = 139},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 139},
  [8] = {.lex_state = 139},
  [9] = {.lex_state = 139},
  [10] = {.lex_state = 142},
  [11] = {.lex_state = 142},
  [12] = {.lex_state = 139},
  [13] = {.lex_state = 139},
  [14] = {.lex_state = 139},
  [15] = {.lex_state = 139},
  [16] = {.lex_state = 139},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 139},
  [23] = {.lex_state = 143},
  [24] = {.lex_state = 143},
  [25] = {.lex_state = 146},
  [26] = {.lex_state = 140},
  [27] = {.lex_state = 141},
  [28] = {.lex_state = 146},
  [29] = {.lex_state = 141},
  [30] = {.lex_state = 140},
  [31] = {.lex_state = 144},
  [32] = {.lex_state = 144},
  [33] = {.lex_state = 139},
  [34] = {.lex_state = 139},
  [35] = {.lex_state = 145},
  [36] = {.lex_state = 138},
  [37] = {.lex_state = 139},
  [38] = {.lex_state = 139},
  [39] = {.lex_state = 139},
  [40] = {.lex_state = 139},
  [41] = {.lex_state = 139},
  [42] = {.lex_state = 139},
  [43] = {.lex_state = 138},
  [44] = {.lex_state = 145},
  [45] = {.lex_state = 139},
  [46] = {.lex_state = 139},
  [47] = {.lex_state = 139},
  [48] = {.lex_state = 139},
  [49] = {.lex_state = 139},
  [50] = {.lex_state = 147},
  [51] = {.lex_state = 147},
  [52] = {.lex_state = 139},
  [53] = {.lex_state = 139},
  [54] = {.lex_state = 139},
  [55] = {.lex_state = 139},
  [56] = {.lex_state = 139},
  [57] = {.lex_state = 139},
  [58] = {.lex_state = 139},
  [59] = {.lex_state = 139},
  [60] = {.lex_state = 139},
  [61] = {.lex_state = 139},
  [62] = {.lex_state = 139},
  [63] = {.lex_state = 139},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 139},
  [66] = {.lex_state = 139},
  [67] = {.lex_state = 139},
  [68] = {.lex_state = 139},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 11},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 137},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 137},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 137},
  [88] = {.lex_state = 137},
  [89] = {.lex_state = 137},
  [90] = {.lex_state = 137},
  [91] = {.lex_state = 137},
  [92] = {.lex_state = 137},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 139},
  [96] = {.lex_state = 137},
  [97] = {.lex_state = 137},
  [98] = {.lex_state = 137},
  [99] = {.lex_state = 137},
  [100] = {.lex_state = 139},
  [101] = {.lex_state = 137},
  [102] = {.lex_state = 137},
  [103] = {.lex_state = 137},
  [104] = {.lex_state = 137},
  [105] = {.lex_state = 137},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 137},
  [109] = {.lex_state = 137},
  [110] = {.lex_state = 137},
  [111] = {.lex_state = 139},
  [112] = {.lex_state = 137},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 137},
  [115] = {.lex_state = 139},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 137},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 137},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 139},
  [123] = {.lex_state = 139},
  [124] = {.lex_state = 139},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 139},
  [129] = {.lex_state = 139},
  [130] = {.lex_state = 139},
  [131] = {.lex_state = 139},
  [132] = {.lex_state = 139},
  [133] = {.lex_state = 139},
  [134] = {.lex_state = 139},
  [135] = {.lex_state = 139},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 139},
  [139] = {.lex_state = 139},
  [140] = {.lex_state = 139},
  [141] = {.lex_state = 139},
  [142] = {.lex_state = 139},
  [143] = {.lex_state = 139},
  [144] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_Alias] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_Profile] = ACTIONS(1),
    [anon_sym_Extension] = ACTIONS(1),
    [anon_sym_Invariant] = ACTIONS(1),
    [anon_sym_Instance] = ACTIONS(1),
    [anon_sym_ValueSet] = ACTIONS(1),
    [anon_sym_CodeSystem] = ACTIONS(1),
    [anon_sym_Mapping] = ACTIONS(1),
    [anon_sym_Logical] = ACTIONS(1),
    [anon_sym_Resource] = ACTIONS(1),
    [anon_sym_Parent] = ACTIONS(1),
    [anon_sym_Id] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_contains] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_obeys] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_sequence_token1] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [aux_sym_cardinality_token1] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_STAR2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_system] = ACTIONS(1),
    [anon_sym_named] = ACTIONS(1),
  },
  [1] = {
    [sym_doc] = STATE(127),
    [sym_alias] = STATE(6),
    [sym_profile] = STATE(6),
    [sym_extension] = STATE(6),
    [sym_invariant] = STATE(6),
    [sym_instance] = STATE(6),
    [sym_valueset] = STATE(6),
    [sym_codesystem] = STATE(6),
    [sym_mapping] = STATE(6),
    [sym_logical] = STATE(6),
    [sym_resource] = STATE(6),
    [aux_sym_doc_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_Alias] = ACTIONS(5),
    [anon_sym_Profile] = ACTIONS(7),
    [anon_sym_Extension] = ACTIONS(9),
    [anon_sym_Invariant] = ACTIONS(11),
    [anon_sym_Instance] = ACTIONS(13),
    [anon_sym_ValueSet] = ACTIONS(15),
    [anon_sym_CodeSystem] = ACTIONS(17),
    [anon_sym_Mapping] = ACTIONS(19),
    [anon_sym_Logical] = ACTIONS(21),
    [anon_sym_Resource] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(27), 1,
      anon_sym_Parent,
    ACTIONS(29), 1,
      anon_sym_Id,
    ACTIONS(31), 1,
      anon_sym_STAR,
    STATE(3), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(12), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(41), 2,
      sym_parent,
      sym_id,
    STATE(68), 7,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
    ACTIONS(25), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [44] = 8,
    ACTIONS(27), 1,
      anon_sym_Parent,
    ACTIONS(29), 1,
      anon_sym_Id,
    ACTIONS(31), 1,
      anon_sym_STAR,
    STATE(9), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(15), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(41), 2,
      sym_parent,
      sym_id,
    STATE(68), 7,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
    ACTIONS(33), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [88] = 8,
    ACTIONS(27), 1,
      anon_sym_Parent,
    ACTIONS(29), 1,
      anon_sym_Id,
    ACTIONS(31), 1,
      anon_sym_STAR,
    STATE(8), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(15), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(41), 2,
      sym_parent,
      sym_id,
    STATE(68), 7,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
    ACTIONS(35), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [132] = 12,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      anon_sym_Alias,
    ACTIONS(42), 1,
      anon_sym_Profile,
    ACTIONS(45), 1,
      anon_sym_Extension,
    ACTIONS(48), 1,
      anon_sym_Invariant,
    ACTIONS(51), 1,
      anon_sym_Instance,
    ACTIONS(54), 1,
      anon_sym_ValueSet,
    ACTIONS(57), 1,
      anon_sym_CodeSystem,
    ACTIONS(60), 1,
      anon_sym_Mapping,
    ACTIONS(63), 1,
      anon_sym_Logical,
    ACTIONS(66), 1,
      anon_sym_Resource,
    STATE(5), 11,
      sym_alias,
      sym_profile,
      sym_extension,
      sym_invariant,
      sym_instance,
      sym_valueset,
      sym_codesystem,
      sym_mapping,
      sym_logical,
      sym_resource,
      aux_sym_doc_repeat1,
  [179] = 12,
    ACTIONS(5), 1,
      anon_sym_Alias,
    ACTIONS(7), 1,
      anon_sym_Profile,
    ACTIONS(9), 1,
      anon_sym_Extension,
    ACTIONS(11), 1,
      anon_sym_Invariant,
    ACTIONS(13), 1,
      anon_sym_Instance,
    ACTIONS(15), 1,
      anon_sym_ValueSet,
    ACTIONS(17), 1,
      anon_sym_CodeSystem,
    ACTIONS(19), 1,
      anon_sym_Mapping,
    ACTIONS(21), 1,
      anon_sym_Logical,
    ACTIONS(23), 1,
      anon_sym_Resource,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    STATE(5), 11,
      sym_alias,
      sym_profile,
      sym_extension,
      sym_invariant,
      sym_instance,
      sym_valueset,
      sym_codesystem,
      sym_mapping,
      sym_logical,
      sym_resource,
      aux_sym_doc_repeat1,
  [226] = 4,
    ACTIONS(73), 1,
      anon_sym_STAR,
    STATE(7), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(68), 7,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
    ACTIONS(71), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [256] = 4,
    ACTIONS(31), 1,
      anon_sym_STAR,
    STATE(7), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(68), 7,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
    ACTIONS(76), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [286] = 4,
    ACTIONS(31), 1,
      anon_sym_STAR,
    STATE(7), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(68), 7,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
    ACTIONS(78), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [316] = 4,
    ACTIONS(82), 1,
      aux_sym_sequence_token1,
    ACTIONS(85), 1,
      aux_sym_cardinality_token1,
    STATE(10), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(80), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_EQ,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
      anon_sym_from,
      anon_sym_contains,
      anon_sym_obeys,
      anon_sym_CARET,
      anon_sym_DOT_DOT,
  [346] = 4,
    ACTIONS(89), 1,
      aux_sym_sequence_token1,
    ACTIONS(91), 1,
      aux_sym_cardinality_token1,
    STATE(10), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(87), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_EQ,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
      anon_sym_from,
      anon_sym_contains,
      anon_sym_obeys,
      anon_sym_CARET,
      anon_sym_DOT_DOT,
  [376] = 4,
    ACTIONS(31), 1,
      anon_sym_STAR,
    STATE(7), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(68), 7,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
    ACTIONS(33), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [406] = 2,
    ACTIONS(95), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
    ACTIONS(93), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_EQ,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
      anon_sym_from,
      anon_sym_contains,
      anon_sym_obeys,
      anon_sym_CARET,
  [430] = 1,
    ACTIONS(95), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_Parent,
      anon_sym_Id,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_and,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [452] = 5,
    ACTIONS(99), 1,
      anon_sym_Parent,
    ACTIONS(102), 1,
      anon_sym_Id,
    STATE(15), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(41), 2,
      sym_parent,
      sym_id,
    ACTIONS(97), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [481] = 7,
    ACTIONS(107), 1,
      anon_sym_EQ,
    ACTIONS(109), 1,
      anon_sym_from,
    ACTIONS(111), 1,
      anon_sym_contains,
    ACTIONS(113), 1,
      anon_sym_obeys,
    ACTIONS(115), 1,
      anon_sym_CARET,
    STATE(136), 1,
      sym_caret_path,
    ACTIONS(105), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [514] = 5,
    ACTIONS(119), 1,
      anon_sym_Parent,
    ACTIONS(121), 1,
      anon_sym_Id,
    STATE(21), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(41), 2,
      sym_parent,
      sym_id,
    ACTIONS(117), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [542] = 5,
    ACTIONS(119), 1,
      anon_sym_Parent,
    ACTIONS(121), 1,
      anon_sym_Id,
    STATE(17), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(41), 2,
      sym_parent,
      sym_id,
    ACTIONS(123), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [570] = 5,
    ACTIONS(119), 1,
      anon_sym_Parent,
    ACTIONS(121), 1,
      anon_sym_Id,
    STATE(20), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(41), 2,
      sym_parent,
      sym_id,
    ACTIONS(125), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [598] = 5,
    ACTIONS(119), 1,
      anon_sym_Parent,
    ACTIONS(121), 1,
      anon_sym_Id,
    STATE(21), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(41), 2,
      sym_parent,
      sym_id,
    ACTIONS(127), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [626] = 5,
    ACTIONS(129), 1,
      anon_sym_Parent,
    ACTIONS(132), 1,
      anon_sym_Id,
    STATE(21), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(41), 2,
      sym_parent,
      sym_id,
    ACTIONS(97), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [654] = 1,
    ACTIONS(93), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_EQ,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
      anon_sym_from,
      anon_sym_contains,
      anon_sym_obeys,
      anon_sym_CARET,
  [674] = 3,
    ACTIONS(135), 1,
      aux_sym_sequence_token1,
    STATE(23), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(80), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_Parent,
      anon_sym_Id,
      anon_sym_STAR,
  [697] = 3,
    ACTIONS(138), 1,
      aux_sym_sequence_token1,
    STATE(23), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(87), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_Parent,
      anon_sym_Id,
      anon_sym_STAR,
  [720] = 3,
    ACTIONS(140), 1,
      aux_sym_sequence_token1,
    STATE(28), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(87), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_Parent,
      anon_sym_Id,
  [742] = 3,
    ACTIONS(142), 1,
      aux_sym_sequence_token1,
    STATE(26), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(80), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [764] = 3,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(149), 2,
      aux_sym_cardinality_token1,
      anon_sym_STAR2,
    ACTIONS(145), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_and,
  [786] = 3,
    ACTIONS(151), 1,
      aux_sym_sequence_token1,
    STATE(28), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(80), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_Parent,
      anon_sym_Id,
  [808] = 3,
    ACTIONS(156), 1,
      anon_sym_STAR,
    ACTIONS(158), 2,
      aux_sym_cardinality_token1,
      anon_sym_STAR2,
    ACTIONS(154), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_and,
  [830] = 3,
    ACTIONS(160), 1,
      aux_sym_sequence_token1,
    STATE(26), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(87), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [852] = 3,
    ACTIONS(162), 1,
      aux_sym_sequence_token1,
    STATE(32), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(87), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
      anon_sym_and,
  [874] = 3,
    ACTIONS(164), 1,
      aux_sym_sequence_token1,
    STATE(32), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(80), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
      anon_sym_and,
  [896] = 3,
    ACTIONS(169), 1,
      anon_sym_and,
    STATE(33), 1,
      aux_sym_contains_rule_repeat1,
    ACTIONS(167), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [917] = 3,
    ACTIONS(174), 1,
      anon_sym_and,
    STATE(34), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(172), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [938] = 3,
    ACTIONS(177), 1,
      aux_sym_sequence_token1,
    STATE(44), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(87), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [959] = 3,
    ACTIONS(179), 1,
      aux_sym_sequence_token1,
    STATE(43), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(87), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_POUND,
  [980] = 3,
    ACTIONS(183), 1,
      anon_sym_and,
    STATE(48), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(181), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [1001] = 3,
    ACTIONS(187), 1,
      anon_sym_and,
    STATE(46), 1,
      aux_sym_contains_rule_repeat1,
    ACTIONS(185), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [1022] = 3,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_strength,
    ACTIONS(189), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [1043] = 3,
    ACTIONS(183), 1,
      anon_sym_and,
    STATE(47), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(193), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [1064] = 1,
    ACTIONS(195), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_Parent,
      anon_sym_Id,
      anon_sym_STAR,
  [1081] = 1,
    ACTIONS(197), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_Parent,
      anon_sym_Id,
      anon_sym_STAR,
  [1098] = 3,
    ACTIONS(199), 1,
      aux_sym_sequence_token1,
    STATE(43), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(80), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_POUND,
  [1119] = 3,
    ACTIONS(202), 1,
      aux_sym_sequence_token1,
    STATE(44), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(80), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [1140] = 1,
    ACTIONS(205), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_Parent,
      anon_sym_Id,
      anon_sym_STAR,
  [1157] = 3,
    ACTIONS(187), 1,
      anon_sym_and,
    STATE(33), 1,
      aux_sym_contains_rule_repeat1,
    ACTIONS(207), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [1178] = 3,
    ACTIONS(183), 1,
      anon_sym_and,
    STATE(34), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(181), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [1199] = 3,
    ACTIONS(183), 1,
      anon_sym_and,
    STATE(34), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(209), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [1220] = 1,
    ACTIONS(172), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
      anon_sym_and,
  [1236] = 3,
    ACTIONS(211), 1,
      aux_sym_sequence_token1,
    STATE(51), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(87), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1256] = 3,
    ACTIONS(213), 1,
      aux_sym_sequence_token1,
    STATE(51), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(80), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1276] = 1,
    ACTIONS(216), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [1292] = 1,
    ACTIONS(218), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [1308] = 1,
    ACTIONS(154), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
      anon_sym_and,
  [1324] = 1,
    ACTIONS(220), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
      anon_sym_and,
  [1340] = 2,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [1358] = 1,
    ACTIONS(167), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
      anon_sym_and,
  [1374] = 1,
    ACTIONS(226), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [1390] = 1,
    ACTIONS(228), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
      anon_sym_and,
  [1406] = 1,
    ACTIONS(230), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
      anon_sym_and,
  [1422] = 1,
    ACTIONS(232), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [1437] = 1,
    ACTIONS(234), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [1452] = 1,
    ACTIONS(236), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [1467] = 2,
    ACTIONS(240), 1,
      anon_sym_POUND,
    ACTIONS(238), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1484] = 1,
    ACTIONS(242), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [1499] = 1,
    ACTIONS(244), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [1514] = 1,
    ACTIONS(246), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [1529] = 1,
    ACTIONS(248), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [1544] = 1,
    ACTIONS(250), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1558] = 1,
    ACTIONS(252), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1572] = 1,
    ACTIONS(254), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1586] = 1,
    ACTIONS(256), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1600] = 1,
    ACTIONS(258), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1614] = 1,
    ACTIONS(260), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1628] = 1,
    ACTIONS(262), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1642] = 1,
    ACTIONS(238), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1656] = 9,
    ACTIONS(115), 1,
      anon_sym_CARET,
    ACTIONS(264), 1,
      anon_sym_obeys,
    ACTIONS(266), 1,
      aux_sym_sequence_token1,
    ACTIONS(268), 1,
      anon_sym_system,
    STATE(11), 1,
      aux_sym_sequence_repeat1,
    STATE(13), 1,
      sym_sequence,
    STATE(16), 1,
      sym_path,
    STATE(111), 1,
      sym_name,
    STATE(137), 1,
      sym_caret_path,
  [1684] = 6,
    ACTIONS(270), 1,
      aux_sym_sequence_token1,
    ACTIONS(272), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_sequence,
    STATE(35), 1,
      aux_sym_sequence_repeat1,
    STATE(63), 1,
      sym_value,
    STATE(52), 2,
      sym_name,
      sym_string,
  [1704] = 6,
    ACTIONS(272), 1,
      anon_sym_DQUOTE,
    ACTIONS(274), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(30), 1,
      aux_sym_sequence_repeat1,
    STATE(56), 1,
      sym_value,
    STATE(52), 2,
      sym_name,
      sym_string,
  [1724] = 6,
    ACTIONS(270), 1,
      aux_sym_sequence_token1,
    ACTIONS(272), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_sequence,
    STATE(35), 1,
      aux_sym_sequence_repeat1,
    STATE(61), 1,
      sym_value,
    STATE(52), 2,
      sym_name,
      sym_string,
  [1744] = 4,
    ACTIONS(27), 1,
      anon_sym_Parent,
    ACTIONS(29), 1,
      anon_sym_Id,
    STATE(4), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(41), 2,
      sym_parent,
      sym_id,
  [1759] = 5,
    ACTIONS(276), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(57), 1,
      sym_item,
    STATE(86), 1,
      aux_sym_sequence_repeat1,
    STATE(95), 1,
      sym_name,
  [1775] = 4,
    ACTIONS(85), 1,
      aux_sym_cardinality_token1,
    ACTIONS(278), 1,
      aux_sym_sequence_token1,
    STATE(83), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(80), 2,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [1789] = 5,
    ACTIONS(276), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(38), 1,
      sym_item,
    STATE(86), 1,
      aux_sym_sequence_repeat1,
    STATE(95), 1,
      sym_name,
  [1805] = 5,
    ACTIONS(281), 1,
      anon_sym_POUND,
    ACTIONS(283), 1,
      aux_sym_sequence_token1,
    STATE(36), 1,
      aux_sym_sequence_repeat1,
    STATE(64), 1,
      sym_sequence,
    STATE(76), 1,
      sym_code,
  [1821] = 4,
    ACTIONS(91), 1,
      aux_sym_cardinality_token1,
    ACTIONS(285), 1,
      aux_sym_sequence_token1,
    STATE(83), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(87), 2,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [1835] = 4,
    ACTIONS(287), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(31), 1,
      aux_sym_sequence_repeat1,
    STATE(49), 1,
      sym_name,
  [1848] = 4,
    ACTIONS(289), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(19), 1,
      sym_name,
    STATE(25), 1,
      aux_sym_sequence_repeat1,
  [1861] = 4,
    ACTIONS(287), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(31), 1,
      aux_sym_sequence_repeat1,
    STATE(37), 1,
      sym_name,
  [1874] = 4,
    ACTIONS(289), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(25), 1,
      aux_sym_sequence_repeat1,
    STATE(42), 1,
      sym_name,
  [1887] = 4,
    ACTIONS(291), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(24), 1,
      aux_sym_sequence_repeat1,
    STATE(45), 1,
      sym_name,
  [1900] = 4,
    ACTIONS(289), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(25), 1,
      aux_sym_sequence_repeat1,
    STATE(45), 1,
      sym_name,
  [1913] = 4,
    ACTIONS(80), 1,
      anon_sym_DOT_DOT,
    ACTIONS(85), 1,
      aux_sym_cardinality_token1,
    ACTIONS(293), 1,
      aux_sym_sequence_token1,
    STATE(93), 1,
      aux_sym_sequence_repeat1,
  [1926] = 4,
    ACTIONS(87), 1,
      anon_sym_DOT_DOT,
    ACTIONS(91), 1,
      aux_sym_cardinality_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_token1,
    STATE(93), 1,
      aux_sym_sequence_repeat1,
  [1939] = 4,
    ACTIONS(298), 1,
      aux_sym_cardinality_token1,
    ACTIONS(300), 1,
      anon_sym_DOT_DOT,
    ACTIONS(302), 1,
      anon_sym_named,
    STATE(60), 1,
      sym_cardinality,
  [1952] = 4,
    ACTIONS(287), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(31), 1,
      aux_sym_sequence_repeat1,
    STATE(40), 1,
      sym_name,
  [1965] = 4,
    ACTIONS(304), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(81), 1,
      sym_name,
    STATE(107), 1,
      aux_sym_sequence_repeat1,
  [1978] = 4,
    ACTIONS(291), 1,
      aux_sym_sequence_token1,
    STATE(2), 1,
      sym_name,
    STATE(14), 1,
      sym_sequence,
    STATE(24), 1,
      aux_sym_sequence_repeat1,
  [1991] = 4,
    ACTIONS(306), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(50), 1,
      aux_sym_sequence_repeat1,
    STATE(70), 1,
      sym_name,
  [2004] = 1,
    ACTIONS(308), 4,
      anon_sym_example,
      anon_sym_preferred,
      anon_sym_extensible,
      anon_sym_required,
  [2011] = 4,
    ACTIONS(291), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(24), 1,
      aux_sym_sequence_repeat1,
    STATE(42), 1,
      sym_name,
  [2024] = 4,
    ACTIONS(310), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(94), 1,
      aux_sym_sequence_repeat1,
    STATE(115), 1,
      sym_name,
  [2037] = 4,
    ACTIONS(306), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(50), 1,
      aux_sym_sequence_repeat1,
    STATE(71), 1,
      sym_name,
  [2050] = 4,
    ACTIONS(306), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(50), 1,
      aux_sym_sequence_repeat1,
    STATE(75), 1,
      sym_name,
  [2063] = 4,
    ACTIONS(306), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(50), 1,
      aux_sym_sequence_repeat1,
    STATE(74), 1,
      sym_name,
  [2076] = 3,
    ACTIONS(312), 1,
      aux_sym_sequence_token1,
    STATE(106), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(80), 2,
      anon_sym_Parent,
      anon_sym_Id,
  [2087] = 3,
    ACTIONS(315), 1,
      aux_sym_sequence_token1,
    STATE(106), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(87), 2,
      anon_sym_Parent,
      anon_sym_Id,
  [2098] = 4,
    ACTIONS(306), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(50), 1,
      aux_sym_sequence_repeat1,
    STATE(72), 1,
      sym_name,
  [2111] = 4,
    ACTIONS(317), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(30), 1,
      aux_sym_sequence_repeat1,
    STATE(39), 1,
      sym_name,
  [2124] = 4,
    ACTIONS(289), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(18), 1,
      sym_name,
    STATE(25), 1,
      aux_sym_sequence_repeat1,
  [2137] = 3,
    ACTIONS(298), 1,
      aux_sym_cardinality_token1,
    ACTIONS(300), 1,
      anon_sym_DOT_DOT,
    STATE(67), 1,
      sym_cardinality,
  [2147] = 3,
    ACTIONS(319), 1,
      aux_sym_sequence_token1,
    STATE(119), 1,
      aux_sym_sequence_repeat1,
    STATE(125), 1,
      sym_sequence,
  [2157] = 3,
    ACTIONS(321), 1,
      anon_sym_DQUOTE,
    ACTIONS(323), 1,
      sym_double_quote_string_fragment,
    STATE(121), 1,
      aux_sym_string_repeat1,
  [2167] = 3,
    ACTIONS(306), 1,
      aux_sym_sequence_token1,
    STATE(50), 1,
      aux_sym_sequence_repeat1,
    STATE(69), 1,
      sym_sequence,
  [2177] = 3,
    ACTIONS(298), 1,
      aux_sym_cardinality_token1,
    ACTIONS(300), 1,
      anon_sym_DOT_DOT,
    STATE(55), 1,
      sym_cardinality,
  [2187] = 3,
    ACTIONS(80), 1,
      anon_sym_EQ,
    ACTIONS(325), 1,
      aux_sym_sequence_token1,
    STATE(116), 1,
      aux_sym_sequence_repeat1,
  [2197] = 3,
    ACTIONS(328), 1,
      anon_sym_DQUOTE,
    ACTIONS(330), 1,
      sym_double_quote_string_fragment,
    STATE(117), 1,
      aux_sym_string_repeat1,
  [2207] = 3,
    ACTIONS(319), 1,
      aux_sym_sequence_token1,
    STATE(119), 1,
      aux_sym_sequence_repeat1,
    STATE(126), 1,
      sym_sequence,
  [2217] = 3,
    ACTIONS(87), 1,
      anon_sym_EQ,
    ACTIONS(333), 1,
      aux_sym_sequence_token1,
    STATE(116), 1,
      aux_sym_sequence_repeat1,
  [2227] = 3,
    ACTIONS(306), 1,
      aux_sym_sequence_token1,
    STATE(50), 1,
      aux_sym_sequence_repeat1,
    STATE(73), 1,
      sym_sequence,
  [2237] = 3,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    ACTIONS(337), 1,
      sym_double_quote_string_fragment,
    STATE(117), 1,
      aux_sym_string_repeat1,
  [2247] = 1,
    ACTIONS(339), 1,
      anon_sym_COLON,
  [2251] = 1,
    ACTIONS(341), 1,
      anon_sym_COLON,
  [2255] = 1,
    ACTIONS(343), 1,
      anon_sym_exactly,
  [2259] = 1,
    ACTIONS(345), 1,
      anon_sym_EQ,
  [2263] = 1,
    ACTIONS(347), 1,
      anon_sym_EQ,
  [2267] = 1,
    ACTIONS(349), 1,
      ts_builtin_sym_end,
  [2271] = 1,
    ACTIONS(351), 1,
      anon_sym_COLON,
  [2275] = 1,
    ACTIONS(353), 1,
      anon_sym_COLON,
  [2279] = 1,
    ACTIONS(355), 1,
      anon_sym_COLON,
  [2283] = 1,
    ACTIONS(357), 1,
      anon_sym_COLON,
  [2287] = 1,
    ACTIONS(359), 1,
      anon_sym_COLON,
  [2291] = 1,
    ACTIONS(361), 1,
      anon_sym_COLON,
  [2295] = 1,
    ACTIONS(363), 1,
      anon_sym_COLON,
  [2299] = 1,
    ACTIONS(365), 1,
      anon_sym_COLON,
  [2303] = 1,
    ACTIONS(367), 1,
      anon_sym_EQ,
  [2307] = 1,
    ACTIONS(369), 1,
      anon_sym_EQ,
  [2311] = 1,
    ACTIONS(371), 1,
      anon_sym_COLON,
  [2315] = 1,
    ACTIONS(373), 1,
      anon_sym_COLON,
  [2319] = 1,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
  [2323] = 1,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
  [2327] = 1,
    ACTIONS(379), 1,
      anon_sym_COLON,
  [2331] = 1,
    ACTIONS(381), 1,
      anon_sym_COLON,
  [2335] = 1,
    ACTIONS(383), 1,
      anon_sym_DOT_DOT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 132,
  [SMALL_STATE(6)] = 179,
  [SMALL_STATE(7)] = 226,
  [SMALL_STATE(8)] = 256,
  [SMALL_STATE(9)] = 286,
  [SMALL_STATE(10)] = 316,
  [SMALL_STATE(11)] = 346,
  [SMALL_STATE(12)] = 376,
  [SMALL_STATE(13)] = 406,
  [SMALL_STATE(14)] = 430,
  [SMALL_STATE(15)] = 452,
  [SMALL_STATE(16)] = 481,
  [SMALL_STATE(17)] = 514,
  [SMALL_STATE(18)] = 542,
  [SMALL_STATE(19)] = 570,
  [SMALL_STATE(20)] = 598,
  [SMALL_STATE(21)] = 626,
  [SMALL_STATE(22)] = 654,
  [SMALL_STATE(23)] = 674,
  [SMALL_STATE(24)] = 697,
  [SMALL_STATE(25)] = 720,
  [SMALL_STATE(26)] = 742,
  [SMALL_STATE(27)] = 764,
  [SMALL_STATE(28)] = 786,
  [SMALL_STATE(29)] = 808,
  [SMALL_STATE(30)] = 830,
  [SMALL_STATE(31)] = 852,
  [SMALL_STATE(32)] = 874,
  [SMALL_STATE(33)] = 896,
  [SMALL_STATE(34)] = 917,
  [SMALL_STATE(35)] = 938,
  [SMALL_STATE(36)] = 959,
  [SMALL_STATE(37)] = 980,
  [SMALL_STATE(38)] = 1001,
  [SMALL_STATE(39)] = 1022,
  [SMALL_STATE(40)] = 1043,
  [SMALL_STATE(41)] = 1064,
  [SMALL_STATE(42)] = 1081,
  [SMALL_STATE(43)] = 1098,
  [SMALL_STATE(44)] = 1119,
  [SMALL_STATE(45)] = 1140,
  [SMALL_STATE(46)] = 1157,
  [SMALL_STATE(47)] = 1178,
  [SMALL_STATE(48)] = 1199,
  [SMALL_STATE(49)] = 1220,
  [SMALL_STATE(50)] = 1236,
  [SMALL_STATE(51)] = 1256,
  [SMALL_STATE(52)] = 1276,
  [SMALL_STATE(53)] = 1292,
  [SMALL_STATE(54)] = 1308,
  [SMALL_STATE(55)] = 1324,
  [SMALL_STATE(56)] = 1340,
  [SMALL_STATE(57)] = 1358,
  [SMALL_STATE(58)] = 1374,
  [SMALL_STATE(59)] = 1390,
  [SMALL_STATE(60)] = 1406,
  [SMALL_STATE(61)] = 1422,
  [SMALL_STATE(62)] = 1437,
  [SMALL_STATE(63)] = 1452,
  [SMALL_STATE(64)] = 1467,
  [SMALL_STATE(65)] = 1484,
  [SMALL_STATE(66)] = 1499,
  [SMALL_STATE(67)] = 1514,
  [SMALL_STATE(68)] = 1529,
  [SMALL_STATE(69)] = 1544,
  [SMALL_STATE(70)] = 1558,
  [SMALL_STATE(71)] = 1572,
  [SMALL_STATE(72)] = 1586,
  [SMALL_STATE(73)] = 1600,
  [SMALL_STATE(74)] = 1614,
  [SMALL_STATE(75)] = 1628,
  [SMALL_STATE(76)] = 1642,
  [SMALL_STATE(77)] = 1656,
  [SMALL_STATE(78)] = 1684,
  [SMALL_STATE(79)] = 1704,
  [SMALL_STATE(80)] = 1724,
  [SMALL_STATE(81)] = 1744,
  [SMALL_STATE(82)] = 1759,
  [SMALL_STATE(83)] = 1775,
  [SMALL_STATE(84)] = 1789,
  [SMALL_STATE(85)] = 1805,
  [SMALL_STATE(86)] = 1821,
  [SMALL_STATE(87)] = 1835,
  [SMALL_STATE(88)] = 1848,
  [SMALL_STATE(89)] = 1861,
  [SMALL_STATE(90)] = 1874,
  [SMALL_STATE(91)] = 1887,
  [SMALL_STATE(92)] = 1900,
  [SMALL_STATE(93)] = 1913,
  [SMALL_STATE(94)] = 1926,
  [SMALL_STATE(95)] = 1939,
  [SMALL_STATE(96)] = 1952,
  [SMALL_STATE(97)] = 1965,
  [SMALL_STATE(98)] = 1978,
  [SMALL_STATE(99)] = 1991,
  [SMALL_STATE(100)] = 2004,
  [SMALL_STATE(101)] = 2011,
  [SMALL_STATE(102)] = 2024,
  [SMALL_STATE(103)] = 2037,
  [SMALL_STATE(104)] = 2050,
  [SMALL_STATE(105)] = 2063,
  [SMALL_STATE(106)] = 2076,
  [SMALL_STATE(107)] = 2087,
  [SMALL_STATE(108)] = 2098,
  [SMALL_STATE(109)] = 2111,
  [SMALL_STATE(110)] = 2124,
  [SMALL_STATE(111)] = 2137,
  [SMALL_STATE(112)] = 2147,
  [SMALL_STATE(113)] = 2157,
  [SMALL_STATE(114)] = 2167,
  [SMALL_STATE(115)] = 2177,
  [SMALL_STATE(116)] = 2187,
  [SMALL_STATE(117)] = 2197,
  [SMALL_STATE(118)] = 2207,
  [SMALL_STATE(119)] = 2217,
  [SMALL_STATE(120)] = 2227,
  [SMALL_STATE(121)] = 2237,
  [SMALL_STATE(122)] = 2247,
  [SMALL_STATE(123)] = 2251,
  [SMALL_STATE(124)] = 2255,
  [SMALL_STATE(125)] = 2259,
  [SMALL_STATE(126)] = 2263,
  [SMALL_STATE(127)] = 2267,
  [SMALL_STATE(128)] = 2271,
  [SMALL_STATE(129)] = 2275,
  [SMALL_STATE(130)] = 2279,
  [SMALL_STATE(131)] = 2283,
  [SMALL_STATE(132)] = 2287,
  [SMALL_STATE(133)] = 2291,
  [SMALL_STATE(134)] = 2295,
  [SMALL_STATE(135)] = 2299,
  [SMALL_STATE(136)] = 2303,
  [SMALL_STATE(137)] = 2307,
  [SMALL_STATE(138)] = 2311,
  [SMALL_STATE(139)] = 2315,
  [SMALL_STATE(140)] = 2319,
  [SMALL_STATE(141)] = 2323,
  [SMALL_STATE(142)] = 2327,
  [SMALL_STATE(143)] = 2331,
  [SMALL_STATE(144)] = 2335,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 4),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 4),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(134),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(132),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(135),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(133),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(139),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(122),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(131),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(130),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(129),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(128),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat2, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat2, 2), SHIFT_REPEAT(77),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 5),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 5),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(10),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(138),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(123),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_rule, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 4),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(142),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(143),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(23),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(26),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(28),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(32),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contains_rule_repeat1, 2),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contains_rule_repeat1, 2), SHIFT_REPEAT(82),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2), SHIFT_REPEAT(87),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_rule, 4),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_rule, 4),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sd_metadata, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(43),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(44),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parent, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_rule, 5),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 5),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(51),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_value_rule, 4),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_value_rule, 5),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_rule, 5),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_value_rule, 4),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 5, .production_id = 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strength, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_value_rule, 7),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_rule, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sd_rule, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 2, .production_id = 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invariant, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 3),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3, .production_id = 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(83),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(93),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(106),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(116),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(117),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_path, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [349] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_fsh(void) {
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
