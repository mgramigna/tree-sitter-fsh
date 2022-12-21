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
#define STATE_COUNT 666
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
    [0] = alias_sym_code_system,
    [2] = alias_sym_code_value,
  },
  [7] = {
    [0] = alias_sym_code_system,
    [2] = alias_sym_concept_string,
  },
  [8] = {
    [3] = alias_sym_rule_set_reference,
  },
  [9] = {
    [0] = alias_sym_reference_type,
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
  [24] = 20,
  [25] = 2,
  [26] = 16,
  [27] = 27,
  [28] = 28,
  [29] = 23,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 32,
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
  [66] = 20,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 16,
  [73] = 73,
  [74] = 48,
  [75] = 2,
  [76] = 76,
  [77] = 77,
  [78] = 70,
  [79] = 47,
  [80] = 16,
  [81] = 20,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 23,
  [86] = 39,
  [87] = 37,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 36,
  [93] = 93,
  [94] = 35,
  [95] = 95,
  [96] = 95,
  [97] = 97,
  [98] = 98,
  [99] = 20,
  [100] = 16,
  [101] = 2,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 23,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 48,
  [114] = 37,
  [115] = 115,
  [116] = 116,
  [117] = 16,
  [118] = 20,
  [119] = 16,
  [120] = 20,
  [121] = 121,
  [122] = 122,
  [123] = 2,
  [124] = 47,
  [125] = 36,
  [126] = 35,
  [127] = 23,
  [128] = 39,
  [129] = 129,
  [130] = 35,
  [131] = 16,
  [132] = 20,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 36,
  [137] = 20,
  [138] = 37,
  [139] = 39,
  [140] = 140,
  [141] = 16,
  [142] = 48,
  [143] = 23,
  [144] = 47,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 2,
  [149] = 23,
  [150] = 140,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 20,
  [161] = 16,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 16,
  [168] = 23,
  [169] = 16,
  [170] = 20,
  [171] = 171,
  [172] = 172,
  [173] = 20,
  [174] = 174,
  [175] = 20,
  [176] = 176,
  [177] = 23,
  [178] = 16,
  [179] = 36,
  [180] = 180,
  [181] = 16,
  [182] = 20,
  [183] = 23,
  [184] = 20,
  [185] = 20,
  [186] = 35,
  [187] = 23,
  [188] = 76,
  [189] = 189,
  [190] = 190,
  [191] = 16,
  [192] = 20,
  [193] = 193,
  [194] = 16,
  [195] = 84,
  [196] = 196,
  [197] = 16,
  [198] = 20,
  [199] = 16,
  [200] = 23,
  [201] = 23,
  [202] = 16,
  [203] = 203,
  [204] = 16,
  [205] = 20,
  [206] = 20,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 20,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 20,
  [223] = 223,
  [224] = 36,
  [225] = 35,
  [226] = 223,
  [227] = 20,
  [228] = 16,
  [229] = 229,
  [230] = 16,
  [231] = 231,
  [232] = 23,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 23,
  [242] = 16,
  [243] = 20,
  [244] = 244,
  [245] = 23,
  [246] = 23,
  [247] = 16,
  [248] = 23,
  [249] = 20,
  [250] = 73,
  [251] = 251,
  [252] = 252,
  [253] = 20,
  [254] = 23,
  [255] = 16,
  [256] = 256,
  [257] = 23,
  [258] = 258,
  [259] = 259,
  [260] = 215,
  [261] = 16,
  [262] = 262,
  [263] = 23,
  [264] = 264,
  [265] = 223,
  [266] = 215,
  [267] = 16,
  [268] = 268,
  [269] = 23,
  [270] = 270,
  [271] = 20,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 35,
  [280] = 223,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 36,
  [286] = 215,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 16,
  [291] = 23,
  [292] = 292,
  [293] = 20,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 23,
  [300] = 300,
  [301] = 301,
  [302] = 262,
  [303] = 303,
  [304] = 23,
  [305] = 305,
  [306] = 23,
  [307] = 116,
  [308] = 115,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 16,
  [314] = 314,
  [315] = 122,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 20,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 23,
  [337] = 337,
  [338] = 338,
  [339] = 121,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 337,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 338,
  [348] = 348,
  [349] = 312,
  [350] = 350,
  [351] = 351,
  [352] = 337,
  [353] = 353,
  [354] = 287,
  [355] = 337,
  [356] = 356,
  [357] = 338,
  [358] = 23,
  [359] = 359,
  [360] = 360,
  [361] = 282,
  [362] = 312,
  [363] = 338,
  [364] = 283,
  [365] = 321,
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
  [388] = 388,
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
  [402] = 23,
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
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 16,
  [418] = 20,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 23,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 428,
  [430] = 427,
  [431] = 428,
  [432] = 428,
  [433] = 427,
  [434] = 428,
  [435] = 435,
  [436] = 427,
  [437] = 16,
  [438] = 427,
  [439] = 428,
  [440] = 427,
  [441] = 20,
  [442] = 428,
  [443] = 427,
  [444] = 20,
  [445] = 16,
  [446] = 427,
  [447] = 428,
  [448] = 428,
  [449] = 449,
  [450] = 427,
  [451] = 428,
  [452] = 452,
  [453] = 453,
  [454] = 427,
  [455] = 455,
  [456] = 428,
  [457] = 427,
  [458] = 458,
  [459] = 459,
  [460] = 428,
  [461] = 428,
  [462] = 427,
  [463] = 428,
  [464] = 427,
  [465] = 428,
  [466] = 427,
  [467] = 427,
  [468] = 427,
  [469] = 427,
  [470] = 428,
  [471] = 428,
  [472] = 16,
  [473] = 473,
  [474] = 20,
  [475] = 475,
  [476] = 20,
  [477] = 16,
  [478] = 478,
  [479] = 16,
  [480] = 23,
  [481] = 481,
  [482] = 23,
  [483] = 483,
  [484] = 20,
  [485] = 16,
  [486] = 20,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 496,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 496,
  [504] = 20,
  [505] = 16,
  [506] = 501,
  [507] = 507,
  [508] = 23,
  [509] = 509,
  [510] = 496,
  [511] = 511,
  [512] = 501,
  [513] = 496,
  [514] = 501,
  [515] = 515,
  [516] = 496,
  [517] = 501,
  [518] = 518,
  [519] = 519,
  [520] = 496,
  [521] = 521,
  [522] = 501,
  [523] = 490,
  [524] = 23,
  [525] = 16,
  [526] = 20,
  [527] = 23,
  [528] = 16,
  [529] = 20,
  [530] = 16,
  [531] = 23,
  [532] = 492,
  [533] = 20,
  [534] = 534,
  [535] = 501,
  [536] = 536,
  [537] = 16,
  [538] = 20,
  [539] = 16,
  [540] = 20,
  [541] = 16,
  [542] = 20,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 22,
  [549] = 23,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 23,
  [555] = 555,
  [556] = 281,
  [557] = 557,
  [558] = 23,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 562,
  [567] = 20,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 2,
  [572] = 547,
  [573] = 23,
  [574] = 23,
  [575] = 16,
  [576] = 23,
  [577] = 577,
  [578] = 20,
  [579] = 579,
  [580] = 20,
  [581] = 16,
  [582] = 16,
  [583] = 583,
  [584] = 23,
  [585] = 585,
  [586] = 586,
  [587] = 23,
  [588] = 588,
  [589] = 23,
  [590] = 590,
  [591] = 588,
  [592] = 592,
  [593] = 593,
  [594] = 594,
  [595] = 595,
  [596] = 23,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 600,
  [601] = 601,
  [602] = 590,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 606,
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 611,
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
  [623] = 607,
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
  [637] = 637,
  [638] = 638,
  [639] = 639,
  [640] = 640,
  [641] = 641,
  [642] = 642,
  [643] = 607,
  [644] = 644,
  [645] = 621,
  [646] = 646,
  [647] = 647,
  [648] = 639,
  [649] = 649,
  [650] = 650,
  [651] = 619,
  [652] = 607,
  [653] = 621,
  [654] = 607,
  [655] = 607,
  [656] = 607,
  [657] = 607,
  [658] = 607,
  [659] = 607,
  [660] = 607,
  [661] = 607,
  [662] = 607,
  [663] = 607,
  [664] = 664,
  [665] = 665,
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
      if (eof) ADVANCE(398);
      if (lookahead == '"') ADVANCE(589);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '\'') ADVANCE(611);
      if (lookahead == '(') ADVANCE(428);
      if (lookahead == ')') ADVANCE(430);
      if (lookahead == '*') ADVANCE(587);
      if (lookahead == '+') ADVANCE(334);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(626);
      if (lookahead == ':') ADVANCE(400);
      if (lookahead == '=') ADVANCE(401);
      if (lookahead == '?') ADVANCE(2);
      if (lookahead == 'A') ADVANCE(192);
      if (lookahead == 'C') ADVANCE(73);
      if (lookahead == 'D') ADVANCE(583);
      if (lookahead == 'E') ADVANCE(322);
      if (lookahead == 'I') ADVANCE(104);
      if (lookahead == 'L') ADVANCE(233);
      if (lookahead == 'M') ADVANCE(61);
      if (lookahead == 'N') ADVANCE(582);
      if (lookahead == 'P') ADVANCE(82);
      if (lookahead == 'R') ADVANCE(115);
      if (lookahead == 'S') ADVANCE(66);
      if (lookahead == 'T') ADVANCE(610);
      if (lookahead == 'U') ADVANCE(275);
      if (lookahead == 'V') ADVANCE(72);
      if (lookahead == 'X') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(333);
      if (lookahead == '^') ADVANCE(578);
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
      if (lookahead == '|') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(584);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(357)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(38)
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(356);
      if (sym_regex_pattern_character_set_1(lookahead)) ADVANCE(627);
      if (lookahead != 0) ADVANCE(628);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(623);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(589);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'C') ADVANCE(535);
      if (lookahead == 'D') ADVANCE(583);
      if (lookahead == 'M') ADVANCE(528);
      if (lookahead == 'N') ADVANCE(582);
      if (lookahead == 'R') ADVANCE(548);
      if (lookahead == 'S') ADVANCE(530);
      if (lookahead == 'T') ADVANCE(531);
      if (lookahead == 'c') ADVANCE(562);
      if (lookahead == 'f') ADVANCE(537);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 's') ADVANCE(573);
      if (lookahead == 't') ADVANCE(564);
      if (lookahead == 'v') ADVANCE(540);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(575);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(508);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(590);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(588);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '/') ADVANCE(489);
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
          lookahead == 65279) ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(588);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == '?') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(535);
      if (lookahead == 'D') ADVANCE(583);
      if (lookahead == 'M') ADVANCE(528);
      if (lookahead == 'N') ADVANCE(582);
      if (lookahead == 'R') ADVANCE(548);
      if (lookahead == 'S') ADVANCE(530);
      if (lookahead == 'T') ADVANCE(531);
      if (lookahead == 'c') ADVANCE(562);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 'o') ADVANCE(563);
      if (lookahead == 's') ADVANCE(573);
      if (lookahead == 'v') ADVANCE(540);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(575);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(507);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(588);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'a') ADVANCE(554);
      if (lookahead == 'f') ADVANCE(566);
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
          lookahead == 65279) ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(588);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'a') ADVANCE(554);
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
          lookahead == 65279) ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(588);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'h') ADVANCE(568);
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
          lookahead == 65279) ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(588);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'o') ADVANCE(563);
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
          lookahead == 65279) ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(588);
      if (lookahead == '/') ADVANCE(489);
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
          lookahead == 65279) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(588);
      if (lookahead == '/') ADVANCE(591);
      if (lookahead == '\\') ADVANCE(312);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(592);
      if (lookahead != 0) ADVANCE(593);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '/') ADVANCE(591);
      if (lookahead == '\\') ADVANCE(312);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(592);
      if (lookahead != 0) ADVANCE(593);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '+') ADVANCE(575);
      if (lookahead == '-') ADVANCE(526);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'D') ADVANCE(583);
      if (lookahead == 'M') ADVANCE(528);
      if (lookahead == 'N') ADVANCE(582);
      if (lookahead == 'S') ADVANCE(530);
      if (lookahead == 'T') ADVANCE(531);
      if (lookahead == '^') ADVANCE(578);
      if (lookahead == 'c') ADVANCE(562);
      if (lookahead == 'e') ADVANCE(570);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead == 'o') ADVANCE(541);
      if (lookahead == 's') ADVANCE(573);
      if (lookahead == 'v') ADVANCE(540);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(507);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == '^') ADVANCE(578);
      if (lookahead == 'c') ADVANCE(562);
      if (lookahead == 'e') ADVANCE(570);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead == 's') ADVANCE(573);
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
          lookahead == 65279) ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == '^') ADVANCE(578);
      if (lookahead == 'i') ADVANCE(555);
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
          lookahead == 65279) ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'c') ADVANCE(562);
      if (lookahead == 'h') ADVANCE(568);
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
          lookahead == 65279) ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(555);
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
          lookahead == 65279) ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'h') ADVANCE(568);
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
          lookahead == 65279) ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '/') ADVANCE(489);
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
          lookahead == 65279) ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(611);
      if (lookahead == '/') ADVANCE(613);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(612);
      END_STATE();
    case 23:
      if (lookahead == '(') ADVANCE(428);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
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
          lookahead == 65279) ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 24:
      if (lookahead == ')') ADVANCE(430);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == '\\') ADVANCE(574);
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
          lookahead == 65279) ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 25:
      if (lookahead == ')') ADVANCE(430);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'o') ADVANCE(563);
      if (lookahead == '|') ADVANCE(621);
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
          lookahead == 65279) ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 26:
      if (lookahead == ')') ADVANCE(430);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'o') ADVANCE(563);
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
          lookahead == 65279) ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(587);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == '?') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(535);
      if (lookahead == 'D') ADVANCE(583);
      if (lookahead == 'M') ADVANCE(528);
      if (lookahead == 'N') ADVANCE(582);
      if (lookahead == 'R') ADVANCE(548);
      if (lookahead == 'S') ADVANCE(530);
      if (lookahead == 'T') ADVANCE(531);
      if (lookahead == 'c') ADVANCE(561);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 's') ADVANCE(573);
      if (lookahead == 'v') ADVANCE(540);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(575);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(506);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(635);
      if (lookahead == '/') ADVANCE(629);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(638);
      if (lookahead == '/') ADVANCE(31);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(29);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(638);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(636);
      if (lookahead == '/') ADVANCE(630);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(525);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead == 's') ADVANCE(573);
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
          lookahead == 65279) ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(586);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(503);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'n') ADVANCE(533);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(34)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(503);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(35)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
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
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == '=') ADVANCE(401);
      if (lookahead == 'h') ADVANCE(568);
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
          lookahead == 65279) ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 40:
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == '=') ADVANCE(401);
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
          lookahead == 65279) ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 41:
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == '?') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(535);
      if (lookahead == 'D') ADVANCE(583);
      if (lookahead == 'M') ADVANCE(528);
      if (lookahead == 'N') ADVANCE(582);
      if (lookahead == 'R') ADVANCE(548);
      if (lookahead == 'S') ADVANCE(530);
      if (lookahead == 'T') ADVANCE(531);
      if (lookahead == 'c') ADVANCE(562);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 's') ADVANCE(573);
      if (lookahead == 'v') ADVANCE(540);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(575);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(41)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(507);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 42:
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == '?') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(535);
      if (lookahead == 'D') ADVANCE(583);
      if (lookahead == 'M') ADVANCE(528);
      if (lookahead == 'N') ADVANCE(582);
      if (lookahead == 'R') ADVANCE(548);
      if (lookahead == 'S') ADVANCE(530);
      if (lookahead == 'T') ADVANCE(531);
      if (lookahead == 'c') ADVANCE(561);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 's') ADVANCE(573);
      if (lookahead == 'v') ADVANCE(540);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(575);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(42)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(507);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 43:
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == '?') ADVANCE(447);
      if (lookahead == 'D') ADVANCE(583);
      if (lookahead == 'M') ADVANCE(528);
      if (lookahead == 'N') ADVANCE(582);
      if (lookahead == 'S') ADVANCE(530);
      if (lookahead == 'T') ADVANCE(531);
      if (lookahead == 'a') ADVANCE(554);
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
          lookahead == 65279) ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 44:
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'C') ADVANCE(535);
      if (lookahead == 'D') ADVANCE(583);
      if (lookahead == 'M') ADVANCE(528);
      if (lookahead == 'N') ADVANCE(582);
      if (lookahead == 'R') ADVANCE(548);
      if (lookahead == 'S') ADVANCE(530);
      if (lookahead == 'T') ADVANCE(531);
      if (lookahead == 'c') ADVANCE(562);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 's') ADVANCE(573);
      if (lookahead == 'v') ADVANCE(540);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(575);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(44)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(507);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 45:
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'D') ADVANCE(583);
      if (lookahead == 'M') ADVANCE(528);
      if (lookahead == 'N') ADVANCE(582);
      if (lookahead == 'S') ADVANCE(530);
      if (lookahead == 'T') ADVANCE(531);
      if (lookahead == '^') ADVANCE(578);
      if (lookahead == 'c') ADVANCE(562);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead == 'o') ADVANCE(541);
      if (lookahead == 's') ADVANCE(573);
      if (lookahead == 'v') ADVANCE(540);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(575);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(45)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(507);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 46:
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'D') ADVANCE(583);
      if (lookahead == 'M') ADVANCE(528);
      if (lookahead == 'N') ADVANCE(582);
      if (lookahead == 'S') ADVANCE(530);
      if (lookahead == 'T') ADVANCE(531);
      if (lookahead == 'c') ADVANCE(562);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 's') ADVANCE(573);
      if (lookahead == 'v') ADVANCE(540);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(575);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(46)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(507);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 47:
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'D') ADVANCE(546);
      if (lookahead == 'E') ADVANCE(571);
      if (lookahead == 'S') ADVANCE(545);
      if (lookahead == 'X') ADVANCE(527);
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
          lookahead == 65279) ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 48:
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'D') ADVANCE(546);
      if (lookahead == 'I') ADVANCE(543);
      if (lookahead == 'P') ADVANCE(538);
      if (lookahead == 'T') ADVANCE(550);
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
          lookahead == 65279) ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 49:
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == '\\') ADVANCE(574);
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
          lookahead == 65279) ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 50:
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead == 's') ADVANCE(573);
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
          lookahead == 65279) ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 51:
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 's') ADVANCE(573);
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
          lookahead == 65279) ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 52:
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'h') ADVANCE(568);
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
          lookahead == 65279) ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
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
      if (lookahead == '>') ADVANCE(436);
      END_STATE();
    case 58:
      if (lookahead == '>') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(598);
      END_STATE();
    case 59:
      if (lookahead == 'P') ADVANCE(77);
      END_STATE();
    case 60:
      if (lookahead == 'R') ADVANCE(156);
      END_STATE();
    case 61:
      if (lookahead == 'S') ADVANCE(579);
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
      if (lookahead == 'U') ADVANCE(580);
      END_STATE();
    case 66:
      if (lookahead == 'U') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(321);
      if (lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 67:
      if (lookahead == 'U') ADVANCE(581);
      END_STATE();
    case 68:
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == ']') ADVANCE(628);
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
      if (lookahead == 'r') ADVANCE(435);
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
      if (lookahead == 'd') ADVANCE(415);
      if (lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(432);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(622);
      END_STATE();
    case 107:
      if (lookahead == 'd') ADVANCE(618);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(616);
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
      if (lookahead == 'e') ADVANCE(443);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(440);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(615);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(619);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(617);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(425);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(405);
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
      if (lookahead == 'f') ADVANCE(416);
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
      if (lookahead == 'g') ADVANCE(409);
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
      if (lookahead == 'h') ADVANCE(423);
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
      if (lookahead == 'l') ADVANCE(410);
      END_STATE();
    case 194:
      if (lookahead == 'l') ADVANCE(620);
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
      if (lookahead == 'm') ADVANCE(427);
      END_STATE();
    case 208:
      if (lookahead == 'm') ADVANCE(441);
      END_STATE();
    case 209:
      if (lookahead == 'm') ADVANCE(408);
      END_STATE();
    case 210:
      if (lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(403);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(414);
      END_STATE();
    case 214:
      if (lookahead == 'n') ADVANCE(413);
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
      if (lookahead == 'r') ADVANCE(435);
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
      if (lookahead == 's') ADVANCE(399);
      END_STATE();
    case 272:
      if (lookahead == 's') ADVANCE(439);
      END_STATE();
    case 273:
      if (lookahead == 's') ADVANCE(433);
      END_STATE();
    case 274:
      if (lookahead == 's') ADVANCE(431);
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
      if (lookahead == 't') ADVANCE(417);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(420);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(426);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(412);
      END_STATE();
    case 294:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(407);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(442);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(404);
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
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(596);
      if (lookahead != 0) ADVANCE(594);
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
      if (lookahead == 'y') ADVANCE(434);
      END_STATE();
    case 326:
      if (lookahead == 'y') ADVANCE(429);
      END_STATE();
    case 327:
      if (lookahead == 'y') ADVANCE(418);
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
      if (lookahead == '}') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(332);
      END_STATE();
    case 333:
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(624);
      END_STATE();
    case 334:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(598);
      END_STATE();
    case 335:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      END_STATE();
    case 336:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(604);
      END_STATE();
    case 337:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(607);
      END_STATE();
    case 338:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      END_STATE();
    case 339:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(605);
      END_STATE();
    case 340:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      END_STATE();
    case 341:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(602);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(606);
      END_STATE();
    case 350:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      END_STATE();
    case 351:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(594);
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
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(577);
      END_STATE();
    case 355:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 356:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(628);
      END_STATE();
    case 357:
      if (eof) ADVANCE(398);
      if (lookahead == '"') ADVANCE(589);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '\'') ADVANCE(611);
      if (lookahead == '(') ADVANCE(428);
      if (lookahead == ')') ADVANCE(430);
      if (lookahead == '*') ADVANCE(587);
      if (lookahead == '+') ADVANCE(334);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(625);
      if (lookahead == ':') ADVANCE(400);
      if (lookahead == '=') ADVANCE(401);
      if (lookahead == '?') ADVANCE(2);
      if (lookahead == 'A') ADVANCE(192);
      if (lookahead == 'C') ADVANCE(73);
      if (lookahead == 'D') ADVANCE(583);
      if (lookahead == 'E') ADVANCE(322);
      if (lookahead == 'I') ADVANCE(104);
      if (lookahead == 'L') ADVANCE(233);
      if (lookahead == 'M') ADVANCE(61);
      if (lookahead == 'N') ADVANCE(582);
      if (lookahead == 'P') ADVANCE(82);
      if (lookahead == 'R') ADVANCE(115);
      if (lookahead == 'S') ADVANCE(66);
      if (lookahead == 'T') ADVANCE(610);
      if (lookahead == 'U') ADVANCE(275);
      if (lookahead == 'V') ADVANCE(72);
      if (lookahead == 'X') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(333);
      if (lookahead == '^') ADVANCE(578);
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
      if (lookahead == '|') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(584);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(357)
      END_STATE();
    case 358:
      if (eof) ADVANCE(398);
      if (lookahead == '"') ADVANCE(589);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(625);
      if (lookahead == '=') ADVANCE(401);
      if (lookahead == '?') ADVANCE(2);
      if (lookahead == 'A') ADVANCE(192);
      if (lookahead == 'C') ADVANCE(232);
      if (lookahead == 'D') ADVANCE(583);
      if (lookahead == 'E') ADVANCE(324);
      if (lookahead == 'I') ADVANCE(231);
      if (lookahead == 'L') ADVANCE(233);
      if (lookahead == 'M') ADVANCE(61);
      if (lookahead == 'N') ADVANCE(582);
      if (lookahead == 'P') ADVANCE(255);
      if (lookahead == 'R') ADVANCE(151);
      if (lookahead == 'S') ADVANCE(65);
      if (lookahead == 'T') ADVANCE(67);
      if (lookahead == 'V') ADVANCE(72);
      if (lookahead == '^') ADVANCE(578);
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'c') ADVANCE(241);
      if (lookahead == 'f') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(226);
      if (lookahead == 'o') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(585);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(358)
      END_STATE();
    case 359:
      if (eof) ADVANCE(398);
      if (lookahead == '"') ADVANCE(589);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == '^') ADVANCE(578);
      if (lookahead == 'a') ADVANCE(554);
      if (lookahead == 'f') ADVANCE(566);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(555);
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
          lookahead == 65279) ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 360:
      if (eof) ADVANCE(398);
      if (lookahead == '"') ADVANCE(589);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == '^') ADVANCE(578);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(555);
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
          lookahead == 65279) ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 361:
      if (eof) ADVANCE(398);
      if (lookahead == '"') ADVANCE(589);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(555);
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
          lookahead == 65279) ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 362:
      if (eof) ADVANCE(398);
      if (lookahead == '"') ADVANCE(588);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '(') ADVANCE(428);
      if (lookahead == ')') ADVANCE(430);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(626);
      if (lookahead == ':') ADVANCE(400);
      if (lookahead == '=') ADVANCE(401);
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
      if (lookahead == '^') ADVANCE(578);
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'f') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(226);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(251);
      if (lookahead == 'w') ADVANCE(177);
      if (lookahead == '|') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(585);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(363)
      END_STATE();
    case 363:
      if (eof) ADVANCE(398);
      if (lookahead == '"') ADVANCE(588);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '(') ADVANCE(428);
      if (lookahead == ')') ADVANCE(430);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(400);
      if (lookahead == '=') ADVANCE(401);
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
      if (lookahead == '^') ADVANCE(578);
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'f') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(226);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(251);
      if (lookahead == 'w') ADVANCE(177);
      if (lookahead == '|') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(585);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(363)
      END_STATE();
    case 364:
      if (eof) ADVANCE(398);
      if (lookahead == '"') ADVANCE(588);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(625);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == 'a') ADVANCE(554);
      if (lookahead == 'f') ADVANCE(537);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 't') ADVANCE(564);
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
          lookahead == 65279) ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 365:
      if (eof) ADVANCE(398);
      if (lookahead == '"') ADVANCE(588);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == 'h') ADVANCE(568);
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
          lookahead == 65279) ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 366:
      if (eof) ADVANCE(398);
      if (lookahead == '"') ADVANCE(588);
      if (lookahead == '(') ADVANCE(428);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == ':') ADVANCE(400);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
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
          lookahead == 65279) ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 367:
      if (eof) ADVANCE(398);
      if (lookahead == '"') ADVANCE(588);
      if (lookahead == '(') ADVANCE(428);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
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
          lookahead == 65279) ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 368:
      if (eof) ADVANCE(398);
      if (lookahead == '"') ADVANCE(588);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == ':') ADVANCE(400);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
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
          lookahead == 65279) ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 369:
      if (eof) ADVANCE(398);
      if (lookahead == '"') ADVANCE(588);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == 'a') ADVANCE(554);
      if (lookahead == 'f') ADVANCE(566);
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
          lookahead == 65279) ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 370:
      if (eof) ADVANCE(398);
      if (lookahead == '"') ADVANCE(588);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == 'a') ADVANCE(554);
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
          lookahead == 65279) ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 371:
      if (eof) ADVANCE(398);
      if (lookahead == '"') ADVANCE(588);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
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
          lookahead == 65279) ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 372:
      if (eof) ADVANCE(398);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '\'') ADVANCE(611);
      if (lookahead == '(') ADVANCE(428);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == ':') ADVANCE(400);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == 'h') ADVANCE(568);
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
          lookahead == 65279) ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 373:
      if (eof) ADVANCE(398);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '\'') ADVANCE(611);
      if (lookahead == '(') ADVANCE(428);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == 'h') ADVANCE(568);
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
          lookahead == 65279) ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 374:
      if (eof) ADVANCE(398);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '\'') ADVANCE(611);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == ':') ADVANCE(400);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == 'h') ADVANCE(568);
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
          lookahead == 65279) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 375:
      if (eof) ADVANCE(398);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '\'') ADVANCE(611);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == 'h') ADVANCE(568);
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
          lookahead == 65279) ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 376:
      if (eof) ADVANCE(398);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '(') ADVANCE(428);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
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
          lookahead == 65279) ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 377:
      if (eof) ADVANCE(398);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '-') ADVANCE(525);
      if (lookahead == '.') ADVANCE(503);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == '=') ADVANCE(401);
      if (lookahead == '?') ADVANCE(447);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'D') ADVANCE(583);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'N') ADVANCE(582);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'S') ADVANCE(530);
      if (lookahead == 'T') ADVANCE(531);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == '^') ADVANCE(578);
      if (lookahead == 'a') ADVANCE(554);
      if (lookahead == 'c') ADVANCE(560);
      if (lookahead == 'f') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead == 'o') ADVANCE(542);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(377)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 378:
      if (eof) ADVANCE(398);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == 'h') ADVANCE(568);
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
          lookahead == 65279) ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 379:
      if (eof) ADVANCE(398);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
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
          lookahead == 65279) ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 380:
      if (eof) ADVANCE(398);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(380)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 381:
      if (eof) ADVANCE(398);
      if (lookahead == '(') ADVANCE(428);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(192);
      if (lookahead == 'C') ADVANCE(232);
      if (lookahead == 'E') ADVANCE(324);
      if (lookahead == 'I') ADVANCE(231);
      if (lookahead == 'L') ADVANCE(233);
      if (lookahead == 'M') ADVANCE(69);
      if (lookahead == 'P') ADVANCE(255);
      if (lookahead == 'R') ADVANCE(151);
      if (lookahead == 'T') ADVANCE(609);
      if (lookahead == 'V') ADVANCE(72);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(598);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(381)
      END_STATE();
    case 382:
      if (eof) ADVANCE(398);
      if (lookahead == '(') ADVANCE(428);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(382)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 383:
      if (eof) ADVANCE(398);
      if (lookahead == '*') ADVANCE(587);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '?') ADVANCE(2);
      if (lookahead == 'A') ADVANCE(192);
      if (lookahead == 'C') ADVANCE(232);
      if (lookahead == 'D') ADVANCE(583);
      if (lookahead == 'E') ADVANCE(324);
      if (lookahead == 'I') ADVANCE(231);
      if (lookahead == 'L') ADVANCE(233);
      if (lookahead == 'M') ADVANCE(61);
      if (lookahead == 'N') ADVANCE(582);
      if (lookahead == 'P') ADVANCE(255);
      if (lookahead == 'R') ADVANCE(151);
      if (lookahead == 'S') ADVANCE(65);
      if (lookahead == 'T') ADVANCE(67);
      if (lookahead == 'V') ADVANCE(72);
      if (lookahead == 'a') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(585);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(383)
      END_STATE();
    case 384:
      if (eof) ADVANCE(398);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '-') ADVANCE(525);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(384)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 385:
      if (eof) ADVANCE(398);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '.') ADVANCE(503);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == '=') ADVANCE(401);
      if (lookahead == '?') ADVANCE(447);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'D') ADVANCE(583);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'N') ADVANCE(582);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'S') ADVANCE(530);
      if (lookahead == 'T') ADVANCE(531);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == '^') ADVANCE(578);
      if (lookahead == 'a') ADVANCE(554);
      if (lookahead == 'c') ADVANCE(560);
      if (lookahead == 'f') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead == 'o') ADVANCE(542);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(385)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 386:
      if (eof) ADVANCE(398);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == '=') ADVANCE(401);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == 'i') ADVANCE(555);
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
          lookahead == 65279) ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 387:
      if (eof) ADVANCE(398);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'D') ADVANCE(546);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(544);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(539);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'T') ADVANCE(550);
      if (lookahead == 'V') ADVANCE(534);
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
          lookahead == 65279) ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 388:
      if (eof) ADVANCE(398);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'D') ADVANCE(546);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(544);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'S') ADVANCE(559);
      if (lookahead == 'T') ADVANCE(536);
      if (lookahead == 'V') ADVANCE(534);
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
          lookahead == 65279) ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 389:
      if (eof) ADVANCE(398);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'D') ADVANCE(546);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(544);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'T') ADVANCE(550);
      if (lookahead == 'V') ADVANCE(534);
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
          lookahead == 65279) ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 390:
      if (eof) ADVANCE(398);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'D') ADVANCE(546);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(552);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'T') ADVANCE(550);
      if (lookahead == 'U') ADVANCE(567);
      if (lookahead == 'V') ADVANCE(534);
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
          lookahead == 65279) ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 391:
      if (eof) ADVANCE(398);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == 'a') ADVANCE(554);
      if (lookahead == 'w') ADVANCE(549);
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
          lookahead == 65279) ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 392:
      if (eof) ADVANCE(398);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == 'a') ADVANCE(554);
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
          lookahead == 65279) ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 393:
      if (eof) ADVANCE(398);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == 'o') ADVANCE(563);
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
          lookahead == 65279) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 394:
      if (eof) ADVANCE(398);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == 'w') ADVANCE(549);
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
          lookahead == 65279) ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 395:
      if (eof) ADVANCE(398);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
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
          lookahead == 65279) ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 396:
      if (eof) ADVANCE(398);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'D') ADVANCE(546);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'S') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == 'X') ADVANCE(527);
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
          lookahead == 65279) ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 397:
      if (eof) ADVANCE(398);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(397)
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(446);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_Alias);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_Profile);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_Extension);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_Invariant);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_Instance);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_Instance);
      if (lookahead == 'O') ADVANCE(166);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_ValueSet);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_CodeSystem);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_Mapping);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_Logical);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_Resource);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_RuleSet);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_Description);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_Expression);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_Id);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_InstanceOf);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_Parent);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_Severity);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_Source);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_Target);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_Title);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_Usage);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_XPath);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_contentReference);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_insert);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_exactly);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_obeys);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_exclude);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_codes);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_valueset);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '!') ADVANCE(623);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(589);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == '^') ADVANCE(578);
      if (lookahead == 'a') ADVANCE(554);
      if (lookahead == 'f') ADVANCE(566);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(555);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(589);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == '^') ADVANCE(578);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(555);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(589);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(555);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(589);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'C') ADVANCE(535);
      if (lookahead == 'D') ADVANCE(583);
      if (lookahead == 'M') ADVANCE(528);
      if (lookahead == 'N') ADVANCE(582);
      if (lookahead == 'R') ADVANCE(548);
      if (lookahead == 'S') ADVANCE(530);
      if (lookahead == 'T') ADVANCE(531);
      if (lookahead == 'c') ADVANCE(562);
      if (lookahead == 'f') ADVANCE(537);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 's') ADVANCE(573);
      if (lookahead == 't') ADVANCE(564);
      if (lookahead == 'v') ADVANCE(540);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(508);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(588);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(625);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == 'a') ADVANCE(554);
      if (lookahead == 'f') ADVANCE(537);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 't') ADVANCE(564);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(588);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == 'h') ADVANCE(568);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(588);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '/') ADVANCE(489);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(588);
      if (lookahead == '(') ADVANCE(428);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == ':') ADVANCE(400);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(588);
      if (lookahead == '(') ADVANCE(428);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(588);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == ':') ADVANCE(400);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(588);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == 'a') ADVANCE(554);
      if (lookahead == 'f') ADVANCE(566);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(588);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == 'a') ADVANCE(554);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(588);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(588);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == '?') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(535);
      if (lookahead == 'D') ADVANCE(583);
      if (lookahead == 'M') ADVANCE(528);
      if (lookahead == 'N') ADVANCE(582);
      if (lookahead == 'R') ADVANCE(548);
      if (lookahead == 'S') ADVANCE(530);
      if (lookahead == 'T') ADVANCE(531);
      if (lookahead == 'c') ADVANCE(562);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 'o') ADVANCE(563);
      if (lookahead == 's') ADVANCE(573);
      if (lookahead == 'v') ADVANCE(540);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(507);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(588);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'a') ADVANCE(554);
      if (lookahead == 'f') ADVANCE(566);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(588);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'a') ADVANCE(554);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(588);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'h') ADVANCE(568);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(588);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'o') ADVANCE(563);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(588);
      if (lookahead == '/') ADVANCE(489);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '\'') ADVANCE(611);
      if (lookahead == '(') ADVANCE(428);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == ':') ADVANCE(400);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == 'h') ADVANCE(568);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '\'') ADVANCE(611);
      if (lookahead == '(') ADVANCE(428);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == 'h') ADVANCE(568);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '\'') ADVANCE(611);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == ':') ADVANCE(400);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == 'h') ADVANCE(568);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '\'') ADVANCE(611);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == 'h') ADVANCE(568);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '(') ADVANCE(428);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '-') ADVANCE(525);
      if (lookahead == '.') ADVANCE(503);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == '=') ADVANCE(401);
      if (lookahead == '?') ADVANCE(447);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'D') ADVANCE(583);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'N') ADVANCE(582);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'S') ADVANCE(530);
      if (lookahead == 'T') ADVANCE(531);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == '^') ADVANCE(578);
      if (lookahead == 'a') ADVANCE(554);
      if (lookahead == 'c') ADVANCE(560);
      if (lookahead == 'f') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead == 'o') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == 'h') ADVANCE(568);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '+') ADVANCE(575);
      if (lookahead == '-') ADVANCE(526);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'D') ADVANCE(583);
      if (lookahead == 'M') ADVANCE(528);
      if (lookahead == 'N') ADVANCE(582);
      if (lookahead == 'S') ADVANCE(530);
      if (lookahead == 'T') ADVANCE(531);
      if (lookahead == '^') ADVANCE(578);
      if (lookahead == 'c') ADVANCE(562);
      if (lookahead == 'e') ADVANCE(570);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead == 'o') ADVANCE(541);
      if (lookahead == 's') ADVANCE(573);
      if (lookahead == 'v') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(507);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == '^') ADVANCE(578);
      if (lookahead == 'c') ADVANCE(562);
      if (lookahead == 'e') ADVANCE(570);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead == 's') ADVANCE(573);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == '^') ADVANCE(578);
      if (lookahead == 'i') ADVANCE(555);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'c') ADVANCE(562);
      if (lookahead == 'h') ADVANCE(568);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(555);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'h') ADVANCE(568);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '/') ADVANCE(489);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '(') ADVANCE(428);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '(') ADVANCE(428);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == ')') ADVANCE(430);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == '\\') ADVANCE(574);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == ')') ADVANCE(430);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'o') ADVANCE(563);
      if (lookahead == '|') ADVANCE(621);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == ')') ADVANCE(430);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'o') ADVANCE(563);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(587);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == '?') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(535);
      if (lookahead == 'D') ADVANCE(583);
      if (lookahead == 'M') ADVANCE(528);
      if (lookahead == 'N') ADVANCE(582);
      if (lookahead == 'R') ADVANCE(548);
      if (lookahead == 'S') ADVANCE(530);
      if (lookahead == 'T') ADVANCE(531);
      if (lookahead == 'c') ADVANCE(561);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 's') ADVANCE(573);
      if (lookahead == 'v') ADVANCE(540);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(506);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(635);
      if (lookahead == '/') ADVANCE(629);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '-') ADVANCE(525);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == 'i') ADVANCE(555);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '.') ADVANCE(503);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == '=') ADVANCE(401);
      if (lookahead == '?') ADVANCE(447);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'D') ADVANCE(583);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'N') ADVANCE(582);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'S') ADVANCE(530);
      if (lookahead == 'T') ADVANCE(531);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == '^') ADVANCE(578);
      if (lookahead == 'a') ADVANCE(554);
      if (lookahead == 'c') ADVANCE(560);
      if (lookahead == 'f') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead == 'o') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == '=') ADVANCE(401);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == 'i') ADVANCE(555);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'D') ADVANCE(546);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(544);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(539);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'T') ADVANCE(550);
      if (lookahead == 'V') ADVANCE(534);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'D') ADVANCE(546);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(544);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'S') ADVANCE(559);
      if (lookahead == 'T') ADVANCE(536);
      if (lookahead == 'V') ADVANCE(534);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'D') ADVANCE(546);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(544);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'T') ADVANCE(550);
      if (lookahead == 'V') ADVANCE(534);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'D') ADVANCE(546);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(552);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'T') ADVANCE(550);
      if (lookahead == 'U') ADVANCE(567);
      if (lookahead == 'V') ADVANCE(534);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == 'a') ADVANCE(554);
      if (lookahead == 'w') ADVANCE(549);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == 'a') ADVANCE(554);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == 'o') ADVANCE(563);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == 'w') ADVANCE(549);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '-') ADVANCE(525);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead == 's') ADVANCE(573);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(586);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(503);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'n') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(503);
      if (lookahead == '/') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(584);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(598);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(600);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == '=') ADVANCE(401);
      if (lookahead == 'h') ADVANCE(568);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == '=') ADVANCE(401);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == '?') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(535);
      if (lookahead == 'D') ADVANCE(583);
      if (lookahead == 'M') ADVANCE(528);
      if (lookahead == 'N') ADVANCE(582);
      if (lookahead == 'R') ADVANCE(548);
      if (lookahead == 'S') ADVANCE(530);
      if (lookahead == 'T') ADVANCE(531);
      if (lookahead == 'c') ADVANCE(562);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 's') ADVANCE(573);
      if (lookahead == 'v') ADVANCE(540);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(507);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == '?') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(535);
      if (lookahead == 'D') ADVANCE(583);
      if (lookahead == 'M') ADVANCE(528);
      if (lookahead == 'N') ADVANCE(582);
      if (lookahead == 'R') ADVANCE(548);
      if (lookahead == 'S') ADVANCE(530);
      if (lookahead == 'T') ADVANCE(531);
      if (lookahead == 'c') ADVANCE(561);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 's') ADVANCE(573);
      if (lookahead == 'v') ADVANCE(540);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(507);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == '?') ADVANCE(447);
      if (lookahead == 'D') ADVANCE(583);
      if (lookahead == 'M') ADVANCE(528);
      if (lookahead == 'N') ADVANCE(582);
      if (lookahead == 'S') ADVANCE(530);
      if (lookahead == 'T') ADVANCE(531);
      if (lookahead == 'a') ADVANCE(554);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'D') ADVANCE(546);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'S') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(534);
      if (lookahead == 'X') ADVANCE(527);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead == 'L') ADVANCE(558);
      if (lookahead == 'M') ADVANCE(532);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(534);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'C') ADVANCE(535);
      if (lookahead == 'D') ADVANCE(583);
      if (lookahead == 'M') ADVANCE(528);
      if (lookahead == 'N') ADVANCE(582);
      if (lookahead == 'R') ADVANCE(548);
      if (lookahead == 'S') ADVANCE(530);
      if (lookahead == 'T') ADVANCE(531);
      if (lookahead == 'c') ADVANCE(562);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 's') ADVANCE(573);
      if (lookahead == 'v') ADVANCE(540);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(507);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'D') ADVANCE(583);
      if (lookahead == 'M') ADVANCE(528);
      if (lookahead == 'N') ADVANCE(582);
      if (lookahead == 'S') ADVANCE(530);
      if (lookahead == 'T') ADVANCE(531);
      if (lookahead == '^') ADVANCE(578);
      if (lookahead == 'c') ADVANCE(562);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead == 'o') ADVANCE(541);
      if (lookahead == 's') ADVANCE(573);
      if (lookahead == 'v') ADVANCE(540);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(507);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'D') ADVANCE(583);
      if (lookahead == 'M') ADVANCE(528);
      if (lookahead == 'N') ADVANCE(582);
      if (lookahead == 'S') ADVANCE(530);
      if (lookahead == 'T') ADVANCE(531);
      if (lookahead == 'c') ADVANCE(562);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 's') ADVANCE(573);
      if (lookahead == 'v') ADVANCE(540);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(507);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'D') ADVANCE(546);
      if (lookahead == 'E') ADVANCE(571);
      if (lookahead == 'S') ADVANCE(545);
      if (lookahead == 'X') ADVANCE(527);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'D') ADVANCE(546);
      if (lookahead == 'I') ADVANCE(543);
      if (lookahead == 'P') ADVANCE(538);
      if (lookahead == 'T') ADVANCE(550);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == '\\') ADVANCE(574);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead == 's') ADVANCE(573);
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
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 's') ADVANCE(573);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(489);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(446);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '>') ADVANCE(436);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '>') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(598);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'P') ADVANCE(77);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'S') ADVANCE(579);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'S') ADVANCE(579);
      if (lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'U') ADVANCE(580);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'U') ADVANCE(581);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(259);
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'b') ADVANCE(155);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'b') ADVANCE(155);
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(415);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(415);
      if (lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == 'u') ADVANCE(199);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'h') ADVANCE(161);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(282);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(435);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(248);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(92);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(247);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(302);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'y') ADVANCE(279);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(624);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(598);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(585);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_sequence_token2);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(577);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_MS);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_SU);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_TU);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_cardinality_token1);
      if (lookahead == '.') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(584);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_cardinality_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(585);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(5);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '*') ADVANCE(593);
      if (lookahead == '/') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(593);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '/') ADVANCE(591);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(593);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(593);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(594);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(595);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(345);
      if (lookahead == '.') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(598);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(598);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(597);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(343);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == ':') ADVANCE(344);
      if (lookahead == 'Z') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(599);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '-') ADVANCE(348);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(343);
      if (lookahead == '.') ADVANCE(340);
      if (lookahead == 'Z') ADVANCE(604);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(343);
      if (lookahead == ':') ADVANCE(344);
      if (lookahead == 'Z') ADVANCE(604);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(343);
      if (lookahead == ':') ADVANCE(347);
      if (lookahead == 'Z') ADVANCE(604);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(343);
      if (lookahead == 'Z') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_T);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'U') ADVANCE(581);
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '*') ADVANCE(635);
      if (lookahead == '/') ADVANCE(629);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '/') ADVANCE(613);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(612);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_example);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_preferred);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_extensible);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_Reference);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_Canonical);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_named);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_QMARK_BANG);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_param_rule_set_params_token1);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(635);
      if (lookahead == '/') ADVANCE(629);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      if (lookahead == '*') ADVANCE(635);
      if (lookahead == '/') ADVANCE(629);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_regex_pattern);
      if (lookahead == '\n') SKIP(38)
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(356);
      if (sym_regex_pattern_character_set_1(lookahead)) ADVANCE(627);
      if (lookahead != 0) ADVANCE(628);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_regex_pattern);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(628);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(638);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(634);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_fsh_comment_token1);
      if (lookahead == '*') ADVANCE(637);
      if (lookahead == '/') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(634);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_fsh_comment_token1);
      if (lookahead == '/') ADVANCE(632);
      if (sym_regex_pattern_character_set_1(lookahead)) ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(634);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_fsh_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(634);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(30);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(634);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_fsh_comment_token2);
      if (lookahead == '*') ADVANCE(638);
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
  [8] = {.lex_state = 362},
  [9] = {.lex_state = 362},
  [10] = {.lex_state = 362},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 358},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 358},
  [16] = {.lex_state = 377},
  [17] = {.lex_state = 362},
  [18] = {.lex_state = 362},
  [19] = {.lex_state = 362},
  [20] = {.lex_state = 377},
  [21] = {.lex_state = 362},
  [22] = {.lex_state = 362},
  [23] = {.lex_state = 377},
  [24] = {.lex_state = 385},
  [25] = {.lex_state = 358},
  [26] = {.lex_state = 385},
  [27] = {.lex_state = 358},
  [28] = {.lex_state = 358},
  [29] = {.lex_state = 385},
  [30] = {.lex_state = 362},
  [31] = {.lex_state = 362},
  [32] = {.lex_state = 358},
  [33] = {.lex_state = 358},
  [34] = {.lex_state = 15},
  [35] = {.lex_state = 362},
  [36] = {.lex_state = 362},
  [37] = {.lex_state = 362},
  [38] = {.lex_state = 362},
  [39] = {.lex_state = 362},
  [40] = {.lex_state = 362},
  [41] = {.lex_state = 362},
  [42] = {.lex_state = 362},
  [43] = {.lex_state = 362},
  [44] = {.lex_state = 362},
  [45] = {.lex_state = 362},
  [46] = {.lex_state = 364},
  [47] = {.lex_state = 362},
  [48] = {.lex_state = 362},
  [49] = {.lex_state = 362},
  [50] = {.lex_state = 362},
  [51] = {.lex_state = 362},
  [52] = {.lex_state = 362},
  [53] = {.lex_state = 361},
  [54] = {.lex_state = 362},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 362},
  [57] = {.lex_state = 362},
  [58] = {.lex_state = 362},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 362},
  [61] = {.lex_state = 362},
  [62] = {.lex_state = 362},
  [63] = {.lex_state = 359},
  [64] = {.lex_state = 362},
  [65] = {.lex_state = 358},
  [66] = {.lex_state = 359},
  [67] = {.lex_state = 362},
  [68] = {.lex_state = 42},
  [69] = {.lex_state = 362},
  [70] = {.lex_state = 372},
  [71] = {.lex_state = 361},
  [72] = {.lex_state = 359},
  [73] = {.lex_state = 358},
  [74] = {.lex_state = 359},
  [75] = {.lex_state = 359},
  [76] = {.lex_state = 383},
  [77] = {.lex_state = 358},
  [78] = {.lex_state = 374},
  [79] = {.lex_state = 359},
  [80] = {.lex_state = 364},
  [81] = {.lex_state = 364},
  [82] = {.lex_state = 358},
  [83] = {.lex_state = 41},
  [84] = {.lex_state = 383},
  [85] = {.lex_state = 359},
  [86] = {.lex_state = 359},
  [87] = {.lex_state = 359},
  [88] = {.lex_state = 358},
  [89] = {.lex_state = 358},
  [90] = {.lex_state = 362},
  [91] = {.lex_state = 362},
  [92] = {.lex_state = 359},
  [93] = {.lex_state = 362},
  [94] = {.lex_state = 359},
  [95] = {.lex_state = 373},
  [96] = {.lex_state = 375},
  [97] = {.lex_state = 362},
  [98] = {.lex_state = 358},
  [99] = {.lex_state = 360},
  [100] = {.lex_state = 360},
  [101] = {.lex_state = 364},
  [102] = {.lex_state = 358},
  [103] = {.lex_state = 365},
  [104] = {.lex_state = 362},
  [105] = {.lex_state = 364},
  [106] = {.lex_state = 358},
  [107] = {.lex_state = 364},
  [108] = {.lex_state = 362},
  [109] = {.lex_state = 365},
  [110] = {.lex_state = 358},
  [111] = {.lex_state = 362},
  [112] = {.lex_state = 360},
  [113] = {.lex_state = 360},
  [114] = {.lex_state = 360},
  [115] = {.lex_state = 358},
  [116] = {.lex_state = 358},
  [117] = {.lex_state = 388},
  [118] = {.lex_state = 388},
  [119] = {.lex_state = 361},
  [120] = {.lex_state = 361},
  [121] = {.lex_state = 358},
  [122] = {.lex_state = 358},
  [123] = {.lex_state = 360},
  [124] = {.lex_state = 360},
  [125] = {.lex_state = 360},
  [126] = {.lex_state = 360},
  [127] = {.lex_state = 360},
  [128] = {.lex_state = 360},
  [129] = {.lex_state = 362},
  [130] = {.lex_state = 361},
  [131] = {.lex_state = 390},
  [132] = {.lex_state = 390},
  [133] = {.lex_state = 44},
  [134] = {.lex_state = 45},
  [135] = {.lex_state = 378},
  [136] = {.lex_state = 361},
  [137] = {.lex_state = 387},
  [138] = {.lex_state = 361},
  [139] = {.lex_state = 361},
  [140] = {.lex_state = 44},
  [141] = {.lex_state = 387},
  [142] = {.lex_state = 361},
  [143] = {.lex_state = 361},
  [144] = {.lex_state = 361},
  [145] = {.lex_state = 361},
  [146] = {.lex_state = 45},
  [147] = {.lex_state = 378},
  [148] = {.lex_state = 361},
  [149] = {.lex_state = 388},
  [150] = {.lex_state = 44},
  [151] = {.lex_state = 362},
  [152] = {.lex_state = 362},
  [153] = {.lex_state = 362},
  [154] = {.lex_state = 362},
  [155] = {.lex_state = 362},
  [156] = {.lex_state = 362},
  [157] = {.lex_state = 362},
  [158] = {.lex_state = 362},
  [159] = {.lex_state = 362},
  [160] = {.lex_state = 366},
  [161] = {.lex_state = 366},
  [162] = {.lex_state = 16},
  [163] = {.lex_state = 362},
  [164] = {.lex_state = 362},
  [165] = {.lex_state = 362},
  [166] = {.lex_state = 362},
  [167] = {.lex_state = 396},
  [168] = {.lex_state = 387},
  [169] = {.lex_state = 389},
  [170] = {.lex_state = 389},
  [171] = {.lex_state = 362},
  [172] = {.lex_state = 362},
  [173] = {.lex_state = 396},
  [174] = {.lex_state = 362},
  [175] = {.lex_state = 369},
  [176] = {.lex_state = 362},
  [177] = {.lex_state = 390},
  [178] = {.lex_state = 369},
  [179] = {.lex_state = 365},
  [180] = {.lex_state = 362},
  [181] = {.lex_state = 370},
  [182] = {.lex_state = 386},
  [183] = {.lex_state = 369},
  [184] = {.lex_state = 370},
  [185] = {.lex_state = 384},
  [186] = {.lex_state = 365},
  [187] = {.lex_state = 366},
  [188] = {.lex_state = 27},
  [189] = {.lex_state = 362},
  [190] = {.lex_state = 362},
  [191] = {.lex_state = 368},
  [192] = {.lex_state = 368},
  [193] = {.lex_state = 362},
  [194] = {.lex_state = 391},
  [195] = {.lex_state = 27},
  [196] = {.lex_state = 362},
  [197] = {.lex_state = 384},
  [198] = {.lex_state = 391},
  [199] = {.lex_state = 376},
  [200] = {.lex_state = 396},
  [201] = {.lex_state = 389},
  [202] = {.lex_state = 367},
  [203] = {.lex_state = 358},
  [204] = {.lex_state = 386},
  [205] = {.lex_state = 367},
  [206] = {.lex_state = 376},
  [207] = {.lex_state = 362},
  [208] = {.lex_state = 358},
  [209] = {.lex_state = 358},
  [210] = {.lex_state = 358},
  [211] = {.lex_state = 358},
  [212] = {.lex_state = 362},
  [213] = {.lex_state = 362},
  [214] = {.lex_state = 362},
  [215] = {.lex_state = 362},
  [216] = {.lex_state = 362},
  [217] = {.lex_state = 362},
  [218] = {.lex_state = 382},
  [219] = {.lex_state = 362},
  [220] = {.lex_state = 362},
  [221] = {.lex_state = 362},
  [222] = {.lex_state = 392},
  [223] = {.lex_state = 362},
  [224] = {.lex_state = 378},
  [225] = {.lex_state = 378},
  [226] = {.lex_state = 362},
  [227] = {.lex_state = 371},
  [228] = {.lex_state = 371},
  [229] = {.lex_state = 362},
  [230] = {.lex_state = 382},
  [231] = {.lex_state = 362},
  [232] = {.lex_state = 367},
  [233] = {.lex_state = 362},
  [234] = {.lex_state = 362},
  [235] = {.lex_state = 362},
  [236] = {.lex_state = 362},
  [237] = {.lex_state = 362},
  [238] = {.lex_state = 362},
  [239] = {.lex_state = 362},
  [240] = {.lex_state = 362},
  [241] = {.lex_state = 391},
  [242] = {.lex_state = 393},
  [243] = {.lex_state = 393},
  [244] = {.lex_state = 362},
  [245] = {.lex_state = 376},
  [246] = {.lex_state = 368},
  [247] = {.lex_state = 379},
  [248] = {.lex_state = 386},
  [249] = {.lex_state = 379},
  [250] = {.lex_state = 41},
  [251] = {.lex_state = 7},
  [252] = {.lex_state = 362},
  [253] = {.lex_state = 394},
  [254] = {.lex_state = 384},
  [255] = {.lex_state = 394},
  [256] = {.lex_state = 46},
  [257] = {.lex_state = 370},
  [258] = {.lex_state = 362},
  [259] = {.lex_state = 362},
  [260] = {.lex_state = 362},
  [261] = {.lex_state = 392},
  [262] = {.lex_state = 362},
  [263] = {.lex_state = 382},
  [264] = {.lex_state = 46},
  [265] = {.lex_state = 362},
  [266] = {.lex_state = 362},
  [267] = {.lex_state = 380},
  [268] = {.lex_state = 362},
  [269] = {.lex_state = 394},
  [270] = {.lex_state = 362},
  [271] = {.lex_state = 380},
  [272] = {.lex_state = 362},
  [273] = {.lex_state = 362},
  [274] = {.lex_state = 362},
  [275] = {.lex_state = 362},
  [276] = {.lex_state = 362},
  [277] = {.lex_state = 362},
  [278] = {.lex_state = 46},
  [279] = {.lex_state = 358},
  [280] = {.lex_state = 362},
  [281] = {.lex_state = 362},
  [282] = {.lex_state = 362},
  [283] = {.lex_state = 362},
  [284] = {.lex_state = 362},
  [285] = {.lex_state = 358},
  [286] = {.lex_state = 362},
  [287] = {.lex_state = 362},
  [288] = {.lex_state = 362},
  [289] = {.lex_state = 362},
  [290] = {.lex_state = 395},
  [291] = {.lex_state = 392},
  [292] = {.lex_state = 362},
  [293] = {.lex_state = 395},
  [294] = {.lex_state = 362},
  [295] = {.lex_state = 381},
  [296] = {.lex_state = 46},
  [297] = {.lex_state = 362},
  [298] = {.lex_state = 362},
  [299] = {.lex_state = 371},
  [300] = {.lex_state = 362},
  [301] = {.lex_state = 362},
  [302] = {.lex_state = 362},
  [303] = {.lex_state = 362},
  [304] = {.lex_state = 379},
  [305] = {.lex_state = 362},
  [306] = {.lex_state = 393},
  [307] = {.lex_state = 42},
  [308] = {.lex_state = 42},
  [309] = {.lex_state = 362},
  [310] = {.lex_state = 362},
  [311] = {.lex_state = 362},
  [312] = {.lex_state = 46},
  [313] = {.lex_state = 397},
  [314] = {.lex_state = 46},
  [315] = {.lex_state = 41},
  [316] = {.lex_state = 362},
  [317] = {.lex_state = 46},
  [318] = {.lex_state = 362},
  [319] = {.lex_state = 46},
  [320] = {.lex_state = 362},
  [321] = {.lex_state = 46},
  [322] = {.lex_state = 46},
  [323] = {.lex_state = 46},
  [324] = {.lex_state = 46},
  [325] = {.lex_state = 46},
  [326] = {.lex_state = 362},
  [327] = {.lex_state = 397},
  [328] = {.lex_state = 46},
  [329] = {.lex_state = 362},
  [330] = {.lex_state = 46},
  [331] = {.lex_state = 46},
  [332] = {.lex_state = 46},
  [333] = {.lex_state = 46},
  [334] = {.lex_state = 362},
  [335] = {.lex_state = 46},
  [336] = {.lex_state = 395},
  [337] = {.lex_state = 46},
  [338] = {.lex_state = 46},
  [339] = {.lex_state = 41},
  [340] = {.lex_state = 362},
  [341] = {.lex_state = 362},
  [342] = {.lex_state = 46},
  [343] = {.lex_state = 46},
  [344] = {.lex_state = 362},
  [345] = {.lex_state = 362},
  [346] = {.lex_state = 362},
  [347] = {.lex_state = 46},
  [348] = {.lex_state = 362},
  [349] = {.lex_state = 46},
  [350] = {.lex_state = 46},
  [351] = {.lex_state = 362},
  [352] = {.lex_state = 46},
  [353] = {.lex_state = 362},
  [354] = {.lex_state = 362},
  [355] = {.lex_state = 46},
  [356] = {.lex_state = 362},
  [357] = {.lex_state = 46},
  [358] = {.lex_state = 380},
  [359] = {.lex_state = 362},
  [360] = {.lex_state = 362},
  [361] = {.lex_state = 362},
  [362] = {.lex_state = 46},
  [363] = {.lex_state = 46},
  [364] = {.lex_state = 362},
  [365] = {.lex_state = 46},
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
  [388] = {.lex_state = 362},
  [389] = {.lex_state = 362},
  [390] = {.lex_state = 0},
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
  [402] = {.lex_state = 397},
  [403] = {.lex_state = 362},
  [404] = {.lex_state = 362},
  [405] = {.lex_state = 362},
  [406] = {.lex_state = 362},
  [407] = {.lex_state = 362},
  [408] = {.lex_state = 362},
  [409] = {.lex_state = 362},
  [410] = {.lex_state = 362},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 18},
  [414] = {.lex_state = 362},
  [415] = {.lex_state = 358},
  [416] = {.lex_state = 362},
  [417] = {.lex_state = 43},
  [418] = {.lex_state = 43},
  [419] = {.lex_state = 32},
  [420] = {.lex_state = 20},
  [421] = {.lex_state = 358},
  [422] = {.lex_state = 43},
  [423] = {.lex_state = 20},
  [424] = {.lex_state = 19},
  [425] = {.lex_state = 358},
  [426] = {.lex_state = 50},
  [427] = {.lex_state = 10},
  [428] = {.lex_state = 10},
  [429] = {.lex_state = 10},
  [430] = {.lex_state = 10},
  [431] = {.lex_state = 10},
  [432] = {.lex_state = 10},
  [433] = {.lex_state = 10},
  [434] = {.lex_state = 10},
  [435] = {.lex_state = 20},
  [436] = {.lex_state = 10},
  [437] = {.lex_state = 48},
  [438] = {.lex_state = 10},
  [439] = {.lex_state = 10},
  [440] = {.lex_state = 10},
  [441] = {.lex_state = 48},
  [442] = {.lex_state = 10},
  [443] = {.lex_state = 10},
  [444] = {.lex_state = 47},
  [445] = {.lex_state = 47},
  [446] = {.lex_state = 10},
  [447] = {.lex_state = 10},
  [448] = {.lex_state = 10},
  [449] = {.lex_state = 20},
  [450] = {.lex_state = 10},
  [451] = {.lex_state = 10},
  [452] = {.lex_state = 20},
  [453] = {.lex_state = 39},
  [454] = {.lex_state = 10},
  [455] = {.lex_state = 51},
  [456] = {.lex_state = 10},
  [457] = {.lex_state = 10},
  [458] = {.lex_state = 20},
  [459] = {.lex_state = 20},
  [460] = {.lex_state = 10},
  [461] = {.lex_state = 10},
  [462] = {.lex_state = 10},
  [463] = {.lex_state = 10},
  [464] = {.lex_state = 10},
  [465] = {.lex_state = 10},
  [466] = {.lex_state = 10},
  [467] = {.lex_state = 10},
  [468] = {.lex_state = 10},
  [469] = {.lex_state = 10},
  [470] = {.lex_state = 10},
  [471] = {.lex_state = 10},
  [472] = {.lex_state = 34},
  [473] = {.lex_state = 52},
  [474] = {.lex_state = 8},
  [475] = {.lex_state = 52},
  [476] = {.lex_state = 25},
  [477] = {.lex_state = 8},
  [478] = {.lex_state = 52},
  [479] = {.lex_state = 25},
  [480] = {.lex_state = 48},
  [481] = {.lex_state = 52},
  [482] = {.lex_state = 47},
  [483] = {.lex_state = 52},
  [484] = {.lex_state = 17},
  [485] = {.lex_state = 17},
  [486] = {.lex_state = 34},
  [487] = {.lex_state = 52},
  [488] = {.lex_state = 362},
  [489] = {.lex_state = 362},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 362},
  [492] = {.lex_state = 13},
  [493] = {.lex_state = 14},
  [494] = {.lex_state = 52},
  [495] = {.lex_state = 52},
  [496] = {.lex_state = 13},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 24},
  [499] = {.lex_state = 13},
  [500] = {.lex_state = 52},
  [501] = {.lex_state = 13},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 13},
  [504] = {.lex_state = 23},
  [505] = {.lex_state = 23},
  [506] = {.lex_state = 13},
  [507] = {.lex_state = 49},
  [508] = {.lex_state = 17},
  [509] = {.lex_state = 362},
  [510] = {.lex_state = 13},
  [511] = {.lex_state = 362},
  [512] = {.lex_state = 13},
  [513] = {.lex_state = 13},
  [514] = {.lex_state = 13},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 13},
  [517] = {.lex_state = 13},
  [518] = {.lex_state = 52},
  [519] = {.lex_state = 52},
  [520] = {.lex_state = 13},
  [521] = {.lex_state = 52},
  [522] = {.lex_state = 13},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 34},
  [525] = {.lex_state = 35},
  [526] = {.lex_state = 35},
  [527] = {.lex_state = 25},
  [528] = {.lex_state = 26},
  [529] = {.lex_state = 26},
  [530] = {.lex_state = 6},
  [531] = {.lex_state = 8},
  [532] = {.lex_state = 14},
  [533] = {.lex_state = 6},
  [534] = {.lex_state = 24},
  [535] = {.lex_state = 13},
  [536] = {.lex_state = 14},
  [537] = {.lex_state = 9},
  [538] = {.lex_state = 11},
  [539] = {.lex_state = 11},
  [540] = {.lex_state = 9},
  [541] = {.lex_state = 39},
  [542] = {.lex_state = 39},
  [543] = {.lex_state = 52},
  [544] = {.lex_state = 52},
  [545] = {.lex_state = 362},
  [546] = {.lex_state = 24},
  [547] = {.lex_state = 14},
  [548] = {.lex_state = 39},
  [549] = {.lex_state = 39},
  [550] = {.lex_state = 22},
  [551] = {.lex_state = 20},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 11},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 362},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 6},
  [559] = {.lex_state = 22},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 381},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 362},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 381},
  [567] = {.lex_state = 40},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 22},
  [571] = {.lex_state = 39},
  [572] = {.lex_state = 13},
  [573] = {.lex_state = 35},
  [574] = {.lex_state = 9},
  [575] = {.lex_state = 21},
  [576] = {.lex_state = 26},
  [577] = {.lex_state = 362},
  [578] = {.lex_state = 21},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 12},
  [581] = {.lex_state = 12},
  [582] = {.lex_state = 40},
  [583] = {.lex_state = 362},
  [584] = {.lex_state = 23},
  [585] = {.lex_state = 362},
  [586] = {.lex_state = 362},
  [587] = {.lex_state = 21},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 12},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 362},
  [593] = {.lex_state = 22},
  [594] = {.lex_state = 362},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 40},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 362},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 362},
  [601] = {.lex_state = 362},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 362},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
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
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 633},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 1},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 29},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 37},
  [641] = {.lex_state = 358},
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
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0},
  [664] = {(TSStateId)(-1)},
  [665] = {(TSStateId)(-1)},
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
    [sym_doc] = STATE(637),
    [sym_alias] = STATE(411),
    [sym_profile] = STATE(411),
    [sym_extension] = STATE(411),
    [sym_invariant] = STATE(411),
    [sym_instance] = STATE(411),
    [sym_valueset] = STATE(411),
    [sym_codesystem] = STATE(411),
    [sym_mapping] = STATE(411),
    [sym_logical] = STATE(411),
    [sym_resource] = STATE(411),
    [sym_rule_set] = STATE(411),
    [sym_param_rule_set] = STATE(411),
    [sym_fsh_comment] = STATE(1),
    [aux_sym_doc_repeat1] = STATE(59),
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
    STATE(40), 1,
      aux_sym_logical_repeat1,
    STATE(67), 1,
      aux_sym_profile_repeat1,
    STATE(190), 1,
      sym_sd_metadata,
    STATE(381), 1,
      sym_lr_rule,
    STATE(380), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(189), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(374), 10,
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
    STATE(3), 1,
      aux_sym_profile_repeat1,
    STATE(4), 1,
      sym_fsh_comment,
    STATE(43), 1,
      aux_sym_logical_repeat1,
    STATE(190), 1,
      sym_sd_metadata,
    STATE(381), 1,
      sym_lr_rule,
    STATE(380), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(189), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(374), 10,
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
    STATE(6), 1,
      aux_sym_profile_repeat1,
    STATE(42), 1,
      aux_sym_logical_repeat1,
    STATE(190), 1,
      sym_sd_metadata,
    STATE(381), 1,
      sym_lr_rule,
    STATE(380), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(189), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(374), 10,
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
    STATE(45), 1,
      aux_sym_logical_repeat1,
    STATE(67), 1,
      aux_sym_profile_repeat1,
    STATE(190), 1,
      sym_sd_metadata,
    STATE(381), 1,
      sym_lr_rule,
    STATE(380), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(189), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(374), 10,
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
    STATE(151), 1,
      sym_code,
    STATE(249), 1,
      aux_sym_sequence_repeat1,
    STATE(258), 1,
      sym_reference,
    STATE(277), 1,
      sym_quantity,
    STATE(354), 1,
      sym_sequence,
    STATE(400), 1,
      sym_value,
    STATE(639), 1,
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
    STATE(340), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [436] = 15,
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
    STATE(8), 1,
      sym_fsh_comment,
    STATE(61), 1,
      aux_sym_profile_repeat2,
    STATE(67), 1,
      aux_sym_profile_repeat1,
    STATE(190), 1,
      sym_sd_metadata,
    STATE(372), 1,
      sym_sd_rule,
    STATE(189), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(374), 10,
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
  [505] = 15,
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
    STATE(58), 1,
      aux_sym_profile_repeat2,
    STATE(67), 1,
      aux_sym_profile_repeat1,
    STATE(190), 1,
      sym_sd_metadata,
    STATE(372), 1,
      sym_sd_rule,
    STATE(189), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(374), 10,
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
    ACTIONS(85), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [574] = 15,
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
    STATE(8), 1,
      aux_sym_profile_repeat1,
    STATE(10), 1,
      sym_fsh_comment,
    STATE(60), 1,
      aux_sym_profile_repeat2,
    STATE(190), 1,
      sym_sd_metadata,
    STATE(372), 1,
      sym_sd_rule,
    STATE(189), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(374), 10,
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
      anon_sym_RuleSet,
  [643] = 23,
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
    STATE(11), 1,
      sym_fsh_comment,
    STATE(151), 1,
      sym_code,
    STATE(249), 1,
      aux_sym_sequence_repeat1,
    STATE(258), 1,
      sym_reference,
    STATE(277), 1,
      sym_quantity,
    STATE(354), 1,
      sym_sequence,
    STATE(370), 1,
      sym_value,
    STATE(639), 1,
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
    STATE(340), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [728] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(91), 1,
      anon_sym_EQ,
    ACTIONS(93), 1,
      anon_sym_insert,
    ACTIONS(95), 1,
      anon_sym_from,
    ACTIONS(97), 1,
      anon_sym_contains,
    ACTIONS(99), 1,
      anon_sym_and,
    ACTIONS(101), 1,
      anon_sym_obeys,
    ACTIONS(103), 1,
      anon_sym_only,
    ACTIONS(105), 1,
      anon_sym_DASH_GT,
    ACTIONS(107), 1,
      anon_sym_CARET,
    ACTIONS(111), 1,
      aux_sym_cardinality_token1,
    ACTIONS(113), 1,
      anon_sym_DOT_DOT,
    STATE(12), 1,
      sym_fsh_comment,
    STATE(68), 1,
      sym_cardinality,
    STATE(106), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(121), 1,
      sym_flag,
    STATE(415), 1,
      aux_sym_flag_rule_repeat1,
    STATE(646), 1,
      sym_caret_path,
    ACTIONS(109), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [809] = 23,
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
    STATE(13), 1,
      sym_fsh_comment,
    STATE(151), 1,
      sym_code,
    STATE(249), 1,
      aux_sym_sequence_repeat1,
    STATE(258), 1,
      sym_reference,
    STATE(277), 1,
      sym_quantity,
    STATE(354), 1,
      sym_sequence,
    STATE(409), 1,
      sym_value,
    STATE(639), 1,
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
    STATE(340), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [894] = 23,
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
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      aux_sym_sequence_token1,
    ACTIONS(119), 1,
      sym_number,
    STATE(14), 1,
      sym_fsh_comment,
    STATE(151), 1,
      sym_code,
    STATE(206), 1,
      aux_sym_sequence_repeat1,
    STATE(258), 1,
      sym_reference,
    STATE(277), 1,
      sym_quantity,
    STATE(287), 1,
      sym_sequence,
    STATE(316), 1,
      sym_value,
    STATE(648), 1,
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
    STATE(340), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [979] = 20,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(91), 1,
      anon_sym_EQ,
    ACTIONS(93), 1,
      anon_sym_insert,
    ACTIONS(95), 1,
      anon_sym_from,
    ACTIONS(97), 1,
      anon_sym_contains,
    ACTIONS(99), 1,
      anon_sym_and,
    ACTIONS(101), 1,
      anon_sym_obeys,
    ACTIONS(103), 1,
      anon_sym_only,
    ACTIONS(107), 1,
      anon_sym_CARET,
    ACTIONS(111), 1,
      aux_sym_cardinality_token1,
    ACTIONS(113), 1,
      anon_sym_DOT_DOT,
    STATE(15), 1,
      sym_fsh_comment,
    STATE(68), 1,
      sym_cardinality,
    STATE(106), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(121), 1,
      sym_flag,
    STATE(415), 1,
      aux_sym_flag_rule_repeat1,
    STATE(646), 1,
      sym_caret_path,
    ACTIONS(109), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
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
    STATE(388), 1,
      sym_rule_set_rule,
    STATE(17), 2,
      sym_fsh_comment,
      aux_sym_param_rule_set_repeat1,
    STATE(387), 8,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_mapping_rule,
      sym_add_element_rule,
      sym_vs_component,
      sym_concept,
    STATE(374), 10,
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
  [1159] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(135), 1,
      anon_sym_STAR,
    STATE(401), 1,
      sym_rule_set_rule,
    STATE(18), 2,
      sym_fsh_comment,
      aux_sym_rule_set_repeat1,
    STATE(387), 8,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_mapping_rule,
      sym_add_element_rule,
      sym_vs_component,
      sym_concept,
    STATE(374), 10,
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
      anon_sym_RuleSet,
  [1212] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(140), 1,
      anon_sym_STAR,
    STATE(17), 1,
      aux_sym_param_rule_set_repeat1,
    STATE(19), 1,
      sym_fsh_comment,
    STATE(388), 1,
      sym_rule_set_rule,
    STATE(387), 8,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_mapping_rule,
      sym_add_element_rule,
      sym_vs_component,
      sym_concept,
    STATE(374), 10,
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
    ACTIONS(138), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [1267] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(142), 1,
      aux_sym_sequence_token1,
    STATE(16), 1,
      aux_sym_sequence_repeat1,
    STATE(20), 1,
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
  [1318] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(140), 1,
      anon_sym_STAR,
    STATE(18), 1,
      aux_sym_rule_set_repeat1,
    STATE(21), 1,
      sym_fsh_comment,
    STATE(401), 1,
      sym_rule_set_rule,
    STATE(387), 8,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_mapping_rule,
      sym_add_element_rule,
      sym_vs_component,
      sym_concept,
    STATE(374), 10,
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
    ACTIONS(144), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [1465] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(154), 1,
      aux_sym_sequence_token1,
    STATE(24), 1,
      sym_fsh_comment,
    STATE(26), 1,
      aux_sym_sequence_repeat1,
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
  [1514] = 4,
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
  [1557] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(156), 1,
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
  [1604] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(91), 1,
      anon_sym_EQ,
    ACTIONS(93), 1,
      anon_sym_insert,
    ACTIONS(95), 1,
      anon_sym_from,
    ACTIONS(97), 1,
      anon_sym_contains,
    ACTIONS(99), 1,
      anon_sym_and,
    ACTIONS(101), 1,
      anon_sym_obeys,
    ACTIONS(103), 1,
      anon_sym_only,
    ACTIONS(107), 1,
      anon_sym_CARET,
    STATE(27), 1,
      sym_fsh_comment,
    STATE(106), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(121), 1,
      sym_flag,
    STATE(415), 1,
      aux_sym_flag_rule_repeat1,
    STATE(646), 1,
      sym_caret_path,
    ACTIONS(109), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [1673] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(161), 1,
      anon_sym_POUND,
    STATE(28), 1,
      sym_fsh_comment,
    ACTIONS(163), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
    ACTIONS(159), 28,
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
  [1720] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
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
  [1764] = 16,
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
    STATE(30), 1,
      sym_fsh_comment,
    STATE(31), 1,
      aux_sym_mapping_repeat1,
    STATE(166), 1,
      sym_mapping_metadata,
    STATE(174), 1,
      aux_sym_mapping_repeat2,
    STATE(375), 1,
      sym_mapping_entity_rule,
    STATE(377), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    STATE(176), 5,
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
  [1830] = 16,
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
    STATE(31), 1,
      sym_fsh_comment,
    STATE(56), 1,
      aux_sym_mapping_repeat1,
    STATE(166), 1,
      sym_mapping_metadata,
    STATE(171), 1,
      aux_sym_mapping_repeat2,
    STATE(375), 1,
      sym_mapping_entity_rule,
    STATE(377), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    STATE(176), 5,
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
  [1896] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(32), 1,
      sym_fsh_comment,
    ACTIONS(163), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
    ACTIONS(159), 28,
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
    STATE(33), 1,
      sym_fsh_comment,
    ACTIONS(146), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
    ACTIONS(159), 27,
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
  [1983] = 24,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(142), 1,
      aux_sym_sequence_token1,
    ACTIONS(178), 1,
      anon_sym_insert,
    ACTIONS(180), 1,
      anon_sym_obeys,
    ACTIONS(182), 1,
      anon_sym_DASH_GT,
    ACTIONS(186), 1,
      anon_sym_codes,
    ACTIONS(188), 1,
      anon_sym_system,
    ACTIONS(190), 1,
      anon_sym_POUND,
    ACTIONS(192), 1,
      aux_sym_sequence_token2,
    ACTIONS(194), 1,
      anon_sym_CARET,
    STATE(12), 1,
      sym_path,
    STATE(20), 1,
      aux_sym_sequence_repeat1,
    STATE(28), 1,
      sym_sequence,
    STATE(34), 1,
      sym_fsh_comment,
    STATE(53), 1,
      aux_sym_code_insert_rule_repeat1,
    STATE(63), 1,
      sym_code,
    STATE(244), 1,
      sym_code_string,
    STATE(423), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(577), 1,
      sym_name,
    STATE(630), 1,
      sym_caret_path,
    ACTIONS(184), 2,
      anon_sym_include,
      anon_sym_exclude,
    STATE(404), 2,
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
  [2064] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(198), 1,
      anon_sym_Instance,
    STATE(35), 1,
      sym_fsh_comment,
    ACTIONS(196), 28,
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
  [2107] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(202), 1,
      anon_sym_Instance,
    STATE(36), 1,
      sym_fsh_comment,
    ACTIONS(200), 28,
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
  [2192] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(43), 1,
      anon_sym_Title,
    ACTIONS(210), 1,
      anon_sym_Instance,
    ACTIONS(212), 1,
      anon_sym_InstanceOf,
    ACTIONS(214), 1,
      anon_sym_Usage,
    ACTIONS(216), 1,
      anon_sym_STAR,
    STATE(38), 1,
      sym_fsh_comment,
    STATE(69), 1,
      aux_sym_instance_repeat1,
    STATE(154), 1,
      aux_sym_instance_repeat2,
    STATE(180), 1,
      sym_instance_metadata,
    STATE(391), 1,
      sym_instance_rule,
    STATE(394), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    STATE(207), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(208), 11,
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
  [2256] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(220), 1,
      anon_sym_Instance,
    STATE(39), 1,
      sym_fsh_comment,
    ACTIONS(218), 27,
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
  [2298] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(40), 1,
      sym_fsh_comment,
    STATE(44), 1,
      aux_sym_logical_repeat1,
    STATE(381), 1,
      sym_lr_rule,
    STATE(380), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(374), 10,
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
      anon_sym_RuleSet,
  [2348] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(43), 1,
      anon_sym_Title,
    ACTIONS(212), 1,
      anon_sym_InstanceOf,
    ACTIONS(214), 1,
      anon_sym_Usage,
    ACTIONS(216), 1,
      anon_sym_STAR,
    ACTIONS(226), 1,
      anon_sym_Instance,
    STATE(38), 1,
      aux_sym_instance_repeat1,
    STATE(41), 1,
      sym_fsh_comment,
    STATE(163), 1,
      aux_sym_instance_repeat2,
    STATE(180), 1,
      sym_instance_metadata,
    STATE(391), 1,
      sym_instance_rule,
    STATE(394), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    STATE(207), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(224), 11,
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
  [2412] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(42), 1,
      sym_fsh_comment,
    STATE(44), 1,
      aux_sym_logical_repeat1,
    STATE(381), 1,
      sym_lr_rule,
    STATE(380), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(374), 10,
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
  [2462] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(43), 1,
      sym_fsh_comment,
    STATE(44), 1,
      aux_sym_logical_repeat1,
    STATE(381), 1,
      sym_lr_rule,
    STATE(380), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(374), 10,
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
  [2512] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(230), 1,
      anon_sym_STAR,
    STATE(381), 1,
      sym_lr_rule,
    STATE(44), 2,
      sym_fsh_comment,
      aux_sym_logical_repeat1,
    STATE(380), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(374), 10,
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
      anon_sym_RuleSet,
  [2560] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(44), 1,
      aux_sym_logical_repeat1,
    STATE(45), 1,
      sym_fsh_comment,
    STATE(381), 1,
      sym_lr_rule,
    STATE(380), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(374), 10,
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
    ACTIONS(233), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [2610] = 16,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    ACTIONS(241), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      aux_sym_sequence_token1,
    ACTIONS(245), 1,
      anon_sym_SLASH,
    STATE(46), 1,
      sym_fsh_comment,
    STATE(151), 1,
      sym_code,
    STATE(344), 1,
      sym_vs_filter_value,
    STATE(578), 1,
      aux_sym_sequence_repeat1,
    STATE(663), 1,
      sym_sequence,
    ACTIONS(239), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(348), 3,
      sym_code_string,
      sym_string,
      sym_regex,
    ACTIONS(237), 13,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2674] = 5,
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
  [2716] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(253), 1,
      anon_sym_Instance,
    STATE(48), 1,
      sym_fsh_comment,
    ACTIONS(251), 27,
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
    STATE(108), 1,
      aux_sym_valueset_repeat1,
    STATE(157), 1,
      aux_sym_valueset_repeat2,
    STATE(229), 1,
      sym_vs_metadata,
    STATE(369), 1,
      sym_vs_rule,
    STATE(233), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(397), 3,
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
    STATE(97), 1,
      aux_sym_codesystem_repeat1,
    STATE(164), 1,
      aux_sym_codesystem_repeat2,
    STATE(234), 1,
      sym_cs_metadata,
    STATE(405), 1,
      sym_cs_rule,
    STATE(238), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(406), 3,
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
    STATE(159), 1,
      aux_sym_codesystem_repeat2,
    STATE(234), 1,
      sym_cs_metadata,
    STATE(405), 1,
      sym_cs_rule,
    STATE(238), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(406), 3,
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
    STATE(156), 1,
      aux_sym_valueset_repeat2,
    STATE(229), 1,
      sym_vs_metadata,
    STATE(369), 1,
      sym_vs_rule,
    STATE(233), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(397), 3,
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
  [2990] = 17,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(65), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(243), 1,
      aux_sym_sequence_token1,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    ACTIONS(273), 1,
      anon_sym_insert,
    ACTIONS(275), 1,
      anon_sym_POUND,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    STATE(53), 1,
      sym_fsh_comment,
    STATE(71), 1,
      aux_sym_code_insert_rule_repeat1,
    STATE(145), 1,
      sym_code,
    STATE(208), 1,
      sym_string,
    STATE(389), 1,
      sym_multiline_string,
    STATE(578), 1,
      aux_sym_sequence_repeat1,
    STATE(607), 1,
      sym_sequence,
    ACTIONS(271), 12,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3053] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(281), 1,
      anon_sym_Instance,
    STATE(54), 1,
      sym_fsh_comment,
    ACTIONS(279), 24,
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
  [3092] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
    ACTIONS(285), 1,
      anon_sym_Alias,
    ACTIONS(288), 1,
      anon_sym_Profile,
    ACTIONS(291), 1,
      anon_sym_Extension,
    ACTIONS(294), 1,
      anon_sym_Invariant,
    ACTIONS(297), 1,
      anon_sym_Instance,
    ACTIONS(300), 1,
      anon_sym_ValueSet,
    ACTIONS(303), 1,
      anon_sym_CodeSystem,
    ACTIONS(306), 1,
      anon_sym_Mapping,
    ACTIONS(309), 1,
      anon_sym_Logical,
    ACTIONS(312), 1,
      anon_sym_Resource,
    ACTIONS(315), 1,
      anon_sym_RuleSet,
    STATE(55), 2,
      sym_fsh_comment,
      aux_sym_doc_repeat1,
    STATE(411), 12,
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
  [3153] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(320), 1,
      anon_sym_Description,
    ACTIONS(323), 1,
      anon_sym_Id,
    ACTIONS(326), 1,
      anon_sym_Source,
    ACTIONS(329), 1,
      anon_sym_Target,
    ACTIONS(332), 1,
      anon_sym_Title,
    STATE(166), 1,
      sym_mapping_metadata,
    STATE(56), 2,
      sym_fsh_comment,
      aux_sym_mapping_repeat1,
    STATE(176), 5,
      sym_description,
      sym_id,
      sym_source,
      sym_target,
      sym_title,
    ACTIONS(318), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3204] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(337), 1,
      anon_sym_Instance,
    STATE(57), 1,
      sym_fsh_comment,
    ACTIONS(335), 24,
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
  [3243] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(83), 1,
      anon_sym_STAR,
    STATE(58), 1,
      sym_fsh_comment,
    STATE(62), 1,
      aux_sym_profile_repeat2,
    STATE(372), 1,
      sym_sd_rule,
    STATE(374), 10,
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
    ACTIONS(339), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [3288] = 17,
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
    ACTIONS(341), 1,
      ts_builtin_sym_end,
    STATE(55), 1,
      aux_sym_doc_repeat1,
    STATE(59), 1,
      sym_fsh_comment,
    STATE(411), 12,
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
  [3351] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(83), 1,
      anon_sym_STAR,
    STATE(60), 1,
      sym_fsh_comment,
    STATE(62), 1,
      aux_sym_profile_repeat2,
    STATE(372), 1,
      sym_sd_rule,
    STATE(374), 10,
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
  [3396] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(83), 1,
      anon_sym_STAR,
    STATE(61), 1,
      sym_fsh_comment,
    STATE(62), 1,
      aux_sym_profile_repeat2,
    STATE(372), 1,
      sym_sd_rule,
    STATE(374), 10,
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
    ACTIONS(343), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [3441] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(347), 1,
      anon_sym_STAR,
    STATE(372), 1,
      sym_sd_rule,
    STATE(62), 2,
      sym_fsh_comment,
      aux_sym_profile_repeat2,
    STATE(374), 10,
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
    ACTIONS(345), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [3484] = 11,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(194), 1,
      anon_sym_CARET,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
    ACTIONS(360), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      sym_fsh_comment,
    STATE(214), 1,
      sym_string,
    STATE(605), 1,
      sym_caret_path,
    ACTIONS(358), 2,
      anon_sym_from,
      anon_sym_and,
    ACTIONS(356), 5,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(353), 12,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3534] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(365), 1,
      anon_sym_Instance,
    STATE(64), 1,
      sym_fsh_comment,
    ACTIONS(363), 23,
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
  [3572] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(65), 1,
      sym_fsh_comment,
    ACTIONS(159), 24,
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
  [3608] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(367), 1,
      aux_sym_sequence_token1,
    STATE(66), 1,
      sym_fsh_comment,
    STATE(72), 1,
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
  [3649] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(372), 1,
      anon_sym_Description,
    ACTIONS(375), 1,
      anon_sym_Id,
    ACTIONS(378), 1,
      anon_sym_Parent,
    ACTIONS(381), 1,
      anon_sym_Title,
    STATE(190), 1,
      sym_sd_metadata,
    STATE(67), 2,
      sym_fsh_comment,
      aux_sym_profile_repeat1,
    STATE(189), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    ACTIONS(370), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3696] = 18,
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
    ACTIONS(384), 1,
      anon_sym_contentReference,
    ACTIONS(386), 1,
      aux_sym_sequence_token1,
    ACTIONS(390), 1,
      anon_sym_QMARK_BANG,
    STATE(22), 1,
      sym_sequence,
    STATE(68), 1,
      sym_fsh_comment,
    STATE(83), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(274), 1,
      sym_reference,
    STATE(339), 1,
      sym_flag,
    STATE(491), 1,
      sym_target_type,
    STATE(538), 1,
      aux_sym_sequence_repeat1,
    STATE(273), 2,
      sym_name,
      sym_canonical,
    ACTIONS(53), 4,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      sym_number,
    ACTIONS(388), 5,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [3759] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(394), 1,
      anon_sym_Instance,
    ACTIONS(396), 1,
      anon_sym_Description,
    ACTIONS(399), 1,
      anon_sym_InstanceOf,
    ACTIONS(402), 1,
      anon_sym_Title,
    ACTIONS(405), 1,
      anon_sym_Usage,
    STATE(180), 1,
      sym_instance_metadata,
    STATE(69), 2,
      sym_fsh_comment,
      aux_sym_instance_repeat1,
    STATE(207), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(392), 12,
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
  [3808] = 13,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(243), 1,
      aux_sym_sequence_token1,
    ACTIONS(408), 1,
      ts_builtin_sym_end,
    ACTIONS(414), 1,
      anon_sym_COLON,
    ACTIONS(416), 1,
      anon_sym_POUND,
    ACTIONS(418), 1,
      anon_sym_SQUOTE,
    STATE(70), 1,
      sym_fsh_comment,
    STATE(578), 1,
      aux_sym_sequence_repeat1,
    STATE(660), 1,
      sym_sequence,
    STATE(196), 2,
      sym_code,
      sym_unit,
    ACTIONS(411), 13,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3861] = 11,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(420), 1,
      ts_builtin_sym_end,
    ACTIONS(424), 1,
      anon_sym_POUND,
    ACTIONS(427), 1,
      aux_sym_sequence_token1,
    ACTIONS(430), 1,
      aux_sym_sequence_token2,
    STATE(145), 1,
      sym_code,
    STATE(578), 1,
      aux_sym_sequence_repeat1,
    STATE(607), 1,
      sym_sequence,
    STATE(71), 2,
      sym_fsh_comment,
      aux_sym_code_insert_rule_repeat1,
    ACTIONS(422), 15,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3910] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(433), 1,
      aux_sym_sequence_token1,
    STATE(72), 2,
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
  [3949] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(121), 1,
      sym_flag,
    STATE(73), 2,
      sym_fsh_comment,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(438), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(436), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3987] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    STATE(74), 1,
      sym_fsh_comment,
    ACTIONS(253), 21,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4023] = 5,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(75), 1,
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
  [4059] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(443), 1,
      anon_sym_STAR,
    STATE(76), 1,
      sym_fsh_comment,
    ACTIONS(445), 2,
      aux_sym_cardinality_token1,
      anon_sym_STAR2,
    ACTIONS(441), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4097] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(77), 1,
      sym_fsh_comment,
    STATE(89), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(121), 1,
      sym_flag,
    ACTIONS(109), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(447), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4137] = 13,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(243), 1,
      aux_sym_sequence_token1,
    ACTIONS(408), 1,
      ts_builtin_sym_end,
    ACTIONS(414), 1,
      anon_sym_COLON,
    ACTIONS(418), 1,
      anon_sym_SQUOTE,
    ACTIONS(449), 1,
      anon_sym_POUND,
    STATE(78), 1,
      sym_fsh_comment,
    STATE(578), 1,
      aux_sym_sequence_repeat1,
    STATE(659), 1,
      sym_sequence,
    STATE(196), 2,
      sym_code,
      sym_unit,
    ACTIONS(411), 12,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4189] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
    STATE(79), 1,
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
  [4225] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(451), 1,
      aux_sym_sequence_token1,
    STATE(80), 2,
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
  [4263] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(454), 1,
      aux_sym_sequence_token1,
    STATE(80), 1,
      aux_sym_sequence_repeat1,
    STATE(81), 1,
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
      anon_sym_and,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUND,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
      anon_sym_SLASH,
  [4303] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(73), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(82), 1,
      sym_fsh_comment,
    STATE(121), 1,
      sym_flag,
    ACTIONS(109), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(457), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4343] = 17,
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
    ACTIONS(386), 1,
      aux_sym_sequence_token1,
    ACTIONS(390), 1,
      anon_sym_QMARK_BANG,
    STATE(22), 1,
      sym_sequence,
    STATE(83), 1,
      sym_fsh_comment,
    STATE(250), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(274), 1,
      sym_reference,
    STATE(339), 1,
      sym_flag,
    STATE(489), 1,
      sym_target_type,
    STATE(538), 1,
      aux_sym_sequence_repeat1,
    STATE(273), 2,
      sym_name,
      sym_canonical,
    ACTIONS(53), 4,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      sym_number,
    ACTIONS(388), 5,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [4403] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(461), 1,
      anon_sym_STAR,
    STATE(84), 1,
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
  [4441] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(85), 1,
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
  [4477] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
    STATE(86), 1,
      sym_fsh_comment,
    ACTIONS(220), 21,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4513] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    STATE(87), 1,
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
  [4549] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(82), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(88), 1,
      sym_fsh_comment,
    STATE(121), 1,
      sym_flag,
    ACTIONS(109), 6,
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
  [4589] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(73), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(89), 1,
      sym_fsh_comment,
    STATE(121), 1,
      sym_flag,
    ACTIONS(109), 6,
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
  [4629] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(140), 1,
      anon_sym_STAR,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      aux_sym_rule_set_repeat1,
    STATE(90), 1,
      sym_fsh_comment,
    STATE(401), 1,
      sym_rule_set_rule,
    STATE(387), 8,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_mapping_rule,
      sym_add_element_rule,
      sym_vs_component,
      sym_concept,
    STATE(374), 10,
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
  [4673] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(473), 1,
      anon_sym_Expression,
    ACTIONS(475), 1,
      anon_sym_Severity,
    ACTIONS(477), 1,
      anon_sym_XPath,
    STATE(91), 1,
      sym_fsh_comment,
    STATE(93), 1,
      aux_sym_invariant_repeat1,
    STATE(252), 1,
      sym_invariant_metadata,
    STATE(259), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
    ACTIONS(471), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [4721] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    STATE(92), 1,
      sym_fsh_comment,
    ACTIONS(202), 21,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4757] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(481), 1,
      anon_sym_Description,
    ACTIONS(484), 1,
      anon_sym_Expression,
    ACTIONS(487), 1,
      anon_sym_Severity,
    ACTIONS(490), 1,
      anon_sym_XPath,
    STATE(252), 1,
      sym_invariant_metadata,
    STATE(93), 2,
      sym_fsh_comment,
      aux_sym_invariant_repeat1,
    STATE(259), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
    ACTIONS(479), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [4803] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    STATE(94), 1,
      sym_fsh_comment,
    ACTIONS(198), 21,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4839] = 12,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      aux_sym_sequence_token1,
    ACTIONS(418), 1,
      anon_sym_SQUOTE,
    ACTIONS(493), 1,
      ts_builtin_sym_end,
    STATE(95), 1,
      sym_fsh_comment,
    STATE(578), 1,
      aux_sym_sequence_repeat1,
    STATE(662), 1,
      sym_sequence,
    STATE(196), 2,
      sym_code,
      sym_unit,
    ACTIONS(414), 13,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4889] = 12,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(243), 1,
      aux_sym_sequence_token1,
    ACTIONS(418), 1,
      anon_sym_SQUOTE,
    ACTIONS(493), 1,
      ts_builtin_sym_end,
    STATE(96), 1,
      sym_fsh_comment,
    STATE(578), 1,
      aux_sym_sequence_repeat1,
    STATE(661), 1,
      sym_sequence,
    STATE(196), 2,
      sym_code,
      sym_unit,
    ACTIONS(414), 12,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4938] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(497), 1,
      anon_sym_Description,
    ACTIONS(500), 1,
      anon_sym_Id,
    ACTIONS(503), 1,
      anon_sym_Title,
    STATE(234), 1,
      sym_cs_metadata,
    STATE(97), 2,
      sym_fsh_comment,
      aux_sym_codesystem_repeat1,
    STATE(238), 3,
      sym_description,
      sym_id,
      sym_title,
    ACTIONS(495), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4981] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(98), 1,
      sym_fsh_comment,
    STATE(102), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(121), 1,
      sym_flag,
    ACTIONS(109), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(506), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5020] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(508), 1,
      aux_sym_sequence_token1,
    STATE(99), 1,
      sym_fsh_comment,
    STATE(100), 1,
      aux_sym_sequence_repeat1,
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
  [5059] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(511), 1,
      aux_sym_sequence_token1,
    STATE(100), 2,
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
  [5096] = 5,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(101), 1,
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
  [5131] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(73), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(102), 1,
      sym_fsh_comment,
    STATE(121), 1,
      sym_flag,
    ACTIONS(109), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(514), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5170] = 13,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(243), 1,
      aux_sym_sequence_token1,
    ACTIONS(516), 1,
      ts_builtin_sym_end,
    ACTIONS(520), 1,
      anon_sym_POUND,
    ACTIONS(522), 1,
      anon_sym_DQUOTE,
    STATE(103), 1,
      sym_fsh_comment,
    STATE(135), 1,
      sym_string,
    STATE(393), 1,
      sym_code,
    STATE(578), 1,
      aux_sym_sequence_repeat1,
    STATE(658), 1,
      sym_sequence,
    ACTIONS(518), 12,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5221] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(140), 1,
      anon_sym_STAR,
    STATE(19), 1,
      aux_sym_param_rule_set_repeat1,
    STATE(104), 1,
      sym_fsh_comment,
    STATE(388), 1,
      sym_rule_set_rule,
    STATE(387), 8,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_mapping_rule,
      sym_add_element_rule,
      sym_vs_component,
      sym_concept,
    STATE(374), 10,
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
  [5262] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(105), 1,
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
  [5297] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(73), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(106), 1,
      sym_fsh_comment,
    STATE(121), 1,
      sym_flag,
    ACTIONS(109), 6,
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
  [5336] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(526), 1,
      ts_builtin_sym_end,
    STATE(107), 1,
      sym_fsh_comment,
    ACTIONS(528), 20,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5371] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(532), 1,
      anon_sym_Description,
    ACTIONS(535), 1,
      anon_sym_Id,
    ACTIONS(538), 1,
      anon_sym_Title,
    STATE(229), 1,
      sym_vs_metadata,
    STATE(108), 2,
      sym_fsh_comment,
      aux_sym_valueset_repeat1,
    STATE(233), 3,
      sym_description,
      sym_id,
      sym_title,
    ACTIONS(530), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5414] = 13,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(243), 1,
      aux_sym_sequence_token1,
    ACTIONS(520), 1,
      anon_sym_POUND,
    ACTIONS(522), 1,
      anon_sym_DQUOTE,
    ACTIONS(541), 1,
      ts_builtin_sym_end,
    STATE(109), 1,
      sym_fsh_comment,
    STATE(147), 1,
      sym_string,
    STATE(399), 1,
      sym_code,
    STATE(578), 1,
      aux_sym_sequence_repeat1,
    STATE(658), 1,
      sym_sequence,
    ACTIONS(543), 12,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5465] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(73), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(110), 1,
      sym_fsh_comment,
    STATE(121), 1,
      sym_flag,
    ACTIONS(109), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(545), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5504] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(549), 1,
      anon_sym_Instance,
    STATE(111), 1,
      sym_fsh_comment,
    ACTIONS(547), 20,
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
  [5539] = 7,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(194), 1,
      anon_sym_CARET,
    ACTIONS(551), 1,
      ts_builtin_sym_end,
    STATE(112), 1,
      sym_fsh_comment,
    STATE(605), 1,
      sym_caret_path,
    ACTIONS(356), 18,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5578] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    STATE(113), 1,
      sym_fsh_comment,
    ACTIONS(253), 19,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5612] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    STATE(114), 1,
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
  [5646] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(115), 1,
      sym_fsh_comment,
    ACTIONS(441), 20,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5678] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(116), 1,
      sym_fsh_comment,
    ACTIONS(553), 20,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5710] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(555), 1,
      aux_sym_sequence_token1,
    STATE(117), 2,
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
  [5746] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(558), 1,
      aux_sym_sequence_token1,
    STATE(117), 1,
      aux_sym_sequence_repeat1,
    STATE(118), 1,
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
  [5784] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(560), 1,
      aux_sym_sequence_token1,
    STATE(119), 2,
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
  [5820] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(563), 1,
      aux_sym_sequence_token1,
    STATE(119), 1,
      aux_sym_sequence_repeat1,
    STATE(120), 1,
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
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [5858] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(121), 1,
      sym_fsh_comment,
    ACTIONS(566), 20,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5890] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(122), 1,
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
  [5922] = 5,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(123), 1,
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
  [5956] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
    STATE(124), 1,
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
  [5990] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    STATE(125), 1,
      sym_fsh_comment,
    ACTIONS(202), 19,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6024] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    STATE(126), 1,
      sym_fsh_comment,
    ACTIONS(198), 19,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6058] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(127), 1,
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
  [6092] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
    STATE(128), 1,
      sym_fsh_comment,
    ACTIONS(220), 19,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6126] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(129), 1,
      sym_fsh_comment,
    ACTIONS(570), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6157] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    STATE(130), 1,
      sym_fsh_comment,
    ACTIONS(198), 18,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6190] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(572), 1,
      aux_sym_sequence_token1,
    STATE(131), 2,
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
  [6225] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(575), 1,
      aux_sym_sequence_token1,
    STATE(131), 1,
      aux_sym_sequence_repeat1,
    STATE(132), 1,
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
      anon_sym_InstanceOf,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_STAR,
  [6262] = 13,
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
    ACTIONS(577), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(133), 1,
      sym_fsh_comment,
    STATE(243), 1,
      aux_sym_sequence_repeat1,
    STATE(274), 1,
      sym_reference,
    STATE(275), 1,
      sym_target_type,
    STATE(273), 2,
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
  [6311] = 15,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(154), 1,
      aux_sym_sequence_token1,
    ACTIONS(180), 1,
      anon_sym_obeys,
    ACTIONS(188), 1,
      anon_sym_system,
    ACTIONS(192), 1,
      aux_sym_sequence_token2,
    ACTIONS(194), 1,
      anon_sym_CARET,
    ACTIONS(579), 1,
      anon_sym_insert,
    STATE(15), 1,
      sym_path,
    STATE(24), 1,
      aux_sym_sequence_repeat1,
    STATE(32), 1,
      sym_sequence,
    STATE(134), 1,
      sym_fsh_comment,
    STATE(577), 1,
      sym_name,
    STATE(630), 1,
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
  [6364] = 11,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(243), 1,
      aux_sym_sequence_token1,
    ACTIONS(520), 1,
      anon_sym_POUND,
    ACTIONS(541), 1,
      ts_builtin_sym_end,
    STATE(135), 1,
      sym_fsh_comment,
    STATE(399), 1,
      sym_code,
    STATE(578), 1,
      aux_sym_sequence_repeat1,
    STATE(658), 1,
      sym_sequence,
    ACTIONS(543), 12,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6409] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    STATE(136), 1,
      sym_fsh_comment,
    ACTIONS(202), 18,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6442] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(581), 1,
      aux_sym_sequence_token1,
    STATE(137), 1,
      sym_fsh_comment,
    STATE(141), 1,
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
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
      anon_sym_STAR,
  [6479] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    STATE(138), 1,
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
  [6512] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
    STATE(139), 1,
      sym_fsh_comment,
    ACTIONS(220), 18,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6545] = 13,
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
    ACTIONS(386), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(140), 1,
      sym_fsh_comment,
    STATE(274), 1,
      sym_reference,
    STATE(284), 1,
      sym_target_type,
    STATE(538), 1,
      aux_sym_sequence_repeat1,
    STATE(273), 2,
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
  [6594] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(583), 1,
      aux_sym_sequence_token1,
    STATE(141), 2,
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
  [6629] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    STATE(142), 1,
      sym_fsh_comment,
    ACTIONS(253), 18,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6662] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(143), 1,
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
  [6695] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
    STATE(144), 1,
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
  [6728] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(551), 1,
      ts_builtin_sym_end,
    STATE(145), 1,
      sym_fsh_comment,
    ACTIONS(356), 18,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6761] = 15,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(154), 1,
      aux_sym_sequence_token1,
    ACTIONS(180), 1,
      anon_sym_obeys,
    ACTIONS(192), 1,
      aux_sym_sequence_token2,
    ACTIONS(194), 1,
      anon_sym_CARET,
    ACTIONS(579), 1,
      anon_sym_insert,
    ACTIONS(586), 1,
      anon_sym_system,
    STATE(24), 1,
      aux_sym_sequence_repeat1,
    STATE(27), 1,
      sym_path,
    STATE(33), 1,
      sym_sequence,
    STATE(146), 1,
      sym_fsh_comment,
    STATE(577), 1,
      sym_name,
    STATE(630), 1,
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
  [6814] = 11,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(243), 1,
      aux_sym_sequence_token1,
    ACTIONS(520), 1,
      anon_sym_POUND,
    ACTIONS(588), 1,
      ts_builtin_sym_end,
    STATE(147), 1,
      sym_fsh_comment,
    STATE(378), 1,
      sym_code,
    STATE(578), 1,
      aux_sym_sequence_repeat1,
    STATE(658), 1,
      sym_sequence,
    ACTIONS(590), 12,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6859] = 5,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(148), 1,
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
  [6892] = 5,
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
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_STAR,
      aux_sym_sequence_token1,
  [6925] = 13,
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
    ACTIONS(577), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(150), 1,
      sym_fsh_comment,
    STATE(243), 1,
      aux_sym_sequence_repeat1,
    STATE(274), 1,
      sym_reference,
    STATE(284), 1,
      sym_target_type,
    STATE(273), 2,
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
  [6974] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(594), 1,
      anon_sym_DQUOTE,
    STATE(151), 1,
      sym_fsh_comment,
    STATE(214), 1,
      sym_string,
    ACTIONS(592), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [7008] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(598), 1,
      anon_sym_STAR,
    STATE(391), 1,
      sym_instance_rule,
    STATE(152), 2,
      sym_fsh_comment,
      aux_sym_instance_repeat2,
    STATE(394), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    ACTIONS(596), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [7044] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(153), 1,
      sym_fsh_comment,
    ACTIONS(601), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [7074] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(216), 1,
      anon_sym_STAR,
    STATE(152), 1,
      aux_sym_instance_repeat2,
    STATE(154), 1,
      sym_fsh_comment,
    STATE(391), 1,
      sym_instance_rule,
    STATE(394), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    ACTIONS(603), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [7112] = 4,
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
  [7142] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(259), 1,
      anon_sym_STAR,
    STATE(156), 1,
      sym_fsh_comment,
    STATE(158), 1,
      aux_sym_valueset_repeat2,
    STATE(369), 1,
      sym_vs_rule,
    STATE(397), 3,
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
  [7180] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(259), 1,
      anon_sym_STAR,
    STATE(157), 1,
      sym_fsh_comment,
    STATE(158), 1,
      aux_sym_valueset_repeat2,
    STATE(369), 1,
      sym_vs_rule,
    STATE(397), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
    ACTIONS(607), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [7218] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(611), 1,
      anon_sym_STAR,
    STATE(369), 1,
      sym_vs_rule,
    STATE(158), 2,
      sym_fsh_comment,
      aux_sym_valueset_repeat2,
    STATE(397), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
    ACTIONS(609), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [7254] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(263), 1,
      anon_sym_STAR,
    STATE(159), 1,
      sym_fsh_comment,
    STATE(165), 1,
      aux_sym_codesystem_repeat2,
    STATE(405), 1,
      sym_cs_rule,
    STATE(406), 3,
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
  [7292] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(614), 1,
      aux_sym_sequence_token1,
    STATE(160), 1,
      sym_fsh_comment,
    STATE(161), 1,
      aux_sym_sequence_repeat1,
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
  [7328] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(616), 1,
      aux_sym_sequence_token1,
    STATE(161), 2,
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
  [7362] = 19,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(194), 1,
      anon_sym_CARET,
    ACTIONS(579), 1,
      anon_sym_insert,
    ACTIONS(619), 1,
      anon_sym_codes,
    ACTIONS(621), 1,
      anon_sym_system,
    ACTIONS(623), 1,
      anon_sym_POUND,
    ACTIONS(625), 1,
      aux_sym_sequence_token1,
    STATE(151), 1,
      sym_code,
    STATE(162), 1,
      sym_fsh_comment,
    STATE(244), 1,
      sym_code_string,
    STATE(423), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(484), 1,
      aux_sym_sequence_repeat1,
    STATE(560), 1,
      sym_path,
    STATE(561), 1,
      sym_sequence,
    STATE(630), 1,
      sym_caret_path,
    ACTIONS(184), 2,
      anon_sym_include,
      anon_sym_exclude,
    STATE(404), 2,
      sym_vs_concept_component,
      sym_vs_filter_component,
  [7422] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(216), 1,
      anon_sym_STAR,
    STATE(152), 1,
      aux_sym_instance_repeat2,
    STATE(163), 1,
      sym_fsh_comment,
    STATE(391), 1,
      sym_instance_rule,
    STATE(394), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    ACTIONS(208), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [7460] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(263), 1,
      anon_sym_STAR,
    STATE(164), 1,
      sym_fsh_comment,
    STATE(165), 1,
      aux_sym_codesystem_repeat2,
    STATE(405), 1,
      sym_cs_rule,
    STATE(406), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
    ACTIONS(627), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [7498] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(631), 1,
      anon_sym_STAR,
    STATE(405), 1,
      sym_cs_rule,
    STATE(165), 2,
      sym_fsh_comment,
      aux_sym_codesystem_repeat2,
    STATE(406), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
    ACTIONS(629), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [7534] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(166), 1,
      sym_fsh_comment,
    ACTIONS(634), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [7564] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(636), 1,
      aux_sym_sequence_token1,
    STATE(167), 2,
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
  [7598] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(168), 1,
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
  [7630] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(639), 1,
      aux_sym_sequence_token1,
    STATE(169), 2,
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
  [7664] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(642), 1,
      aux_sym_sequence_token1,
    STATE(169), 1,
      aux_sym_sequence_repeat1,
    STATE(170), 1,
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
  [7700] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(174), 1,
      anon_sym_STAR,
    STATE(171), 1,
      sym_fsh_comment,
    STATE(172), 1,
      aux_sym_mapping_repeat2,
    STATE(375), 1,
      sym_mapping_entity_rule,
    STATE(377), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
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
  [7738] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(648), 1,
      anon_sym_STAR,
    STATE(375), 1,
      sym_mapping_entity_rule,
    STATE(172), 2,
      sym_fsh_comment,
      aux_sym_mapping_repeat2,
    STATE(377), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    ACTIONS(646), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [7774] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(651), 1,
      aux_sym_sequence_token1,
    STATE(167), 1,
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
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [7810] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(174), 1,
      anon_sym_STAR,
    STATE(172), 1,
      aux_sym_mapping_repeat2,
    STATE(174), 1,
      sym_fsh_comment,
    STATE(375), 1,
      sym_mapping_entity_rule,
    STATE(377), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
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
  [7848] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(653), 1,
      aux_sym_sequence_token1,
    STATE(175), 1,
      sym_fsh_comment,
    STATE(178), 1,
      aux_sym_sequence_repeat1,
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
  [7884] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(176), 1,
      sym_fsh_comment,
    ACTIONS(655), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [7914] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(177), 1,
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
  [7946] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(657), 1,
      aux_sym_sequence_token1,
    STATE(178), 2,
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
  [7980] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    STATE(179), 1,
      sym_fsh_comment,
    ACTIONS(202), 16,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [8042] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(664), 1,
      aux_sym_sequence_token1,
    STATE(181), 2,
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
  [8075] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(667), 1,
      aux_sym_sequence_token1,
    STATE(182), 1,
      sym_fsh_comment,
    STATE(204), 1,
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
  [8110] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(183), 1,
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
  [8141] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(669), 1,
      aux_sym_sequence_token1,
    STATE(181), 1,
      aux_sym_sequence_repeat1,
    STATE(184), 1,
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
  [8176] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(671), 1,
      aux_sym_sequence_token1,
    STATE(185), 1,
      sym_fsh_comment,
    STATE(197), 1,
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
  [8211] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    STATE(186), 1,
      sym_fsh_comment,
    ACTIONS(198), 16,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [8242] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(187), 1,
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
  [8273] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(188), 1,
      sym_fsh_comment,
    ACTIONS(673), 2,
      aux_sym_cardinality_token1,
      anon_sym_STAR2,
    ACTIONS(443), 15,
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
  [8304] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(189), 1,
      sym_fsh_comment,
    ACTIONS(675), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [8333] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(190), 1,
      sym_fsh_comment,
    ACTIONS(677), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [8362] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(679), 1,
      aux_sym_sequence_token1,
    STATE(191), 2,
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
  [8395] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(682), 1,
      aux_sym_sequence_token1,
    STATE(191), 1,
      aux_sym_sequence_repeat1,
    STATE(192), 1,
      sym_fsh_comment,
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
  [8430] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(193), 1,
      sym_fsh_comment,
    ACTIONS(684), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [8459] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(686), 1,
      aux_sym_sequence_token1,
    STATE(194), 2,
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
  [8492] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(195), 1,
      sym_fsh_comment,
    ACTIONS(689), 2,
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
  [8523] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(594), 1,
      anon_sym_DQUOTE,
    STATE(196), 1,
      sym_fsh_comment,
    STATE(292), 1,
      sym_string,
    ACTIONS(691), 15,
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
  [8556] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(693), 1,
      aux_sym_sequence_token1,
    STATE(197), 2,
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
  [8589] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(696), 1,
      aux_sym_sequence_token1,
    STATE(194), 1,
      aux_sym_sequence_repeat1,
    STATE(198), 1,
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
      anon_sym_where,
  [8624] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(698), 1,
      aux_sym_sequence_token1,
    STATE(199), 2,
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
  [8657] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(200), 1,
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
  [8688] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(201), 1,
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
  [8719] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(701), 1,
      aux_sym_sequence_token1,
    STATE(202), 2,
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
  [8752] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(706), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(203), 1,
      sym_fsh_comment,
    STATE(396), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(704), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [8787] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(708), 1,
      aux_sym_sequence_token1,
    STATE(204), 2,
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
  [8820] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(711), 1,
      aux_sym_sequence_token1,
    STATE(202), 1,
      aux_sym_sequence_repeat1,
    STATE(205), 1,
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
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [8855] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(117), 1,
      aux_sym_sequence_token1,
    STATE(199), 1,
      aux_sym_sequence_repeat1,
    STATE(206), 1,
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
      anon_sym_LPAREN,
      anon_sym_POUND,
  [8890] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(715), 1,
      anon_sym_Instance,
    STATE(207), 1,
      sym_fsh_comment,
    ACTIONS(713), 16,
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
  [8921] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(706), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(208), 1,
      sym_fsh_comment,
    STATE(392), 2,
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
    ACTIONS(706), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(209), 1,
      sym_fsh_comment,
    STATE(383), 2,
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
    ACTIONS(706), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(210), 1,
      sym_fsh_comment,
    STATE(384), 2,
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
  [9026] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(706), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(211), 1,
      sym_fsh_comment,
    STATE(395), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(723), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [9061] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(727), 1,
      anon_sym_Instance,
    STATE(212), 1,
      sym_fsh_comment,
    ACTIONS(725), 16,
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
  [9092] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(731), 1,
      anon_sym_Instance,
    STATE(213), 1,
      sym_fsh_comment,
    ACTIONS(729), 16,
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
  [9123] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(214), 1,
      sym_fsh_comment,
    ACTIONS(733), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [9151] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(215), 1,
      sym_fsh_comment,
    STATE(226), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(735), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [9181] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(216), 1,
      sym_fsh_comment,
    ACTIONS(737), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [9209] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(217), 1,
      sym_fsh_comment,
    ACTIONS(739), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [9237] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(741), 1,
      aux_sym_sequence_token1,
    STATE(218), 1,
      sym_fsh_comment,
    STATE(230), 1,
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
      anon_sym_LPAREN,
  [9271] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(219), 1,
      sym_fsh_comment,
    ACTIONS(743), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [9299] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(220), 1,
      sym_fsh_comment,
    ACTIONS(745), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [9327] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(221), 1,
      sym_fsh_comment,
    ACTIONS(747), 16,
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
  [9355] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(749), 1,
      aux_sym_sequence_token1,
    STATE(222), 1,
      sym_fsh_comment,
    STATE(261), 1,
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
  [9389] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(753), 1,
      anon_sym_and,
    STATE(223), 1,
      sym_fsh_comment,
    STATE(262), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(751), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [9421] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    STATE(224), 1,
      sym_fsh_comment,
    ACTIONS(202), 15,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [9451] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    STATE(225), 1,
      sym_fsh_comment,
    ACTIONS(198), 15,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [9481] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(226), 1,
      sym_fsh_comment,
    STATE(262), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(751), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [9511] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(755), 1,
      aux_sym_sequence_token1,
    STATE(227), 1,
      sym_fsh_comment,
    STATE(228), 1,
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
      anon_sym_DQUOTE,
  [9545] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(757), 1,
      aux_sym_sequence_token1,
    STATE(228), 2,
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
  [9577] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(229), 1,
      sym_fsh_comment,
    ACTIONS(760), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [9605] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(762), 1,
      aux_sym_sequence_token1,
    STATE(230), 2,
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
  [9637] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(231), 1,
      sym_fsh_comment,
    ACTIONS(765), 16,
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
  [9665] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(232), 1,
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
  [9695] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(233), 1,
      sym_fsh_comment,
    ACTIONS(767), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [9723] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(234), 1,
      sym_fsh_comment,
    ACTIONS(769), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [9751] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(235), 1,
      sym_fsh_comment,
    ACTIONS(771), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [9779] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(236), 1,
      sym_fsh_comment,
    ACTIONS(773), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [9807] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(237), 1,
      sym_fsh_comment,
    ACTIONS(775), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [9835] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(238), 1,
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
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Title,
      anon_sym_STAR,
  [9863] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(239), 1,
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
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [9891] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(240), 1,
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
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_or,
      anon_sym_DQUOTE,
  [9919] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(241), 1,
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
  [9949] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(783), 1,
      aux_sym_sequence_token1,
    STATE(242), 2,
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
  [9981] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(577), 1,
      aux_sym_sequence_token1,
    STATE(242), 1,
      aux_sym_sequence_repeat1,
    STATE(243), 1,
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
      anon_sym_or,
  [10015] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(788), 1,
      anon_sym_from,
    ACTIONS(790), 1,
      anon_sym_and,
    STATE(244), 1,
      sym_fsh_comment,
    STATE(371), 1,
      sym_vs_component_from,
    ACTIONS(786), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [10049] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(245), 1,
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
  [10079] = 5,
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
  [10109] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(792), 1,
      aux_sym_sequence_token1,
    STATE(247), 2,
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
  [10141] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(248), 1,
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
  [10171] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      aux_sym_sequence_token1,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(247), 1,
      aux_sym_sequence_repeat1,
    STATE(249), 1,
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
      anon_sym_POUND,
  [10205] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(339), 1,
      sym_flag,
    STATE(250), 2,
      sym_fsh_comment,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(797), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(795), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      sym_number,
      anon_sym_Reference,
      anon_sym_Canonical,
  [10237] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(251), 1,
      sym_fsh_comment,
    ACTIONS(148), 2,
      anon_sym_or,
      anon_sym_DQUOTE,
    ACTIONS(800), 14,
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
  [10267] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(252), 1,
      sym_fsh_comment,
    ACTIONS(802), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [10295] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(804), 1,
      aux_sym_sequence_token1,
    STATE(253), 1,
      sym_fsh_comment,
    STATE(255), 1,
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
      anon_sym_where,
  [10329] = 5,
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
      anon_sym_insert,
      anon_sym_DASH_GT,
      aux_sym_sequence_token1,
  [10359] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(806), 1,
      aux_sym_sequence_token1,
    STATE(255), 2,
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
  [10391] = 11,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(811), 1,
      aux_sym_sequence_token1,
    ACTIONS(813), 1,
      aux_sym_sequence_token2,
    STATE(256), 1,
      sym_fsh_comment,
    STATE(294), 1,
      sym_vs_filter_definition,
    STATE(403), 1,
      sym_vs_filter_list,
    STATE(453), 1,
      sym_name,
    STATE(542), 1,
      aux_sym_sequence_repeat1,
    STATE(548), 1,
      sym_sequence,
    ACTIONS(809), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [10433] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(257), 1,
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
  [10463] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(594), 1,
      anon_sym_DQUOTE,
    STATE(258), 1,
      sym_fsh_comment,
    STATE(320), 1,
      sym_string,
    ACTIONS(815), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [10495] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(259), 1,
      sym_fsh_comment,
    ACTIONS(817), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [10523] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(753), 1,
      anon_sym_and,
    STATE(223), 1,
      aux_sym_obeys_rule_repeat1,
    STATE(260), 1,
      sym_fsh_comment,
    ACTIONS(735), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [10555] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(819), 1,
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
      anon_sym_and,
  [10587] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(824), 1,
      anon_sym_and,
    STATE(262), 2,
      sym_fsh_comment,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(822), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [10617] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(263), 1,
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
    STATE(351), 1,
      sym_item,
    STATE(486), 1,
      aux_sym_sequence_repeat1,
    STATE(545), 1,
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
  [10685] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(265), 1,
      sym_fsh_comment,
    STATE(302), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(751), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [10714] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(829), 1,
      anon_sym_and,
    STATE(266), 1,
      sym_fsh_comment,
    STATE(280), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(735), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [10745] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(831), 1,
      aux_sym_sequence_token1,
    STATE(267), 2,
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
      anon_sym_POUND,
  [10776] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(836), 1,
      anon_sym_LPAREN,
    STATE(268), 1,
      sym_fsh_comment,
    STATE(407), 1,
      sym_strength,
    ACTIONS(834), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [10807] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(269), 1,
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
  [10836] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(840), 1,
      anon_sym_and,
    STATE(270), 1,
      sym_fsh_comment,
    STATE(311), 1,
      aux_sym_contains_rule_repeat1,
    ACTIONS(838), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [10867] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(842), 1,
      aux_sym_sequence_token1,
    STATE(267), 1,
      aux_sym_sequence_repeat1,
    STATE(271), 1,
      sym_fsh_comment,
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
      anon_sym_POUND,
  [10900] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(829), 1,
      anon_sym_and,
    STATE(272), 1,
      sym_fsh_comment,
    STATE(310), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(844), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [10931] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(273), 1,
      sym_fsh_comment,
    ACTIONS(846), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [10958] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(274), 1,
      sym_fsh_comment,
    ACTIONS(848), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [10985] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(852), 1,
      anon_sym_or,
    STATE(275), 1,
      sym_fsh_comment,
    STATE(300), 1,
      aux_sym_only_rule_repeat1,
    ACTIONS(850), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [11016] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(856), 1,
      anon_sym_and,
    STATE(276), 1,
      sym_fsh_comment,
    STATE(289), 1,
      aux_sym_vs_filter_list_repeat1,
    ACTIONS(854), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [11047] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(493), 1,
      anon_sym_COLON,
    STATE(277), 1,
      sym_fsh_comment,
    ACTIONS(815), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [11076] = 10,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(811), 1,
      aux_sym_sequence_token1,
    ACTIONS(813), 1,
      aux_sym_sequence_token2,
    STATE(278), 1,
      sym_fsh_comment,
    STATE(359), 1,
      sym_vs_filter_definition,
    STATE(453), 1,
      sym_name,
    STATE(542), 1,
      aux_sym_sequence_repeat1,
    STATE(548), 1,
      sym_sequence,
    ACTIONS(809), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [11115] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    STATE(279), 1,
      sym_fsh_comment,
    ACTIONS(196), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [11144] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(829), 1,
      anon_sym_and,
    STATE(280), 1,
      sym_fsh_comment,
    STATE(302), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(751), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [11175] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(860), 1,
      anon_sym_or,
    STATE(281), 2,
      sym_fsh_comment,
      aux_sym_only_rule_repeat1,
    ACTIONS(858), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [11204] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(865), 1,
      anon_sym_and,
    STATE(282), 1,
      sym_fsh_comment,
    ACTIONS(863), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [11233] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(867), 1,
      anon_sym_and,
    STATE(283), 1,
      sym_fsh_comment,
    ACTIONS(863), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [11262] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(284), 1,
      sym_fsh_comment,
    ACTIONS(858), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [11289] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    STATE(285), 1,
      sym_fsh_comment,
    ACTIONS(200), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [11318] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(265), 1,
      aux_sym_obeys_rule_repeat1,
    STATE(286), 1,
      sym_fsh_comment,
    ACTIONS(735), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [11347] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(869), 1,
      anon_sym_POUND,
    STATE(287), 1,
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
  [11376] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(873), 1,
      anon_sym_and,
    STATE(288), 2,
      sym_fsh_comment,
      aux_sym_contains_rule_repeat1,
    ACTIONS(871), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [11405] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(878), 1,
      anon_sym_and,
    STATE(289), 2,
      sym_fsh_comment,
      aux_sym_vs_filter_list_repeat1,
    ACTIONS(876), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [11434] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(881), 1,
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
  [11465] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(291), 1,
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
  [11494] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(292), 1,
      sym_fsh_comment,
    ACTIONS(884), 15,
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
  [11521] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(886), 1,
      aux_sym_sequence_token1,
    STATE(290), 1,
      aux_sym_sequence_repeat1,
    STATE(293), 1,
      sym_fsh_comment,
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
  [11554] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(856), 1,
      anon_sym_and,
    STATE(276), 1,
      aux_sym_vs_filter_list_repeat1,
    STATE(294), 1,
      sym_fsh_comment,
    ACTIONS(888), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [11585] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(892), 1,
      anon_sym_T,
    STATE(295), 1,
      sym_fsh_comment,
    ACTIONS(890), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [11614] = 10,
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
    STATE(270), 1,
      sym_item,
    STATE(296), 1,
      sym_fsh_comment,
    STATE(486), 1,
      aux_sym_sequence_repeat1,
    STATE(545), 1,
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
  [11653] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(297), 1,
      sym_fsh_comment,
    ACTIONS(894), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [11680] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(829), 1,
      anon_sym_and,
    STATE(298), 1,
      sym_fsh_comment,
    STATE(302), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(844), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [11711] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(299), 1,
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
  [11740] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(852), 1,
      anon_sym_or,
    STATE(281), 1,
      aux_sym_only_rule_repeat1,
    STATE(300), 1,
      sym_fsh_comment,
    ACTIONS(896), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [11771] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(301), 1,
      sym_fsh_comment,
    ACTIONS(822), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [11798] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(898), 1,
      anon_sym_and,
    STATE(302), 2,
      sym_fsh_comment,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(822), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [11827] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(91), 1,
      anon_sym_EQ,
    ACTIONS(93), 1,
      anon_sym_insert,
    STATE(303), 1,
      sym_fsh_comment,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [11858] = 5,
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
      anon_sym_POUND,
      aux_sym_sequence_token1,
  [11887] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(93), 1,
      anon_sym_insert,
    ACTIONS(105), 1,
      anon_sym_DASH_GT,
    STATE(305), 1,
      sym_fsh_comment,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
  [11918] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(306), 1,
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
  [11947] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(307), 1,
      sym_fsh_comment,
    ACTIONS(901), 15,
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
  [11974] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(308), 1,
      sym_fsh_comment,
    ACTIONS(443), 15,
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
  [12001] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(829), 1,
      anon_sym_and,
    STATE(298), 1,
      aux_sym_obeys_rule_repeat1,
    STATE(309), 1,
      sym_fsh_comment,
    ACTIONS(903), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [12032] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(829), 1,
      anon_sym_and,
    STATE(302), 1,
      aux_sym_obeys_rule_repeat1,
    STATE(310), 1,
      sym_fsh_comment,
    ACTIONS(905), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [12063] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(840), 1,
      anon_sym_and,
    STATE(288), 1,
      aux_sym_contains_rule_repeat1,
    STATE(311), 1,
      sym_fsh_comment,
    ACTIONS(907), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [12094] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(581), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(129), 1,
      sym_name,
    STATE(137), 1,
      aux_sym_sequence_repeat1,
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
  [12130] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(909), 1,
      aux_sym_sequence_token1,
    STATE(313), 2,
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
  [12160] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(912), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(314), 1,
      sym_fsh_comment,
    STATE(526), 1,
      aux_sym_sequence_repeat1,
    STATE(564), 1,
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
  [12196] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(315), 1,
      sym_fsh_comment,
    ACTIONS(800), 14,
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
  [12222] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(916), 1,
      anon_sym_LPAREN,
    STATE(316), 1,
      sym_fsh_comment,
    ACTIONS(914), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [12250] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(581), 1,
      aux_sym_sequence_token1,
    STATE(5), 1,
      sym_name,
    STATE(22), 1,
      sym_sequence,
    STATE(137), 1,
      aux_sym_sequence_repeat1,
    STATE(317), 1,
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
  [12286] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    STATE(318), 1,
      sym_fsh_comment,
    ACTIONS(918), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [12314] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(581), 1,
      aux_sym_sequence_token1,
    STATE(4), 1,
      sym_name,
    STATE(22), 1,
      sym_sequence,
    STATE(137), 1,
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
  [12350] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(320), 1,
      sym_fsh_comment,
    ACTIONS(920), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [12376] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(749), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(222), 1,
      aux_sym_sequence_repeat1,
    STATE(301), 1,
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
  [12412] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(575), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(132), 1,
      aux_sym_sequence_repeat1,
    STATE(212), 1,
      sym_name,
    STATE(322), 1,
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
  [12448] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(558), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(30), 1,
      sym_name,
    STATE(118), 1,
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
  [12484] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(642), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(51), 1,
      sym_name,
    STATE(170), 1,
      aux_sym_sequence_repeat1,
    STATE(324), 1,
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
  [12520] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(741), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(218), 1,
      aux_sym_sequence_repeat1,
    STATE(268), 1,
      sym_name,
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
  [12556] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(326), 1,
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
  [12582] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(924), 1,
      aux_sym_sequence_token1,
    STATE(313), 1,
      aux_sym_sequence_repeat1,
    STATE(327), 1,
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
  [12614] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(642), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(52), 1,
      sym_name,
    STATE(170), 1,
      aux_sym_sequence_repeat1,
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
  [12650] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(329), 1,
      sym_fsh_comment,
    ACTIONS(926), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [12676] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(575), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(41), 1,
      sym_name,
    STATE(132), 1,
      aux_sym_sequence_repeat1,
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
  [12712] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(928), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(331), 1,
      sym_fsh_comment,
    STATE(414), 1,
      sym_name,
    STATE(444), 1,
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
  [12748] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(581), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_name,
    STATE(22), 1,
      sym_sequence,
    STATE(137), 1,
      aux_sym_sequence_repeat1,
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
  [12784] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(749), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(222), 1,
      aux_sym_sequence_repeat1,
    STATE(272), 1,
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
  [12820] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    STATE(334), 1,
      sym_fsh_comment,
    ACTIONS(930), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [12848] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(933), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(335), 1,
      sym_fsh_comment,
    STATE(416), 1,
      sym_name,
    STATE(441), 1,
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
  [12884] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(336), 1,
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
  [12912] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(749), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(222), 1,
      aux_sym_sequence_repeat1,
    STATE(266), 1,
      sym_name,
    STATE(337), 1,
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
  [12948] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(886), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(293), 1,
      aux_sym_sequence_repeat1,
    STATE(297), 1,
      sym_name,
    STATE(338), 1,
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
  [12984] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(339), 1,
      sym_fsh_comment,
    ACTIONS(935), 14,
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
  [13010] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(340), 1,
      sym_fsh_comment,
    ACTIONS(815), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [13036] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(341), 1,
      sym_fsh_comment,
    ACTIONS(937), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [13062] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(749), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(222), 1,
      aux_sym_sequence_repeat1,
    STATE(309), 1,
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
  [13098] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(696), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(198), 1,
      aux_sym_sequence_repeat1,
    STATE(260), 1,
      sym_name,
    STATE(343), 1,
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
  [13134] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(344), 1,
      sym_fsh_comment,
    ACTIONS(939), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [13160] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(345), 1,
      sym_fsh_comment,
    ACTIONS(493), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [13186] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(346), 1,
      sym_fsh_comment,
    ACTIONS(941), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [13212] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(804), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(253), 1,
      aux_sym_sequence_repeat1,
    STATE(297), 1,
      sym_name,
    STATE(347), 1,
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
  [13248] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(348), 1,
      sym_fsh_comment,
    ACTIONS(943), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [13274] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(558), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(118), 1,
      aux_sym_sequence_repeat1,
    STATE(129), 1,
      sym_name,
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
  [13310] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(581), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(137), 1,
      aux_sym_sequence_repeat1,
    STATE(193), 1,
      sym_name,
    STATE(350), 1,
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
  [13346] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(351), 1,
      sym_fsh_comment,
    ACTIONS(871), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [13372] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(749), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(222), 1,
      aux_sym_sequence_repeat1,
    STATE(286), 1,
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
  [13408] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    STATE(353), 1,
      sym_fsh_comment,
    ACTIONS(945), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [13436] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(947), 1,
      anon_sym_POUND,
    STATE(354), 1,
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
  [13464] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(696), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(198), 1,
      aux_sym_sequence_repeat1,
    STATE(215), 1,
      sym_name,
    STATE(355), 1,
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
  [13500] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(356), 1,
      sym_fsh_comment,
    ACTIONS(949), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [13526] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(696), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(198), 1,
      aux_sym_sequence_repeat1,
    STATE(297), 1,
      sym_name,
    STATE(357), 1,
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
  [13562] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(358), 1,
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
      anon_sym_POUND,
      aux_sym_sequence_token1,
  [13590] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(359), 1,
      sym_fsh_comment,
    ACTIONS(876), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [13616] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    STATE(360), 1,
      sym_fsh_comment,
    ACTIONS(951), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [13644] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(953), 1,
      anon_sym_and,
    STATE(361), 1,
      sym_fsh_comment,
    ACTIONS(863), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [13672] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(642), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(129), 1,
      sym_name,
    STATE(170), 1,
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
  [13708] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(749), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(222), 1,
      aux_sym_sequence_repeat1,
    STATE(297), 1,
      sym_name,
    STATE(363), 1,
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
  [13744] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(955), 1,
      anon_sym_and,
    STATE(364), 1,
      sym_fsh_comment,
    ACTIONS(863), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [13772] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(696), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(198), 1,
      aux_sym_sequence_repeat1,
    STATE(301), 1,
      sym_name,
    STATE(365), 1,
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
  [13808] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(959), 1,
      anon_sym_where,
    STATE(366), 1,
      sym_fsh_comment,
    ACTIONS(957), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [13836] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    STATE(367), 1,
      sym_fsh_comment,
    ACTIONS(961), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [13864] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(368), 1,
      sym_fsh_comment,
    ACTIONS(963), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [13889] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(369), 1,
      sym_fsh_comment,
    ACTIONS(965), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [13914] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(370), 1,
      sym_fsh_comment,
    ACTIONS(967), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [13939] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(371), 1,
      sym_fsh_comment,
    ACTIONS(969), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [13964] = 4,
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
  [13989] = 4,
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
  [14014] = 4,
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
  [14039] = 4,
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
  [14064] = 4,
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
  [14089] = 4,
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
  [14114] = 4,
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
  [14139] = 4,
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
  [14164] = 4,
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
  [14189] = 4,
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
  [14214] = 4,
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
  [14239] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(383), 1,
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
  [14264] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(384), 1,
      sym_fsh_comment,
    ACTIONS(723), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [14289] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(385), 1,
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
  [14314] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(386), 1,
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
  [14339] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(387), 1,
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
  [14364] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(388), 1,
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
  [14389] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(389), 1,
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
  [14414] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1005), 1,
      anon_sym_POUND,
    STATE(390), 1,
      sym_fsh_comment,
    ACTIONS(1003), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [14441] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(391), 1,
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
  [14466] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(392), 1,
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
  [14491] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(393), 1,
      sym_fsh_comment,
    ACTIONS(541), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [14516] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(394), 1,
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
  [14541] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(395), 1,
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
  [14566] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(396), 1,
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
  [14591] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(397), 1,
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
  [14616] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(398), 1,
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
  [14641] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(399), 1,
      sym_fsh_comment,
    ACTIONS(588), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [14666] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(400), 1,
      sym_fsh_comment,
    ACTIONS(1020), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [14691] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(401), 1,
      sym_fsh_comment,
    ACTIONS(1022), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [14716] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(402), 1,
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
  [14743] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(403), 1,
      sym_fsh_comment,
    ACTIONS(1024), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [14768] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(404), 1,
      sym_fsh_comment,
    ACTIONS(1026), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [14793] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(405), 1,
      sym_fsh_comment,
    ACTIONS(1028), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [14818] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(406), 1,
      sym_fsh_comment,
    ACTIONS(1030), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [14843] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(407), 1,
      sym_fsh_comment,
    ACTIONS(1032), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [14868] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(408), 1,
      sym_fsh_comment,
    ACTIONS(1034), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [14893] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(409), 1,
      sym_fsh_comment,
    ACTIONS(1036), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [14918] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(410), 1,
      sym_fsh_comment,
    ACTIONS(1038), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [14943] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(411), 1,
      sym_fsh_comment,
    ACTIONS(1040), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [14967] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(412), 1,
      sym_fsh_comment,
    ACTIONS(1003), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [14991] = 13,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(243), 1,
      aux_sym_sequence_token1,
    ACTIONS(619), 1,
      anon_sym_codes,
    ACTIONS(623), 1,
      anon_sym_POUND,
    STATE(151), 1,
      sym_code,
    STATE(244), 1,
      sym_code_string,
    STATE(413), 1,
      sym_fsh_comment,
    STATE(423), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(578), 1,
      aux_sym_sequence_repeat1,
    STATE(654), 1,
      sym_sequence,
    STATE(385), 2,
      sym_vs_concept_component,
      sym_vs_filter_component,
  [15032] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(473), 1,
      anon_sym_Expression,
    ACTIONS(475), 1,
      anon_sym_Severity,
    ACTIONS(477), 1,
      anon_sym_XPath,
    STATE(91), 1,
      aux_sym_invariant_repeat1,
    STATE(252), 1,
      sym_invariant_metadata,
    STATE(414), 1,
      sym_fsh_comment,
    STATE(259), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
  [15066] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(99), 1,
      anon_sym_and,
    STATE(110), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(121), 1,
      sym_flag,
    STATE(415), 1,
      sym_fsh_comment,
    STATE(421), 1,
      aux_sym_flag_rule_repeat1,
    ACTIONS(109), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [15096] = 10,
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
    STATE(9), 1,
      aux_sym_profile_repeat1,
    STATE(190), 1,
      sym_sd_metadata,
    STATE(416), 1,
      sym_fsh_comment,
    STATE(189), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
  [15130] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1042), 1,
      aux_sym_sequence_token1,
    STATE(417), 2,
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
  [15153] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1045), 1,
      aux_sym_sequence_token1,
    STATE(417), 1,
      aux_sym_sequence_repeat1,
    STATE(418), 1,
      sym_fsh_comment,
    ACTIONS(33), 7,
      anon_sym_and,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [15178] = 11,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(182), 1,
      anon_sym_DASH_GT,
    ACTIONS(579), 1,
      anon_sym_insert,
    ACTIONS(621), 1,
      anon_sym_system,
    ACTIONS(671), 1,
      aux_sym_sequence_token1,
    STATE(65), 1,
      sym_sequence,
    STATE(185), 1,
      aux_sym_sequence_repeat1,
    STATE(305), 1,
      sym_path,
    STATE(419), 1,
      sym_fsh_comment,
  [15212] = 10,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1047), 1,
      anon_sym_POUND,
    ACTIONS(1050), 1,
      aux_sym_sequence_token1,
    ACTIONS(1053), 1,
      aux_sym_sequence_token2,
    STATE(151), 1,
      sym_code,
    STATE(578), 1,
      aux_sym_sequence_repeat1,
    STATE(642), 1,
      sym_code_string,
    STATE(657), 1,
      sym_sequence,
    STATE(420), 2,
      sym_fsh_comment,
      aux_sym_vs_concept_component_repeat1,
  [15244] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1056), 1,
      anon_sym_and,
    STATE(421), 2,
      sym_fsh_comment,
      aux_sym_flag_rule_repeat1,
    ACTIONS(1059), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [15266] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(422), 1,
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
  [15286] = 11,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(243), 1,
      aux_sym_sequence_token1,
    ACTIONS(1061), 1,
      anon_sym_POUND,
    STATE(151), 1,
      sym_code,
    STATE(420), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(423), 1,
      sym_fsh_comment,
    STATE(552), 1,
      sym_code_string,
    STATE(578), 1,
      aux_sym_sequence_repeat1,
    STATE(655), 1,
      sym_sequence,
  [15320] = 11,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(243), 1,
      aux_sym_sequence_token1,
    ACTIONS(1063), 1,
      anon_sym_insert,
    ACTIONS(1065), 1,
      anon_sym_POUND,
    STATE(53), 1,
      aux_sym_code_insert_rule_repeat1,
    STATE(112), 1,
      sym_code,
    STATE(424), 1,
      sym_fsh_comment,
    STATE(578), 1,
      aux_sym_sequence_repeat1,
    STATE(643), 1,
      sym_sequence,
  [15354] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(425), 1,
      sym_fsh_comment,
    ACTIONS(1059), 7,
      anon_sym_and,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [15373] = 10,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(579), 1,
      anon_sym_insert,
    ACTIONS(621), 1,
      anon_sym_system,
    ACTIONS(667), 1,
      aux_sym_sequence_token1,
    STATE(65), 1,
      sym_sequence,
    STATE(182), 1,
      aux_sym_sequence_repeat1,
    STATE(303), 1,
      sym_path,
    STATE(426), 1,
      sym_fsh_comment,
  [15404] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(614), 1,
      aux_sym_sequence_token1,
    STATE(47), 1,
      sym_sequence,
    STATE(48), 1,
      sym_string,
    STATE(160), 1,
      aux_sym_sequence_repeat1,
    STATE(427), 1,
      sym_fsh_comment,
  [15432] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1067), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_string,
    STATE(39), 1,
      sym_sequence,
    STATE(428), 1,
      sym_fsh_comment,
    STATE(540), 1,
      aux_sym_sequence_repeat1,
  [15460] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(886), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_string,
    STATE(39), 1,
      sym_sequence,
    STATE(293), 1,
      aux_sym_sequence_repeat1,
    STATE(429), 1,
      sym_fsh_comment,
  [15488] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(682), 1,
      aux_sym_sequence_token1,
    STATE(47), 1,
      sym_sequence,
    STATE(48), 1,
      sym_string,
    STATE(192), 1,
      aux_sym_sequence_repeat1,
    STATE(430), 1,
      sym_fsh_comment,
  [15516] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(653), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_string,
    STATE(39), 1,
      sym_sequence,
    STATE(175), 1,
      aux_sym_sequence_repeat1,
    STATE(431), 1,
      sym_fsh_comment,
  [15544] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(682), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_string,
    STATE(39), 1,
      sym_sequence,
    STATE(192), 1,
      aux_sym_sequence_repeat1,
    STATE(432), 1,
      sym_fsh_comment,
  [15572] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(653), 1,
      aux_sym_sequence_token1,
    STATE(47), 1,
      sym_sequence,
    STATE(48), 1,
      sym_string,
    STATE(175), 1,
      aux_sym_sequence_repeat1,
    STATE(433), 1,
      sym_fsh_comment,
  [15600] = 9,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1069), 1,
      aux_sym_sequence_token1,
    ACTIONS(1071), 1,
      aux_sym_sequence_token2,
    ACTIONS(1073), 1,
      anon_sym_DQUOTE,
    STATE(99), 1,
      aux_sym_sequence_repeat1,
    STATE(114), 1,
      sym_string,
    STATE(128), 1,
      sym_sequence,
    STATE(434), 1,
      sym_fsh_comment,
  [15628] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(243), 1,
      aux_sym_sequence_token1,
    ACTIONS(1075), 1,
      anon_sym_POUND,
    STATE(155), 1,
      sym_code,
    STATE(435), 1,
      sym_fsh_comment,
    STATE(578), 1,
      aux_sym_sequence_repeat1,
    STATE(656), 1,
      sym_sequence,
  [15656] = 9,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1077), 1,
      aux_sym_sequence_token1,
    ACTIONS(1079), 1,
      aux_sym_sequence_token2,
    ACTIONS(1081), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      aux_sym_sequence_repeat1,
    STATE(74), 1,
      sym_string,
    STATE(79), 1,
      sym_sequence,
    STATE(436), 1,
      sym_fsh_comment,
  [15684] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1083), 1,
      aux_sym_sequence_token1,
    STATE(437), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 4,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
  [15704] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(711), 1,
      aux_sym_sequence_token1,
    STATE(47), 1,
      sym_sequence,
    STATE(48), 1,
      sym_string,
    STATE(205), 1,
      aux_sym_sequence_repeat1,
    STATE(438), 1,
      sym_fsh_comment,
  [15732] = 9,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1077), 1,
      aux_sym_sequence_token1,
    ACTIONS(1079), 1,
      aux_sym_sequence_token2,
    ACTIONS(1081), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      aux_sym_sequence_repeat1,
    STATE(86), 1,
      sym_sequence,
    STATE(87), 1,
      sym_string,
    STATE(439), 1,
      sym_fsh_comment,
  [15760] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(755), 1,
      aux_sym_sequence_token1,
    STATE(47), 1,
      sym_sequence,
    STATE(48), 1,
      sym_string,
    STATE(227), 1,
      aux_sym_sequence_repeat1,
    STATE(440), 1,
      sym_fsh_comment,
  [15788] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(933), 1,
      aux_sym_sequence_token1,
    STATE(437), 1,
      aux_sym_sequence_repeat1,
    STATE(441), 1,
      sym_fsh_comment,
    ACTIONS(33), 4,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
  [15810] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(711), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_string,
    STATE(39), 1,
      sym_sequence,
    STATE(205), 1,
      aux_sym_sequence_repeat1,
    STATE(442), 1,
      sym_fsh_comment,
  [15838] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(651), 1,
      aux_sym_sequence_token1,
    STATE(47), 1,
      sym_sequence,
    STATE(48), 1,
      sym_string,
    STATE(173), 1,
      aux_sym_sequence_repeat1,
    STATE(443), 1,
      sym_fsh_comment,
  [15866] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(928), 1,
      aux_sym_sequence_token1,
    STATE(444), 1,
      sym_fsh_comment,
    STATE(445), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 4,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [15888] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1086), 1,
      aux_sym_sequence_token1,
    STATE(445), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 4,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [15908] = 9,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1089), 1,
      aux_sym_sequence_token1,
    ACTIONS(1091), 1,
      aux_sym_sequence_token2,
    ACTIONS(1093), 1,
      anon_sym_DQUOTE,
    STATE(120), 1,
      aux_sym_sequence_repeat1,
    STATE(142), 1,
      sym_string,
    STATE(144), 1,
      sym_sequence,
    STATE(446), 1,
      sym_fsh_comment,
  [15936] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(614), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_string,
    STATE(39), 1,
      sym_sequence,
    STATE(160), 1,
      aux_sym_sequence_repeat1,
    STATE(447), 1,
      sym_fsh_comment,
  [15964] = 9,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1089), 1,
      aux_sym_sequence_token1,
    ACTIONS(1091), 1,
      aux_sym_sequence_token2,
    ACTIONS(1093), 1,
      anon_sym_DQUOTE,
    STATE(120), 1,
      aux_sym_sequence_repeat1,
    STATE(138), 1,
      sym_string,
    STATE(139), 1,
      sym_sequence,
    STATE(448), 1,
      sym_fsh_comment,
  [15992] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(243), 1,
      aux_sym_sequence_token1,
    ACTIONS(1095), 1,
      anon_sym_POUND,
    STATE(213), 1,
      sym_code,
    STATE(449), 1,
      sym_fsh_comment,
    STATE(578), 1,
      aux_sym_sequence_repeat1,
    STATE(652), 1,
      sym_sequence,
  [16020] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1097), 1,
      aux_sym_sequence_token1,
    STATE(47), 1,
      sym_sequence,
    STATE(48), 1,
      sym_string,
    STATE(450), 1,
      sym_fsh_comment,
    STATE(580), 1,
      aux_sym_sequence_repeat1,
  [16048] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1097), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_string,
    STATE(39), 1,
      sym_sequence,
    STATE(451), 1,
      sym_fsh_comment,
    STATE(580), 1,
      aux_sym_sequence_repeat1,
  [16076] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(243), 1,
      aux_sym_sequence_token1,
    ACTIONS(1099), 1,
      anon_sym_POUND,
    STATE(216), 1,
      sym_code,
    STATE(452), 1,
      sym_fsh_comment,
    STATE(578), 1,
      aux_sym_sequence_repeat1,
    STATE(623), 1,
      sym_sequence,
  [16104] = 9,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1101), 1,
      anon_sym_EQ,
    ACTIONS(1103), 1,
      aux_sym_sequence_token1,
    ACTIONS(1105), 1,
      aux_sym_sequence_token2,
    STATE(46), 1,
      sym_vs_filter_operator,
    STATE(81), 1,
      aux_sym_sequence_repeat1,
    STATE(107), 1,
      sym_sequence,
    STATE(453), 1,
      sym_fsh_comment,
  [16132] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(669), 1,
      aux_sym_sequence_token1,
    STATE(47), 1,
      sym_sequence,
    STATE(48), 1,
      sym_string,
    STATE(184), 1,
      aux_sym_sequence_repeat1,
    STATE(454), 1,
      sym_fsh_comment,
  [16160] = 9,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(192), 1,
      aux_sym_sequence_token2,
    ACTIONS(621), 1,
      anon_sym_system,
    ACTIONS(1045), 1,
      aux_sym_sequence_token1,
    STATE(65), 1,
      sym_sequence,
    STATE(418), 1,
      aux_sym_sequence_repeat1,
    STATE(425), 1,
      sym_path,
    STATE(455), 1,
      sym_fsh_comment,
  [16188] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(558), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_string,
    STATE(39), 1,
      sym_sequence,
    STATE(118), 1,
      aux_sym_sequence_repeat1,
    STATE(456), 1,
      sym_fsh_comment,
  [16216] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(558), 1,
      aux_sym_sequence_token1,
    STATE(47), 1,
      sym_sequence,
    STATE(48), 1,
      sym_string,
    STATE(118), 1,
      aux_sym_sequence_repeat1,
    STATE(457), 1,
      sym_fsh_comment,
  [16244] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1107), 1,
      anon_sym_POUND,
    ACTIONS(1109), 1,
      aux_sym_sequence_token1,
    STATE(458), 1,
      sym_fsh_comment,
    STATE(533), 1,
      aux_sym_sequence_repeat1,
    STATE(583), 1,
      sym_sequence,
    STATE(585), 1,
      sym_code,
  [16272] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(842), 1,
      aux_sym_sequence_token1,
    ACTIONS(1111), 1,
      anon_sym_POUND,
    STATE(271), 1,
      aux_sym_sequence_repeat1,
    STATE(390), 1,
      sym_sequence,
    STATE(412), 1,
      sym_code,
    STATE(459), 1,
      sym_fsh_comment,
  [16300] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(669), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_string,
    STATE(39), 1,
      sym_sequence,
    STATE(184), 1,
      aux_sym_sequence_repeat1,
    STATE(460), 1,
      sym_fsh_comment,
  [16328] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1113), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_string,
    STATE(39), 1,
      sym_sequence,
    STATE(461), 1,
      sym_fsh_comment,
    STATE(474), 1,
      aux_sym_sequence_repeat1,
  [16356] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1113), 1,
      aux_sym_sequence_token1,
    STATE(47), 1,
      sym_sequence,
    STATE(48), 1,
      sym_string,
    STATE(462), 1,
      sym_fsh_comment,
    STATE(474), 1,
      aux_sym_sequence_repeat1,
  [16384] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(575), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_string,
    STATE(39), 1,
      sym_sequence,
    STATE(132), 1,
      aux_sym_sequence_repeat1,
    STATE(463), 1,
      sym_fsh_comment,
  [16412] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(575), 1,
      aux_sym_sequence_token1,
    STATE(47), 1,
      sym_sequence,
    STATE(48), 1,
      sym_string,
    STATE(132), 1,
      aux_sym_sequence_repeat1,
    STATE(464), 1,
      sym_fsh_comment,
  [16440] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(755), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_string,
    STATE(39), 1,
      sym_sequence,
    STATE(227), 1,
      aux_sym_sequence_repeat1,
    STATE(465), 1,
      sym_fsh_comment,
  [16468] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(924), 1,
      aux_sym_sequence_token1,
    STATE(47), 1,
      sym_sequence,
    STATE(48), 1,
      sym_string,
    STATE(327), 1,
      aux_sym_sequence_repeat1,
    STATE(466), 1,
      sym_fsh_comment,
  [16496] = 9,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1069), 1,
      aux_sym_sequence_token1,
    ACTIONS(1071), 1,
      aux_sym_sequence_token2,
    ACTIONS(1073), 1,
      anon_sym_DQUOTE,
    STATE(99), 1,
      aux_sym_sequence_repeat1,
    STATE(113), 1,
      sym_string,
    STATE(124), 1,
      sym_sequence,
    STATE(467), 1,
      sym_fsh_comment,
  [16524] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(886), 1,
      aux_sym_sequence_token1,
    STATE(47), 1,
      sym_sequence,
    STATE(48), 1,
      sym_string,
    STATE(293), 1,
      aux_sym_sequence_repeat1,
    STATE(468), 1,
      sym_fsh_comment,
  [16552] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1067), 1,
      aux_sym_sequence_token1,
    STATE(47), 1,
      sym_sequence,
    STATE(48), 1,
      sym_string,
    STATE(469), 1,
      sym_fsh_comment,
    STATE(540), 1,
      aux_sym_sequence_repeat1,
  [16580] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(651), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_string,
    STATE(39), 1,
      sym_sequence,
    STATE(173), 1,
      aux_sym_sequence_repeat1,
    STATE(470), 1,
      sym_fsh_comment,
  [16608] = 9,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(924), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_string,
    STATE(39), 1,
      sym_sequence,
    STATE(327), 1,
      aux_sym_sequence_repeat1,
    STATE(471), 1,
      sym_fsh_comment,
  [16636] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1115), 1,
      aux_sym_sequence_token1,
    STATE(472), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 3,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [16655] = 8,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1118), 1,
      aux_sym_sequence_token1,
    STATE(90), 1,
      sym_sequence,
    STATE(104), 1,
      sym_param_rule_set_reference,
    STATE(473), 1,
      sym_fsh_comment,
    STATE(504), 1,
      aux_sym_sequence_repeat1,
  [16680] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1113), 1,
      aux_sym_sequence_token1,
    STATE(474), 1,
      sym_fsh_comment,
    STATE(477), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 3,
      anon_sym_from,
      anon_sym_and,
      anon_sym_DQUOTE,
  [16701] = 8,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(741), 1,
      aux_sym_sequence_token1,
    STATE(218), 1,
      aux_sym_sequence_repeat1,
    STATE(353), 1,
      sym_sequence,
    STATE(386), 1,
      sym_param_rule_set_reference,
    STATE(475), 1,
      sym_fsh_comment,
  [16726] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1120), 1,
      aux_sym_sequence_token1,
    STATE(476), 1,
      sym_fsh_comment,
    STATE(479), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE,
  [16747] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1122), 1,
      aux_sym_sequence_token1,
    STATE(477), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 3,
      anon_sym_from,
      anon_sym_and,
      anon_sym_DQUOTE,
  [16766] = 8,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(741), 1,
      aux_sym_sequence_token1,
    STATE(218), 1,
      aux_sym_sequence_repeat1,
    STATE(318), 1,
      sym_sequence,
    STATE(408), 1,
      sym_param_rule_set_reference,
    STATE(478), 1,
      sym_fsh_comment,
  [16791] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1125), 1,
      aux_sym_sequence_token1,
    STATE(479), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE,
  [16810] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(480), 1,
      sym_fsh_comment,
    ACTIONS(152), 5,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
      aux_sym_sequence_token1,
  [16827] = 8,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(741), 1,
      aux_sym_sequence_token1,
    STATE(218), 1,
      aux_sym_sequence_repeat1,
    STATE(367), 1,
      sym_sequence,
    STATE(373), 1,
      sym_param_rule_set_reference,
    STATE(481), 1,
      sym_fsh_comment,
  [16852] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(482), 1,
      sym_fsh_comment,
    ACTIONS(152), 5,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
      aux_sym_sequence_token1,
  [16869] = 8,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(741), 1,
      aux_sym_sequence_token1,
    STATE(218), 1,
      aux_sym_sequence_repeat1,
    STATE(360), 1,
      sym_sequence,
    STATE(379), 1,
      sym_param_rule_set_reference,
    STATE(483), 1,
      sym_fsh_comment,
  [16894] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(625), 1,
      aux_sym_sequence_token1,
    STATE(484), 1,
      sym_fsh_comment,
    STATE(485), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 3,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_CARET,
  [16915] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1128), 1,
      aux_sym_sequence_token1,
    STATE(485), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 3,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_CARET,
  [16934] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(827), 1,
      aux_sym_sequence_token1,
    STATE(472), 1,
      aux_sym_sequence_repeat1,
    STATE(486), 1,
      sym_fsh_comment,
    ACTIONS(33), 3,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [16955] = 8,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(741), 1,
      aux_sym_sequence_token1,
    STATE(218), 1,
      aux_sym_sequence_repeat1,
    STATE(334), 1,
      sym_sequence,
    STATE(398), 1,
      sym_param_rule_set_reference,
    STATE(487), 1,
      sym_fsh_comment,
  [16980] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1131), 1,
      anon_sym_or,
    ACTIONS(1133), 1,
      anon_sym_DQUOTE,
    STATE(211), 1,
      sym_string,
    STATE(488), 1,
      sym_fsh_comment,
    STATE(556), 1,
      aux_sym_only_rule_repeat1,
  [17002] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1131), 1,
      anon_sym_or,
    ACTIONS(1133), 1,
      anon_sym_DQUOTE,
    STATE(210), 1,
      sym_string,
    STATE(488), 1,
      aux_sym_only_rule_repeat1,
    STATE(489), 1,
      sym_fsh_comment,
  [17024] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1135), 1,
      anon_sym_system,
    ACTIONS(1137), 1,
      anon_sym_valueset,
    STATE(361), 1,
      sym_vs_from_system,
    STATE(364), 1,
      sym_vs_from_valueset,
    STATE(490), 1,
      sym_fsh_comment,
  [17046] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1131), 1,
      anon_sym_or,
    ACTIONS(1133), 1,
      anon_sym_DQUOTE,
    STATE(203), 1,
      sym_string,
    STATE(491), 1,
      sym_fsh_comment,
    STATE(509), 1,
      aux_sym_only_rule_repeat1,
  [17068] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1139), 1,
      anon_sym_DQUOTE,
    ACTIONS(1141), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
    STATE(492), 2,
      sym_fsh_comment,
      aux_sym_string_repeat1,
  [17086] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1144), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(493), 1,
      sym_fsh_comment,
    STATE(532), 1,
      aux_sym_string_repeat1,
    ACTIONS(1146), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17106] = 7,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1148), 1,
      aux_sym_sequence_token1,
    STATE(494), 1,
      sym_fsh_comment,
    STATE(529), 1,
      aux_sym_sequence_repeat1,
    STATE(569), 1,
      sym_sequence,
  [17128] = 7,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1120), 1,
      aux_sym_sequence_token1,
    STATE(476), 1,
      aux_sym_sequence_repeat1,
    STATE(495), 1,
      sym_fsh_comment,
    STATE(515), 1,
      sym_sequence,
  [17150] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1150), 1,
      anon_sym_DQUOTE,
    STATE(492), 1,
      aux_sym_string_repeat1,
    STATE(496), 1,
      sym_fsh_comment,
    ACTIONS(1152), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17170] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(497), 1,
      sym_fsh_comment,
    ACTIONS(1154), 4,
      anon_sym_example,
      anon_sym_preferred,
      anon_sym_extensible,
      anon_sym_required,
  [17186] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1156), 1,
      anon_sym_RPAREN,
    ACTIONS(1158), 2,
      aux_sym_sequence_token1,
      aux_sym_param_rule_set_params_token1,
    STATE(498), 2,
      sym_fsh_comment,
      aux_sym_param_rule_set_params_repeat1,
  [17204] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1161), 1,
      anon_sym_DQUOTE,
    STATE(492), 1,
      aux_sym_string_repeat1,
    STATE(499), 1,
      sym_fsh_comment,
    ACTIONS(1152), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17224] = 7,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1163), 1,
      aux_sym_sequence_token1,
    STATE(500), 1,
      sym_fsh_comment,
    STATE(567), 1,
      aux_sym_sequence_repeat1,
    STATE(650), 1,
      sym_sequence,
  [17246] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1165), 1,
      anon_sym_DQUOTE,
    STATE(499), 1,
      aux_sym_string_repeat1,
    STATE(501), 1,
      sym_fsh_comment,
    ACTIONS(1152), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17266] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(706), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(502), 1,
      sym_fsh_comment,
    STATE(64), 2,
      sym_string,
      sym_multiline_string,
  [17286] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1167), 1,
      anon_sym_DQUOTE,
    STATE(492), 1,
      aux_sym_string_repeat1,
    STATE(503), 1,
      sym_fsh_comment,
    ACTIONS(1152), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17306] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1118), 1,
      aux_sym_sequence_token1,
    STATE(504), 1,
      sym_fsh_comment,
    STATE(505), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 2,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [17326] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1169), 1,
      aux_sym_sequence_token1,
    ACTIONS(123), 2,
      anon_sym_STAR,
      anon_sym_LPAREN,
    STATE(505), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
  [17344] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1172), 1,
      anon_sym_DQUOTE,
    STATE(503), 1,
      aux_sym_string_repeat1,
    STATE(506), 1,
      sym_fsh_comment,
    ACTIONS(1152), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17364] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(507), 1,
      sym_fsh_comment,
    STATE(534), 1,
      aux_sym_param_rule_set_params_repeat1,
    STATE(644), 1,
      sym_param_rule_set_params,
    ACTIONS(1174), 2,
      aux_sym_sequence_token1,
      aux_sym_param_rule_set_params_token1,
  [17384] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(508), 1,
      sym_fsh_comment,
    ACTIONS(152), 4,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      anon_sym_CARET,
  [17400] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1131), 1,
      anon_sym_or,
    ACTIONS(1133), 1,
      anon_sym_DQUOTE,
    STATE(210), 1,
      sym_string,
    STATE(509), 1,
      sym_fsh_comment,
    STATE(556), 1,
      aux_sym_only_rule_repeat1,
  [17422] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1176), 1,
      anon_sym_DQUOTE,
    STATE(492), 1,
      aux_sym_string_repeat1,
    STATE(510), 1,
      sym_fsh_comment,
    ACTIONS(1152), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17442] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1178), 1,
      anon_sym_from,
    STATE(366), 1,
      sym_vs_component_from,
    STATE(511), 1,
      sym_fsh_comment,
    ACTIONS(146), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
  [17462] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1180), 1,
      anon_sym_DQUOTE,
    STATE(510), 1,
      aux_sym_string_repeat1,
    STATE(512), 1,
      sym_fsh_comment,
    ACTIONS(1152), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17482] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1182), 1,
      anon_sym_DQUOTE,
    STATE(492), 1,
      aux_sym_string_repeat1,
    STATE(513), 1,
      sym_fsh_comment,
    ACTIONS(1152), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17502] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1184), 1,
      anon_sym_DQUOTE,
    STATE(513), 1,
      aux_sym_string_repeat1,
    STATE(514), 1,
      sym_fsh_comment,
    ACTIONS(1152), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17522] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1186), 1,
      anon_sym_RPAREN,
    ACTIONS(1188), 1,
      anon_sym_or,
    ACTIONS(1190), 1,
      anon_sym_PIPE,
    STATE(515), 1,
      sym_fsh_comment,
    STATE(579), 1,
      aux_sym_canonical_repeat1,
  [17544] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1192), 1,
      anon_sym_DQUOTE,
    STATE(492), 1,
      aux_sym_string_repeat1,
    STATE(516), 1,
      sym_fsh_comment,
    ACTIONS(1152), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17564] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1194), 1,
      anon_sym_DQUOTE,
    STATE(516), 1,
      aux_sym_string_repeat1,
    STATE(517), 1,
      sym_fsh_comment,
    ACTIONS(1152), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17584] = 7,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1148), 1,
      aux_sym_sequence_token1,
    STATE(518), 1,
      sym_fsh_comment,
    STATE(529), 1,
      aux_sym_sequence_repeat1,
    STATE(595), 1,
      sym_sequence,
  [17606] = 7,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1120), 1,
      aux_sym_sequence_token1,
    STATE(476), 1,
      aux_sym_sequence_repeat1,
    STATE(519), 1,
      sym_fsh_comment,
    STATE(563), 1,
      sym_sequence,
  [17628] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1196), 1,
      anon_sym_DQUOTE,
    STATE(492), 1,
      aux_sym_string_repeat1,
    STATE(520), 1,
      sym_fsh_comment,
    ACTIONS(1152), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17648] = 7,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1148), 1,
      aux_sym_sequence_token1,
    STATE(521), 1,
      sym_fsh_comment,
    STATE(529), 1,
      aux_sym_sequence_repeat1,
    STATE(557), 1,
      sym_sequence,
  [17670] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1198), 1,
      anon_sym_DQUOTE,
    STATE(520), 1,
      aux_sym_string_repeat1,
    STATE(522), 1,
      sym_fsh_comment,
    ACTIONS(1152), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17690] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1200), 1,
      anon_sym_system,
    ACTIONS(1202), 1,
      anon_sym_valueset,
    STATE(282), 1,
      sym_vs_from_system,
    STATE(283), 1,
      sym_vs_from_valueset,
    STATE(523), 1,
      sym_fsh_comment,
  [17712] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(524), 1,
      sym_fsh_comment,
    ACTIONS(152), 4,
      aux_sym_sequence_token1,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [17728] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1204), 1,
      aux_sym_sequence_token1,
    ACTIONS(123), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
    STATE(525), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
  [17746] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(912), 1,
      aux_sym_sequence_token1,
    STATE(525), 1,
      aux_sym_sequence_repeat1,
    STATE(526), 1,
      sym_fsh_comment,
    ACTIONS(33), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
  [17766] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(527), 1,
      sym_fsh_comment,
    ACTIONS(152), 4,
      anon_sym_RPAREN,
      anon_sym_or,
      aux_sym_sequence_token1,
      anon_sym_PIPE,
  [17782] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1207), 1,
      aux_sym_sequence_token1,
    ACTIONS(123), 2,
      anon_sym_RPAREN,
      anon_sym_or,
    STATE(528), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
  [17800] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1148), 1,
      aux_sym_sequence_token1,
    STATE(528), 1,
      aux_sym_sequence_repeat1,
    STATE(529), 1,
      sym_fsh_comment,
    ACTIONS(33), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [17820] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1210), 1,
      aux_sym_sequence_token1,
    ACTIONS(123), 2,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    STATE(530), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
  [17838] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(531), 1,
      sym_fsh_comment,
    ACTIONS(152), 4,
      anon_sym_from,
      anon_sym_and,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
  [17854] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1139), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(1213), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
    STATE(532), 2,
      sym_fsh_comment,
      aux_sym_string_repeat1,
  [17872] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1109), 1,
      aux_sym_sequence_token1,
    STATE(530), 1,
      aux_sym_sequence_repeat1,
    STATE(533), 1,
      sym_fsh_comment,
    ACTIONS(33), 2,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [17892] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1216), 1,
      anon_sym_RPAREN,
    STATE(498), 1,
      aux_sym_param_rule_set_params_repeat1,
    STATE(534), 1,
      sym_fsh_comment,
    ACTIONS(1174), 2,
      aux_sym_sequence_token1,
      aux_sym_param_rule_set_params_token1,
  [17912] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1218), 1,
      anon_sym_DQUOTE,
    STATE(496), 1,
      aux_sym_string_repeat1,
    STATE(535), 1,
      sym_fsh_comment,
    ACTIONS(1152), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17932] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1220), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(493), 1,
      aux_sym_string_repeat1,
    STATE(536), 1,
      sym_fsh_comment,
    ACTIONS(1146), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17952] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1222), 1,
      aux_sym_sequence_token1,
    ACTIONS(123), 2,
      anon_sym_and,
      anon_sym_DQUOTE,
    STATE(537), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
  [17970] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(386), 1,
      aux_sym_sequence_token1,
    STATE(538), 1,
      sym_fsh_comment,
    STATE(539), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 2,
      anon_sym_or,
      anon_sym_DQUOTE,
  [17990] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1225), 1,
      aux_sym_sequence_token1,
    ACTIONS(123), 2,
      anon_sym_or,
      anon_sym_DQUOTE,
    STATE(539), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
  [18008] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1067), 1,
      aux_sym_sequence_token1,
    STATE(537), 1,
      aux_sym_sequence_repeat1,
    STATE(540), 1,
      sym_fsh_comment,
    ACTIONS(33), 2,
      anon_sym_and,
      anon_sym_DQUOTE,
  [18028] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1228), 1,
      aux_sym_sequence_token1,
    ACTIONS(123), 2,
      anon_sym_EQ,
      aux_sym_sequence_token2,
    STATE(541), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
  [18046] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1231), 1,
      aux_sym_sequence_token1,
    STATE(541), 1,
      aux_sym_sequence_repeat1,
    STATE(542), 1,
      sym_fsh_comment,
    ACTIONS(33), 2,
      anon_sym_EQ,
      aux_sym_sequence_token2,
  [18066] = 7,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1163), 1,
      aux_sym_sequence_token1,
    STATE(543), 1,
      sym_fsh_comment,
    STATE(567), 1,
      aux_sym_sequence_repeat1,
    STATE(638), 1,
      sym_sequence,
  [18088] = 7,
    ACTIONS(61), 1,
      aux_sym_sequence_token2,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1148), 1,
      aux_sym_sequence_token1,
    STATE(529), 1,
      aux_sym_sequence_repeat1,
    STATE(544), 1,
      sym_fsh_comment,
    STATE(597), 1,
      sym_sequence,
  [18110] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1234), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1236), 1,
      anon_sym_DOT_DOT,
    ACTIONS(1238), 1,
      anon_sym_named,
    STATE(88), 1,
      sym_cardinality,
    STATE(545), 1,
      sym_fsh_comment,
  [18132] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(546), 1,
      sym_fsh_comment,
    ACTIONS(1240), 3,
      anon_sym_RPAREN,
      aux_sym_sequence_token1,
      aux_sym_param_rule_set_params_token1,
  [18147] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1242), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(547), 1,
      sym_fsh_comment,
    ACTIONS(1244), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [18164] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(548), 1,
      sym_fsh_comment,
    ACTIONS(148), 3,
      anon_sym_EQ,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
  [18179] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(549), 1,
      sym_fsh_comment,
    ACTIONS(152), 3,
      anon_sym_EQ,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
  [18194] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1246), 1,
      anon_sym_SQUOTE,
    ACTIONS(1248), 1,
      aux_sym_unit_token1,
    STATE(550), 2,
      sym_fsh_comment,
      aux_sym_unit_repeat1,
  [18211] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(551), 1,
      sym_fsh_comment,
    ACTIONS(1251), 3,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
  [18226] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(788), 1,
      anon_sym_from,
    ACTIONS(790), 1,
      anon_sym_and,
    STATE(382), 1,
      sym_vs_component_from,
    STATE(552), 1,
      sym_fsh_comment,
  [18245] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1188), 1,
      anon_sym_or,
    ACTIONS(1253), 1,
      anon_sym_RPAREN,
    STATE(553), 1,
      sym_fsh_comment,
    STATE(555), 1,
      aux_sym_canonical_repeat1,
  [18264] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(554), 1,
      sym_fsh_comment,
    ACTIONS(152), 3,
      anon_sym_or,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
  [18279] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1255), 1,
      anon_sym_RPAREN,
    ACTIONS(1257), 1,
      anon_sym_or,
    STATE(555), 2,
      sym_fsh_comment,
      aux_sym_canonical_repeat1,
  [18296] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(858), 1,
      anon_sym_DQUOTE,
    ACTIONS(1260), 1,
      anon_sym_or,
    STATE(556), 2,
      sym_fsh_comment,
      aux_sym_only_rule_repeat1,
  [18313] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1188), 1,
      anon_sym_or,
    ACTIONS(1263), 1,
      anon_sym_RPAREN,
    STATE(553), 1,
      aux_sym_canonical_repeat1,
    STATE(557), 1,
      sym_fsh_comment,
  [18332] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(558), 1,
      sym_fsh_comment,
    ACTIONS(152), 3,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
  [18347] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1265), 1,
      anon_sym_SQUOTE,
    ACTIONS(1267), 1,
      aux_sym_unit_token1,
    STATE(559), 1,
      sym_fsh_comment,
    STATE(570), 1,
      aux_sym_unit_repeat1,
  [18366] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(93), 1,
      anon_sym_insert,
    ACTIONS(107), 1,
      anon_sym_CARET,
    STATE(560), 1,
      sym_fsh_comment,
    STATE(646), 1,
      sym_caret_path,
  [18385] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1269), 1,
      anon_sym_POUND,
    STATE(561), 1,
      sym_fsh_comment,
    ACTIONS(159), 2,
      anon_sym_insert,
      anon_sym_CARET,
  [18402] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1271), 1,
      sym_number,
    STATE(345), 1,
      sym_quantity,
    STATE(346), 1,
      sym_ratio_part,
    STATE(562), 1,
      sym_fsh_comment,
  [18421] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1273), 1,
      anon_sym_PIPE,
    STATE(563), 1,
      sym_fsh_comment,
    ACTIONS(1255), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [18438] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1234), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1236), 1,
      anon_sym_DOT_DOT,
    STATE(77), 1,
      sym_cardinality,
    STATE(564), 1,
      sym_fsh_comment,
  [18457] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1275), 1,
      anon_sym_RPAREN,
    ACTIONS(1277), 1,
      anon_sym_or,
    STATE(565), 1,
      sym_fsh_comment,
    STATE(568), 1,
      aux_sym_reference_repeat1,
  [18476] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1279), 1,
      sym_number,
    STATE(345), 1,
      sym_quantity,
    STATE(346), 1,
      sym_ratio_part,
    STATE(566), 1,
      sym_fsh_comment,
  [18495] = 6,
    ACTIONS(33), 1,
      anon_sym_EQ,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1163), 1,
      aux_sym_sequence_token1,
    STATE(567), 1,
      sym_fsh_comment,
    STATE(582), 1,
      aux_sym_sequence_repeat1,
  [18514] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1281), 1,
      anon_sym_RPAREN,
    ACTIONS(1283), 1,
      anon_sym_or,
    STATE(568), 2,
      sym_fsh_comment,
      aux_sym_reference_repeat1,
  [18531] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1277), 1,
      anon_sym_or,
    ACTIONS(1286), 1,
      anon_sym_RPAREN,
    STATE(565), 1,
      aux_sym_reference_repeat1,
    STATE(569), 1,
      sym_fsh_comment,
  [18550] = 6,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1267), 1,
      aux_sym_unit_token1,
    ACTIONS(1288), 1,
      anon_sym_SQUOTE,
    STATE(550), 1,
      aux_sym_unit_repeat1,
    STATE(570), 1,
      sym_fsh_comment,
  [18569] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(571), 1,
      sym_fsh_comment,
    ACTIONS(33), 3,
      anon_sym_EQ,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
  [18584] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1242), 1,
      anon_sym_DQUOTE,
    STATE(572), 1,
      sym_fsh_comment,
    ACTIONS(1244), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [18601] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(573), 1,
      sym_fsh_comment,
    ACTIONS(152), 3,
      aux_sym_sequence_token1,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
  [18616] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(574), 1,
      sym_fsh_comment,
    ACTIONS(152), 3,
      anon_sym_and,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
  [18631] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(123), 1,
      anon_sym_POUND,
    ACTIONS(1290), 1,
      aux_sym_sequence_token1,
    STATE(575), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
  [18648] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(576), 1,
      sym_fsh_comment,
    ACTIONS(152), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      aux_sym_sequence_token1,
  [18663] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1234), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1236), 1,
      anon_sym_DOT_DOT,
    STATE(98), 1,
      sym_cardinality,
    STATE(577), 1,
      sym_fsh_comment,
  [18682] = 6,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(243), 1,
      aux_sym_sequence_token1,
    STATE(575), 1,
      aux_sym_sequence_repeat1,
    STATE(578), 1,
      sym_fsh_comment,
  [18701] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1188), 1,
      anon_sym_or,
    ACTIONS(1293), 1,
      anon_sym_RPAREN,
    STATE(555), 1,
      aux_sym_canonical_repeat1,
    STATE(579), 1,
      sym_fsh_comment,
  [18720] = 6,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1097), 1,
      aux_sym_sequence_token1,
    STATE(580), 1,
      sym_fsh_comment,
    STATE(581), 1,
      aux_sym_sequence_repeat1,
  [18739] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(1295), 1,
      aux_sym_sequence_token1,
    STATE(581), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
  [18756] = 5,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(123), 1,
      anon_sym_EQ,
    ACTIONS(1298), 1,
      aux_sym_sequence_token1,
    STATE(582), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
  [18773] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1133), 1,
      anon_sym_DQUOTE,
    ACTIONS(1301), 1,
      anon_sym_POUND,
    STATE(209), 1,
      sym_string,
    STATE(583), 1,
      sym_fsh_comment,
  [18792] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(584), 1,
      sym_fsh_comment,
    ACTIONS(152), 3,
      anon_sym_STAR,
      anon_sym_LPAREN,
      aux_sym_sequence_token1,
  [18807] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1133), 1,
      anon_sym_DQUOTE,
    STATE(209), 1,
      sym_string,
    STATE(585), 1,
      sym_fsh_comment,
  [18823] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(594), 1,
      anon_sym_DQUOTE,
    STATE(111), 1,
      sym_string,
    STATE(586), 1,
      sym_fsh_comment,
  [18839] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(587), 1,
      sym_fsh_comment,
    ACTIONS(152), 2,
      anon_sym_POUND,
      aux_sym_sequence_token1,
  [18853] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1303), 1,
      anon_sym_system,
    STATE(356), 1,
      sym_vs_from_system,
    STATE(588), 1,
      sym_fsh_comment,
  [18869] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(589), 1,
      sym_fsh_comment,
    ACTIONS(152), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
  [18883] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1305), 1,
      anon_sym_valueset,
    STATE(356), 1,
      sym_vs_from_valueset,
    STATE(590), 1,
      sym_fsh_comment,
  [18899] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1307), 1,
      anon_sym_system,
    STATE(356), 1,
      sym_vs_from_system,
    STATE(591), 1,
      sym_fsh_comment,
  [18915] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1309), 1,
      anon_sym_DQUOTE,
    STATE(109), 1,
      sym_string,
    STATE(592), 1,
      sym_fsh_comment,
  [18931] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(593), 1,
      sym_fsh_comment,
    ACTIONS(1311), 2,
      anon_sym_SQUOTE,
      aux_sym_unit_token1,
  [18945] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(594), 1,
      anon_sym_DQUOTE,
    STATE(217), 1,
      sym_string,
    STATE(594), 1,
      sym_fsh_comment,
  [18961] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(595), 1,
      sym_fsh_comment,
    ACTIONS(1281), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [18975] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(596), 1,
      sym_fsh_comment,
    ACTIONS(152), 2,
      anon_sym_EQ,
      aux_sym_sequence_token1,
  [18989] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(597), 1,
      sym_fsh_comment,
    ACTIONS(1313), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [19003] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(594), 1,
      anon_sym_DQUOTE,
    STATE(239), 1,
      sym_string,
    STATE(598), 1,
      sym_fsh_comment,
  [19019] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1178), 1,
      anon_sym_from,
    STATE(366), 1,
      sym_vs_component_from,
    STATE(599), 1,
      sym_fsh_comment,
  [19035] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(594), 1,
      anon_sym_DQUOTE,
    STATE(153), 1,
      sym_string,
    STATE(600), 1,
      sym_fsh_comment,
  [19051] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1309), 1,
      anon_sym_DQUOTE,
    STATE(103), 1,
      sym_string,
    STATE(601), 1,
      sym_fsh_comment,
  [19067] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1315), 1,
      anon_sym_valueset,
    STATE(356), 1,
      sym_vs_from_valueset,
    STATE(602), 1,
      sym_fsh_comment,
  [19083] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON,
    STATE(603), 1,
      sym_fsh_comment,
  [19096] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1319), 1,
      anon_sym_COLON,
    STATE(604), 1,
      sym_fsh_comment,
  [19109] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1321), 1,
      anon_sym_EQ,
    STATE(605), 1,
      sym_fsh_comment,
  [19122] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1323), 1,
      anon_sym_SLASH2,
    STATE(606), 1,
      sym_fsh_comment,
  [19135] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1325), 1,
      anon_sym_POUND,
    STATE(607), 1,
      sym_fsh_comment,
  [19148] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1327), 1,
      anon_sym_COLON,
    STATE(608), 1,
      sym_fsh_comment,
  [19161] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1329), 1,
      anon_sym_COLON,
    STATE(609), 1,
      sym_fsh_comment,
  [19174] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1331), 1,
      anon_sym_COLON,
    STATE(610), 1,
      sym_fsh_comment,
  [19187] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1333), 1,
      anon_sym_RPAREN,
    STATE(611), 1,
      sym_fsh_comment,
  [19200] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1335), 1,
      anon_sym_RPAREN,
    STATE(612), 1,
      sym_fsh_comment,
  [19213] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_COLON,
    STATE(613), 1,
      sym_fsh_comment,
  [19226] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1339), 1,
      anon_sym_COLON,
    STATE(614), 1,
      sym_fsh_comment,
  [19239] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1341), 1,
      anon_sym_COLON,
    STATE(615), 1,
      sym_fsh_comment,
  [19252] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1343), 1,
      anon_sym_COLON,
    STATE(616), 1,
      sym_fsh_comment,
  [19265] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1345), 1,
      anon_sym_COLON,
    STATE(617), 1,
      sym_fsh_comment,
  [19278] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1347), 1,
      anon_sym_COLON,
    STATE(618), 1,
      sym_fsh_comment,
  [19291] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1349), 1,
      anon_sym_DOT_DOT,
    STATE(619), 1,
      sym_fsh_comment,
  [19304] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1351), 1,
      anon_sym_COLON,
    STATE(620), 1,
      sym_fsh_comment,
  [19317] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1353), 1,
      anon_sym_COLON,
    STATE(621), 1,
      sym_fsh_comment,
  [19330] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1355), 1,
      anon_sym_COLON,
    STATE(622), 1,
      sym_fsh_comment,
  [19343] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1357), 1,
      anon_sym_POUND,
    STATE(623), 1,
      sym_fsh_comment,
  [19356] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1359), 1,
      aux_sym_fsh_comment_token1,
    STATE(624), 1,
      sym_fsh_comment,
  [19369] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1361), 1,
      anon_sym_COLON,
    STATE(625), 1,
      sym_fsh_comment,
  [19382] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1363), 1,
      anon_sym_COLON,
    STATE(626), 1,
      sym_fsh_comment,
  [19395] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1365), 1,
      anon_sym_COLON,
    STATE(627), 1,
      sym_fsh_comment,
  [19408] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1367), 1,
      anon_sym_COLON,
    STATE(628), 1,
      sym_fsh_comment,
  [19421] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1369), 1,
      anon_sym_COLON,
    STATE(629), 1,
      sym_fsh_comment,
  [19434] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1371), 1,
      anon_sym_EQ,
    STATE(630), 1,
      sym_fsh_comment,
  [19447] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1373), 1,
      sym_regex_pattern,
    STATE(631), 1,
      sym_fsh_comment,
  [19460] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1375), 1,
      anon_sym_COLON,
    STATE(632), 1,
      sym_fsh_comment,
  [19473] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1377), 1,
      anon_sym_COLON,
    STATE(633), 1,
      sym_fsh_comment,
  [19486] = 4,
    ACTIONS(77), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1379), 1,
      aux_sym_fsh_comment_token2,
    STATE(634), 1,
      sym_fsh_comment,
  [19499] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1381), 1,
      anon_sym_exactly,
    STATE(635), 1,
      sym_fsh_comment,
  [19512] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1383), 1,
      anon_sym_COLON,
    STATE(636), 1,
      sym_fsh_comment,
  [19525] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1385), 1,
      ts_builtin_sym_end,
    STATE(637), 1,
      sym_fsh_comment,
  [19538] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1387), 1,
      anon_sym_EQ,
    STATE(638), 1,
      sym_fsh_comment,
  [19551] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1389), 1,
      anon_sym_COLON,
    STATE(639), 1,
      sym_fsh_comment,
  [19564] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1391), 1,
      sym_time,
    STATE(640), 1,
      sym_fsh_comment,
  [19577] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1393), 1,
      anon_sym_SLASH,
    STATE(641), 1,
      sym_fsh_comment,
  [19590] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(790), 1,
      anon_sym_and,
    STATE(642), 1,
      sym_fsh_comment,
  [19603] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1395), 1,
      anon_sym_POUND,
    STATE(643), 1,
      sym_fsh_comment,
  [19616] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1397), 1,
      anon_sym_RPAREN,
    STATE(644), 1,
      sym_fsh_comment,
  [19629] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1399), 1,
      anon_sym_COLON,
    STATE(645), 1,
      sym_fsh_comment,
  [19642] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1401), 1,
      anon_sym_EQ,
    STATE(646), 1,
      sym_fsh_comment,
  [19655] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1403), 1,
      anon_sym_LPAREN,
    STATE(647), 1,
      sym_fsh_comment,
  [19668] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1405), 1,
      anon_sym_COLON,
    STATE(648), 1,
      sym_fsh_comment,
  [19681] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1407), 1,
      anon_sym_LPAREN,
    STATE(649), 1,
      sym_fsh_comment,
  [19694] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1409), 1,
      anon_sym_EQ,
    STATE(650), 1,
      sym_fsh_comment,
  [19707] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1411), 1,
      anon_sym_DOT_DOT,
    STATE(651), 1,
      sym_fsh_comment,
  [19720] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1413), 1,
      anon_sym_POUND,
    STATE(652), 1,
      sym_fsh_comment,
  [19733] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1415), 1,
      anon_sym_COLON,
    STATE(653), 1,
      sym_fsh_comment,
  [19746] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1269), 1,
      anon_sym_POUND,
    STATE(654), 1,
      sym_fsh_comment,
  [19759] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1417), 1,
      anon_sym_POUND,
    STATE(655), 1,
      sym_fsh_comment,
  [19772] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1419), 1,
      anon_sym_POUND,
    STATE(656), 1,
      sym_fsh_comment,
  [19785] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1421), 1,
      anon_sym_POUND,
    STATE(657), 1,
      sym_fsh_comment,
  [19798] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1423), 1,
      anon_sym_POUND,
    STATE(658), 1,
      sym_fsh_comment,
  [19811] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1425), 1,
      anon_sym_POUND,
    STATE(659), 1,
      sym_fsh_comment,
  [19824] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1427), 1,
      anon_sym_POUND,
    STATE(660), 1,
      sym_fsh_comment,
  [19837] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(947), 1,
      anon_sym_POUND,
    STATE(661), 1,
      sym_fsh_comment,
  [19850] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(869), 1,
      anon_sym_POUND,
    STATE(662), 1,
      sym_fsh_comment,
  [19863] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1429), 1,
      anon_sym_POUND,
    STATE(663), 1,
      sym_fsh_comment,
  [19876] = 1,
    ACTIONS(1431), 1,
      ts_builtin_sym_end,
  [19880] = 1,
    ACTIONS(1433), 1,
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
  [SMALL_STATE(9)] = 505,
  [SMALL_STATE(10)] = 574,
  [SMALL_STATE(11)] = 643,
  [SMALL_STATE(12)] = 728,
  [SMALL_STATE(13)] = 809,
  [SMALL_STATE(14)] = 894,
  [SMALL_STATE(15)] = 979,
  [SMALL_STATE(16)] = 1057,
  [SMALL_STATE(17)] = 1106,
  [SMALL_STATE(18)] = 1159,
  [SMALL_STATE(19)] = 1212,
  [SMALL_STATE(20)] = 1267,
  [SMALL_STATE(21)] = 1318,
  [SMALL_STATE(22)] = 1373,
  [SMALL_STATE(23)] = 1419,
  [SMALL_STATE(24)] = 1465,
  [SMALL_STATE(25)] = 1514,
  [SMALL_STATE(26)] = 1557,
  [SMALL_STATE(27)] = 1604,
  [SMALL_STATE(28)] = 1673,
  [SMALL_STATE(29)] = 1720,
  [SMALL_STATE(30)] = 1764,
  [SMALL_STATE(31)] = 1830,
  [SMALL_STATE(32)] = 1896,
  [SMALL_STATE(33)] = 1940,
  [SMALL_STATE(34)] = 1983,
  [SMALL_STATE(35)] = 2064,
  [SMALL_STATE(36)] = 2107,
  [SMALL_STATE(37)] = 2150,
  [SMALL_STATE(38)] = 2192,
  [SMALL_STATE(39)] = 2256,
  [SMALL_STATE(40)] = 2298,
  [SMALL_STATE(41)] = 2348,
  [SMALL_STATE(42)] = 2412,
  [SMALL_STATE(43)] = 2462,
  [SMALL_STATE(44)] = 2512,
  [SMALL_STATE(45)] = 2560,
  [SMALL_STATE(46)] = 2610,
  [SMALL_STATE(47)] = 2674,
  [SMALL_STATE(48)] = 2716,
  [SMALL_STATE(49)] = 2758,
  [SMALL_STATE(50)] = 2816,
  [SMALL_STATE(51)] = 2874,
  [SMALL_STATE(52)] = 2932,
  [SMALL_STATE(53)] = 2990,
  [SMALL_STATE(54)] = 3053,
  [SMALL_STATE(55)] = 3092,
  [SMALL_STATE(56)] = 3153,
  [SMALL_STATE(57)] = 3204,
  [SMALL_STATE(58)] = 3243,
  [SMALL_STATE(59)] = 3288,
  [SMALL_STATE(60)] = 3351,
  [SMALL_STATE(61)] = 3396,
  [SMALL_STATE(62)] = 3441,
  [SMALL_STATE(63)] = 3484,
  [SMALL_STATE(64)] = 3534,
  [SMALL_STATE(65)] = 3572,
  [SMALL_STATE(66)] = 3608,
  [SMALL_STATE(67)] = 3649,
  [SMALL_STATE(68)] = 3696,
  [SMALL_STATE(69)] = 3759,
  [SMALL_STATE(70)] = 3808,
  [SMALL_STATE(71)] = 3861,
  [SMALL_STATE(72)] = 3910,
  [SMALL_STATE(73)] = 3949,
  [SMALL_STATE(74)] = 3987,
  [SMALL_STATE(75)] = 4023,
  [SMALL_STATE(76)] = 4059,
  [SMALL_STATE(77)] = 4097,
  [SMALL_STATE(78)] = 4137,
  [SMALL_STATE(79)] = 4189,
  [SMALL_STATE(80)] = 4225,
  [SMALL_STATE(81)] = 4263,
  [SMALL_STATE(82)] = 4303,
  [SMALL_STATE(83)] = 4343,
  [SMALL_STATE(84)] = 4403,
  [SMALL_STATE(85)] = 4441,
  [SMALL_STATE(86)] = 4477,
  [SMALL_STATE(87)] = 4513,
  [SMALL_STATE(88)] = 4549,
  [SMALL_STATE(89)] = 4589,
  [SMALL_STATE(90)] = 4629,
  [SMALL_STATE(91)] = 4673,
  [SMALL_STATE(92)] = 4721,
  [SMALL_STATE(93)] = 4757,
  [SMALL_STATE(94)] = 4803,
  [SMALL_STATE(95)] = 4839,
  [SMALL_STATE(96)] = 4889,
  [SMALL_STATE(97)] = 4938,
  [SMALL_STATE(98)] = 4981,
  [SMALL_STATE(99)] = 5020,
  [SMALL_STATE(100)] = 5059,
  [SMALL_STATE(101)] = 5096,
  [SMALL_STATE(102)] = 5131,
  [SMALL_STATE(103)] = 5170,
  [SMALL_STATE(104)] = 5221,
  [SMALL_STATE(105)] = 5262,
  [SMALL_STATE(106)] = 5297,
  [SMALL_STATE(107)] = 5336,
  [SMALL_STATE(108)] = 5371,
  [SMALL_STATE(109)] = 5414,
  [SMALL_STATE(110)] = 5465,
  [SMALL_STATE(111)] = 5504,
  [SMALL_STATE(112)] = 5539,
  [SMALL_STATE(113)] = 5578,
  [SMALL_STATE(114)] = 5612,
  [SMALL_STATE(115)] = 5646,
  [SMALL_STATE(116)] = 5678,
  [SMALL_STATE(117)] = 5710,
  [SMALL_STATE(118)] = 5746,
  [SMALL_STATE(119)] = 5784,
  [SMALL_STATE(120)] = 5820,
  [SMALL_STATE(121)] = 5858,
  [SMALL_STATE(122)] = 5890,
  [SMALL_STATE(123)] = 5922,
  [SMALL_STATE(124)] = 5956,
  [SMALL_STATE(125)] = 5990,
  [SMALL_STATE(126)] = 6024,
  [SMALL_STATE(127)] = 6058,
  [SMALL_STATE(128)] = 6092,
  [SMALL_STATE(129)] = 6126,
  [SMALL_STATE(130)] = 6157,
  [SMALL_STATE(131)] = 6190,
  [SMALL_STATE(132)] = 6225,
  [SMALL_STATE(133)] = 6262,
  [SMALL_STATE(134)] = 6311,
  [SMALL_STATE(135)] = 6364,
  [SMALL_STATE(136)] = 6409,
  [SMALL_STATE(137)] = 6442,
  [SMALL_STATE(138)] = 6479,
  [SMALL_STATE(139)] = 6512,
  [SMALL_STATE(140)] = 6545,
  [SMALL_STATE(141)] = 6594,
  [SMALL_STATE(142)] = 6629,
  [SMALL_STATE(143)] = 6662,
  [SMALL_STATE(144)] = 6695,
  [SMALL_STATE(145)] = 6728,
  [SMALL_STATE(146)] = 6761,
  [SMALL_STATE(147)] = 6814,
  [SMALL_STATE(148)] = 6859,
  [SMALL_STATE(149)] = 6892,
  [SMALL_STATE(150)] = 6925,
  [SMALL_STATE(151)] = 6974,
  [SMALL_STATE(152)] = 7008,
  [SMALL_STATE(153)] = 7044,
  [SMALL_STATE(154)] = 7074,
  [SMALL_STATE(155)] = 7112,
  [SMALL_STATE(156)] = 7142,
  [SMALL_STATE(157)] = 7180,
  [SMALL_STATE(158)] = 7218,
  [SMALL_STATE(159)] = 7254,
  [SMALL_STATE(160)] = 7292,
  [SMALL_STATE(161)] = 7328,
  [SMALL_STATE(162)] = 7362,
  [SMALL_STATE(163)] = 7422,
  [SMALL_STATE(164)] = 7460,
  [SMALL_STATE(165)] = 7498,
  [SMALL_STATE(166)] = 7534,
  [SMALL_STATE(167)] = 7564,
  [SMALL_STATE(168)] = 7598,
  [SMALL_STATE(169)] = 7630,
  [SMALL_STATE(170)] = 7664,
  [SMALL_STATE(171)] = 7700,
  [SMALL_STATE(172)] = 7738,
  [SMALL_STATE(173)] = 7774,
  [SMALL_STATE(174)] = 7810,
  [SMALL_STATE(175)] = 7848,
  [SMALL_STATE(176)] = 7884,
  [SMALL_STATE(177)] = 7914,
  [SMALL_STATE(178)] = 7946,
  [SMALL_STATE(179)] = 7980,
  [SMALL_STATE(180)] = 8011,
  [SMALL_STATE(181)] = 8042,
  [SMALL_STATE(182)] = 8075,
  [SMALL_STATE(183)] = 8110,
  [SMALL_STATE(184)] = 8141,
  [SMALL_STATE(185)] = 8176,
  [SMALL_STATE(186)] = 8211,
  [SMALL_STATE(187)] = 8242,
  [SMALL_STATE(188)] = 8273,
  [SMALL_STATE(189)] = 8304,
  [SMALL_STATE(190)] = 8333,
  [SMALL_STATE(191)] = 8362,
  [SMALL_STATE(192)] = 8395,
  [SMALL_STATE(193)] = 8430,
  [SMALL_STATE(194)] = 8459,
  [SMALL_STATE(195)] = 8492,
  [SMALL_STATE(196)] = 8523,
  [SMALL_STATE(197)] = 8556,
  [SMALL_STATE(198)] = 8589,
  [SMALL_STATE(199)] = 8624,
  [SMALL_STATE(200)] = 8657,
  [SMALL_STATE(201)] = 8688,
  [SMALL_STATE(202)] = 8719,
  [SMALL_STATE(203)] = 8752,
  [SMALL_STATE(204)] = 8787,
  [SMALL_STATE(205)] = 8820,
  [SMALL_STATE(206)] = 8855,
  [SMALL_STATE(207)] = 8890,
  [SMALL_STATE(208)] = 8921,
  [SMALL_STATE(209)] = 8956,
  [SMALL_STATE(210)] = 8991,
  [SMALL_STATE(211)] = 9026,
  [SMALL_STATE(212)] = 9061,
  [SMALL_STATE(213)] = 9092,
  [SMALL_STATE(214)] = 9123,
  [SMALL_STATE(215)] = 9151,
  [SMALL_STATE(216)] = 9181,
  [SMALL_STATE(217)] = 9209,
  [SMALL_STATE(218)] = 9237,
  [SMALL_STATE(219)] = 9271,
  [SMALL_STATE(220)] = 9299,
  [SMALL_STATE(221)] = 9327,
  [SMALL_STATE(222)] = 9355,
  [SMALL_STATE(223)] = 9389,
  [SMALL_STATE(224)] = 9421,
  [SMALL_STATE(225)] = 9451,
  [SMALL_STATE(226)] = 9481,
  [SMALL_STATE(227)] = 9511,
  [SMALL_STATE(228)] = 9545,
  [SMALL_STATE(229)] = 9577,
  [SMALL_STATE(230)] = 9605,
  [SMALL_STATE(231)] = 9637,
  [SMALL_STATE(232)] = 9665,
  [SMALL_STATE(233)] = 9695,
  [SMALL_STATE(234)] = 9723,
  [SMALL_STATE(235)] = 9751,
  [SMALL_STATE(236)] = 9779,
  [SMALL_STATE(237)] = 9807,
  [SMALL_STATE(238)] = 9835,
  [SMALL_STATE(239)] = 9863,
  [SMALL_STATE(240)] = 9891,
  [SMALL_STATE(241)] = 9919,
  [SMALL_STATE(242)] = 9949,
  [SMALL_STATE(243)] = 9981,
  [SMALL_STATE(244)] = 10015,
  [SMALL_STATE(245)] = 10049,
  [SMALL_STATE(246)] = 10079,
  [SMALL_STATE(247)] = 10109,
  [SMALL_STATE(248)] = 10141,
  [SMALL_STATE(249)] = 10171,
  [SMALL_STATE(250)] = 10205,
  [SMALL_STATE(251)] = 10237,
  [SMALL_STATE(252)] = 10267,
  [SMALL_STATE(253)] = 10295,
  [SMALL_STATE(254)] = 10329,
  [SMALL_STATE(255)] = 10359,
  [SMALL_STATE(256)] = 10391,
  [SMALL_STATE(257)] = 10433,
  [SMALL_STATE(258)] = 10463,
  [SMALL_STATE(259)] = 10495,
  [SMALL_STATE(260)] = 10523,
  [SMALL_STATE(261)] = 10555,
  [SMALL_STATE(262)] = 10587,
  [SMALL_STATE(263)] = 10617,
  [SMALL_STATE(264)] = 10646,
  [SMALL_STATE(265)] = 10685,
  [SMALL_STATE(266)] = 10714,
  [SMALL_STATE(267)] = 10745,
  [SMALL_STATE(268)] = 10776,
  [SMALL_STATE(269)] = 10807,
  [SMALL_STATE(270)] = 10836,
  [SMALL_STATE(271)] = 10867,
  [SMALL_STATE(272)] = 10900,
  [SMALL_STATE(273)] = 10931,
  [SMALL_STATE(274)] = 10958,
  [SMALL_STATE(275)] = 10985,
  [SMALL_STATE(276)] = 11016,
  [SMALL_STATE(277)] = 11047,
  [SMALL_STATE(278)] = 11076,
  [SMALL_STATE(279)] = 11115,
  [SMALL_STATE(280)] = 11144,
  [SMALL_STATE(281)] = 11175,
  [SMALL_STATE(282)] = 11204,
  [SMALL_STATE(283)] = 11233,
  [SMALL_STATE(284)] = 11262,
  [SMALL_STATE(285)] = 11289,
  [SMALL_STATE(286)] = 11318,
  [SMALL_STATE(287)] = 11347,
  [SMALL_STATE(288)] = 11376,
  [SMALL_STATE(289)] = 11405,
  [SMALL_STATE(290)] = 11434,
  [SMALL_STATE(291)] = 11465,
  [SMALL_STATE(292)] = 11494,
  [SMALL_STATE(293)] = 11521,
  [SMALL_STATE(294)] = 11554,
  [SMALL_STATE(295)] = 11585,
  [SMALL_STATE(296)] = 11614,
  [SMALL_STATE(297)] = 11653,
  [SMALL_STATE(298)] = 11680,
  [SMALL_STATE(299)] = 11711,
  [SMALL_STATE(300)] = 11740,
  [SMALL_STATE(301)] = 11771,
  [SMALL_STATE(302)] = 11798,
  [SMALL_STATE(303)] = 11827,
  [SMALL_STATE(304)] = 11858,
  [SMALL_STATE(305)] = 11887,
  [SMALL_STATE(306)] = 11918,
  [SMALL_STATE(307)] = 11947,
  [SMALL_STATE(308)] = 11974,
  [SMALL_STATE(309)] = 12001,
  [SMALL_STATE(310)] = 12032,
  [SMALL_STATE(311)] = 12063,
  [SMALL_STATE(312)] = 12094,
  [SMALL_STATE(313)] = 12130,
  [SMALL_STATE(314)] = 12160,
  [SMALL_STATE(315)] = 12196,
  [SMALL_STATE(316)] = 12222,
  [SMALL_STATE(317)] = 12250,
  [SMALL_STATE(318)] = 12286,
  [SMALL_STATE(319)] = 12314,
  [SMALL_STATE(320)] = 12350,
  [SMALL_STATE(321)] = 12376,
  [SMALL_STATE(322)] = 12412,
  [SMALL_STATE(323)] = 12448,
  [SMALL_STATE(324)] = 12484,
  [SMALL_STATE(325)] = 12520,
  [SMALL_STATE(326)] = 12556,
  [SMALL_STATE(327)] = 12582,
  [SMALL_STATE(328)] = 12614,
  [SMALL_STATE(329)] = 12650,
  [SMALL_STATE(330)] = 12676,
  [SMALL_STATE(331)] = 12712,
  [SMALL_STATE(332)] = 12748,
  [SMALL_STATE(333)] = 12784,
  [SMALL_STATE(334)] = 12820,
  [SMALL_STATE(335)] = 12848,
  [SMALL_STATE(336)] = 12884,
  [SMALL_STATE(337)] = 12912,
  [SMALL_STATE(338)] = 12948,
  [SMALL_STATE(339)] = 12984,
  [SMALL_STATE(340)] = 13010,
  [SMALL_STATE(341)] = 13036,
  [SMALL_STATE(342)] = 13062,
  [SMALL_STATE(343)] = 13098,
  [SMALL_STATE(344)] = 13134,
  [SMALL_STATE(345)] = 13160,
  [SMALL_STATE(346)] = 13186,
  [SMALL_STATE(347)] = 13212,
  [SMALL_STATE(348)] = 13248,
  [SMALL_STATE(349)] = 13274,
  [SMALL_STATE(350)] = 13310,
  [SMALL_STATE(351)] = 13346,
  [SMALL_STATE(352)] = 13372,
  [SMALL_STATE(353)] = 13408,
  [SMALL_STATE(354)] = 13436,
  [SMALL_STATE(355)] = 13464,
  [SMALL_STATE(356)] = 13500,
  [SMALL_STATE(357)] = 13526,
  [SMALL_STATE(358)] = 13562,
  [SMALL_STATE(359)] = 13590,
  [SMALL_STATE(360)] = 13616,
  [SMALL_STATE(361)] = 13644,
  [SMALL_STATE(362)] = 13672,
  [SMALL_STATE(363)] = 13708,
  [SMALL_STATE(364)] = 13744,
  [SMALL_STATE(365)] = 13772,
  [SMALL_STATE(366)] = 13808,
  [SMALL_STATE(367)] = 13836,
  [SMALL_STATE(368)] = 13864,
  [SMALL_STATE(369)] = 13889,
  [SMALL_STATE(370)] = 13914,
  [SMALL_STATE(371)] = 13939,
  [SMALL_STATE(372)] = 13964,
  [SMALL_STATE(373)] = 13989,
  [SMALL_STATE(374)] = 14014,
  [SMALL_STATE(375)] = 14039,
  [SMALL_STATE(376)] = 14064,
  [SMALL_STATE(377)] = 14089,
  [SMALL_STATE(378)] = 14114,
  [SMALL_STATE(379)] = 14139,
  [SMALL_STATE(380)] = 14164,
  [SMALL_STATE(381)] = 14189,
  [SMALL_STATE(382)] = 14214,
  [SMALL_STATE(383)] = 14239,
  [SMALL_STATE(384)] = 14264,
  [SMALL_STATE(385)] = 14289,
  [SMALL_STATE(386)] = 14314,
  [SMALL_STATE(387)] = 14339,
  [SMALL_STATE(388)] = 14364,
  [SMALL_STATE(389)] = 14389,
  [SMALL_STATE(390)] = 14414,
  [SMALL_STATE(391)] = 14441,
  [SMALL_STATE(392)] = 14466,
  [SMALL_STATE(393)] = 14491,
  [SMALL_STATE(394)] = 14516,
  [SMALL_STATE(395)] = 14541,
  [SMALL_STATE(396)] = 14566,
  [SMALL_STATE(397)] = 14591,
  [SMALL_STATE(398)] = 14616,
  [SMALL_STATE(399)] = 14641,
  [SMALL_STATE(400)] = 14666,
  [SMALL_STATE(401)] = 14691,
  [SMALL_STATE(402)] = 14716,
  [SMALL_STATE(403)] = 14743,
  [SMALL_STATE(404)] = 14768,
  [SMALL_STATE(405)] = 14793,
  [SMALL_STATE(406)] = 14818,
  [SMALL_STATE(407)] = 14843,
  [SMALL_STATE(408)] = 14868,
  [SMALL_STATE(409)] = 14893,
  [SMALL_STATE(410)] = 14918,
  [SMALL_STATE(411)] = 14943,
  [SMALL_STATE(412)] = 14967,
  [SMALL_STATE(413)] = 14991,
  [SMALL_STATE(414)] = 15032,
  [SMALL_STATE(415)] = 15066,
  [SMALL_STATE(416)] = 15096,
  [SMALL_STATE(417)] = 15130,
  [SMALL_STATE(418)] = 15153,
  [SMALL_STATE(419)] = 15178,
  [SMALL_STATE(420)] = 15212,
  [SMALL_STATE(421)] = 15244,
  [SMALL_STATE(422)] = 15266,
  [SMALL_STATE(423)] = 15286,
  [SMALL_STATE(424)] = 15320,
  [SMALL_STATE(425)] = 15354,
  [SMALL_STATE(426)] = 15373,
  [SMALL_STATE(427)] = 15404,
  [SMALL_STATE(428)] = 15432,
  [SMALL_STATE(429)] = 15460,
  [SMALL_STATE(430)] = 15488,
  [SMALL_STATE(431)] = 15516,
  [SMALL_STATE(432)] = 15544,
  [SMALL_STATE(433)] = 15572,
  [SMALL_STATE(434)] = 15600,
  [SMALL_STATE(435)] = 15628,
  [SMALL_STATE(436)] = 15656,
  [SMALL_STATE(437)] = 15684,
  [SMALL_STATE(438)] = 15704,
  [SMALL_STATE(439)] = 15732,
  [SMALL_STATE(440)] = 15760,
  [SMALL_STATE(441)] = 15788,
  [SMALL_STATE(442)] = 15810,
  [SMALL_STATE(443)] = 15838,
  [SMALL_STATE(444)] = 15866,
  [SMALL_STATE(445)] = 15888,
  [SMALL_STATE(446)] = 15908,
  [SMALL_STATE(447)] = 15936,
  [SMALL_STATE(448)] = 15964,
  [SMALL_STATE(449)] = 15992,
  [SMALL_STATE(450)] = 16020,
  [SMALL_STATE(451)] = 16048,
  [SMALL_STATE(452)] = 16076,
  [SMALL_STATE(453)] = 16104,
  [SMALL_STATE(454)] = 16132,
  [SMALL_STATE(455)] = 16160,
  [SMALL_STATE(456)] = 16188,
  [SMALL_STATE(457)] = 16216,
  [SMALL_STATE(458)] = 16244,
  [SMALL_STATE(459)] = 16272,
  [SMALL_STATE(460)] = 16300,
  [SMALL_STATE(461)] = 16328,
  [SMALL_STATE(462)] = 16356,
  [SMALL_STATE(463)] = 16384,
  [SMALL_STATE(464)] = 16412,
  [SMALL_STATE(465)] = 16440,
  [SMALL_STATE(466)] = 16468,
  [SMALL_STATE(467)] = 16496,
  [SMALL_STATE(468)] = 16524,
  [SMALL_STATE(469)] = 16552,
  [SMALL_STATE(470)] = 16580,
  [SMALL_STATE(471)] = 16608,
  [SMALL_STATE(472)] = 16636,
  [SMALL_STATE(473)] = 16655,
  [SMALL_STATE(474)] = 16680,
  [SMALL_STATE(475)] = 16701,
  [SMALL_STATE(476)] = 16726,
  [SMALL_STATE(477)] = 16747,
  [SMALL_STATE(478)] = 16766,
  [SMALL_STATE(479)] = 16791,
  [SMALL_STATE(480)] = 16810,
  [SMALL_STATE(481)] = 16827,
  [SMALL_STATE(482)] = 16852,
  [SMALL_STATE(483)] = 16869,
  [SMALL_STATE(484)] = 16894,
  [SMALL_STATE(485)] = 16915,
  [SMALL_STATE(486)] = 16934,
  [SMALL_STATE(487)] = 16955,
  [SMALL_STATE(488)] = 16980,
  [SMALL_STATE(489)] = 17002,
  [SMALL_STATE(490)] = 17024,
  [SMALL_STATE(491)] = 17046,
  [SMALL_STATE(492)] = 17068,
  [SMALL_STATE(493)] = 17086,
  [SMALL_STATE(494)] = 17106,
  [SMALL_STATE(495)] = 17128,
  [SMALL_STATE(496)] = 17150,
  [SMALL_STATE(497)] = 17170,
  [SMALL_STATE(498)] = 17186,
  [SMALL_STATE(499)] = 17204,
  [SMALL_STATE(500)] = 17224,
  [SMALL_STATE(501)] = 17246,
  [SMALL_STATE(502)] = 17266,
  [SMALL_STATE(503)] = 17286,
  [SMALL_STATE(504)] = 17306,
  [SMALL_STATE(505)] = 17326,
  [SMALL_STATE(506)] = 17344,
  [SMALL_STATE(507)] = 17364,
  [SMALL_STATE(508)] = 17384,
  [SMALL_STATE(509)] = 17400,
  [SMALL_STATE(510)] = 17422,
  [SMALL_STATE(511)] = 17442,
  [SMALL_STATE(512)] = 17462,
  [SMALL_STATE(513)] = 17482,
  [SMALL_STATE(514)] = 17502,
  [SMALL_STATE(515)] = 17522,
  [SMALL_STATE(516)] = 17544,
  [SMALL_STATE(517)] = 17564,
  [SMALL_STATE(518)] = 17584,
  [SMALL_STATE(519)] = 17606,
  [SMALL_STATE(520)] = 17628,
  [SMALL_STATE(521)] = 17648,
  [SMALL_STATE(522)] = 17670,
  [SMALL_STATE(523)] = 17690,
  [SMALL_STATE(524)] = 17712,
  [SMALL_STATE(525)] = 17728,
  [SMALL_STATE(526)] = 17746,
  [SMALL_STATE(527)] = 17766,
  [SMALL_STATE(528)] = 17782,
  [SMALL_STATE(529)] = 17800,
  [SMALL_STATE(530)] = 17820,
  [SMALL_STATE(531)] = 17838,
  [SMALL_STATE(532)] = 17854,
  [SMALL_STATE(533)] = 17872,
  [SMALL_STATE(534)] = 17892,
  [SMALL_STATE(535)] = 17912,
  [SMALL_STATE(536)] = 17932,
  [SMALL_STATE(537)] = 17952,
  [SMALL_STATE(538)] = 17970,
  [SMALL_STATE(539)] = 17990,
  [SMALL_STATE(540)] = 18008,
  [SMALL_STATE(541)] = 18028,
  [SMALL_STATE(542)] = 18046,
  [SMALL_STATE(543)] = 18066,
  [SMALL_STATE(544)] = 18088,
  [SMALL_STATE(545)] = 18110,
  [SMALL_STATE(546)] = 18132,
  [SMALL_STATE(547)] = 18147,
  [SMALL_STATE(548)] = 18164,
  [SMALL_STATE(549)] = 18179,
  [SMALL_STATE(550)] = 18194,
  [SMALL_STATE(551)] = 18211,
  [SMALL_STATE(552)] = 18226,
  [SMALL_STATE(553)] = 18245,
  [SMALL_STATE(554)] = 18264,
  [SMALL_STATE(555)] = 18279,
  [SMALL_STATE(556)] = 18296,
  [SMALL_STATE(557)] = 18313,
  [SMALL_STATE(558)] = 18332,
  [SMALL_STATE(559)] = 18347,
  [SMALL_STATE(560)] = 18366,
  [SMALL_STATE(561)] = 18385,
  [SMALL_STATE(562)] = 18402,
  [SMALL_STATE(563)] = 18421,
  [SMALL_STATE(564)] = 18438,
  [SMALL_STATE(565)] = 18457,
  [SMALL_STATE(566)] = 18476,
  [SMALL_STATE(567)] = 18495,
  [SMALL_STATE(568)] = 18514,
  [SMALL_STATE(569)] = 18531,
  [SMALL_STATE(570)] = 18550,
  [SMALL_STATE(571)] = 18569,
  [SMALL_STATE(572)] = 18584,
  [SMALL_STATE(573)] = 18601,
  [SMALL_STATE(574)] = 18616,
  [SMALL_STATE(575)] = 18631,
  [SMALL_STATE(576)] = 18648,
  [SMALL_STATE(577)] = 18663,
  [SMALL_STATE(578)] = 18682,
  [SMALL_STATE(579)] = 18701,
  [SMALL_STATE(580)] = 18720,
  [SMALL_STATE(581)] = 18739,
  [SMALL_STATE(582)] = 18756,
  [SMALL_STATE(583)] = 18773,
  [SMALL_STATE(584)] = 18792,
  [SMALL_STATE(585)] = 18807,
  [SMALL_STATE(586)] = 18823,
  [SMALL_STATE(587)] = 18839,
  [SMALL_STATE(588)] = 18853,
  [SMALL_STATE(589)] = 18869,
  [SMALL_STATE(590)] = 18883,
  [SMALL_STATE(591)] = 18899,
  [SMALL_STATE(592)] = 18915,
  [SMALL_STATE(593)] = 18931,
  [SMALL_STATE(594)] = 18945,
  [SMALL_STATE(595)] = 18961,
  [SMALL_STATE(596)] = 18975,
  [SMALL_STATE(597)] = 18989,
  [SMALL_STATE(598)] = 19003,
  [SMALL_STATE(599)] = 19019,
  [SMALL_STATE(600)] = 19035,
  [SMALL_STATE(601)] = 19051,
  [SMALL_STATE(602)] = 19067,
  [SMALL_STATE(603)] = 19083,
  [SMALL_STATE(604)] = 19096,
  [SMALL_STATE(605)] = 19109,
  [SMALL_STATE(606)] = 19122,
  [SMALL_STATE(607)] = 19135,
  [SMALL_STATE(608)] = 19148,
  [SMALL_STATE(609)] = 19161,
  [SMALL_STATE(610)] = 19174,
  [SMALL_STATE(611)] = 19187,
  [SMALL_STATE(612)] = 19200,
  [SMALL_STATE(613)] = 19213,
  [SMALL_STATE(614)] = 19226,
  [SMALL_STATE(615)] = 19239,
  [SMALL_STATE(616)] = 19252,
  [SMALL_STATE(617)] = 19265,
  [SMALL_STATE(618)] = 19278,
  [SMALL_STATE(619)] = 19291,
  [SMALL_STATE(620)] = 19304,
  [SMALL_STATE(621)] = 19317,
  [SMALL_STATE(622)] = 19330,
  [SMALL_STATE(623)] = 19343,
  [SMALL_STATE(624)] = 19356,
  [SMALL_STATE(625)] = 19369,
  [SMALL_STATE(626)] = 19382,
  [SMALL_STATE(627)] = 19395,
  [SMALL_STATE(628)] = 19408,
  [SMALL_STATE(629)] = 19421,
  [SMALL_STATE(630)] = 19434,
  [SMALL_STATE(631)] = 19447,
  [SMALL_STATE(632)] = 19460,
  [SMALL_STATE(633)] = 19473,
  [SMALL_STATE(634)] = 19486,
  [SMALL_STATE(635)] = 19499,
  [SMALL_STATE(636)] = 19512,
  [SMALL_STATE(637)] = 19525,
  [SMALL_STATE(638)] = 19538,
  [SMALL_STATE(639)] = 19551,
  [SMALL_STATE(640)] = 19564,
  [SMALL_STATE(641)] = 19577,
  [SMALL_STATE(642)] = 19590,
  [SMALL_STATE(643)] = 19603,
  [SMALL_STATE(644)] = 19616,
  [SMALL_STATE(645)] = 19629,
  [SMALL_STATE(646)] = 19642,
  [SMALL_STATE(647)] = 19655,
  [SMALL_STATE(648)] = 19668,
  [SMALL_STATE(649)] = 19681,
  [SMALL_STATE(650)] = 19694,
  [SMALL_STATE(651)] = 19707,
  [SMALL_STATE(652)] = 19720,
  [SMALL_STATE(653)] = 19733,
  [SMALL_STATE(654)] = 19746,
  [SMALL_STATE(655)] = 19759,
  [SMALL_STATE(656)] = 19772,
  [SMALL_STATE(657)] = 19785,
  [SMALL_STATE(658)] = 19798,
  [SMALL_STATE(659)] = 19811,
  [SMALL_STATE(660)] = 19824,
  [SMALL_STATE(661)] = 19837,
  [SMALL_STATE(662)] = 19850,
  [SMALL_STATE(663)] = 19863,
  [SMALL_STATE(664)] = 19876,
  [SMALL_STATE(665)] = 19880,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 4),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(647),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(649),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(624),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(634),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 4),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 4),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_rule, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(23),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_rule_set_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_rule_set_repeat1, 2), SHIFT_REPEAT(34),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_set_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_set_repeat1, 2), SHIFT_REPEAT(34),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_rule_set, 4),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 4, .production_id = 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(29),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_name, 1), REDUCE(sym_path, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 4),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(601),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3, .production_id = 7),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3, .production_id = 7),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 4),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance, 4),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3, .production_id = 6),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3, .production_id = 6),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_logical_repeat1, 2),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_logical_repeat1, 2), SHIFT_REPEAT(134),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 5),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_definition, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vs_filter_definition, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(631),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 2, .production_id = 4),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 2, .production_id = 4),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 2, .production_id = 5),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 2, .production_id = 5),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 4),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 4),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concept, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concept, 2),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(609),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(625),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(626),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(627),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(628),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(629),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(632),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(633),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(603),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(604),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(636),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(622),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(653),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(616),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(620),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(617),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 5),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 5),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat2, 2),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat2, 2), SHIFT_REPEAT(146),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_code_string, 1), REDUCE(aux_sym_code_insert_rule_repeat1, 1),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_code_string, 1), REDUCE(aux_sym_code_insert_rule_repeat1, 1),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 1),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_string, 1),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 1), SHIFT(535),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 3),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(85),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(622),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(621),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(618),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(617),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instance_repeat1, 2),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(622),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(613),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(617),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(614),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_name, 1), REDUCE(sym_value, 1),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_name, 1), REDUCE(sym_value, 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ratio_part, 1),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2),
  [424] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2), SHIFT_REPEAT(446),
  [427] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2), SHIFT_REPEAT(587),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2), SHIFT_REPEAT(2),
  [433] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(85),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2), SHIFT_REPEAT(122),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 2),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [451] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(105),
  [454] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(105),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 1),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 1),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 5),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invariant, 4),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(622),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(615),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(608),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(610),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ratio_part, 1),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(622),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(645),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(617),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_rule, 3),
  [508] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(127),
  [511] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(127),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_rule, 4),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 3),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mapping_rule, 3),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_rule, 3),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_operator, 1),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vs_filter_operator, 1),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(622),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(645),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(617),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 4),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mapping_rule, 4),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_rule, 4),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title, 3),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_insert_rule_repeat1, 1),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 3),
  [555] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(149),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [560] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(143),
  [563] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(143),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 1),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 1),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [572] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(177),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [583] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(168),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 5),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mapping_rule, 5),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_string, 1),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instance_repeat2, 2),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat2, 2), SHIFT_REPEAT(426),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 5),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 5),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_valueset_repeat2, 2),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat2, 2), SHIFT_REPEAT(162),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [616] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(187),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(599),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 5),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat2, 2),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat2, 2), SHIFT_REPEAT(424),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 1),
  [636] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(200),
  [639] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(201),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 5),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_repeat2, 2),
  [648] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat2, 2), SHIFT_REPEAT(419),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_metadata, 1),
  [657] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(183),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 1),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instance_repeat1, 1),
  [664] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(257),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sd_metadata, 1),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 1),
  [679] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(246),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parent, 3),
  [686] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(241),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [693] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(254),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [698] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(245),
  [701] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(232),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 5),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [708] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(248),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_metadata, 1),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance_metadata, 1),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concept, 3),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_cre_element_rule, 6),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 6),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 7),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_of, 3),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance_of, 3),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usage, 3),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usage, 3),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_string, 2),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_valueset, 2),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_severity, 3),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath, 3),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 4),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 4),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 3),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_valueset, 3),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [757] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(299),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 1),
  [762] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(263),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_metadata, 1),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 1),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 5),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 5),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 6),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cs_metadata, 1),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 7),
  [783] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(306),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 1),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [792] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(304),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2),
  [797] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2), SHIFT_REPEAT(315),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag, 1),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 1),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [806] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(269),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(571),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invariant_metadata, 1),
  [819] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(291),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2),
  [824] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2), SHIFT_REPEAT(365),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [831] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(358),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_rule, 4),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_rule, 4),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 4),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_type, 1),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_type, 1, .production_id = 9),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_only_rule, 4),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_list, 2),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2),
  [860] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2), SHIFT_REPEAT(150),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component_from, 2),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contains_rule_repeat1, 2),
  [873] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contains_rule_repeat1, 2), SHIFT_REPEAT(264),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vs_filter_list_repeat1, 2),
  [878] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vs_filter_list_repeat1, 2), SHIFT_REPEAT(278),
  [881] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(336),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 3),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_list, 1),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 1),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_system, 2),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_only_rule, 5),
  [898] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2), SHIFT_REPEAT(321),
  [901] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 3),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 3),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 5),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_rule, 5),
  [909] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(402),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(573),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_value_rule, 4),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_rule, 3, .production_id = 1),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [930] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_code_insert_rule, 3, .production_id = 1), REDUCE(sym_insert_rule, 3, .production_id = 1),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [935] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cardinality_rule_repeat1, 1),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 3),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_definition, 3),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ratio, 3),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_value, 1),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_insert_rule, 4, .production_id = 8),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component_from, 4),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_insert_rule, 3, .production_id = 1),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_component, 2),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_rule, 4, .production_id = 8),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_value_rule, 7),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_valueset_repeat2, 1),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_value_rule, 4),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 2),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat2, 1),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_rule, 4),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sd_rule, 1),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_repeat2, 1),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strength, 3),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_entity_rule, 1),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 6),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_insert_rule, 3),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lr_rule, 1),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_logical_repeat1, 1),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 3),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_cre_element_rule, 7),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component, 3),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_insert_rule, 4),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set_rule, 1),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_rule_set_repeat1, 1, .production_id = 2),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 5, .production_id = 3),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instance_repeat2, 1),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concept, 4),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_rule, 1),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 8),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_rule, 1),
  [1017] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_code_insert_rule, 3), REDUCE(sym_insert_rule, 3),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_caret_value_rule, 5),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_set_repeat1, 1),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_component, 4),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component, 2),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat2, 1),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cs_rule, 1),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_rule, 5),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_rule, 3),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_value_rule, 5),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_rule_set_reference, 4),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 1),
  [1042] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(422),
  [1045] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [1047] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2), SHIFT_REPEAT(469),
  [1050] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2), SHIFT_REPEAT(587),
  [1053] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2), SHIFT_REPEAT(2),
  [1056] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_rule_repeat1, 2), SHIFT_REPEAT(455),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_rule_repeat1, 2),
  [1061] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [1063] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [1065] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [1067] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [1069] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [1071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [1073] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [1075] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [1077] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [1079] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [1081] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [1083] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(480),
  [1086] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(482),
  [1089] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [1091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [1093] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [1095] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [1097] = {.entry = {.count = 1, .reusable = false}}, SHIFT(589),
  [1099] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [1101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [1103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [1105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [1107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [1109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [1111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [1113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [1115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(524),
  [1118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(584),
  [1120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [1122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(531),
  [1125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(527),
  [1128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(508),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [1141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(572),
  [1144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(576),
  [1150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_param_rule_set_params_repeat1, 2),
  [1158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_param_rule_set_params_repeat1, 2), SHIFT_REPEAT(546),
  [1161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [1163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(596),
  [1165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [1167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [1169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(584),
  [1172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [1174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [1176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [1182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [1184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [1194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [1196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [1198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(573),
  [1207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(576),
  [1210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(558),
  [1213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(547),
  [1216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param_rule_set_params, 1),
  [1218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [1220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [1222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(574),
  [1225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(554),
  [1228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(549),
  [1231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(549),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_param_rule_set_params_repeat1, 1),
  [1242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1),
  [1246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2),
  [1248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(593),
  [1251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 2),
  [1257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 2), SHIFT_REPEAT(519),
  [1260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2), SHIFT_REPEAT(140),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [1267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reference_repeat1, 2),
  [1283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reference_repeat1, 2), SHIFT_REPEAT(518),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [1290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(587),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(589),
  [1298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(596),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 1),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 4),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(665),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(606),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(641),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1385] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(664),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_path, 2),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fsh_comment, 3),
  [1433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fsh_comment, 2),
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
