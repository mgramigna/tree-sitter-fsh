#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 660
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 203
#define ALIAS_COUNT 7
#define TOKEN_COUNT 85
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 10

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
  anon_sym_RuleSet = 13,
  anon_sym_Description = 14,
  anon_sym_Expression = 15,
  anon_sym_Id = 16,
  anon_sym_InstanceOf = 17,
  anon_sym_Parent = 18,
  anon_sym_Severity = 19,
  anon_sym_Source = 20,
  anon_sym_Target = 21,
  anon_sym_Title = 22,
  anon_sym_Usage = 23,
  anon_sym_XPath = 24,
  anon_sym_STAR = 25,
  anon_sym_contentReference = 26,
  anon_sym_insert = 27,
  anon_sym_from = 28,
  anon_sym_LPAREN = 29,
  anon_sym_exactly = 30,
  anon_sym_RPAREN = 31,
  anon_sym_contains = 32,
  anon_sym_and = 33,
  anon_sym_obeys = 34,
  anon_sym_only = 35,
  anon_sym_or = 36,
  anon_sym_DASH_GT = 37,
  anon_sym_include = 38,
  anon_sym_exclude = 39,
  anon_sym_codes = 40,
  anon_sym_where = 41,
  anon_sym_system = 42,
  anon_sym_valueset = 43,
  anon_sym_true = 44,
  anon_sym_false = 45,
  anon_sym_POUND = 46,
  aux_sym_sequence_token1 = 47,
  aux_sym_sequence_token2 = 48,
  anon_sym_CARET = 49,
  anon_sym_MS = 50,
  anon_sym_SU = 51,
  anon_sym_TU = 52,
  anon_sym_N = 53,
  anon_sym_D = 54,
  aux_sym_cardinality_token1 = 55,
  anon_sym_DOT_DOT = 56,
  anon_sym_STAR2 = 57,
  anon_sym_DQUOTE = 58,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 59,
  sym_double_quote_string_fragment = 60,
  sym_escape_sequence = 61,
  sym_number = 62,
  sym_date = 63,
  sym_time = 64,
  anon_sym_T = 65,
  anon_sym_SQUOTE = 66,
  aux_sym_unit_token1 = 67,
  anon_sym_example = 68,
  anon_sym_preferred = 69,
  anon_sym_extensible = 70,
  anon_sym_required = 71,
  anon_sym_Reference = 72,
  anon_sym_Canonical = 73,
  anon_sym_PIPE = 74,
  anon_sym_named = 75,
  anon_sym_QMARK_BANG = 76,
  aux_sym_param_rule_set_params_token1 = 77,
  anon_sym_SLASH = 78,
  anon_sym_SLASH2 = 79,
  sym_regex_pattern = 80,
  anon_sym_SLASH_SLASH = 81,
  aux_sym_fsh_comment_token1 = 82,
  anon_sym_SLASH_STAR = 83,
  aux_sym_fsh_comment_token2 = 84,
  sym_doc = 85,
  sym_alias = 86,
  sym_profile = 87,
  sym_extension = 88,
  sym_invariant = 89,
  sym_instance = 90,
  sym_valueset = 91,
  sym_codesystem = 92,
  sym_mapping = 93,
  sym_logical = 94,
  sym_resource = 95,
  sym_rule_set = 96,
  sym_param_rule_set = 97,
  sym_sd_metadata = 98,
  sym_instance_metadata = 99,
  sym_invariant_metadata = 100,
  sym_vs_metadata = 101,
  sym_cs_metadata = 102,
  sym_mapping_metadata = 103,
  sym_description = 104,
  sym_expression = 105,
  sym_id = 106,
  sym_instance_of = 107,
  sym_parent = 108,
  sym_severity = 109,
  sym_source = 110,
  sym_target = 111,
  sym_title = 112,
  sym_usage = 113,
  sym_xpath = 114,
  sym_rule_set_rule = 115,
  sym_sd_rule = 116,
  sym_lr_rule = 117,
  sym_vs_rule = 118,
  sym_cs_rule = 119,
  sym_instance_rule = 120,
  sym_mapping_entity_rule = 121,
  sym_cardinality_rule = 122,
  sym_add_cre_element_rule = 123,
  sym_code_insert_rule = 124,
  sym_insert_rule = 125,
  sym_valueset_rule = 126,
  sym_fixed_value_rule = 127,
  sym_contains_rule = 128,
  sym_caret_value_rule = 129,
  sym_code_caret_value_rule = 130,
  sym_obeys_rule = 131,
  sym_path_rule = 132,
  sym_flag_rule = 133,
  sym_only_rule = 134,
  sym_mapping_rule = 135,
  sym_add_element_rule = 136,
  sym_vs_component = 137,
  sym_vs_concept_component = 138,
  sym_vs_filter_component = 139,
  sym_vs_component_from = 140,
  sym_vs_from_system = 141,
  sym_vs_from_valueset = 142,
  sym_vs_filter_list = 143,
  sym_vs_filter_definition = 144,
  sym_vs_filter_operator = 145,
  sym_vs_filter_value = 146,
  sym_code = 147,
  sym_concept = 148,
  sym_code_string = 149,
  sym_sequence = 150,
  sym_caret_path = 151,
  sym_name = 152,
  sym_cardinality = 153,
  sym_string = 154,
  sym_multiline_string = 155,
  sym_datetime = 156,
  sym_unit = 157,
  sym_quantity = 158,
  sym_ratio_part = 159,
  sym_ratio = 160,
  sym_bool = 161,
  sym_path = 162,
  sym_strength = 163,
  sym_reference = 164,
  sym_canonical = 165,
  sym_value = 166,
  sym_item = 167,
  sym_flag = 168,
  sym_target_type = 169,
  sym_param_rule_set_params = 170,
  sym_param_rule_set_reference = 171,
  sym_regex = 172,
  sym_fsh_comment = 173,
  aux_sym_doc_repeat1 = 174,
  aux_sym_profile_repeat1 = 175,
  aux_sym_profile_repeat2 = 176,
  aux_sym_invariant_repeat1 = 177,
  aux_sym_instance_repeat1 = 178,
  aux_sym_instance_repeat2 = 179,
  aux_sym_valueset_repeat1 = 180,
  aux_sym_valueset_repeat2 = 181,
  aux_sym_codesystem_repeat1 = 182,
  aux_sym_codesystem_repeat2 = 183,
  aux_sym_mapping_repeat1 = 184,
  aux_sym_mapping_repeat2 = 185,
  aux_sym_logical_repeat1 = 186,
  aux_sym_rule_set_repeat1 = 187,
  aux_sym_param_rule_set_repeat1 = 188,
  aux_sym_cardinality_rule_repeat1 = 189,
  aux_sym_code_insert_rule_repeat1 = 190,
  aux_sym_contains_rule_repeat1 = 191,
  aux_sym_obeys_rule_repeat1 = 192,
  aux_sym_flag_rule_repeat1 = 193,
  aux_sym_only_rule_repeat1 = 194,
  aux_sym_vs_concept_component_repeat1 = 195,
  aux_sym_vs_filter_list_repeat1 = 196,
  aux_sym_sequence_repeat1 = 197,
  aux_sym_string_repeat1 = 198,
  aux_sym_unit_repeat1 = 199,
  aux_sym_reference_repeat1 = 200,
  aux_sym_canonical_repeat1 = 201,
  aux_sym_param_rule_set_params_repeat1 = 202,
  alias_sym_alias_name = 203,
  alias_sym_code_system = 204,
  alias_sym_code_value = 205,
  alias_sym_concept_string = 206,
  alias_sym_param_rule_set_content = 207,
  alias_sym_reference_type = 208,
  alias_sym_rule_set_reference = 209,
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
  [anon_sym_RuleSet] = "RuleSet",
  [anon_sym_Description] = "Description",
  [anon_sym_Expression] = "Expression",
  [anon_sym_Id] = "Id",
  [anon_sym_InstanceOf] = "InstanceOf",
  [anon_sym_Parent] = "Parent",
  [anon_sym_Severity] = "Severity",
  [anon_sym_Source] = "Source",
  [anon_sym_Target] = "Target",
  [anon_sym_Title] = "Title",
  [anon_sym_Usage] = "Usage",
  [anon_sym_XPath] = "XPath",
  [anon_sym_STAR] = "*",
  [anon_sym_contentReference] = "contentReference",
  [anon_sym_insert] = "insert",
  [anon_sym_from] = "from",
  [anon_sym_LPAREN] = "(",
  [anon_sym_exactly] = "exactly",
  [anon_sym_RPAREN] = ")",
  [anon_sym_contains] = "contains",
  [anon_sym_and] = "and",
  [anon_sym_obeys] = "obeys",
  [anon_sym_only] = "only",
  [anon_sym_or] = "or",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_include] = "include",
  [anon_sym_exclude] = "exclude",
  [anon_sym_codes] = "codes",
  [anon_sym_where] = "where",
  [anon_sym_system] = "system",
  [anon_sym_valueset] = "valueset",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_POUND] = "#",
  [aux_sym_sequence_token1] = "sequence_token1",
  [aux_sym_sequence_token2] = "url",
  [anon_sym_CARET] = "^",
  [anon_sym_MS] = "MS",
  [anon_sym_SU] = "SU",
  [anon_sym_TU] = "TU",
  [anon_sym_N] = "N",
  [anon_sym_D] = "D",
  [aux_sym_cardinality_token1] = "cardinality_token1",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_STAR2] = "*",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [sym_double_quote_string_fragment] = "double_quote_string_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_date] = "date",
  [sym_time] = "time",
  [anon_sym_T] = "T",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_unit_token1] = "unit_token1",
  [anon_sym_example] = "example",
  [anon_sym_preferred] = "preferred",
  [anon_sym_extensible] = "extensible",
  [anon_sym_required] = "required",
  [anon_sym_Reference] = "Reference",
  [anon_sym_Canonical] = "Canonical",
  [anon_sym_PIPE] = "|",
  [anon_sym_named] = "named",
  [anon_sym_QMARK_BANG] = "\?!",
  [aux_sym_param_rule_set_params_token1] = "param_rule_set_params_token1",
  [anon_sym_SLASH] = "/",
  [anon_sym_SLASH2] = "/",
  [sym_regex_pattern] = "regex_pattern",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_fsh_comment_token1] = "fsh_comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_fsh_comment_token2] = "fsh_comment_token2",
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
  [sym_rule_set] = "rule_set",
  [sym_param_rule_set] = "param_rule_set",
  [sym_sd_metadata] = "sd_metadata",
  [sym_instance_metadata] = "instance_metadata",
  [sym_invariant_metadata] = "invariant_metadata",
  [sym_vs_metadata] = "vs_metadata",
  [sym_cs_metadata] = "cs_metadata",
  [sym_mapping_metadata] = "mapping_metadata",
  [sym_description] = "description",
  [sym_expression] = "expression",
  [sym_id] = "id",
  [sym_instance_of] = "instance_of",
  [sym_parent] = "parent",
  [sym_severity] = "severity",
  [sym_source] = "source",
  [sym_target] = "target",
  [sym_title] = "title",
  [sym_usage] = "usage",
  [sym_xpath] = "xpath",
  [sym_rule_set_rule] = "rule_set_rule",
  [sym_sd_rule] = "sd_rule",
  [sym_lr_rule] = "lr_rule",
  [sym_vs_rule] = "vs_rule",
  [sym_cs_rule] = "cs_rule",
  [sym_instance_rule] = "instance_rule",
  [sym_mapping_entity_rule] = "mapping_entity_rule",
  [sym_cardinality_rule] = "cardinality_rule",
  [sym_add_cre_element_rule] = "add_cre_element_rule",
  [sym_code_insert_rule] = "code_insert_rule",
  [sym_insert_rule] = "insert_rule",
  [sym_valueset_rule] = "valueset_rule",
  [sym_fixed_value_rule] = "fixed_value_rule",
  [sym_contains_rule] = "contains_rule",
  [sym_caret_value_rule] = "caret_value_rule",
  [sym_code_caret_value_rule] = "code_caret_value_rule",
  [sym_obeys_rule] = "obeys_rule",
  [sym_path_rule] = "path_rule",
  [sym_flag_rule] = "flag_rule",
  [sym_only_rule] = "only_rule",
  [sym_mapping_rule] = "mapping_rule",
  [sym_add_element_rule] = "add_element_rule",
  [sym_vs_component] = "vs_component",
  [sym_vs_concept_component] = "vs_concept_component",
  [sym_vs_filter_component] = "vs_filter_component",
  [sym_vs_component_from] = "vs_component_from",
  [sym_vs_from_system] = "vs_from_system",
  [sym_vs_from_valueset] = "vs_from_valueset",
  [sym_vs_filter_list] = "vs_filter_list",
  [sym_vs_filter_definition] = "vs_filter_definition",
  [sym_vs_filter_operator] = "vs_filter_operator",
  [sym_vs_filter_value] = "vs_filter_value",
  [sym_code] = "code",
  [sym_concept] = "concept",
  [sym_code_string] = "code_string",
  [sym_sequence] = "sequence",
  [sym_caret_path] = "caret_path",
  [sym_name] = "name",
  [sym_cardinality] = "cardinality",
  [sym_string] = "string",
  [sym_multiline_string] = "multiline_string",
  [sym_datetime] = "datetime",
  [sym_unit] = "unit",
  [sym_quantity] = "quantity",
  [sym_ratio_part] = "ratio_part",
  [sym_ratio] = "ratio",
  [sym_bool] = "bool",
  [sym_path] = "path",
  [sym_strength] = "strength",
  [sym_reference] = "reference",
  [sym_canonical] = "canonical",
  [sym_value] = "value",
  [sym_item] = "item",
  [sym_flag] = "flag",
  [sym_target_type] = "target_type",
  [sym_param_rule_set_params] = "param_rule_set_params",
  [sym_param_rule_set_reference] = "param_rule_set_reference",
  [sym_regex] = "regex",
  [sym_fsh_comment] = "fsh_comment",
  [aux_sym_doc_repeat1] = "doc_repeat1",
  [aux_sym_profile_repeat1] = "profile_repeat1",
  [aux_sym_profile_repeat2] = "profile_repeat2",
  [aux_sym_invariant_repeat1] = "invariant_repeat1",
  [aux_sym_instance_repeat1] = "instance_repeat1",
  [aux_sym_instance_repeat2] = "instance_repeat2",
  [aux_sym_valueset_repeat1] = "valueset_repeat1",
  [aux_sym_valueset_repeat2] = "valueset_repeat2",
  [aux_sym_codesystem_repeat1] = "codesystem_repeat1",
  [aux_sym_codesystem_repeat2] = "codesystem_repeat2",
  [aux_sym_mapping_repeat1] = "mapping_repeat1",
  [aux_sym_mapping_repeat2] = "mapping_repeat2",
  [aux_sym_logical_repeat1] = "logical_repeat1",
  [aux_sym_rule_set_repeat1] = "rule_set_repeat1",
  [aux_sym_param_rule_set_repeat1] = "param_rule_set_repeat1",
  [aux_sym_cardinality_rule_repeat1] = "cardinality_rule_repeat1",
  [aux_sym_code_insert_rule_repeat1] = "code_insert_rule_repeat1",
  [aux_sym_contains_rule_repeat1] = "contains_rule_repeat1",
  [aux_sym_obeys_rule_repeat1] = "obeys_rule_repeat1",
  [aux_sym_flag_rule_repeat1] = "flag_rule_repeat1",
  [aux_sym_only_rule_repeat1] = "only_rule_repeat1",
  [aux_sym_vs_concept_component_repeat1] = "vs_concept_component_repeat1",
  [aux_sym_vs_filter_list_repeat1] = "vs_filter_list_repeat1",
  [aux_sym_sequence_repeat1] = "sequence_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_unit_repeat1] = "unit_repeat1",
  [aux_sym_reference_repeat1] = "reference_repeat1",
  [aux_sym_canonical_repeat1] = "canonical_repeat1",
  [aux_sym_param_rule_set_params_repeat1] = "param_rule_set_params_repeat1",
  [alias_sym_alias_name] = "alias_name",
  [alias_sym_code_system] = "code_system",
  [alias_sym_code_value] = "code_value",
  [alias_sym_concept_string] = "concept_string",
  [alias_sym_param_rule_set_content] = "param_rule_set_content",
  [alias_sym_reference_type] = "reference_type",
  [alias_sym_rule_set_reference] = "rule_set_reference",
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
  [anon_sym_RuleSet] = anon_sym_RuleSet,
  [anon_sym_Description] = anon_sym_Description,
  [anon_sym_Expression] = anon_sym_Expression,
  [anon_sym_Id] = anon_sym_Id,
  [anon_sym_InstanceOf] = anon_sym_InstanceOf,
  [anon_sym_Parent] = anon_sym_Parent,
  [anon_sym_Severity] = anon_sym_Severity,
  [anon_sym_Source] = anon_sym_Source,
  [anon_sym_Target] = anon_sym_Target,
  [anon_sym_Title] = anon_sym_Title,
  [anon_sym_Usage] = anon_sym_Usage,
  [anon_sym_XPath] = anon_sym_XPath,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_contentReference] = anon_sym_contentReference,
  [anon_sym_insert] = anon_sym_insert,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_exactly] = anon_sym_exactly,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_contains] = anon_sym_contains,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_obeys] = anon_sym_obeys,
  [anon_sym_only] = anon_sym_only,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_exclude] = anon_sym_exclude,
  [anon_sym_codes] = anon_sym_codes,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_system] = anon_sym_system,
  [anon_sym_valueset] = anon_sym_valueset,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_sequence_token1] = aux_sym_sequence_token1,
  [aux_sym_sequence_token2] = aux_sym_sequence_token2,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_MS] = anon_sym_MS,
  [anon_sym_SU] = anon_sym_SU,
  [anon_sym_TU] = anon_sym_TU,
  [anon_sym_N] = anon_sym_N,
  [anon_sym_D] = anon_sym_D,
  [aux_sym_cardinality_token1] = aux_sym_cardinality_token1,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_STAR2] = anon_sym_STAR,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [sym_double_quote_string_fragment] = sym_double_quote_string_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_date] = sym_date,
  [sym_time] = sym_time,
  [anon_sym_T] = anon_sym_T,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_unit_token1] = aux_sym_unit_token1,
  [anon_sym_example] = anon_sym_example,
  [anon_sym_preferred] = anon_sym_preferred,
  [anon_sym_extensible] = anon_sym_extensible,
  [anon_sym_required] = anon_sym_required,
  [anon_sym_Reference] = anon_sym_Reference,
  [anon_sym_Canonical] = anon_sym_Canonical,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_named] = anon_sym_named,
  [anon_sym_QMARK_BANG] = anon_sym_QMARK_BANG,
  [aux_sym_param_rule_set_params_token1] = aux_sym_param_rule_set_params_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_SLASH2] = anon_sym_SLASH,
  [sym_regex_pattern] = sym_regex_pattern,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_fsh_comment_token1] = aux_sym_fsh_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_fsh_comment_token2] = aux_sym_fsh_comment_token2,
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
  [sym_rule_set] = sym_rule_set,
  [sym_param_rule_set] = sym_param_rule_set,
  [sym_sd_metadata] = sym_sd_metadata,
  [sym_instance_metadata] = sym_instance_metadata,
  [sym_invariant_metadata] = sym_invariant_metadata,
  [sym_vs_metadata] = sym_vs_metadata,
  [sym_cs_metadata] = sym_cs_metadata,
  [sym_mapping_metadata] = sym_mapping_metadata,
  [sym_description] = sym_description,
  [sym_expression] = sym_expression,
  [sym_id] = sym_id,
  [sym_instance_of] = sym_instance_of,
  [sym_parent] = sym_parent,
  [sym_severity] = sym_severity,
  [sym_source] = sym_source,
  [sym_target] = sym_target,
  [sym_title] = sym_title,
  [sym_usage] = sym_usage,
  [sym_xpath] = sym_xpath,
  [sym_rule_set_rule] = sym_rule_set_rule,
  [sym_sd_rule] = sym_sd_rule,
  [sym_lr_rule] = sym_lr_rule,
  [sym_vs_rule] = sym_vs_rule,
  [sym_cs_rule] = sym_cs_rule,
  [sym_instance_rule] = sym_instance_rule,
  [sym_mapping_entity_rule] = sym_mapping_entity_rule,
  [sym_cardinality_rule] = sym_cardinality_rule,
  [sym_add_cre_element_rule] = sym_add_cre_element_rule,
  [sym_code_insert_rule] = sym_code_insert_rule,
  [sym_insert_rule] = sym_insert_rule,
  [sym_valueset_rule] = sym_valueset_rule,
  [sym_fixed_value_rule] = sym_fixed_value_rule,
  [sym_contains_rule] = sym_contains_rule,
  [sym_caret_value_rule] = sym_caret_value_rule,
  [sym_code_caret_value_rule] = sym_code_caret_value_rule,
  [sym_obeys_rule] = sym_obeys_rule,
  [sym_path_rule] = sym_path_rule,
  [sym_flag_rule] = sym_flag_rule,
  [sym_only_rule] = sym_only_rule,
  [sym_mapping_rule] = sym_mapping_rule,
  [sym_add_element_rule] = sym_add_element_rule,
  [sym_vs_component] = sym_vs_component,
  [sym_vs_concept_component] = sym_vs_concept_component,
  [sym_vs_filter_component] = sym_vs_filter_component,
  [sym_vs_component_from] = sym_vs_component_from,
  [sym_vs_from_system] = sym_vs_from_system,
  [sym_vs_from_valueset] = sym_vs_from_valueset,
  [sym_vs_filter_list] = sym_vs_filter_list,
  [sym_vs_filter_definition] = sym_vs_filter_definition,
  [sym_vs_filter_operator] = sym_vs_filter_operator,
  [sym_vs_filter_value] = sym_vs_filter_value,
  [sym_code] = sym_code,
  [sym_concept] = sym_concept,
  [sym_code_string] = sym_code_string,
  [sym_sequence] = sym_sequence,
  [sym_caret_path] = sym_caret_path,
  [sym_name] = sym_name,
  [sym_cardinality] = sym_cardinality,
  [sym_string] = sym_string,
  [sym_multiline_string] = sym_multiline_string,
  [sym_datetime] = sym_datetime,
  [sym_unit] = sym_unit,
  [sym_quantity] = sym_quantity,
  [sym_ratio_part] = sym_ratio_part,
  [sym_ratio] = sym_ratio,
  [sym_bool] = sym_bool,
  [sym_path] = sym_path,
  [sym_strength] = sym_strength,
  [sym_reference] = sym_reference,
  [sym_canonical] = sym_canonical,
  [sym_value] = sym_value,
  [sym_item] = sym_item,
  [sym_flag] = sym_flag,
  [sym_target_type] = sym_target_type,
  [sym_param_rule_set_params] = sym_param_rule_set_params,
  [sym_param_rule_set_reference] = sym_param_rule_set_reference,
  [sym_regex] = sym_regex,
  [sym_fsh_comment] = sym_fsh_comment,
  [aux_sym_doc_repeat1] = aux_sym_doc_repeat1,
  [aux_sym_profile_repeat1] = aux_sym_profile_repeat1,
  [aux_sym_profile_repeat2] = aux_sym_profile_repeat2,
  [aux_sym_invariant_repeat1] = aux_sym_invariant_repeat1,
  [aux_sym_instance_repeat1] = aux_sym_instance_repeat1,
  [aux_sym_instance_repeat2] = aux_sym_instance_repeat2,
  [aux_sym_valueset_repeat1] = aux_sym_valueset_repeat1,
  [aux_sym_valueset_repeat2] = aux_sym_valueset_repeat2,
  [aux_sym_codesystem_repeat1] = aux_sym_codesystem_repeat1,
  [aux_sym_codesystem_repeat2] = aux_sym_codesystem_repeat2,
  [aux_sym_mapping_repeat1] = aux_sym_mapping_repeat1,
  [aux_sym_mapping_repeat2] = aux_sym_mapping_repeat2,
  [aux_sym_logical_repeat1] = aux_sym_logical_repeat1,
  [aux_sym_rule_set_repeat1] = aux_sym_rule_set_repeat1,
  [aux_sym_param_rule_set_repeat1] = aux_sym_param_rule_set_repeat1,
  [aux_sym_cardinality_rule_repeat1] = aux_sym_cardinality_rule_repeat1,
  [aux_sym_code_insert_rule_repeat1] = aux_sym_code_insert_rule_repeat1,
  [aux_sym_contains_rule_repeat1] = aux_sym_contains_rule_repeat1,
  [aux_sym_obeys_rule_repeat1] = aux_sym_obeys_rule_repeat1,
  [aux_sym_flag_rule_repeat1] = aux_sym_flag_rule_repeat1,
  [aux_sym_only_rule_repeat1] = aux_sym_only_rule_repeat1,
  [aux_sym_vs_concept_component_repeat1] = aux_sym_vs_concept_component_repeat1,
  [aux_sym_vs_filter_list_repeat1] = aux_sym_vs_filter_list_repeat1,
  [aux_sym_sequence_repeat1] = aux_sym_sequence_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_unit_repeat1] = aux_sym_unit_repeat1,
  [aux_sym_reference_repeat1] = aux_sym_reference_repeat1,
  [aux_sym_canonical_repeat1] = aux_sym_canonical_repeat1,
  [aux_sym_param_rule_set_params_repeat1] = aux_sym_param_rule_set_params_repeat1,
  [alias_sym_alias_name] = alias_sym_alias_name,
  [alias_sym_code_system] = alias_sym_code_system,
  [alias_sym_code_value] = alias_sym_code_value,
  [alias_sym_concept_string] = alias_sym_concept_string,
  [alias_sym_param_rule_set_content] = alias_sym_param_rule_set_content,
  [alias_sym_reference_type] = alias_sym_reference_type,
  [alias_sym_rule_set_reference] = alias_sym_rule_set_reference,
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
  [anon_sym_RuleSet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Description] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Expression] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Id] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_InstanceOf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Parent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Severity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Source] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Target] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Title] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Usage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XPath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contentReference] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_insert] = {
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
  [anon_sym_only] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_codes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_system] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_valueset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
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
  [aux_sym_sequence_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SU] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TU] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_N] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D] = {
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
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_T] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_unit_token1] = {
    .visible = false,
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
  [anon_sym_Reference] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Canonical] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_named] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_param_rule_set_params_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH2] = {
    .visible = true,
    .named = false,
  },
  [sym_regex_pattern] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_fsh_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_fsh_comment_token2] = {
    .visible = false,
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
  [sym_rule_set] = {
    .visible = true,
    .named = true,
  },
  [sym_param_rule_set] = {
    .visible = true,
    .named = true,
  },
  [sym_sd_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_instance_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_invariant_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_vs_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_cs_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_mapping_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym_instance_of] = {
    .visible = true,
    .named = true,
  },
  [sym_parent] = {
    .visible = true,
    .named = true,
  },
  [sym_severity] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_target] = {
    .visible = true,
    .named = true,
  },
  [sym_title] = {
    .visible = true,
    .named = true,
  },
  [sym_usage] = {
    .visible = true,
    .named = true,
  },
  [sym_xpath] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_set_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_sd_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_lr_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_vs_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_cs_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_instance_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_mapping_entity_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_cardinality_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_add_cre_element_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_code_insert_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_insert_rule] = {
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
  [sym_code_caret_value_rule] = {
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
  [sym_flag_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_only_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_mapping_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_add_element_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_vs_component] = {
    .visible = true,
    .named = true,
  },
  [sym_vs_concept_component] = {
    .visible = true,
    .named = true,
  },
  [sym_vs_filter_component] = {
    .visible = true,
    .named = true,
  },
  [sym_vs_component_from] = {
    .visible = true,
    .named = true,
  },
  [sym_vs_from_system] = {
    .visible = true,
    .named = true,
  },
  [sym_vs_from_valueset] = {
    .visible = true,
    .named = true,
  },
  [sym_vs_filter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_vs_filter_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_vs_filter_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_vs_filter_value] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_concept] = {
    .visible = true,
    .named = true,
  },
  [sym_code_string] = {
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
  [sym_datetime] = {
    .visible = true,
    .named = true,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_quantity] = {
    .visible = true,
    .named = true,
  },
  [sym_ratio_part] = {
    .visible = true,
    .named = true,
  },
  [sym_ratio] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
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
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_canonical] = {
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
  [sym_flag] = {
    .visible = true,
    .named = true,
  },
  [sym_target_type] = {
    .visible = true,
    .named = true,
  },
  [sym_param_rule_set_params] = {
    .visible = true,
    .named = true,
  },
  [sym_param_rule_set_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym_fsh_comment] = {
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
  [aux_sym_invariant_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instance_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instance_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_valueset_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_valueset_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_codesystem_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_codesystem_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mapping_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mapping_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_logical_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_set_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_param_rule_set_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cardinality_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_insert_rule_repeat1] = {
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
  [aux_sym_flag_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_only_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_vs_concept_component_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_vs_filter_list_repeat1] = {
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
  [aux_sym_unit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_reference_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_canonical_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_param_rule_set_params_repeat1] = {
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
  [alias_sym_concept_string] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_param_rule_set_content] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_reference_type] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_rule_set_reference] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [2] = alias_sym_rule_set_reference,
  },
  [2] = {
    [0] = alias_sym_param_rule_set_content,
  },
  [3] = {
    [2] = alias_sym_alias_name,
  },
  [4] = {
    [1] = alias_sym_code_value,
  },
  [5] = {
    [1] = alias_sym_concept_string,
  },
  [6] = {
    [3] = alias_sym_rule_set_reference,
  },
  [7] = {
    [0] = alias_sym_reference_type,
  },
  [8] = {
    [0] = alias_sym_code_system,
    [2] = alias_sym_code_value,
  },
  [9] = {
    [0] = alias_sym_code_system,
    [2] = alias_sym_concept_string,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_rule_set_rule, 2,
    sym_rule_set_rule,
    alias_sym_param_rule_set_content,
  sym_sequence, 5,
    sym_sequence,
    alias_sym_alias_name,
    alias_sym_code_system,
    alias_sym_code_value,
    alias_sym_rule_set_reference,
  sym_string, 2,
    sym_string,
    alias_sym_concept_string,
  sym_reference, 2,
    sym_reference,
    alias_sym_reference_type,
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
  [25] = 2,
  [26] = 16,
  [27] = 18,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 23,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 32,
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
  [69] = 18,
  [70] = 16,
  [71] = 71,
  [72] = 72,
  [73] = 18,
  [74] = 47,
  [75] = 66,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 23,
  [83] = 83,
  [84] = 84,
  [85] = 16,
  [86] = 33,
  [87] = 87,
  [88] = 88,
  [89] = 34,
  [90] = 2,
  [91] = 37,
  [92] = 38,
  [93] = 93,
  [94] = 94,
  [95] = 39,
  [96] = 96,
  [97] = 23,
  [98] = 98,
  [99] = 16,
  [100] = 18,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 2,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 88,
  [113] = 16,
  [114] = 2,
  [115] = 18,
  [116] = 33,
  [117] = 37,
  [118] = 38,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 23,
  [123] = 34,
  [124] = 39,
  [125] = 47,
  [126] = 18,
  [127] = 16,
  [128] = 128,
  [129] = 16,
  [130] = 37,
  [131] = 18,
  [132] = 16,
  [133] = 34,
  [134] = 134,
  [135] = 135,
  [136] = 33,
  [137] = 47,
  [138] = 38,
  [139] = 39,
  [140] = 140,
  [141] = 141,
  [142] = 134,
  [143] = 18,
  [144] = 23,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 23,
  [150] = 2,
  [151] = 151,
  [152] = 16,
  [153] = 153,
  [154] = 16,
  [155] = 155,
  [156] = 156,
  [157] = 18,
  [158] = 158,
  [159] = 16,
  [160] = 160,
  [161] = 23,
  [162] = 18,
  [163] = 16,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 18,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 18,
  [174] = 174,
  [175] = 175,
  [176] = 23,
  [177] = 177,
  [178] = 178,
  [179] = 23,
  [180] = 180,
  [181] = 181,
  [182] = 33,
  [183] = 34,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 18,
  [188] = 16,
  [189] = 18,
  [190] = 16,
  [191] = 23,
  [192] = 16,
  [193] = 193,
  [194] = 18,
  [195] = 16,
  [196] = 23,
  [197] = 197,
  [198] = 79,
  [199] = 18,
  [200] = 16,
  [201] = 201,
  [202] = 18,
  [203] = 16,
  [204] = 18,
  [205] = 16,
  [206] = 23,
  [207] = 80,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 18,
  [214] = 16,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 93,
  [230] = 230,
  [231] = 225,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 230,
  [237] = 237,
  [238] = 34,
  [239] = 33,
  [240] = 240,
  [241] = 241,
  [242] = 23,
  [243] = 23,
  [244] = 16,
  [245] = 18,
  [246] = 23,
  [247] = 18,
  [248] = 18,
  [249] = 16,
  [250] = 250,
  [251] = 18,
  [252] = 23,
  [253] = 16,
  [254] = 23,
  [255] = 18,
  [256] = 16,
  [257] = 257,
  [258] = 258,
  [259] = 23,
  [260] = 23,
  [261] = 16,
  [262] = 18,
  [263] = 33,
  [264] = 264,
  [265] = 265,
  [266] = 23,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 230,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 18,
  [284] = 284,
  [285] = 23,
  [286] = 286,
  [287] = 287,
  [288] = 121,
  [289] = 128,
  [290] = 16,
  [291] = 291,
  [292] = 23,
  [293] = 225,
  [294] = 294,
  [295] = 230,
  [296] = 225,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 237,
  [302] = 23,
  [303] = 303,
  [304] = 23,
  [305] = 23,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 34,
  [310] = 310,
  [311] = 119,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 16,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 312,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 319,
  [328] = 318,
  [329] = 319,
  [330] = 320,
  [331] = 331,
  [332] = 332,
  [333] = 318,
  [334] = 278,
  [335] = 335,
  [336] = 336,
  [337] = 18,
  [338] = 120,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 320,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 23,
  [351] = 351,
  [352] = 320,
  [353] = 318,
  [354] = 354,
  [355] = 279,
  [356] = 356,
  [357] = 280,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 23,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 18,
  [414] = 16,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 23,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 424,
  [426] = 426,
  [427] = 424,
  [428] = 426,
  [429] = 424,
  [430] = 16,
  [431] = 424,
  [432] = 424,
  [433] = 18,
  [434] = 426,
  [435] = 426,
  [436] = 436,
  [437] = 426,
  [438] = 424,
  [439] = 426,
  [440] = 426,
  [441] = 441,
  [442] = 18,
  [443] = 16,
  [444] = 424,
  [445] = 424,
  [446] = 426,
  [447] = 426,
  [448] = 424,
  [449] = 424,
  [450] = 426,
  [451] = 451,
  [452] = 426,
  [453] = 424,
  [454] = 424,
  [455] = 426,
  [456] = 426,
  [457] = 426,
  [458] = 458,
  [459] = 424,
  [460] = 426,
  [461] = 424,
  [462] = 462,
  [463] = 424,
  [464] = 426,
  [465] = 465,
  [466] = 23,
  [467] = 16,
  [468] = 18,
  [469] = 469,
  [470] = 470,
  [471] = 16,
  [472] = 18,
  [473] = 473,
  [474] = 18,
  [475] = 16,
  [476] = 476,
  [477] = 23,
  [478] = 18,
  [479] = 16,
  [480] = 480,
  [481] = 16,
  [482] = 23,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 484,
  [487] = 23,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 483,
  [492] = 483,
  [493] = 484,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 483,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 483,
  [502] = 18,
  [503] = 484,
  [504] = 504,
  [505] = 484,
  [506] = 18,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 483,
  [511] = 16,
  [512] = 18,
  [513] = 16,
  [514] = 514,
  [515] = 23,
  [516] = 16,
  [517] = 18,
  [518] = 518,
  [519] = 483,
  [520] = 499,
  [521] = 521,
  [522] = 18,
  [523] = 16,
  [524] = 484,
  [525] = 525,
  [526] = 526,
  [527] = 23,
  [528] = 528,
  [529] = 484,
  [530] = 18,
  [531] = 531,
  [532] = 16,
  [533] = 533,
  [534] = 18,
  [535] = 16,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 504,
  [540] = 23,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 23,
  [546] = 546,
  [547] = 547,
  [548] = 23,
  [549] = 22,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 2,
  [554] = 23,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 23,
  [559] = 559,
  [560] = 23,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 18,
  [568] = 281,
  [569] = 23,
  [570] = 565,
  [571] = 571,
  [572] = 16,
  [573] = 16,
  [574] = 544,
  [575] = 575,
  [576] = 18,
  [577] = 16,
  [578] = 18,
  [579] = 23,
  [580] = 23,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 581,
  [591] = 582,
  [592] = 592,
  [593] = 593,
  [594] = 594,
  [595] = 23,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 600,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 597,
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 597,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 619,
  [620] = 620,
  [621] = 621,
  [622] = 622,
  [623] = 623,
  [624] = 624,
  [625] = 625,
  [626] = 626,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 630,
  [631] = 631,
  [632] = 632,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 597,
  [638] = 638,
  [639] = 639,
  [640] = 629,
  [641] = 641,
  [642] = 642,
  [643] = 626,
  [644] = 634,
  [645] = 645,
  [646] = 646,
  [647] = 597,
  [648] = 629,
  [649] = 597,
  [650] = 597,
  [651] = 597,
  [652] = 597,
  [653] = 597,
  [654] = 597,
  [655] = 597,
  [656] = 597,
  [657] = 597,
  [658] = 658,
  [659] = 659,
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

static inline bool sym_regex_pattern_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < ' '
      ? (c < '\r'
        ? c == '\t'
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
      if (eof) ADVANCE(397);
      if (lookahead == '"') ADVANCE(587);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == '(') ADVANCE(427);
      if (lookahead == ')') ADVANCE(429);
      if (lookahead == '*') ADVANCE(585);
      if (lookahead == '+') ADVANCE(334);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(624);
      if (lookahead == ':') ADVANCE(399);
      if (lookahead == '=') ADVANCE(400);
      if (lookahead == '?') ADVANCE(2);
      if (lookahead == 'A') ADVANCE(192);
      if (lookahead == 'C') ADVANCE(73);
      if (lookahead == 'D') ADVANCE(581);
      if (lookahead == 'E') ADVANCE(322);
      if (lookahead == 'I') ADVANCE(104);
      if (lookahead == 'L') ADVANCE(233);
      if (lookahead == 'M') ADVANCE(61);
      if (lookahead == 'N') ADVANCE(580);
      if (lookahead == 'P') ADVANCE(82);
      if (lookahead == 'R') ADVANCE(115);
      if (lookahead == 'S') ADVANCE(66);
      if (lookahead == 'T') ADVANCE(608);
      if (lookahead == 'U') ADVANCE(275);
      if (lookahead == 'V') ADVANCE(72);
      if (lookahead == 'X') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(333);
      if (lookahead == '^') ADVANCE(576);
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'c') ADVANCE(235);
      if (lookahead == 'e') ADVANCE(323);
      if (lookahead == 'f') ADVANCE(75);
      if (lookahead == 'h') ADVANCE(299);
      if (lookahead == 'i') ADVANCE(211);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(90);
      if (lookahead == 'p') ADVANCE(256);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == 's') ADVANCE(328);
      if (lookahead == 't') ADVANCE(253);
      if (lookahead == 'v') ADVANCE(87);
      if (lookahead == 'w') ADVANCE(177);
      if (lookahead == '|') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(582);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(357)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(38)
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(356);
      if (sym_regex_pattern_character_set_1(lookahead)) ADVANCE(625);
      if (lookahead != 0) ADVANCE(626);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(621);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(587);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'C') ADVANCE(533);
      if (lookahead == 'D') ADVANCE(581);
      if (lookahead == 'M') ADVANCE(526);
      if (lookahead == 'N') ADVANCE(580);
      if (lookahead == 'R') ADVANCE(546);
      if (lookahead == 'S') ADVANCE(528);
      if (lookahead == 'T') ADVANCE(529);
      if (lookahead == 'c') ADVANCE(560);
      if (lookahead == 'f') ADVANCE(535);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == 't') ADVANCE(562);
      if (lookahead == 'v') ADVANCE(538);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(573);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(506);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(588);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '/') ADVANCE(487);
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
          lookahead == 65279) ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == '?') ADVANCE(446);
      if (lookahead == 'C') ADVANCE(533);
      if (lookahead == 'D') ADVANCE(581);
      if (lookahead == 'M') ADVANCE(526);
      if (lookahead == 'N') ADVANCE(580);
      if (lookahead == 'R') ADVANCE(546);
      if (lookahead == 'S') ADVANCE(528);
      if (lookahead == 'T') ADVANCE(529);
      if (lookahead == 'c') ADVANCE(560);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 'o') ADVANCE(561);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == 'v') ADVANCE(538);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(573);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(505);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'a') ADVANCE(552);
      if (lookahead == 'f') ADVANCE(564);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(8)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'a') ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(9)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(10)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'o') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(11)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(12)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '/') ADVANCE(589);
      if (lookahead == '\\') ADVANCE(312);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(590);
      if (lookahead != 0) ADVANCE(591);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '/') ADVANCE(589);
      if (lookahead == '\\') ADVANCE(312);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(590);
      if (lookahead != 0) ADVANCE(591);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '+') ADVANCE(573);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'D') ADVANCE(581);
      if (lookahead == 'M') ADVANCE(526);
      if (lookahead == 'N') ADVANCE(580);
      if (lookahead == 'S') ADVANCE(528);
      if (lookahead == 'T') ADVANCE(529);
      if (lookahead == '^') ADVANCE(576);
      if (lookahead == 'c') ADVANCE(560);
      if (lookahead == 'e') ADVANCE(568);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(551);
      if (lookahead == 'o') ADVANCE(539);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == 'v') ADVANCE(538);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(505);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == '^') ADVANCE(576);
      if (lookahead == 'c') ADVANCE(560);
      if (lookahead == 'e') ADVANCE(568);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(551);
      if (lookahead == 's') ADVANCE(571);
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
          lookahead == 65279) ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == '^') ADVANCE(576);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(17)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'c') ADVANCE(560);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(18)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(19)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(20)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(21)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == '/') ADVANCE(611);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(610);
      END_STATE();
    case 23:
      if (lookahead == '(') ADVANCE(427);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(23)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 24:
      if (lookahead == ')') ADVANCE(429);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == '\\') ADVANCE(572);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(24)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 25:
      if (lookahead == ')') ADVANCE(429);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'o') ADVANCE(561);
      if (lookahead == '|') ADVANCE(619);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(25)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 26:
      if (lookahead == ')') ADVANCE(429);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'o') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(26)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(585);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == '?') ADVANCE(446);
      if (lookahead == 'C') ADVANCE(533);
      if (lookahead == 'D') ADVANCE(581);
      if (lookahead == 'M') ADVANCE(526);
      if (lookahead == 'N') ADVANCE(580);
      if (lookahead == 'R') ADVANCE(546);
      if (lookahead == 'S') ADVANCE(528);
      if (lookahead == 'T') ADVANCE(529);
      if (lookahead == 'c') ADVANCE(559);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == 'v') ADVANCE(538);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(573);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(633);
      if (lookahead == '/') ADVANCE(627);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(636);
      if (lookahead == '/') ADVANCE(31);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(29);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(636);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(634);
      if (lookahead == '/') ADVANCE(628);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(523);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(32)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(584);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(501);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'n') ADVANCE(531);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(34)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(574);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(501);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(35)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(574);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 36:
      if (lookahead == '/') ADVANCE(354);
      END_STATE();
    case 37:
      if (lookahead == '/') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(37)
      END_STATE();
    case 38:
      if (lookahead == '/') ADVANCE(28);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(38)
      END_STATE();
    case 39:
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == '=') ADVANCE(400);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(39)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 40:
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == '=') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(40)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 41:
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == '?') ADVANCE(446);
      if (lookahead == 'C') ADVANCE(533);
      if (lookahead == 'D') ADVANCE(581);
      if (lookahead == 'M') ADVANCE(526);
      if (lookahead == 'N') ADVANCE(580);
      if (lookahead == 'R') ADVANCE(546);
      if (lookahead == 'S') ADVANCE(528);
      if (lookahead == 'T') ADVANCE(529);
      if (lookahead == 'c') ADVANCE(560);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == 'v') ADVANCE(538);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(573);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(41)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(505);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 42:
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == '?') ADVANCE(446);
      if (lookahead == 'C') ADVANCE(533);
      if (lookahead == 'D') ADVANCE(581);
      if (lookahead == 'M') ADVANCE(526);
      if (lookahead == 'N') ADVANCE(580);
      if (lookahead == 'R') ADVANCE(546);
      if (lookahead == 'S') ADVANCE(528);
      if (lookahead == 'T') ADVANCE(529);
      if (lookahead == 'c') ADVANCE(559);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == 'v') ADVANCE(538);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(573);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(42)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(505);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 43:
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == '?') ADVANCE(446);
      if (lookahead == 'D') ADVANCE(581);
      if (lookahead == 'M') ADVANCE(526);
      if (lookahead == 'N') ADVANCE(580);
      if (lookahead == 'S') ADVANCE(528);
      if (lookahead == 'T') ADVANCE(529);
      if (lookahead == 'a') ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(43)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 44:
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'C') ADVANCE(533);
      if (lookahead == 'D') ADVANCE(581);
      if (lookahead == 'M') ADVANCE(526);
      if (lookahead == 'N') ADVANCE(580);
      if (lookahead == 'R') ADVANCE(546);
      if (lookahead == 'S') ADVANCE(528);
      if (lookahead == 'T') ADVANCE(529);
      if (lookahead == 'c') ADVANCE(560);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == 'v') ADVANCE(538);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(573);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(44)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(505);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 45:
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'D') ADVANCE(581);
      if (lookahead == 'M') ADVANCE(526);
      if (lookahead == 'N') ADVANCE(580);
      if (lookahead == 'S') ADVANCE(528);
      if (lookahead == 'T') ADVANCE(529);
      if (lookahead == '^') ADVANCE(576);
      if (lookahead == 'c') ADVANCE(560);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead == 'o') ADVANCE(539);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == 'v') ADVANCE(538);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(573);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(45)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(505);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 46:
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'D') ADVANCE(581);
      if (lookahead == 'M') ADVANCE(526);
      if (lookahead == 'N') ADVANCE(580);
      if (lookahead == 'S') ADVANCE(528);
      if (lookahead == 'T') ADVANCE(529);
      if (lookahead == 'c') ADVANCE(560);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == 'v') ADVANCE(538);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(573);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(46)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(505);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 47:
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'D') ADVANCE(544);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'S') ADVANCE(543);
      if (lookahead == 'X') ADVANCE(525);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(47)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 48:
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'D') ADVANCE(544);
      if (lookahead == 'I') ADVANCE(541);
      if (lookahead == 'P') ADVANCE(536);
      if (lookahead == 'T') ADVANCE(548);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(48)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 49:
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == '\\') ADVANCE(572);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(49)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 50:
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(50)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 51:
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(51)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 52:
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(52)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 53:
      if (lookahead == '/') ADVANCE(36);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(53);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(346);
      END_STATE();
    case 57:
      if (lookahead == '>') ADVANCE(435);
      END_STATE();
    case 58:
      if (lookahead == '>') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      END_STATE();
    case 59:
      if (lookahead == 'P') ADVANCE(77);
      END_STATE();
    case 60:
      if (lookahead == 'R') ADVANCE(156);
      END_STATE();
    case 61:
      if (lookahead == 'S') ADVANCE(577);
      if (lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 62:
      if (lookahead == 'S') ADVANCE(152);
      END_STATE();
    case 63:
      if (lookahead == 'S') ADVANCE(153);
      END_STATE();
    case 64:
      if (lookahead == 'S') ADVANCE(330);
      END_STATE();
    case 65:
      if (lookahead == 'U') ADVANCE(578);
      END_STATE();
    case 66:
      if (lookahead == 'U') ADVANCE(578);
      if (lookahead == 'e') ADVANCE(321);
      if (lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 67:
      if (lookahead == 'U') ADVANCE(579);
      END_STATE();
    case 68:
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == ']') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'c') ADVANCE(198);
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(271);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(298);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(259);
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 89:
      if (lookahead == 'b') ADVANCE(155);
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 90:
      if (lookahead == 'b') ADVANCE(155);
      if (lookahead == 'n') ADVANCE(195);
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 91:
      if (lookahead == 'b') ADVANCE(203);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(303);
      if (lookahead == 'm') ADVANCE(249);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(130);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(131);
      END_STATE();
    case 98:
      if (lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 99:
      if (lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 101:
      if (lookahead == 'c') ADVANCE(260);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 103:
      if (lookahead == 'c') ADVANCE(206);
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(414);
      if (lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(431);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(620);
      END_STATE();
    case 107:
      if (lookahead == 'd') ADVANCE(616);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(614);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 110:
      if (lookahead == 'd') ADVANCE(141);
      END_STATE();
    case 111:
      if (lookahead == 'd') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 112:
      if (lookahead == 'd') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(309);
      END_STATE();
    case 113:
      if (lookahead == 'd') ADVANCE(127);
      END_STATE();
    case 114:
      if (lookahead == 'd') ADVANCE(128);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == 'u') ADVANCE(199);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(321);
      if (lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(443);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(613);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(436);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(617);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(615);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == 'u') ADVANCE(199);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 166:
      if (lookahead == 'f') ADVANCE(415);
      END_STATE();
    case 167:
      if (lookahead == 'f') ADVANCE(187);
      END_STATE();
    case 168:
      if (lookahead == 'f') ADVANCE(148);
      END_STATE();
    case 169:
      if (lookahead == 'f') ADVANCE(162);
      END_STATE();
    case 170:
      if (lookahead == 'f') ADVANCE(162);
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 171:
      if (lookahead == 'f') ADVANCE(165);
      END_STATE();
    case 172:
      if (lookahead == 'g') ADVANCE(408);
      END_STATE();
    case 173:
      if (lookahead == 'g') ADVANCE(178);
      END_STATE();
    case 174:
      if (lookahead == 'g') ADVANCE(149);
      END_STATE();
    case 175:
      if (lookahead == 'g') ADVANCE(121);
      END_STATE();
    case 176:
      if (lookahead == 'h') ADVANCE(422);
      END_STATE();
    case 177:
      if (lookahead == 'h') ADVANCE(161);
      END_STATE();
    case 178:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 179:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 180:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 181:
      if (lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 182:
      if (lookahead == 'i') ADVANCE(238);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 185:
      if (lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 186:
      if (lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 187:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 188:
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 189:
      if (lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 190:
      if (lookahead == 'i') ADVANCE(265);
      END_STATE();
    case 191:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 192:
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 193:
      if (lookahead == 'l') ADVANCE(409);
      END_STATE();
    case 194:
      if (lookahead == 'l') ADVANCE(618);
      END_STATE();
    case 195:
      if (lookahead == 'l') ADVANCE(325);
      END_STATE();
    case 196:
      if (lookahead == 'l') ADVANCE(283);
      END_STATE();
    case 197:
      if (lookahead == 'l') ADVANCE(326);
      END_STATE();
    case 198:
      if (lookahead == 'l') ADVANCE(317);
      END_STATE();
    case 199:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 200:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 201:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 202:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 203:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 204:
      if (lookahead == 'l') ADVANCE(319);
      END_STATE();
    case 205:
      if (lookahead == 'l') ADVANCE(316);
      END_STATE();
    case 206:
      if (lookahead == 'l') ADVANCE(320);
      END_STATE();
    case 207:
      if (lookahead == 'm') ADVANCE(426);
      END_STATE();
    case 208:
      if (lookahead == 'm') ADVANCE(440);
      END_STATE();
    case 209:
      if (lookahead == 'm') ADVANCE(407);
      END_STATE();
    case 210:
      if (lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(402);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(413);
      END_STATE();
    case 214:
      if (lookahead == 'n') ADVANCE(412);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 216:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 217:
      if (lookahead == 'n') ADVANCE(237);
      END_STATE();
    case 218:
      if (lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 219:
      if (lookahead == 'n') ADVANCE(281);
      END_STATE();
    case 220:
      if (lookahead == 'n') ADVANCE(290);
      END_STATE();
    case 221:
      if (lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 222:
      if (lookahead == 'n') ADVANCE(294);
      END_STATE();
    case 223:
      if (lookahead == 'n') ADVANCE(297);
      END_STATE();
    case 224:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 225:
      if (lookahead == 'n') ADVANCE(305);
      END_STATE();
    case 226:
      if (lookahead == 'n') ADVANCE(282);
      END_STATE();
    case 227:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 228:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 229:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 230:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 231:
      if (lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 236:
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 237:
      if (lookahead == 'o') ADVANCE(230);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 239:
      if (lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 240:
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 241:
      if (lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 242:
      if (lookahead == 'o') ADVANCE(318);
      END_STATE();
    case 243:
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 244:
      if (lookahead == 'p') ADVANCE(245);
      END_STATE();
    case 245:
      if (lookahead == 'p') ADVANCE(184);
      END_STATE();
    case 246:
      if (lookahead == 'p') ADVANCE(310);
      END_STATE();
    case 247:
      if (lookahead == 'p') ADVANCE(262);
      END_STATE();
    case 248:
      if (lookahead == 'p') ADVANCE(262);
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 249:
      if (lookahead == 'p') ADVANCE(202);
      END_STATE();
    case 250:
      if (lookahead == 'q') ADVANCE(314);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 257:
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 258:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 259:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 260:
      if (lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 261:
      if (lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 262:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 263:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 264:
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 265:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 266:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 267:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 268:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 269:
      if (lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 270:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 271:
      if (lookahead == 's') ADVANCE(398);
      END_STATE();
    case 272:
      if (lookahead == 's') ADVANCE(438);
      END_STATE();
    case 273:
      if (lookahead == 's') ADVANCE(432);
      END_STATE();
    case 274:
      if (lookahead == 's') ADVANCE(430);
      END_STATE();
    case 275:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 276:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 277:
      if (lookahead == 's') ADVANCE(304);
      if (lookahead == 'v') ADVANCE(78);
      END_STATE();
    case 278:
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 279:
      if (lookahead == 's') ADVANCE(306);
      END_STATE();
    case 280:
      if (lookahead == 's') ADVANCE(182);
      END_STATE();
    case 281:
      if (lookahead == 's') ADVANCE(179);
      END_STATE();
    case 282:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 283:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 284:
      if (lookahead == 's') ADVANCE(154);
      END_STATE();
    case 285:
      if (lookahead == 's') ADVANCE(307);
      END_STATE();
    case 286:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 287:
      if (lookahead == 's') ADVANCE(286);
      END_STATE();
    case 288:
      if (lookahead == 's') ADVANCE(311);
      if (lookahead == 'v') ADVANCE(78);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(416);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(419);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(425);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(411);
      END_STATE();
    case 294:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(406);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(441);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(403);
      END_STATE();
    case 298:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 299:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 300:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 301:
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 302:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 303:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 304:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 305:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 306:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 307:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 308:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 309:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 310:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 311:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 312:
      if (lookahead == 'u') ADVANCE(331);
      if (lookahead == 'x') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(594);
      if (lookahead != 0) ADVANCE(592);
      END_STATE();
    case 313:
      if (lookahead == 'u') ADVANCE(254);
      END_STATE();
    case 314:
      if (lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 315:
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 316:
      if (lookahead == 'u') ADVANCE(158);
      END_STATE();
    case 317:
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 318:
      if (lookahead == 'u') ADVANCE(268);
      END_STATE();
    case 319:
      if (lookahead == 'u') ADVANCE(157);
      END_STATE();
    case 320:
      if (lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 321:
      if (lookahead == 'v') ADVANCE(145);
      END_STATE();
    case 322:
      if (lookahead == 'x') ADVANCE(248);
      END_STATE();
    case 323:
      if (lookahead == 'x') ADVANCE(71);
      END_STATE();
    case 324:
      if (lookahead == 'x') ADVANCE(302);
      END_STATE();
    case 325:
      if (lookahead == 'y') ADVANCE(433);
      END_STATE();
    case 326:
      if (lookahead == 'y') ADVANCE(428);
      END_STATE();
    case 327:
      if (lookahead == 'y') ADVANCE(417);
      END_STATE();
    case 328:
      if (lookahead == 'y') ADVANCE(279);
      END_STATE();
    case 329:
      if (lookahead == 'y') ADVANCE(273);
      END_STATE();
    case 330:
      if (lookahead == 'y') ADVANCE(285);
      END_STATE();
    case 331:
      if (lookahead == '{') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(350);
      END_STATE();
    case 332:
      if (lookahead == '}') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(332);
      END_STATE();
    case 333:
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(622);
      END_STATE();
    case 334:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      END_STATE();
    case 335:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(599);
      END_STATE();
    case 336:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(602);
      END_STATE();
    case 337:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(605);
      END_STATE();
    case 338:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      END_STATE();
    case 339:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      END_STATE();
    case 340:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(606);
      END_STATE();
    case 341:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(600);
      END_STATE();
    case 342:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 343:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 344:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 345:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      END_STATE();
    case 346:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 347:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      END_STATE();
    case 348:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      END_STATE();
    case 349:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(604);
      END_STATE();
    case 350:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      END_STATE();
    case 351:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(592);
      END_STATE();
    case 352:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(332);
      END_STATE();
    case 353:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(351);
      END_STATE();
    case 354:
      if (lookahead == '#' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 355:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 356:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(626);
      END_STATE();
    case 357:
      if (eof) ADVANCE(397);
      if (lookahead == '"') ADVANCE(587);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == '(') ADVANCE(427);
      if (lookahead == ')') ADVANCE(429);
      if (lookahead == '*') ADVANCE(585);
      if (lookahead == '+') ADVANCE(334);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(623);
      if (lookahead == ':') ADVANCE(399);
      if (lookahead == '=') ADVANCE(400);
      if (lookahead == '?') ADVANCE(2);
      if (lookahead == 'A') ADVANCE(192);
      if (lookahead == 'C') ADVANCE(73);
      if (lookahead == 'D') ADVANCE(581);
      if (lookahead == 'E') ADVANCE(322);
      if (lookahead == 'I') ADVANCE(104);
      if (lookahead == 'L') ADVANCE(233);
      if (lookahead == 'M') ADVANCE(61);
      if (lookahead == 'N') ADVANCE(580);
      if (lookahead == 'P') ADVANCE(82);
      if (lookahead == 'R') ADVANCE(115);
      if (lookahead == 'S') ADVANCE(66);
      if (lookahead == 'T') ADVANCE(608);
      if (lookahead == 'U') ADVANCE(275);
      if (lookahead == 'V') ADVANCE(72);
      if (lookahead == 'X') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(333);
      if (lookahead == '^') ADVANCE(576);
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'c') ADVANCE(235);
      if (lookahead == 'e') ADVANCE(323);
      if (lookahead == 'f') ADVANCE(75);
      if (lookahead == 'h') ADVANCE(299);
      if (lookahead == 'i') ADVANCE(211);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(90);
      if (lookahead == 'p') ADVANCE(256);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == 's') ADVANCE(328);
      if (lookahead == 't') ADVANCE(253);
      if (lookahead == 'v') ADVANCE(87);
      if (lookahead == 'w') ADVANCE(177);
      if (lookahead == '|') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(582);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(357)
      END_STATE();
    case 358:
      if (eof) ADVANCE(397);
      if (lookahead == '"') ADVANCE(587);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(623);
      if (lookahead == '=') ADVANCE(400);
      if (lookahead == '?') ADVANCE(2);
      if (lookahead == 'A') ADVANCE(192);
      if (lookahead == 'C') ADVANCE(232);
      if (lookahead == 'D') ADVANCE(581);
      if (lookahead == 'E') ADVANCE(324);
      if (lookahead == 'I') ADVANCE(231);
      if (lookahead == 'L') ADVANCE(233);
      if (lookahead == 'M') ADVANCE(61);
      if (lookahead == 'N') ADVANCE(580);
      if (lookahead == 'P') ADVANCE(255);
      if (lookahead == 'R') ADVANCE(151);
      if (lookahead == 'S') ADVANCE(65);
      if (lookahead == 'T') ADVANCE(67);
      if (lookahead == 'V') ADVANCE(72);
      if (lookahead == '^') ADVANCE(576);
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'c') ADVANCE(241);
      if (lookahead == 'f') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(226);
      if (lookahead == 'o') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(358)
      END_STATE();
    case 359:
      if (eof) ADVANCE(397);
      if (lookahead == '"') ADVANCE(587);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == '^') ADVANCE(576);
      if (lookahead == 'a') ADVANCE(552);
      if (lookahead == 'f') ADVANCE(564);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(359)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 360:
      if (eof) ADVANCE(397);
      if (lookahead == '"') ADVANCE(587);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == '^') ADVANCE(576);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(360)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 361:
      if (eof) ADVANCE(397);
      if (lookahead == '"') ADVANCE(587);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(361)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 362:
      if (eof) ADVANCE(397);
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '(') ADVANCE(427);
      if (lookahead == ')') ADVANCE(429);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(624);
      if (lookahead == ':') ADVANCE(399);
      if (lookahead == '=') ADVANCE(400);
      if (lookahead == 'A') ADVANCE(192);
      if (lookahead == 'C') ADVANCE(232);
      if (lookahead == 'D') ADVANCE(150);
      if (lookahead == 'E') ADVANCE(322);
      if (lookahead == 'I') ADVANCE(104);
      if (lookahead == 'L') ADVANCE(233);
      if (lookahead == 'M') ADVANCE(69);
      if (lookahead == 'P') ADVANCE(82);
      if (lookahead == 'R') ADVANCE(151);
      if (lookahead == 'S') ADVANCE(116);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == 'U') ADVANCE(275);
      if (lookahead == 'V') ADVANCE(72);
      if (lookahead == 'X') ADVANCE(59);
      if (lookahead == '^') ADVANCE(576);
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'f') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(226);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(251);
      if (lookahead == 'w') ADVANCE(177);
      if (lookahead == '|') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(363)
      END_STATE();
    case 363:
      if (eof) ADVANCE(397);
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '(') ADVANCE(427);
      if (lookahead == ')') ADVANCE(429);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(399);
      if (lookahead == '=') ADVANCE(400);
      if (lookahead == 'A') ADVANCE(192);
      if (lookahead == 'C') ADVANCE(232);
      if (lookahead == 'D') ADVANCE(150);
      if (lookahead == 'E') ADVANCE(322);
      if (lookahead == 'I') ADVANCE(104);
      if (lookahead == 'L') ADVANCE(233);
      if (lookahead == 'M') ADVANCE(69);
      if (lookahead == 'P') ADVANCE(82);
      if (lookahead == 'R') ADVANCE(151);
      if (lookahead == 'S') ADVANCE(116);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == 'U') ADVANCE(275);
      if (lookahead == 'V') ADVANCE(72);
      if (lookahead == 'X') ADVANCE(59);
      if (lookahead == '^') ADVANCE(576);
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'f') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(226);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(251);
      if (lookahead == 'w') ADVANCE(177);
      if (lookahead == '|') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(363)
      END_STATE();
    case 364:
      if (eof) ADVANCE(397);
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(623);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(552);
      if (lookahead == 'f') ADVANCE(535);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 't') ADVANCE(562);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(364)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 365:
      if (eof) ADVANCE(397);
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(365)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 366:
      if (eof) ADVANCE(397);
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '(') ADVANCE(427);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == ':') ADVANCE(399);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(366)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 367:
      if (eof) ADVANCE(397);
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '(') ADVANCE(427);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(367)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 368:
      if (eof) ADVANCE(397);
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == ':') ADVANCE(399);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(368)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 369:
      if (eof) ADVANCE(397);
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(552);
      if (lookahead == 'f') ADVANCE(564);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(369)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 370:
      if (eof) ADVANCE(397);
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(370)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 371:
      if (eof) ADVANCE(397);
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(371)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 372:
      if (eof) ADVANCE(397);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == '(') ADVANCE(427);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == ':') ADVANCE(399);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(372)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 373:
      if (eof) ADVANCE(397);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == '(') ADVANCE(427);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(373)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 374:
      if (eof) ADVANCE(397);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == ':') ADVANCE(399);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(374)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 375:
      if (eof) ADVANCE(397);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(375)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 376:
      if (eof) ADVANCE(397);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '(') ADVANCE(427);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(376)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 377:
      if (eof) ADVANCE(397);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '-') ADVANCE(523);
      if (lookahead == '.') ADVANCE(501);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == '=') ADVANCE(400);
      if (lookahead == '?') ADVANCE(446);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'D') ADVANCE(581);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(527);
      if (lookahead == 'N') ADVANCE(580);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'S') ADVANCE(528);
      if (lookahead == 'T') ADVANCE(529);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == '^') ADVANCE(576);
      if (lookahead == 'a') ADVANCE(552);
      if (lookahead == 'c') ADVANCE(558);
      if (lookahead == 'f') ADVANCE(564);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead == 'o') ADVANCE(540);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(377)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(574);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 378:
      if (eof) ADVANCE(397);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(378)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 379:
      if (eof) ADVANCE(397);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(379)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 380:
      if (eof) ADVANCE(397);
      if (lookahead == '(') ADVANCE(427);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(192);
      if (lookahead == 'C') ADVANCE(232);
      if (lookahead == 'E') ADVANCE(324);
      if (lookahead == 'I') ADVANCE(231);
      if (lookahead == 'L') ADVANCE(233);
      if (lookahead == 'M') ADVANCE(69);
      if (lookahead == 'P') ADVANCE(255);
      if (lookahead == 'R') ADVANCE(151);
      if (lookahead == 'T') ADVANCE(607);
      if (lookahead == 'V') ADVANCE(72);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(380)
      END_STATE();
    case 381:
      if (eof) ADVANCE(397);
      if (lookahead == '(') ADVANCE(427);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(381)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 382:
      if (eof) ADVANCE(397);
      if (lookahead == '*') ADVANCE(585);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '?') ADVANCE(2);
      if (lookahead == 'A') ADVANCE(192);
      if (lookahead == 'C') ADVANCE(232);
      if (lookahead == 'D') ADVANCE(581);
      if (lookahead == 'E') ADVANCE(324);
      if (lookahead == 'I') ADVANCE(231);
      if (lookahead == 'L') ADVANCE(233);
      if (lookahead == 'M') ADVANCE(61);
      if (lookahead == 'N') ADVANCE(580);
      if (lookahead == 'P') ADVANCE(255);
      if (lookahead == 'R') ADVANCE(151);
      if (lookahead == 'S') ADVANCE(65);
      if (lookahead == 'T') ADVANCE(67);
      if (lookahead == 'V') ADVANCE(72);
      if (lookahead == 'a') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(382)
      END_STATE();
    case 383:
      if (eof) ADVANCE(397);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '-') ADVANCE(523);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(383)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 384:
      if (eof) ADVANCE(397);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '.') ADVANCE(501);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == '=') ADVANCE(400);
      if (lookahead == '?') ADVANCE(446);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'D') ADVANCE(581);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(527);
      if (lookahead == 'N') ADVANCE(580);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'S') ADVANCE(528);
      if (lookahead == 'T') ADVANCE(529);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == '^') ADVANCE(576);
      if (lookahead == 'a') ADVANCE(552);
      if (lookahead == 'c') ADVANCE(558);
      if (lookahead == 'f') ADVANCE(564);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead == 'o') ADVANCE(540);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(384)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(574);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 385:
      if (eof) ADVANCE(397);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == '=') ADVANCE(400);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(385)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 386:
      if (eof) ADVANCE(397);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'D') ADVANCE(544);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(542);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(537);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'T') ADVANCE(548);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(386)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 387:
      if (eof) ADVANCE(397);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'D') ADVANCE(544);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(542);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'S') ADVANCE(557);
      if (lookahead == 'T') ADVANCE(534);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(387)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 388:
      if (eof) ADVANCE(397);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'D') ADVANCE(544);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(542);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'T') ADVANCE(548);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(388)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 389:
      if (eof) ADVANCE(397);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'D') ADVANCE(544);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(550);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'T') ADVANCE(548);
      if (lookahead == 'U') ADVANCE(565);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(389)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 390:
      if (eof) ADVANCE(397);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(552);
      if (lookahead == 'w') ADVANCE(547);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(390)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 391:
      if (eof) ADVANCE(397);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(391)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 392:
      if (eof) ADVANCE(397);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(392)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 393:
      if (eof) ADVANCE(397);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 'w') ADVANCE(547);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(393)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 394:
      if (eof) ADVANCE(397);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(394)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 395:
      if (eof) ADVANCE(397);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'D') ADVANCE(544);
      if (lookahead == 'E') ADVANCE(567);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'S') ADVANCE(543);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 'X') ADVANCE(525);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(395)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 396:
      if (eof) ADVANCE(397);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(396)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(445);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_Alias);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_Profile);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_Extension);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_Invariant);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_Instance);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_Instance);
      if (lookahead == 'O') ADVANCE(166);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_ValueSet);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_CodeSystem);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_Mapping);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_Logical);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_Resource);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_RuleSet);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_Description);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_Expression);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_Id);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_InstanceOf);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_Parent);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_Severity);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_Source);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_Target);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_Title);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_Usage);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_XPath);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_contentReference);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_insert);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_exactly);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_obeys);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_exclude);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_codes);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_valueset);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '!') ADVANCE(621);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(587);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == '^') ADVANCE(576);
      if (lookahead == 'a') ADVANCE(552);
      if (lookahead == 'f') ADVANCE(564);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(587);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == '^') ADVANCE(576);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(587);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(587);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'C') ADVANCE(533);
      if (lookahead == 'D') ADVANCE(581);
      if (lookahead == 'M') ADVANCE(526);
      if (lookahead == 'N') ADVANCE(580);
      if (lookahead == 'R') ADVANCE(546);
      if (lookahead == 'S') ADVANCE(528);
      if (lookahead == 'T') ADVANCE(529);
      if (lookahead == 'c') ADVANCE(560);
      if (lookahead == 'f') ADVANCE(535);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == 't') ADVANCE(562);
      if (lookahead == 'v') ADVANCE(538);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(506);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(623);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(552);
      if (lookahead == 'f') ADVANCE(535);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 't') ADVANCE(562);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '(') ADVANCE(427);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == ':') ADVANCE(399);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '(') ADVANCE(427);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == ':') ADVANCE(399);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(552);
      if (lookahead == 'f') ADVANCE(564);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(552);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == '?') ADVANCE(446);
      if (lookahead == 'C') ADVANCE(533);
      if (lookahead == 'D') ADVANCE(581);
      if (lookahead == 'M') ADVANCE(526);
      if (lookahead == 'N') ADVANCE(580);
      if (lookahead == 'R') ADVANCE(546);
      if (lookahead == 'S') ADVANCE(528);
      if (lookahead == 'T') ADVANCE(529);
      if (lookahead == 'c') ADVANCE(560);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 'o') ADVANCE(561);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == 'v') ADVANCE(538);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(505);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'a') ADVANCE(552);
      if (lookahead == 'f') ADVANCE(564);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'a') ADVANCE(552);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'o') ADVANCE(561);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == '(') ADVANCE(427);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == ':') ADVANCE(399);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == '(') ADVANCE(427);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == ':') ADVANCE(399);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '(') ADVANCE(427);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '-') ADVANCE(523);
      if (lookahead == '.') ADVANCE(501);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == '=') ADVANCE(400);
      if (lookahead == '?') ADVANCE(446);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'D') ADVANCE(581);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(527);
      if (lookahead == 'N') ADVANCE(580);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'S') ADVANCE(528);
      if (lookahead == 'T') ADVANCE(529);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == '^') ADVANCE(576);
      if (lookahead == 'a') ADVANCE(552);
      if (lookahead == 'c') ADVANCE(558);
      if (lookahead == 'f') ADVANCE(564);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead == 'o') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(574);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '+') ADVANCE(573);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'D') ADVANCE(581);
      if (lookahead == 'M') ADVANCE(526);
      if (lookahead == 'N') ADVANCE(580);
      if (lookahead == 'S') ADVANCE(528);
      if (lookahead == 'T') ADVANCE(529);
      if (lookahead == '^') ADVANCE(576);
      if (lookahead == 'c') ADVANCE(560);
      if (lookahead == 'e') ADVANCE(568);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(551);
      if (lookahead == 'o') ADVANCE(539);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == 'v') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(505);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == '^') ADVANCE(576);
      if (lookahead == 'c') ADVANCE(560);
      if (lookahead == 'e') ADVANCE(568);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(551);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == '^') ADVANCE(576);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'c') ADVANCE(560);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '(') ADVANCE(427);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '(') ADVANCE(427);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == ')') ADVANCE(429);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == '\\') ADVANCE(572);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == ')') ADVANCE(429);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'o') ADVANCE(561);
      if (lookahead == '|') ADVANCE(619);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == ')') ADVANCE(429);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'o') ADVANCE(561);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(585);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == '?') ADVANCE(446);
      if (lookahead == 'C') ADVANCE(533);
      if (lookahead == 'D') ADVANCE(581);
      if (lookahead == 'M') ADVANCE(526);
      if (lookahead == 'N') ADVANCE(580);
      if (lookahead == 'R') ADVANCE(546);
      if (lookahead == 'S') ADVANCE(528);
      if (lookahead == 'T') ADVANCE(529);
      if (lookahead == 'c') ADVANCE(559);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == 'v') ADVANCE(538);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(633);
      if (lookahead == '/') ADVANCE(627);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '-') ADVANCE(523);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '.') ADVANCE(501);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == '=') ADVANCE(400);
      if (lookahead == '?') ADVANCE(446);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'D') ADVANCE(581);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(527);
      if (lookahead == 'N') ADVANCE(580);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'S') ADVANCE(528);
      if (lookahead == 'T') ADVANCE(529);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == '^') ADVANCE(576);
      if (lookahead == 'a') ADVANCE(552);
      if (lookahead == 'c') ADVANCE(558);
      if (lookahead == 'f') ADVANCE(564);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead == 'o') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(574);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == '=') ADVANCE(400);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'D') ADVANCE(544);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(542);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(537);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'T') ADVANCE(548);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'D') ADVANCE(544);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(542);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'S') ADVANCE(557);
      if (lookahead == 'T') ADVANCE(534);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'D') ADVANCE(544);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(542);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'T') ADVANCE(548);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'D') ADVANCE(544);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(550);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'T') ADVANCE(548);
      if (lookahead == 'U') ADVANCE(565);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(552);
      if (lookahead == 'w') ADVANCE(547);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(552);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(561);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 'w') ADVANCE(547);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '-') ADVANCE(523);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(584);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(501);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'n') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(574);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(501);
      if (lookahead == '/') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(574);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(582);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(598);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == '=') ADVANCE(400);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == '=') ADVANCE(400);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == '?') ADVANCE(446);
      if (lookahead == 'C') ADVANCE(533);
      if (lookahead == 'D') ADVANCE(581);
      if (lookahead == 'M') ADVANCE(526);
      if (lookahead == 'N') ADVANCE(580);
      if (lookahead == 'R') ADVANCE(546);
      if (lookahead == 'S') ADVANCE(528);
      if (lookahead == 'T') ADVANCE(529);
      if (lookahead == 'c') ADVANCE(560);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == 'v') ADVANCE(538);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(505);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == '?') ADVANCE(446);
      if (lookahead == 'C') ADVANCE(533);
      if (lookahead == 'D') ADVANCE(581);
      if (lookahead == 'M') ADVANCE(526);
      if (lookahead == 'N') ADVANCE(580);
      if (lookahead == 'R') ADVANCE(546);
      if (lookahead == 'S') ADVANCE(528);
      if (lookahead == 'T') ADVANCE(529);
      if (lookahead == 'c') ADVANCE(559);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == 'v') ADVANCE(538);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(505);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == '?') ADVANCE(446);
      if (lookahead == 'D') ADVANCE(581);
      if (lookahead == 'M') ADVANCE(526);
      if (lookahead == 'N') ADVANCE(580);
      if (lookahead == 'S') ADVANCE(528);
      if (lookahead == 'T') ADVANCE(529);
      if (lookahead == 'a') ADVANCE(552);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'D') ADVANCE(544);
      if (lookahead == 'E') ADVANCE(567);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'S') ADVANCE(543);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 'X') ADVANCE(525);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(554);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(530);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(532);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'C') ADVANCE(533);
      if (lookahead == 'D') ADVANCE(581);
      if (lookahead == 'M') ADVANCE(526);
      if (lookahead == 'N') ADVANCE(580);
      if (lookahead == 'R') ADVANCE(546);
      if (lookahead == 'S') ADVANCE(528);
      if (lookahead == 'T') ADVANCE(529);
      if (lookahead == 'c') ADVANCE(560);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == 'v') ADVANCE(538);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(505);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'D') ADVANCE(581);
      if (lookahead == 'M') ADVANCE(526);
      if (lookahead == 'N') ADVANCE(580);
      if (lookahead == 'S') ADVANCE(528);
      if (lookahead == 'T') ADVANCE(529);
      if (lookahead == '^') ADVANCE(576);
      if (lookahead == 'c') ADVANCE(560);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead == 'o') ADVANCE(539);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == 'v') ADVANCE(538);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(505);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'D') ADVANCE(581);
      if (lookahead == 'M') ADVANCE(526);
      if (lookahead == 'N') ADVANCE(580);
      if (lookahead == 'S') ADVANCE(528);
      if (lookahead == 'T') ADVANCE(529);
      if (lookahead == 'c') ADVANCE(560);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == 'v') ADVANCE(538);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(505);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'D') ADVANCE(544);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'S') ADVANCE(543);
      if (lookahead == 'X') ADVANCE(525);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'D') ADVANCE(544);
      if (lookahead == 'I') ADVANCE(541);
      if (lookahead == 'P') ADVANCE(536);
      if (lookahead == 'T') ADVANCE(548);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == '\\') ADVANCE(572);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(445);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '>') ADVANCE(435);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '>') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'P') ADVANCE(77);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'S') ADVANCE(577);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'S') ADVANCE(577);
      if (lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'U') ADVANCE(578);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'U') ADVANCE(579);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(259);
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'b') ADVANCE(155);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'b') ADVANCE(155);
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(414);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(414);
      if (lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == 'u') ADVANCE(199);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'h') ADVANCE(161);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(282);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(248);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(92);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(247);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(302);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'y') ADVANCE(279);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(622);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_sequence_token2);
      if (lookahead == '#' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_MS);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_SU);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_TU);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_cardinality_token1);
      if (lookahead == '.') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(582);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_cardinality_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(5);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '*') ADVANCE(591);
      if (lookahead == '/') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(591);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '/') ADVANCE(589);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(591);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(591);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(592);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(593);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(345);
      if (lookahead == '.') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(595);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(343);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == ':') ADVANCE(344);
      if (lookahead == 'Z') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(597);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(599);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '-') ADVANCE(348);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(343);
      if (lookahead == '.') ADVANCE(340);
      if (lookahead == 'Z') ADVANCE(602);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(343);
      if (lookahead == ':') ADVANCE(344);
      if (lookahead == 'Z') ADVANCE(602);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(343);
      if (lookahead == ':') ADVANCE(347);
      if (lookahead == 'Z') ADVANCE(602);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(343);
      if (lookahead == 'Z') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(606);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_T);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'U') ADVANCE(579);
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '*') ADVANCE(633);
      if (lookahead == '/') ADVANCE(627);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '/') ADVANCE(611);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(610);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_example);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_preferred);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_extensible);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_Reference);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_Canonical);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_named);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_QMARK_BANG);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_param_rule_set_params_token1);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(633);
      if (lookahead == '/') ADVANCE(627);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      if (lookahead == '*') ADVANCE(633);
      if (lookahead == '/') ADVANCE(627);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_regex_pattern);
      if (lookahead == '\n') SKIP(38)
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(356);
      if (sym_regex_pattern_character_set_1(lookahead)) ADVANCE(625);
      if (lookahead != 0) ADVANCE(626);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_regex_pattern);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(626);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(636);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(632);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_fsh_comment_token1);
      if (lookahead == '*') ADVANCE(635);
      if (lookahead == '/') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(632);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_fsh_comment_token1);
      if (lookahead == '/') ADVANCE(630);
      if (sym_regex_pattern_character_set_1(lookahead)) ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(632);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_fsh_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(632);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(30);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(632);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_fsh_comment_token2);
      if (lookahead == '*') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(30);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 362},
  [3] = {.lex_state = 362},
  [4] = {.lex_state = 362},
  [5] = {.lex_state = 362},
  [6] = {.lex_state = 362},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 362},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 362},
  [13] = {.lex_state = 362},
  [14] = {.lex_state = 358},
  [15] = {.lex_state = 358},
  [16] = {.lex_state = 377},
  [17] = {.lex_state = 362},
  [18] = {.lex_state = 377},
  [19] = {.lex_state = 362},
  [20] = {.lex_state = 362},
  [21] = {.lex_state = 362},
  [22] = {.lex_state = 362},
  [23] = {.lex_state = 377},
  [24] = {.lex_state = 358},
  [25] = {.lex_state = 358},
  [26] = {.lex_state = 384},
  [27] = {.lex_state = 384},
  [28] = {.lex_state = 358},
  [29] = {.lex_state = 362},
  [30] = {.lex_state = 362},
  [31] = {.lex_state = 384},
  [32] = {.lex_state = 358},
  [33] = {.lex_state = 362},
  [34] = {.lex_state = 362},
  [35] = {.lex_state = 15},
  [36] = {.lex_state = 358},
  [37] = {.lex_state = 362},
  [38] = {.lex_state = 362},
  [39] = {.lex_state = 362},
  [40] = {.lex_state = 362},
  [41] = {.lex_state = 362},
  [42] = {.lex_state = 364},
  [43] = {.lex_state = 362},
  [44] = {.lex_state = 362},
  [45] = {.lex_state = 362},
  [46] = {.lex_state = 362},
  [47] = {.lex_state = 362},
  [48] = {.lex_state = 362},
  [49] = {.lex_state = 362},
  [50] = {.lex_state = 362},
  [51] = {.lex_state = 362},
  [52] = {.lex_state = 362},
  [53] = {.lex_state = 362},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 362},
  [57] = {.lex_state = 362},
  [58] = {.lex_state = 362},
  [59] = {.lex_state = 362},
  [60] = {.lex_state = 361},
  [61] = {.lex_state = 362},
  [62] = {.lex_state = 362},
  [63] = {.lex_state = 358},
  [64] = {.lex_state = 362},
  [65] = {.lex_state = 359},
  [66] = {.lex_state = 372},
  [67] = {.lex_state = 362},
  [68] = {.lex_state = 361},
  [69] = {.lex_state = 359},
  [70] = {.lex_state = 359},
  [71] = {.lex_state = 362},
  [72] = {.lex_state = 42},
  [73] = {.lex_state = 364},
  [74] = {.lex_state = 359},
  [75] = {.lex_state = 374},
  [76] = {.lex_state = 358},
  [77] = {.lex_state = 358},
  [78] = {.lex_state = 362},
  [79] = {.lex_state = 382},
  [80] = {.lex_state = 382},
  [81] = {.lex_state = 358},
  [82] = {.lex_state = 359},
  [83] = {.lex_state = 358},
  [84] = {.lex_state = 362},
  [85] = {.lex_state = 364},
  [86] = {.lex_state = 359},
  [87] = {.lex_state = 362},
  [88] = {.lex_state = 373},
  [89] = {.lex_state = 359},
  [90] = {.lex_state = 359},
  [91] = {.lex_state = 359},
  [92] = {.lex_state = 359},
  [93] = {.lex_state = 358},
  [94] = {.lex_state = 41},
  [95] = {.lex_state = 359},
  [96] = {.lex_state = 362},
  [97] = {.lex_state = 364},
  [98] = {.lex_state = 365},
  [99] = {.lex_state = 360},
  [100] = {.lex_state = 360},
  [101] = {.lex_state = 358},
  [102] = {.lex_state = 358},
  [103] = {.lex_state = 362},
  [104] = {.lex_state = 358},
  [105] = {.lex_state = 360},
  [106] = {.lex_state = 364},
  [107] = {.lex_state = 362},
  [108] = {.lex_state = 364},
  [109] = {.lex_state = 358},
  [110] = {.lex_state = 365},
  [111] = {.lex_state = 362},
  [112] = {.lex_state = 375},
  [113] = {.lex_state = 387},
  [114] = {.lex_state = 360},
  [115] = {.lex_state = 361},
  [116] = {.lex_state = 360},
  [117] = {.lex_state = 360},
  [118] = {.lex_state = 360},
  [119] = {.lex_state = 358},
  [120] = {.lex_state = 358},
  [121] = {.lex_state = 358},
  [122] = {.lex_state = 360},
  [123] = {.lex_state = 360},
  [124] = {.lex_state = 360},
  [125] = {.lex_state = 360},
  [126] = {.lex_state = 387},
  [127] = {.lex_state = 361},
  [128] = {.lex_state = 358},
  [129] = {.lex_state = 386},
  [130] = {.lex_state = 361},
  [131] = {.lex_state = 389},
  [132] = {.lex_state = 389},
  [133] = {.lex_state = 361},
  [134] = {.lex_state = 44},
  [135] = {.lex_state = 378},
  [136] = {.lex_state = 361},
  [137] = {.lex_state = 361},
  [138] = {.lex_state = 361},
  [139] = {.lex_state = 361},
  [140] = {.lex_state = 378},
  [141] = {.lex_state = 45},
  [142] = {.lex_state = 44},
  [143] = {.lex_state = 386},
  [144] = {.lex_state = 387},
  [145] = {.lex_state = 44},
  [146] = {.lex_state = 45},
  [147] = {.lex_state = 362},
  [148] = {.lex_state = 361},
  [149] = {.lex_state = 361},
  [150] = {.lex_state = 361},
  [151] = {.lex_state = 362},
  [152] = {.lex_state = 388},
  [153] = {.lex_state = 362},
  [154] = {.lex_state = 366},
  [155] = {.lex_state = 362},
  [156] = {.lex_state = 362},
  [157] = {.lex_state = 366},
  [158] = {.lex_state = 362},
  [159] = {.lex_state = 395},
  [160] = {.lex_state = 362},
  [161] = {.lex_state = 386},
  [162] = {.lex_state = 395},
  [163] = {.lex_state = 369},
  [164] = {.lex_state = 362},
  [165] = {.lex_state = 362},
  [166] = {.lex_state = 362},
  [167] = {.lex_state = 362},
  [168] = {.lex_state = 369},
  [169] = {.lex_state = 362},
  [170] = {.lex_state = 362},
  [171] = {.lex_state = 362},
  [172] = {.lex_state = 362},
  [173] = {.lex_state = 388},
  [174] = {.lex_state = 362},
  [175] = {.lex_state = 362},
  [176] = {.lex_state = 389},
  [177] = {.lex_state = 16},
  [178] = {.lex_state = 362},
  [179] = {.lex_state = 388},
  [180] = {.lex_state = 362},
  [181] = {.lex_state = 362},
  [182] = {.lex_state = 365},
  [183] = {.lex_state = 365},
  [184] = {.lex_state = 362},
  [185] = {.lex_state = 362},
  [186] = {.lex_state = 362},
  [187] = {.lex_state = 385},
  [188] = {.lex_state = 385},
  [189] = {.lex_state = 383},
  [190] = {.lex_state = 383},
  [191] = {.lex_state = 369},
  [192] = {.lex_state = 370},
  [193] = {.lex_state = 358},
  [194] = {.lex_state = 376},
  [195] = {.lex_state = 376},
  [196] = {.lex_state = 395},
  [197] = {.lex_state = 362},
  [198] = {.lex_state = 27},
  [199] = {.lex_state = 367},
  [200] = {.lex_state = 367},
  [201] = {.lex_state = 358},
  [202] = {.lex_state = 390},
  [203] = {.lex_state = 390},
  [204] = {.lex_state = 368},
  [205] = {.lex_state = 368},
  [206] = {.lex_state = 366},
  [207] = {.lex_state = 27},
  [208] = {.lex_state = 358},
  [209] = {.lex_state = 358},
  [210] = {.lex_state = 358},
  [211] = {.lex_state = 362},
  [212] = {.lex_state = 362},
  [213] = {.lex_state = 370},
  [214] = {.lex_state = 381},
  [215] = {.lex_state = 362},
  [216] = {.lex_state = 362},
  [217] = {.lex_state = 362},
  [218] = {.lex_state = 362},
  [219] = {.lex_state = 362},
  [220] = {.lex_state = 362},
  [221] = {.lex_state = 362},
  [222] = {.lex_state = 362},
  [223] = {.lex_state = 362},
  [224] = {.lex_state = 362},
  [225] = {.lex_state = 362},
  [226] = {.lex_state = 362},
  [227] = {.lex_state = 362},
  [228] = {.lex_state = 362},
  [229] = {.lex_state = 41},
  [230] = {.lex_state = 362},
  [231] = {.lex_state = 362},
  [232] = {.lex_state = 362},
  [233] = {.lex_state = 362},
  [234] = {.lex_state = 362},
  [235] = {.lex_state = 362},
  [236] = {.lex_state = 362},
  [237] = {.lex_state = 362},
  [238] = {.lex_state = 378},
  [239] = {.lex_state = 378},
  [240] = {.lex_state = 362},
  [241] = {.lex_state = 362},
  [242] = {.lex_state = 385},
  [243] = {.lex_state = 370},
  [244] = {.lex_state = 393},
  [245] = {.lex_state = 393},
  [246] = {.lex_state = 383},
  [247] = {.lex_state = 381},
  [248] = {.lex_state = 391},
  [249] = {.lex_state = 391},
  [250] = {.lex_state = 7},
  [251] = {.lex_state = 379},
  [252] = {.lex_state = 368},
  [253] = {.lex_state = 379},
  [254] = {.lex_state = 376},
  [255] = {.lex_state = 392},
  [256] = {.lex_state = 392},
  [257] = {.lex_state = 362},
  [258] = {.lex_state = 46},
  [259] = {.lex_state = 390},
  [260] = {.lex_state = 367},
  [261] = {.lex_state = 371},
  [262] = {.lex_state = 371},
  [263] = {.lex_state = 358},
  [264] = {.lex_state = 46},
  [265] = {.lex_state = 362},
  [266] = {.lex_state = 371},
  [267] = {.lex_state = 362},
  [268] = {.lex_state = 362},
  [269] = {.lex_state = 362},
  [270] = {.lex_state = 362},
  [271] = {.lex_state = 362},
  [272] = {.lex_state = 362},
  [273] = {.lex_state = 362},
  [274] = {.lex_state = 362},
  [275] = {.lex_state = 362},
  [276] = {.lex_state = 362},
  [277] = {.lex_state = 46},
  [278] = {.lex_state = 362},
  [279] = {.lex_state = 362},
  [280] = {.lex_state = 362},
  [281] = {.lex_state = 362},
  [282] = {.lex_state = 362},
  [283] = {.lex_state = 394},
  [284] = {.lex_state = 362},
  [285] = {.lex_state = 392},
  [286] = {.lex_state = 362},
  [287] = {.lex_state = 362},
  [288] = {.lex_state = 42},
  [289] = {.lex_state = 42},
  [290] = {.lex_state = 394},
  [291] = {.lex_state = 362},
  [292] = {.lex_state = 379},
  [293] = {.lex_state = 362},
  [294] = {.lex_state = 380},
  [295] = {.lex_state = 362},
  [296] = {.lex_state = 362},
  [297] = {.lex_state = 362},
  [298] = {.lex_state = 362},
  [299] = {.lex_state = 362},
  [300] = {.lex_state = 362},
  [301] = {.lex_state = 362},
  [302] = {.lex_state = 391},
  [303] = {.lex_state = 362},
  [304] = {.lex_state = 381},
  [305] = {.lex_state = 393},
  [306] = {.lex_state = 362},
  [307] = {.lex_state = 362},
  [308] = {.lex_state = 46},
  [309] = {.lex_state = 358},
  [310] = {.lex_state = 46},
  [311] = {.lex_state = 41},
  [312] = {.lex_state = 46},
  [313] = {.lex_state = 362},
  [314] = {.lex_state = 362},
  [315] = {.lex_state = 362},
  [316] = {.lex_state = 362},
  [317] = {.lex_state = 396},
  [318] = {.lex_state = 46},
  [319] = {.lex_state = 46},
  [320] = {.lex_state = 46},
  [321] = {.lex_state = 46},
  [322] = {.lex_state = 362},
  [323] = {.lex_state = 46},
  [324] = {.lex_state = 362},
  [325] = {.lex_state = 46},
  [326] = {.lex_state = 46},
  [327] = {.lex_state = 46},
  [328] = {.lex_state = 46},
  [329] = {.lex_state = 46},
  [330] = {.lex_state = 46},
  [331] = {.lex_state = 362},
  [332] = {.lex_state = 46},
  [333] = {.lex_state = 46},
  [334] = {.lex_state = 362},
  [335] = {.lex_state = 46},
  [336] = {.lex_state = 362},
  [337] = {.lex_state = 396},
  [338] = {.lex_state = 41},
  [339] = {.lex_state = 46},
  [340] = {.lex_state = 362},
  [341] = {.lex_state = 46},
  [342] = {.lex_state = 46},
  [343] = {.lex_state = 362},
  [344] = {.lex_state = 362},
  [345] = {.lex_state = 362},
  [346] = {.lex_state = 362},
  [347] = {.lex_state = 362},
  [348] = {.lex_state = 46},
  [349] = {.lex_state = 46},
  [350] = {.lex_state = 394},
  [351] = {.lex_state = 362},
  [352] = {.lex_state = 46},
  [353] = {.lex_state = 46},
  [354] = {.lex_state = 46},
  [355] = {.lex_state = 362},
  [356] = {.lex_state = 46},
  [357] = {.lex_state = 362},
  [358] = {.lex_state = 362},
  [359] = {.lex_state = 362},
  [360] = {.lex_state = 362},
  [361] = {.lex_state = 362},
  [362] = {.lex_state = 46},
  [363] = {.lex_state = 46},
  [364] = {.lex_state = 46},
  [365] = {.lex_state = 362},
  [366] = {.lex_state = 362},
  [367] = {.lex_state = 362},
  [368] = {.lex_state = 362},
  [369] = {.lex_state = 362},
  [370] = {.lex_state = 362},
  [371] = {.lex_state = 362},
  [372] = {.lex_state = 362},
  [373] = {.lex_state = 362},
  [374] = {.lex_state = 362},
  [375] = {.lex_state = 362},
  [376] = {.lex_state = 362},
  [377] = {.lex_state = 362},
  [378] = {.lex_state = 362},
  [379] = {.lex_state = 362},
  [380] = {.lex_state = 362},
  [381] = {.lex_state = 362},
  [382] = {.lex_state = 362},
  [383] = {.lex_state = 362},
  [384] = {.lex_state = 362},
  [385] = {.lex_state = 362},
  [386] = {.lex_state = 362},
  [387] = {.lex_state = 362},
  [388] = {.lex_state = 396},
  [389] = {.lex_state = 362},
  [390] = {.lex_state = 362},
  [391] = {.lex_state = 362},
  [392] = {.lex_state = 362},
  [393] = {.lex_state = 362},
  [394] = {.lex_state = 362},
  [395] = {.lex_state = 362},
  [396] = {.lex_state = 362},
  [397] = {.lex_state = 362},
  [398] = {.lex_state = 362},
  [399] = {.lex_state = 362},
  [400] = {.lex_state = 362},
  [401] = {.lex_state = 362},
  [402] = {.lex_state = 362},
  [403] = {.lex_state = 362},
  [404] = {.lex_state = 362},
  [405] = {.lex_state = 362},
  [406] = {.lex_state = 362},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 18},
  [410] = {.lex_state = 358},
  [411] = {.lex_state = 362},
  [412] = {.lex_state = 362},
  [413] = {.lex_state = 43},
  [414] = {.lex_state = 43},
  [415] = {.lex_state = 19},
  [416] = {.lex_state = 20},
  [417] = {.lex_state = 32},
  [418] = {.lex_state = 43},
  [419] = {.lex_state = 358},
  [420] = {.lex_state = 20},
  [421] = {.lex_state = 50},
  [422] = {.lex_state = 358},
  [423] = {.lex_state = 20},
  [424] = {.lex_state = 10},
  [425] = {.lex_state = 10},
  [426] = {.lex_state = 10},
  [427] = {.lex_state = 10},
  [428] = {.lex_state = 10},
  [429] = {.lex_state = 10},
  [430] = {.lex_state = 48},
  [431] = {.lex_state = 10},
  [432] = {.lex_state = 10},
  [433] = {.lex_state = 48},
  [434] = {.lex_state = 10},
  [435] = {.lex_state = 10},
  [436] = {.lex_state = 20},
  [437] = {.lex_state = 10},
  [438] = {.lex_state = 10},
  [439] = {.lex_state = 10},
  [440] = {.lex_state = 10},
  [441] = {.lex_state = 51},
  [442] = {.lex_state = 47},
  [443] = {.lex_state = 47},
  [444] = {.lex_state = 10},
  [445] = {.lex_state = 10},
  [446] = {.lex_state = 10},
  [447] = {.lex_state = 10},
  [448] = {.lex_state = 10},
  [449] = {.lex_state = 10},
  [450] = {.lex_state = 10},
  [451] = {.lex_state = 39},
  [452] = {.lex_state = 10},
  [453] = {.lex_state = 10},
  [454] = {.lex_state = 10},
  [455] = {.lex_state = 10},
  [456] = {.lex_state = 10},
  [457] = {.lex_state = 10},
  [458] = {.lex_state = 20},
  [459] = {.lex_state = 10},
  [460] = {.lex_state = 10},
  [461] = {.lex_state = 10},
  [462] = {.lex_state = 20},
  [463] = {.lex_state = 10},
  [464] = {.lex_state = 10},
  [465] = {.lex_state = 52},
  [466] = {.lex_state = 47},
  [467] = {.lex_state = 8},
  [468] = {.lex_state = 8},
  [469] = {.lex_state = 52},
  [470] = {.lex_state = 52},
  [471] = {.lex_state = 34},
  [472] = {.lex_state = 34},
  [473] = {.lex_state = 52},
  [474] = {.lex_state = 25},
  [475] = {.lex_state = 25},
  [476] = {.lex_state = 52},
  [477] = {.lex_state = 48},
  [478] = {.lex_state = 17},
  [479] = {.lex_state = 17},
  [480] = {.lex_state = 52},
  [481] = {.lex_state = 35},
  [482] = {.lex_state = 25},
  [483] = {.lex_state = 13},
  [484] = {.lex_state = 13},
  [485] = {.lex_state = 52},
  [486] = {.lex_state = 13},
  [487] = {.lex_state = 17},
  [488] = {.lex_state = 52},
  [489] = {.lex_state = 52},
  [490] = {.lex_state = 52},
  [491] = {.lex_state = 13},
  [492] = {.lex_state = 13},
  [493] = {.lex_state = 13},
  [494] = {.lex_state = 52},
  [495] = {.lex_state = 52},
  [496] = {.lex_state = 24},
  [497] = {.lex_state = 13},
  [498] = {.lex_state = 14},
  [499] = {.lex_state = 13},
  [500] = {.lex_state = 362},
  [501] = {.lex_state = 13},
  [502] = {.lex_state = 35},
  [503] = {.lex_state = 13},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 13},
  [506] = {.lex_state = 39},
  [507] = {.lex_state = 362},
  [508] = {.lex_state = 362},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 13},
  [511] = {.lex_state = 26},
  [512] = {.lex_state = 26},
  [513] = {.lex_state = 6},
  [514] = {.lex_state = 49},
  [515] = {.lex_state = 34},
  [516] = {.lex_state = 23},
  [517] = {.lex_state = 23},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 13},
  [520] = {.lex_state = 14},
  [521] = {.lex_state = 24},
  [522] = {.lex_state = 6},
  [523] = {.lex_state = 9},
  [524] = {.lex_state = 13},
  [525] = {.lex_state = 14},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 8},
  [528] = {.lex_state = 52},
  [529] = {.lex_state = 13},
  [530] = {.lex_state = 9},
  [531] = {.lex_state = 52},
  [532] = {.lex_state = 39},
  [533] = {.lex_state = 362},
  [534] = {.lex_state = 11},
  [535] = {.lex_state = 11},
  [536] = {.lex_state = 362},
  [537] = {.lex_state = 362},
  [538] = {.lex_state = 52},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 11},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 362},
  [543] = {.lex_state = 362},
  [544] = {.lex_state = 14},
  [545] = {.lex_state = 39},
  [546] = {.lex_state = 362},
  [547] = {.lex_state = 22},
  [548] = {.lex_state = 9},
  [549] = {.lex_state = 39},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 39},
  [554] = {.lex_state = 6},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 20},
  [558] = {.lex_state = 23},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 26},
  [561] = {.lex_state = 22},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 24},
  [565] = {.lex_state = 380},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 21},
  [568] = {.lex_state = 362},
  [569] = {.lex_state = 35},
  [570] = {.lex_state = 380},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 21},
  [573] = {.lex_state = 40},
  [574] = {.lex_state = 13},
  [575] = {.lex_state = 22},
  [576] = {.lex_state = 12},
  [577] = {.lex_state = 12},
  [578] = {.lex_state = 40},
  [579] = {.lex_state = 21},
  [580] = {.lex_state = 12},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 22},
  [584] = {.lex_state = 362},
  [585] = {.lex_state = 362},
  [586] = {.lex_state = 362},
  [587] = {.lex_state = 362},
  [588] = {.lex_state = 362},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 362},
  [594] = {.lex_state = 362},
  [595] = {.lex_state = 40},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 29},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 631},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 1},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 362},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 358},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 37},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 0},
  [658] = {(TSStateId)(-1)},
  [659] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_fsh_comment] = STATE(0),
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
    [anon_sym_RuleSet] = ACTIONS(1),
    [anon_sym_Expression] = ACTIONS(1),
    [anon_sym_Id] = ACTIONS(1),
    [anon_sym_InstanceOf] = ACTIONS(1),
    [anon_sym_Parent] = ACTIONS(1),
    [anon_sym_Severity] = ACTIONS(1),
    [anon_sym_Source] = ACTIONS(1),
    [anon_sym_Target] = ACTIONS(1),
    [anon_sym_Title] = ACTIONS(1),
    [anon_sym_Usage] = ACTIONS(1),
    [anon_sym_XPath] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_contentReference] = ACTIONS(1),
    [anon_sym_insert] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_exactly] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_contains] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_obeys] = ACTIONS(1),
    [anon_sym_only] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_exclude] = ACTIONS(1),
    [anon_sym_codes] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_system] = ACTIONS(1),
    [anon_sym_valueset] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_sequence_token2] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_MS] = ACTIONS(1),
    [anon_sym_SU] = ACTIONS(1),
    [anon_sym_TU] = ACTIONS(1),
    [anon_sym_N] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [aux_sym_cardinality_token1] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_STAR2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_T] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_example] = ACTIONS(1),
    [anon_sym_preferred] = ACTIONS(1),
    [anon_sym_extensible] = ACTIONS(1),
    [anon_sym_required] = ACTIONS(1),
    [anon_sym_Reference] = ACTIONS(1),
    [anon_sym_Canonical] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_named] = ACTIONS(1),
    [anon_sym_QMARK_BANG] = ACTIONS(1),
    [aux_sym_param_rule_set_params_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_SLASH2] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [1] = {
    [sym_doc] = STATE(642),
    [sym_alias] = STATE(407),
    [sym_profile] = STATE(407),
    [sym_extension] = STATE(407),
    [sym_invariant] = STATE(407),
    [sym_instance] = STATE(407),
    [sym_valueset] = STATE(407),
    [sym_codesystem] = STATE(407),
    [sym_mapping] = STATE(407),
    [sym_logical] = STATE(407),
    [sym_resource] = STATE(407),
    [sym_rule_set] = STATE(407),
    [sym_param_rule_set] = STATE(407),
    [sym_fsh_comment] = STATE(1),
    [aux_sym_doc_repeat1] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_Alias] = ACTIONS(9),
    [anon_sym_Profile] = ACTIONS(11),
    [anon_sym_Extension] = ACTIONS(13),
    [anon_sym_Invariant] = ACTIONS(15),
    [anon_sym_Instance] = ACTIONS(17),
    [anon_sym_ValueSet] = ACTIONS(19),
    [anon_sym_CodeSystem] = ACTIONS(21),
    [anon_sym_Mapping] = ACTIONS(23),
    [anon_sym_Logical] = ACTIONS(25),
    [anon_sym_Resource] = ACTIONS(27),
    [anon_sym_RuleSet] = ACTIONS(29),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(33), 1,
      anon_sym_Instance,
    STATE(2), 1,
      sym_fsh_comment,
    ACTIONS(31), 40,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Id,
      anon_sym_InstanceOf,
      anon_sym_Parent,
      anon_sym_Severity,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_XPath,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_GT,
      anon_sym_where,
      anon_sym_POUND,
      anon_sym_CARET,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_named,
  [55] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(39), 1,
      anon_sym_Id,
    ACTIONS(41), 1,
      anon_sym_Parent,
    ACTIONS(43), 1,
      anon_sym_Title,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(3), 1,
      sym_fsh_comment,
    STATE(5), 1,
      aux_sym_profile_repeat1,
    STATE(46), 1,
      aux_sym_logical_repeat1,
    STATE(185), 1,
      sym_sd_metadata,
    STATE(402), 1,
      sym_lr_rule,
    STATE(365), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(184), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(387), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(35), 12,
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
      anon_sym_RuleSet,
  [129] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(39), 1,
      anon_sym_Id,
    ACTIONS(41), 1,
      anon_sym_Parent,
    ACTIONS(43), 1,
      anon_sym_Title,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(4), 1,
      sym_fsh_comment,
    STATE(6), 1,
      aux_sym_profile_repeat1,
    STATE(45), 1,
      aux_sym_logical_repeat1,
    STATE(185), 1,
      sym_sd_metadata,
    STATE(402), 1,
      sym_lr_rule,
    STATE(365), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(184), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(387), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(47), 12,
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
      anon_sym_RuleSet,
  [203] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(39), 1,
      anon_sym_Id,
    ACTIONS(41), 1,
      anon_sym_Parent,
    ACTIONS(43), 1,
      anon_sym_Title,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(5), 1,
      sym_fsh_comment,
    STATE(41), 1,
      aux_sym_logical_repeat1,
    STATE(67), 1,
      aux_sym_profile_repeat1,
    STATE(185), 1,
      sym_sd_metadata,
    STATE(402), 1,
      sym_lr_rule,
    STATE(365), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(184), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(387), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(49), 12,
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
      anon_sym_RuleSet,
  [277] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(39), 1,
      anon_sym_Id,
    ACTIONS(41), 1,
      anon_sym_Parent,
    ACTIONS(43), 1,
      anon_sym_Title,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(6), 1,
      sym_fsh_comment,
    STATE(44), 1,
      aux_sym_logical_repeat1,
    STATE(67), 1,
      aux_sym_profile_repeat1,
    STATE(185), 1,
      sym_sd_metadata,
    STATE(402), 1,
      sym_lr_rule,
    STATE(365), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(184), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(387), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(51), 12,
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
      anon_sym_RuleSet,
  [351] = 23,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      aux_sym_sequence_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(67), 1,
      sym_number,
    ACTIONS(69), 1,
      sym_date,
    ACTIONS(71), 1,
      sym_time,
    ACTIONS(73), 1,
      anon_sym_Reference,
    ACTIONS(75), 1,
      anon_sym_Canonical,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(7), 1,
      sym_fsh_comment,
    STATE(158), 1,
      sym_code,
    STATE(251), 1,
      aux_sym_sequence_repeat1,
    STATE(257), 1,
      sym_reference,
    STATE(284), 1,
      sym_quantity,
    STATE(334), 1,
      sym_sequence,
    STATE(397), 1,
      sym_value,
    STATE(626), 1,
      sym_ratio_part,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    STATE(331), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [436] = 23,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      aux_sym_sequence_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(67), 1,
      sym_number,
    ACTIONS(69), 1,
      sym_date,
    ACTIONS(71), 1,
      sym_time,
    ACTIONS(73), 1,
      anon_sym_Reference,
    ACTIONS(75), 1,
      anon_sym_Canonical,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(8), 1,
      sym_fsh_comment,
    STATE(158), 1,
      sym_code,
    STATE(251), 1,
      aux_sym_sequence_repeat1,
    STATE(257), 1,
      sym_reference,
    STATE(284), 1,
      sym_quantity,
    STATE(334), 1,
      sym_sequence,
    STATE(373), 1,
      sym_value,
    STATE(626), 1,
      sym_ratio_part,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    STATE(331), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [521] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(39), 1,
      anon_sym_Id,
    ACTIONS(41), 1,
      anon_sym_Parent,
    ACTIONS(43), 1,
      anon_sym_Title,
    ACTIONS(83), 1,
      anon_sym_STAR,
    STATE(9), 1,
      sym_fsh_comment,
    STATE(56), 1,
      aux_sym_profile_repeat2,
    STATE(67), 1,
      aux_sym_profile_repeat1,
    STATE(185), 1,
      sym_sd_metadata,
    STATE(386), 1,
      sym_sd_rule,
    STATE(184), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(387), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(81), 12,
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
      anon_sym_RuleSet,
  [590] = 23,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      aux_sym_sequence_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(67), 1,
      sym_number,
    ACTIONS(69), 1,
      sym_date,
    ACTIONS(71), 1,
      sym_time,
    ACTIONS(73), 1,
      anon_sym_Reference,
    ACTIONS(75), 1,
      anon_sym_Canonical,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(10), 1,
      sym_fsh_comment,
    STATE(158), 1,
      sym_code,
    STATE(251), 1,
      aux_sym_sequence_repeat1,
    STATE(257), 1,
      sym_reference,
    STATE(284), 1,
      sym_quantity,
    STATE(334), 1,
      sym_sequence,
    STATE(390), 1,
      sym_value,
    STATE(626), 1,
      sym_ratio_part,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    STATE(331), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [675] = 23,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(69), 1,
      sym_date,
    ACTIONS(71), 1,
      sym_time,
    ACTIONS(73), 1,
      anon_sym_Reference,
    ACTIONS(75), 1,
      anon_sym_Canonical,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(85), 1,
      anon_sym_POUND,
    ACTIONS(87), 1,
      aux_sym_sequence_token1,
    ACTIONS(89), 1,
      sym_number,
    STATE(11), 1,
      sym_fsh_comment,
    STATE(158), 1,
      sym_code,
    STATE(194), 1,
      aux_sym_sequence_repeat1,
    STATE(257), 1,
      sym_reference,
    STATE(278), 1,
      sym_sequence,
    STATE(284), 1,
      sym_quantity,
    STATE(315), 1,
      sym_value,
    STATE(643), 1,
      sym_ratio_part,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    STATE(331), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [760] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(39), 1,
      anon_sym_Id,
    ACTIONS(41), 1,
      anon_sym_Parent,
    ACTIONS(43), 1,
      anon_sym_Title,
    ACTIONS(83), 1,
      anon_sym_STAR,
    STATE(12), 1,
      sym_fsh_comment,
    STATE(53), 1,
      aux_sym_profile_repeat2,
    STATE(67), 1,
      aux_sym_profile_repeat1,
    STATE(185), 1,
      sym_sd_metadata,
    STATE(386), 1,
      sym_sd_rule,
    STATE(184), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(387), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(91), 12,
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
      anon_sym_RuleSet,
  [829] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(39), 1,
      anon_sym_Id,
    ACTIONS(41), 1,
      anon_sym_Parent,
    ACTIONS(43), 1,
      anon_sym_Title,
    ACTIONS(83), 1,
      anon_sym_STAR,
    STATE(9), 1,
      aux_sym_profile_repeat1,
    STATE(13), 1,
      sym_fsh_comment,
    STATE(59), 1,
      aux_sym_profile_repeat2,
    STATE(185), 1,
      sym_sd_metadata,
    STATE(386), 1,
      sym_sd_rule,
    STATE(184), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(387), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(93), 12,
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
      anon_sym_RuleSet,
  [898] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_EQ,
    ACTIONS(99), 1,
      anon_sym_insert,
    ACTIONS(101), 1,
      anon_sym_from,
    ACTIONS(103), 1,
      anon_sym_contains,
    ACTIONS(105), 1,
      anon_sym_and,
    ACTIONS(107), 1,
      anon_sym_obeys,
    ACTIONS(109), 1,
      anon_sym_only,
    ACTIONS(111), 1,
      anon_sym_DASH_GT,
    ACTIONS(113), 1,
      anon_sym_CARET,
    ACTIONS(117), 1,
      aux_sym_cardinality_token1,
    ACTIONS(119), 1,
      anon_sym_DOT_DOT,
    STATE(14), 1,
      sym_fsh_comment,
    STATE(72), 1,
      sym_cardinality,
    STATE(109), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(119), 1,
      sym_flag,
    STATE(410), 1,
      aux_sym_flag_rule_repeat1,
    STATE(607), 1,
      sym_caret_path,
    ACTIONS(115), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(95), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [979] = 20,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_EQ,
    ACTIONS(99), 1,
      anon_sym_insert,
    ACTIONS(101), 1,
      anon_sym_from,
    ACTIONS(103), 1,
      anon_sym_contains,
    ACTIONS(105), 1,
      anon_sym_and,
    ACTIONS(107), 1,
      anon_sym_obeys,
    ACTIONS(109), 1,
      anon_sym_only,
    ACTIONS(113), 1,
      anon_sym_CARET,
    ACTIONS(117), 1,
      aux_sym_cardinality_token1,
    ACTIONS(119), 1,
      anon_sym_DOT_DOT,
    STATE(15), 1,
      sym_fsh_comment,
    STATE(72), 1,
      sym_cardinality,
    STATE(109), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(119), 1,
      sym_flag,
    STATE(410), 1,
      aux_sym_flag_rule_repeat1,
    STATE(607), 1,
      sym_caret_path,
    ACTIONS(115), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(95), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [1057] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 1,
      aux_sym_sequence_token1,
    STATE(16), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 30,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_contains,
      anon_sym_and,
      anon_sym_obeys,
      anon_sym_only,
      anon_sym_DASH_GT,
      anon_sym_POUND,
      anon_sym_CARET,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_BANG,
  [1106] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(130), 1,
      anon_sym_STAR,
    STATE(403), 1,
      sym_rule_set_rule,
    STATE(17), 2,
      sym_fsh_comment,
      aux_sym_rule_set_repeat1,
    STATE(404), 8,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_mapping_rule,
      sym_add_element_rule,
      sym_vs_component,
      sym_concept,
    STATE(387), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(128), 12,
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
      anon_sym_RuleSet,
  [1159] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(133), 1,
      aux_sym_sequence_token1,
    STATE(16), 1,
      aux_sym_sequence_repeat1,
    STATE(18), 1,
      sym_fsh_comment,
    ACTIONS(33), 30,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_contains,
      anon_sym_and,
      anon_sym_obeys,
      anon_sym_only,
      anon_sym_DASH_GT,
      anon_sym_POUND,
      anon_sym_CARET,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_BANG,
  [1210] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      anon_sym_STAR,
    STATE(17), 1,
      aux_sym_rule_set_repeat1,
    STATE(19), 1,
      sym_fsh_comment,
    STATE(403), 1,
      sym_rule_set_rule,
    STATE(404), 8,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_mapping_rule,
      sym_add_element_rule,
      sym_vs_component,
      sym_concept,
    STATE(387), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(135), 12,
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
      anon_sym_RuleSet,
  [1265] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      anon_sym_STAR,
    STATE(20), 1,
      sym_fsh_comment,
    STATE(21), 1,
      aux_sym_param_rule_set_repeat1,
    STATE(405), 1,
      sym_rule_set_rule,
    STATE(404), 8,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_mapping_rule,
      sym_add_element_rule,
      sym_vs_component,
      sym_concept,
    STATE(387), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(139), 12,
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
      anon_sym_RuleSet,
  [1320] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(143), 1,
      anon_sym_STAR,
    STATE(405), 1,
      sym_rule_set_rule,
    STATE(21), 2,
      sym_fsh_comment,
      aux_sym_param_rule_set_repeat1,
    STATE(404), 8,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_mapping_rule,
      sym_add_element_rule,
      sym_vs_component,
      sym_concept,
    STATE(387), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(141), 12,
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
      anon_sym_RuleSet,
  [1373] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(148), 1,
      anon_sym_Instance,
    STATE(22), 1,
      sym_fsh_comment,
    ACTIONS(146), 31,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Id,
      anon_sym_InstanceOf,
      anon_sym_Parent,
      anon_sym_Severity,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_XPath,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_where,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_named,
  [1419] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      sym_fsh_comment,
    ACTIONS(152), 31,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_contains,
      anon_sym_and,
      anon_sym_obeys,
      anon_sym_only,
      anon_sym_DASH_GT,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      anon_sym_CARET,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_BANG,
  [1465] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(156), 1,
      anon_sym_POUND,
    STATE(24), 1,
      sym_fsh_comment,
    ACTIONS(158), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
    ACTIONS(154), 28,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_contains,
      anon_sym_and,
      anon_sym_obeys,
      anon_sym_only,
      anon_sym_DASH_GT,
      anon_sym_CARET,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [1512] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(25), 1,
      sym_fsh_comment,
    ACTIONS(31), 31,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_contains,
      anon_sym_and,
      anon_sym_obeys,
      anon_sym_only,
      anon_sym_DASH_GT,
      anon_sym_POUND,
      anon_sym_CARET,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_BANG,
  [1555] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 1,
      aux_sym_sequence_token1,
    STATE(26), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 28,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_contains,
      anon_sym_and,
      anon_sym_obeys,
      anon_sym_only,
      anon_sym_CARET,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_BANG,
  [1602] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(164), 1,
      aux_sym_sequence_token1,
    STATE(26), 1,
      aux_sym_sequence_repeat1,
    STATE(27), 1,
      sym_fsh_comment,
    ACTIONS(33), 28,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_contains,
      anon_sym_and,
      anon_sym_obeys,
      anon_sym_only,
      anon_sym_CARET,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_BANG,
  [1651] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_EQ,
    ACTIONS(99), 1,
      anon_sym_insert,
    ACTIONS(101), 1,
      anon_sym_from,
    ACTIONS(103), 1,
      anon_sym_contains,
    ACTIONS(105), 1,
      anon_sym_and,
    ACTIONS(107), 1,
      anon_sym_obeys,
    ACTIONS(109), 1,
      anon_sym_only,
    ACTIONS(113), 1,
      anon_sym_CARET,
    STATE(28), 1,
      sym_fsh_comment,
    STATE(109), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(119), 1,
      sym_flag,
    STATE(410), 1,
      aux_sym_flag_rule_repeat1,
    STATE(607), 1,
      sym_caret_path,
    ACTIONS(115), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(95), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [1720] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(43), 1,
      anon_sym_Title,
    ACTIONS(168), 1,
      anon_sym_Id,
    ACTIONS(170), 1,
      anon_sym_Source,
    ACTIONS(172), 1,
      anon_sym_Target,
    ACTIONS(174), 1,
      anon_sym_STAR,
    STATE(29), 1,
      sym_fsh_comment,
    STATE(58), 1,
      aux_sym_mapping_repeat1,
    STATE(166), 1,
      aux_sym_mapping_repeat2,
    STATE(172), 1,
      sym_mapping_metadata,
    STATE(400), 1,
      sym_mapping_entity_rule,
    STATE(401), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    STATE(171), 5,
      sym_description,
      sym_id,
      sym_source,
      sym_target,
      sym_title,
    ACTIONS(166), 12,
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
      anon_sym_RuleSet,
  [1786] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(43), 1,
      anon_sym_Title,
    ACTIONS(168), 1,
      anon_sym_Id,
    ACTIONS(170), 1,
      anon_sym_Source,
    ACTIONS(172), 1,
      anon_sym_Target,
    ACTIONS(174), 1,
      anon_sym_STAR,
    STATE(29), 1,
      aux_sym_mapping_repeat1,
    STATE(30), 1,
      sym_fsh_comment,
    STATE(170), 1,
      aux_sym_mapping_repeat2,
    STATE(172), 1,
      sym_mapping_metadata,
    STATE(400), 1,
      sym_mapping_entity_rule,
    STATE(401), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    STATE(171), 5,
      sym_description,
      sym_id,
      sym_source,
      sym_target,
      sym_title,
    ACTIONS(176), 12,
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
      anon_sym_RuleSet,
  [1852] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
      sym_fsh_comment,
    ACTIONS(152), 29,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_contains,
      anon_sym_and,
      anon_sym_obeys,
      anon_sym_only,
      aux_sym_sequence_token1,
      anon_sym_CARET,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_BANG,
  [1896] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(32), 1,
      sym_fsh_comment,
    ACTIONS(158), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
    ACTIONS(154), 28,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_contains,
      anon_sym_and,
      anon_sym_obeys,
      anon_sym_only,
      anon_sym_DASH_GT,
      anon_sym_CARET,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [1940] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(180), 1,
      anon_sym_Instance,
    STATE(33), 1,
      sym_fsh_comment,
    ACTIONS(178), 28,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_COLON,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Id,
      anon_sym_InstanceOf,
      anon_sym_Parent,
      anon_sym_Severity,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_XPath,
      anon_sym_STAR,
      anon_sym_from,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_DQUOTE,
  [1983] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(184), 1,
      anon_sym_Instance,
    STATE(34), 1,
      sym_fsh_comment,
    ACTIONS(182), 28,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_COLON,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Id,
      anon_sym_InstanceOf,
      anon_sym_Parent,
      anon_sym_Severity,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_XPath,
      anon_sym_STAR,
      anon_sym_from,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_DQUOTE,
  [2026] = 24,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(133), 1,
      aux_sym_sequence_token1,
    ACTIONS(186), 1,
      anon_sym_insert,
    ACTIONS(188), 1,
      anon_sym_obeys,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    ACTIONS(194), 1,
      anon_sym_codes,
    ACTIONS(196), 1,
      anon_sym_system,
    ACTIONS(198), 1,
      anon_sym_POUND,
    ACTIONS(200), 1,
      aux_sym_sequence_token2,
    ACTIONS(202), 1,
      anon_sym_CARET,
    STATE(14), 1,
      sym_path,
    STATE(18), 1,
      aux_sym_sequence_repeat1,
    STATE(24), 1,
      sym_sequence,
    STATE(35), 1,
      sym_fsh_comment,
    STATE(60), 1,
      aux_sym_code_insert_rule_repeat1,
    STATE(65), 1,
      sym_code,
    STATE(221), 1,
      sym_code_string,
    STATE(420), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(543), 1,
      sym_name,
    STATE(641), 1,
      sym_caret_path,
    ACTIONS(192), 2,
      anon_sym_include,
      anon_sym_exclude,
    STATE(378), 2,
      sym_vs_concept_component,
      sym_vs_filter_component,
    ACTIONS(53), 7,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [2107] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(36), 1,
      sym_fsh_comment,
    ACTIONS(146), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
    ACTIONS(154), 27,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_contains,
      anon_sym_and,
      anon_sym_obeys,
      anon_sym_only,
      anon_sym_CARET,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [2150] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym_Instance,
    STATE(37), 1,
      sym_fsh_comment,
    ACTIONS(204), 27,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_COLON,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Id,
      anon_sym_InstanceOf,
      anon_sym_Severity,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_XPath,
      anon_sym_STAR,
      anon_sym_from,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_DQUOTE,
  [2192] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(210), 1,
      anon_sym_Instance,
    STATE(38), 1,
      sym_fsh_comment,
    ACTIONS(208), 27,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_COLON,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Id,
      anon_sym_InstanceOf,
      anon_sym_Severity,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_XPath,
      anon_sym_STAR,
      anon_sym_from,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_DQUOTE,
  [2234] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(214), 1,
      anon_sym_Instance,
    STATE(39), 1,
      sym_fsh_comment,
    ACTIONS(212), 27,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_COLON,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Id,
      anon_sym_InstanceOf,
      anon_sym_Severity,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_XPath,
      anon_sym_STAR,
      anon_sym_from,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_DQUOTE,
  [2276] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(43), 1,
      anon_sym_Title,
    ACTIONS(218), 1,
      anon_sym_Instance,
    ACTIONS(220), 1,
      anon_sym_InstanceOf,
    ACTIONS(222), 1,
      anon_sym_Usage,
    ACTIONS(224), 1,
      anon_sym_STAR,
    STATE(40), 1,
      sym_fsh_comment,
    STATE(71), 1,
      aux_sym_instance_repeat1,
    STATE(164), 1,
      aux_sym_instance_repeat2,
    STATE(181), 1,
      sym_instance_metadata,
    STATE(391), 1,
      sym_instance_rule,
    STATE(392), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    STATE(180), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(216), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [2340] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(41), 1,
      sym_fsh_comment,
    STATE(43), 1,
      aux_sym_logical_repeat1,
    STATE(402), 1,
      sym_lr_rule,
    STATE(365), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(387), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(226), 12,
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
      anon_sym_RuleSet,
  [2390] = 16,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(234), 1,
      anon_sym_POUND,
    ACTIONS(236), 1,
      aux_sym_sequence_token1,
    ACTIONS(238), 1,
      anon_sym_SLASH,
    STATE(42), 1,
      sym_fsh_comment,
    STATE(158), 1,
      sym_code,
    STATE(361), 1,
      sym_vs_filter_value,
    STATE(567), 1,
      aux_sym_sequence_repeat1,
    STATE(657), 1,
      sym_sequence,
    ACTIONS(232), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(360), 3,
      sym_code_string,
      sym_string,
      sym_regex,
    ACTIONS(230), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
  [2454] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(242), 1,
      anon_sym_STAR,
    STATE(402), 1,
      sym_lr_rule,
    STATE(43), 2,
      sym_fsh_comment,
      aux_sym_logical_repeat1,
    STATE(365), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(387), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(240), 12,
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
      anon_sym_RuleSet,
  [2502] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(43), 1,
      aux_sym_logical_repeat1,
    STATE(44), 1,
      sym_fsh_comment,
    STATE(402), 1,
      sym_lr_rule,
    STATE(365), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(387), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
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
      anon_sym_RuleSet,
  [2552] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(43), 1,
      aux_sym_logical_repeat1,
    STATE(45), 1,
      sym_fsh_comment,
    STATE(402), 1,
      sym_lr_rule,
    STATE(365), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(387), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(51), 12,
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
      anon_sym_RuleSet,
  [2602] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(43), 1,
      aux_sym_logical_repeat1,
    STATE(46), 1,
      sym_fsh_comment,
    STATE(402), 1,
      sym_lr_rule,
    STATE(365), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(387), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(49), 12,
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
      anon_sym_RuleSet,
  [2652] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(249), 1,
      anon_sym_Instance,
    STATE(47), 1,
      sym_fsh_comment,
    ACTIONS(247), 27,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_COLON,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Id,
      anon_sym_InstanceOf,
      anon_sym_Severity,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_XPath,
      anon_sym_STAR,
      anon_sym_from,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_DQUOTE,
  [2694] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(43), 1,
      anon_sym_Title,
    ACTIONS(220), 1,
      anon_sym_InstanceOf,
    ACTIONS(222), 1,
      anon_sym_Usage,
    ACTIONS(224), 1,
      anon_sym_STAR,
    ACTIONS(253), 1,
      anon_sym_Instance,
    STATE(40), 1,
      aux_sym_instance_repeat1,
    STATE(48), 1,
      sym_fsh_comment,
    STATE(178), 1,
      aux_sym_instance_repeat2,
    STATE(181), 1,
      sym_instance_metadata,
    STATE(391), 1,
      sym_instance_rule,
    STATE(392), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    STATE(180), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(251), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [2758] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(43), 1,
      anon_sym_Title,
    ACTIONS(257), 1,
      anon_sym_Id,
    ACTIONS(259), 1,
      anon_sym_STAR,
    STATE(49), 1,
      sym_fsh_comment,
    STATE(111), 1,
      aux_sym_valueset_repeat1,
    STATE(169), 1,
      aux_sym_valueset_repeat2,
    STATE(235), 1,
      sym_vs_metadata,
    STATE(395), 1,
      sym_vs_rule,
    STATE(234), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(396), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
    ACTIONS(255), 12,
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
      anon_sym_RuleSet,
  [2816] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(43), 1,
      anon_sym_Title,
    ACTIONS(257), 1,
      anon_sym_Id,
    ACTIONS(263), 1,
      anon_sym_STAR,
    STATE(50), 1,
      sym_fsh_comment,
    STATE(103), 1,
      aux_sym_codesystem_repeat1,
    STATE(151), 1,
      aux_sym_codesystem_repeat2,
    STATE(233), 1,
      sym_cs_metadata,
    STATE(398), 1,
      sym_cs_rule,
    STATE(215), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(399), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
    ACTIONS(261), 12,
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
      anon_sym_RuleSet,
  [2874] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(43), 1,
      anon_sym_Title,
    ACTIONS(257), 1,
      anon_sym_Id,
    ACTIONS(263), 1,
      anon_sym_STAR,
    STATE(50), 1,
      aux_sym_codesystem_repeat1,
    STATE(51), 1,
      sym_fsh_comment,
    STATE(174), 1,
      aux_sym_codesystem_repeat2,
    STATE(233), 1,
      sym_cs_metadata,
    STATE(398), 1,
      sym_cs_rule,
    STATE(215), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(399), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
    ACTIONS(265), 12,
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
      anon_sym_RuleSet,
  [2932] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(43), 1,
      anon_sym_Title,
    ACTIONS(257), 1,
      anon_sym_Id,
    ACTIONS(259), 1,
      anon_sym_STAR,
    STATE(49), 1,
      aux_sym_valueset_repeat1,
    STATE(52), 1,
      sym_fsh_comment,
    STATE(175), 1,
      aux_sym_valueset_repeat2,
    STATE(235), 1,
      sym_vs_metadata,
    STATE(395), 1,
      sym_vs_rule,
    STATE(234), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(396), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
    ACTIONS(267), 12,
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
      anon_sym_RuleSet,
  [2990] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(83), 1,
      anon_sym_STAR,
    STATE(53), 1,
      sym_fsh_comment,
    STATE(57), 1,
      aux_sym_profile_repeat2,
    STATE(386), 1,
      sym_sd_rule,
    STATE(387), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(269), 12,
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
      anon_sym_RuleSet,
  [3035] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_Alias,
    ACTIONS(11), 1,
      anon_sym_Profile,
    ACTIONS(13), 1,
      anon_sym_Extension,
    ACTIONS(15), 1,
      anon_sym_Invariant,
    ACTIONS(17), 1,
      anon_sym_Instance,
    ACTIONS(19), 1,
      anon_sym_ValueSet,
    ACTIONS(21), 1,
      anon_sym_CodeSystem,
    ACTIONS(23), 1,
      anon_sym_Mapping,
    ACTIONS(25), 1,
      anon_sym_Logical,
    ACTIONS(27), 1,
      anon_sym_Resource,
    ACTIONS(29), 1,
      anon_sym_RuleSet,
    ACTIONS(271), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_fsh_comment,
    STATE(55), 1,
      aux_sym_doc_repeat1,
    STATE(407), 12,
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
      sym_rule_set,
      sym_param_rule_set,
  [3098] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(273), 1,
      ts_builtin_sym_end,
    ACTIONS(275), 1,
      anon_sym_Alias,
    ACTIONS(278), 1,
      anon_sym_Profile,
    ACTIONS(281), 1,
      anon_sym_Extension,
    ACTIONS(284), 1,
      anon_sym_Invariant,
    ACTIONS(287), 1,
      anon_sym_Instance,
    ACTIONS(290), 1,
      anon_sym_ValueSet,
    ACTIONS(293), 1,
      anon_sym_CodeSystem,
    ACTIONS(296), 1,
      anon_sym_Mapping,
    ACTIONS(299), 1,
      anon_sym_Logical,
    ACTIONS(302), 1,
      anon_sym_Resource,
    ACTIONS(305), 1,
      anon_sym_RuleSet,
    STATE(55), 2,
      sym_fsh_comment,
      aux_sym_doc_repeat1,
    STATE(407), 12,
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
      sym_rule_set,
      sym_param_rule_set,
  [3159] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(83), 1,
      anon_sym_STAR,
    STATE(56), 1,
      sym_fsh_comment,
    STATE(57), 1,
      aux_sym_profile_repeat2,
    STATE(386), 1,
      sym_sd_rule,
    STATE(387), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(308), 12,
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
      anon_sym_RuleSet,
  [3204] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(312), 1,
      anon_sym_STAR,
    STATE(386), 1,
      sym_sd_rule,
    STATE(57), 2,
      sym_fsh_comment,
      aux_sym_profile_repeat2,
    STATE(387), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(310), 12,
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
      anon_sym_RuleSet,
  [3247] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(317), 1,
      anon_sym_Description,
    ACTIONS(320), 1,
      anon_sym_Id,
    ACTIONS(323), 1,
      anon_sym_Source,
    ACTIONS(326), 1,
      anon_sym_Target,
    ACTIONS(329), 1,
      anon_sym_Title,
    STATE(172), 1,
      sym_mapping_metadata,
    STATE(58), 2,
      sym_fsh_comment,
      aux_sym_mapping_repeat1,
    STATE(171), 5,
      sym_description,
      sym_id,
      sym_source,
      sym_target,
      sym_title,
    ACTIONS(315), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [3298] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(83), 1,
      anon_sym_STAR,
    STATE(57), 1,
      aux_sym_profile_repeat2,
    STATE(59), 1,
      sym_fsh_comment,
    STATE(386), 1,
      sym_sd_rule,
    STATE(387), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(81), 12,
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
      anon_sym_RuleSet,
  [3343] = 17,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(236), 1,
      aux_sym_sequence_token1,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
    ACTIONS(336), 1,
      anon_sym_insert,
    ACTIONS(338), 1,
      anon_sym_POUND,
    ACTIONS(340), 1,
      anon_sym_DQUOTE,
    STATE(60), 1,
      sym_fsh_comment,
    STATE(68), 1,
      aux_sym_code_insert_rule_repeat1,
    STATE(148), 1,
      sym_code,
    STATE(201), 1,
      sym_string,
    STATE(370), 1,
      sym_multiline_string,
    STATE(567), 1,
      aux_sym_sequence_repeat1,
    STATE(611), 1,
      sym_sequence,
    ACTIONS(334), 12,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [3406] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(344), 1,
      anon_sym_Instance,
    STATE(61), 1,
      sym_fsh_comment,
    ACTIONS(342), 24,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Id,
      anon_sym_InstanceOf,
      anon_sym_Parent,
      anon_sym_Severity,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_XPath,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [3445] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(348), 1,
      anon_sym_Instance,
    STATE(62), 1,
      sym_fsh_comment,
    ACTIONS(346), 24,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Id,
      anon_sym_InstanceOf,
      anon_sym_Parent,
      anon_sym_Severity,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_XPath,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [3484] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(63), 1,
      sym_fsh_comment,
    ACTIONS(154), 24,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_and,
      anon_sym_DASH_GT,
      anon_sym_CARET,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [3520] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(352), 1,
      anon_sym_Instance,
    STATE(64), 1,
      sym_fsh_comment,
    ACTIONS(350), 23,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Id,
      anon_sym_InstanceOf,
      anon_sym_Parent,
      anon_sym_Severity,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_XPath,
      anon_sym_STAR,
  [3558] = 11,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(202), 1,
      anon_sym_CARET,
    ACTIONS(354), 1,
      ts_builtin_sym_end,
    ACTIONS(364), 1,
      anon_sym_DQUOTE,
    STATE(65), 1,
      sym_fsh_comment,
    STATE(228), 1,
      sym_string,
    STATE(603), 1,
      sym_caret_path,
    ACTIONS(362), 2,
      anon_sym_from,
      anon_sym_and,
    ACTIONS(360), 5,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(357), 12,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [3608] = 13,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(236), 1,
      aux_sym_sequence_token1,
    ACTIONS(367), 1,
      ts_builtin_sym_end,
    ACTIONS(373), 1,
      anon_sym_COLON,
    ACTIONS(375), 1,
      anon_sym_POUND,
    ACTIONS(377), 1,
      anon_sym_SQUOTE,
    STATE(66), 1,
      sym_fsh_comment,
    STATE(567), 1,
      aux_sym_sequence_repeat1,
    STATE(654), 1,
      sym_sequence,
    STATE(197), 2,
      sym_code,
      sym_unit,
    ACTIONS(370), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [3661] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(381), 1,
      anon_sym_Description,
    ACTIONS(384), 1,
      anon_sym_Id,
    ACTIONS(387), 1,
      anon_sym_Parent,
    ACTIONS(390), 1,
      anon_sym_Title,
    STATE(185), 1,
      sym_sd_metadata,
    STATE(67), 2,
      sym_fsh_comment,
      aux_sym_profile_repeat1,
    STATE(184), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    ACTIONS(379), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [3708] = 11,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(393), 1,
      ts_builtin_sym_end,
    ACTIONS(397), 1,
      anon_sym_POUND,
    ACTIONS(400), 1,
      aux_sym_sequence_token1,
    ACTIONS(403), 1,
      aux_sym_sequence_token2,
    STATE(148), 1,
      sym_code,
    STATE(567), 1,
      aux_sym_sequence_repeat1,
    STATE(611), 1,
      sym_sequence,
    STATE(68), 2,
      sym_fsh_comment,
      aux_sym_code_insert_rule_repeat1,
    ACTIONS(395), 15,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [3757] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(406), 1,
      aux_sym_sequence_token1,
    STATE(69), 1,
      sym_fsh_comment,
    STATE(70), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 20,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_and,
      anon_sym_POUND,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [3798] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(409), 1,
      aux_sym_sequence_token1,
    STATE(70), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 20,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_and,
      anon_sym_POUND,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [3837] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(414), 1,
      anon_sym_Instance,
    ACTIONS(416), 1,
      anon_sym_Description,
    ACTIONS(419), 1,
      anon_sym_InstanceOf,
    ACTIONS(422), 1,
      anon_sym_Title,
    ACTIONS(425), 1,
      anon_sym_Usage,
    STATE(181), 1,
      sym_instance_metadata,
    STATE(71), 2,
      sym_fsh_comment,
      aux_sym_instance_repeat1,
    STATE(180), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(412), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [3886] = 18,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(73), 1,
      anon_sym_Reference,
    ACTIONS(75), 1,
      anon_sym_Canonical,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(428), 1,
      anon_sym_contentReference,
    ACTIONS(430), 1,
      aux_sym_sequence_token1,
    ACTIONS(434), 1,
      anon_sym_QMARK_BANG,
    STATE(22), 1,
      sym_sequence,
    STATE(72), 1,
      sym_fsh_comment,
    STATE(94), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(271), 1,
      sym_reference,
    STATE(311), 1,
      sym_flag,
    STATE(508), 1,
      sym_target_type,
    STATE(534), 1,
      aux_sym_sequence_repeat1,
    STATE(270), 2,
      sym_name,
      sym_canonical,
    ACTIONS(53), 4,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      sym_number,
    ACTIONS(432), 5,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [3949] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(436), 1,
      aux_sym_sequence_token1,
    STATE(73), 1,
      sym_fsh_comment,
    STATE(85), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 19,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUND,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
      anon_sym_SLASH,
  [3989] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
    STATE(74), 1,
      sym_fsh_comment,
    ACTIONS(249), 21,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_and,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [4025] = 13,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(236), 1,
      aux_sym_sequence_token1,
    ACTIONS(367), 1,
      ts_builtin_sym_end,
    ACTIONS(373), 1,
      anon_sym_COLON,
    ACTIONS(377), 1,
      anon_sym_SQUOTE,
    ACTIONS(439), 1,
      anon_sym_POUND,
    STATE(75), 1,
      sym_fsh_comment,
    STATE(567), 1,
      aux_sym_sequence_repeat1,
    STATE(653), 1,
      sym_sequence,
    STATE(197), 2,
      sym_code,
      sym_unit,
    ACTIONS(370), 12,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [4077] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(76), 1,
      sym_fsh_comment,
    STATE(77), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(119), 1,
      sym_flag,
    ACTIONS(115), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(441), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
  [4117] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(77), 1,
      sym_fsh_comment,
    STATE(93), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(119), 1,
      sym_flag,
    ACTIONS(115), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(443), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
  [4157] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(447), 1,
      anon_sym_Expression,
    ACTIONS(449), 1,
      anon_sym_Severity,
    ACTIONS(451), 1,
      anon_sym_XPath,
    STATE(78), 1,
      sym_fsh_comment,
    STATE(84), 1,
      aux_sym_invariant_repeat1,
    STATE(241), 1,
      sym_invariant_metadata,
    STATE(240), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
    ACTIONS(445), 12,
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
      anon_sym_RuleSet,
  [4205] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(455), 1,
      anon_sym_STAR,
    STATE(79), 1,
      sym_fsh_comment,
    ACTIONS(457), 2,
      aux_sym_cardinality_token1,
      anon_sym_STAR2,
    ACTIONS(453), 19,
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
      anon_sym_RuleSet,
      anon_sym_and,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [4243] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(461), 1,
      anon_sym_STAR,
    STATE(80), 1,
      sym_fsh_comment,
    ACTIONS(463), 2,
      aux_sym_cardinality_token1,
      anon_sym_STAR2,
    ACTIONS(459), 19,
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
      anon_sym_RuleSet,
      anon_sym_and,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [4281] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(81), 1,
      sym_fsh_comment,
    STATE(83), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(119), 1,
      sym_flag,
    ACTIONS(115), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(465), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
  [4321] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(82), 1,
      sym_fsh_comment,
    ACTIONS(152), 21,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_and,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [4357] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(83), 1,
      sym_fsh_comment,
    STATE(93), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(119), 1,
      sym_flag,
    ACTIONS(115), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(467), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
  [4397] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(471), 1,
      anon_sym_Description,
    ACTIONS(474), 1,
      anon_sym_Expression,
    ACTIONS(477), 1,
      anon_sym_Severity,
    ACTIONS(480), 1,
      anon_sym_XPath,
    STATE(241), 1,
      sym_invariant_metadata,
    STATE(84), 2,
      sym_fsh_comment,
      aux_sym_invariant_repeat1,
    STATE(240), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
    ACTIONS(469), 12,
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
      anon_sym_RuleSet,
  [4443] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(483), 1,
      aux_sym_sequence_token1,
    STATE(85), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 19,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUND,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
      anon_sym_SLASH,
  [4481] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    STATE(86), 1,
      sym_fsh_comment,
    ACTIONS(180), 21,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_and,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [4517] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      anon_sym_STAR,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      aux_sym_rule_set_repeat1,
    STATE(87), 1,
      sym_fsh_comment,
    STATE(403), 1,
      sym_rule_set_rule,
    STATE(404), 8,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_mapping_rule,
      sym_add_element_rule,
      sym_vs_component,
      sym_concept,
    STATE(387), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
  [4561] = 12,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(85), 1,
      anon_sym_POUND,
    ACTIONS(236), 1,
      aux_sym_sequence_token1,
    ACTIONS(377), 1,
      anon_sym_SQUOTE,
    ACTIONS(488), 1,
      ts_builtin_sym_end,
    STATE(88), 1,
      sym_fsh_comment,
    STATE(567), 1,
      aux_sym_sequence_repeat1,
    STATE(656), 1,
      sym_sequence,
    STATE(197), 2,
      sym_code,
      sym_unit,
    ACTIONS(373), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [4611] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    STATE(89), 1,
      sym_fsh_comment,
    ACTIONS(184), 21,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_and,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [4647] = 5,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(90), 1,
      sym_fsh_comment,
    ACTIONS(33), 21,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_and,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [4683] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    STATE(91), 1,
      sym_fsh_comment,
    ACTIONS(206), 21,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_and,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [4719] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    STATE(92), 1,
      sym_fsh_comment,
    ACTIONS(210), 21,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_and,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [4755] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(119), 1,
      sym_flag,
    STATE(93), 2,
      sym_fsh_comment,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(492), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(490), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
  [4793] = 17,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(73), 1,
      anon_sym_Reference,
    ACTIONS(75), 1,
      anon_sym_Canonical,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(430), 1,
      aux_sym_sequence_token1,
    ACTIONS(434), 1,
      anon_sym_QMARK_BANG,
    STATE(22), 1,
      sym_sequence,
    STATE(94), 1,
      sym_fsh_comment,
    STATE(229), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(271), 1,
      sym_reference,
    STATE(311), 1,
      sym_flag,
    STATE(534), 1,
      aux_sym_sequence_repeat1,
    STATE(536), 1,
      sym_target_type,
    STATE(270), 2,
      sym_name,
      sym_canonical,
    ACTIONS(53), 4,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      sym_number,
    ACTIONS(432), 5,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [4853] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    STATE(95), 1,
      sym_fsh_comment,
    ACTIONS(214), 21,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_and,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [4889] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      anon_sym_STAR,
    STATE(20), 1,
      aux_sym_param_rule_set_repeat1,
    STATE(96), 1,
      sym_fsh_comment,
    STATE(405), 1,
      sym_rule_set_rule,
    STATE(404), 8,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_mapping_rule,
      sym_add_element_rule,
      sym_vs_component,
      sym_concept,
    STATE(387), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
  [4930] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(97), 1,
      sym_fsh_comment,
    ACTIONS(152), 20,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
      anon_sym_SLASH,
  [4965] = 13,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(236), 1,
      aux_sym_sequence_token1,
    ACTIONS(495), 1,
      ts_builtin_sym_end,
    ACTIONS(499), 1,
      anon_sym_POUND,
    ACTIONS(501), 1,
      anon_sym_DQUOTE,
    STATE(98), 1,
      sym_fsh_comment,
    STATE(135), 1,
      sym_string,
    STATE(385), 1,
      sym_code,
    STATE(567), 1,
      aux_sym_sequence_repeat1,
    STATE(652), 1,
      sym_sequence,
    ACTIONS(497), 12,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5016] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(503), 1,
      aux_sym_sequence_token1,
    STATE(99), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 18,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [5053] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(506), 1,
      aux_sym_sequence_token1,
    STATE(99), 1,
      aux_sym_sequence_repeat1,
    STATE(100), 1,
      sym_fsh_comment,
    ACTIONS(33), 18,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [5092] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(93), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(101), 1,
      sym_fsh_comment,
    STATE(119), 1,
      sym_flag,
    ACTIONS(115), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(509), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5131] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(93), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(102), 1,
      sym_fsh_comment,
    STATE(119), 1,
      sym_flag,
    ACTIONS(115), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(511), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5170] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(515), 1,
      anon_sym_Description,
    ACTIONS(518), 1,
      anon_sym_Id,
    ACTIONS(521), 1,
      anon_sym_Title,
    STATE(233), 1,
      sym_cs_metadata,
    STATE(103), 2,
      sym_fsh_comment,
      aux_sym_codesystem_repeat1,
    STATE(215), 3,
      sym_description,
      sym_id,
      sym_title,
    ACTIONS(513), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5213] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(102), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(104), 1,
      sym_fsh_comment,
    STATE(119), 1,
      sym_flag,
    ACTIONS(115), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(524), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5252] = 7,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(202), 1,
      anon_sym_CARET,
    ACTIONS(526), 1,
      ts_builtin_sym_end,
    STATE(105), 1,
      sym_fsh_comment,
    STATE(603), 1,
      sym_caret_path,
    ACTIONS(360), 18,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [5291] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(528), 1,
      ts_builtin_sym_end,
    STATE(106), 1,
      sym_fsh_comment,
    ACTIONS(530), 20,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
      anon_sym_SLASH,
  [5326] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(534), 1,
      anon_sym_Instance,
    STATE(107), 1,
      sym_fsh_comment,
    ACTIONS(532), 20,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_InstanceOf,
      anon_sym_Parent,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_STAR,
  [5361] = 5,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(108), 1,
      sym_fsh_comment,
    ACTIONS(33), 20,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
      anon_sym_SLASH,
  [5396] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(93), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(109), 1,
      sym_fsh_comment,
    STATE(119), 1,
      sym_flag,
    ACTIONS(115), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(536), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5435] = 13,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(236), 1,
      aux_sym_sequence_token1,
    ACTIONS(499), 1,
      anon_sym_POUND,
    ACTIONS(501), 1,
      anon_sym_DQUOTE,
    ACTIONS(538), 1,
      ts_builtin_sym_end,
    STATE(110), 1,
      sym_fsh_comment,
    STATE(140), 1,
      sym_string,
    STATE(406), 1,
      sym_code,
    STATE(567), 1,
      aux_sym_sequence_repeat1,
    STATE(652), 1,
      sym_sequence,
    ACTIONS(540), 12,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5486] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(544), 1,
      anon_sym_Description,
    ACTIONS(547), 1,
      anon_sym_Id,
    ACTIONS(550), 1,
      anon_sym_Title,
    STATE(235), 1,
      sym_vs_metadata,
    STATE(111), 2,
      sym_fsh_comment,
      aux_sym_valueset_repeat1,
    STATE(234), 3,
      sym_description,
      sym_id,
      sym_title,
    ACTIONS(542), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5529] = 12,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(236), 1,
      aux_sym_sequence_token1,
    ACTIONS(377), 1,
      anon_sym_SQUOTE,
    ACTIONS(488), 1,
      ts_builtin_sym_end,
    STATE(112), 1,
      sym_fsh_comment,
    STATE(567), 1,
      aux_sym_sequence_repeat1,
    STATE(655), 1,
      sym_sequence,
    STATE(197), 2,
      sym_code,
      sym_unit,
    ACTIONS(373), 12,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5578] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(553), 1,
      aux_sym_sequence_token1,
    STATE(113), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 17,
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
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_STAR,
  [5614] = 5,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(114), 1,
      sym_fsh_comment,
    ACTIONS(33), 19,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [5648] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(556), 1,
      aux_sym_sequence_token1,
    STATE(115), 1,
      sym_fsh_comment,
    STATE(127), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 17,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [5686] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    STATE(116), 1,
      sym_fsh_comment,
    ACTIONS(180), 19,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [5720] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    STATE(117), 1,
      sym_fsh_comment,
    ACTIONS(206), 19,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [5754] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    STATE(118), 1,
      sym_fsh_comment,
    ACTIONS(210), 19,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [5788] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(119), 1,
      sym_fsh_comment,
    ACTIONS(559), 20,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [5820] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(120), 1,
      sym_fsh_comment,
    ACTIONS(561), 20,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [5852] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(121), 1,
      sym_fsh_comment,
    ACTIONS(459), 20,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [5884] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(122), 1,
      sym_fsh_comment,
    ACTIONS(152), 19,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [5918] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    STATE(123), 1,
      sym_fsh_comment,
    ACTIONS(184), 19,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [5952] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    STATE(124), 1,
      sym_fsh_comment,
    ACTIONS(214), 19,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [5986] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
    STATE(125), 1,
      sym_fsh_comment,
    ACTIONS(249), 19,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [6020] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(563), 1,
      aux_sym_sequence_token1,
    STATE(113), 1,
      aux_sym_sequence_repeat1,
    STATE(126), 1,
      sym_fsh_comment,
    ACTIONS(33), 17,
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
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_STAR,
  [6058] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(565), 1,
      aux_sym_sequence_token1,
    STATE(127), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 17,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [6094] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(128), 1,
      sym_fsh_comment,
    ACTIONS(568), 20,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [6126] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(570), 1,
      aux_sym_sequence_token1,
    STATE(129), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 16,
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
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
      anon_sym_STAR,
  [6161] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    STATE(130), 1,
      sym_fsh_comment,
    ACTIONS(206), 18,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [6194] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(573), 1,
      aux_sym_sequence_token1,
    STATE(131), 1,
      sym_fsh_comment,
    STATE(132), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 16,
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
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_InstanceOf,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_STAR,
  [6231] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(575), 1,
      aux_sym_sequence_token1,
    STATE(132), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 16,
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
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_InstanceOf,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_STAR,
  [6266] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    STATE(133), 1,
      sym_fsh_comment,
    ACTIONS(184), 18,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [6299] = 13,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(73), 1,
      anon_sym_Reference,
    ACTIONS(75), 1,
      anon_sym_Canonical,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(430), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(134), 1,
      sym_fsh_comment,
    STATE(271), 1,
      sym_reference,
    STATE(282), 1,
      sym_target_type,
    STATE(534), 1,
      aux_sym_sequence_repeat1,
    STATE(270), 2,
      sym_name,
      sym_canonical,
    ACTIONS(53), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [6348] = 11,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(236), 1,
      aux_sym_sequence_token1,
    ACTIONS(499), 1,
      anon_sym_POUND,
    ACTIONS(538), 1,
      ts_builtin_sym_end,
    STATE(135), 1,
      sym_fsh_comment,
    STATE(406), 1,
      sym_code,
    STATE(567), 1,
      aux_sym_sequence_repeat1,
    STATE(652), 1,
      sym_sequence,
    ACTIONS(540), 12,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [6393] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    STATE(136), 1,
      sym_fsh_comment,
    ACTIONS(180), 18,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [6426] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
    STATE(137), 1,
      sym_fsh_comment,
    ACTIONS(249), 18,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [6459] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    STATE(138), 1,
      sym_fsh_comment,
    ACTIONS(210), 18,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [6492] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    STATE(139), 1,
      sym_fsh_comment,
    ACTIONS(214), 18,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [6525] = 11,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(236), 1,
      aux_sym_sequence_token1,
    ACTIONS(499), 1,
      anon_sym_POUND,
    ACTIONS(578), 1,
      ts_builtin_sym_end,
    STATE(140), 1,
      sym_fsh_comment,
    STATE(379), 1,
      sym_code,
    STATE(567), 1,
      aux_sym_sequence_repeat1,
    STATE(652), 1,
      sym_sequence,
    ACTIONS(580), 12,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [6570] = 15,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(164), 1,
      aux_sym_sequence_token1,
    ACTIONS(188), 1,
      anon_sym_obeys,
    ACTIONS(200), 1,
      aux_sym_sequence_token2,
    ACTIONS(202), 1,
      anon_sym_CARET,
    ACTIONS(582), 1,
      anon_sym_insert,
    ACTIONS(584), 1,
      anon_sym_system,
    STATE(27), 1,
      aux_sym_sequence_repeat1,
    STATE(28), 1,
      sym_path,
    STATE(36), 1,
      sym_sequence,
    STATE(141), 1,
      sym_fsh_comment,
    STATE(543), 1,
      sym_name,
    STATE(641), 1,
      sym_caret_path,
    ACTIONS(53), 8,
      anon_sym_codes,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [6623] = 13,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(73), 1,
      anon_sym_Reference,
    ACTIONS(75), 1,
      anon_sym_Canonical,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(586), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(142), 1,
      sym_fsh_comment,
    STATE(255), 1,
      aux_sym_sequence_repeat1,
    STATE(271), 1,
      sym_reference,
    STATE(282), 1,
      sym_target_type,
    STATE(270), 2,
      sym_name,
      sym_canonical,
    ACTIONS(53), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [6672] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(588), 1,
      aux_sym_sequence_token1,
    STATE(129), 1,
      aux_sym_sequence_repeat1,
    STATE(143), 1,
      sym_fsh_comment,
    ACTIONS(33), 16,
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
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
      anon_sym_STAR,
  [6709] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(144), 1,
      sym_fsh_comment,
    ACTIONS(152), 18,
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
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_STAR,
      aux_sym_sequence_token1,
  [6742] = 13,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(73), 1,
      anon_sym_Reference,
    ACTIONS(75), 1,
      anon_sym_Canonical,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(586), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(145), 1,
      sym_fsh_comment,
    STATE(255), 1,
      aux_sym_sequence_repeat1,
    STATE(271), 1,
      sym_reference,
    STATE(272), 1,
      sym_target_type,
    STATE(270), 2,
      sym_name,
      sym_canonical,
    ACTIONS(53), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [6791] = 15,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(164), 1,
      aux_sym_sequence_token1,
    ACTIONS(188), 1,
      anon_sym_obeys,
    ACTIONS(196), 1,
      anon_sym_system,
    ACTIONS(200), 1,
      aux_sym_sequence_token2,
    ACTIONS(202), 1,
      anon_sym_CARET,
    ACTIONS(582), 1,
      anon_sym_insert,
    STATE(15), 1,
      sym_path,
    STATE(27), 1,
      aux_sym_sequence_repeat1,
    STATE(32), 1,
      sym_sequence,
    STATE(146), 1,
      sym_fsh_comment,
    STATE(543), 1,
      sym_name,
    STATE(641), 1,
      sym_caret_path,
    ACTIONS(53), 8,
      anon_sym_codes,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [6844] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(147), 1,
      sym_fsh_comment,
    ACTIONS(590), 19,
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
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_STAR,
  [6875] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(526), 1,
      ts_builtin_sym_end,
    STATE(148), 1,
      sym_fsh_comment,
    ACTIONS(360), 18,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [6908] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(149), 1,
      sym_fsh_comment,
    ACTIONS(152), 18,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [6941] = 5,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(150), 1,
      sym_fsh_comment,
    ACTIONS(33), 18,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [6974] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(263), 1,
      anon_sym_STAR,
    STATE(151), 1,
      sym_fsh_comment,
    STATE(160), 1,
      aux_sym_codesystem_repeat2,
    STATE(398), 1,
      sym_cs_rule,
    STATE(399), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
    ACTIONS(592), 12,
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
      anon_sym_RuleSet,
  [7012] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(594), 1,
      aux_sym_sequence_token1,
    STATE(152), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 15,
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
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Title,
      anon_sym_STAR,
  [7046] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(599), 1,
      anon_sym_STAR,
    STATE(395), 1,
      sym_vs_rule,
    STATE(153), 2,
      sym_fsh_comment,
      aux_sym_valueset_repeat2,
    STATE(396), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
    ACTIONS(597), 12,
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
      anon_sym_RuleSet,
  [7082] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(602), 1,
      aux_sym_sequence_token1,
    STATE(154), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 15,
      anon_sym_Alias,
      anon_sym_COLON,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [7116] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(155), 1,
      sym_fsh_comment,
    ACTIONS(605), 18,
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
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_STAR,
  [7146] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(156), 1,
      sym_fsh_comment,
    ACTIONS(607), 18,
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
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_STAR,
  [7176] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(609), 1,
      aux_sym_sequence_token1,
    STATE(154), 1,
      aux_sym_sequence_repeat1,
    STATE(157), 1,
      sym_fsh_comment,
    ACTIONS(33), 15,
      anon_sym_Alias,
      anon_sym_COLON,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [7212] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(613), 1,
      anon_sym_DQUOTE,
    STATE(158), 1,
      sym_fsh_comment,
    STATE(228), 1,
      sym_string,
    ACTIONS(611), 16,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_from,
      anon_sym_LPAREN,
      anon_sym_and,
  [7246] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(615), 1,
      aux_sym_sequence_token1,
    STATE(159), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 15,
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
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [7280] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(620), 1,
      anon_sym_STAR,
    STATE(398), 1,
      sym_cs_rule,
    STATE(160), 2,
      sym_fsh_comment,
      aux_sym_codesystem_repeat2,
    STATE(399), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
    ACTIONS(618), 12,
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
      anon_sym_RuleSet,
  [7316] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(161), 1,
      sym_fsh_comment,
    ACTIONS(152), 17,
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
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
      anon_sym_STAR,
      aux_sym_sequence_token1,
  [7348] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(623), 1,
      aux_sym_sequence_token1,
    STATE(159), 1,
      aux_sym_sequence_repeat1,
    STATE(162), 1,
      sym_fsh_comment,
    ACTIONS(33), 15,
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
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [7384] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(625), 1,
      aux_sym_sequence_token1,
    STATE(163), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 15,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_from,
      anon_sym_and,
      anon_sym_DQUOTE,
  [7418] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(224), 1,
      anon_sym_STAR,
    STATE(164), 1,
      sym_fsh_comment,
    STATE(165), 1,
      aux_sym_instance_repeat2,
    STATE(391), 1,
      sym_instance_rule,
    STATE(392), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    ACTIONS(628), 12,
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
      anon_sym_RuleSet,
  [7456] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(632), 1,
      anon_sym_STAR,
    STATE(391), 1,
      sym_instance_rule,
    STATE(165), 2,
      sym_fsh_comment,
      aux_sym_instance_repeat2,
    STATE(392), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    ACTIONS(630), 12,
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
      anon_sym_RuleSet,
  [7492] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(174), 1,
      anon_sym_STAR,
    STATE(166), 1,
      sym_fsh_comment,
    STATE(167), 1,
      aux_sym_mapping_repeat2,
    STATE(400), 1,
      sym_mapping_entity_rule,
    STATE(401), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    ACTIONS(635), 12,
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
      anon_sym_RuleSet,
  [7530] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(639), 1,
      anon_sym_STAR,
    STATE(400), 1,
      sym_mapping_entity_rule,
    STATE(167), 2,
      sym_fsh_comment,
      aux_sym_mapping_repeat2,
    STATE(401), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    ACTIONS(637), 12,
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
      anon_sym_RuleSet,
  [7566] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(642), 1,
      aux_sym_sequence_token1,
    STATE(163), 1,
      aux_sym_sequence_repeat1,
    STATE(168), 1,
      sym_fsh_comment,
    ACTIONS(33), 15,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_from,
      anon_sym_and,
      anon_sym_DQUOTE,
  [7602] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(259), 1,
      anon_sym_STAR,
    STATE(153), 1,
      aux_sym_valueset_repeat2,
    STATE(169), 1,
      sym_fsh_comment,
    STATE(395), 1,
      sym_vs_rule,
    STATE(396), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
    ACTIONS(644), 12,
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
      anon_sym_RuleSet,
  [7640] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(174), 1,
      anon_sym_STAR,
    STATE(167), 1,
      aux_sym_mapping_repeat2,
    STATE(170), 1,
      sym_fsh_comment,
    STATE(400), 1,
      sym_mapping_entity_rule,
    STATE(401), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    ACTIONS(166), 12,
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
      anon_sym_RuleSet,
  [7678] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(171), 1,
      sym_fsh_comment,
    ACTIONS(646), 18,
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
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_STAR,
  [7708] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(172), 1,
      sym_fsh_comment,
    ACTIONS(648), 18,
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
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_STAR,
  [7738] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(650), 1,
      aux_sym_sequence_token1,
    STATE(152), 1,
      aux_sym_sequence_repeat1,
    STATE(173), 1,
      sym_fsh_comment,
    ACTIONS(33), 15,
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
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Title,
      anon_sym_STAR,
  [7774] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(263), 1,
      anon_sym_STAR,
    STATE(160), 1,
      aux_sym_codesystem_repeat2,
    STATE(174), 1,
      sym_fsh_comment,
    STATE(398), 1,
      sym_cs_rule,
    STATE(399), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
    ACTIONS(261), 12,
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
      anon_sym_RuleSet,
  [7812] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(259), 1,
      anon_sym_STAR,
    STATE(153), 1,
      aux_sym_valueset_repeat2,
    STATE(175), 1,
      sym_fsh_comment,
    STATE(395), 1,
      sym_vs_rule,
    STATE(396), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
    ACTIONS(255), 12,
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
      anon_sym_RuleSet,
  [7850] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(176), 1,
      sym_fsh_comment,
    ACTIONS(152), 17,
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
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_InstanceOf,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_STAR,
      aux_sym_sequence_token1,
  [7882] = 19,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(202), 1,
      anon_sym_CARET,
    ACTIONS(582), 1,
      anon_sym_insert,
    ACTIONS(652), 1,
      anon_sym_codes,
    ACTIONS(654), 1,
      anon_sym_system,
    ACTIONS(656), 1,
      anon_sym_POUND,
    ACTIONS(658), 1,
      aux_sym_sequence_token1,
    STATE(158), 1,
      sym_code,
    STATE(177), 1,
      sym_fsh_comment,
    STATE(221), 1,
      sym_code_string,
    STATE(420), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(478), 1,
      aux_sym_sequence_repeat1,
    STATE(551), 1,
      sym_path,
    STATE(571), 1,
      sym_sequence,
    STATE(641), 1,
      sym_caret_path,
    ACTIONS(192), 2,
      anon_sym_include,
      anon_sym_exclude,
    STATE(378), 2,
      sym_vs_concept_component,
      sym_vs_filter_component,
  [7942] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(224), 1,
      anon_sym_STAR,
    STATE(165), 1,
      aux_sym_instance_repeat2,
    STATE(178), 1,
      sym_fsh_comment,
    STATE(391), 1,
      sym_instance_rule,
    STATE(392), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    ACTIONS(216), 12,
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
      anon_sym_RuleSet,
  [7980] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(179), 1,
      sym_fsh_comment,
    ACTIONS(152), 16,
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
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Title,
      anon_sym_STAR,
      aux_sym_sequence_token1,
  [8011] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(662), 1,
      anon_sym_Instance,
    STATE(180), 1,
      sym_fsh_comment,
    ACTIONS(660), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_InstanceOf,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_STAR,
  [8042] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(666), 1,
      anon_sym_Instance,
    STATE(181), 1,
      sym_fsh_comment,
    ACTIONS(664), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_InstanceOf,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_STAR,
  [8073] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    STATE(182), 1,
      sym_fsh_comment,
    ACTIONS(180), 16,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
  [8104] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    STATE(183), 1,
      sym_fsh_comment,
    ACTIONS(184), 16,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
  [8135] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(184), 1,
      sym_fsh_comment,
    ACTIONS(668), 17,
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
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
      anon_sym_STAR,
  [8164] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(185), 1,
      sym_fsh_comment,
    ACTIONS(670), 17,
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
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
      anon_sym_STAR,
  [8193] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(186), 1,
      sym_fsh_comment,
    ACTIONS(672), 17,
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
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
      anon_sym_STAR,
  [8222] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(674), 1,
      aux_sym_sequence_token1,
    STATE(187), 1,
      sym_fsh_comment,
    STATE(188), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
  [8257] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(676), 1,
      aux_sym_sequence_token1,
    STATE(188), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
  [8290] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(679), 1,
      aux_sym_sequence_token1,
    STATE(189), 1,
      sym_fsh_comment,
    STATE(190), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_DASH_GT,
  [8325] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(681), 1,
      aux_sym_sequence_token1,
    STATE(190), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_DASH_GT,
  [8358] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(191), 1,
      sym_fsh_comment,
    ACTIONS(152), 16,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_from,
      anon_sym_and,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
  [8389] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(684), 1,
      aux_sym_sequence_token1,
    STATE(192), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_DQUOTE,
  [8422] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(193), 1,
      sym_fsh_comment,
    STATE(384), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(687), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8457] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(87), 1,
      aux_sym_sequence_token1,
    STATE(194), 1,
      sym_fsh_comment,
    STATE(195), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_POUND,
  [8492] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(691), 1,
      aux_sym_sequence_token1,
    STATE(195), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_POUND,
  [8525] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(196), 1,
      sym_fsh_comment,
    ACTIONS(152), 16,
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
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
      aux_sym_sequence_token1,
  [8556] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(613), 1,
      anon_sym_DQUOTE,
    STATE(197), 1,
      sym_fsh_comment,
    STATE(287), 1,
      sym_string,
    ACTIONS(694), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_COLON,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [8589] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(198), 1,
      sym_fsh_comment,
    ACTIONS(696), 2,
      aux_sym_cardinality_token1,
      anon_sym_STAR2,
    ACTIONS(455), 15,
      anon_sym_contentReference,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
  [8620] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(698), 1,
      aux_sym_sequence_token1,
    STATE(199), 1,
      sym_fsh_comment,
    STATE(200), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [8655] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(700), 1,
      aux_sym_sequence_token1,
    STATE(200), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [8688] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(201), 1,
      sym_fsh_comment,
    STATE(366), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(703), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8723] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(705), 1,
      aux_sym_sequence_token1,
    STATE(202), 1,
      sym_fsh_comment,
    STATE(203), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_where,
  [8758] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(707), 1,
      aux_sym_sequence_token1,
    STATE(203), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_where,
  [8791] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(710), 1,
      aux_sym_sequence_token1,
    STATE(204), 1,
      sym_fsh_comment,
    STATE(205), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 14,
      anon_sym_Alias,
      anon_sym_COLON,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_DQUOTE,
  [8826] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(712), 1,
      aux_sym_sequence_token1,
    STATE(205), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 14,
      anon_sym_Alias,
      anon_sym_COLON,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_DQUOTE,
  [8859] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(206), 1,
      sym_fsh_comment,
    ACTIONS(152), 16,
      anon_sym_Alias,
      anon_sym_COLON,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
  [8890] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(207), 1,
      sym_fsh_comment,
    ACTIONS(715), 2,
      aux_sym_cardinality_token1,
      anon_sym_STAR2,
    ACTIONS(461), 15,
      anon_sym_contentReference,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
  [8921] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(208), 1,
      sym_fsh_comment,
    STATE(394), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(717), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8956] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(209), 1,
      sym_fsh_comment,
    STATE(382), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(719), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8991] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(210), 1,
      sym_fsh_comment,
    STATE(383), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(721), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [9026] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(725), 1,
      anon_sym_Instance,
    STATE(211), 1,
      sym_fsh_comment,
    ACTIONS(723), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_InstanceOf,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_STAR,
  [9057] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(729), 1,
      anon_sym_Instance,
    STATE(212), 1,
      sym_fsh_comment,
    ACTIONS(727), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_InstanceOf,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_STAR,
  [9088] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(731), 1,
      aux_sym_sequence_token1,
    STATE(192), 1,
      aux_sym_sequence_repeat1,
    STATE(213), 1,
      sym_fsh_comment,
    ACTIONS(33), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_DQUOTE,
  [9123] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(733), 1,
      aux_sym_sequence_token1,
    STATE(214), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [9155] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(215), 1,
      sym_fsh_comment,
    ACTIONS(736), 16,
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
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Title,
      anon_sym_STAR,
  [9183] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(216), 1,
      sym_fsh_comment,
    ACTIONS(738), 16,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_or,
      anon_sym_DQUOTE,
  [9211] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(217), 1,
      sym_fsh_comment,
    ACTIONS(740), 16,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_or,
      anon_sym_DQUOTE,
  [9239] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(218), 1,
      sym_fsh_comment,
    ACTIONS(742), 16,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_or,
      anon_sym_DQUOTE,
  [9267] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(219), 1,
      sym_fsh_comment,
    ACTIONS(744), 16,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_or,
      anon_sym_DQUOTE,
  [9295] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(220), 1,
      sym_fsh_comment,
    ACTIONS(746), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_COLON,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [9323] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(750), 1,
      anon_sym_from,
    ACTIONS(752), 1,
      anon_sym_and,
    STATE(221), 1,
      sym_fsh_comment,
    STATE(368), 1,
      sym_vs_component_from,
    ACTIONS(748), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [9357] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(222), 1,
      sym_fsh_comment,
    ACTIONS(754), 16,
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
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [9385] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(223), 1,
      sym_fsh_comment,
    ACTIONS(756), 16,
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
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [9413] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(224), 1,
      sym_fsh_comment,
    ACTIONS(758), 16,
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
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [9441] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(225), 1,
      sym_fsh_comment,
    STATE(237), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(760), 15,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_where,
  [9471] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(226), 1,
      sym_fsh_comment,
    ACTIONS(762), 16,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_or,
      anon_sym_DQUOTE,
  [9499] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(227), 1,
      sym_fsh_comment,
    ACTIONS(764), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_COLON,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [9527] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(228), 1,
      sym_fsh_comment,
    ACTIONS(766), 16,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_from,
      anon_sym_LPAREN,
      anon_sym_and,
  [9555] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(311), 1,
      sym_flag,
    STATE(229), 2,
      sym_fsh_comment,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(770), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(768), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      sym_number,
      anon_sym_Reference,
      anon_sym_Canonical,
  [9587] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(775), 1,
      anon_sym_and,
    STATE(230), 1,
      sym_fsh_comment,
    STATE(231), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(773), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_where,
  [9619] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(775), 1,
      anon_sym_and,
    STATE(231), 1,
      sym_fsh_comment,
    STATE(237), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(760), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_where,
  [9651] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(232), 1,
      sym_fsh_comment,
    ACTIONS(777), 16,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_or,
      anon_sym_DQUOTE,
  [9679] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(233), 1,
      sym_fsh_comment,
    ACTIONS(779), 16,
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
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Title,
      anon_sym_STAR,
  [9707] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(234), 1,
      sym_fsh_comment,
    ACTIONS(781), 16,
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
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Title,
      anon_sym_STAR,
  [9735] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(235), 1,
      sym_fsh_comment,
    ACTIONS(783), 16,
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
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Title,
      anon_sym_STAR,
  [9763] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(225), 1,
      aux_sym_obeys_rule_repeat1,
    STATE(236), 1,
      sym_fsh_comment,
    ACTIONS(773), 15,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_where,
  [9793] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(787), 1,
      anon_sym_and,
    STATE(237), 2,
      sym_fsh_comment,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(785), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_where,
  [9823] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    STATE(238), 1,
      sym_fsh_comment,
    ACTIONS(184), 15,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
  [9853] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    STATE(239), 1,
      sym_fsh_comment,
    ACTIONS(180), 15,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
  [9883] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(240), 1,
      sym_fsh_comment,
    ACTIONS(790), 16,
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
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [9911] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(241), 1,
      sym_fsh_comment,
    ACTIONS(792), 16,
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
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [9939] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(242), 1,
      sym_fsh_comment,
    ACTIONS(152), 15,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      aux_sym_sequence_token1,
  [9969] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(243), 1,
      sym_fsh_comment,
    ACTIONS(152), 15,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
  [9999] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(794), 1,
      aux_sym_sequence_token1,
    STATE(244), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_where,
  [10031] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(797), 1,
      aux_sym_sequence_token1,
    STATE(244), 1,
      aux_sym_sequence_repeat1,
    STATE(245), 1,
      sym_fsh_comment,
    ACTIONS(33), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_where,
  [10065] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(246), 1,
      sym_fsh_comment,
    ACTIONS(152), 15,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_DASH_GT,
      aux_sym_sequence_token1,
  [10095] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(799), 1,
      aux_sym_sequence_token1,
    STATE(214), 1,
      aux_sym_sequence_repeat1,
    STATE(247), 1,
      sym_fsh_comment,
    ACTIONS(33), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [10129] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(801), 1,
      aux_sym_sequence_token1,
    STATE(248), 1,
      sym_fsh_comment,
    STATE(249), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
  [10163] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(803), 1,
      aux_sym_sequence_token1,
    STATE(249), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
  [10195] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(250), 1,
      sym_fsh_comment,
    ACTIONS(148), 2,
      anon_sym_or,
      anon_sym_DQUOTE,
    ACTIONS(806), 14,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
  [10225] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      aux_sym_sequence_token1,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(251), 1,
      sym_fsh_comment,
    STATE(253), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_POUND,
  [10259] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(252), 1,
      sym_fsh_comment,
    ACTIONS(152), 15,
      anon_sym_Alias,
      anon_sym_COLON,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
  [10289] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(808), 1,
      aux_sym_sequence_token1,
    STATE(253), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_POUND,
  [10321] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(254), 1,
      sym_fsh_comment,
    ACTIONS(152), 15,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_POUND,
      aux_sym_sequence_token1,
  [10351] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(586), 1,
      aux_sym_sequence_token1,
    STATE(255), 1,
      sym_fsh_comment,
    STATE(256), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_or,
  [10385] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(811), 1,
      aux_sym_sequence_token1,
    STATE(256), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_or,
  [10417] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(613), 1,
      anon_sym_DQUOTE,
    STATE(257), 1,
      sym_fsh_comment,
    STATE(316), 1,
      sym_string,
    ACTIONS(814), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [10449] = 11,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(818), 1,
      aux_sym_sequence_token1,
    ACTIONS(820), 1,
      aux_sym_sequence_token2,
    STATE(258), 1,
      sym_fsh_comment,
    STATE(291), 1,
      sym_vs_filter_definition,
    STATE(393), 1,
      sym_vs_filter_list,
    STATE(451), 1,
      sym_name,
    STATE(506), 1,
      aux_sym_sequence_repeat1,
    STATE(549), 1,
      sym_sequence,
    ACTIONS(816), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [10491] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(259), 1,
      sym_fsh_comment,
    ACTIONS(152), 15,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_where,
      aux_sym_sequence_token1,
  [10521] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(260), 1,
      sym_fsh_comment,
    ACTIONS(152), 15,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
  [10551] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(822), 1,
      aux_sym_sequence_token1,
    STATE(261), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_DQUOTE,
  [10583] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(825), 1,
      aux_sym_sequence_token1,
    STATE(261), 1,
      aux_sym_sequence_repeat1,
    STATE(262), 1,
      sym_fsh_comment,
    ACTIONS(33), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_DQUOTE,
  [10617] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    STATE(263), 1,
      sym_fsh_comment,
    ACTIONS(178), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [10646] = 10,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(827), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(264), 1,
      sym_fsh_comment,
    STATE(267), 1,
      sym_item,
    STATE(472), 1,
      aux_sym_sequence_repeat1,
    STATE(537), 1,
      sym_name,
    ACTIONS(53), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [10685] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(831), 1,
      anon_sym_LPAREN,
    STATE(265), 1,
      sym_fsh_comment,
    STATE(389), 1,
      sym_strength,
    ACTIONS(829), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [10716] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(266), 1,
      sym_fsh_comment,
    ACTIONS(152), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
  [10745] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(835), 1,
      anon_sym_and,
    STATE(267), 1,
      sym_fsh_comment,
    STATE(307), 1,
      aux_sym_contains_rule_repeat1,
    ACTIONS(833), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [10776] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_EQ,
    ACTIONS(99), 1,
      anon_sym_insert,
    STATE(268), 1,
      sym_fsh_comment,
    ACTIONS(95), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [10807] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(839), 1,
      anon_sym_and,
    STATE(269), 1,
      sym_fsh_comment,
    STATE(306), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(837), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [10838] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(270), 1,
      sym_fsh_comment,
    ACTIONS(841), 15,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_or,
      anon_sym_DQUOTE,
  [10865] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(271), 1,
      sym_fsh_comment,
    ACTIONS(843), 15,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_or,
      anon_sym_DQUOTE,
  [10892] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(847), 1,
      anon_sym_or,
    STATE(272), 1,
      sym_fsh_comment,
    STATE(303), 1,
      aux_sym_only_rule_repeat1,
    ACTIONS(845), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [10923] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(839), 1,
      anon_sym_and,
    STATE(273), 1,
      sym_fsh_comment,
    STATE(298), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(849), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [10954] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(853), 1,
      anon_sym_and,
    STATE(274), 2,
      sym_fsh_comment,
      aux_sym_vs_filter_list_repeat1,
    ACTIONS(851), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [10983] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(275), 1,
      sym_fsh_comment,
    STATE(296), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(773), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
  [11012] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(858), 1,
      anon_sym_and,
    STATE(274), 1,
      aux_sym_vs_filter_list_repeat1,
    STATE(276), 1,
      sym_fsh_comment,
    ACTIONS(856), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [11043] = 10,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(818), 1,
      aux_sym_sequence_token1,
    ACTIONS(820), 1,
      aux_sym_sequence_token2,
    STATE(277), 1,
      sym_fsh_comment,
    STATE(358), 1,
      sym_vs_filter_definition,
    STATE(451), 1,
      sym_name,
    STATE(506), 1,
      aux_sym_sequence_repeat1,
    STATE(549), 1,
      sym_sequence,
    ACTIONS(816), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [11082] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(860), 1,
      anon_sym_POUND,
    STATE(278), 1,
      sym_fsh_comment,
    ACTIONS(146), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [11111] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(864), 1,
      anon_sym_and,
    STATE(279), 1,
      sym_fsh_comment,
    ACTIONS(862), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_where,
  [11140] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(866), 1,
      anon_sym_and,
    STATE(280), 1,
      sym_fsh_comment,
    ACTIONS(862), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_where,
  [11169] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(870), 1,
      anon_sym_or,
    STATE(281), 2,
      sym_fsh_comment,
      aux_sym_only_rule_repeat1,
    ACTIONS(868), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [11198] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(282), 1,
      sym_fsh_comment,
    ACTIONS(868), 15,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_or,
      anon_sym_DQUOTE,
  [11225] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(873), 1,
      aux_sym_sequence_token1,
    STATE(283), 1,
      sym_fsh_comment,
    STATE(290), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 12,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [11258] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(488), 1,
      anon_sym_COLON,
    STATE(284), 1,
      sym_fsh_comment,
    ACTIONS(814), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [11287] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(285), 1,
      sym_fsh_comment,
    ACTIONS(152), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_or,
      aux_sym_sequence_token1,
  [11316] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(877), 1,
      anon_sym_and,
    STATE(286), 2,
      sym_fsh_comment,
      aux_sym_contains_rule_repeat1,
    ACTIONS(875), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [11345] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(287), 1,
      sym_fsh_comment,
    ACTIONS(880), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_COLON,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [11372] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(288), 1,
      sym_fsh_comment,
    ACTIONS(461), 15,
      anon_sym_contentReference,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
  [11399] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(289), 1,
      sym_fsh_comment,
    ACTIONS(882), 15,
      anon_sym_contentReference,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
  [11426] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(884), 1,
      aux_sym_sequence_token1,
    STATE(290), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 12,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [11457] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(858), 1,
      anon_sym_and,
    STATE(276), 1,
      aux_sym_vs_filter_list_repeat1,
    STATE(291), 1,
      sym_fsh_comment,
    ACTIONS(887), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [11488] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(292), 1,
      sym_fsh_comment,
    ACTIONS(152), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_POUND,
      aux_sym_sequence_token1,
  [11517] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(839), 1,
      anon_sym_and,
    STATE(293), 1,
      sym_fsh_comment,
    STATE(301), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(760), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [11548] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(891), 1,
      anon_sym_T,
    STATE(294), 1,
      sym_fsh_comment,
    ACTIONS(889), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [11577] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(839), 1,
      anon_sym_and,
    STATE(293), 1,
      aux_sym_obeys_rule_repeat1,
    STATE(295), 1,
      sym_fsh_comment,
    ACTIONS(773), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [11608] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(296), 1,
      sym_fsh_comment,
    STATE(301), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(760), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
  [11637] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(297), 1,
      sym_fsh_comment,
    ACTIONS(893), 15,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_where,
  [11664] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(839), 1,
      anon_sym_and,
    STATE(298), 1,
      sym_fsh_comment,
    STATE(301), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(837), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [11695] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(99), 1,
      anon_sym_insert,
    ACTIONS(111), 1,
      anon_sym_DASH_GT,
    STATE(299), 1,
      sym_fsh_comment,
    ACTIONS(95), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [11726] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(300), 1,
      sym_fsh_comment,
    ACTIONS(785), 15,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_where,
  [11753] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(895), 1,
      anon_sym_and,
    STATE(301), 2,
      sym_fsh_comment,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(785), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [11782] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(302), 1,
      sym_fsh_comment,
    ACTIONS(152), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      aux_sym_sequence_token1,
  [11811] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(847), 1,
      anon_sym_or,
    STATE(281), 1,
      aux_sym_only_rule_repeat1,
    STATE(303), 1,
      sym_fsh_comment,
    ACTIONS(898), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [11842] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(304), 1,
      sym_fsh_comment,
    ACTIONS(152), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
      aux_sym_sequence_token1,
  [11871] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(305), 1,
      sym_fsh_comment,
    ACTIONS(152), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_where,
      aux_sym_sequence_token1,
  [11900] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(839), 1,
      anon_sym_and,
    STATE(301), 1,
      aux_sym_obeys_rule_repeat1,
    STATE(306), 1,
      sym_fsh_comment,
    ACTIONS(900), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [11931] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(835), 1,
      anon_sym_and,
    STATE(286), 1,
      aux_sym_contains_rule_repeat1,
    STATE(307), 1,
      sym_fsh_comment,
    ACTIONS(902), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [11962] = 10,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(827), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(308), 1,
      sym_fsh_comment,
    STATE(346), 1,
      sym_item,
    STATE(472), 1,
      aux_sym_sequence_repeat1,
    STATE(537), 1,
      sym_name,
    ACTIONS(53), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [12001] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    STATE(309), 1,
      sym_fsh_comment,
    ACTIONS(182), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [12030] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(904), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(310), 1,
      sym_fsh_comment,
    STATE(502), 1,
      aux_sym_sequence_repeat1,
    STATE(542), 1,
      sym_name,
    ACTIONS(53), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [12066] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(311), 1,
      sym_fsh_comment,
    ACTIONS(906), 14,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
  [12092] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(705), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(202), 1,
      aux_sym_sequence_repeat1,
    STATE(300), 1,
      sym_name,
    STATE(312), 1,
      sym_fsh_comment,
    ACTIONS(53), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [12128] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    STATE(313), 1,
      sym_fsh_comment,
    ACTIONS(908), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [12156] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    STATE(314), 1,
      sym_fsh_comment,
    ACTIONS(910), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [12184] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(915), 1,
      anon_sym_LPAREN,
    STATE(315), 1,
      sym_fsh_comment,
    ACTIONS(913), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [12212] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(316), 1,
      sym_fsh_comment,
    ACTIONS(917), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [12238] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(919), 1,
      aux_sym_sequence_token1,
    STATE(317), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 11,
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
      anon_sym_RuleSet,
  [12268] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(801), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(248), 1,
      aux_sym_sequence_repeat1,
    STATE(297), 1,
      sym_name,
    STATE(318), 1,
      sym_fsh_comment,
    ACTIONS(53), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [12304] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(650), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(147), 1,
      sym_name,
    STATE(173), 1,
      aux_sym_sequence_repeat1,
    STATE(319), 1,
      sym_fsh_comment,
    ACTIONS(53), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [12340] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(801), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(248), 1,
      aux_sym_sequence_repeat1,
    STATE(275), 1,
      sym_name,
    STATE(320), 1,
      sym_fsh_comment,
    ACTIONS(53), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [12376] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(801), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(248), 1,
      aux_sym_sequence_repeat1,
    STATE(300), 1,
      sym_name,
    STATE(321), 1,
      sym_fsh_comment,
    ACTIONS(53), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [12412] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(322), 1,
      sym_fsh_comment,
    ACTIONS(922), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [12438] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(588), 1,
      aux_sym_sequence_token1,
    STATE(3), 1,
      sym_name,
    STATE(22), 1,
      sym_sequence,
    STATE(143), 1,
      aux_sym_sequence_repeat1,
    STATE(323), 1,
      sym_fsh_comment,
    ACTIONS(53), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [12474] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    STATE(324), 1,
      sym_fsh_comment,
    ACTIONS(924), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [12502] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(588), 1,
      aux_sym_sequence_token1,
    STATE(4), 1,
      sym_name,
    STATE(22), 1,
      sym_sequence,
    STATE(143), 1,
      aux_sym_sequence_repeat1,
    STATE(325), 1,
      sym_fsh_comment,
    ACTIONS(53), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [12538] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(563), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(30), 1,
      sym_name,
    STATE(126), 1,
      aux_sym_sequence_repeat1,
    STATE(326), 1,
      sym_fsh_comment,
    ACTIONS(53), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [12574] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(563), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(126), 1,
      aux_sym_sequence_repeat1,
    STATE(147), 1,
      sym_name,
    STATE(327), 1,
      sym_fsh_comment,
    ACTIONS(53), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [12610] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(797), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(245), 1,
      aux_sym_sequence_repeat1,
    STATE(297), 1,
      sym_name,
    STATE(328), 1,
      sym_fsh_comment,
    ACTIONS(53), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [12646] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(588), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(143), 1,
      aux_sym_sequence_repeat1,
    STATE(147), 1,
      sym_name,
    STATE(329), 1,
      sym_fsh_comment,
    ACTIONS(53), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [12682] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(705), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(202), 1,
      aux_sym_sequence_repeat1,
    STATE(230), 1,
      sym_name,
    STATE(330), 1,
      sym_fsh_comment,
    ACTIONS(53), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [12718] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(331), 1,
      sym_fsh_comment,
    ACTIONS(814), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [12744] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(588), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(143), 1,
      aux_sym_sequence_repeat1,
    STATE(186), 1,
      sym_name,
    STATE(332), 1,
      sym_fsh_comment,
    ACTIONS(53), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [12780] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(873), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(283), 1,
      aux_sym_sequence_repeat1,
    STATE(297), 1,
      sym_name,
    STATE(333), 1,
      sym_fsh_comment,
    ACTIONS(53), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [12816] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(926), 1,
      anon_sym_POUND,
    STATE(334), 1,
      sym_fsh_comment,
    ACTIONS(146), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [12844] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(801), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(248), 1,
      aux_sym_sequence_repeat1,
    STATE(273), 1,
      sym_name,
    STATE(335), 1,
      sym_fsh_comment,
    ACTIONS(53), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [12880] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(930), 1,
      anon_sym_where,
    STATE(336), 1,
      sym_fsh_comment,
    ACTIONS(928), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [12908] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(932), 1,
      aux_sym_sequence_token1,
    STATE(317), 1,
      aux_sym_sequence_repeat1,
    STATE(337), 1,
      sym_fsh_comment,
    ACTIONS(33), 11,
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
      anon_sym_RuleSet,
  [12940] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(338), 1,
      sym_fsh_comment,
    ACTIONS(806), 14,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
  [12966] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(650), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(51), 1,
      sym_name,
    STATE(173), 1,
      aux_sym_sequence_repeat1,
    STATE(339), 1,
      sym_fsh_comment,
    ACTIONS(53), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [13002] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(340), 1,
      sym_fsh_comment,
    ACTIONS(934), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [13028] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(573), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(131), 1,
      aux_sym_sequence_repeat1,
    STATE(211), 1,
      sym_name,
    STATE(341), 1,
      sym_fsh_comment,
    ACTIONS(53), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [13064] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(801), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(248), 1,
      aux_sym_sequence_repeat1,
    STATE(295), 1,
      sym_name,
    STATE(342), 1,
      sym_fsh_comment,
    ACTIONS(53), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [13100] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(343), 1,
      sym_fsh_comment,
    ACTIONS(936), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
  [13126] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(344), 1,
      sym_fsh_comment,
    ACTIONS(488), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [13152] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(345), 1,
      sym_fsh_comment,
    ACTIONS(938), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [13178] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(346), 1,
      sym_fsh_comment,
    ACTIONS(875), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
  [13204] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    STATE(347), 1,
      sym_fsh_comment,
    ACTIONS(940), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [13232] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(650), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(52), 1,
      sym_name,
    STATE(173), 1,
      aux_sym_sequence_repeat1,
    STATE(348), 1,
      sym_fsh_comment,
    ACTIONS(53), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [13268] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(573), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(48), 1,
      sym_name,
    STATE(131), 1,
      aux_sym_sequence_repeat1,
    STATE(349), 1,
      sym_fsh_comment,
    ACTIONS(53), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [13304] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(350), 1,
      sym_fsh_comment,
    ACTIONS(152), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      aux_sym_sequence_token1,
  [13332] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(351), 1,
      sym_fsh_comment,
    ACTIONS(942), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_where,
  [13358] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(705), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(202), 1,
      aux_sym_sequence_repeat1,
    STATE(236), 1,
      sym_name,
    STATE(352), 1,
      sym_fsh_comment,
    ACTIONS(53), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [13394] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(705), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(202), 1,
      aux_sym_sequence_repeat1,
    STATE(297), 1,
      sym_name,
    STATE(353), 1,
      sym_fsh_comment,
    ACTIONS(53), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [13430] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(944), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(354), 1,
      sym_fsh_comment,
    STATE(411), 1,
      sym_name,
    STATE(442), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(53), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [13466] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(946), 1,
      anon_sym_and,
    STATE(355), 1,
      sym_fsh_comment,
    ACTIONS(862), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [13494] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(801), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(248), 1,
      aux_sym_sequence_repeat1,
    STATE(269), 1,
      sym_name,
    STATE(356), 1,
      sym_fsh_comment,
    ACTIONS(53), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [13530] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(948), 1,
      anon_sym_and,
    STATE(357), 1,
      sym_fsh_comment,
    ACTIONS(862), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [13558] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(358), 1,
      sym_fsh_comment,
    ACTIONS(851), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
  [13584] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    STATE(359), 1,
      sym_fsh_comment,
    ACTIONS(950), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [13612] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(360), 1,
      sym_fsh_comment,
    ACTIONS(952), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
  [13638] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(361), 1,
      sym_fsh_comment,
    ACTIONS(954), 14,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
  [13664] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(588), 1,
      aux_sym_sequence_token1,
    STATE(13), 1,
      sym_name,
    STATE(22), 1,
      sym_sequence,
    STATE(143), 1,
      aux_sym_sequence_repeat1,
    STATE(362), 1,
      sym_fsh_comment,
    ACTIONS(53), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [13700] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(956), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(363), 1,
      sym_fsh_comment,
    STATE(412), 1,
      sym_name,
    STATE(433), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(53), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [13736] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(799), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(247), 1,
      aux_sym_sequence_repeat1,
    STATE(265), 1,
      sym_name,
    STATE(364), 1,
      sym_fsh_comment,
    ACTIONS(53), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [13772] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(365), 1,
      sym_fsh_comment,
    ACTIONS(958), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [13797] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(366), 1,
      sym_fsh_comment,
    ACTIONS(960), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [13822] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(367), 1,
      sym_fsh_comment,
    ACTIONS(962), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [13847] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(368), 1,
      sym_fsh_comment,
    ACTIONS(964), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [13872] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(369), 1,
      sym_fsh_comment,
    ACTIONS(966), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [13897] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(370), 1,
      sym_fsh_comment,
    ACTIONS(703), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [13922] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(371), 1,
      sym_fsh_comment,
    ACTIONS(968), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [13947] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(372), 1,
      sym_fsh_comment,
    ACTIONS(971), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [13972] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(373), 1,
      sym_fsh_comment,
    ACTIONS(973), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [13997] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(374), 1,
      sym_fsh_comment,
    ACTIONS(975), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14022] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(375), 1,
      sym_fsh_comment,
    ACTIONS(977), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14047] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(376), 1,
      sym_fsh_comment,
    ACTIONS(979), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14072] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(377), 1,
      sym_fsh_comment,
    ACTIONS(981), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14097] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(378), 1,
      sym_fsh_comment,
    ACTIONS(983), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14122] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(379), 1,
      sym_fsh_comment,
    ACTIONS(985), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14147] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(380), 1,
      sym_fsh_comment,
    ACTIONS(987), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14172] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(381), 1,
      sym_fsh_comment,
    ACTIONS(989), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14197] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(382), 1,
      sym_fsh_comment,
    ACTIONS(991), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14222] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(383), 1,
      sym_fsh_comment,
    ACTIONS(717), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14247] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(384), 1,
      sym_fsh_comment,
    ACTIONS(721), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14272] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(385), 1,
      sym_fsh_comment,
    ACTIONS(538), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14297] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(386), 1,
      sym_fsh_comment,
    ACTIONS(993), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14322] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(387), 1,
      sym_fsh_comment,
    ACTIONS(995), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14347] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(388), 1,
      sym_fsh_comment,
    ACTIONS(152), 12,
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
      anon_sym_RuleSet,
      aux_sym_sequence_token1,
  [14374] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(389), 1,
      sym_fsh_comment,
    ACTIONS(997), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14399] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(390), 1,
      sym_fsh_comment,
    ACTIONS(999), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14424] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(391), 1,
      sym_fsh_comment,
    ACTIONS(1001), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14449] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(392), 1,
      sym_fsh_comment,
    ACTIONS(1003), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14474] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(393), 1,
      sym_fsh_comment,
    ACTIONS(1005), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14499] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(394), 1,
      sym_fsh_comment,
    ACTIONS(1007), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14524] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(395), 1,
      sym_fsh_comment,
    ACTIONS(1009), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14549] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(396), 1,
      sym_fsh_comment,
    ACTIONS(1011), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14574] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(397), 1,
      sym_fsh_comment,
    ACTIONS(1013), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14599] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(398), 1,
      sym_fsh_comment,
    ACTIONS(1015), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14624] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(399), 1,
      sym_fsh_comment,
    ACTIONS(1017), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14649] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(400), 1,
      sym_fsh_comment,
    ACTIONS(1019), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14674] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(401), 1,
      sym_fsh_comment,
    ACTIONS(1021), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14699] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(402), 1,
      sym_fsh_comment,
    ACTIONS(1023), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14724] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(403), 1,
      sym_fsh_comment,
    ACTIONS(1025), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14749] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(404), 1,
      sym_fsh_comment,
    ACTIONS(1027), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14774] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(405), 1,
      sym_fsh_comment,
    ACTIONS(1029), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14799] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(406), 1,
      sym_fsh_comment,
    ACTIONS(578), 13,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14824] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(407), 1,
      sym_fsh_comment,
    ACTIONS(1031), 12,
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
      anon_sym_RuleSet,
  [14848] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(408), 1,
      sym_fsh_comment,
    ACTIONS(1033), 12,
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
      anon_sym_RuleSet,
  [14872] = 13,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(236), 1,
      aux_sym_sequence_token1,
    ACTIONS(652), 1,
      anon_sym_codes,
    ACTIONS(656), 1,
      anon_sym_POUND,
    STATE(158), 1,
      sym_code,
    STATE(221), 1,
      sym_code_string,
    STATE(409), 1,
      sym_fsh_comment,
    STATE(420), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(567), 1,
      aux_sym_sequence_repeat1,
    STATE(606), 1,
      sym_sequence,
    STATE(367), 2,
      sym_vs_concept_component,
      sym_vs_filter_component,
  [14913] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(105), 1,
      anon_sym_and,
    STATE(101), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(119), 1,
      sym_flag,
    STATE(410), 1,
      sym_fsh_comment,
    STATE(419), 1,
      aux_sym_flag_rule_repeat1,
    ACTIONS(115), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [14943] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(447), 1,
      anon_sym_Expression,
    ACTIONS(449), 1,
      anon_sym_Severity,
    ACTIONS(451), 1,
      anon_sym_XPath,
    STATE(78), 1,
      aux_sym_invariant_repeat1,
    STATE(241), 1,
      sym_invariant_metadata,
    STATE(411), 1,
      sym_fsh_comment,
    STATE(240), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
  [14977] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(39), 1,
      anon_sym_Id,
    ACTIONS(41), 1,
      anon_sym_Parent,
    ACTIONS(43), 1,
      anon_sym_Title,
    STATE(12), 1,
      aux_sym_profile_repeat1,
    STATE(185), 1,
      sym_sd_metadata,
    STATE(412), 1,
      sym_fsh_comment,
    STATE(184), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
  [15011] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1035), 1,
      aux_sym_sequence_token1,
    STATE(413), 1,
      sym_fsh_comment,
    STATE(414), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 7,
      anon_sym_and,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [15036] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1037), 1,
      aux_sym_sequence_token1,
    STATE(414), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 7,
      anon_sym_and,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [15059] = 11,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(236), 1,
      aux_sym_sequence_token1,
    ACTIONS(1040), 1,
      anon_sym_insert,
    ACTIONS(1042), 1,
      anon_sym_POUND,
    STATE(60), 1,
      aux_sym_code_insert_rule_repeat1,
    STATE(105), 1,
      sym_code,
    STATE(415), 1,
      sym_fsh_comment,
    STATE(567), 1,
      aux_sym_sequence_repeat1,
    STATE(597), 1,
      sym_sequence,
  [15093] = 10,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1044), 1,
      anon_sym_POUND,
    ACTIONS(1047), 1,
      aux_sym_sequence_token1,
    ACTIONS(1050), 1,
      aux_sym_sequence_token2,
    STATE(158), 1,
      sym_code,
    STATE(567), 1,
      aux_sym_sequence_repeat1,
    STATE(616), 1,
      sym_code_string,
    STATE(651), 1,
      sym_sequence,
    STATE(416), 2,
      sym_fsh_comment,
      aux_sym_vs_concept_component_repeat1,
  [15125] = 11,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    ACTIONS(582), 1,
      anon_sym_insert,
    ACTIONS(654), 1,
      anon_sym_system,
    ACTIONS(679), 1,
      aux_sym_sequence_token1,
    STATE(63), 1,
      sym_sequence,
    STATE(189), 1,
      aux_sym_sequence_repeat1,
    STATE(299), 1,
      sym_path,
    STATE(417), 1,
      sym_fsh_comment,
  [15159] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(418), 1,
      sym_fsh_comment,
    ACTIONS(152), 8,
      anon_sym_and,
      aux_sym_sequence_token1,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [15179] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1053), 1,
      anon_sym_and,
    STATE(419), 2,
      sym_fsh_comment,
      aux_sym_flag_rule_repeat1,
    ACTIONS(1056), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [15201] = 11,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(236), 1,
      aux_sym_sequence_token1,
    ACTIONS(1058), 1,
      anon_sym_POUND,
    STATE(158), 1,
      sym_code,
    STATE(416), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(420), 1,
      sym_fsh_comment,
    STATE(562), 1,
      sym_code_string,
    STATE(567), 1,
      aux_sym_sequence_repeat1,
    STATE(649), 1,
      sym_sequence,
  [15235] = 10,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(582), 1,
      anon_sym_insert,
    ACTIONS(654), 1,
      anon_sym_system,
    ACTIONS(674), 1,
      aux_sym_sequence_token1,
    STATE(63), 1,
      sym_sequence,
    STATE(187), 1,
      aux_sym_sequence_repeat1,
    STATE(268), 1,
      sym_path,
    STATE(421), 1,
      sym_fsh_comment,
  [15266] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(422), 1,
      sym_fsh_comment,
    ACTIONS(1056), 7,
      anon_sym_and,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [15285] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1060), 1,
      anon_sym_POUND,
    ACTIONS(1062), 1,
      aux_sym_sequence_token1,
    STATE(423), 1,
      sym_fsh_comment,
    STATE(522), 1,
      aux_sym_sequence_repeat1,
    STATE(546), 1,
      sym_sequence,
    STATE(586), 1,
      sym_code,
  [15313] = 9,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1064), 1,
      aux_sym_sequence_token1,
    ACTIONS(1066), 1,
      aux_sym_sequence_token2,
    ACTIONS(1068), 1,
      anon_sym_DQUOTE,
    STATE(115), 1,
      aux_sym_sequence_repeat1,
    STATE(137), 1,
      sym_sequence,
    STATE(139), 1,
      sym_string,
    STATE(424), 1,
      sym_fsh_comment,
  [15341] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1070), 1,
      aux_sym_sequence_token1,
    STATE(39), 1,
      sym_string,
    STATE(47), 1,
      sym_sequence,
    STATE(425), 1,
      sym_fsh_comment,
    STATE(576), 1,
      aux_sym_sequence_repeat1,
  [15369] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(609), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_string,
    STATE(38), 1,
      sym_sequence,
    STATE(157), 1,
      aux_sym_sequence_repeat1,
    STATE(426), 1,
      sym_fsh_comment,
  [15397] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(609), 1,
      aux_sym_sequence_token1,
    STATE(39), 1,
      sym_string,
    STATE(47), 1,
      sym_sequence,
    STATE(157), 1,
      aux_sym_sequence_repeat1,
    STATE(427), 1,
      sym_fsh_comment,
  [15425] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(710), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_string,
    STATE(38), 1,
      sym_sequence,
    STATE(204), 1,
      aux_sym_sequence_repeat1,
    STATE(428), 1,
      sym_fsh_comment,
  [15453] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(642), 1,
      aux_sym_sequence_token1,
    STATE(39), 1,
      sym_string,
    STATE(47), 1,
      sym_sequence,
    STATE(168), 1,
      aux_sym_sequence_repeat1,
    STATE(429), 1,
      sym_fsh_comment,
  [15481] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1072), 1,
      aux_sym_sequence_token1,
    STATE(430), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 4,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
  [15501] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(710), 1,
      aux_sym_sequence_token1,
    STATE(39), 1,
      sym_string,
    STATE(47), 1,
      sym_sequence,
    STATE(204), 1,
      aux_sym_sequence_repeat1,
    STATE(431), 1,
      sym_fsh_comment,
  [15529] = 9,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1075), 1,
      aux_sym_sequence_token1,
    ACTIONS(1077), 1,
      aux_sym_sequence_token2,
    ACTIONS(1079), 1,
      anon_sym_DQUOTE,
    STATE(69), 1,
      aux_sym_sequence_repeat1,
    STATE(74), 1,
      sym_sequence,
    STATE(95), 1,
      sym_string,
    STATE(432), 1,
      sym_fsh_comment,
  [15557] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(956), 1,
      aux_sym_sequence_token1,
    STATE(430), 1,
      aux_sym_sequence_repeat1,
    STATE(433), 1,
      sym_fsh_comment,
    ACTIONS(33), 4,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
  [15579] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1081), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_string,
    STATE(38), 1,
      sym_sequence,
    STATE(434), 1,
      sym_fsh_comment,
    STATE(468), 1,
      aux_sym_sequence_repeat1,
  [15607] = 9,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1075), 1,
      aux_sym_sequence_token1,
    ACTIONS(1077), 1,
      aux_sym_sequence_token2,
    ACTIONS(1079), 1,
      anon_sym_DQUOTE,
    STATE(69), 1,
      aux_sym_sequence_repeat1,
    STATE(91), 1,
      sym_string,
    STATE(92), 1,
      sym_sequence,
    STATE(435), 1,
      sym_fsh_comment,
  [15635] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(236), 1,
      aux_sym_sequence_token1,
    ACTIONS(1083), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym_code,
    STATE(436), 1,
      sym_fsh_comment,
    STATE(567), 1,
      aux_sym_sequence_repeat1,
    STATE(637), 1,
      sym_sequence,
  [15663] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1070), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_string,
    STATE(38), 1,
      sym_sequence,
    STATE(437), 1,
      sym_fsh_comment,
    STATE(576), 1,
      aux_sym_sequence_repeat1,
  [15691] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(623), 1,
      aux_sym_sequence_token1,
    STATE(39), 1,
      sym_string,
    STATE(47), 1,
      sym_sequence,
    STATE(162), 1,
      aux_sym_sequence_repeat1,
    STATE(438), 1,
      sym_fsh_comment,
  [15719] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(873), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_string,
    STATE(38), 1,
      sym_sequence,
    STATE(283), 1,
      aux_sym_sequence_repeat1,
    STATE(439), 1,
      sym_fsh_comment,
  [15747] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(623), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_string,
    STATE(38), 1,
      sym_sequence,
    STATE(162), 1,
      aux_sym_sequence_repeat1,
    STATE(440), 1,
      sym_fsh_comment,
  [15775] = 9,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(200), 1,
      aux_sym_sequence_token2,
    ACTIONS(654), 1,
      anon_sym_system,
    ACTIONS(1035), 1,
      aux_sym_sequence_token1,
    STATE(63), 1,
      sym_sequence,
    STATE(413), 1,
      aux_sym_sequence_repeat1,
    STATE(422), 1,
      sym_path,
    STATE(441), 1,
      sym_fsh_comment,
  [15803] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(944), 1,
      aux_sym_sequence_token1,
    STATE(442), 1,
      sym_fsh_comment,
    STATE(443), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 4,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [15825] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1085), 1,
      aux_sym_sequence_token1,
    STATE(443), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 4,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [15845] = 9,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1088), 1,
      aux_sym_sequence_token1,
    ACTIONS(1090), 1,
      aux_sym_sequence_token2,
    ACTIONS(1092), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      aux_sym_sequence_repeat1,
    STATE(124), 1,
      sym_string,
    STATE(125), 1,
      sym_sequence,
    STATE(444), 1,
      sym_fsh_comment,
  [15873] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(873), 1,
      aux_sym_sequence_token1,
    STATE(39), 1,
      sym_string,
    STATE(47), 1,
      sym_sequence,
    STATE(283), 1,
      aux_sym_sequence_repeat1,
    STATE(445), 1,
      sym_fsh_comment,
  [15901] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1094), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_string,
    STATE(38), 1,
      sym_sequence,
    STATE(446), 1,
      sym_fsh_comment,
    STATE(530), 1,
      aux_sym_sequence_repeat1,
  [15929] = 9,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1064), 1,
      aux_sym_sequence_token1,
    ACTIONS(1066), 1,
      aux_sym_sequence_token2,
    ACTIONS(1068), 1,
      anon_sym_DQUOTE,
    STATE(115), 1,
      aux_sym_sequence_repeat1,
    STATE(130), 1,
      sym_string,
    STATE(138), 1,
      sym_sequence,
    STATE(447), 1,
      sym_fsh_comment,
  [15957] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1094), 1,
      aux_sym_sequence_token1,
    STATE(39), 1,
      sym_string,
    STATE(47), 1,
      sym_sequence,
    STATE(448), 1,
      sym_fsh_comment,
    STATE(530), 1,
      aux_sym_sequence_repeat1,
  [15985] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(731), 1,
      aux_sym_sequence_token1,
    STATE(39), 1,
      sym_string,
    STATE(47), 1,
      sym_sequence,
    STATE(213), 1,
      aux_sym_sequence_repeat1,
    STATE(449), 1,
      sym_fsh_comment,
  [16013] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(698), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_string,
    STATE(38), 1,
      sym_sequence,
    STATE(199), 1,
      aux_sym_sequence_repeat1,
    STATE(450), 1,
      sym_fsh_comment,
  [16041] = 9,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1096), 1,
      anon_sym_EQ,
    ACTIONS(1098), 1,
      aux_sym_sequence_token1,
    ACTIONS(1100), 1,
      aux_sym_sequence_token2,
    STATE(42), 1,
      sym_vs_filter_operator,
    STATE(73), 1,
      aux_sym_sequence_repeat1,
    STATE(106), 1,
      sym_sequence,
    STATE(451), 1,
      sym_fsh_comment,
  [16069] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(731), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_string,
    STATE(38), 1,
      sym_sequence,
    STATE(213), 1,
      aux_sym_sequence_repeat1,
    STATE(452), 1,
      sym_fsh_comment,
  [16097] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(573), 1,
      aux_sym_sequence_token1,
    STATE(39), 1,
      sym_string,
    STATE(47), 1,
      sym_sequence,
    STATE(131), 1,
      aux_sym_sequence_repeat1,
    STATE(453), 1,
      sym_fsh_comment,
  [16125] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(698), 1,
      aux_sym_sequence_token1,
    STATE(39), 1,
      sym_string,
    STATE(47), 1,
      sym_sequence,
    STATE(199), 1,
      aux_sym_sequence_repeat1,
    STATE(454), 1,
      sym_fsh_comment,
  [16153] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(573), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_string,
    STATE(38), 1,
      sym_sequence,
    STATE(131), 1,
      aux_sym_sequence_repeat1,
    STATE(455), 1,
      sym_fsh_comment,
  [16181] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(642), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_string,
    STATE(38), 1,
      sym_sequence,
    STATE(168), 1,
      aux_sym_sequence_repeat1,
    STATE(456), 1,
      sym_fsh_comment,
  [16209] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(825), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_string,
    STATE(38), 1,
      sym_sequence,
    STATE(262), 1,
      aux_sym_sequence_repeat1,
    STATE(457), 1,
      sym_fsh_comment,
  [16237] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(236), 1,
      aux_sym_sequence_token1,
    ACTIONS(1102), 1,
      anon_sym_POUND,
    STATE(212), 1,
      sym_code,
    STATE(458), 1,
      sym_fsh_comment,
    STATE(567), 1,
      aux_sym_sequence_repeat1,
    STATE(647), 1,
      sym_sequence,
  [16265] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1081), 1,
      aux_sym_sequence_token1,
    STATE(39), 1,
      sym_string,
    STATE(47), 1,
      sym_sequence,
    STATE(459), 1,
      sym_fsh_comment,
    STATE(468), 1,
      aux_sym_sequence_repeat1,
  [16293] = 9,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1088), 1,
      aux_sym_sequence_token1,
    ACTIONS(1090), 1,
      aux_sym_sequence_token2,
    ACTIONS(1092), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      aux_sym_sequence_repeat1,
    STATE(117), 1,
      sym_string,
    STATE(118), 1,
      sym_sequence,
    STATE(460), 1,
      sym_fsh_comment,
  [16321] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(825), 1,
      aux_sym_sequence_token1,
    STATE(39), 1,
      sym_string,
    STATE(47), 1,
      sym_sequence,
    STATE(262), 1,
      aux_sym_sequence_repeat1,
    STATE(461), 1,
      sym_fsh_comment,
  [16349] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(236), 1,
      aux_sym_sequence_token1,
    ACTIONS(1104), 1,
      anon_sym_POUND,
    STATE(156), 1,
      sym_code,
    STATE(462), 1,
      sym_fsh_comment,
    STATE(567), 1,
      aux_sym_sequence_repeat1,
    STATE(650), 1,
      sym_sequence,
  [16377] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(563), 1,
      aux_sym_sequence_token1,
    STATE(39), 1,
      sym_string,
    STATE(47), 1,
      sym_sequence,
    STATE(126), 1,
      aux_sym_sequence_repeat1,
    STATE(463), 1,
      sym_fsh_comment,
  [16405] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(563), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_string,
    STATE(38), 1,
      sym_sequence,
    STATE(126), 1,
      aux_sym_sequence_repeat1,
    STATE(464), 1,
      sym_fsh_comment,
  [16433] = 8,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(799), 1,
      aux_sym_sequence_token1,
    STATE(247), 1,
      aux_sym_sequence_repeat1,
    STATE(314), 1,
      sym_sequence,
    STATE(371), 1,
      sym_param_rule_set_reference,
    STATE(465), 1,
      sym_fsh_comment,
  [16458] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(466), 1,
      sym_fsh_comment,
    ACTIONS(152), 5,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
      aux_sym_sequence_token1,
  [16475] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1106), 1,
      aux_sym_sequence_token1,
    STATE(467), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 3,
      anon_sym_from,
      anon_sym_and,
      anon_sym_DQUOTE,
  [16494] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1081), 1,
      aux_sym_sequence_token1,
    STATE(467), 1,
      aux_sym_sequence_repeat1,
    STATE(468), 1,
      sym_fsh_comment,
    ACTIONS(33), 3,
      anon_sym_from,
      anon_sym_and,
      anon_sym_DQUOTE,
  [16515] = 8,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(799), 1,
      aux_sym_sequence_token1,
    STATE(247), 1,
      aux_sym_sequence_repeat1,
    STATE(359), 1,
      sym_sequence,
    STATE(377), 1,
      sym_param_rule_set_reference,
    STATE(469), 1,
      sym_fsh_comment,
  [16540] = 8,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(799), 1,
      aux_sym_sequence_token1,
    STATE(247), 1,
      aux_sym_sequence_repeat1,
    STATE(324), 1,
      sym_sequence,
    STATE(369), 1,
      sym_param_rule_set_reference,
    STATE(470), 1,
      sym_fsh_comment,
  [16565] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1109), 1,
      aux_sym_sequence_token1,
    STATE(471), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 3,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [16584] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(827), 1,
      aux_sym_sequence_token1,
    STATE(471), 1,
      aux_sym_sequence_repeat1,
    STATE(472), 1,
      sym_fsh_comment,
    ACTIONS(33), 3,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [16605] = 8,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1112), 1,
      aux_sym_sequence_token1,
    STATE(87), 1,
      sym_sequence,
    STATE(96), 1,
      sym_param_rule_set_reference,
    STATE(473), 1,
      sym_fsh_comment,
    STATE(517), 1,
      aux_sym_sequence_repeat1,
  [16630] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1114), 1,
      aux_sym_sequence_token1,
    STATE(474), 1,
      sym_fsh_comment,
    STATE(475), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE,
  [16651] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1116), 1,
      aux_sym_sequence_token1,
    STATE(475), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE,
  [16670] = 8,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(799), 1,
      aux_sym_sequence_token1,
    STATE(247), 1,
      aux_sym_sequence_repeat1,
    STATE(313), 1,
      sym_sequence,
    STATE(376), 1,
      sym_param_rule_set_reference,
    STATE(476), 1,
      sym_fsh_comment,
  [16695] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(477), 1,
      sym_fsh_comment,
    ACTIONS(152), 5,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
      aux_sym_sequence_token1,
  [16712] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(658), 1,
      aux_sym_sequence_token1,
    STATE(478), 1,
      sym_fsh_comment,
    STATE(479), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 3,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_CARET,
  [16733] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1119), 1,
      aux_sym_sequence_token1,
    STATE(479), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 3,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_CARET,
  [16752] = 8,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(799), 1,
      aux_sym_sequence_token1,
    STATE(247), 1,
      aux_sym_sequence_repeat1,
    STATE(347), 1,
      sym_sequence,
    STATE(381), 1,
      sym_param_rule_set_reference,
    STATE(480), 1,
      sym_fsh_comment,
  [16777] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1122), 1,
      aux_sym_sequence_token1,
    ACTIONS(123), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
    STATE(481), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
  [16795] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(482), 1,
      sym_fsh_comment,
    ACTIONS(152), 4,
      anon_sym_RPAREN,
      anon_sym_or,
      aux_sym_sequence_token1,
      anon_sym_PIPE,
  [16811] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1125), 1,
      anon_sym_DQUOTE,
    STATE(483), 1,
      sym_fsh_comment,
    STATE(499), 1,
      aux_sym_string_repeat1,
    ACTIONS(1127), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [16831] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1129), 1,
      anon_sym_DQUOTE,
    STATE(484), 1,
      sym_fsh_comment,
    STATE(510), 1,
      aux_sym_string_repeat1,
    ACTIONS(1127), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [16851] = 7,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1131), 1,
      aux_sym_sequence_token1,
    STATE(485), 1,
      sym_fsh_comment,
    STATE(512), 1,
      aux_sym_sequence_repeat1,
    STATE(589), 1,
      sym_sequence,
  [16873] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1133), 1,
      anon_sym_DQUOTE,
    STATE(486), 1,
      sym_fsh_comment,
    STATE(492), 1,
      aux_sym_string_repeat1,
    ACTIONS(1127), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [16893] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(487), 1,
      sym_fsh_comment,
    ACTIONS(152), 4,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      anon_sym_CARET,
  [16909] = 7,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1114), 1,
      aux_sym_sequence_token1,
    STATE(474), 1,
      aux_sym_sequence_repeat1,
    STATE(488), 1,
      sym_fsh_comment,
    STATE(559), 1,
      sym_sequence,
  [16931] = 7,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1131), 1,
      aux_sym_sequence_token1,
    STATE(489), 1,
      sym_fsh_comment,
    STATE(512), 1,
      aux_sym_sequence_repeat1,
    STATE(556), 1,
      sym_sequence,
  [16953] = 7,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1114), 1,
      aux_sym_sequence_token1,
    STATE(474), 1,
      aux_sym_sequence_repeat1,
    STATE(490), 1,
      sym_fsh_comment,
    STATE(509), 1,
      sym_sequence,
  [16975] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1135), 1,
      anon_sym_DQUOTE,
    STATE(491), 1,
      sym_fsh_comment,
    STATE(499), 1,
      aux_sym_string_repeat1,
    ACTIONS(1127), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [16995] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1137), 1,
      anon_sym_DQUOTE,
    STATE(492), 1,
      sym_fsh_comment,
    STATE(499), 1,
      aux_sym_string_repeat1,
    ACTIONS(1127), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17015] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1139), 1,
      anon_sym_DQUOTE,
    STATE(491), 1,
      aux_sym_string_repeat1,
    STATE(493), 1,
      sym_fsh_comment,
    ACTIONS(1127), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17035] = 7,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(932), 1,
      aux_sym_sequence_token1,
    STATE(337), 1,
      aux_sym_sequence_repeat1,
    STATE(408), 1,
      sym_sequence,
    STATE(494), 1,
      sym_fsh_comment,
  [17057] = 7,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1131), 1,
      aux_sym_sequence_token1,
    STATE(495), 1,
      sym_fsh_comment,
    STATE(512), 1,
      aux_sym_sequence_repeat1,
    STATE(541), 1,
      sym_sequence,
  [17079] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1141), 1,
      anon_sym_RPAREN,
    ACTIONS(1143), 2,
      aux_sym_sequence_token1,
      aux_sym_param_rule_set_params_token1,
    STATE(496), 2,
      sym_fsh_comment,
      aux_sym_param_rule_set_params_repeat1,
  [17097] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1146), 1,
      anon_sym_DQUOTE,
    STATE(497), 1,
      sym_fsh_comment,
    STATE(499), 1,
      aux_sym_string_repeat1,
    ACTIONS(1127), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17117] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1148), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(498), 1,
      sym_fsh_comment,
    STATE(520), 1,
      aux_sym_string_repeat1,
    ACTIONS(1150), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17137] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1152), 1,
      anon_sym_DQUOTE,
    ACTIONS(1154), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
    STATE(499), 2,
      sym_fsh_comment,
      aux_sym_string_repeat1,
  [17155] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1157), 1,
      anon_sym_or,
    ACTIONS(1159), 1,
      anon_sym_DQUOTE,
    STATE(208), 1,
      sym_string,
    STATE(500), 1,
      sym_fsh_comment,
    STATE(568), 1,
      aux_sym_only_rule_repeat1,
  [17177] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1161), 1,
      anon_sym_DQUOTE,
    STATE(499), 1,
      aux_sym_string_repeat1,
    STATE(501), 1,
      sym_fsh_comment,
    ACTIONS(1127), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17197] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(904), 1,
      aux_sym_sequence_token1,
    STATE(481), 1,
      aux_sym_sequence_repeat1,
    STATE(502), 1,
      sym_fsh_comment,
    ACTIONS(33), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
  [17217] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1163), 1,
      anon_sym_DQUOTE,
    STATE(483), 1,
      aux_sym_string_repeat1,
    STATE(503), 1,
      sym_fsh_comment,
    ACTIONS(1127), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17237] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1165), 1,
      anon_sym_system,
    ACTIONS(1167), 1,
      anon_sym_valueset,
    STATE(279), 1,
      sym_vs_from_system,
    STATE(280), 1,
      sym_vs_from_valueset,
    STATE(504), 1,
      sym_fsh_comment,
  [17259] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1169), 1,
      anon_sym_DQUOTE,
    STATE(505), 1,
      sym_fsh_comment,
    STATE(519), 1,
      aux_sym_string_repeat1,
    ACTIONS(1127), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17279] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1171), 1,
      aux_sym_sequence_token1,
    STATE(506), 1,
      sym_fsh_comment,
    STATE(532), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 2,
      anon_sym_EQ,
      aux_sym_sequence_token2,
  [17299] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1174), 1,
      anon_sym_from,
    STATE(336), 1,
      sym_vs_component_from,
    STATE(507), 1,
      sym_fsh_comment,
    ACTIONS(146), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
  [17319] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1157), 1,
      anon_sym_or,
    ACTIONS(1159), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      sym_string,
    STATE(508), 1,
      sym_fsh_comment,
    STATE(533), 1,
      aux_sym_only_rule_repeat1,
  [17341] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1176), 1,
      anon_sym_RPAREN,
    ACTIONS(1178), 1,
      anon_sym_or,
    ACTIONS(1180), 1,
      anon_sym_PIPE,
    STATE(509), 1,
      sym_fsh_comment,
    STATE(552), 1,
      aux_sym_canonical_repeat1,
  [17363] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1182), 1,
      anon_sym_DQUOTE,
    STATE(499), 1,
      aux_sym_string_repeat1,
    STATE(510), 1,
      sym_fsh_comment,
    ACTIONS(1127), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17383] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1184), 1,
      aux_sym_sequence_token1,
    ACTIONS(123), 2,
      anon_sym_RPAREN,
      anon_sym_or,
    STATE(511), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
  [17401] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1131), 1,
      aux_sym_sequence_token1,
    STATE(511), 1,
      aux_sym_sequence_repeat1,
    STATE(512), 1,
      sym_fsh_comment,
    ACTIONS(33), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [17421] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1187), 1,
      aux_sym_sequence_token1,
    ACTIONS(123), 2,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    STATE(513), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
  [17439] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(514), 1,
      sym_fsh_comment,
    STATE(521), 1,
      aux_sym_param_rule_set_params_repeat1,
    STATE(608), 1,
      sym_param_rule_set_params,
    ACTIONS(1190), 2,
      aux_sym_sequence_token1,
      aux_sym_param_rule_set_params_token1,
  [17459] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(515), 1,
      sym_fsh_comment,
    ACTIONS(152), 4,
      aux_sym_sequence_token1,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [17475] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1192), 1,
      aux_sym_sequence_token1,
    ACTIONS(123), 2,
      anon_sym_STAR,
      anon_sym_LPAREN,
    STATE(516), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
  [17493] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1112), 1,
      aux_sym_sequence_token1,
    STATE(516), 1,
      aux_sym_sequence_repeat1,
    STATE(517), 1,
      sym_fsh_comment,
    ACTIONS(33), 2,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [17513] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(518), 1,
      sym_fsh_comment,
    STATE(64), 2,
      sym_string,
      sym_multiline_string,
  [17533] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1195), 1,
      anon_sym_DQUOTE,
    STATE(499), 1,
      aux_sym_string_repeat1,
    STATE(519), 1,
      sym_fsh_comment,
    ACTIONS(1127), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17553] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1152), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(1197), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
    STATE(520), 2,
      sym_fsh_comment,
      aux_sym_string_repeat1,
  [17571] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1200), 1,
      anon_sym_RPAREN,
    STATE(496), 1,
      aux_sym_param_rule_set_params_repeat1,
    STATE(521), 1,
      sym_fsh_comment,
    ACTIONS(1190), 2,
      aux_sym_sequence_token1,
      aux_sym_param_rule_set_params_token1,
  [17591] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1062), 1,
      aux_sym_sequence_token1,
    STATE(513), 1,
      aux_sym_sequence_repeat1,
    STATE(522), 1,
      sym_fsh_comment,
    ACTIONS(33), 2,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [17611] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1202), 1,
      aux_sym_sequence_token1,
    ACTIONS(123), 2,
      anon_sym_and,
      anon_sym_DQUOTE,
    STATE(523), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
  [17629] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1205), 1,
      anon_sym_DQUOTE,
    STATE(497), 1,
      aux_sym_string_repeat1,
    STATE(524), 1,
      sym_fsh_comment,
    ACTIONS(1127), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17649] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1207), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(498), 1,
      aux_sym_string_repeat1,
    STATE(525), 1,
      sym_fsh_comment,
    ACTIONS(1150), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17669] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(526), 1,
      sym_fsh_comment,
    ACTIONS(1209), 4,
      anon_sym_example,
      anon_sym_preferred,
      anon_sym_extensible,
      anon_sym_required,
  [17685] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(527), 1,
      sym_fsh_comment,
    ACTIONS(152), 4,
      anon_sym_from,
      anon_sym_and,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
  [17701] = 7,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1131), 1,
      aux_sym_sequence_token1,
    STATE(512), 1,
      aux_sym_sequence_repeat1,
    STATE(528), 1,
      sym_fsh_comment,
    STATE(592), 1,
      sym_sequence,
  [17723] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1211), 1,
      anon_sym_DQUOTE,
    STATE(501), 1,
      aux_sym_string_repeat1,
    STATE(529), 1,
      sym_fsh_comment,
    ACTIONS(1127), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17743] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1094), 1,
      aux_sym_sequence_token1,
    STATE(523), 1,
      aux_sym_sequence_repeat1,
    STATE(530), 1,
      sym_fsh_comment,
    ACTIONS(33), 2,
      anon_sym_and,
      anon_sym_DQUOTE,
  [17763] = 7,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1213), 1,
      aux_sym_sequence_token1,
    STATE(531), 1,
      sym_fsh_comment,
    STATE(578), 1,
      aux_sym_sequence_repeat1,
    STATE(599), 1,
      sym_sequence,
  [17785] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1215), 1,
      aux_sym_sequence_token1,
    ACTIONS(123), 2,
      anon_sym_EQ,
      aux_sym_sequence_token2,
    STATE(532), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
  [17803] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1157), 1,
      anon_sym_or,
    ACTIONS(1159), 1,
      anon_sym_DQUOTE,
    STATE(210), 1,
      sym_string,
    STATE(533), 1,
      sym_fsh_comment,
    STATE(568), 1,
      aux_sym_only_rule_repeat1,
  [17825] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(430), 1,
      aux_sym_sequence_token1,
    STATE(534), 1,
      sym_fsh_comment,
    STATE(535), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 2,
      anon_sym_or,
      anon_sym_DQUOTE,
  [17845] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1218), 1,
      aux_sym_sequence_token1,
    ACTIONS(123), 2,
      anon_sym_or,
      anon_sym_DQUOTE,
    STATE(535), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
  [17863] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1157), 1,
      anon_sym_or,
    ACTIONS(1159), 1,
      anon_sym_DQUOTE,
    STATE(210), 1,
      sym_string,
    STATE(500), 1,
      aux_sym_only_rule_repeat1,
    STATE(536), 1,
      sym_fsh_comment,
  [17885] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1221), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1223), 1,
      anon_sym_DOT_DOT,
    ACTIONS(1225), 1,
      anon_sym_named,
    STATE(76), 1,
      sym_cardinality,
    STATE(537), 1,
      sym_fsh_comment,
  [17907] = 7,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1213), 1,
      aux_sym_sequence_token1,
    STATE(538), 1,
      sym_fsh_comment,
    STATE(578), 1,
      aux_sym_sequence_repeat1,
    STATE(598), 1,
      sym_sequence,
  [17929] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1227), 1,
      anon_sym_system,
    ACTIONS(1229), 1,
      anon_sym_valueset,
    STATE(355), 1,
      sym_vs_from_system,
    STATE(357), 1,
      sym_vs_from_valueset,
    STATE(539), 1,
      sym_fsh_comment,
  [17951] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(540), 1,
      sym_fsh_comment,
    ACTIONS(152), 3,
      anon_sym_or,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
  [17966] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1231), 1,
      anon_sym_RPAREN,
    ACTIONS(1233), 1,
      anon_sym_or,
    STATE(541), 1,
      sym_fsh_comment,
    STATE(566), 1,
      aux_sym_reference_repeat1,
  [17985] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1221), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1223), 1,
      anon_sym_DOT_DOT,
    STATE(81), 1,
      sym_cardinality,
    STATE(542), 1,
      sym_fsh_comment,
  [18004] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1221), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1223), 1,
      anon_sym_DOT_DOT,
    STATE(104), 1,
      sym_cardinality,
    STATE(543), 1,
      sym_fsh_comment,
  [18023] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1235), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(544), 1,
      sym_fsh_comment,
    ACTIONS(1237), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [18040] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(545), 1,
      sym_fsh_comment,
    ACTIONS(152), 3,
      anon_sym_EQ,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
  [18055] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1159), 1,
      anon_sym_DQUOTE,
    ACTIONS(1239), 1,
      anon_sym_POUND,
    STATE(209), 1,
      sym_string,
    STATE(546), 1,
      sym_fsh_comment,
  [18074] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1241), 1,
      anon_sym_SQUOTE,
    ACTIONS(1243), 1,
      aux_sym_unit_token1,
    STATE(547), 1,
      sym_fsh_comment,
    STATE(561), 1,
      aux_sym_unit_repeat1,
  [18093] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(548), 1,
      sym_fsh_comment,
    ACTIONS(152), 3,
      anon_sym_and,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
  [18108] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(549), 1,
      sym_fsh_comment,
    ACTIONS(148), 3,
      anon_sym_EQ,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
  [18123] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1178), 1,
      anon_sym_or,
    ACTIONS(1245), 1,
      anon_sym_RPAREN,
    STATE(550), 1,
      sym_fsh_comment,
    STATE(555), 1,
      aux_sym_canonical_repeat1,
  [18142] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(99), 1,
      anon_sym_insert,
    ACTIONS(113), 1,
      anon_sym_CARET,
    STATE(551), 1,
      sym_fsh_comment,
    STATE(607), 1,
      sym_caret_path,
  [18161] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1178), 1,
      anon_sym_or,
    ACTIONS(1247), 1,
      anon_sym_RPAREN,
    STATE(552), 1,
      sym_fsh_comment,
    STATE(555), 1,
      aux_sym_canonical_repeat1,
  [18180] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(553), 1,
      sym_fsh_comment,
    ACTIONS(33), 3,
      anon_sym_EQ,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
  [18195] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(554), 1,
      sym_fsh_comment,
    ACTIONS(152), 3,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
  [18210] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1249), 1,
      anon_sym_RPAREN,
    ACTIONS(1251), 1,
      anon_sym_or,
    STATE(555), 2,
      sym_fsh_comment,
      aux_sym_canonical_repeat1,
  [18227] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1178), 1,
      anon_sym_or,
    ACTIONS(1254), 1,
      anon_sym_RPAREN,
    STATE(550), 1,
      aux_sym_canonical_repeat1,
    STATE(556), 1,
      sym_fsh_comment,
  [18246] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(557), 1,
      sym_fsh_comment,
    ACTIONS(1256), 3,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
  [18261] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(558), 1,
      sym_fsh_comment,
    ACTIONS(152), 3,
      anon_sym_STAR,
      anon_sym_LPAREN,
      aux_sym_sequence_token1,
  [18276] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1258), 1,
      anon_sym_PIPE,
    STATE(559), 1,
      sym_fsh_comment,
    ACTIONS(1249), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [18293] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(560), 1,
      sym_fsh_comment,
    ACTIONS(152), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      aux_sym_sequence_token1,
  [18308] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1260), 1,
      anon_sym_SQUOTE,
    ACTIONS(1262), 1,
      aux_sym_unit_token1,
    STATE(561), 2,
      sym_fsh_comment,
      aux_sym_unit_repeat1,
  [18325] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(750), 1,
      anon_sym_from,
    ACTIONS(752), 1,
      anon_sym_and,
    STATE(380), 1,
      sym_vs_component_from,
    STATE(562), 1,
      sym_fsh_comment,
  [18344] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1265), 1,
      anon_sym_RPAREN,
    ACTIONS(1267), 1,
      anon_sym_or,
    STATE(563), 2,
      sym_fsh_comment,
      aux_sym_reference_repeat1,
  [18361] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(564), 1,
      sym_fsh_comment,
    ACTIONS(1270), 3,
      anon_sym_RPAREN,
      aux_sym_sequence_token1,
      aux_sym_param_rule_set_params_token1,
  [18376] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1272), 1,
      sym_number,
    STATE(344), 1,
      sym_quantity,
    STATE(345), 1,
      sym_ratio_part,
    STATE(565), 1,
      sym_fsh_comment,
  [18395] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1233), 1,
      anon_sym_or,
    ACTIONS(1274), 1,
      anon_sym_RPAREN,
    STATE(563), 1,
      aux_sym_reference_repeat1,
    STATE(566), 1,
      sym_fsh_comment,
  [18414] = 6,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(236), 1,
      aux_sym_sequence_token1,
    STATE(567), 1,
      sym_fsh_comment,
    STATE(572), 1,
      aux_sym_sequence_repeat1,
  [18433] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(868), 1,
      anon_sym_DQUOTE,
    ACTIONS(1276), 1,
      anon_sym_or,
    STATE(568), 2,
      sym_fsh_comment,
      aux_sym_only_rule_repeat1,
  [18450] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(569), 1,
      sym_fsh_comment,
    ACTIONS(152), 3,
      aux_sym_sequence_token1,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
  [18465] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1279), 1,
      sym_number,
    STATE(344), 1,
      sym_quantity,
    STATE(345), 1,
      sym_ratio_part,
    STATE(570), 1,
      sym_fsh_comment,
  [18484] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1281), 1,
      anon_sym_POUND,
    STATE(571), 1,
      sym_fsh_comment,
    ACTIONS(154), 2,
      anon_sym_insert,
      anon_sym_CARET,
  [18501] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(123), 1,
      anon_sym_POUND,
    ACTIONS(1283), 1,
      aux_sym_sequence_token1,
    STATE(572), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
  [18518] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(123), 1,
      anon_sym_EQ,
    ACTIONS(1286), 1,
      aux_sym_sequence_token1,
    STATE(573), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
  [18535] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1235), 1,
      anon_sym_DQUOTE,
    STATE(574), 1,
      sym_fsh_comment,
    ACTIONS(1237), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [18552] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1243), 1,
      aux_sym_unit_token1,
    ACTIONS(1289), 1,
      anon_sym_SQUOTE,
    STATE(547), 1,
      aux_sym_unit_repeat1,
    STATE(575), 1,
      sym_fsh_comment,
  [18571] = 6,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1070), 1,
      aux_sym_sequence_token1,
    STATE(576), 1,
      sym_fsh_comment,
    STATE(577), 1,
      aux_sym_sequence_repeat1,
  [18590] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(1291), 1,
      aux_sym_sequence_token1,
    STATE(577), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
  [18607] = 6,
    ACTIONS(33), 1,
      anon_sym_EQ,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1213), 1,
      aux_sym_sequence_token1,
    STATE(573), 1,
      aux_sym_sequence_repeat1,
    STATE(578), 1,
      sym_fsh_comment,
  [18626] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(579), 1,
      sym_fsh_comment,
    ACTIONS(152), 2,
      anon_sym_POUND,
      aux_sym_sequence_token1,
  [18640] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(580), 1,
      sym_fsh_comment,
    ACTIONS(152), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
  [18654] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1294), 1,
      anon_sym_system,
    STATE(351), 1,
      sym_vs_from_system,
    STATE(581), 1,
      sym_fsh_comment,
  [18670] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1296), 1,
      anon_sym_valueset,
    STATE(351), 1,
      sym_vs_from_valueset,
    STATE(582), 1,
      sym_fsh_comment,
  [18686] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(583), 1,
      sym_fsh_comment,
    ACTIONS(1298), 2,
      anon_sym_SQUOTE,
      aux_sym_unit_token1,
  [18700] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1300), 1,
      anon_sym_DQUOTE,
    STATE(98), 1,
      sym_string,
    STATE(584), 1,
      sym_fsh_comment,
  [18716] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(613), 1,
      anon_sym_DQUOTE,
    STATE(107), 1,
      sym_string,
    STATE(585), 1,
      sym_fsh_comment,
  [18732] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1159), 1,
      anon_sym_DQUOTE,
    STATE(209), 1,
      sym_string,
    STATE(586), 1,
      sym_fsh_comment,
  [18748] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(613), 1,
      anon_sym_DQUOTE,
    STATE(224), 1,
      sym_string,
    STATE(587), 1,
      sym_fsh_comment,
  [18764] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(613), 1,
      anon_sym_DQUOTE,
    STATE(222), 1,
      sym_string,
    STATE(588), 1,
      sym_fsh_comment,
  [18780] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(589), 1,
      sym_fsh_comment,
    ACTIONS(1302), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [18794] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1304), 1,
      anon_sym_system,
    STATE(351), 1,
      sym_vs_from_system,
    STATE(590), 1,
      sym_fsh_comment,
  [18810] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1306), 1,
      anon_sym_valueset,
    STATE(351), 1,
      sym_vs_from_valueset,
    STATE(591), 1,
      sym_fsh_comment,
  [18826] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(592), 1,
      sym_fsh_comment,
    ACTIONS(1265), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [18840] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1300), 1,
      anon_sym_DQUOTE,
    STATE(110), 1,
      sym_string,
    STATE(593), 1,
      sym_fsh_comment,
  [18856] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(613), 1,
      anon_sym_DQUOTE,
    STATE(155), 1,
      sym_string,
    STATE(594), 1,
      sym_fsh_comment,
  [18872] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(595), 1,
      sym_fsh_comment,
    ACTIONS(152), 2,
      anon_sym_EQ,
      aux_sym_sequence_token1,
  [18886] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1174), 1,
      anon_sym_from,
    STATE(336), 1,
      sym_vs_component_from,
    STATE(596), 1,
      sym_fsh_comment,
  [18902] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1308), 1,
      anon_sym_POUND,
    STATE(597), 1,
      sym_fsh_comment,
  [18915] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1310), 1,
      anon_sym_EQ,
    STATE(598), 1,
      sym_fsh_comment,
  [18928] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1312), 1,
      anon_sym_EQ,
    STATE(599), 1,
      sym_fsh_comment,
  [18941] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1314), 1,
      aux_sym_fsh_comment_token2,
    STATE(600), 1,
      sym_fsh_comment,
  [18954] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1316), 1,
      anon_sym_COLON,
    STATE(601), 1,
      sym_fsh_comment,
  [18967] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1318), 1,
      anon_sym_COLON,
    STATE(602), 1,
      sym_fsh_comment,
  [18980] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1320), 1,
      anon_sym_EQ,
    STATE(603), 1,
      sym_fsh_comment,
  [18993] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1322), 1,
      anon_sym_COLON,
    STATE(604), 1,
      sym_fsh_comment,
  [19006] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1324), 1,
      anon_sym_COLON,
    STATE(605), 1,
      sym_fsh_comment,
  [19019] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1281), 1,
      anon_sym_POUND,
    STATE(606), 1,
      sym_fsh_comment,
  [19032] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1326), 1,
      anon_sym_EQ,
    STATE(607), 1,
      sym_fsh_comment,
  [19045] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1328), 1,
      anon_sym_RPAREN,
    STATE(608), 1,
      sym_fsh_comment,
  [19058] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1330), 1,
      anon_sym_COLON,
    STATE(609), 1,
      sym_fsh_comment,
  [19071] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1332), 1,
      aux_sym_fsh_comment_token1,
    STATE(610), 1,
      sym_fsh_comment,
  [19084] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1334), 1,
      anon_sym_POUND,
    STATE(611), 1,
      sym_fsh_comment,
  [19097] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1336), 1,
      anon_sym_exactly,
    STATE(612), 1,
      sym_fsh_comment,
  [19110] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1338), 1,
      anon_sym_COLON,
    STATE(613), 1,
      sym_fsh_comment,
  [19123] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1340), 1,
      anon_sym_COLON,
    STATE(614), 1,
      sym_fsh_comment,
  [19136] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1342), 1,
      anon_sym_LPAREN,
    STATE(615), 1,
      sym_fsh_comment,
  [19149] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(752), 1,
      anon_sym_and,
    STATE(616), 1,
      sym_fsh_comment,
  [19162] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1344), 1,
      anon_sym_COLON,
    STATE(617), 1,
      sym_fsh_comment,
  [19175] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1346), 1,
      anon_sym_LPAREN,
    STATE(618), 1,
      sym_fsh_comment,
  [19188] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1348), 1,
      anon_sym_COLON,
    STATE(619), 1,
      sym_fsh_comment,
  [19201] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1350), 1,
      anon_sym_COLON,
    STATE(620), 1,
      sym_fsh_comment,
  [19214] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1352), 1,
      anon_sym_COLON,
    STATE(621), 1,
      sym_fsh_comment,
  [19227] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1354), 1,
      sym_regex_pattern,
    STATE(622), 1,
      sym_fsh_comment,
  [19240] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1356), 1,
      anon_sym_COLON,
    STATE(623), 1,
      sym_fsh_comment,
  [19253] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1358), 1,
      anon_sym_SLASH2,
    STATE(624), 1,
      sym_fsh_comment,
  [19266] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1360), 1,
      anon_sym_RPAREN,
    STATE(625), 1,
      sym_fsh_comment,
  [19279] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1362), 1,
      anon_sym_COLON,
    STATE(626), 1,
      sym_fsh_comment,
  [19292] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1364), 1,
      anon_sym_RPAREN,
    STATE(627), 1,
      sym_fsh_comment,
  [19305] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1366), 1,
      anon_sym_COLON,
    STATE(628), 1,
      sym_fsh_comment,
  [19318] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1368), 1,
      anon_sym_COLON,
    STATE(629), 1,
      sym_fsh_comment,
  [19331] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1370), 1,
      anon_sym_COLON,
    STATE(630), 1,
      sym_fsh_comment,
  [19344] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1372), 1,
      anon_sym_COLON,
    STATE(631), 1,
      sym_fsh_comment,
  [19357] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1374), 1,
      anon_sym_COLON,
    STATE(632), 1,
      sym_fsh_comment,
  [19370] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1376), 1,
      anon_sym_SLASH,
    STATE(633), 1,
      sym_fsh_comment,
  [19383] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1378), 1,
      anon_sym_DOT_DOT,
    STATE(634), 1,
      sym_fsh_comment,
  [19396] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1380), 1,
      anon_sym_COLON,
    STATE(635), 1,
      sym_fsh_comment,
  [19409] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1382), 1,
      anon_sym_COLON,
    STATE(636), 1,
      sym_fsh_comment,
  [19422] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1384), 1,
      anon_sym_POUND,
    STATE(637), 1,
      sym_fsh_comment,
  [19435] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1386), 1,
      sym_time,
    STATE(638), 1,
      sym_fsh_comment,
  [19448] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1388), 1,
      anon_sym_COLON,
    STATE(639), 1,
      sym_fsh_comment,
  [19461] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1390), 1,
      anon_sym_COLON,
    STATE(640), 1,
      sym_fsh_comment,
  [19474] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1392), 1,
      anon_sym_EQ,
    STATE(641), 1,
      sym_fsh_comment,
  [19487] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1394), 1,
      ts_builtin_sym_end,
    STATE(642), 1,
      sym_fsh_comment,
  [19500] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1396), 1,
      anon_sym_COLON,
    STATE(643), 1,
      sym_fsh_comment,
  [19513] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1398), 1,
      anon_sym_DOT_DOT,
    STATE(644), 1,
      sym_fsh_comment,
  [19526] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1400), 1,
      anon_sym_COLON,
    STATE(645), 1,
      sym_fsh_comment,
  [19539] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1402), 1,
      anon_sym_COLON,
    STATE(646), 1,
      sym_fsh_comment,
  [19552] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1404), 1,
      anon_sym_POUND,
    STATE(647), 1,
      sym_fsh_comment,
  [19565] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1406), 1,
      anon_sym_COLON,
    STATE(648), 1,
      sym_fsh_comment,
  [19578] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1408), 1,
      anon_sym_POUND,
    STATE(649), 1,
      sym_fsh_comment,
  [19591] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1410), 1,
      anon_sym_POUND,
    STATE(650), 1,
      sym_fsh_comment,
  [19604] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1412), 1,
      anon_sym_POUND,
    STATE(651), 1,
      sym_fsh_comment,
  [19617] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1414), 1,
      anon_sym_POUND,
    STATE(652), 1,
      sym_fsh_comment,
  [19630] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1416), 1,
      anon_sym_POUND,
    STATE(653), 1,
      sym_fsh_comment,
  [19643] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1418), 1,
      anon_sym_POUND,
    STATE(654), 1,
      sym_fsh_comment,
  [19656] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(926), 1,
      anon_sym_POUND,
    STATE(655), 1,
      sym_fsh_comment,
  [19669] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(860), 1,
      anon_sym_POUND,
    STATE(656), 1,
      sym_fsh_comment,
  [19682] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1420), 1,
      anon_sym_POUND,
    STATE(657), 1,
      sym_fsh_comment,
  [19695] = 1,
    ACTIONS(1422), 1,
      ts_builtin_sym_end,
  [19699] = 1,
    ACTIONS(1424), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 129,
  [SMALL_STATE(5)] = 203,
  [SMALL_STATE(6)] = 277,
  [SMALL_STATE(7)] = 351,
  [SMALL_STATE(8)] = 436,
  [SMALL_STATE(9)] = 521,
  [SMALL_STATE(10)] = 590,
  [SMALL_STATE(11)] = 675,
  [SMALL_STATE(12)] = 760,
  [SMALL_STATE(13)] = 829,
  [SMALL_STATE(14)] = 898,
  [SMALL_STATE(15)] = 979,
  [SMALL_STATE(16)] = 1057,
  [SMALL_STATE(17)] = 1106,
  [SMALL_STATE(18)] = 1159,
  [SMALL_STATE(19)] = 1210,
  [SMALL_STATE(20)] = 1265,
  [SMALL_STATE(21)] = 1320,
  [SMALL_STATE(22)] = 1373,
  [SMALL_STATE(23)] = 1419,
  [SMALL_STATE(24)] = 1465,
  [SMALL_STATE(25)] = 1512,
  [SMALL_STATE(26)] = 1555,
  [SMALL_STATE(27)] = 1602,
  [SMALL_STATE(28)] = 1651,
  [SMALL_STATE(29)] = 1720,
  [SMALL_STATE(30)] = 1786,
  [SMALL_STATE(31)] = 1852,
  [SMALL_STATE(32)] = 1896,
  [SMALL_STATE(33)] = 1940,
  [SMALL_STATE(34)] = 1983,
  [SMALL_STATE(35)] = 2026,
  [SMALL_STATE(36)] = 2107,
  [SMALL_STATE(37)] = 2150,
  [SMALL_STATE(38)] = 2192,
  [SMALL_STATE(39)] = 2234,
  [SMALL_STATE(40)] = 2276,
  [SMALL_STATE(41)] = 2340,
  [SMALL_STATE(42)] = 2390,
  [SMALL_STATE(43)] = 2454,
  [SMALL_STATE(44)] = 2502,
  [SMALL_STATE(45)] = 2552,
  [SMALL_STATE(46)] = 2602,
  [SMALL_STATE(47)] = 2652,
  [SMALL_STATE(48)] = 2694,
  [SMALL_STATE(49)] = 2758,
  [SMALL_STATE(50)] = 2816,
  [SMALL_STATE(51)] = 2874,
  [SMALL_STATE(52)] = 2932,
  [SMALL_STATE(53)] = 2990,
  [SMALL_STATE(54)] = 3035,
  [SMALL_STATE(55)] = 3098,
  [SMALL_STATE(56)] = 3159,
  [SMALL_STATE(57)] = 3204,
  [SMALL_STATE(58)] = 3247,
  [SMALL_STATE(59)] = 3298,
  [SMALL_STATE(60)] = 3343,
  [SMALL_STATE(61)] = 3406,
  [SMALL_STATE(62)] = 3445,
  [SMALL_STATE(63)] = 3484,
  [SMALL_STATE(64)] = 3520,
  [SMALL_STATE(65)] = 3558,
  [SMALL_STATE(66)] = 3608,
  [SMALL_STATE(67)] = 3661,
  [SMALL_STATE(68)] = 3708,
  [SMALL_STATE(69)] = 3757,
  [SMALL_STATE(70)] = 3798,
  [SMALL_STATE(71)] = 3837,
  [SMALL_STATE(72)] = 3886,
  [SMALL_STATE(73)] = 3949,
  [SMALL_STATE(74)] = 3989,
  [SMALL_STATE(75)] = 4025,
  [SMALL_STATE(76)] = 4077,
  [SMALL_STATE(77)] = 4117,
  [SMALL_STATE(78)] = 4157,
  [SMALL_STATE(79)] = 4205,
  [SMALL_STATE(80)] = 4243,
  [SMALL_STATE(81)] = 4281,
  [SMALL_STATE(82)] = 4321,
  [SMALL_STATE(83)] = 4357,
  [SMALL_STATE(84)] = 4397,
  [SMALL_STATE(85)] = 4443,
  [SMALL_STATE(86)] = 4481,
  [SMALL_STATE(87)] = 4517,
  [SMALL_STATE(88)] = 4561,
  [SMALL_STATE(89)] = 4611,
  [SMALL_STATE(90)] = 4647,
  [SMALL_STATE(91)] = 4683,
  [SMALL_STATE(92)] = 4719,
  [SMALL_STATE(93)] = 4755,
  [SMALL_STATE(94)] = 4793,
  [SMALL_STATE(95)] = 4853,
  [SMALL_STATE(96)] = 4889,
  [SMALL_STATE(97)] = 4930,
  [SMALL_STATE(98)] = 4965,
  [SMALL_STATE(99)] = 5016,
  [SMALL_STATE(100)] = 5053,
  [SMALL_STATE(101)] = 5092,
  [SMALL_STATE(102)] = 5131,
  [SMALL_STATE(103)] = 5170,
  [SMALL_STATE(104)] = 5213,
  [SMALL_STATE(105)] = 5252,
  [SMALL_STATE(106)] = 5291,
  [SMALL_STATE(107)] = 5326,
  [SMALL_STATE(108)] = 5361,
  [SMALL_STATE(109)] = 5396,
  [SMALL_STATE(110)] = 5435,
  [SMALL_STATE(111)] = 5486,
  [SMALL_STATE(112)] = 5529,
  [SMALL_STATE(113)] = 5578,
  [SMALL_STATE(114)] = 5614,
  [SMALL_STATE(115)] = 5648,
  [SMALL_STATE(116)] = 5686,
  [SMALL_STATE(117)] = 5720,
  [SMALL_STATE(118)] = 5754,
  [SMALL_STATE(119)] = 5788,
  [SMALL_STATE(120)] = 5820,
  [SMALL_STATE(121)] = 5852,
  [SMALL_STATE(122)] = 5884,
  [SMALL_STATE(123)] = 5918,
  [SMALL_STATE(124)] = 5952,
  [SMALL_STATE(125)] = 5986,
  [SMALL_STATE(126)] = 6020,
  [SMALL_STATE(127)] = 6058,
  [SMALL_STATE(128)] = 6094,
  [SMALL_STATE(129)] = 6126,
  [SMALL_STATE(130)] = 6161,
  [SMALL_STATE(131)] = 6194,
  [SMALL_STATE(132)] = 6231,
  [SMALL_STATE(133)] = 6266,
  [SMALL_STATE(134)] = 6299,
  [SMALL_STATE(135)] = 6348,
  [SMALL_STATE(136)] = 6393,
  [SMALL_STATE(137)] = 6426,
  [SMALL_STATE(138)] = 6459,
  [SMALL_STATE(139)] = 6492,
  [SMALL_STATE(140)] = 6525,
  [SMALL_STATE(141)] = 6570,
  [SMALL_STATE(142)] = 6623,
  [SMALL_STATE(143)] = 6672,
  [SMALL_STATE(144)] = 6709,
  [SMALL_STATE(145)] = 6742,
  [SMALL_STATE(146)] = 6791,
  [SMALL_STATE(147)] = 6844,
  [SMALL_STATE(148)] = 6875,
  [SMALL_STATE(149)] = 6908,
  [SMALL_STATE(150)] = 6941,
  [SMALL_STATE(151)] = 6974,
  [SMALL_STATE(152)] = 7012,
  [SMALL_STATE(153)] = 7046,
  [SMALL_STATE(154)] = 7082,
  [SMALL_STATE(155)] = 7116,
  [SMALL_STATE(156)] = 7146,
  [SMALL_STATE(157)] = 7176,
  [SMALL_STATE(158)] = 7212,
  [SMALL_STATE(159)] = 7246,
  [SMALL_STATE(160)] = 7280,
  [SMALL_STATE(161)] = 7316,
  [SMALL_STATE(162)] = 7348,
  [SMALL_STATE(163)] = 7384,
  [SMALL_STATE(164)] = 7418,
  [SMALL_STATE(165)] = 7456,
  [SMALL_STATE(166)] = 7492,
  [SMALL_STATE(167)] = 7530,
  [SMALL_STATE(168)] = 7566,
  [SMALL_STATE(169)] = 7602,
  [SMALL_STATE(170)] = 7640,
  [SMALL_STATE(171)] = 7678,
  [SMALL_STATE(172)] = 7708,
  [SMALL_STATE(173)] = 7738,
  [SMALL_STATE(174)] = 7774,
  [SMALL_STATE(175)] = 7812,
  [SMALL_STATE(176)] = 7850,
  [SMALL_STATE(177)] = 7882,
  [SMALL_STATE(178)] = 7942,
  [SMALL_STATE(179)] = 7980,
  [SMALL_STATE(180)] = 8011,
  [SMALL_STATE(181)] = 8042,
  [SMALL_STATE(182)] = 8073,
  [SMALL_STATE(183)] = 8104,
  [SMALL_STATE(184)] = 8135,
  [SMALL_STATE(185)] = 8164,
  [SMALL_STATE(186)] = 8193,
  [SMALL_STATE(187)] = 8222,
  [SMALL_STATE(188)] = 8257,
  [SMALL_STATE(189)] = 8290,
  [SMALL_STATE(190)] = 8325,
  [SMALL_STATE(191)] = 8358,
  [SMALL_STATE(192)] = 8389,
  [SMALL_STATE(193)] = 8422,
  [SMALL_STATE(194)] = 8457,
  [SMALL_STATE(195)] = 8492,
  [SMALL_STATE(196)] = 8525,
  [SMALL_STATE(197)] = 8556,
  [SMALL_STATE(198)] = 8589,
  [SMALL_STATE(199)] = 8620,
  [SMALL_STATE(200)] = 8655,
  [SMALL_STATE(201)] = 8688,
  [SMALL_STATE(202)] = 8723,
  [SMALL_STATE(203)] = 8758,
  [SMALL_STATE(204)] = 8791,
  [SMALL_STATE(205)] = 8826,
  [SMALL_STATE(206)] = 8859,
  [SMALL_STATE(207)] = 8890,
  [SMALL_STATE(208)] = 8921,
  [SMALL_STATE(209)] = 8956,
  [SMALL_STATE(210)] = 8991,
  [SMALL_STATE(211)] = 9026,
  [SMALL_STATE(212)] = 9057,
  [SMALL_STATE(213)] = 9088,
  [SMALL_STATE(214)] = 9123,
  [SMALL_STATE(215)] = 9155,
  [SMALL_STATE(216)] = 9183,
  [SMALL_STATE(217)] = 9211,
  [SMALL_STATE(218)] = 9239,
  [SMALL_STATE(219)] = 9267,
  [SMALL_STATE(220)] = 9295,
  [SMALL_STATE(221)] = 9323,
  [SMALL_STATE(222)] = 9357,
  [SMALL_STATE(223)] = 9385,
  [SMALL_STATE(224)] = 9413,
  [SMALL_STATE(225)] = 9441,
  [SMALL_STATE(226)] = 9471,
  [SMALL_STATE(227)] = 9499,
  [SMALL_STATE(228)] = 9527,
  [SMALL_STATE(229)] = 9555,
  [SMALL_STATE(230)] = 9587,
  [SMALL_STATE(231)] = 9619,
  [SMALL_STATE(232)] = 9651,
  [SMALL_STATE(233)] = 9679,
  [SMALL_STATE(234)] = 9707,
  [SMALL_STATE(235)] = 9735,
  [SMALL_STATE(236)] = 9763,
  [SMALL_STATE(237)] = 9793,
  [SMALL_STATE(238)] = 9823,
  [SMALL_STATE(239)] = 9853,
  [SMALL_STATE(240)] = 9883,
  [SMALL_STATE(241)] = 9911,
  [SMALL_STATE(242)] = 9939,
  [SMALL_STATE(243)] = 9969,
  [SMALL_STATE(244)] = 9999,
  [SMALL_STATE(245)] = 10031,
  [SMALL_STATE(246)] = 10065,
  [SMALL_STATE(247)] = 10095,
  [SMALL_STATE(248)] = 10129,
  [SMALL_STATE(249)] = 10163,
  [SMALL_STATE(250)] = 10195,
  [SMALL_STATE(251)] = 10225,
  [SMALL_STATE(252)] = 10259,
  [SMALL_STATE(253)] = 10289,
  [SMALL_STATE(254)] = 10321,
  [SMALL_STATE(255)] = 10351,
  [SMALL_STATE(256)] = 10385,
  [SMALL_STATE(257)] = 10417,
  [SMALL_STATE(258)] = 10449,
  [SMALL_STATE(259)] = 10491,
  [SMALL_STATE(260)] = 10521,
  [SMALL_STATE(261)] = 10551,
  [SMALL_STATE(262)] = 10583,
  [SMALL_STATE(263)] = 10617,
  [SMALL_STATE(264)] = 10646,
  [SMALL_STATE(265)] = 10685,
  [SMALL_STATE(266)] = 10716,
  [SMALL_STATE(267)] = 10745,
  [SMALL_STATE(268)] = 10776,
  [SMALL_STATE(269)] = 10807,
  [SMALL_STATE(270)] = 10838,
  [SMALL_STATE(271)] = 10865,
  [SMALL_STATE(272)] = 10892,
  [SMALL_STATE(273)] = 10923,
  [SMALL_STATE(274)] = 10954,
  [SMALL_STATE(275)] = 10983,
  [SMALL_STATE(276)] = 11012,
  [SMALL_STATE(277)] = 11043,
  [SMALL_STATE(278)] = 11082,
  [SMALL_STATE(279)] = 11111,
  [SMALL_STATE(280)] = 11140,
  [SMALL_STATE(281)] = 11169,
  [SMALL_STATE(282)] = 11198,
  [SMALL_STATE(283)] = 11225,
  [SMALL_STATE(284)] = 11258,
  [SMALL_STATE(285)] = 11287,
  [SMALL_STATE(286)] = 11316,
  [SMALL_STATE(287)] = 11345,
  [SMALL_STATE(288)] = 11372,
  [SMALL_STATE(289)] = 11399,
  [SMALL_STATE(290)] = 11426,
  [SMALL_STATE(291)] = 11457,
  [SMALL_STATE(292)] = 11488,
  [SMALL_STATE(293)] = 11517,
  [SMALL_STATE(294)] = 11548,
  [SMALL_STATE(295)] = 11577,
  [SMALL_STATE(296)] = 11608,
  [SMALL_STATE(297)] = 11637,
  [SMALL_STATE(298)] = 11664,
  [SMALL_STATE(299)] = 11695,
  [SMALL_STATE(300)] = 11726,
  [SMALL_STATE(301)] = 11753,
  [SMALL_STATE(302)] = 11782,
  [SMALL_STATE(303)] = 11811,
  [SMALL_STATE(304)] = 11842,
  [SMALL_STATE(305)] = 11871,
  [SMALL_STATE(306)] = 11900,
  [SMALL_STATE(307)] = 11931,
  [SMALL_STATE(308)] = 11962,
  [SMALL_STATE(309)] = 12001,
  [SMALL_STATE(310)] = 12030,
  [SMALL_STATE(311)] = 12066,
  [SMALL_STATE(312)] = 12092,
  [SMALL_STATE(313)] = 12128,
  [SMALL_STATE(314)] = 12156,
  [SMALL_STATE(315)] = 12184,
  [SMALL_STATE(316)] = 12212,
  [SMALL_STATE(317)] = 12238,
  [SMALL_STATE(318)] = 12268,
  [SMALL_STATE(319)] = 12304,
  [SMALL_STATE(320)] = 12340,
  [SMALL_STATE(321)] = 12376,
  [SMALL_STATE(322)] = 12412,
  [SMALL_STATE(323)] = 12438,
  [SMALL_STATE(324)] = 12474,
  [SMALL_STATE(325)] = 12502,
  [SMALL_STATE(326)] = 12538,
  [SMALL_STATE(327)] = 12574,
  [SMALL_STATE(328)] = 12610,
  [SMALL_STATE(329)] = 12646,
  [SMALL_STATE(330)] = 12682,
  [SMALL_STATE(331)] = 12718,
  [SMALL_STATE(332)] = 12744,
  [SMALL_STATE(333)] = 12780,
  [SMALL_STATE(334)] = 12816,
  [SMALL_STATE(335)] = 12844,
  [SMALL_STATE(336)] = 12880,
  [SMALL_STATE(337)] = 12908,
  [SMALL_STATE(338)] = 12940,
  [SMALL_STATE(339)] = 12966,
  [SMALL_STATE(340)] = 13002,
  [SMALL_STATE(341)] = 13028,
  [SMALL_STATE(342)] = 13064,
  [SMALL_STATE(343)] = 13100,
  [SMALL_STATE(344)] = 13126,
  [SMALL_STATE(345)] = 13152,
  [SMALL_STATE(346)] = 13178,
  [SMALL_STATE(347)] = 13204,
  [SMALL_STATE(348)] = 13232,
  [SMALL_STATE(349)] = 13268,
  [SMALL_STATE(350)] = 13304,
  [SMALL_STATE(351)] = 13332,
  [SMALL_STATE(352)] = 13358,
  [SMALL_STATE(353)] = 13394,
  [SMALL_STATE(354)] = 13430,
  [SMALL_STATE(355)] = 13466,
  [SMALL_STATE(356)] = 13494,
  [SMALL_STATE(357)] = 13530,
  [SMALL_STATE(358)] = 13558,
  [SMALL_STATE(359)] = 13584,
  [SMALL_STATE(360)] = 13612,
  [SMALL_STATE(361)] = 13638,
  [SMALL_STATE(362)] = 13664,
  [SMALL_STATE(363)] = 13700,
  [SMALL_STATE(364)] = 13736,
  [SMALL_STATE(365)] = 13772,
  [SMALL_STATE(366)] = 13797,
  [SMALL_STATE(367)] = 13822,
  [SMALL_STATE(368)] = 13847,
  [SMALL_STATE(369)] = 13872,
  [SMALL_STATE(370)] = 13897,
  [SMALL_STATE(371)] = 13922,
  [SMALL_STATE(372)] = 13947,
  [SMALL_STATE(373)] = 13972,
  [SMALL_STATE(374)] = 13997,
  [SMALL_STATE(375)] = 14022,
  [SMALL_STATE(376)] = 14047,
  [SMALL_STATE(377)] = 14072,
  [SMALL_STATE(378)] = 14097,
  [SMALL_STATE(379)] = 14122,
  [SMALL_STATE(380)] = 14147,
  [SMALL_STATE(381)] = 14172,
  [SMALL_STATE(382)] = 14197,
  [SMALL_STATE(383)] = 14222,
  [SMALL_STATE(384)] = 14247,
  [SMALL_STATE(385)] = 14272,
  [SMALL_STATE(386)] = 14297,
  [SMALL_STATE(387)] = 14322,
  [SMALL_STATE(388)] = 14347,
  [SMALL_STATE(389)] = 14374,
  [SMALL_STATE(390)] = 14399,
  [SMALL_STATE(391)] = 14424,
  [SMALL_STATE(392)] = 14449,
  [SMALL_STATE(393)] = 14474,
  [SMALL_STATE(394)] = 14499,
  [SMALL_STATE(395)] = 14524,
  [SMALL_STATE(396)] = 14549,
  [SMALL_STATE(397)] = 14574,
  [SMALL_STATE(398)] = 14599,
  [SMALL_STATE(399)] = 14624,
  [SMALL_STATE(400)] = 14649,
  [SMALL_STATE(401)] = 14674,
  [SMALL_STATE(402)] = 14699,
  [SMALL_STATE(403)] = 14724,
  [SMALL_STATE(404)] = 14749,
  [SMALL_STATE(405)] = 14774,
  [SMALL_STATE(406)] = 14799,
  [SMALL_STATE(407)] = 14824,
  [SMALL_STATE(408)] = 14848,
  [SMALL_STATE(409)] = 14872,
  [SMALL_STATE(410)] = 14913,
  [SMALL_STATE(411)] = 14943,
  [SMALL_STATE(412)] = 14977,
  [SMALL_STATE(413)] = 15011,
  [SMALL_STATE(414)] = 15036,
  [SMALL_STATE(415)] = 15059,
  [SMALL_STATE(416)] = 15093,
  [SMALL_STATE(417)] = 15125,
  [SMALL_STATE(418)] = 15159,
  [SMALL_STATE(419)] = 15179,
  [SMALL_STATE(420)] = 15201,
  [SMALL_STATE(421)] = 15235,
  [SMALL_STATE(422)] = 15266,
  [SMALL_STATE(423)] = 15285,
  [SMALL_STATE(424)] = 15313,
  [SMALL_STATE(425)] = 15341,
  [SMALL_STATE(426)] = 15369,
  [SMALL_STATE(427)] = 15397,
  [SMALL_STATE(428)] = 15425,
  [SMALL_STATE(429)] = 15453,
  [SMALL_STATE(430)] = 15481,
  [SMALL_STATE(431)] = 15501,
  [SMALL_STATE(432)] = 15529,
  [SMALL_STATE(433)] = 15557,
  [SMALL_STATE(434)] = 15579,
  [SMALL_STATE(435)] = 15607,
  [SMALL_STATE(436)] = 15635,
  [SMALL_STATE(437)] = 15663,
  [SMALL_STATE(438)] = 15691,
  [SMALL_STATE(439)] = 15719,
  [SMALL_STATE(440)] = 15747,
  [SMALL_STATE(441)] = 15775,
  [SMALL_STATE(442)] = 15803,
  [SMALL_STATE(443)] = 15825,
  [SMALL_STATE(444)] = 15845,
  [SMALL_STATE(445)] = 15873,
  [SMALL_STATE(446)] = 15901,
  [SMALL_STATE(447)] = 15929,
  [SMALL_STATE(448)] = 15957,
  [SMALL_STATE(449)] = 15985,
  [SMALL_STATE(450)] = 16013,
  [SMALL_STATE(451)] = 16041,
  [SMALL_STATE(452)] = 16069,
  [SMALL_STATE(453)] = 16097,
  [SMALL_STATE(454)] = 16125,
  [SMALL_STATE(455)] = 16153,
  [SMALL_STATE(456)] = 16181,
  [SMALL_STATE(457)] = 16209,
  [SMALL_STATE(458)] = 16237,
  [SMALL_STATE(459)] = 16265,
  [SMALL_STATE(460)] = 16293,
  [SMALL_STATE(461)] = 16321,
  [SMALL_STATE(462)] = 16349,
  [SMALL_STATE(463)] = 16377,
  [SMALL_STATE(464)] = 16405,
  [SMALL_STATE(465)] = 16433,
  [SMALL_STATE(466)] = 16458,
  [SMALL_STATE(467)] = 16475,
  [SMALL_STATE(468)] = 16494,
  [SMALL_STATE(469)] = 16515,
  [SMALL_STATE(470)] = 16540,
  [SMALL_STATE(471)] = 16565,
  [SMALL_STATE(472)] = 16584,
  [SMALL_STATE(473)] = 16605,
  [SMALL_STATE(474)] = 16630,
  [SMALL_STATE(475)] = 16651,
  [SMALL_STATE(476)] = 16670,
  [SMALL_STATE(477)] = 16695,
  [SMALL_STATE(478)] = 16712,
  [SMALL_STATE(479)] = 16733,
  [SMALL_STATE(480)] = 16752,
  [SMALL_STATE(481)] = 16777,
  [SMALL_STATE(482)] = 16795,
  [SMALL_STATE(483)] = 16811,
  [SMALL_STATE(484)] = 16831,
  [SMALL_STATE(485)] = 16851,
  [SMALL_STATE(486)] = 16873,
  [SMALL_STATE(487)] = 16893,
  [SMALL_STATE(488)] = 16909,
  [SMALL_STATE(489)] = 16931,
  [SMALL_STATE(490)] = 16953,
  [SMALL_STATE(491)] = 16975,
  [SMALL_STATE(492)] = 16995,
  [SMALL_STATE(493)] = 17015,
  [SMALL_STATE(494)] = 17035,
  [SMALL_STATE(495)] = 17057,
  [SMALL_STATE(496)] = 17079,
  [SMALL_STATE(497)] = 17097,
  [SMALL_STATE(498)] = 17117,
  [SMALL_STATE(499)] = 17137,
  [SMALL_STATE(500)] = 17155,
  [SMALL_STATE(501)] = 17177,
  [SMALL_STATE(502)] = 17197,
  [SMALL_STATE(503)] = 17217,
  [SMALL_STATE(504)] = 17237,
  [SMALL_STATE(505)] = 17259,
  [SMALL_STATE(506)] = 17279,
  [SMALL_STATE(507)] = 17299,
  [SMALL_STATE(508)] = 17319,
  [SMALL_STATE(509)] = 17341,
  [SMALL_STATE(510)] = 17363,
  [SMALL_STATE(511)] = 17383,
  [SMALL_STATE(512)] = 17401,
  [SMALL_STATE(513)] = 17421,
  [SMALL_STATE(514)] = 17439,
  [SMALL_STATE(515)] = 17459,
  [SMALL_STATE(516)] = 17475,
  [SMALL_STATE(517)] = 17493,
  [SMALL_STATE(518)] = 17513,
  [SMALL_STATE(519)] = 17533,
  [SMALL_STATE(520)] = 17553,
  [SMALL_STATE(521)] = 17571,
  [SMALL_STATE(522)] = 17591,
  [SMALL_STATE(523)] = 17611,
  [SMALL_STATE(524)] = 17629,
  [SMALL_STATE(525)] = 17649,
  [SMALL_STATE(526)] = 17669,
  [SMALL_STATE(527)] = 17685,
  [SMALL_STATE(528)] = 17701,
  [SMALL_STATE(529)] = 17723,
  [SMALL_STATE(530)] = 17743,
  [SMALL_STATE(531)] = 17763,
  [SMALL_STATE(532)] = 17785,
  [SMALL_STATE(533)] = 17803,
  [SMALL_STATE(534)] = 17825,
  [SMALL_STATE(535)] = 17845,
  [SMALL_STATE(536)] = 17863,
  [SMALL_STATE(537)] = 17885,
  [SMALL_STATE(538)] = 17907,
  [SMALL_STATE(539)] = 17929,
  [SMALL_STATE(540)] = 17951,
  [SMALL_STATE(541)] = 17966,
  [SMALL_STATE(542)] = 17985,
  [SMALL_STATE(543)] = 18004,
  [SMALL_STATE(544)] = 18023,
  [SMALL_STATE(545)] = 18040,
  [SMALL_STATE(546)] = 18055,
  [SMALL_STATE(547)] = 18074,
  [SMALL_STATE(548)] = 18093,
  [SMALL_STATE(549)] = 18108,
  [SMALL_STATE(550)] = 18123,
  [SMALL_STATE(551)] = 18142,
  [SMALL_STATE(552)] = 18161,
  [SMALL_STATE(553)] = 18180,
  [SMALL_STATE(554)] = 18195,
  [SMALL_STATE(555)] = 18210,
  [SMALL_STATE(556)] = 18227,
  [SMALL_STATE(557)] = 18246,
  [SMALL_STATE(558)] = 18261,
  [SMALL_STATE(559)] = 18276,
  [SMALL_STATE(560)] = 18293,
  [SMALL_STATE(561)] = 18308,
  [SMALL_STATE(562)] = 18325,
  [SMALL_STATE(563)] = 18344,
  [SMALL_STATE(564)] = 18361,
  [SMALL_STATE(565)] = 18376,
  [SMALL_STATE(566)] = 18395,
  [SMALL_STATE(567)] = 18414,
  [SMALL_STATE(568)] = 18433,
  [SMALL_STATE(569)] = 18450,
  [SMALL_STATE(570)] = 18465,
  [SMALL_STATE(571)] = 18484,
  [SMALL_STATE(572)] = 18501,
  [SMALL_STATE(573)] = 18518,
  [SMALL_STATE(574)] = 18535,
  [SMALL_STATE(575)] = 18552,
  [SMALL_STATE(576)] = 18571,
  [SMALL_STATE(577)] = 18590,
  [SMALL_STATE(578)] = 18607,
  [SMALL_STATE(579)] = 18626,
  [SMALL_STATE(580)] = 18640,
  [SMALL_STATE(581)] = 18654,
  [SMALL_STATE(582)] = 18670,
  [SMALL_STATE(583)] = 18686,
  [SMALL_STATE(584)] = 18700,
  [SMALL_STATE(585)] = 18716,
  [SMALL_STATE(586)] = 18732,
  [SMALL_STATE(587)] = 18748,
  [SMALL_STATE(588)] = 18764,
  [SMALL_STATE(589)] = 18780,
  [SMALL_STATE(590)] = 18794,
  [SMALL_STATE(591)] = 18810,
  [SMALL_STATE(592)] = 18826,
  [SMALL_STATE(593)] = 18840,
  [SMALL_STATE(594)] = 18856,
  [SMALL_STATE(595)] = 18872,
  [SMALL_STATE(596)] = 18886,
  [SMALL_STATE(597)] = 18902,
  [SMALL_STATE(598)] = 18915,
  [SMALL_STATE(599)] = 18928,
  [SMALL_STATE(600)] = 18941,
  [SMALL_STATE(601)] = 18954,
  [SMALL_STATE(602)] = 18967,
  [SMALL_STATE(603)] = 18980,
  [SMALL_STATE(604)] = 18993,
  [SMALL_STATE(605)] = 19006,
  [SMALL_STATE(606)] = 19019,
  [SMALL_STATE(607)] = 19032,
  [SMALL_STATE(608)] = 19045,
  [SMALL_STATE(609)] = 19058,
  [SMALL_STATE(610)] = 19071,
  [SMALL_STATE(611)] = 19084,
  [SMALL_STATE(612)] = 19097,
  [SMALL_STATE(613)] = 19110,
  [SMALL_STATE(614)] = 19123,
  [SMALL_STATE(615)] = 19136,
  [SMALL_STATE(616)] = 19149,
  [SMALL_STATE(617)] = 19162,
  [SMALL_STATE(618)] = 19175,
  [SMALL_STATE(619)] = 19188,
  [SMALL_STATE(620)] = 19201,
  [SMALL_STATE(621)] = 19214,
  [SMALL_STATE(622)] = 19227,
  [SMALL_STATE(623)] = 19240,
  [SMALL_STATE(624)] = 19253,
  [SMALL_STATE(625)] = 19266,
  [SMALL_STATE(626)] = 19279,
  [SMALL_STATE(627)] = 19292,
  [SMALL_STATE(628)] = 19305,
  [SMALL_STATE(629)] = 19318,
  [SMALL_STATE(630)] = 19331,
  [SMALL_STATE(631)] = 19344,
  [SMALL_STATE(632)] = 19357,
  [SMALL_STATE(633)] = 19370,
  [SMALL_STATE(634)] = 19383,
  [SMALL_STATE(635)] = 19396,
  [SMALL_STATE(636)] = 19409,
  [SMALL_STATE(637)] = 19422,
  [SMALL_STATE(638)] = 19435,
  [SMALL_STATE(639)] = 19448,
  [SMALL_STATE(640)] = 19461,
  [SMALL_STATE(641)] = 19474,
  [SMALL_STATE(642)] = 19487,
  [SMALL_STATE(643)] = 19500,
  [SMALL_STATE(644)] = 19513,
  [SMALL_STATE(645)] = 19526,
  [SMALL_STATE(646)] = 19539,
  [SMALL_STATE(647)] = 19552,
  [SMALL_STATE(648)] = 19565,
  [SMALL_STATE(649)] = 19578,
  [SMALL_STATE(650)] = 19591,
  [SMALL_STATE(651)] = 19604,
  [SMALL_STATE(652)] = 19617,
  [SMALL_STATE(653)] = 19630,
  [SMALL_STATE(654)] = 19643,
  [SMALL_STATE(655)] = 19656,
  [SMALL_STATE(656)] = 19669,
  [SMALL_STATE(657)] = 19682,
  [SMALL_STATE(658)] = 19695,
  [SMALL_STATE(659)] = 19699,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 4),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(618),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(615),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(610),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(600),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 4),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 4),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_rule, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(23),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_set_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_set_repeat1, 2), SHIFT_REPEAT(35),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 4, .production_id = 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_rule_set, 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_rule_set_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_rule_set_repeat1, 2), SHIFT_REPEAT(35),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_name, 1), REDUCE(sym_path, 1),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(31),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 4),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(584),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3, .production_id = 9),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3, .production_id = 9),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3, .production_id = 8),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3, .production_id = 8),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 2, .production_id = 5),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 2, .production_id = 5),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 4),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance, 4),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_definition, 2),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vs_filter_definition, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(622),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_logical_repeat1, 2),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_logical_repeat1, 2), SHIFT_REPEAT(146),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 5),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 2, .production_id = 4),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 2, .production_id = 4),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 3),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 4),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 4),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 5),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(645),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(646),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(620),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(635),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(628),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(601),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(602),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(604),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(613),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(614),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(639),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 5),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat2, 2),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat2, 2), SHIFT_REPEAT(141),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(632),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(648),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(630),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(631),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(605),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concept, 2),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concept, 2),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 3),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_code_string, 1), REDUCE(aux_sym_code_insert_rule_repeat1, 1),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_code_string, 1), REDUCE(aux_sym_code_insert_rule_repeat1, 1),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 1),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_string, 1),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 1), SHIFT(524),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_name, 1), REDUCE(sym_value, 1),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_name, 1), REDUCE(sym_value, 1),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ratio_part, 1),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(575),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(632),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(629),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(623),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(605),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2), SHIFT_REPEAT(424),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2), SHIFT_REPEAT(579),
  [403] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2), SHIFT_REPEAT(2),
  [406] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(82),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(82),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instance_repeat1, 2),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(632),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(619),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(605),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(621),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(540),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(97),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invariant, 4),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 1),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 2),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 5),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(632),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(609),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(636),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(617),
  [483] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(97),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ratio_part, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2), SHIFT_REPEAT(120),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 3),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mapping_rule, 3),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [503] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(122),
  [506] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(122),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_rule, 4),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_rule, 4),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(632),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(640),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(605),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_rule, 3),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_insert_rule_repeat1, 1),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_operator, 1),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vs_filter_operator, 1),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title, 3),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_rule, 3),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 4),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mapping_rule, 4),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(632),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(640),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(605),
  [553] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(144),
  [556] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(149),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 1),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 1),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [565] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(149),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 3),
  [570] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(161),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [575] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(176),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 5),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mapping_rule, 5),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 5),
  [594] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(179),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_valueset_repeat2, 2),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat2, 2), SHIFT_REPEAT(177),
  [602] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(206),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_string, 1),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [615] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(196),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat2, 2),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat2, 2), SHIFT_REPEAT(415),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [625] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(191),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 5),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instance_repeat2, 2),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat2, 2), SHIFT_REPEAT(421),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 5),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_repeat2, 2),
  [639] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat2, 2), SHIFT_REPEAT(417),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 5),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_metadata, 1),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 1),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(596),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_metadata, 1),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance_metadata, 1),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 1),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instance_repeat1, 1),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sd_metadata, 1),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 1),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parent, 3),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [676] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(242),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [681] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(246),
  [684] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(243),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 5),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [691] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(254),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [700] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(260),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concept, 3),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [707] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(259),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [712] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(252),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 7),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_cre_element_rule, 6),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 6),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_of, 3),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance_of, 3),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usage, 3),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usage, 3),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [733] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(304),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cs_metadata, 1),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 5),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 5),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 4),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 4),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 3),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 1),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_severity, 3),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath, 3),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_valueset, 3),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 7),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_string, 2),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2),
  [770] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2), SHIFT_REPEAT(338),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_valueset, 2),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 6),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 1),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_metadata, 1),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 1),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2),
  [787] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2), SHIFT_REPEAT(312),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invariant_metadata, 1),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 1),
  [794] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(305),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [803] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(302),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag, 1),
  [808] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(292),
  [811] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(285),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [822] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(266),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_rule, 4),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_rule, 4),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 4),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_type, 1),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_type, 1, .production_id = 7),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_only_rule, 4),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 3),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vs_filter_list_repeat1, 2),
  [853] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vs_filter_list_repeat1, 2), SHIFT_REPEAT(277),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_list, 2),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component_from, 2),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2),
  [870] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2), SHIFT_REPEAT(142),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contains_rule_repeat1, 2),
  [877] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contains_rule_repeat1, 2), SHIFT_REPEAT(308),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 3),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 3),
  [884] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(350),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_list, 1),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 1),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_system, 2),
  [895] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2), SHIFT_REPEAT(321),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_only_rule, 5),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 5),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_rule, 5),
  [904] = {.entry = {.count = 1, .reusable = false}}, SHIFT(569),
  [906] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cardinality_rule_repeat1, 1),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_rule, 4, .production_id = 6),
  [910] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_code_insert_rule, 3, .production_id = 1), REDUCE(sym_insert_rule, 3, .production_id = 1),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_value_rule, 4),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [919] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(388),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_insert_rule, 3, .production_id = 1),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_component, 2),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [932] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 3),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ratio, 3),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_insert_rule, 4, .production_id = 6),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component_from, 4),
  [944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_rule, 3, .production_id = 1),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_value, 1),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_definition, 3),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lr_rule, 1),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concept, 4),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component, 3),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 2),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_insert_rule, 3),
  [968] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_code_insert_rule, 3), REDUCE(sym_insert_rule, 3),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_rule_set_reference, 4),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_value_rule, 4),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_value_rule, 7),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strength, 3),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_rule, 4),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_rule, 3),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component, 2),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 6),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 3),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_insert_rule, 4),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_cre_element_rule, 7),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat2, 1),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sd_rule, 1),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_rule, 5),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_value_rule, 5),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instance_repeat2, 1),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_rule, 1),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_component, 4),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 8),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_valueset_repeat2, 1),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_rule, 1),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_caret_value_rule, 5),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat2, 1),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cs_rule, 1),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_repeat2, 1),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_entity_rule, 1),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_logical_repeat1, 1),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_set_repeat1, 1),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set_rule, 1),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_rule_set_repeat1, 1, .production_id = 2),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 1),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 5, .production_id = 3),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [1037] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(418),
  [1040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [1044] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2), SHIFT_REPEAT(448),
  [1047] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2), SHIFT_REPEAT(579),
  [1050] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2), SHIFT_REPEAT(2),
  [1053] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_rule_repeat1, 2), SHIFT_REPEAT(441),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_rule_repeat1, 2),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [1060] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [1066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [1070] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [1072] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(477),
  [1075] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [1077] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [1079] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [1081] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [1083] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [1085] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(466),
  [1088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [1090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [1092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [1094] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [1096] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [1098] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [1100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [1102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [1104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [1106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(527),
  [1109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(515),
  [1112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [1114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [1116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(482),
  [1119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(487),
  [1122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(569),
  [1125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [1131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(560),
  [1133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [1135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [1137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [1139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [1141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_param_rule_set_params_repeat1, 2),
  [1143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_param_rule_set_params_repeat1, 2), SHIFT_REPEAT(564),
  [1146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [1148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [1154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(574),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [1163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [1171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(545),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [1184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(560),
  [1187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(554),
  [1190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(564),
  [1192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(558),
  [1195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [1197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(544),
  [1200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param_rule_set_params, 1),
  [1202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(548),
  [1205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [1207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [1213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(595),
  [1215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(545),
  [1218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(540),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [1243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(583),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 2),
  [1251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 2), SHIFT_REPEAT(488),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2),
  [1262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(583),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reference_repeat1, 2),
  [1267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reference_repeat1, 2), SHIFT_REPEAT(528),
  [1270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_param_rule_set_params_repeat1, 1),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2), SHIFT_REPEAT(134),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(579),
  [1286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(595),
  [1289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [1291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(580),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 1),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 4),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_path, 2),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(633),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(658),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(624),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(659),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1394] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fsh_comment, 2),
  [1424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fsh_comment, 3),
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
