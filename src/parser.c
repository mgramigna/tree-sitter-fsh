#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 156
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 3
#define TOKEN_COUNT 46
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
  anon_sym_Severity = 17,
  anon_sym_InstanceOf = 18,
  anon_sym_Usage = 19,
  anon_sym_Source = 20,
  anon_sym_STAR = 21,
  anon_sym_from = 22,
  anon_sym_LPAREN = 23,
  anon_sym_exactly = 24,
  anon_sym_RPAREN = 25,
  anon_sym_contains = 26,
  anon_sym_and = 27,
  anon_sym_obeys = 28,
  anon_sym_POUND = 29,
  aux_sym_sequence_token1 = 30,
  anon_sym_CARET = 31,
  aux_sym_cardinality_token1 = 32,
  anon_sym_DOT_DOT = 33,
  anon_sym_STAR2 = 34,
  anon_sym_DQUOTE = 35,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 36,
  sym_double_quote_string_fragment = 37,
  sym_escape_sequence = 38,
  anon_sym_system = 39,
  anon_sym_example = 40,
  anon_sym_preferred = 41,
  anon_sym_extensible = 42,
  anon_sym_required = 43,
  anon_sym_named = 44,
  sym_comment = 45,
  sym_doc = 46,
  sym_alias = 47,
  sym_profile = 48,
  sym_extension = 49,
  sym_invariant = 50,
  sym_instance = 51,
  sym_valueset = 52,
  sym_codesystem = 53,
  sym_mapping = 54,
  sym_logical = 55,
  sym_resource = 56,
  sym_sd_metadata = 57,
  sym_parent = 58,
  sym_title = 59,
  sym_description = 60,
  sym_id = 61,
  sym_sd_rule = 62,
  sym_cardinality_rule = 63,
  sym_valueset_rule = 64,
  sym_fixed_value_rule = 65,
  sym_contains_rule = 66,
  sym_caret_value_rule = 67,
  sym_obeys_rule = 68,
  sym_path_rule = 69,
  sym_code = 70,
  sym_sequence = 71,
  sym_caret_path = 72,
  sym_name = 73,
  sym_cardinality = 74,
  sym_string = 75,
  sym_multiline_string = 76,
  sym_path = 77,
  sym_strength = 78,
  sym_value = 79,
  sym_item = 80,
  aux_sym_doc_repeat1 = 81,
  aux_sym_profile_repeat1 = 82,
  aux_sym_profile_repeat2 = 83,
  aux_sym_contains_rule_repeat1 = 84,
  aux_sym_obeys_rule_repeat1 = 85,
  aux_sym_sequence_repeat1 = 86,
  aux_sym_string_repeat1 = 87,
  alias_sym_alias_name = 88,
  alias_sym_code_system = 89,
  alias_sym_code_value = 90,
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
  [anon_sym_Severity] = "Severity",
  [anon_sym_InstanceOf] = "InstanceOf",
  [anon_sym_Usage] = "Usage",
  [anon_sym_Source] = "Source",
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
  [sym_comment] = "comment",
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
  [anon_sym_Severity] = anon_sym_Severity,
  [anon_sym_InstanceOf] = anon_sym_InstanceOf,
  [anon_sym_Usage] = anon_sym_Usage,
  [anon_sym_Source] = anon_sym_Source,
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
  [sym_comment] = sym_comment,
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
  [anon_sym_Severity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_InstanceOf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Usage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Source] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
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
  [9] = 5,
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
  [22] = 15,
  [23] = 14,
  [24] = 24,
  [25] = 15,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 14,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 15,
  [39] = 14,
  [40] = 15,
  [41] = 14,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 15,
  [49] = 14,
  [50] = 15,
  [51] = 14,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 14,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 15,
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
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 15,
  [87] = 14,
  [88] = 15,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 14,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 15,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 106,
  [114] = 114,
  [115] = 115,
  [116] = 14,
  [117] = 107,
  [118] = 102,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 14,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 15,
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
  [153] = 144,
  [154] = 136,
  [155] = 155,
};

