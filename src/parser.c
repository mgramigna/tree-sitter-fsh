#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 170
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 83
#define ALIAS_COUNT 3
#define TOKEN_COUNT 41
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
  anon_sym_Title = 14,
  anon_sym_Description = 15,
  anon_sym_Id = 16,
  anon_sym_STAR = 17,
  anon_sym_from = 18,
  anon_sym_LPAREN = 19,
  anon_sym_exactly = 20,
  anon_sym_RPAREN = 21,
  anon_sym_contains = 22,
  anon_sym_and = 23,
  anon_sym_obeys = 24,
  anon_sym_POUND = 25,
  aux_sym_sequence_token1 = 26,
  anon_sym_CARET = 27,
  aux_sym_cardinality_token1 = 28,
  anon_sym_DOT_DOT = 29,
  anon_sym_STAR2 = 30,
  anon_sym_DQUOTE = 31,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 32,
  sym_double_quote_string_fragment = 33,
  sym_escape_sequence = 34,
  anon_sym_system = 35,
  anon_sym_example = 36,
  anon_sym_preferred = 37,
  anon_sym_extensible = 38,
  anon_sym_required = 39,
  anon_sym_named = 40,
  sym_doc = 41,
  sym_alias = 42,
  sym_profile = 43,
  sym_extension = 44,
  sym_invariant = 45,
  sym_instance = 46,
  sym_valueset = 47,
  sym_codesystem = 48,
  sym_mapping = 49,
  sym_logical = 50,
  sym_resource = 51,
  sym_sd_metadata = 52,
  sym_parent = 53,
  sym_title = 54,
  sym_description = 55,
  sym_id = 56,
  sym_sd_rule = 57,
  sym_cardinality_rule = 58,
  sym_valueset_rule = 59,
  sym_fixed_value_rule = 60,
  sym_contains_rule = 61,
  sym_caret_value_rule = 62,
  sym_obeys_rule = 63,
  sym_path_rule = 64,
  sym_code = 65,
  sym_sequence = 66,
  sym_caret_path = 67,
  sym_name = 68,
  sym_cardinality = 69,
  sym_string = 70,
  sym_multiline_string = 71,
  sym_path = 72,
  sym_strength = 73,
  sym_value = 74,
  sym_item = 75,
  aux_sym_doc_repeat1 = 76,
  aux_sym_profile_repeat1 = 77,
  aux_sym_profile_repeat2 = 78,
  aux_sym_contains_rule_repeat1 = 79,
  aux_sym_obeys_rule_repeat1 = 80,
  aux_sym_sequence_repeat1 = 81,
  aux_sym_string_repeat1 = 82,
  alias_sym_alias_name = 83,
  alias_sym_code_system = 84,
  alias_sym_code_value = 85,
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
  [anon_sym_Title] = "Title",
  [anon_sym_Description] = "Description",
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
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [sym_double_quote_string_fragment] = "double_quote_string_fragment",
  [sym_escape_sequence] = "escape_sequence",
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
  [sym_title] = "title",
  [sym_description] = "description",
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
  [sym_multiline_string] = "multiline_string",
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
  [anon_sym_Title] = anon_sym_Title,
  [anon_sym_Description] = anon_sym_Description,
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
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [sym_double_quote_string_fragment] = sym_double_quote_string_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
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
  [sym_title] = sym_title,
  [sym_description] = sym_description,
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
  [sym_multiline_string] = sym_multiline_string,
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
  [anon_sym_Title] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Description] = {
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
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_double_quote_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
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
  [sym_title] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
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
  [sym_multiline_string] = {
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
  [11] = 7,
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
  [22] = 15,
  [23] = 8,
  [24] = 24,
  [25] = 15,
  [26] = 8,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 8,
  [33] = 15,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 15,
  [38] = 8,
  [39] = 39,
  [40] = 15,
  [41] = 15,
  [42] = 42,
  [43] = 15,
  [44] = 8,
  [45] = 45,
  [46] = 8,
  [47] = 47,
  [48] = 8,
  [49] = 15,
  [50] = 8,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 15,
  [60] = 60,
  [61] = 8,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 8,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 62,
  [75] = 75,
  [76] = 15,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 8,
  [97] = 15,
  [98] = 98,
  [99] = 15,
  [100] = 100,
  [101] = 101,
  [102] = 8,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 15,
  [112] = 112,
  [113] = 113,
  [114] = 8,
  [115] = 110,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 107,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 109,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 15,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 8,
  [137] = 134,
  [138] = 135,
  [139] = 134,
  [140] = 140,
  [141] = 135,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 149,
  [167] = 154,
  [168] = 168,
  [169] = 169,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(175);
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '#') ADVANCE(200);
      if (lookahead == '(') ADVANCE(194);
      if (lookahead == ')') ADVANCE(196);
      if (lookahead == '*') ADVANCE(228);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == ':') ADVANCE(177);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead == 'A') ADVANCE(214);
      if (lookahead == 'C') ADVANCE(217);
      if (lookahead == 'D') ADVANCE(211);
      if (lookahead == 'E') ADVANCE(222);
      if (lookahead == 'I') ADVANCE(210);
      if (lookahead == 'L') ADVANCE(218);
      if (lookahead == 'M') ADVANCE(203);
      if (lookahead == 'P') ADVANCE(205);
      if (lookahead == 'R') ADVANCE(212);
      if (lookahead == 'T') ADVANCE(213);
      if (lookahead == 'V') ADVANCE(206);
      if (lookahead == '^') ADVANCE(225);
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == 'c') ADVANCE(219);
      if (lookahead == 'f') ADVANCE(221);
      if (lookahead == 'n') ADVANCE(207);
      if (lookahead == 'o') ADVANCE(208);
      if (lookahead == 's') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(201);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '#') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(201);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(231);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(232);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(232);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(201);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'n') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(201);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(201);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(227);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(201);
      END_STATE();
    case 11:
      if (lookahead == 'D') ADVANCE(211);
      if (lookahead == 'I') ADVANCE(209);
      if (lookahead == 'P') ADVANCE(204);
      if (lookahead == 'T') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(201);
      END_STATE();
    case 12:
      if (lookahead == 'S') ADVANCE(58);
      END_STATE();
    case 13:
      if (lookahead == 'S') ADVANCE(154);
      END_STATE();
    case 14:
      if (lookahead == '^') ADVANCE(225);
      if (lookahead == 'o') ADVANCE(208);
      if (lookahead == 's') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(201);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(40);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(85);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(142);
      if (lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(198);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(242);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(241);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(239);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 62:
      if (lookahead == 'f') ADVANCE(74);
      END_STATE();
    case 63:
      if (lookahead == 'f') ADVANCE(59);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(185);
      END_STATE();
    case 65:
      if (lookahead == 'g') ADVANCE(68);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(193);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(237);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(184);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 110:
      if (lookahead == 'p') ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 112:
      if (lookahead == 'p') ADVANCE(145);
      END_STATE();
    case 113:
      if (lookahead == 'p') ADVANCE(84);
      END_STATE();
    case 114:
      if (lookahead == 'q') ADVANCE(149);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(197);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(140);
      if (lookahead == 'v') ADVANCE(20);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 146:
      if (lookahead == 'u') ADVANCE(155);
      if (lookahead == 'x') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(236);
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 147:
      if (lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 148:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 149:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 150:
      if (lookahead == 'x') ADVANCE(139);
      END_STATE();
    case 151:
      if (lookahead == 'x') ADVANCE(19);
      END_STATE();
    case 152:
      if (lookahead == 'y') ADVANCE(195);
      END_STATE();
    case 153:
      if (lookahead == 'y') ADVANCE(127);
      END_STATE();
    case 154:
      if (lookahead == 'y') ADVANCE(134);
      END_STATE();
    case 155:
      if (lookahead == '{') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 156:
      if (lookahead == '}') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      END_STATE();
    case 157:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(157)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(201);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 162:
      if (eof) ADVANCE(175);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '#') ADVANCE(200);
      if (lookahead == '(') ADVANCE(194);
      if (lookahead == ')') ADVANCE(196);
      if (lookahead == '*') ADVANCE(192);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == ':') ADVANCE(177);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead == 'A') ADVANCE(78);
      if (lookahead == 'C') ADVANCE(102);
      if (lookahead == 'D') ADVANCE(39);
      if (lookahead == 'E') ADVANCE(150);
      if (lookahead == 'I') ADVANCE(33);
      if (lookahead == 'L') ADVANCE(103);
      if (lookahead == 'M') ADVANCE(15);
      if (lookahead == 'P') ADVANCE(16);
      if (lookahead == 'R') ADVANCE(49);
      if (lookahead == 'T') ADVANCE(67);
      if (lookahead == 'V') ADVANCE(17);
      if (lookahead == '^') ADVANCE(225);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'c') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == 'f') ADVANCE(116);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(26);
      if (lookahead == 'p') ADVANCE(119);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(162)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 163:
      if (eof) ADVANCE(175);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '(') ADVANCE(194);
      if (lookahead == '*') ADVANCE(192);
      if (lookahead == 'A') ADVANCE(214);
      if (lookahead == 'C') ADVANCE(217);
      if (lookahead == 'E') ADVANCE(222);
      if (lookahead == 'I') ADVANCE(215);
      if (lookahead == 'L') ADVANCE(218);
      if (lookahead == 'M') ADVANCE(203);
      if (lookahead == 'P') ADVANCE(220);
      if (lookahead == 'R') ADVANCE(212);
      if (lookahead == 'V') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(163)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(201);
      END_STATE();
    case 164:
      if (eof) ADVANCE(175);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '*') ADVANCE(192);
      if (lookahead == 'A') ADVANCE(214);
      if (lookahead == 'C') ADVANCE(217);
      if (lookahead == 'E') ADVANCE(222);
      if (lookahead == 'I') ADVANCE(215);
      if (lookahead == 'L') ADVANCE(218);
      if (lookahead == 'M') ADVANCE(203);
      if (lookahead == 'P') ADVANCE(220);
      if (lookahead == 'R') ADVANCE(212);
      if (lookahead == 'V') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(164)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(201);
      END_STATE();
    case 165:
      if (eof) ADVANCE(175);
      if (lookahead == '#') ADVANCE(200);
      if (lookahead == '(') ADVANCE(194);
      if (lookahead == '*') ADVANCE(192);
      if (lookahead == 'A') ADVANCE(214);
      if (lookahead == 'C') ADVANCE(217);
      if (lookahead == 'E') ADVANCE(222);
      if (lookahead == 'I') ADVANCE(215);
      if (lookahead == 'L') ADVANCE(218);
      if (lookahead == 'M') ADVANCE(203);
      if (lookahead == 'P') ADVANCE(220);
      if (lookahead == 'R') ADVANCE(212);
      if (lookahead == 'V') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(165)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(201);
      END_STATE();
    case 166:
      if (eof) ADVANCE(175);
      if (lookahead == '#') ADVANCE(200);
      if (lookahead == '*') ADVANCE(192);
      if (lookahead == 'A') ADVANCE(214);
      if (lookahead == 'C') ADVANCE(217);
      if (lookahead == 'E') ADVANCE(222);
      if (lookahead == 'I') ADVANCE(215);
      if (lookahead == 'L') ADVANCE(218);
      if (lookahead == 'M') ADVANCE(203);
      if (lookahead == 'P') ADVANCE(220);
      if (lookahead == 'R') ADVANCE(212);
      if (lookahead == 'V') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(166)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(201);
      END_STATE();
    case 167:
      if (eof) ADVANCE(175);
      if (lookahead == '#') ADVANCE(200);
      if (lookahead == 'A') ADVANCE(214);
      if (lookahead == 'C') ADVANCE(217);
      if (lookahead == 'E') ADVANCE(222);
      if (lookahead == 'I') ADVANCE(215);
      if (lookahead == 'L') ADVANCE(218);
      if (lookahead == 'M') ADVANCE(203);
      if (lookahead == 'P') ADVANCE(220);
      if (lookahead == 'R') ADVANCE(212);
      if (lookahead == 'V') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(167)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(201);
      END_STATE();
    case 168:
      if (eof) ADVANCE(175);
      if (lookahead == '(') ADVANCE(194);
      if (lookahead == '*') ADVANCE(192);
      if (lookahead == 'A') ADVANCE(214);
      if (lookahead == 'C') ADVANCE(217);
      if (lookahead == 'E') ADVANCE(222);
      if (lookahead == 'I') ADVANCE(215);
      if (lookahead == 'L') ADVANCE(218);
      if (lookahead == 'M') ADVANCE(203);
      if (lookahead == 'P') ADVANCE(220);
      if (lookahead == 'R') ADVANCE(212);
      if (lookahead == 'V') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(168)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(201);
      END_STATE();
    case 169:
      if (eof) ADVANCE(175);
      if (lookahead == '*') ADVANCE(228);
      if (lookahead == 'A') ADVANCE(78);
      if (lookahead == 'C') ADVANCE(102);
      if (lookahead == 'E') ADVANCE(150);
      if (lookahead == 'I') ADVANCE(90);
      if (lookahead == 'L') ADVANCE(103);
      if (lookahead == 'M') ADVANCE(15);
      if (lookahead == 'P') ADVANCE(115);
      if (lookahead == 'R') ADVANCE(49);
      if (lookahead == 'V') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(169)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 170:
      if (eof) ADVANCE(175);
      if (lookahead == '*') ADVANCE(192);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead == 'A') ADVANCE(214);
      if (lookahead == 'C') ADVANCE(217);
      if (lookahead == 'E') ADVANCE(222);
      if (lookahead == 'I') ADVANCE(215);
      if (lookahead == 'L') ADVANCE(218);
      if (lookahead == 'M') ADVANCE(203);
      if (lookahead == 'P') ADVANCE(220);
      if (lookahead == 'R') ADVANCE(212);
      if (lookahead == 'V') ADVANCE(206);
      if (lookahead == '^') ADVANCE(225);
      if (lookahead == 'c') ADVANCE(219);
      if (lookahead == 'f') ADVANCE(221);
      if (lookahead == 'o') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(170)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(201);
      END_STATE();
    case 171:
      if (eof) ADVANCE(175);
      if (lookahead == '*') ADVANCE(192);
      if (lookahead == 'A') ADVANCE(214);
      if (lookahead == 'C') ADVANCE(217);
      if (lookahead == 'D') ADVANCE(211);
      if (lookahead == 'E') ADVANCE(222);
      if (lookahead == 'I') ADVANCE(210);
      if (lookahead == 'L') ADVANCE(218);
      if (lookahead == 'M') ADVANCE(203);
      if (lookahead == 'P') ADVANCE(205);
      if (lookahead == 'R') ADVANCE(212);
      if (lookahead == 'T') ADVANCE(213);
      if (lookahead == 'V') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(171)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(201);
      END_STATE();
    case 172:
      if (eof) ADVANCE(175);
      if (lookahead == '*') ADVANCE(192);
      if (lookahead == 'A') ADVANCE(214);
      if (lookahead == 'C') ADVANCE(217);
      if (lookahead == 'E') ADVANCE(222);
      if (lookahead == 'I') ADVANCE(215);
      if (lookahead == 'L') ADVANCE(218);
      if (lookahead == 'M') ADVANCE(203);
      if (lookahead == 'P') ADVANCE(220);
      if (lookahead == 'R') ADVANCE(212);
      if (lookahead == 'V') ADVANCE(206);
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(172)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(201);
      END_STATE();
    case 173:
      if (eof) ADVANCE(175);
      if (lookahead == 'A') ADVANCE(214);
      if (lookahead == 'C') ADVANCE(217);
      if (lookahead == 'D') ADVANCE(211);
      if (lookahead == 'E') ADVANCE(222);
      if (lookahead == 'I') ADVANCE(210);
      if (lookahead == 'L') ADVANCE(218);
      if (lookahead == 'M') ADVANCE(203);
      if (lookahead == 'P') ADVANCE(205);
      if (lookahead == 'R') ADVANCE(212);
      if (lookahead == 'T') ADVANCE(213);
      if (lookahead == 'V') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(173)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(201);
      END_STATE();
    case 174:
      if (eof) ADVANCE(175);
      if (lookahead == 'A') ADVANCE(214);
      if (lookahead == 'C') ADVANCE(217);
      if (lookahead == 'E') ADVANCE(222);
      if (lookahead == 'I') ADVANCE(215);
      if (lookahead == 'L') ADVANCE(218);
      if (lookahead == 'M') ADVANCE(203);
      if (lookahead == 'P') ADVANCE(220);
      if (lookahead == 'R') ADVANCE(212);
      if (lookahead == 'V') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(174)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(201);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_Alias);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_Profile);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_Extension);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_Invariant);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_Instance);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_ValueSet);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_CodeSystem);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_Mapping);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_Logical);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_Resource);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_Parent);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_Title);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_Description);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_Id);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_exactly);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_obeys);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(227);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'b') ADVANCE(40);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(191);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(139);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'y') ADVANCE(133);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_cardinality_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(3);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(234);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(235);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_example);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_preferred);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_extensible);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_named);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 162},
  [3] = {.lex_state = 162},
  [4] = {.lex_state = 162},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 162},
  [8] = {.lex_state = 170},
  [9] = {.lex_state = 162},
  [10] = {.lex_state = 162},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 162},
  [13] = {.lex_state = 162},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 170},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 162},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 162},
  [21] = {.lex_state = 162},
  [22] = {.lex_state = 171},
  [23] = {.lex_state = 171},
  [24] = {.lex_state = 162},
  [25] = {.lex_state = 173},
  [26] = {.lex_state = 173},
  [27] = {.lex_state = 162},
  [28] = {.lex_state = 162},
  [29] = {.lex_state = 162},
  [30] = {.lex_state = 162},
  [31] = {.lex_state = 162},
  [32] = {.lex_state = 165},
  [33] = {.lex_state = 165},
  [34] = {.lex_state = 162},
  [35] = {.lex_state = 162},
  [36] = {.lex_state = 162},
  [37] = {.lex_state = 163},
  [38] = {.lex_state = 163},
  [39] = {.lex_state = 162},
  [40] = {.lex_state = 164},
  [41] = {.lex_state = 168},
  [42] = {.lex_state = 169},
  [43] = {.lex_state = 166},
  [44] = {.lex_state = 166},
  [45] = {.lex_state = 169},
  [46] = {.lex_state = 164},
  [47] = {.lex_state = 162},
  [48] = {.lex_state = 168},
  [49] = {.lex_state = 172},
  [50] = {.lex_state = 172},
  [51] = {.lex_state = 162},
  [52] = {.lex_state = 162},
  [53] = {.lex_state = 162},
  [54] = {.lex_state = 162},
  [55] = {.lex_state = 162},
  [56] = {.lex_state = 162},
  [57] = {.lex_state = 162},
  [58] = {.lex_state = 162},
  [59] = {.lex_state = 167},
  [60] = {.lex_state = 162},
  [61] = {.lex_state = 167},
  [62] = {.lex_state = 162},
  [63] = {.lex_state = 162},
  [64] = {.lex_state = 162},
  [65] = {.lex_state = 162},
  [66] = {.lex_state = 162},
  [67] = {.lex_state = 162},
  [68] = {.lex_state = 174},
  [69] = {.lex_state = 162},
  [70] = {.lex_state = 162},
  [71] = {.lex_state = 162},
  [72] = {.lex_state = 162},
  [73] = {.lex_state = 162},
  [74] = {.lex_state = 162},
  [75] = {.lex_state = 162},
  [76] = {.lex_state = 174},
  [77] = {.lex_state = 162},
  [78] = {.lex_state = 162},
  [79] = {.lex_state = 162},
  [80] = {.lex_state = 162},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 162},
  [83] = {.lex_state = 162},
  [84] = {.lex_state = 162},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 14},
  [96] = {.lex_state = 11},
  [97] = {.lex_state = 11},
  [98] = {.lex_state = 157},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 157},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 162},
  [104] = {.lex_state = 157},
  [105] = {.lex_state = 162},
  [106] = {.lex_state = 157},
  [107] = {.lex_state = 157},
  [108] = {.lex_state = 157},
  [109] = {.lex_state = 157},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 157},
  [117] = {.lex_state = 157},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 157},
  [121] = {.lex_state = 157},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 157},
  [124] = {.lex_state = 157},
  [125] = {.lex_state = 157},
  [126] = {.lex_state = 157},
  [127] = {.lex_state = 157},
  [128] = {.lex_state = 157},
  [129] = {.lex_state = 157},
  [130] = {.lex_state = 157},
  [131] = {.lex_state = 157},
  [132] = {.lex_state = 10},
  [133] = {.lex_state = 157},
  [134] = {.lex_state = 157},
  [135] = {.lex_state = 157},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 157},
  [138] = {.lex_state = 157},
  [139] = {.lex_state = 157},
  [140] = {.lex_state = 162},
  [141] = {.lex_state = 157},
  [142] = {.lex_state = 157},
  [143] = {.lex_state = 162},
  [144] = {.lex_state = 162},
  [145] = {.lex_state = 162},
  [146] = {.lex_state = 162},
  [147] = {.lex_state = 162},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 162},
  [150] = {.lex_state = 162},
  [151] = {.lex_state = 162},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 162},
  [154] = {.lex_state = 162},
  [155] = {.lex_state = 162},
  [156] = {.lex_state = 162},
  [157] = {.lex_state = 162},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 162},
  [160] = {.lex_state = 162},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 162},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 162},
  [166] = {.lex_state = 162},
  [167] = {.lex_state = 162},
  [168] = {.lex_state = 162},
  [169] = {.lex_state = 162},
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
    [anon_sym_Title] = ACTIONS(1),
    [anon_sym_Description] = ACTIONS(1),
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
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_system] = ACTIONS(1),
    [anon_sym_named] = ACTIONS(1),
  },
  [1] = {
    [sym_doc] = STATE(148),
    [sym_alias] = STATE(5),
    [sym_profile] = STATE(5),
    [sym_extension] = STATE(5),
    [sym_invariant] = STATE(5),
    [sym_instance] = STATE(5),
    [sym_valueset] = STATE(5),
    [sym_codesystem] = STATE(5),
    [sym_mapping] = STATE(5),
    [sym_logical] = STATE(5),
    [sym_resource] = STATE(5),
    [aux_sym_doc_repeat1] = STATE(5),
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
  [0] = 10,
    ACTIONS(27), 1,
      anon_sym_Parent,
    ACTIONS(29), 1,
      anon_sym_Title,
    ACTIONS(31), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Id,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(7), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(12), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(35), 4,
      sym_parent,
      sym_title,
      sym_description,
      sym_id,
    STATE(80), 7,
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
  [52] = 10,
    ACTIONS(27), 1,
      anon_sym_Parent,
    ACTIONS(29), 1,
      anon_sym_Title,
    ACTIONS(31), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Id,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(4), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(17), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(35), 4,
      sym_parent,
      sym_title,
      sym_description,
      sym_id,
    STATE(80), 7,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
    ACTIONS(37), 11,
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
  [104] = 10,
    ACTIONS(27), 1,
      anon_sym_Parent,
    ACTIONS(29), 1,
      anon_sym_Title,
    ACTIONS(31), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Id,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(7), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(9), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(35), 4,
      sym_parent,
      sym_title,
      sym_description,
      sym_id,
    STATE(80), 7,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
    ACTIONS(39), 11,
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
  [156] = 12,
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
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(6), 11,
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
  [203] = 12,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      anon_sym_Alias,
    ACTIONS(48), 1,
      anon_sym_Profile,
    ACTIONS(51), 1,
      anon_sym_Extension,
    ACTIONS(54), 1,
      anon_sym_Invariant,
    ACTIONS(57), 1,
      anon_sym_Instance,
    ACTIONS(60), 1,
      anon_sym_ValueSet,
    ACTIONS(63), 1,
      anon_sym_CodeSystem,
    ACTIONS(66), 1,
      anon_sym_Mapping,
    ACTIONS(69), 1,
      anon_sym_Logical,
    ACTIONS(72), 1,
      anon_sym_Resource,
    STATE(6), 11,
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
  [250] = 7,
    ACTIONS(77), 1,
      anon_sym_Parent,
    ACTIONS(80), 1,
      anon_sym_Title,
    ACTIONS(83), 1,
      anon_sym_Description,
    ACTIONS(86), 1,
      anon_sym_Id,
    STATE(7), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(35), 4,
      sym_parent,
      sym_title,
      sym_description,
      sym_id,
    ACTIONS(75), 12,
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
  [287] = 4,
    ACTIONS(91), 1,
      aux_sym_sequence_token1,
    ACTIONS(93), 1,
      aux_sym_cardinality_token1,
    STATE(15), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(89), 18,
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
  [317] = 4,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(13), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(80), 7,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
    ACTIONS(95), 11,
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
  [347] = 1,
    ACTIONS(97), 21,
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
      anon_sym_Title,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_and,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [371] = 7,
    ACTIONS(80), 1,
      anon_sym_Title,
    ACTIONS(83), 1,
      anon_sym_Description,
    ACTIONS(99), 1,
      anon_sym_Parent,
    ACTIONS(102), 1,
      anon_sym_Id,
    STATE(11), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(35), 4,
      sym_parent,
      sym_title,
      sym_description,
      sym_id,
    ACTIONS(75), 11,
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
  [407] = 4,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(13), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(80), 7,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
    ACTIONS(105), 11,
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
  [437] = 4,
    ACTIONS(109), 1,
      anon_sym_STAR,
    STATE(13), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(80), 7,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
    ACTIONS(107), 11,
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
  [467] = 7,
    ACTIONS(29), 1,
      anon_sym_Title,
    ACTIONS(31), 1,
      anon_sym_Description,
    ACTIONS(114), 1,
      anon_sym_Parent,
    ACTIONS(116), 1,
      anon_sym_Id,
    STATE(11), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(35), 4,
      sym_parent,
      sym_title,
      sym_description,
      sym_id,
    ACTIONS(112), 11,
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
  [503] = 4,
    ACTIONS(120), 1,
      aux_sym_sequence_token1,
    ACTIONS(123), 1,
      aux_sym_cardinality_token1,
    STATE(15), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(118), 18,
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
  [533] = 7,
    ACTIONS(29), 1,
      anon_sym_Title,
    ACTIONS(31), 1,
      anon_sym_Description,
    ACTIONS(114), 1,
      anon_sym_Parent,
    ACTIONS(116), 1,
      anon_sym_Id,
    STATE(11), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(35), 4,
      sym_parent,
      sym_title,
      sym_description,
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
  [569] = 4,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(13), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(80), 7,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
    ACTIONS(39), 11,
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
  [599] = 7,
    ACTIONS(29), 1,
      anon_sym_Title,
    ACTIONS(31), 1,
      anon_sym_Description,
    ACTIONS(114), 1,
      anon_sym_Parent,
    ACTIONS(116), 1,
      anon_sym_Id,
    STATE(16), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(35), 4,
      sym_parent,
      sym_title,
      sym_description,
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
  [635] = 7,
    ACTIONS(29), 1,
      anon_sym_Title,
    ACTIONS(31), 1,
      anon_sym_Description,
    ACTIONS(114), 1,
      anon_sym_Parent,
    ACTIONS(116), 1,
      anon_sym_Id,
    STATE(14), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(35), 4,
      sym_parent,
      sym_title,
      sym_description,
      sym_id,
    ACTIONS(129), 11,
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
  [671] = 2,
    ACTIONS(97), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
    ACTIONS(131), 17,
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
  [695] = 7,
    ACTIONS(135), 1,
      anon_sym_EQ,
    ACTIONS(137), 1,
      anon_sym_from,
    ACTIONS(139), 1,
      anon_sym_contains,
    ACTIONS(141), 1,
      anon_sym_obeys,
    ACTIONS(143), 1,
      anon_sym_CARET,
    STATE(158), 1,
      sym_caret_path,
    ACTIONS(133), 12,
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
  [728] = 3,
    ACTIONS(145), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(118), 16,
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
      anon_sym_Title,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_STAR,
  [753] = 3,
    ACTIONS(148), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(89), 16,
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
      anon_sym_Title,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_STAR,
  [778] = 1,
    ACTIONS(150), 17,
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
      anon_sym_Title,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [798] = 3,
    ACTIONS(152), 1,
      aux_sym_sequence_token1,
    STATE(25), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(118), 15,
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
      anon_sym_Title,
      anon_sym_Description,
      anon_sym_Id,
  [822] = 3,
    ACTIONS(155), 1,
      aux_sym_sequence_token1,
    STATE(25), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(89), 15,
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
      anon_sym_Title,
      anon_sym_Description,
      anon_sym_Id,
  [846] = 1,
    ACTIONS(157), 17,
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
      anon_sym_Title,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [866] = 1,
    ACTIONS(131), 17,
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
  [886] = 1,
    ACTIONS(159), 17,
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
      anon_sym_Title,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [906] = 1,
    ACTIONS(161), 17,
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
      anon_sym_Title,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [926] = 1,
    ACTIONS(163), 16,
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
      anon_sym_Title,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_STAR,
  [945] = 3,
    ACTIONS(165), 1,
      aux_sym_sequence_token1,
    STATE(33), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(89), 14,
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
      anon_sym_POUND,
  [968] = 3,
    ACTIONS(167), 1,
      aux_sym_sequence_token1,
    STATE(33), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(118), 14,
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
      anon_sym_POUND,
  [991] = 1,
    ACTIONS(170), 16,
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
      anon_sym_Title,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_STAR,
  [1010] = 1,
    ACTIONS(172), 16,
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
      anon_sym_Title,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_STAR,
  [1029] = 1,
    ACTIONS(174), 16,
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
      anon_sym_Title,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_STAR,
  [1048] = 3,
    ACTIONS(176), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(118), 14,
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
      anon_sym_DQUOTE,
  [1071] = 3,
    ACTIONS(179), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(89), 14,
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
      anon_sym_DQUOTE,
  [1094] = 1,
    ACTIONS(181), 16,
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
      anon_sym_Title,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_STAR,
  [1113] = 3,
    ACTIONS(183), 1,
      aux_sym_sequence_token1,
    STATE(40), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(118), 13,
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
      anon_sym_DQUOTE,
  [1135] = 3,
    ACTIONS(186), 1,
      aux_sym_sequence_token1,
    STATE(41), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(118), 13,
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
  [1157] = 3,
    ACTIONS(191), 1,
      anon_sym_STAR,
    ACTIONS(193), 2,
      aux_sym_cardinality_token1,
      anon_sym_STAR2,
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
      anon_sym_and,
  [1179] = 3,
    ACTIONS(195), 1,
      aux_sym_sequence_token1,
    STATE(43), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(118), 13,
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
      anon_sym_POUND,
  [1201] = 3,
    ACTIONS(198), 1,
      aux_sym_sequence_token1,
    STATE(43), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(89), 13,
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
      anon_sym_POUND,
  [1223] = 3,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(204), 2,
      aux_sym_cardinality_token1,
      anon_sym_STAR2,
    ACTIONS(200), 12,
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
  [1245] = 3,
    ACTIONS(206), 1,
      aux_sym_sequence_token1,
    STATE(40), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(89), 13,
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
      anon_sym_DQUOTE,
  [1267] = 3,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      sym_string,
    ACTIONS(208), 13,
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
  [1289] = 3,
    ACTIONS(212), 1,
      aux_sym_sequence_token1,
    STATE(41), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(89), 13,
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
  [1311] = 3,
    ACTIONS(214), 1,
      aux_sym_sequence_token1,
    STATE(49), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(118), 13,
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
  [1333] = 3,
    ACTIONS(217), 1,
      aux_sym_sequence_token1,
    STATE(49), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(89), 13,
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
  [1355] = 3,
    ACTIONS(221), 1,
      anon_sym_and,
    STATE(58), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(219), 12,
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
  [1376] = 3,
    ACTIONS(225), 1,
      anon_sym_and,
    STATE(52), 1,
      aux_sym_contains_rule_repeat1,
    ACTIONS(223), 12,
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
  [1397] = 3,
    ACTIONS(230), 1,
      anon_sym_and,
    STATE(57), 1,
      aux_sym_contains_rule_repeat1,
    ACTIONS(228), 12,
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
  [1418] = 3,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      sym_strength,
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
  [1439] = 3,
    ACTIONS(238), 1,
      anon_sym_and,
    STATE(55), 1,
      aux_sym_obeys_rule_repeat1,
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
  [1460] = 3,
    ACTIONS(221), 1,
      anon_sym_and,
    STATE(55), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(241), 12,
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
  [1481] = 3,
    ACTIONS(230), 1,
      anon_sym_and,
    STATE(52), 1,
      aux_sym_contains_rule_repeat1,
    ACTIONS(243), 12,
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
  [1502] = 3,
    ACTIONS(221), 1,
      anon_sym_and,
    STATE(55), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(245), 12,
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
  [1523] = 3,
    ACTIONS(247), 1,
      aux_sym_sequence_token1,
    STATE(59), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(118), 12,
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
  [1544] = 1,
    ACTIONS(250), 14,
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
      anon_sym_DQUOTE,
  [1561] = 3,
    ACTIONS(252), 1,
      aux_sym_sequence_token1,
    STATE(59), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(89), 12,
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
  [1582] = 2,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(97), 13,
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
  [1601] = 3,
    ACTIONS(221), 1,
      anon_sym_and,
    STATE(56), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(245), 12,
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
  [1622] = 1,
    ACTIONS(256), 14,
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
      anon_sym_DQUOTE,
  [1639] = 1,
    ACTIONS(258), 13,
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
  [1655] = 1,
    ACTIONS(260), 13,
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
  [1671] = 2,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 12,
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
  [1689] = 3,
    ACTIONS(266), 1,
      aux_sym_sequence_token1,
    STATE(76), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(89), 11,
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
  [1709] = 1,
    ACTIONS(189), 13,
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
  [1725] = 1,
    ACTIONS(268), 13,
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
  [1741] = 1,
    ACTIONS(208), 13,
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
  [1757] = 1,
    ACTIONS(236), 13,
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
  [1773] = 1,
    ACTIONS(223), 13,
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
  [1789] = 2,
    ACTIONS(270), 1,
      anon_sym_POUND,
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
  [1807] = 1,
    ACTIONS(272), 13,
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
  [1823] = 3,
    ACTIONS(274), 1,
      aux_sym_sequence_token1,
    STATE(76), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(118), 11,
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
  [1843] = 1,
    ACTIONS(277), 12,
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
  [1858] = 1,
    ACTIONS(279), 12,
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
  [1873] = 1,
    ACTIONS(281), 12,
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
  [1888] = 1,
    ACTIONS(283), 12,
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
  [1903] = 2,
    ACTIONS(287), 1,
      anon_sym_POUND,
    ACTIONS(285), 11,
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
  [1920] = 1,
    ACTIONS(289), 12,
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
  [1935] = 1,
    ACTIONS(291), 12,
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
  [1950] = 1,
    ACTIONS(293), 12,
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
  [1965] = 9,
    ACTIONS(295), 1,
      anon_sym_POUND,
    ACTIONS(297), 1,
      aux_sym_sequence_token1,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(301), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(44), 1,
      aux_sym_sequence_repeat1,
    STATE(47), 1,
      sym_code,
    STATE(74), 1,
      sym_sequence,
    STATE(82), 1,
      sym_value,
    STATE(71), 3,
      sym_name,
      sym_string,
      sym_multiline_string,
  [1995] = 9,
    ACTIONS(295), 1,
      anon_sym_POUND,
    ACTIONS(297), 1,
      aux_sym_sequence_token1,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(301), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(44), 1,
      aux_sym_sequence_repeat1,
    STATE(47), 1,
      sym_code,
    STATE(74), 1,
      sym_sequence,
    STATE(83), 1,
      sym_value,
    STATE(71), 3,
      sym_name,
      sym_string,
      sym_multiline_string,
  [2025] = 9,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(301), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(303), 1,
      anon_sym_POUND,
    ACTIONS(305), 1,
      aux_sym_sequence_token1,
    STATE(32), 1,
      aux_sym_sequence_repeat1,
    STATE(47), 1,
      sym_code,
    STATE(62), 1,
      sym_sequence,
    STATE(67), 1,
      sym_value,
    STATE(71), 3,
      sym_name,
      sym_string,
      sym_multiline_string,
  [2055] = 1,
    ACTIONS(307), 11,
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
  [2069] = 1,
    ACTIONS(309), 11,
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
  [2083] = 1,
    ACTIONS(311), 11,
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
  [2097] = 1,
    ACTIONS(285), 11,
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
  [2111] = 1,
    ACTIONS(313), 11,
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
  [2125] = 1,
    ACTIONS(315), 11,
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
  [2139] = 6,
    ACTIONS(27), 1,
      anon_sym_Parent,
    ACTIONS(29), 1,
      anon_sym_Title,
    ACTIONS(31), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Id,
    STATE(2), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(35), 4,
      sym_parent,
      sym_title,
      sym_description,
      sym_id,
  [2162] = 9,
    ACTIONS(143), 1,
      anon_sym_CARET,
    ACTIONS(317), 1,
      anon_sym_obeys,
    ACTIONS(319), 1,
      aux_sym_sequence_token1,
    ACTIONS(321), 1,
      anon_sym_system,
    STATE(8), 1,
      aux_sym_sequence_repeat1,
    STATE(20), 1,
      sym_sequence,
    STATE(21), 1,
      sym_path,
    STATE(140), 1,
      sym_name,
    STATE(152), 1,
      sym_caret_path,
  [2190] = 3,
    ACTIONS(323), 1,
      aux_sym_sequence_token1,
    STATE(97), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(89), 4,
      anon_sym_Parent,
      anon_sym_Title,
      anon_sym_Description,
      anon_sym_Id,
  [2203] = 3,
    ACTIONS(325), 1,
      aux_sym_sequence_token1,
    STATE(97), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(118), 4,
      anon_sym_Parent,
      anon_sym_Title,
      anon_sym_Description,
      anon_sym_Id,
  [2216] = 5,
    ACTIONS(328), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(53), 1,
      sym_item,
    STATE(102), 1,
      aux_sym_sequence_repeat1,
    STATE(105), 1,
      sym_name,
  [2232] = 4,
    ACTIONS(123), 1,
      aux_sym_cardinality_token1,
    ACTIONS(330), 1,
      aux_sym_sequence_token1,
    STATE(99), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(118), 2,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [2246] = 5,
    ACTIONS(333), 1,
      anon_sym_POUND,
    ACTIONS(335), 1,
      aux_sym_sequence_token1,
    STATE(61), 1,
      aux_sym_sequence_repeat1,
    STATE(81), 1,
      sym_sequence,
    STATE(91), 1,
      sym_code,
  [2262] = 5,
    ACTIONS(328), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(73), 1,
      sym_item,
    STATE(102), 1,
      aux_sym_sequence_repeat1,
    STATE(105), 1,
      sym_name,
  [2278] = 4,
    ACTIONS(93), 1,
      aux_sym_cardinality_token1,
    ACTIONS(337), 1,
      aux_sym_sequence_token1,
    STATE(99), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(89), 2,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [2292] = 1,
    ACTIONS(339), 4,
      anon_sym_example,
      anon_sym_preferred,
      anon_sym_extensible,
      anon_sym_required,
  [2299] = 4,
    ACTIONS(341), 1,
      aux_sym_sequence_token1,
    STATE(3), 1,
      sym_name,
    STATE(10), 1,
      sym_sequence,
    STATE(23), 1,
      aux_sym_sequence_repeat1,
  [2312] = 4,
    ACTIONS(343), 1,
      aux_sym_cardinality_token1,
    ACTIONS(345), 1,
      anon_sym_DOT_DOT,
    ACTIONS(347), 1,
      anon_sym_named,
    STATE(70), 1,
      sym_cardinality,
  [2325] = 4,
    ACTIONS(349), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(50), 1,
      aux_sym_sequence_repeat1,
    STATE(72), 1,
      sym_name,
  [2338] = 4,
    ACTIONS(351), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(26), 1,
      aux_sym_sequence_repeat1,
    STATE(39), 1,
      sym_name,
  [2351] = 4,
    ACTIONS(353), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(48), 1,
      aux_sym_sequence_repeat1,
    STATE(54), 1,
      sym_name,
  [2364] = 4,
    ACTIONS(351), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(26), 1,
      aux_sym_sequence_repeat1,
    STATE(34), 1,
      sym_name,
  [2377] = 3,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
    STATE(110), 1,
      aux_sym_string_repeat1,
    ACTIONS(357), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [2388] = 4,
    ACTIONS(118), 1,
      anon_sym_DOT_DOT,
    ACTIONS(123), 1,
      aux_sym_cardinality_token1,
    ACTIONS(360), 1,
      aux_sym_sequence_token1,
    STATE(111), 1,
      aux_sym_sequence_repeat1,
  [2401] = 3,
    ACTIONS(363), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(118), 1,
      aux_sym_string_repeat1,
    ACTIONS(365), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [2412] = 3,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    STATE(119), 1,
      aux_sym_string_repeat1,
    ACTIONS(369), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [2423] = 4,
    ACTIONS(89), 1,
      anon_sym_DOT_DOT,
    ACTIONS(93), 1,
      aux_sym_cardinality_token1,
    ACTIONS(371), 1,
      aux_sym_sequence_token1,
    STATE(111), 1,
      aux_sym_sequence_repeat1,
  [2436] = 3,
    ACTIONS(355), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(115), 1,
      aux_sym_string_repeat1,
    ACTIONS(373), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [2447] = 4,
    ACTIONS(376), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(94), 1,
      sym_name,
    STATE(96), 1,
      aux_sym_sequence_repeat1,
  [2460] = 4,
    ACTIONS(378), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(114), 1,
      aux_sym_sequence_repeat1,
    STATE(143), 1,
      sym_name,
  [2473] = 3,
    ACTIONS(380), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(115), 1,
      aux_sym_string_repeat1,
    ACTIONS(382), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [2484] = 3,
    ACTIONS(384), 1,
      anon_sym_DQUOTE,
    STATE(110), 1,
      aux_sym_string_repeat1,
    ACTIONS(386), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [2495] = 4,
    ACTIONS(349), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(50), 1,
      aux_sym_sequence_repeat1,
    STATE(51), 1,
      sym_name,
  [2508] = 4,
    ACTIONS(341), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(23), 1,
      aux_sym_sequence_repeat1,
    STATE(39), 1,
      sym_name,
  [2521] = 3,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(301), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(36), 2,
      sym_string,
      sym_multiline_string,
  [2532] = 4,
    ACTIONS(388), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(68), 1,
      aux_sym_sequence_repeat1,
    STATE(93), 1,
      sym_name,
  [2545] = 4,
    ACTIONS(388), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(68), 1,
      aux_sym_sequence_repeat1,
    STATE(92), 1,
      sym_name,
  [2558] = 4,
    ACTIONS(388), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(68), 1,
      aux_sym_sequence_repeat1,
    STATE(90), 1,
      sym_name,
  [2571] = 4,
    ACTIONS(388), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(68), 1,
      aux_sym_sequence_repeat1,
    STATE(89), 1,
      sym_name,
  [2584] = 4,
    ACTIONS(341), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(23), 1,
      aux_sym_sequence_repeat1,
    STATE(34), 1,
      sym_name,
  [2597] = 4,
    ACTIONS(388), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(68), 1,
      aux_sym_sequence_repeat1,
    STATE(88), 1,
      sym_name,
  [2610] = 4,
    ACTIONS(351), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(18), 1,
      sym_name,
    STATE(26), 1,
      aux_sym_sequence_repeat1,
  [2623] = 4,
    ACTIONS(351), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(19), 1,
      sym_name,
    STATE(26), 1,
      aux_sym_sequence_repeat1,
  [2636] = 4,
    ACTIONS(349), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(50), 1,
      aux_sym_sequence_repeat1,
    STATE(63), 1,
      sym_name,
  [2649] = 3,
    ACTIONS(118), 1,
      anon_sym_EQ,
    ACTIONS(390), 1,
      aux_sym_sequence_token1,
    STATE(132), 1,
      aux_sym_sequence_repeat1,
  [2659] = 3,
    ACTIONS(393), 1,
      aux_sym_sequence_token1,
    STATE(136), 1,
      aux_sym_sequence_repeat1,
    STATE(161), 1,
      sym_sequence,
  [2669] = 3,
    ACTIONS(395), 1,
      aux_sym_sequence_token1,
    STATE(38), 1,
      aux_sym_sequence_repeat1,
    STATE(64), 1,
      sym_sequence,
  [2679] = 3,
    ACTIONS(395), 1,
      aux_sym_sequence_token1,
    STATE(38), 1,
      aux_sym_sequence_repeat1,
    STATE(60), 1,
      sym_sequence,
  [2689] = 3,
    ACTIONS(89), 1,
      anon_sym_EQ,
    ACTIONS(397), 1,
      aux_sym_sequence_token1,
    STATE(132), 1,
      aux_sym_sequence_repeat1,
  [2699] = 3,
    ACTIONS(399), 1,
      aux_sym_sequence_token1,
    STATE(46), 1,
      aux_sym_sequence_repeat1,
    STATE(64), 1,
      sym_sequence,
  [2709] = 3,
    ACTIONS(399), 1,
      aux_sym_sequence_token1,
    STATE(46), 1,
      aux_sym_sequence_repeat1,
    STATE(60), 1,
      sym_sequence,
  [2719] = 3,
    ACTIONS(388), 1,
      aux_sym_sequence_token1,
    STATE(64), 1,
      sym_sequence,
    STATE(68), 1,
      aux_sym_sequence_repeat1,
  [2729] = 3,
    ACTIONS(343), 1,
      aux_sym_cardinality_token1,
    ACTIONS(345), 1,
      anon_sym_DOT_DOT,
    STATE(77), 1,
      sym_cardinality,
  [2739] = 3,
    ACTIONS(388), 1,
      aux_sym_sequence_token1,
    STATE(60), 1,
      sym_sequence,
    STATE(68), 1,
      aux_sym_sequence_repeat1,
  [2749] = 3,
    ACTIONS(393), 1,
      aux_sym_sequence_token1,
    STATE(136), 1,
      aux_sym_sequence_repeat1,
    STATE(164), 1,
      sym_sequence,
  [2759] = 3,
    ACTIONS(343), 1,
      aux_sym_cardinality_token1,
    ACTIONS(345), 1,
      anon_sym_DOT_DOT,
    STATE(75), 1,
      sym_cardinality,
  [2769] = 2,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      sym_string,
  [2776] = 1,
    ACTIONS(401), 1,
      anon_sym_COLON,
  [2780] = 1,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
  [2784] = 1,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
  [2788] = 1,
    ACTIONS(407), 1,
      ts_builtin_sym_end,
  [2792] = 1,
    ACTIONS(409), 1,
      anon_sym_COLON,
  [2796] = 1,
    ACTIONS(411), 1,
      anon_sym_COLON,
  [2800] = 1,
    ACTIONS(413), 1,
      anon_sym_COLON,
  [2804] = 1,
    ACTIONS(415), 1,
      anon_sym_EQ,
  [2808] = 1,
    ACTIONS(417), 1,
      anon_sym_exactly,
  [2812] = 1,
    ACTIONS(419), 1,
      anon_sym_COLON,
  [2816] = 1,
    ACTIONS(421), 1,
      anon_sym_COLON,
  [2820] = 1,
    ACTIONS(423), 1,
      anon_sym_COLON,
  [2824] = 1,
    ACTIONS(425), 1,
      anon_sym_COLON,
  [2828] = 1,
    ACTIONS(427), 1,
      anon_sym_EQ,
  [2832] = 1,
    ACTIONS(429), 1,
      anon_sym_COLON,
  [2836] = 1,
    ACTIONS(431), 1,
      anon_sym_COLON,
  [2840] = 1,
    ACTIONS(433), 1,
      anon_sym_EQ,
  [2844] = 1,
    ACTIONS(435), 1,
      anon_sym_DOT_DOT,
  [2848] = 1,
    ACTIONS(437), 1,
      anon_sym_COLON,
  [2852] = 1,
    ACTIONS(439), 1,
      anon_sym_EQ,
  [2856] = 1,
    ACTIONS(441), 1,
      anon_sym_COLON,
  [2860] = 1,
    ACTIONS(443), 1,
      anon_sym_COLON,
  [2864] = 1,
    ACTIONS(445), 1,
      anon_sym_COLON,
  [2868] = 1,
    ACTIONS(447), 1,
      anon_sym_COLON,
  [2872] = 1,
    ACTIONS(449), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 156,
  [SMALL_STATE(6)] = 203,
  [SMALL_STATE(7)] = 250,
  [SMALL_STATE(8)] = 287,
  [SMALL_STATE(9)] = 317,
  [SMALL_STATE(10)] = 347,
  [SMALL_STATE(11)] = 371,
  [SMALL_STATE(12)] = 407,
  [SMALL_STATE(13)] = 437,
  [SMALL_STATE(14)] = 467,
  [SMALL_STATE(15)] = 503,
  [SMALL_STATE(16)] = 533,
  [SMALL_STATE(17)] = 569,
  [SMALL_STATE(18)] = 599,
  [SMALL_STATE(19)] = 635,
  [SMALL_STATE(20)] = 671,
  [SMALL_STATE(21)] = 695,
  [SMALL_STATE(22)] = 728,
  [SMALL_STATE(23)] = 753,
  [SMALL_STATE(24)] = 778,
  [SMALL_STATE(25)] = 798,
  [SMALL_STATE(26)] = 822,
  [SMALL_STATE(27)] = 846,
  [SMALL_STATE(28)] = 866,
  [SMALL_STATE(29)] = 886,
  [SMALL_STATE(30)] = 906,
  [SMALL_STATE(31)] = 926,
  [SMALL_STATE(32)] = 945,
  [SMALL_STATE(33)] = 968,
  [SMALL_STATE(34)] = 991,
  [SMALL_STATE(35)] = 1010,
  [SMALL_STATE(36)] = 1029,
  [SMALL_STATE(37)] = 1048,
  [SMALL_STATE(38)] = 1071,
  [SMALL_STATE(39)] = 1094,
  [SMALL_STATE(40)] = 1113,
  [SMALL_STATE(41)] = 1135,
  [SMALL_STATE(42)] = 1157,
  [SMALL_STATE(43)] = 1179,
  [SMALL_STATE(44)] = 1201,
  [SMALL_STATE(45)] = 1223,
  [SMALL_STATE(46)] = 1245,
  [SMALL_STATE(47)] = 1267,
  [SMALL_STATE(48)] = 1289,
  [SMALL_STATE(49)] = 1311,
  [SMALL_STATE(50)] = 1333,
  [SMALL_STATE(51)] = 1355,
  [SMALL_STATE(52)] = 1376,
  [SMALL_STATE(53)] = 1397,
  [SMALL_STATE(54)] = 1418,
  [SMALL_STATE(55)] = 1439,
  [SMALL_STATE(56)] = 1460,
  [SMALL_STATE(57)] = 1481,
  [SMALL_STATE(58)] = 1502,
  [SMALL_STATE(59)] = 1523,
  [SMALL_STATE(60)] = 1544,
  [SMALL_STATE(61)] = 1561,
  [SMALL_STATE(62)] = 1582,
  [SMALL_STATE(63)] = 1601,
  [SMALL_STATE(64)] = 1622,
  [SMALL_STATE(65)] = 1639,
  [SMALL_STATE(66)] = 1655,
  [SMALL_STATE(67)] = 1671,
  [SMALL_STATE(68)] = 1689,
  [SMALL_STATE(69)] = 1709,
  [SMALL_STATE(70)] = 1725,
  [SMALL_STATE(71)] = 1741,
  [SMALL_STATE(72)] = 1757,
  [SMALL_STATE(73)] = 1773,
  [SMALL_STATE(74)] = 1789,
  [SMALL_STATE(75)] = 1807,
  [SMALL_STATE(76)] = 1823,
  [SMALL_STATE(77)] = 1843,
  [SMALL_STATE(78)] = 1858,
  [SMALL_STATE(79)] = 1873,
  [SMALL_STATE(80)] = 1888,
  [SMALL_STATE(81)] = 1903,
  [SMALL_STATE(82)] = 1920,
  [SMALL_STATE(83)] = 1935,
  [SMALL_STATE(84)] = 1950,
  [SMALL_STATE(85)] = 1965,
  [SMALL_STATE(86)] = 1995,
  [SMALL_STATE(87)] = 2025,
  [SMALL_STATE(88)] = 2055,
  [SMALL_STATE(89)] = 2069,
  [SMALL_STATE(90)] = 2083,
  [SMALL_STATE(91)] = 2097,
  [SMALL_STATE(92)] = 2111,
  [SMALL_STATE(93)] = 2125,
  [SMALL_STATE(94)] = 2139,
  [SMALL_STATE(95)] = 2162,
  [SMALL_STATE(96)] = 2190,
  [SMALL_STATE(97)] = 2203,
  [SMALL_STATE(98)] = 2216,
  [SMALL_STATE(99)] = 2232,
  [SMALL_STATE(100)] = 2246,
  [SMALL_STATE(101)] = 2262,
  [SMALL_STATE(102)] = 2278,
  [SMALL_STATE(103)] = 2292,
  [SMALL_STATE(104)] = 2299,
  [SMALL_STATE(105)] = 2312,
  [SMALL_STATE(106)] = 2325,
  [SMALL_STATE(107)] = 2338,
  [SMALL_STATE(108)] = 2351,
  [SMALL_STATE(109)] = 2364,
  [SMALL_STATE(110)] = 2377,
  [SMALL_STATE(111)] = 2388,
  [SMALL_STATE(112)] = 2401,
  [SMALL_STATE(113)] = 2412,
  [SMALL_STATE(114)] = 2423,
  [SMALL_STATE(115)] = 2436,
  [SMALL_STATE(116)] = 2447,
  [SMALL_STATE(117)] = 2460,
  [SMALL_STATE(118)] = 2473,
  [SMALL_STATE(119)] = 2484,
  [SMALL_STATE(120)] = 2495,
  [SMALL_STATE(121)] = 2508,
  [SMALL_STATE(122)] = 2521,
  [SMALL_STATE(123)] = 2532,
  [SMALL_STATE(124)] = 2545,
  [SMALL_STATE(125)] = 2558,
  [SMALL_STATE(126)] = 2571,
  [SMALL_STATE(127)] = 2584,
  [SMALL_STATE(128)] = 2597,
  [SMALL_STATE(129)] = 2610,
  [SMALL_STATE(130)] = 2623,
  [SMALL_STATE(131)] = 2636,
  [SMALL_STATE(132)] = 2649,
  [SMALL_STATE(133)] = 2659,
  [SMALL_STATE(134)] = 2669,
  [SMALL_STATE(135)] = 2679,
  [SMALL_STATE(136)] = 2689,
  [SMALL_STATE(137)] = 2699,
  [SMALL_STATE(138)] = 2709,
  [SMALL_STATE(139)] = 2719,
  [SMALL_STATE(140)] = 2729,
  [SMALL_STATE(141)] = 2739,
  [SMALL_STATE(142)] = 2749,
  [SMALL_STATE(143)] = 2759,
  [SMALL_STATE(144)] = 2769,
  [SMALL_STATE(145)] = 2776,
  [SMALL_STATE(146)] = 2780,
  [SMALL_STATE(147)] = 2784,
  [SMALL_STATE(148)] = 2788,
  [SMALL_STATE(149)] = 2792,
  [SMALL_STATE(150)] = 2796,
  [SMALL_STATE(151)] = 2800,
  [SMALL_STATE(152)] = 2804,
  [SMALL_STATE(153)] = 2808,
  [SMALL_STATE(154)] = 2812,
  [SMALL_STATE(155)] = 2816,
  [SMALL_STATE(156)] = 2820,
  [SMALL_STATE(157)] = 2824,
  [SMALL_STATE(158)] = 2828,
  [SMALL_STATE(159)] = 2832,
  [SMALL_STATE(160)] = 2836,
  [SMALL_STATE(161)] = 2840,
  [SMALL_STATE(162)] = 2844,
  [SMALL_STATE(163)] = 2848,
  [SMALL_STATE(164)] = 2852,
  [SMALL_STATE(165)] = 2856,
  [SMALL_STATE(166)] = 2860,
  [SMALL_STATE(167)] = 2864,
  [SMALL_STATE(168)] = 2868,
  [SMALL_STATE(169)] = 2872,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(165),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(169),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(168),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(145),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(156),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(155),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(159),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(151),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(150),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(157),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(149),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(163),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(160),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(154),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 5),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(166),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(167),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 5),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat2, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat2, 2), SHIFT_REPEAT(95),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(15),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_rule, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(22),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(25),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(33),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parent, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sd_metadata, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(37),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(40),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(41),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(43),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(49),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contains_rule_repeat1, 2),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contains_rule_repeat1, 2), SHIFT_REPEAT(101),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_rule, 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_rule, 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2), SHIFT_REPEAT(106),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 5),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_rule, 5),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 4),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(59),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 2, .production_id = 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3, .production_id = 3),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_value_rule, 4),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(76),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_rule, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_value_rule, 7),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strength, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sd_rule, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 5, .production_id = 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_value_rule, 4),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_value_rule, 5),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_rule, 5),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invariant, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(97),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(99),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(110),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(111),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(115),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(132),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [407] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_path, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
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