static inline bool anon_sym_DQUOTE_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < ' '
      ? (c < '\r'
        ? (c >= '\t' && c <= '\n')
        : c <= '\r')
      : (c <= ' ' || (c < 5760
        ? c == 160
        : c <= 5760)))
    : (c <= 8203 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8288)
      : (c <= 12288 || c == 65279))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(200);
      if (lookahead == '"') ADVANCE(277);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '(') ADVANCE(224);
      if (lookahead == ')') ADVANCE(226);
      if (lookahead == '*') ADVANCE(275);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == '=') ADVANCE(203);
      if (lookahead == 'A') ADVANCE(96);
      if (lookahead == 'C') ADVANCE(120);
      if (lookahead == 'D') ADVANCE(60);
      if (lookahead == 'E') ADVANCE(176);
      if (lookahead == 'I') ADVANCE(41);
      if (lookahead == 'L') ADVANCE(121);
      if (lookahead == 'M') ADVANCE(19);
      if (lookahead == 'P') ADVANCE(29);
      if (lookahead == 'R') ADVANCE(63);
      if (lookahead == 'S') ADVANCE(48);
      if (lookahead == 'T') ADVANCE(83);
      if (lookahead == 'U') ADVANCE(150);
      if (lookahead == 'V') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(170);
      if (lookahead == '^') ADVANCE(272);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == 'c') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == 'f') ADVANCE(136);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(135);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 's') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(189)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(277);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(1)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(231);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(278);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(276);
      if (lookahead == '/') ADVANCE(280);
      if (lookahead == '\\') ADVANCE(170);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(283);
      if (lookahead != 0) ADVANCE(284);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '/') ADVANCE(280);
      if (lookahead == '\\') ADVANCE(170);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(283);
      if (lookahead != 0) ADVANCE(284);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(6)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(231);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(295);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(294);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(274);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(241);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == 'n') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(231);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(241);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(231);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == '=') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(13)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(231);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == 'D') ADVANCE(258);
      if (lookahead == 'I') ADVANCE(256);
      if (lookahead == 'P') ADVANCE(253);
      if (lookahead == 'T') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(14)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(231);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == '^') ADVANCE(272);
      if (lookahead == 'o') ADVANCE(255);
      if (lookahead == 's') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(15)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(231);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(16)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(231);
      END_STATE();
    case 17:
      if (lookahead == 'S') ADVANCE(72);
      END_STATE();
    case 18:
      if (lookahead == 'S') ADVANCE(182);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(73);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(102);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(162);
      if (lookahead == 'm') ADVANCE(131);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(217);
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(217);
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(228);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(293);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(292);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(290);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 76:
      if (lookahead == 'f') ADVANCE(219);
      END_STATE();
    case 77:
      if (lookahead == 'f') ADVANCE(92);
      END_STATE();
    case 78:
      if (lookahead == 'f') ADVANCE(71);
      END_STATE();
    case 79:
      if (lookahead == 'g') ADVANCE(211);
      END_STATE();
    case 80:
      if (lookahead == 'g') ADVANCE(84);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(52);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 103:
      if (lookahead == 'm') ADVANCE(223);
      END_STATE();
    case 104:
      if (lookahead == 'm') ADVANCE(288);
      END_STATE();
    case 105:
      if (lookahead == 'm') ADVANCE(210);
      END_STATE();
    case 106:
      if (lookahead == 'm') ADVANCE(65);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 128:
      if (lookahead == 'p') ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 'p') ADVANCE(87);
      END_STATE();
    case 130:
      if (lookahead == 'p') ADVANCE(166);
      END_STATE();
    case 131:
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 132:
      if (lookahead == 'q') ADVANCE(172);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(229);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 149:
      if (lookahead == 's') ADVANCE(164);
      if (lookahead == 'v') ADVANCE(27);
      END_STATE();
    case 150:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 151:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 152:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 153:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 154:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 155:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 156:
      if (lookahead == 's') ADVANCE(169);
      if (lookahead == 'v') ADVANCE(27);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 170:
      if (lookahead == 'u') ADVANCE(183);
      if (lookahead == 'x') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(287);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 171:
      if (lookahead == 'u') ADVANCE(133);
      END_STATE();
    case 172:
      if (lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 173:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 174:
      if (lookahead == 'u') ADVANCE(143);
      END_STATE();
    case 175:
      if (lookahead == 'v') ADVANCE(70);
      END_STATE();
    case 176:
      if (lookahead == 'x') ADVANCE(163);
      END_STATE();
    case 177:
      if (lookahead == 'x') ADVANCE(21);
      END_STATE();
    case 178:
      if (lookahead == 'y') ADVANCE(225);
      END_STATE();
    case 179:
      if (lookahead == 'y') ADVANCE(218);
      END_STATE();
    case 180:
      if (lookahead == 'y') ADVANCE(154);
      END_STATE();
    case 181:
      if (lookahead == 'y') ADVANCE(147);
      END_STATE();
    case 182:
      if (lookahead == 'y') ADVANCE(155);
      END_STATE();
    case 183:
      if (lookahead == '{') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      END_STATE();
    case 184:
      if (lookahead == '}') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 186:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(285);
      END_STATE();
    case 187:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      END_STATE();
    case 188:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      END_STATE();
    case 189:
      if (eof) ADVANCE(200);
      if (lookahead == '"') ADVANCE(277);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '(') ADVANCE(224);
      if (lookahead == ')') ADVANCE(226);
      if (lookahead == '*') ADVANCE(275);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == '=') ADVANCE(203);
      if (lookahead == 'A') ADVANCE(96);
      if (lookahead == 'C') ADVANCE(120);
      if (lookahead == 'D') ADVANCE(60);
      if (lookahead == 'E') ADVANCE(176);
      if (lookahead == 'I') ADVANCE(41);
      if (lookahead == 'L') ADVANCE(121);
      if (lookahead == 'M') ADVANCE(19);
      if (lookahead == 'P') ADVANCE(29);
      if (lookahead == 'R') ADVANCE(63);
      if (lookahead == 'S') ADVANCE(48);
      if (lookahead == 'T') ADVANCE(83);
      if (lookahead == 'U') ADVANCE(150);
      if (lookahead == 'V') ADVANCE(22);
      if (lookahead == '^') ADVANCE(272);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == 'c') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == 'f') ADVANCE(136);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(135);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 's') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(189)
      END_STATE();
    case 190:
      if (eof) ADVANCE(200);
      if (lookahead == '"') ADVANCE(276);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '(') ADVANCE(224);
      if (lookahead == '*') ADVANCE(222);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '=') ADVANCE(203);
      if (lookahead == 'A') ADVANCE(96);
      if (lookahead == 'C') ADVANCE(120);
      if (lookahead == 'D') ADVANCE(60);
      if (lookahead == 'E') ADVANCE(176);
      if (lookahead == 'I') ADVANCE(42);
      if (lookahead == 'L') ADVANCE(121);
      if (lookahead == 'M') ADVANCE(19);
      if (lookahead == 'P') ADVANCE(29);
      if (lookahead == 'R') ADVANCE(63);
      if (lookahead == 'T') ADVANCE(83);
      if (lookahead == 'V') ADVANCE(22);
      if (lookahead == '^') ADVANCE(272);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == 'c') ADVANCE(123);
      if (lookahead == 'f') ADVANCE(136);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(190)
      END_STATE();
    case 191:
      if (eof) ADVANCE(200);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == 'A') ADVANCE(261);
      if (lookahead == 'C') ADVANCE(264);
      if (lookahead == 'E') ADVANCE(269);
      if (lookahead == 'I') ADVANCE(263);
      if (lookahead == 'L') ADVANCE(265);
      if (lookahead == 'M') ADVANCE(250);
      if (lookahead == 'P') ADVANCE(267);
      if (lookahead == 'R') ADVANCE(259);
      if (lookahead == 'V') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(191)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(231);
      END_STATE();
    case 192:
      if (eof) ADVANCE(200);
      if (lookahead == '(') ADVANCE(224);
      if (lookahead == '*') ADVANCE(222);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == 'A') ADVANCE(261);
      if (lookahead == 'C') ADVANCE(264);
      if (lookahead == 'E') ADVANCE(269);
      if (lookahead == 'I') ADVANCE(263);
      if (lookahead == 'L') ADVANCE(265);
      if (lookahead == 'M') ADVANCE(250);
      if (lookahead == 'P') ADVANCE(267);
      if (lookahead == 'R') ADVANCE(259);
      if (lookahead == 'V') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(192)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(231);
      END_STATE();
    case 193:
      if (eof) ADVANCE(200);
      if (lookahead == '*') ADVANCE(275);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'A') ADVANCE(96);
      if (lookahead == 'C') ADVANCE(120);
      if (lookahead == 'E') ADVANCE(176);
      if (lookahead == 'I') ADVANCE(119);
      if (lookahead == 'L') ADVANCE(121);
      if (lookahead == 'M') ADVANCE(19);
      if (lookahead == 'P') ADVANCE(134);
      if (lookahead == 'R') ADVANCE(63);
      if (lookahead == 'V') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(193)
      END_STATE();
    case 194:
      if (eof) ADVANCE(200);
      if (lookahead == '*') ADVANCE(222);
      if (lookahead == '.') ADVANCE(241);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == '=') ADVANCE(203);
      if (lookahead == 'A') ADVANCE(261);
      if (lookahead == 'C') ADVANCE(264);
      if (lookahead == 'E') ADVANCE(269);
      if (lookahead == 'I') ADVANCE(263);
      if (lookahead == 'L') ADVANCE(265);
      if (lookahead == 'M') ADVANCE(250);
      if (lookahead == 'P') ADVANCE(267);
      if (lookahead == 'R') ADVANCE(259);
      if (lookahead == 'V') ADVANCE(252);
      if (lookahead == '^') ADVANCE(272);
      if (lookahead == 'c') ADVANCE(266);
      if (lookahead == 'f') ADVANCE(268);
      if (lookahead == 'o') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(194)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(231);
      END_STATE();
    case 195:
      if (eof) ADVANCE(200);
      if (lookahead == '*') ADVANCE(222);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == 'A') ADVANCE(261);
      if (lookahead == 'C') ADVANCE(264);
      if (lookahead == 'D') ADVANCE(258);
      if (lookahead == 'E') ADVANCE(269);
      if (lookahead == 'I') ADVANCE(257);
      if (lookahead == 'L') ADVANCE(265);
      if (lookahead == 'M') ADVANCE(250);
      if (lookahead == 'P') ADVANCE(254);
      if (lookahead == 'R') ADVANCE(259);
      if (lookahead == 'T') ADVANCE(260);
      if (lookahead == 'V') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(195)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(231);
      END_STATE();
    case 196:
      if (eof) ADVANCE(200);
      if (lookahead == '*') ADVANCE(222);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == 'A') ADVANCE(261);
      if (lookahead == 'C') ADVANCE(264);
      if (lookahead == 'E') ADVANCE(269);
      if (lookahead == 'I') ADVANCE(263);
      if (lookahead == 'L') ADVANCE(265);
      if (lookahead == 'M') ADVANCE(250);
      if (lookahead == 'P') ADVANCE(267);
      if (lookahead == 'R') ADVANCE(259);
      if (lookahead == 'V') ADVANCE(252);
      if (lookahead == 'a') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(196)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(231);
      END_STATE();
    case 197:
      if (eof) ADVANCE(200);
      if (lookahead == '*') ADVANCE(222);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == 'A') ADVANCE(261);
      if (lookahead == 'C') ADVANCE(264);
      if (lookahead == 'E') ADVANCE(269);
      if (lookahead == 'I') ADVANCE(263);
      if (lookahead == 'L') ADVANCE(265);
      if (lookahead == 'M') ADVANCE(250);
      if (lookahead == 'P') ADVANCE(267);
      if (lookahead == 'R') ADVANCE(259);
      if (lookahead == 'V') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(197)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(231);
      END_STATE();
    case 198:
      if (eof) ADVANCE(200);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == 'A') ADVANCE(261);
      if (lookahead == 'C') ADVANCE(264);
      if (lookahead == 'D') ADVANCE(258);
      if (lookahead == 'E') ADVANCE(269);
      if (lookahead == 'I') ADVANCE(257);
      if (lookahead == 'L') ADVANCE(265);
      if (lookahead == 'M') ADVANCE(250);
      if (lookahead == 'P') ADVANCE(254);
      if (lookahead == 'R') ADVANCE(259);
      if (lookahead == 'T') ADVANCE(260);
      if (lookahead == 'V') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(198)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(231);
      END_STATE();
    case 199:
      if (eof) ADVANCE(200);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == 'A') ADVANCE(261);
      if (lookahead == 'C') ADVANCE(264);
      if (lookahead == 'E') ADVANCE(269);
      if (lookahead == 'I') ADVANCE(263);
      if (lookahead == 'L') ADVANCE(265);
      if (lookahead == 'M') ADVANCE(250);
      if (lookahead == 'P') ADVANCE(267);
      if (lookahead == 'R') ADVANCE(259);
      if (lookahead == 'V') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(199)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(231);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_Alias);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_Profile);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_Extension);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_Invariant);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_Instance);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_Instance);
      if (lookahead == 'O') ADVANCE(76);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_ValueSet);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_CodeSystem);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_Mapping);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_Logical);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_Resource);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_Parent);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_Title);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_Description);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_Id);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_Severity);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_InstanceOf);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_Usage);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_Source);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_exactly);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_obeys);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(277);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(231);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == 'A') ADVANCE(261);
      if (lookahead == 'C') ADVANCE(264);
      if (lookahead == 'E') ADVANCE(269);
      if (lookahead == 'I') ADVANCE(263);
      if (lookahead == 'L') ADVANCE(265);
      if (lookahead == 'M') ADVANCE(250);
      if (lookahead == 'P') ADVANCE(267);
      if (lookahead == 'R') ADVANCE(259);
      if (lookahead == 'V') ADVANCE(252);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(231);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(231);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '(') ADVANCE(224);
      if (lookahead == '*') ADVANCE(222);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == 'A') ADVANCE(261);
      if (lookahead == 'C') ADVANCE(264);
      if (lookahead == 'E') ADVANCE(269);
      if (lookahead == 'I') ADVANCE(263);
      if (lookahead == 'L') ADVANCE(265);
      if (lookahead == 'M') ADVANCE(250);
      if (lookahead == 'P') ADVANCE(267);
      if (lookahead == 'R') ADVANCE(259);
      if (lookahead == 'V') ADVANCE(252);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(231);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(295);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(222);
      if (lookahead == '.') ADVANCE(241);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == '=') ADVANCE(203);
      if (lookahead == 'A') ADVANCE(261);
      if (lookahead == 'C') ADVANCE(264);
      if (lookahead == 'E') ADVANCE(269);
      if (lookahead == 'I') ADVANCE(263);
      if (lookahead == 'L') ADVANCE(265);
      if (lookahead == 'M') ADVANCE(250);
      if (lookahead == 'P') ADVANCE(267);
      if (lookahead == 'R') ADVANCE(259);
      if (lookahead == 'V') ADVANCE(252);
      if (lookahead == '^') ADVANCE(272);
      if (lookahead == 'c') ADVANCE(266);
      if (lookahead == 'f') ADVANCE(268);
      if (lookahead == 'o') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(231);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(222);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == 'A') ADVANCE(261);
      if (lookahead == 'C') ADVANCE(264);
      if (lookahead == 'D') ADVANCE(258);
      if (lookahead == 'E') ADVANCE(269);
      if (lookahead == 'I') ADVANCE(257);
      if (lookahead == 'L') ADVANCE(265);
      if (lookahead == 'M') ADVANCE(250);
      if (lookahead == 'P') ADVANCE(254);
      if (lookahead == 'R') ADVANCE(259);
      if (lookahead == 'T') ADVANCE(260);
      if (lookahead == 'V') ADVANCE(252);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(231);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(222);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == 'A') ADVANCE(261);
      if (lookahead == 'C') ADVANCE(264);
      if (lookahead == 'E') ADVANCE(269);
      if (lookahead == 'I') ADVANCE(263);
      if (lookahead == 'L') ADVANCE(265);
      if (lookahead == 'M') ADVANCE(250);
      if (lookahead == 'P') ADVANCE(267);
      if (lookahead == 'R') ADVANCE(259);
      if (lookahead == 'V') ADVANCE(252);
      if (lookahead == 'a') ADVANCE(262);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(231);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(222);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == 'A') ADVANCE(261);
      if (lookahead == 'C') ADVANCE(264);
      if (lookahead == 'E') ADVANCE(269);
      if (lookahead == 'I') ADVANCE(263);
      if (lookahead == 'L') ADVANCE(265);
      if (lookahead == 'M') ADVANCE(250);
      if (lookahead == 'P') ADVANCE(267);
      if (lookahead == 'R') ADVANCE(259);
      if (lookahead == 'V') ADVANCE(252);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(231);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(274);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(241);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == 'n') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(231);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(241);
      if (lookahead == '/') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(231);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == '=') ADVANCE(203);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(231);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == 'A') ADVANCE(261);
      if (lookahead == 'C') ADVANCE(264);
      if (lookahead == 'D') ADVANCE(258);
      if (lookahead == 'E') ADVANCE(269);
      if (lookahead == 'I') ADVANCE(257);
      if (lookahead == 'L') ADVANCE(265);
      if (lookahead == 'M') ADVANCE(250);
      if (lookahead == 'P') ADVANCE(254);
      if (lookahead == 'R') ADVANCE(259);
      if (lookahead == 'T') ADVANCE(260);
      if (lookahead == 'V') ADVANCE(252);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(231);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == 'A') ADVANCE(261);
      if (lookahead == 'C') ADVANCE(264);
      if (lookahead == 'E') ADVANCE(269);
      if (lookahead == 'I') ADVANCE(263);
      if (lookahead == 'L') ADVANCE(265);
      if (lookahead == 'M') ADVANCE(250);
      if (lookahead == 'P') ADVANCE(267);
      if (lookahead == 'R') ADVANCE(259);
      if (lookahead == 'V') ADVANCE(252);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(231);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == 'D') ADVANCE(258);
      if (lookahead == 'I') ADVANCE(256);
      if (lookahead == 'P') ADVANCE(253);
      if (lookahead == 'T') ADVANCE(260);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(231);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == '^') ADVANCE(272);
      if (lookahead == 'o') ADVANCE(255);
      if (lookahead == 's') ADVANCE(270);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(231);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(231);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'b') ADVANCE(73);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(217);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(217);
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(163);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'y') ADVANCE(154);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_cardinality_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(3);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '*') ADVANCE(282);
      if (lookahead == '/') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(284);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '*') ADVANCE(281);
      if (lookahead == '/') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(282);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '*') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '/') ADVANCE(280);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(284);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(285);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(286);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_example);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_preferred);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_extensible);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_named);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 190},
  [2] = {.lex_state = 190},
  [3] = {.lex_state = 190},
  [4] = {.lex_state = 190},
  [5] = {.lex_state = 190},
  [6] = {.lex_state = 190},
  [7] = {.lex_state = 190},
  [8] = {.lex_state = 190},
  [9] = {.lex_state = 190},
  [10] = {.lex_state = 190},
  [11] = {.lex_state = 190},
  [12] = {.lex_state = 190},
  [13] = {.lex_state = 190},
  [14] = {.lex_state = 194},
  [15] = {.lex_state = 194},
  [16] = {.lex_state = 190},
  [17] = {.lex_state = 190},
  [18] = {.lex_state = 190},
  [19] = {.lex_state = 190},
  [20] = {.lex_state = 190},
  [21] = {.lex_state = 190},
  [22] = {.lex_state = 195},
  [23] = {.lex_state = 195},
  [24] = {.lex_state = 190},
  [25] = {.lex_state = 198},
  [26] = {.lex_state = 190},
  [27] = {.lex_state = 190},
  [28] = {.lex_state = 190},
  [29] = {.lex_state = 198},
  [30] = {.lex_state = 190},
  [31] = {.lex_state = 190},
  [32] = {.lex_state = 190},
  [33] = {.lex_state = 190},
  [34] = {.lex_state = 190},
  [35] = {.lex_state = 190},
  [36] = {.lex_state = 193},
  [37] = {.lex_state = 193},
  [38] = {.lex_state = 196},
  [39] = {.lex_state = 196},
  [40] = {.lex_state = 192},
  [41] = {.lex_state = 192},
  [42] = {.lex_state = 190},
  [43] = {.lex_state = 190},
  [44] = {.lex_state = 190},
  [45] = {.lex_state = 190},
  [46] = {.lex_state = 190},
  [47] = {.lex_state = 190},
  [48] = {.lex_state = 191},
  [49] = {.lex_state = 191},
  [50] = {.lex_state = 197},
  [51] = {.lex_state = 197},
  [52] = {.lex_state = 190},
  [53] = {.lex_state = 190},
  [54] = {.lex_state = 190},
  [55] = {.lex_state = 190},
  [56] = {.lex_state = 190},
  [57] = {.lex_state = 199},
  [58] = {.lex_state = 190},
  [59] = {.lex_state = 190},
  [60] = {.lex_state = 190},
  [61] = {.lex_state = 190},
  [62] = {.lex_state = 199},
  [63] = {.lex_state = 190},
  [64] = {.lex_state = 190},
  [65] = {.lex_state = 190},
  [66] = {.lex_state = 190},
  [67] = {.lex_state = 190},
  [68] = {.lex_state = 190},
  [69] = {.lex_state = 190},
  [70] = {.lex_state = 190},
  [71] = {.lex_state = 190},
  [72] = {.lex_state = 190},
  [73] = {.lex_state = 190},
  [74] = {.lex_state = 190},
  [75] = {.lex_state = 190},
  [76] = {.lex_state = 190},
  [77] = {.lex_state = 190},
  [78] = {.lex_state = 190},
  [79] = {.lex_state = 190},
  [80] = {.lex_state = 190},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 15},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 14},
  [87] = {.lex_state = 14},
  [88] = {.lex_state = 11},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 16},
  [91] = {.lex_state = 16},
  [92] = {.lex_state = 11},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 16},
  [95] = {.lex_state = 16},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 16},
  [99] = {.lex_state = 16},
  [100] = {.lex_state = 16},
  [101] = {.lex_state = 16},
  [102] = {.lex_state = 16},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 16},
  [105] = {.lex_state = 16},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 16},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 12},
  [110] = {.lex_state = 16},
  [111] = {.lex_state = 16},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 16},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 12},
  [117] = {.lex_state = 16},
  [118] = {.lex_state = 16},
  [119] = {.lex_state = 16},
  [120] = {.lex_state = 16},
  [121] = {.lex_state = 16},
  [122] = {.lex_state = 13},
  [123] = {.lex_state = 16},
  [124] = {.lex_state = 16},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 13},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 16},
  [129] = {.lex_state = 16},
  [130] = {.lex_state = 190},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
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
    [anon_sym_Severity] = ACTIONS(1),
    [anon_sym_InstanceOf] = ACTIONS(1),
    [anon_sym_Usage] = ACTIONS(1),
    [anon_sym_Source] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_exactly] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_contains] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_obeys] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [aux_sym_cardinality_token1] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_STAR2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_system] = ACTIONS(1),
    [anon_sym_example] = ACTIONS(1),
    [anon_sym_preferred] = ACTIONS(1),
    [anon_sym_extensible] = ACTIONS(1),
    [anon_sym_required] = ACTIONS(1),
    [anon_sym_named] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_doc] = STATE(138),
    [sym_alias] = STATE(7),
    [sym_profile] = STATE(7),
    [sym_extension] = STATE(7),
    [sym_invariant] = STATE(7),
    [sym_instance] = STATE(7),
    [sym_valueset] = STATE(7),
    [sym_codesystem] = STATE(7),
    [sym_mapping] = STATE(7),
    [sym_logical] = STATE(7),
    [sym_resource] = STATE(7),
    [aux_sym_doc_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_Alias] = ACTIONS(7),
    [anon_sym_Profile] = ACTIONS(9),
    [anon_sym_Extension] = ACTIONS(11),
    [anon_sym_Invariant] = ACTIONS(13),
    [anon_sym_Instance] = ACTIONS(15),
    [anon_sym_ValueSet] = ACTIONS(17),
    [anon_sym_CodeSystem] = ACTIONS(19),
    [anon_sym_Mapping] = ACTIONS(21),
    [anon_sym_Logical] = ACTIONS(23),
    [anon_sym_Resource] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_Parent,
    ACTIONS(31), 1,
      anon_sym_Title,
    ACTIONS(33), 1,
      anon_sym_Description,
    ACTIONS(35), 1,
      anon_sym_Id,
    ACTIONS(37), 1,
      anon_sym_STAR,
    STATE(5), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(8), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(32), 4,
      sym_parent,
      sym_title,
      sym_description,
      sym_id,
    STATE(66), 7,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
    ACTIONS(27), 11,
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
  [55] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_Parent,
    ACTIONS(31), 1,
      anon_sym_Title,
    ACTIONS(33), 1,
      anon_sym_Description,
    ACTIONS(35), 1,
      anon_sym_Id,
    ACTIONS(37), 1,
      anon_sym_STAR,
    STATE(5), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(13), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(32), 4,
      sym_parent,
      sym_title,
      sym_description,
      sym_id,
    STATE(66), 7,
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
  [110] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_Parent,
    ACTIONS(31), 1,
      anon_sym_Title,
    ACTIONS(33), 1,
      anon_sym_Description,
    ACTIONS(35), 1,
      anon_sym_Id,
    ACTIONS(37), 1,
      anon_sym_STAR,
    STATE(2), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(12), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(32), 4,
      sym_parent,
      sym_title,
      sym_description,
      sym_id,
    STATE(66), 7,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
    ACTIONS(41), 11,
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
  [165] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_Parent,
    ACTIONS(48), 1,
      anon_sym_Title,
    ACTIONS(51), 1,
      anon_sym_Description,
    ACTIONS(54), 1,
      anon_sym_Id,
    STATE(5), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(32), 4,
      sym_parent,
      sym_title,
      sym_description,
      sym_id,
    ACTIONS(43), 12,
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
  [205] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      anon_sym_Alias,
    ACTIONS(62), 1,
      anon_sym_Profile,
    ACTIONS(65), 1,
      anon_sym_Extension,
    ACTIONS(68), 1,
      anon_sym_Invariant,
    ACTIONS(71), 1,
      anon_sym_Instance,
    ACTIONS(74), 1,
      anon_sym_ValueSet,
    ACTIONS(77), 1,
      anon_sym_CodeSystem,
    ACTIONS(80), 1,
      anon_sym_Mapping,
    ACTIONS(83), 1,
      anon_sym_Logical,
    ACTIONS(86), 1,
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
  [255] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_Alias,
    ACTIONS(9), 1,
      anon_sym_Profile,
    ACTIONS(11), 1,
      anon_sym_Extension,
    ACTIONS(13), 1,
      anon_sym_Invariant,
    ACTIONS(15), 1,
      anon_sym_Instance,
    ACTIONS(17), 1,
      anon_sym_ValueSet,
    ACTIONS(19), 1,
      anon_sym_CodeSystem,
    ACTIONS(21), 1,
      anon_sym_Mapping,
    ACTIONS(23), 1,
      anon_sym_Logical,
    ACTIONS(25), 1,
      anon_sym_Resource,
    ACTIONS(89), 1,
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
  [305] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_STAR,
    STATE(19), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(66), 7,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
    ACTIONS(91), 11,
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
  [338] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_Title,
    ACTIONS(51), 1,
      anon_sym_Description,
    ACTIONS(93), 1,
      anon_sym_Parent,
    ACTIONS(96), 1,
      anon_sym_Id,
    STATE(9), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(32), 4,
      sym_parent,
      sym_title,
      sym_description,
      sym_id,
    ACTIONS(43), 11,
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
  [377] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_Title,
    ACTIONS(33), 1,
      anon_sym_Description,
    ACTIONS(101), 1,
      anon_sym_Parent,
    ACTIONS(103), 1,
      anon_sym_Id,
    STATE(9), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(32), 4,
      sym_parent,
      sym_title,
      sym_description,
      sym_id,
    ACTIONS(99), 11,
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
  [416] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_Title,
    ACTIONS(33), 1,
      anon_sym_Description,
    ACTIONS(101), 1,
      anon_sym_Parent,
    ACTIONS(103), 1,
      anon_sym_Id,
    STATE(9), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(32), 4,
      sym_parent,
      sym_title,
      sym_description,
      sym_id,
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
  [455] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_STAR,
    STATE(19), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(66), 7,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
    ACTIONS(27), 11,
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
  [488] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_STAR,
    STATE(19), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(66), 7,
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
  [521] = 5,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 1,
      aux_sym_sequence_token1,
    ACTIONS(116), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 18,
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
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
  [554] = 5,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(122), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(120), 18,
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
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
  [587] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_Title,
    ACTIONS(33), 1,
      anon_sym_Description,
    ACTIONS(101), 1,
      anon_sym_Parent,
    ACTIONS(103), 1,
      anon_sym_Id,
    STATE(10), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(32), 4,
      sym_parent,
      sym_title,
      sym_description,
      sym_id,
    ACTIONS(124), 11,
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
  [626] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_Title,
    ACTIONS(33), 1,
      anon_sym_Description,
    ACTIONS(101), 1,
      anon_sym_Parent,
    ACTIONS(103), 1,
      anon_sym_Id,
    STATE(11), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(32), 4,
      sym_parent,
      sym_title,
      sym_description,
      sym_id,
    ACTIONS(126), 11,
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
  [665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 21,
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
  [692] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_STAR,
    STATE(19), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(66), 7,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
    ACTIONS(130), 11,
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
  [725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
    ACTIONS(135), 17,
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
  [752] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_EQ,
    ACTIONS(141), 1,
      anon_sym_from,
    ACTIONS(143), 1,
      anon_sym_contains,
    ACTIONS(145), 1,
      anon_sym_obeys,
    ACTIONS(147), 1,
      anon_sym_CARET,
    STATE(139), 1,
      sym_caret_path,
    ACTIONS(137), 12,
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
  [788] = 5,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 1,
      aux_sym_sequence_token1,
    STATE(23), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(120), 15,
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
  [818] = 5,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(151), 1,
      aux_sym_sequence_token1,
    STATE(23), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 15,
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
  [848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 17,
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
  [871] = 5,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(156), 1,
      aux_sym_sequence_token1,
    STATE(29), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(120), 14,
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
  [900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 17,
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
  [923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 17,
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
  [946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 17,
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
  [969] = 5,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(162), 1,
      aux_sym_sequence_token1,
    STATE(29), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 14,
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
  [998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 17,
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
  [1021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 16,
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
  [1043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 16,
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
  [1065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 16,
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
  [1087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 16,
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
  [1109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 16,
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
  [1131] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_STAR,
    ACTIONS(181), 2,
      aux_sym_cardinality_token1,
      anon_sym_STAR2,
    ACTIONS(177), 12,
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
  [1156] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_STAR,
    ACTIONS(187), 2,
      aux_sym_cardinality_token1,
      anon_sym_STAR2,
    ACTIONS(183), 12,
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
  [1181] = 5,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(189), 1,
      aux_sym_sequence_token1,
    STATE(39), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(120), 12,
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
  [1208] = 5,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(191), 1,
      aux_sym_sequence_token1,
    STATE(39), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 12,
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
  [1235] = 5,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(194), 1,
      aux_sym_sequence_token1,
    STATE(41), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(120), 12,
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
  [1262] = 5,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(196), 1,
      aux_sym_sequence_token1,
    STATE(41), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 12,
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
  [1289] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_and,
    STATE(46), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(199), 12,
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
  [1313] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_and,
    STATE(52), 1,
      aux_sym_contains_rule_repeat1,
    ACTIONS(203), 12,
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
  [1337] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_strength,
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
  [1361] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_and,
    STATE(47), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(211), 12,
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
  [1385] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_and,
    STATE(46), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(213), 12,
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
  [1409] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_and,
    STATE(46), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(218), 12,
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
  [1433] = 5,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(220), 1,
      aux_sym_sequence_token1,
    STATE(49), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(120), 11,
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
  [1459] = 5,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(222), 1,
      aux_sym_sequence_token1,
    STATE(49), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 11,
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
  [1485] = 5,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(225), 1,
      aux_sym_sequence_token1,
    STATE(51), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(120), 11,
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
  [1511] = 5,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(227), 1,
      aux_sym_sequence_token1,
    STATE(51), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 11,
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
  [1537] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_and,
    STATE(52), 1,
      aux_sym_contains_rule_repeat1,
    ACTIONS(230), 12,
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
  [1561] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_and,
    STATE(42), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(218), 12,
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
  [1585] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_and,
    STATE(43), 1,
      aux_sym_contains_rule_repeat1,
    ACTIONS(235), 12,
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
  [1609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 13,
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
  [1628] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [1647] = 5,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_sequence_token1,
    STATE(57), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 10,
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
  [1672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
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
  [1693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 13,
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
  [1712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 13,
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
  [1731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 13,
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
  [1750] = 5,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(248), 1,
      aux_sym_sequence_token1,
    STATE(57), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(120), 10,
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
  [1775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 13,
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
  [1794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 13,
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
  [1813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_POUND,
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
  [1833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 12,
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
  [1851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 12,
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
  [1869] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [1887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 12,
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
  [1905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 12,
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
  [1923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 12,
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
  [1941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 12,
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
  [1959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 11,
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
  [1976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 11,
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
  [1993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 11,
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
  [2010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 11,
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
  [2027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 11,
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
  [2044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 11,
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
  [2061] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [2078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 11,
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
  [2095] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_Parent,
    ACTIONS(31), 1,
      anon_sym_Title,
    ACTIONS(33), 1,
      anon_sym_Description,
    ACTIONS(35), 1,
      anon_sym_Id,
    STATE(3), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(32), 4,
      sym_parent,
      sym_title,
      sym_description,
      sym_id,
  [2121] = 8,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(286), 1,
      aux_sym_sequence_token1,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(18), 1,
      sym_sequence,
    STATE(50), 1,
      aux_sym_sequence_repeat1,
    STATE(69), 1,
      sym_value,
    STATE(64), 3,
      sym_name,
      sym_string,
      sym_multiline_string,
  [2148] = 8,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(292), 1,
      aux_sym_sequence_token1,
    STATE(18), 1,
      sym_sequence,
    STATE(40), 1,
      aux_sym_sequence_repeat1,
    STATE(58), 1,
      sym_value,
    STATE(64), 3,
      sym_name,
      sym_string,
      sym_multiline_string,
  [2175] = 10,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_obeys,
    ACTIONS(296), 1,
      aux_sym_sequence_token1,
    ACTIONS(298), 1,
      anon_sym_CARET,
    ACTIONS(300), 1,
      anon_sym_system,
    STATE(15), 1,
      aux_sym_sequence_repeat1,
    STATE(20), 1,
      sym_sequence,
    STATE(21), 1,
      sym_path,
    STATE(125), 1,
      sym_name,
    STATE(147), 1,
      sym_caret_path,
  [2206] = 8,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(286), 1,
      aux_sym_sequence_token1,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(18), 1,
      sym_sequence,
    STATE(50), 1,
      aux_sym_sequence_repeat1,
    STATE(72), 1,
      sym_value,
    STATE(64), 3,
      sym_name,
      sym_string,
      sym_multiline_string,
  [2233] = 4,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(302), 1,
      aux_sym_sequence_token1,
    STATE(87), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(120), 4,
      anon_sym_Parent,
      anon_sym_Title,
      anon_sym_Description,
      anon_sym_Id,
  [2249] = 4,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(304), 1,
      aux_sym_sequence_token1,
    STATE(87), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 4,
      anon_sym_Parent,
      anon_sym_Title,
      anon_sym_Description,
      anon_sym_Id,
  [2265] = 4,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(307), 1,
      aux_sym_sequence_token1,
    STATE(92), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(120), 3,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [2280] = 6,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_POUND,
    ACTIONS(311), 1,
      aux_sym_sequence_token1,
    STATE(48), 1,
      aux_sym_sequence_repeat1,
    STATE(65), 1,
      sym_sequence,
    STATE(79), 1,
      sym_code,
  [2299] = 6,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(313), 1,
      aux_sym_sequence_token1,
    STATE(18), 1,
      sym_sequence,
    STATE(54), 1,
      sym_item,
    STATE(88), 1,
      aux_sym_sequence_repeat1,
    STATE(93), 1,
      sym_name,
  [2318] = 6,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(313), 1,
      aux_sym_sequence_token1,
    STATE(18), 1,
      sym_sequence,
    STATE(56), 1,
      sym_item,
    STATE(88), 1,
      aux_sym_sequence_repeat1,
    STATE(93), 1,
      sym_name,
  [2337] = 4,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(315), 1,
      aux_sym_sequence_token1,
    STATE(92), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 3,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [2352] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      aux_sym_cardinality_token1,
    ACTIONS(320), 1,
      anon_sym_DOT_DOT,
    ACTIONS(322), 1,
      anon_sym_named,
    STATE(61), 1,
      sym_cardinality,
  [2368] = 5,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(324), 1,
      aux_sym_sequence_token1,
    STATE(18), 1,
      sym_sequence,
    STATE(62), 1,
      aux_sym_sequence_repeat1,
    STATE(74), 1,
      sym_name,
  [2384] = 5,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(326), 1,
      aux_sym_sequence_token1,
    STATE(18), 1,
      sym_sequence,
    STATE(38), 1,
      aux_sym_sequence_repeat1,
    STATE(60), 1,
      sym_name,
  [2400] = 4,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(108), 1,
      aux_sym_string_repeat1,
    ACTIONS(330), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [2414] = 4,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    STATE(115), 1,
      aux_sym_string_repeat1,
    ACTIONS(334), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [2428] = 5,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(336), 1,
      aux_sym_sequence_token1,
    STATE(18), 1,
      sym_sequence,
    STATE(81), 1,
      sym_name,
    STATE(86), 1,
      aux_sym_sequence_repeat1,
  [2444] = 5,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(338), 1,
      aux_sym_sequence_token1,
    STATE(4), 1,
      sym_name,
    STATE(18), 1,
      sym_sequence,
    STATE(22), 1,
      aux_sym_sequence_repeat1,
  [2460] = 5,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(326), 1,
      aux_sym_sequence_token1,
    STATE(18), 1,
      sym_sequence,
    STATE(38), 1,
      aux_sym_sequence_repeat1,
    STATE(45), 1,
      sym_name,
  [2476] = 5,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(324), 1,
      aux_sym_sequence_token1,
    STATE(18), 1,
      sym_sequence,
    STATE(62), 1,
      aux_sym_sequence_repeat1,
    STATE(80), 1,
      sym_name,
  [2492] = 5,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(338), 1,
      aux_sym_sequence_token1,
    STATE(18), 1,
      sym_sequence,
    STATE(22), 1,
      aux_sym_sequence_repeat1,
    STATE(34), 1,
      sym_name,
  [2508] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(340), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(35), 2,
      sym_string,
      sym_multiline_string,
  [2522] = 5,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(292), 1,
      aux_sym_sequence_token1,
    STATE(18), 1,
      sym_sequence,
    STATE(40), 1,
      aux_sym_sequence_repeat1,
    STATE(44), 1,
      sym_name,
  [2538] = 5,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(324), 1,
      aux_sym_sequence_token1,
    STATE(18), 1,
      sym_sequence,
    STATE(62), 1,
      aux_sym_sequence_repeat1,
    STATE(75), 1,
      sym_name,
  [2554] = 4,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      aux_sym_string_repeat1,
    ACTIONS(344), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [2568] = 5,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(338), 1,
      aux_sym_sequence_token1,
    STATE(18), 1,
      sym_sequence,
    STATE(22), 1,
      aux_sym_sequence_repeat1,
    STATE(33), 1,
      sym_name,
  [2584] = 4,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(113), 1,
      aux_sym_string_repeat1,
    ACTIONS(349), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [2598] = 4,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(351), 1,
      aux_sym_sequence_token1,
    STATE(116), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(120), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
  [2612] = 5,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(324), 1,
      aux_sym_sequence_token1,
    STATE(18), 1,
      sym_sequence,
    STATE(62), 1,
      aux_sym_sequence_repeat1,
    STATE(77), 1,
      sym_name,
  [2628] = 5,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(324), 1,
      aux_sym_sequence_token1,
    STATE(18), 1,
      sym_sequence,
    STATE(62), 1,
      aux_sym_sequence_repeat1,
    STATE(73), 1,
      sym_name,
  [2644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 4,
      anon_sym_example,
      anon_sym_preferred,
      anon_sym_extensible,
      anon_sym_required,
  [2654] = 4,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(113), 1,
      aux_sym_string_repeat1,
    ACTIONS(355), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [2668] = 5,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(358), 1,
      aux_sym_sequence_token1,
    STATE(18), 1,
      sym_sequence,
    STATE(109), 1,
      aux_sym_sequence_repeat1,
    STATE(127), 1,
      sym_name,
  [2684] = 4,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      aux_sym_string_repeat1,
    ACTIONS(362), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [2698] = 4,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(364), 1,
      aux_sym_sequence_token1,
    STATE(116), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
  [2712] = 5,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(367), 1,
      aux_sym_sequence_token1,
    STATE(18), 1,
      sym_sequence,
    STATE(25), 1,
      aux_sym_sequence_repeat1,
    STATE(33), 1,
      sym_name,
  [2728] = 5,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(367), 1,
      aux_sym_sequence_token1,
    STATE(18), 1,
      sym_sequence,
    STATE(25), 1,
      aux_sym_sequence_repeat1,
    STATE(34), 1,
      sym_name,
  [2744] = 5,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(326), 1,
      aux_sym_sequence_token1,
    STATE(18), 1,
      sym_sequence,
    STATE(38), 1,
      aux_sym_sequence_repeat1,
    STATE(53), 1,
      sym_name,
  [2760] = 5,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(367), 1,
      aux_sym_sequence_token1,
    STATE(16), 1,
      sym_name,
    STATE(18), 1,
      sym_sequence,
    STATE(25), 1,
      aux_sym_sequence_repeat1,
  [2776] = 5,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(367), 1,
      aux_sym_sequence_token1,
    STATE(17), 1,
      sym_name,
    STATE(18), 1,
      sym_sequence,
    STATE(25), 1,
      aux_sym_sequence_repeat1,
  [2792] = 4,
    ACTIONS(111), 1,
      anon_sym_EQ,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(369), 1,
      aux_sym_sequence_token1,
    STATE(122), 1,
      aux_sym_sequence_repeat1,
  [2805] = 4,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(324), 1,
      aux_sym_sequence_token1,
    STATE(62), 1,
      aux_sym_sequence_repeat1,
    STATE(78), 1,
      sym_sequence,
  [2818] = 4,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(324), 1,
      aux_sym_sequence_token1,
    STATE(62), 1,
      aux_sym_sequence_repeat1,
    STATE(76), 1,
      sym_sequence,
  [2831] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      aux_sym_cardinality_token1,
    ACTIONS(320), 1,
      anon_sym_DOT_DOT,
    STATE(67), 1,
      sym_cardinality,
  [2844] = 4,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_EQ,
    ACTIONS(372), 1,
      aux_sym_sequence_token1,
    STATE(122), 1,
      aux_sym_sequence_repeat1,
  [2857] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      aux_sym_cardinality_token1,
    ACTIONS(320), 1,
      anon_sym_DOT_DOT,
    STATE(63), 1,
      sym_cardinality,
  [2870] = 4,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(374), 1,
      aux_sym_sequence_token1,
    STATE(126), 1,
      aux_sym_sequence_repeat1,
    STATE(137), 1,
      sym_sequence,
  [2883] = 4,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(374), 1,
      aux_sym_sequence_token1,
    STATE(126), 1,
      aux_sym_sequence_repeat1,
    STATE(150), 1,
      sym_sequence,
  [2896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      sym_string,
  [2906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_COLON,
  [2913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_COLON,
  [2920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_COLON,
  [2927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_COLON,
  [2934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_exactly,
  [2941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_COLON,
  [2948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_EQ,
  [2955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      ts_builtin_sym_end,
  [2962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_EQ,
  [2969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_COLON,
  [2976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_COLON,
  [2983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_COLON,
  [2990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_COLON,
  [2997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_COLON,
  [3004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_COLON,
  [3011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_COLON,
  [3018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_EQ,
  [3025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
  [3032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
  [3039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_EQ,
  [3046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_COLON,
  [3053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_DOT_DOT,
  [3060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_COLON,
  [3067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_COLON,
  [3074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 110,
  [SMALL_STATE(5)] = 165,
  [SMALL_STATE(6)] = 205,
  [SMALL_STATE(7)] = 255,
  [SMALL_STATE(8)] = 305,
  [SMALL_STATE(9)] = 338,
  [SMALL_STATE(10)] = 377,
  [SMALL_STATE(11)] = 416,
  [SMALL_STATE(12)] = 455,
  [SMALL_STATE(13)] = 488,
  [SMALL_STATE(14)] = 521,
  [SMALL_STATE(15)] = 554,
  [SMALL_STATE(16)] = 587,
  [SMALL_STATE(17)] = 626,
  [SMALL_STATE(18)] = 665,
  [SMALL_STATE(19)] = 692,
  [SMALL_STATE(20)] = 725,
  [SMALL_STATE(21)] = 752,
  [SMALL_STATE(22)] = 788,
  [SMALL_STATE(23)] = 818,
  [SMALL_STATE(24)] = 848,
  [SMALL_STATE(25)] = 871,
  [SMALL_STATE(26)] = 900,
  [SMALL_STATE(27)] = 923,
  [SMALL_STATE(28)] = 946,
  [SMALL_STATE(29)] = 969,
  [SMALL_STATE(30)] = 998,
  [SMALL_STATE(31)] = 1021,
  [SMALL_STATE(32)] = 1043,
  [SMALL_STATE(33)] = 1065,
  [SMALL_STATE(34)] = 1087,
  [SMALL_STATE(35)] = 1109,
  [SMALL_STATE(36)] = 1131,
  [SMALL_STATE(37)] = 1156,
  [SMALL_STATE(38)] = 1181,
  [SMALL_STATE(39)] = 1208,
  [SMALL_STATE(40)] = 1235,
  [SMALL_STATE(41)] = 1262,
  [SMALL_STATE(42)] = 1289,
  [SMALL_STATE(43)] = 1313,
  [SMALL_STATE(44)] = 1337,
  [SMALL_STATE(45)] = 1361,
  [SMALL_STATE(46)] = 1385,
  [SMALL_STATE(47)] = 1409,
  [SMALL_STATE(48)] = 1433,
  [SMALL_STATE(49)] = 1459,
  [SMALL_STATE(50)] = 1485,
  [SMALL_STATE(51)] = 1511,
  [SMALL_STATE(52)] = 1537,
  [SMALL_STATE(53)] = 1561,
  [SMALL_STATE(54)] = 1585,
  [SMALL_STATE(55)] = 1609,
  [SMALL_STATE(56)] = 1628,
  [SMALL_STATE(57)] = 1647,
  [SMALL_STATE(58)] = 1672,
  [SMALL_STATE(59)] = 1693,
  [SMALL_STATE(60)] = 1712,
  [SMALL_STATE(61)] = 1731,
  [SMALL_STATE(62)] = 1750,
  [SMALL_STATE(63)] = 1775,
  [SMALL_STATE(64)] = 1794,
  [SMALL_STATE(65)] = 1813,
  [SMALL_STATE(66)] = 1833,
  [SMALL_STATE(67)] = 1851,
  [SMALL_STATE(68)] = 1869,
  [SMALL_STATE(69)] = 1887,
  [SMALL_STATE(70)] = 1905,
  [SMALL_STATE(71)] = 1923,
  [SMALL_STATE(72)] = 1941,
  [SMALL_STATE(73)] = 1959,
  [SMALL_STATE(74)] = 1976,
  [SMALL_STATE(75)] = 1993,
  [SMALL_STATE(76)] = 2010,
  [SMALL_STATE(77)] = 2027,
  [SMALL_STATE(78)] = 2044,
  [SMALL_STATE(79)] = 2061,
  [SMALL_STATE(80)] = 2078,
  [SMALL_STATE(81)] = 2095,
  [SMALL_STATE(82)] = 2121,
  [SMALL_STATE(83)] = 2148,
  [SMALL_STATE(84)] = 2175,
  [SMALL_STATE(85)] = 2206,
  [SMALL_STATE(86)] = 2233,
  [SMALL_STATE(87)] = 2249,
  [SMALL_STATE(88)] = 2265,
  [SMALL_STATE(89)] = 2280,
  [SMALL_STATE(90)] = 2299,
  [SMALL_STATE(91)] = 2318,
  [SMALL_STATE(92)] = 2337,
  [SMALL_STATE(93)] = 2352,
  [SMALL_STATE(94)] = 2368,
  [SMALL_STATE(95)] = 2384,
  [SMALL_STATE(96)] = 2400,
  [SMALL_STATE(97)] = 2414,
  [SMALL_STATE(98)] = 2428,
  [SMALL_STATE(99)] = 2444,
  [SMALL_STATE(100)] = 2460,
  [SMALL_STATE(101)] = 2476,
  [SMALL_STATE(102)] = 2492,
  [SMALL_STATE(103)] = 2508,
  [SMALL_STATE(104)] = 2522,
  [SMALL_STATE(105)] = 2538,
  [SMALL_STATE(106)] = 2554,
  [SMALL_STATE(107)] = 2568,
  [SMALL_STATE(108)] = 2584,
  [SMALL_STATE(109)] = 2598,
  [SMALL_STATE(110)] = 2612,
  [SMALL_STATE(111)] = 2628,
  [SMALL_STATE(112)] = 2644,
  [SMALL_STATE(113)] = 2654,
  [SMALL_STATE(114)] = 2668,
  [SMALL_STATE(115)] = 2684,
  [SMALL_STATE(116)] = 2698,
  [SMALL_STATE(117)] = 2712,
  [SMALL_STATE(118)] = 2728,
  [SMALL_STATE(119)] = 2744,
  [SMALL_STATE(120)] = 2760,
  [SMALL_STATE(121)] = 2776,
  [SMALL_STATE(122)] = 2792,
  [SMALL_STATE(123)] = 2805,
  [SMALL_STATE(124)] = 2818,
  [SMALL_STATE(125)] = 2831,
  [SMALL_STATE(126)] = 2844,
  [SMALL_STATE(127)] = 2857,
  [SMALL_STATE(128)] = 2870,
  [SMALL_STATE(129)] = 2883,
  [SMALL_STATE(130)] = 2896,
  [SMALL_STATE(131)] = 2906,
  [SMALL_STATE(132)] = 2913,
  [SMALL_STATE(133)] = 2920,
  [SMALL_STATE(134)] = 2927,
  [SMALL_STATE(135)] = 2934,
  [SMALL_STATE(136)] = 2941,
  [SMALL_STATE(137)] = 2948,
  [SMALL_STATE(138)] = 2955,
  [SMALL_STATE(139)] = 2962,
  [SMALL_STATE(140)] = 2969,
  [SMALL_STATE(141)] = 2976,
  [SMALL_STATE(142)] = 2983,
  [SMALL_STATE(143)] = 2990,
  [SMALL_STATE(144)] = 2997,
  [SMALL_STATE(145)] = 3004,
  [SMALL_STATE(146)] = 3011,
  [SMALL_STATE(147)] = 3018,
  [SMALL_STATE(148)] = 3025,
  [SMALL_STATE(149)] = 3032,
  [SMALL_STATE(150)] = 3039,
  [SMALL_STATE(151)] = 3046,
  [SMALL_STATE(152)] = 3053,
  [SMALL_STATE(153)] = 3060,
  [SMALL_STATE(154)] = 3067,
  [SMALL_STATE(155)] = 3074,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 4),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(144),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(133),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(134),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(136),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(151),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(155),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(146),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(145),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(132),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(143),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(142),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(141),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(140),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(131),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 5),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(153),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(154),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 5),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(14),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat2, 2),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat2, 2), SHIFT_REPEAT(84),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_rule, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(23),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(29),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sd_metadata, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parent, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(39),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(41),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 5),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_rule, 5),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_rule, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2), SHIFT_REPEAT(95),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 4),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(49),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(51),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contains_rule_repeat1, 2),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contains_rule_repeat1, 2), SHIFT_REPEAT(91),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_rule, 4),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 3),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(57),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_value_rule, 4),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 5, .production_id = 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sd_rule, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_rule, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_rule, 5),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_value_rule, 4),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strength, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_value_rule, 7),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_value_rule, 5),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invariant, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3, .production_id = 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 2, .production_id = 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 3),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(87),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(92),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(106),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(113),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(116),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(122),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [392] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_path, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
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
