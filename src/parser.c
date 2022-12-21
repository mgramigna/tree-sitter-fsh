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
#define STATE_COUNT 562
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 197
#define ALIAS_COUNT 6
#define TOKEN_COUNT 80
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 8

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
  anon_sym_CARET = 48,
  anon_sym_MS = 49,
  anon_sym_SU = 50,
  anon_sym_TU = 51,
  anon_sym_N = 52,
  anon_sym_D = 53,
  aux_sym_cardinality_token1 = 54,
  anon_sym_DOT_DOT = 55,
  anon_sym_STAR2 = 56,
  anon_sym_DQUOTE = 57,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 58,
  sym_double_quote_string_fragment = 59,
  sym_escape_sequence = 60,
  sym_number = 61,
  sym_date = 62,
  sym_time = 63,
  anon_sym_T = 64,
  anon_sym_SQUOTE = 65,
  aux_sym_unit_token1 = 66,
  anon_sym_example = 67,
  anon_sym_preferred = 68,
  anon_sym_extensible = 69,
  anon_sym_required = 70,
  anon_sym_Reference = 71,
  anon_sym_Canonical = 72,
  anon_sym_PIPE = 73,
  anon_sym_named = 74,
  anon_sym_QMARK_BANG = 75,
  aux_sym_param_rule_set_params_token1 = 76,
  anon_sym_SLASH = 77,
  anon_sym_SLASH2 = 78,
  sym_regex_pattern = 79,
  sym_doc = 80,
  sym_alias = 81,
  sym_profile = 82,
  sym_extension = 83,
  sym_invariant = 84,
  sym_instance = 85,
  sym_valueset = 86,
  sym_codesystem = 87,
  sym_mapping = 88,
  sym_logical = 89,
  sym_resource = 90,
  sym_rule_set = 91,
  sym_param_rule_set = 92,
  sym_sd_metadata = 93,
  sym_instance_metadata = 94,
  sym_invariant_metadata = 95,
  sym_vs_metadata = 96,
  sym_cs_metadata = 97,
  sym_mapping_metadata = 98,
  sym_description = 99,
  sym_expression = 100,
  sym_id = 101,
  sym_instance_of = 102,
  sym_parent = 103,
  sym_severity = 104,
  sym_source = 105,
  sym_target = 106,
  sym_title = 107,
  sym_usage = 108,
  sym_xpath = 109,
  sym_rule_set_rule = 110,
  sym_sd_rule = 111,
  sym_lr_rule = 112,
  sym_vs_rule = 113,
  sym_cs_rule = 114,
  sym_instance_rule = 115,
  sym_mapping_entity_rule = 116,
  sym_cardinality_rule = 117,
  sym_add_cre_element_rule = 118,
  sym_code_insert_rule = 119,
  sym_insert_rule = 120,
  sym_valueset_rule = 121,
  sym_fixed_value_rule = 122,
  sym_contains_rule = 123,
  sym_caret_value_rule = 124,
  sym_code_caret_value_rule = 125,
  sym_obeys_rule = 126,
  sym_path_rule = 127,
  sym_flag_rule = 128,
  sym_only_rule = 129,
  sym_mapping_rule = 130,
  sym_add_element_rule = 131,
  sym_vs_component = 132,
  sym_vs_concept_component = 133,
  sym_vs_filter_component = 134,
  sym_vs_component_from = 135,
  sym_vs_from_system = 136,
  sym_vs_from_valueset = 137,
  sym_vs_filter_list = 138,
  sym_vs_filter_definition = 139,
  sym_vs_filter_operator = 140,
  sym_vs_filter_value = 141,
  sym_code = 142,
  sym_concept = 143,
  sym_code_string = 144,
  sym_sequence = 145,
  sym_caret_path = 146,
  sym_name = 147,
  sym_cardinality = 148,
  sym_string = 149,
  sym_multiline_string = 150,
  sym_datetime = 151,
  sym_unit = 152,
  sym_quantity = 153,
  sym_ratio_part = 154,
  sym_ratio = 155,
  sym_bool = 156,
  sym_path = 157,
  sym_strength = 158,
  sym_reference = 159,
  sym_canonical = 160,
  sym_value = 161,
  sym_item = 162,
  sym_flag = 163,
  sym_target_type = 164,
  sym_param_rule_set_params = 165,
  sym_param_rule_set_reference = 166,
  sym_regex = 167,
  aux_sym_doc_repeat1 = 168,
  aux_sym_profile_repeat1 = 169,
  aux_sym_profile_repeat2 = 170,
  aux_sym_invariant_repeat1 = 171,
  aux_sym_instance_repeat1 = 172,
  aux_sym_instance_repeat2 = 173,
  aux_sym_valueset_repeat1 = 174,
  aux_sym_valueset_repeat2 = 175,
  aux_sym_codesystem_repeat1 = 176,
  aux_sym_codesystem_repeat2 = 177,
  aux_sym_mapping_repeat1 = 178,
  aux_sym_mapping_repeat2 = 179,
  aux_sym_logical_repeat1 = 180,
  aux_sym_rule_set_repeat1 = 181,
  aux_sym_param_rule_set_repeat1 = 182,
  aux_sym_cardinality_rule_repeat1 = 183,
  aux_sym_code_insert_rule_repeat1 = 184,
  aux_sym_contains_rule_repeat1 = 185,
  aux_sym_obeys_rule_repeat1 = 186,
  aux_sym_flag_rule_repeat1 = 187,
  aux_sym_only_rule_repeat1 = 188,
  aux_sym_vs_concept_component_repeat1 = 189,
  aux_sym_vs_filter_list_repeat1 = 190,
  aux_sym_sequence_repeat1 = 191,
  aux_sym_string_repeat1 = 192,
  aux_sym_unit_repeat1 = 193,
  aux_sym_reference_repeat1 = 194,
  aux_sym_canonical_repeat1 = 195,
  aux_sym_param_rule_set_params_repeat1 = 196,
  alias_sym_alias_name = 197,
  alias_sym_code_system = 198,
  alias_sym_code_value = 199,
  alias_sym_param_rule_set_content = 200,
  alias_sym_reference_type = 201,
  alias_sym_rule_set_reference = 202,
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
    [0] = alias_sym_code_system,
    [2] = alias_sym_code_value,
  },
  [6] = {
    [3] = alias_sym_rule_set_reference,
  },
  [7] = {
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
  [23] = 19,
  [24] = 20,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 27,
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
  [65] = 19,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 20,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 64,
  [79] = 79,
  [80] = 80,
  [81] = 20,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 19,
  [88] = 35,
  [89] = 89,
  [90] = 37,
  [91] = 91,
  [92] = 19,
  [93] = 93,
  [94] = 20,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 19,
  [102] = 20,
  [103] = 83,
  [104] = 37,
  [105] = 20,
  [106] = 20,
  [107] = 19,
  [108] = 19,
  [109] = 20,
  [110] = 110,
  [111] = 35,
  [112] = 19,
  [113] = 113,
  [114] = 114,
  [115] = 20,
  [116] = 116,
  [117] = 35,
  [118] = 19,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 19,
  [124] = 20,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 120,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 37,
  [133] = 19,
  [134] = 134,
  [135] = 135,
  [136] = 20,
  [137] = 137,
  [138] = 138,
  [139] = 20,
  [140] = 19,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 20,
  [148] = 19,
  [149] = 19,
  [150] = 20,
  [151] = 151,
  [152] = 20,
  [153] = 19,
  [154] = 20,
  [155] = 19,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 20,
  [161] = 20,
  [162] = 19,
  [163] = 19,
  [164] = 164,
  [165] = 165,
  [166] = 19,
  [167] = 167,
  [168] = 168,
  [169] = 20,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 19,
  [178] = 20,
  [179] = 179,
  [180] = 180,
  [181] = 19,
  [182] = 182,
  [183] = 173,
  [184] = 29,
  [185] = 70,
  [186] = 28,
  [187] = 20,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 75,
  [192] = 192,
  [193] = 20,
  [194] = 180,
  [195] = 195,
  [196] = 196,
  [197] = 19,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 19,
  [202] = 20,
  [203] = 203,
  [204] = 204,
  [205] = 20,
  [206] = 19,
  [207] = 20,
  [208] = 208,
  [209] = 19,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 180,
  [217] = 20,
  [218] = 218,
  [219] = 219,
  [220] = 66,
  [221] = 182,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 19,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 173,
  [235] = 180,
  [236] = 28,
  [237] = 29,
  [238] = 173,
  [239] = 19,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 20,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 240,
  [254] = 100,
  [255] = 99,
  [256] = 256,
  [257] = 19,
  [258] = 20,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 242,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 250,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 96,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 288,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 289,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 288,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 284,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 284,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 289,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 288,
  [338] = 287,
  [339] = 289,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 19,
  [350] = 20,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 20,
  [359] = 19,
  [360] = 19,
  [361] = 20,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 19,
  [366] = 20,
  [367] = 19,
  [368] = 19,
  [369] = 369,
  [370] = 370,
  [371] = 20,
  [372] = 20,
  [373] = 373,
  [374] = 19,
  [375] = 20,
  [376] = 376,
  [377] = 377,
  [378] = 19,
  [379] = 379,
  [380] = 19,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 20,
  [388] = 388,
  [389] = 19,
  [390] = 20,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 19,
  [396] = 396,
  [397] = 397,
  [398] = 20,
  [399] = 399,
  [400] = 382,
  [401] = 401,
  [402] = 19,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 20,
  [407] = 382,
  [408] = 383,
  [409] = 19,
  [410] = 20,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 383,
  [415] = 411,
  [416] = 416,
  [417] = 388,
  [418] = 20,
  [419] = 419,
  [420] = 420,
  [421] = 19,
  [422] = 422,
  [423] = 420,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 420,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 424,
  [433] = 420,
  [434] = 424,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 420,
  [442] = 424,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 424,
  [447] = 420,
  [448] = 424,
  [449] = 420,
  [450] = 450,
  [451] = 451,
  [452] = 424,
  [453] = 453,
  [454] = 420,
  [455] = 20,
  [456] = 424,
  [457] = 420,
  [458] = 420,
  [459] = 424,
  [460] = 460,
  [461] = 19,
  [462] = 424,
  [463] = 424,
  [464] = 424,
  [465] = 420,
  [466] = 424,
  [467] = 424,
  [468] = 468,
  [469] = 420,
  [470] = 420,
  [471] = 471,
  [472] = 472,
  [473] = 19,
  [474] = 20,
  [475] = 224,
  [476] = 476,
  [477] = 424,
  [478] = 478,
  [479] = 450,
  [480] = 20,
  [481] = 19,
  [482] = 420,
  [483] = 420,
  [484] = 424,
  [485] = 420,
  [486] = 420,
  [487] = 424,
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
  [501] = 497,
  [502] = 502,
  [503] = 21,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 515,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 509,
  [540] = 534,
  [541] = 541,
  [542] = 542,
  [543] = 504,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 509,
  [548] = 534,
  [549] = 534,
  [550] = 534,
  [551] = 534,
  [552] = 534,
  [553] = 534,
  [554] = 534,
  [555] = 534,
  [556] = 534,
  [557] = 534,
  [558] = 534,
  [559] = 534,
  [560] = 560,
  [561] = 561,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(369);
      if (lookahead == '"') ADVANCE(492);
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '\'') ADVANCE(513);
      if (lookahead == '(') ADVANCE(399);
      if (lookahead == ')') ADVANCE(401);
      if (lookahead == '*') ADVANCE(490);
      if (lookahead == '+') ADVANCE(479);
      if (lookahead == '-') ADVANCE(424);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == '/') ADVANCE(527);
      if (lookahead == ':') ADVANCE(371);
      if (lookahead == '=') ADVANCE(372);
      if (lookahead == '?') ADVANCE(418);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(432);
      if (lookahead == 'D') ADVANCE(486);
      if (lookahead == 'E') ADVANCE(473);
      if (lookahead == 'I') ADVANCE(446);
      if (lookahead == 'L') ADVANCE(462);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead == 'N') ADVANCE(485);
      if (lookahead == 'P') ADVANCE(435);
      if (lookahead == 'R') ADVANCE(448);
      if (lookahead == 'S') ADVANCE(429);
      if (lookahead == 'T') ADVANCE(512);
      if (lookahead == 'U') ADVANCE(472);
      if (lookahead == 'V') ADVANCE(438);
      if (lookahead == 'X') ADVANCE(425);
      if (lookahead == '\\') ADVANCE(478);
      if (lookahead == '^') ADVANCE(481);
      if (lookahead == 'a') ADVANCE(458);
      if (lookahead == 'c') ADVANCE(464);
      if (lookahead == 'e') ADVANCE(474);
      if (lookahead == 'f') ADVANCE(440);
      if (lookahead == 'i') ADVANCE(457);
      if (lookahead == 'n') ADVANCE(436);
      if (lookahead == 'o') ADVANCE(444);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead == 't') ADVANCE(471);
      if (lookahead == 'v') ADVANCE(441);
      if (lookahead == 'w') ADVANCE(453);
      if (lookahead == '|') ADVANCE(522);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(328)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(524);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(492);
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == 'C') ADVANCE(431);
      if (lookahead == 'D') ADVANCE(486);
      if (lookahead == 'M') ADVANCE(426);
      if (lookahead == 'N') ADVANCE(485);
      if (lookahead == 'R') ADVANCE(452);
      if (lookahead == 'S') ADVANCE(428);
      if (lookahead == 'T') ADVANCE(430);
      if (lookahead == 'c') ADVANCE(467);
      if (lookahead == 'f') ADVANCE(439);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead == 't') ADVANCE(471);
      if (lookahead == 'v') ADVANCE(441);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(479);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(493);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(491);
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(491);
      if (lookahead == '?') ADVANCE(418);
      if (lookahead == 'C') ADVANCE(431);
      if (lookahead == 'D') ADVANCE(486);
      if (lookahead == 'M') ADVANCE(426);
      if (lookahead == 'N') ADVANCE(485);
      if (lookahead == 'R') ADVANCE(452);
      if (lookahead == 'S') ADVANCE(428);
      if (lookahead == 'T') ADVANCE(430);
      if (lookahead == 'c') ADVANCE(467);
      if (lookahead == 'o') ADVANCE(469);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead == 'v') ADVANCE(441);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(479);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(491);
      if (lookahead == '\\') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(494);
      if (lookahead != 0) ADVANCE(495);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(491);
      if (lookahead == 'a') ADVANCE(458);
      if (lookahead == 'f') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(491);
      if (lookahead == 'a') ADVANCE(458);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(491);
      if (lookahead == 'o') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(494);
      if (lookahead != 0) ADVANCE(495);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '+') ADVANCE(479);
      if (lookahead == '-') ADVANCE(424);
      if (lookahead == 'D') ADVANCE(486);
      if (lookahead == 'M') ADVANCE(426);
      if (lookahead == 'N') ADVANCE(485);
      if (lookahead == 'S') ADVANCE(428);
      if (lookahead == 'T') ADVANCE(430);
      if (lookahead == '^') ADVANCE(481);
      if (lookahead == 'c') ADVANCE(467);
      if (lookahead == 'e') ADVANCE(474);
      if (lookahead == 'i') ADVANCE(457);
      if (lookahead == 'o') ADVANCE(442);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead == 'v') ADVANCE(441);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '^') ADVANCE(481);
      if (lookahead == 'c') ADVANCE(467);
      if (lookahead == 'e') ADVANCE(474);
      if (lookahead == 'i') ADVANCE(457);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '^') ADVANCE(481);
      if (lookahead == 'i') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == 'c') ADVANCE(467);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == 'i') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 19:
      if (lookahead == '\'') ADVANCE(513);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(514);
      END_STATE();
    case 20:
      if (lookahead == '(') ADVANCE(399);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 21:
      if (lookahead == ')') ADVANCE(401);
      if (lookahead == '\\') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 22:
      if (lookahead == ')') ADVANCE(401);
      if (lookahead == 'o') ADVANCE(469);
      if (lookahead == '|') ADVANCE(522);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 23:
      if (lookahead == ')') ADVANCE(401);
      if (lookahead == 'o') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(490);
      if (lookahead == '?') ADVANCE(418);
      if (lookahead == 'C') ADVANCE(431);
      if (lookahead == 'D') ADVANCE(486);
      if (lookahead == 'M') ADVANCE(426);
      if (lookahead == 'N') ADVANCE(485);
      if (lookahead == 'R') ADVANCE(452);
      if (lookahead == 'S') ADVANCE(428);
      if (lookahead == 'T') ADVANCE(430);
      if (lookahead == 'c') ADVANCE(466);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead == 'v') ADVANCE(441);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(479);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(423);
      if (lookahead == 'i') ADVANCE(459);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == 'n') ADVANCE(436);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(489);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(318);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(407);
      END_STATE();
    case 32:
      if (lookahead == '?') ADVANCE(418);
      if (lookahead == 'C') ADVANCE(431);
      if (lookahead == 'D') ADVANCE(486);
      if (lookahead == 'M') ADVANCE(426);
      if (lookahead == 'N') ADVANCE(485);
      if (lookahead == 'R') ADVANCE(452);
      if (lookahead == 'S') ADVANCE(428);
      if (lookahead == 'T') ADVANCE(430);
      if (lookahead == 'c') ADVANCE(467);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead == 'v') ADVANCE(441);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(479);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 33:
      if (lookahead == '?') ADVANCE(418);
      if (lookahead == 'C') ADVANCE(431);
      if (lookahead == 'D') ADVANCE(486);
      if (lookahead == 'M') ADVANCE(426);
      if (lookahead == 'N') ADVANCE(485);
      if (lookahead == 'R') ADVANCE(452);
      if (lookahead == 'S') ADVANCE(428);
      if (lookahead == 'T') ADVANCE(430);
      if (lookahead == 'c') ADVANCE(466);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead == 'v') ADVANCE(441);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(479);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 34:
      if (lookahead == '?') ADVANCE(418);
      if (lookahead == 'D') ADVANCE(486);
      if (lookahead == 'M') ADVANCE(426);
      if (lookahead == 'N') ADVANCE(485);
      if (lookahead == 'S') ADVANCE(428);
      if (lookahead == 'T') ADVANCE(430);
      if (lookahead == 'a') ADVANCE(458);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 35:
      if (lookahead == 'C') ADVANCE(431);
      if (lookahead == 'D') ADVANCE(486);
      if (lookahead == 'M') ADVANCE(426);
      if (lookahead == 'N') ADVANCE(485);
      if (lookahead == 'R') ADVANCE(452);
      if (lookahead == 'S') ADVANCE(428);
      if (lookahead == 'T') ADVANCE(430);
      if (lookahead == 'c') ADVANCE(467);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead == 'v') ADVANCE(441);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(479);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 36:
      if (lookahead == 'D') ADVANCE(486);
      if (lookahead == 'M') ADVANCE(426);
      if (lookahead == 'N') ADVANCE(485);
      if (lookahead == 'S') ADVANCE(428);
      if (lookahead == 'T') ADVANCE(430);
      if (lookahead == '^') ADVANCE(481);
      if (lookahead == 'c') ADVANCE(467);
      if (lookahead == 'i') ADVANCE(459);
      if (lookahead == 'o') ADVANCE(442);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead == 'v') ADVANCE(441);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(479);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 37:
      if (lookahead == 'D') ADVANCE(486);
      if (lookahead == 'M') ADVANCE(426);
      if (lookahead == 'N') ADVANCE(485);
      if (lookahead == 'S') ADVANCE(428);
      if (lookahead == 'T') ADVANCE(430);
      if (lookahead == 'c') ADVANCE(467);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead == 'v') ADVANCE(441);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(479);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 38:
      if (lookahead == 'D') ADVANCE(450);
      if (lookahead == 'E') ADVANCE(475);
      if (lookahead == 'S') ADVANCE(449);
      if (lookahead == 'X') ADVANCE(425);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 39:
      if (lookahead == 'D') ADVANCE(450);
      if (lookahead == 'I') ADVANCE(445);
      if (lookahead == 'P') ADVANCE(434);
      if (lookahead == 'T') ADVANCE(454);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 40:
      if (lookahead == 'P') ADVANCE(57);
      END_STATE();
    case 41:
      if (lookahead == 'R') ADVANCE(117);
      END_STATE();
    case 42:
      if (lookahead == 'S') ADVANCE(482);
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 43:
      if (lookahead == 'S') ADVANCE(302);
      END_STATE();
    case 44:
      if (lookahead == 'S') ADVANCE(128);
      END_STATE();
    case 45:
      if (lookahead == 'S') ADVANCE(132);
      END_STATE();
    case 46:
      if (lookahead == 'U') ADVANCE(483);
      END_STATE();
    case 47:
      if (lookahead == 'U') ADVANCE(484);
      END_STATE();
    case 48:
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(528);
      END_STATE();
    case 49:
      if (lookahead == '\\') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 50:
      if (lookahead == '\\') ADVANCE(326);
      if (lookahead == ']') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead == 'i') ADVANCE(281);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(264);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 68:
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 69:
      if (lookahead == 'b') ADVANCE(181);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(233);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(277);
      if (lookahead == 'm') ADVANCE(224);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(175);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(184);
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(403);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(523);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(519);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(517);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(121);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(282);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(294);
      if (lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(520);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(516);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(518);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(252);
      if (lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 143:
      if (lookahead == 'f') ADVANCE(387);
      END_STATE();
    case 144:
      if (lookahead == 'f') ADVANCE(167);
      END_STATE();
    case 145:
      if (lookahead == 'f') ADVANCE(129);
      END_STATE();
    case 146:
      if (lookahead == 'f') ADVANCE(139);
      END_STATE();
    case 147:
      if (lookahead == 'f') ADVANCE(139);
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 148:
      if (lookahead == 'f') ADVANCE(142);
      END_STATE();
    case 149:
      if (lookahead == 'g') ADVANCE(380);
      END_STATE();
    case 150:
      if (lookahead == 'g') ADVANCE(156);
      END_STATE();
    case 151:
      if (lookahead == 'g') ADVANCE(127);
      END_STATE();
    case 152:
      if (lookahead == 'g') ADVANCE(98);
      END_STATE();
    case 153:
      if (lookahead == 'h') ADVANCE(394);
      END_STATE();
    case 154:
      if (lookahead == 'h') ADVANCE(137);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(459);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(158)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 162:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(275);
      END_STATE();
    case 164:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 165:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 166:
      if (lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 168:
      if (lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 169:
      if (lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 171:
      if (lookahead == 'l') ADVANCE(381);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(521);
      END_STATE();
    case 173:
      if (lookahead == 'l') ADVANCE(258);
      END_STATE();
    case 174:
      if (lookahead == 'l') ADVANCE(298);
      END_STATE();
    case 175:
      if (lookahead == 'l') ADVANCE(290);
      END_STATE();
    case 176:
      if (lookahead == 'l') ADVANCE(300);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 180:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(291);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(289);
      END_STATE();
    case 184:
      if (lookahead == 'l') ADVANCE(292);
      END_STATE();
    case 185:
      if (lookahead == 'm') ADVANCE(398);
      END_STATE();
    case 186:
      if (lookahead == 'm') ADVANCE(412);
      END_STATE();
    case 187:
      if (lookahead == 'm') ADVANCE(379);
      END_STATE();
    case 188:
      if (lookahead == 'm') ADVANCE(115);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(374);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(385);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(384);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(255);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(273);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 205:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 206:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 207:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 208:
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 211:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 212:
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 217:
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(293);
      END_STATE();
    case 219:
      if (lookahead == 'p') ADVANCE(220);
      END_STATE();
    case 220:
      if (lookahead == 'p') ADVANCE(161);
      END_STATE();
    case 221:
      if (lookahead == 'p') ADVANCE(283);
      END_STATE();
    case 222:
      if (lookahead == 'p') ADVANCE(235);
      END_STATE();
    case 223:
      if (lookahead == 'p') ADVANCE(235);
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 224:
      if (lookahead == 'p') ADVANCE(180);
      END_STATE();
    case 225:
      if (lookahead == 'q') ADVANCE(287);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(406);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(268);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 245:
      if (lookahead == 's') ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(245)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 246:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 247:
      if (lookahead == 's') ADVANCE(370);
      END_STATE();
    case 248:
      if (lookahead == 's') ADVANCE(410);
      END_STATE();
    case 249:
      if (lookahead == 's') ADVANCE(404);
      END_STATE();
    case 250:
      if (lookahead == 's') ADVANCE(402);
      END_STATE();
    case 251:
      if (lookahead == 's') ADVANCE(276);
      if (lookahead == 'v') ADVANCE(59);
      END_STATE();
    case 252:
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 253:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 254:
      if (lookahead == 's') ADVANCE(279);
      END_STATE();
    case 255:
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 256:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 257:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 258:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 259:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 260:
      if (lookahead == 's') ADVANCE(280);
      END_STATE();
    case 261:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 262:
      if (lookahead == 's') ADVANCE(261);
      END_STATE();
    case 263:
      if (lookahead == 's') ADVANCE(284);
      if (lookahead == 'v') ADVANCE(59);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(388);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(391);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(397);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(383);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(378);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(413);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(375);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 283:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 285:
      if (lookahead == 'u') ADVANCE(303);
      if (lookahead == 'x') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(498);
      if (lookahead != 0) ADVANCE(496);
      END_STATE();
    case 286:
      if (lookahead == 'u') ADVANCE(230);
      END_STATE();
    case 287:
      if (lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 288:
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 289:
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 290:
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 291:
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 292:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 293:
      if (lookahead == 'u') ADVANCE(242);
      END_STATE();
    case 294:
      if (lookahead == 'v') ADVANCE(124);
      END_STATE();
    case 295:
      if (lookahead == 'x') ADVANCE(223);
      END_STATE();
    case 296:
      if (lookahead == 'x') ADVANCE(54);
      END_STATE();
    case 297:
      if (lookahead == 'x') ADVANCE(274);
      END_STATE();
    case 298:
      if (lookahead == 'y') ADVANCE(405);
      END_STATE();
    case 299:
      if (lookahead == 'y') ADVANCE(389);
      END_STATE();
    case 300:
      if (lookahead == 'y') ADVANCE(400);
      END_STATE();
    case 301:
      if (lookahead == 'y') ADVANCE(249);
      END_STATE();
    case 302:
      if (lookahead == 'y') ADVANCE(260);
      END_STATE();
    case 303:
      if (lookahead == '{') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      END_STATE();
    case 304:
      if (lookahead == '}') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(304);
      END_STATE();
    case 305:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(305)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 306:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(500);
      END_STATE();
    case 307:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(503);
      END_STATE();
    case 308:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(506);
      END_STATE();
    case 309:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 310:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      END_STATE();
    case 311:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(505);
      END_STATE();
    case 312:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(507);
      END_STATE();
    case 313:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(510);
      END_STATE();
    case 314:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      END_STATE();
    case 315:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 316:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 317:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 318:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 319:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 320:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      END_STATE();
    case 321:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(508);
      END_STATE();
    case 322:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(325);
      END_STATE();
    case 323:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(496);
      END_STATE();
    case 324:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(304);
      END_STATE();
    case 325:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      END_STATE();
    case 326:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 327:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(528);
      END_STATE();
    case 328:
      if (eof) ADVANCE(369);
      if (lookahead == '"') ADVANCE(492);
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '\'') ADVANCE(513);
      if (lookahead == '(') ADVANCE(399);
      if (lookahead == ')') ADVANCE(401);
      if (lookahead == '*') ADVANCE(490);
      if (lookahead == '+') ADVANCE(479);
      if (lookahead == '-') ADVANCE(424);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == '/') ADVANCE(526);
      if (lookahead == ':') ADVANCE(371);
      if (lookahead == '=') ADVANCE(372);
      if (lookahead == '?') ADVANCE(418);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(432);
      if (lookahead == 'D') ADVANCE(486);
      if (lookahead == 'E') ADVANCE(473);
      if (lookahead == 'I') ADVANCE(446);
      if (lookahead == 'L') ADVANCE(462);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead == 'N') ADVANCE(485);
      if (lookahead == 'P') ADVANCE(435);
      if (lookahead == 'R') ADVANCE(448);
      if (lookahead == 'S') ADVANCE(429);
      if (lookahead == 'T') ADVANCE(512);
      if (lookahead == 'U') ADVANCE(472);
      if (lookahead == 'V') ADVANCE(438);
      if (lookahead == 'X') ADVANCE(425);
      if (lookahead == '\\') ADVANCE(478);
      if (lookahead == '^') ADVANCE(481);
      if (lookahead == 'a') ADVANCE(458);
      if (lookahead == 'c') ADVANCE(464);
      if (lookahead == 'e') ADVANCE(474);
      if (lookahead == 'f') ADVANCE(440);
      if (lookahead == 'i') ADVANCE(457);
      if (lookahead == 'n') ADVANCE(436);
      if (lookahead == 'o') ADVANCE(444);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead == 't') ADVANCE(471);
      if (lookahead == 'v') ADVANCE(441);
      if (lookahead == 'w') ADVANCE(453);
      if (lookahead == '|') ADVANCE(522);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(328)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 329:
      if (eof) ADVANCE(369);
      if (lookahead == '"') ADVANCE(492);
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '=') ADVANCE(372);
      if (lookahead == '?') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(170);
      if (lookahead == 'C') ADVANCE(209);
      if (lookahead == 'D') ADVANCE(486);
      if (lookahead == 'E') ADVANCE(297);
      if (lookahead == 'I') ADVANCE(208);
      if (lookahead == 'L') ADVANCE(210);
      if (lookahead == 'M') ADVANCE(42);
      if (lookahead == 'N') ADVANCE(485);
      if (lookahead == 'P') ADVANCE(226);
      if (lookahead == 'R') ADVANCE(131);
      if (lookahead == 'S') ADVANCE(46);
      if (lookahead == 'T') ADVANCE(47);
      if (lookahead == 'V') ADVANCE(56);
      if (lookahead == '^') ADVANCE(481);
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead == 'f') ADVANCE(229);
      if (lookahead == 'i') ADVANCE(203);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(329)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      END_STATE();
    case 330:
      if (eof) ADVANCE(369);
      if (lookahead == '"') ADVANCE(492);
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(461);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == 'I') ADVANCE(460);
      if (lookahead == 'L') ADVANCE(462);
      if (lookahead == 'M') ADVANCE(433);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'V') ADVANCE(438);
      if (lookahead == '^') ADVANCE(481);
      if (lookahead == 'a') ADVANCE(458);
      if (lookahead == 'f') ADVANCE(470);
      if (lookahead == 'i') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(330)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 331:
      if (eof) ADVANCE(369);
      if (lookahead == '"') ADVANCE(492);
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(461);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == 'I') ADVANCE(460);
      if (lookahead == 'L') ADVANCE(462);
      if (lookahead == 'M') ADVANCE(433);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'V') ADVANCE(438);
      if (lookahead == '^') ADVANCE(481);
      if (lookahead == 'i') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(331)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 332:
      if (eof) ADVANCE(369);
      if (lookahead == '"') ADVANCE(492);
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(461);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == 'I') ADVANCE(460);
      if (lookahead == 'L') ADVANCE(462);
      if (lookahead == 'M') ADVANCE(433);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'V') ADVANCE(438);
      if (lookahead == 'i') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(332)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 333:
      if (eof) ADVANCE(369);
      if (lookahead == '"') ADVANCE(492);
      if (lookahead == '(') ADVANCE(399);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == ':') ADVANCE(371);
      if (lookahead == 'A') ADVANCE(170);
      if (lookahead == 'C') ADVANCE(209);
      if (lookahead == 'D') ADVANCE(130);
      if (lookahead == 'E') ADVANCE(295);
      if (lookahead == 'I') ADVANCE(82);
      if (lookahead == 'L') ADVANCE(210);
      if (lookahead == 'M') ADVANCE(51);
      if (lookahead == 'P') ADVANCE(52);
      if (lookahead == 'R') ADVANCE(131);
      if (lookahead == 'S') ADVANCE(93);
      if (lookahead == 'T') ADVANCE(55);
      if (lookahead == 'U') ADVANCE(246);
      if (lookahead == 'V') ADVANCE(56);
      if (lookahead == 'X') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == 'f') ADVANCE(229);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(333)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(500);
      END_STATE();
    case 334:
      if (eof) ADVANCE(369);
      if (lookahead == '"') ADVANCE(491);
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '(') ADVANCE(399);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '/') ADVANCE(527);
      if (lookahead == ':') ADVANCE(371);
      if (lookahead == '=') ADVANCE(372);
      if (lookahead == 'A') ADVANCE(170);
      if (lookahead == 'C') ADVANCE(209);
      if (lookahead == 'D') ADVANCE(130);
      if (lookahead == 'E') ADVANCE(295);
      if (lookahead == 'I') ADVANCE(82);
      if (lookahead == 'L') ADVANCE(210);
      if (lookahead == 'M') ADVANCE(51);
      if (lookahead == 'P') ADVANCE(52);
      if (lookahead == 'R') ADVANCE(131);
      if (lookahead == 'S') ADVANCE(93);
      if (lookahead == 'T') ADVANCE(55);
      if (lookahead == 'U') ADVANCE(246);
      if (lookahead == 'V') ADVANCE(56);
      if (lookahead == 'X') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == 'e') ADVANCE(296);
      if (lookahead == 'f') ADVANCE(229);
      if (lookahead == 'i') ADVANCE(203);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(227);
      if (lookahead == 'p') ADVANCE(238);
      if (lookahead == 'r') ADVANCE(109);
      if (lookahead == 'w') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(335)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      END_STATE();
    case 335:
      if (eof) ADVANCE(369);
      if (lookahead == '"') ADVANCE(491);
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '(') ADVANCE(399);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(371);
      if (lookahead == '=') ADVANCE(372);
      if (lookahead == 'A') ADVANCE(170);
      if (lookahead == 'C') ADVANCE(209);
      if (lookahead == 'D') ADVANCE(130);
      if (lookahead == 'E') ADVANCE(295);
      if (lookahead == 'I') ADVANCE(82);
      if (lookahead == 'L') ADVANCE(210);
      if (lookahead == 'M') ADVANCE(51);
      if (lookahead == 'P') ADVANCE(52);
      if (lookahead == 'R') ADVANCE(131);
      if (lookahead == 'S') ADVANCE(93);
      if (lookahead == 'T') ADVANCE(55);
      if (lookahead == 'U') ADVANCE(246);
      if (lookahead == 'V') ADVANCE(56);
      if (lookahead == 'X') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == 'e') ADVANCE(296);
      if (lookahead == 'f') ADVANCE(229);
      if (lookahead == 'i') ADVANCE(203);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(227);
      if (lookahead == 'p') ADVANCE(238);
      if (lookahead == 'r') ADVANCE(109);
      if (lookahead == 'w') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(335)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      END_STATE();
    case 336:
      if (eof) ADVANCE(369);
      if (lookahead == '"') ADVANCE(491);
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == '/') ADVANCE(526);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(461);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == 'I') ADVANCE(460);
      if (lookahead == 'L') ADVANCE(462);
      if (lookahead == 'M') ADVANCE(433);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'V') ADVANCE(438);
      if (lookahead == 'a') ADVANCE(458);
      if (lookahead == 'f') ADVANCE(439);
      if (lookahead == 't') ADVANCE(471);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(336)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 337:
      if (eof) ADVANCE(369);
      if (lookahead == '"') ADVANCE(491);
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(461);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == 'I') ADVANCE(460);
      if (lookahead == 'L') ADVANCE(462);
      if (lookahead == 'M') ADVANCE(433);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'V') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(337)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 338:
      if (eof) ADVANCE(369);
      if (lookahead == '"') ADVANCE(491);
      if (lookahead == '(') ADVANCE(399);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == ':') ADVANCE(371);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(461);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == 'I') ADVANCE(460);
      if (lookahead == 'L') ADVANCE(462);
      if (lookahead == 'M') ADVANCE(433);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'V') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(338)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 339:
      if (eof) ADVANCE(369);
      if (lookahead == '"') ADVANCE(491);
      if (lookahead == '(') ADVANCE(399);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(461);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == 'I') ADVANCE(460);
      if (lookahead == 'L') ADVANCE(462);
      if (lookahead == 'M') ADVANCE(433);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'V') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(339)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 340:
      if (eof) ADVANCE(369);
      if (lookahead == '"') ADVANCE(491);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == ':') ADVANCE(371);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(461);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == 'I') ADVANCE(460);
      if (lookahead == 'L') ADVANCE(462);
      if (lookahead == 'M') ADVANCE(433);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'V') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(340)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 341:
      if (eof) ADVANCE(369);
      if (lookahead == '"') ADVANCE(491);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(461);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == 'I') ADVANCE(460);
      if (lookahead == 'L') ADVANCE(462);
      if (lookahead == 'M') ADVANCE(433);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'V') ADVANCE(438);
      if (lookahead == 'a') ADVANCE(458);
      if (lookahead == 'f') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(341)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 342:
      if (eof) ADVANCE(369);
      if (lookahead == '"') ADVANCE(491);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(461);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == 'I') ADVANCE(460);
      if (lookahead == 'L') ADVANCE(462);
      if (lookahead == 'M') ADVANCE(433);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'V') ADVANCE(438);
      if (lookahead == 'a') ADVANCE(458);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(342)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 343:
      if (eof) ADVANCE(369);
      if (lookahead == '"') ADVANCE(491);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(461);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == 'I') ADVANCE(460);
      if (lookahead == 'L') ADVANCE(462);
      if (lookahead == 'M') ADVANCE(433);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'V') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(343)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 344:
      if (eof) ADVANCE(369);
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '\'') ADVANCE(513);
      if (lookahead == '(') ADVANCE(399);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == ':') ADVANCE(371);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(461);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == 'I') ADVANCE(460);
      if (lookahead == 'L') ADVANCE(462);
      if (lookahead == 'M') ADVANCE(433);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'V') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(344)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 345:
      if (eof) ADVANCE(369);
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '\'') ADVANCE(513);
      if (lookahead == '(') ADVANCE(399);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(461);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == 'I') ADVANCE(460);
      if (lookahead == 'L') ADVANCE(462);
      if (lookahead == 'M') ADVANCE(433);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'V') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(345)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 346:
      if (eof) ADVANCE(369);
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '\'') ADVANCE(513);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == ':') ADVANCE(371);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(461);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == 'I') ADVANCE(460);
      if (lookahead == 'L') ADVANCE(462);
      if (lookahead == 'M') ADVANCE(433);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'V') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(346)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 347:
      if (eof) ADVANCE(369);
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '\'') ADVANCE(513);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(461);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == 'I') ADVANCE(460);
      if (lookahead == 'L') ADVANCE(462);
      if (lookahead == 'M') ADVANCE(433);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'V') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(347)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 348:
      if (eof) ADVANCE(369);
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '(') ADVANCE(399);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(461);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == 'I') ADVANCE(460);
      if (lookahead == 'L') ADVANCE(462);
      if (lookahead == 'M') ADVANCE(433);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'V') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(348)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 349:
      if (eof) ADVANCE(369);
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == '-') ADVANCE(423);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == '=') ADVANCE(372);
      if (lookahead == '?') ADVANCE(418);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(461);
      if (lookahead == 'D') ADVANCE(486);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == 'I') ADVANCE(460);
      if (lookahead == 'L') ADVANCE(462);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead == 'N') ADVANCE(485);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'S') ADVANCE(428);
      if (lookahead == 'T') ADVANCE(430);
      if (lookahead == 'V') ADVANCE(438);
      if (lookahead == '^') ADVANCE(481);
      if (lookahead == 'a') ADVANCE(458);
      if (lookahead == 'c') ADVANCE(465);
      if (lookahead == 'f') ADVANCE(470);
      if (lookahead == 'i') ADVANCE(459);
      if (lookahead == 'o') ADVANCE(443);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(349)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 350:
      if (eof) ADVANCE(369);
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(461);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == 'I') ADVANCE(460);
      if (lookahead == 'L') ADVANCE(462);
      if (lookahead == 'M') ADVANCE(433);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'V') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(350)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 351:
      if (eof) ADVANCE(369);
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(461);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == 'I') ADVANCE(460);
      if (lookahead == 'L') ADVANCE(462);
      if (lookahead == 'M') ADVANCE(433);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'V') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(351)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 352:
      if (eof) ADVANCE(369);
      if (lookahead == '(') ADVANCE(399);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(461);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == 'I') ADVANCE(460);
      if (lookahead == 'L') ADVANCE(462);
      if (lookahead == 'M') ADVANCE(433);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'V') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(352)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 353:
      if (eof) ADVANCE(369);
      if (lookahead == '(') ADVANCE(399);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(170);
      if (lookahead == 'C') ADVANCE(209);
      if (lookahead == 'E') ADVANCE(297);
      if (lookahead == 'I') ADVANCE(208);
      if (lookahead == 'L') ADVANCE(210);
      if (lookahead == 'M') ADVANCE(51);
      if (lookahead == 'P') ADVANCE(226);
      if (lookahead == 'R') ADVANCE(131);
      if (lookahead == 'T') ADVANCE(511);
      if (lookahead == 'V') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(353)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      END_STATE();
    case 354:
      if (eof) ADVANCE(369);
      if (lookahead == '*') ADVANCE(490);
      if (lookahead == '?') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(170);
      if (lookahead == 'C') ADVANCE(209);
      if (lookahead == 'D') ADVANCE(486);
      if (lookahead == 'E') ADVANCE(297);
      if (lookahead == 'I') ADVANCE(208);
      if (lookahead == 'L') ADVANCE(210);
      if (lookahead == 'M') ADVANCE(42);
      if (lookahead == 'N') ADVANCE(485);
      if (lookahead == 'P') ADVANCE(226);
      if (lookahead == 'R') ADVANCE(131);
      if (lookahead == 'S') ADVANCE(46);
      if (lookahead == 'T') ADVANCE(47);
      if (lookahead == 'V') ADVANCE(56);
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(354)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      END_STATE();
    case 355:
      if (eof) ADVANCE(369);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == '-') ADVANCE(423);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(461);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == 'I') ADVANCE(460);
      if (lookahead == 'L') ADVANCE(462);
      if (lookahead == 'M') ADVANCE(433);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'V') ADVANCE(438);
      if (lookahead == 'i') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(355)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 356:
      if (eof) ADVANCE(369);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == '=') ADVANCE(372);
      if (lookahead == '?') ADVANCE(418);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(461);
      if (lookahead == 'D') ADVANCE(486);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == 'I') ADVANCE(460);
      if (lookahead == 'L') ADVANCE(462);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead == 'N') ADVANCE(485);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'S') ADVANCE(428);
      if (lookahead == 'T') ADVANCE(430);
      if (lookahead == 'V') ADVANCE(438);
      if (lookahead == '^') ADVANCE(481);
      if (lookahead == 'a') ADVANCE(458);
      if (lookahead == 'c') ADVANCE(465);
      if (lookahead == 'f') ADVANCE(470);
      if (lookahead == 'i') ADVANCE(459);
      if (lookahead == 'o') ADVANCE(443);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(356)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 357:
      if (eof) ADVANCE(369);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == '=') ADVANCE(372);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(461);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == 'I') ADVANCE(460);
      if (lookahead == 'L') ADVANCE(462);
      if (lookahead == 'M') ADVANCE(433);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'V') ADVANCE(438);
      if (lookahead == 'i') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(357)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 358:
      if (eof) ADVANCE(369);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(461);
      if (lookahead == 'D') ADVANCE(450);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == 'I') ADVANCE(456);
      if (lookahead == 'L') ADVANCE(462);
      if (lookahead == 'M') ADVANCE(433);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'T') ADVANCE(454);
      if (lookahead == 'U') ADVANCE(472);
      if (lookahead == 'V') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(358)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 359:
      if (eof) ADVANCE(369);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(461);
      if (lookahead == 'D') ADVANCE(450);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == 'I') ADVANCE(447);
      if (lookahead == 'L') ADVANCE(462);
      if (lookahead == 'M') ADVANCE(433);
      if (lookahead == 'P') ADVANCE(435);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'T') ADVANCE(454);
      if (lookahead == 'V') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(359)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 360:
      if (eof) ADVANCE(369);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(461);
      if (lookahead == 'D') ADVANCE(450);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == 'I') ADVANCE(447);
      if (lookahead == 'L') ADVANCE(462);
      if (lookahead == 'M') ADVANCE(433);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'S') ADVANCE(463);
      if (lookahead == 'T') ADVANCE(437);
      if (lookahead == 'V') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(360)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 361:
      if (eof) ADVANCE(369);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(461);
      if (lookahead == 'D') ADVANCE(450);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == 'I') ADVANCE(447);
      if (lookahead == 'L') ADVANCE(462);
      if (lookahead == 'M') ADVANCE(433);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'T') ADVANCE(454);
      if (lookahead == 'V') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(361)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 362:
      if (eof) ADVANCE(369);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(461);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == 'I') ADVANCE(460);
      if (lookahead == 'L') ADVANCE(462);
      if (lookahead == 'M') ADVANCE(433);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'V') ADVANCE(438);
      if (lookahead == 'a') ADVANCE(458);
      if (lookahead == 'w') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(362)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 363:
      if (eof) ADVANCE(369);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(461);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == 'I') ADVANCE(460);
      if (lookahead == 'L') ADVANCE(462);
      if (lookahead == 'M') ADVANCE(433);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'V') ADVANCE(438);
      if (lookahead == 'a') ADVANCE(458);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(363)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 364:
      if (eof) ADVANCE(369);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(461);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == 'I') ADVANCE(460);
      if (lookahead == 'L') ADVANCE(462);
      if (lookahead == 'M') ADVANCE(433);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'V') ADVANCE(438);
      if (lookahead == 'o') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(364)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 365:
      if (eof) ADVANCE(369);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(461);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == 'I') ADVANCE(460);
      if (lookahead == 'L') ADVANCE(462);
      if (lookahead == 'M') ADVANCE(433);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'V') ADVANCE(438);
      if (lookahead == 'w') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(365)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 366:
      if (eof) ADVANCE(369);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(461);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == 'I') ADVANCE(460);
      if (lookahead == 'L') ADVANCE(462);
      if (lookahead == 'M') ADVANCE(433);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'V') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(366)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 367:
      if (eof) ADVANCE(369);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(461);
      if (lookahead == 'D') ADVANCE(450);
      if (lookahead == 'E') ADVANCE(473);
      if (lookahead == 'I') ADVANCE(460);
      if (lookahead == 'L') ADVANCE(462);
      if (lookahead == 'M') ADVANCE(433);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'S') ADVANCE(449);
      if (lookahead == 'V') ADVANCE(438);
      if (lookahead == 'X') ADVANCE(425);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(367)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 368:
      if (eof) ADVANCE(369);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(461);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == 'I') ADVANCE(460);
      if (lookahead == 'L') ADVANCE(462);
      if (lookahead == 'M') ADVANCE(433);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'V') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(368)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(417);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_Alias);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_Profile);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_Extension);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_Invariant);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_Instance);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_Instance);
      if (lookahead == 'O') ADVANCE(143);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_ValueSet);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_CodeSystem);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_Mapping);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_Logical);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_Resource);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_RuleSet);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_Description);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_Expression);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_Id);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_InstanceOf);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_Parent);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_Severity);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_Source);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_Target);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_Title);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_Usage);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_XPath);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_contentReference);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_insert);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_exactly);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_obeys);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_exclude);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_codes);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_valueset);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '!') ADVANCE(524);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(489);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(500);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(487);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(502);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '>') ADVANCE(407);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '>') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(500);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'P') ADVANCE(57);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'S') ADVANCE(482);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'S') ADVANCE(482);
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'U') ADVANCE(483);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'U') ADVANCE(483);
      if (lookahead == 'e') ADVANCE(294);
      if (lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'U') ADVANCE(484);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(232);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead == 'i') ADVANCE(281);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'b') ADVANCE(94);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(174);
      if (lookahead == 'r') ADVANCE(406);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(386);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(252);
      if (lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'h') ADVANCE(137);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'i') ADVANCE(281);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(406);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(223);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(80);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(222);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(274);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'y') ADVANCE(254);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(525);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(500);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_MS);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_SU);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_TU);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_cardinality_token1);
      if (lookahead == '.') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(487);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_cardinality_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(495);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(495);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(496);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(497);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(317);
      if (lookahead == '.') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(500);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(500);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(315);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead == ':') ADVANCE(316);
      if (lookahead == 'Z') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(501);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(503);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '-') ADVANCE(320);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(315);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == 'Z') ADVANCE(506);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(315);
      if (lookahead == ':') ADVANCE(316);
      if (lookahead == 'Z') ADVANCE(506);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(315);
      if (lookahead == ':') ADVANCE(319);
      if (lookahead == 'Z') ADVANCE(506);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(315);
      if (lookahead == 'Z') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(510);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_T);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'U') ADVANCE(484);
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead == 'i') ADVANCE(281);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(514);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_example);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_preferred);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_extensible);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_Reference);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_Canonical);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_named);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_QMARK_BANG);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_param_rule_set_params_token1);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_regex_pattern);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(528);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 334},
  [3] = {.lex_state = 334},
  [4] = {.lex_state = 334},
  [5] = {.lex_state = 334},
  [6] = {.lex_state = 329},
  [7] = {.lex_state = 334},
  [8] = {.lex_state = 334},
  [9] = {.lex_state = 334},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 329},
  [15] = {.lex_state = 334},
  [16] = {.lex_state = 334},
  [17] = {.lex_state = 334},
  [18] = {.lex_state = 334},
  [19] = {.lex_state = 349},
  [20] = {.lex_state = 349},
  [21] = {.lex_state = 334},
  [22] = {.lex_state = 329},
  [23] = {.lex_state = 356},
  [24] = {.lex_state = 356},
  [25] = {.lex_state = 329},
  [26] = {.lex_state = 334},
  [27] = {.lex_state = 329},
  [28] = {.lex_state = 333},
  [29] = {.lex_state = 333},
  [30] = {.lex_state = 334},
  [31] = {.lex_state = 329},
  [32] = {.lex_state = 13},
  [33] = {.lex_state = 334},
  [34] = {.lex_state = 334},
  [35] = {.lex_state = 334},
  [36] = {.lex_state = 334},
  [37] = {.lex_state = 334},
  [38] = {.lex_state = 334},
  [39] = {.lex_state = 334},
  [40] = {.lex_state = 334},
  [41] = {.lex_state = 334},
  [42] = {.lex_state = 336},
  [43] = {.lex_state = 334},
  [44] = {.lex_state = 334},
  [45] = {.lex_state = 334},
  [46] = {.lex_state = 334},
  [47] = {.lex_state = 334},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 334},
  [50] = {.lex_state = 334},
  [51] = {.lex_state = 334},
  [52] = {.lex_state = 334},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 334},
  [55] = {.lex_state = 334},
  [56] = {.lex_state = 329},
  [57] = {.lex_state = 332},
  [58] = {.lex_state = 334},
  [59] = {.lex_state = 334},
  [60] = {.lex_state = 334},
  [61] = {.lex_state = 330},
  [62] = {.lex_state = 329},
  [63] = {.lex_state = 33},
  [64] = {.lex_state = 344},
  [65] = {.lex_state = 330},
  [66] = {.lex_state = 329},
  [67] = {.lex_state = 332},
  [68] = {.lex_state = 334},
  [69] = {.lex_state = 334},
  [70] = {.lex_state = 354},
  [71] = {.lex_state = 334},
  [72] = {.lex_state = 330},
  [73] = {.lex_state = 329},
  [74] = {.lex_state = 329},
  [75] = {.lex_state = 354},
  [76] = {.lex_state = 329},
  [77] = {.lex_state = 334},
  [78] = {.lex_state = 346},
  [79] = {.lex_state = 329},
  [80] = {.lex_state = 329},
  [81] = {.lex_state = 336},
  [82] = {.lex_state = 329},
  [83] = {.lex_state = 345},
  [84] = {.lex_state = 32},
  [85] = {.lex_state = 329},
  [86] = {.lex_state = 334},
  [87] = {.lex_state = 336},
  [88] = {.lex_state = 330},
  [89] = {.lex_state = 334},
  [90] = {.lex_state = 330},
  [91] = {.lex_state = 334},
  [92] = {.lex_state = 360},
  [93] = {.lex_state = 336},
  [94] = {.lex_state = 331},
  [95] = {.lex_state = 331},
  [96] = {.lex_state = 329},
  [97] = {.lex_state = 337},
  [98] = {.lex_state = 337},
  [99] = {.lex_state = 329},
  [100] = {.lex_state = 329},
  [101] = {.lex_state = 331},
  [102] = {.lex_state = 360},
  [103] = {.lex_state = 347},
  [104] = {.lex_state = 331},
  [105] = {.lex_state = 332},
  [106] = {.lex_state = 359},
  [107] = {.lex_state = 359},
  [108] = {.lex_state = 358},
  [109] = {.lex_state = 358},
  [110] = {.lex_state = 334},
  [111] = {.lex_state = 331},
  [112] = {.lex_state = 332},
  [113] = {.lex_state = 334},
  [114] = {.lex_state = 334},
  [115] = {.lex_state = 338},
  [116] = {.lex_state = 35},
  [117] = {.lex_state = 332},
  [118] = {.lex_state = 338},
  [119] = {.lex_state = 350},
  [120] = {.lex_state = 35},
  [121] = {.lex_state = 334},
  [122] = {.lex_state = 334},
  [123] = {.lex_state = 367},
  [124] = {.lex_state = 341},
  [125] = {.lex_state = 36},
  [126] = {.lex_state = 334},
  [127] = {.lex_state = 334},
  [128] = {.lex_state = 35},
  [129] = {.lex_state = 350},
  [130] = {.lex_state = 334},
  [131] = {.lex_state = 334},
  [132] = {.lex_state = 332},
  [133] = {.lex_state = 341},
  [134] = {.lex_state = 334},
  [135] = {.lex_state = 334},
  [136] = {.lex_state = 361},
  [137] = {.lex_state = 334},
  [138] = {.lex_state = 334},
  [139] = {.lex_state = 367},
  [140] = {.lex_state = 361},
  [141] = {.lex_state = 334},
  [142] = {.lex_state = 334},
  [143] = {.lex_state = 334},
  [144] = {.lex_state = 36},
  [145] = {.lex_state = 334},
  [146] = {.lex_state = 329},
  [147] = {.lex_state = 357},
  [148] = {.lex_state = 339},
  [149] = {.lex_state = 362},
  [150] = {.lex_state = 340},
  [151] = {.lex_state = 329},
  [152] = {.lex_state = 339},
  [153] = {.lex_state = 340},
  [154] = {.lex_state = 355},
  [155] = {.lex_state = 348},
  [156] = {.lex_state = 14},
  [157] = {.lex_state = 329},
  [158] = {.lex_state = 334},
  [159] = {.lex_state = 334},
  [160] = {.lex_state = 348},
  [161] = {.lex_state = 342},
  [162] = {.lex_state = 342},
  [163] = {.lex_state = 355},
  [164] = {.lex_state = 334},
  [165] = {.lex_state = 329},
  [166] = {.lex_state = 357},
  [167] = {.lex_state = 329},
  [168] = {.lex_state = 334},
  [169] = {.lex_state = 362},
  [170] = {.lex_state = 334},
  [171] = {.lex_state = 334},
  [172] = {.lex_state = 334},
  [173] = {.lex_state = 334},
  [174] = {.lex_state = 334},
  [175] = {.lex_state = 334},
  [176] = {.lex_state = 334},
  [177] = {.lex_state = 343},
  [178] = {.lex_state = 343},
  [179] = {.lex_state = 334},
  [180] = {.lex_state = 334},
  [181] = {.lex_state = 364},
  [182] = {.lex_state = 334},
  [183] = {.lex_state = 334},
  [184] = {.lex_state = 337},
  [185] = {.lex_state = 24},
  [186] = {.lex_state = 337},
  [187] = {.lex_state = 364},
  [188] = {.lex_state = 334},
  [189] = {.lex_state = 334},
  [190] = {.lex_state = 334},
  [191] = {.lex_state = 24},
  [192] = {.lex_state = 334},
  [193] = {.lex_state = 350},
  [194] = {.lex_state = 334},
  [195] = {.lex_state = 334},
  [196] = {.lex_state = 334},
  [197] = {.lex_state = 350},
  [198] = {.lex_state = 334},
  [199] = {.lex_state = 334},
  [200] = {.lex_state = 334},
  [201] = {.lex_state = 365},
  [202] = {.lex_state = 365},
  [203] = {.lex_state = 334},
  [204] = {.lex_state = 334},
  [205] = {.lex_state = 363},
  [206] = {.lex_state = 363},
  [207] = {.lex_state = 352},
  [208] = {.lex_state = 334},
  [209] = {.lex_state = 352},
  [210] = {.lex_state = 334},
  [211] = {.lex_state = 334},
  [212] = {.lex_state = 334},
  [213] = {.lex_state = 334},
  [214] = {.lex_state = 334},
  [215] = {.lex_state = 334},
  [216] = {.lex_state = 334},
  [217] = {.lex_state = 366},
  [218] = {.lex_state = 334},
  [219] = {.lex_state = 334},
  [220] = {.lex_state = 32},
  [221] = {.lex_state = 334},
  [222] = {.lex_state = 334},
  [223] = {.lex_state = 334},
  [224] = {.lex_state = 334},
  [225] = {.lex_state = 334},
  [226] = {.lex_state = 353},
  [227] = {.lex_state = 334},
  [228] = {.lex_state = 334},
  [229] = {.lex_state = 334},
  [230] = {.lex_state = 366},
  [231] = {.lex_state = 334},
  [232] = {.lex_state = 6},
  [233] = {.lex_state = 334},
  [234] = {.lex_state = 334},
  [235] = {.lex_state = 334},
  [236] = {.lex_state = 350},
  [237] = {.lex_state = 350},
  [238] = {.lex_state = 334},
  [239] = {.lex_state = 351},
  [240] = {.lex_state = 334},
  [241] = {.lex_state = 334},
  [242] = {.lex_state = 334},
  [243] = {.lex_state = 334},
  [244] = {.lex_state = 37},
  [245] = {.lex_state = 334},
  [246] = {.lex_state = 334},
  [247] = {.lex_state = 334},
  [248] = {.lex_state = 334},
  [249] = {.lex_state = 351},
  [250] = {.lex_state = 334},
  [251] = {.lex_state = 334},
  [252] = {.lex_state = 334},
  [253] = {.lex_state = 334},
  [254] = {.lex_state = 33},
  [255] = {.lex_state = 33},
  [256] = {.lex_state = 334},
  [257] = {.lex_state = 368},
  [258] = {.lex_state = 368},
  [259] = {.lex_state = 334},
  [260] = {.lex_state = 334},
  [261] = {.lex_state = 334},
  [262] = {.lex_state = 334},
  [263] = {.lex_state = 334},
  [264] = {.lex_state = 334},
  [265] = {.lex_state = 334},
  [266] = {.lex_state = 334},
  [267] = {.lex_state = 334},
  [268] = {.lex_state = 37},
  [269] = {.lex_state = 334},
  [270] = {.lex_state = 37},
  [271] = {.lex_state = 334},
  [272] = {.lex_state = 334},
  [273] = {.lex_state = 334},
  [274] = {.lex_state = 334},
  [275] = {.lex_state = 334},
  [276] = {.lex_state = 334},
  [277] = {.lex_state = 37},
  [278] = {.lex_state = 334},
  [279] = {.lex_state = 334},
  [280] = {.lex_state = 334},
  [281] = {.lex_state = 37},
  [282] = {.lex_state = 334},
  [283] = {.lex_state = 334},
  [284] = {.lex_state = 37},
  [285] = {.lex_state = 32},
  [286] = {.lex_state = 334},
  [287] = {.lex_state = 37},
  [288] = {.lex_state = 37},
  [289] = {.lex_state = 37},
  [290] = {.lex_state = 37},
  [291] = {.lex_state = 334},
  [292] = {.lex_state = 334},
  [293] = {.lex_state = 334},
  [294] = {.lex_state = 334},
  [295] = {.lex_state = 37},
  [296] = {.lex_state = 334},
  [297] = {.lex_state = 37},
  [298] = {.lex_state = 334},
  [299] = {.lex_state = 37},
  [300] = {.lex_state = 334},
  [301] = {.lex_state = 334},
  [302] = {.lex_state = 334},
  [303] = {.lex_state = 334},
  [304] = {.lex_state = 37},
  [305] = {.lex_state = 334},
  [306] = {.lex_state = 334},
  [307] = {.lex_state = 334},
  [308] = {.lex_state = 334},
  [309] = {.lex_state = 334},
  [310] = {.lex_state = 334},
  [311] = {.lex_state = 37},
  [312] = {.lex_state = 37},
  [313] = {.lex_state = 334},
  [314] = {.lex_state = 334},
  [315] = {.lex_state = 334},
  [316] = {.lex_state = 37},
  [317] = {.lex_state = 334},
  [318] = {.lex_state = 37},
  [319] = {.lex_state = 37},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 37},
  [322] = {.lex_state = 37},
  [323] = {.lex_state = 37},
  [324] = {.lex_state = 334},
  [325] = {.lex_state = 37},
  [326] = {.lex_state = 334},
  [327] = {.lex_state = 37},
  [328] = {.lex_state = 37},
  [329] = {.lex_state = 37},
  [330] = {.lex_state = 37},
  [331] = {.lex_state = 334},
  [332] = {.lex_state = 37},
  [333] = {.lex_state = 334},
  [334] = {.lex_state = 334},
  [335] = {.lex_state = 334},
  [336] = {.lex_state = 334},
  [337] = {.lex_state = 37},
  [338] = {.lex_state = 37},
  [339] = {.lex_state = 37},
  [340] = {.lex_state = 334},
  [341] = {.lex_state = 334},
  [342] = {.lex_state = 334},
  [343] = {.lex_state = 37},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 16},
  [346] = {.lex_state = 334},
  [347] = {.lex_state = 334},
  [348] = {.lex_state = 329},
  [349] = {.lex_state = 34},
  [350] = {.lex_state = 34},
  [351] = {.lex_state = 329},
  [352] = {.lex_state = 18},
  [353] = {.lex_state = 329},
  [354] = {.lex_state = 17},
  [355] = {.lex_state = 25},
  [356] = {.lex_state = 18},
  [357] = {.lex_state = 158},
  [358] = {.lex_state = 39},
  [359] = {.lex_state = 39},
  [360] = {.lex_state = 38},
  [361] = {.lex_state = 38},
  [362] = {.lex_state = 18},
  [363] = {.lex_state = 245},
  [364] = {.lex_state = 30},
  [365] = {.lex_state = 22},
  [366] = {.lex_state = 26},
  [367] = {.lex_state = 8},
  [368] = {.lex_state = 26},
  [369] = {.lex_state = 18},
  [370] = {.lex_state = 18},
  [371] = {.lex_state = 8},
  [372] = {.lex_state = 22},
  [373] = {.lex_state = 18},
  [374] = {.lex_state = 15},
  [375] = {.lex_state = 15},
  [376] = {.lex_state = 18},
  [377] = {.lex_state = 334},
  [378] = {.lex_state = 10},
  [379] = {.lex_state = 305},
  [380] = {.lex_state = 27},
  [381] = {.lex_state = 305},
  [382] = {.lex_state = 7},
  [383] = {.lex_state = 7},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 49},
  [386] = {.lex_state = 334},
  [387] = {.lex_state = 27},
  [388] = {.lex_state = 12},
  [389] = {.lex_state = 23},
  [390] = {.lex_state = 23},
  [391] = {.lex_state = 334},
  [392] = {.lex_state = 334},
  [393] = {.lex_state = 305},
  [394] = {.lex_state = 305},
  [395] = {.lex_state = 5},
  [396] = {.lex_state = 305},
  [397] = {.lex_state = 334},
  [398] = {.lex_state = 5},
  [399] = {.lex_state = 21},
  [400] = {.lex_state = 7},
  [401] = {.lex_state = 12},
  [402] = {.lex_state = 9},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 305},
  [405] = {.lex_state = 334},
  [406] = {.lex_state = 9},
  [407] = {.lex_state = 7},
  [408] = {.lex_state = 7},
  [409] = {.lex_state = 20},
  [410] = {.lex_state = 20},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 334},
  [413] = {.lex_state = 21},
  [414] = {.lex_state = 7},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 12},
  [417] = {.lex_state = 7},
  [418] = {.lex_state = 10},
  [419] = {.lex_state = 305},
  [420] = {.lex_state = 305},
  [421] = {.lex_state = 18},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 305},
  [424] = {.lex_state = 305},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 305},
  [427] = {.lex_state = 305},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 305},
  [433] = {.lex_state = 305},
  [434] = {.lex_state = 305},
  [435] = {.lex_state = 305},
  [436] = {.lex_state = 305},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 305},
  [439] = {.lex_state = 19},
  [440] = {.lex_state = 334},
  [441] = {.lex_state = 305},
  [442] = {.lex_state = 305},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 19},
  [445] = {.lex_state = 334},
  [446] = {.lex_state = 305},
  [447] = {.lex_state = 305},
  [448] = {.lex_state = 305},
  [449] = {.lex_state = 305},
  [450] = {.lex_state = 333},
  [451] = {.lex_state = 305},
  [452] = {.lex_state = 305},
  [453] = {.lex_state = 19},
  [454] = {.lex_state = 305},
  [455] = {.lex_state = 18},
  [456] = {.lex_state = 305},
  [457] = {.lex_state = 305},
  [458] = {.lex_state = 305},
  [459] = {.lex_state = 305},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 30},
  [462] = {.lex_state = 305},
  [463] = {.lex_state = 305},
  [464] = {.lex_state = 305},
  [465] = {.lex_state = 305},
  [466] = {.lex_state = 305},
  [467] = {.lex_state = 305},
  [468] = {.lex_state = 305},
  [469] = {.lex_state = 305},
  [470] = {.lex_state = 305},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 30},
  [474] = {.lex_state = 30},
  [475] = {.lex_state = 334},
  [476] = {.lex_state = 334},
  [477] = {.lex_state = 305},
  [478] = {.lex_state = 305},
  [479] = {.lex_state = 333},
  [480] = {.lex_state = 11},
  [481] = {.lex_state = 11},
  [482] = {.lex_state = 305},
  [483] = {.lex_state = 305},
  [484] = {.lex_state = 305},
  [485] = {.lex_state = 305},
  [486] = {.lex_state = 305},
  [487] = {.lex_state = 305},
  [488] = {.lex_state = 334},
  [489] = {.lex_state = 334},
  [490] = {.lex_state = 334},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 334},
  [493] = {.lex_state = 334},
  [494] = {.lex_state = 18},
  [495] = {.lex_state = 334},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 334},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 30},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 334},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 353},
  [536] = {.lex_state = 334},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 48},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
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
    [aux_sym_sequence_token1] = ACTIONS(1),
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
    [anon_sym_Reference] = ACTIONS(1),
    [anon_sym_Canonical] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_named] = ACTIONS(1),
    [anon_sym_QMARK_BANG] = ACTIONS(1),
    [aux_sym_param_rule_set_params_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_SLASH2] = ACTIONS(1),
  },
  [1] = {
    [sym_doc] = STATE(505),
    [sym_alias] = STATE(48),
    [sym_profile] = STATE(48),
    [sym_extension] = STATE(48),
    [sym_invariant] = STATE(48),
    [sym_instance] = STATE(48),
    [sym_valueset] = STATE(48),
    [sym_codesystem] = STATE(48),
    [sym_mapping] = STATE(48),
    [sym_logical] = STATE(48),
    [sym_resource] = STATE(48),
    [sym_rule_set] = STATE(48),
    [sym_param_rule_set] = STATE(48),
    [aux_sym_doc_repeat1] = STATE(48),
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
    [anon_sym_RuleSet] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(31), 1,
      anon_sym_Id,
    ACTIONS(33), 1,
      anon_sym_Parent,
    ACTIONS(35), 1,
      anon_sym_Title,
    ACTIONS(37), 1,
      anon_sym_STAR,
    STATE(39), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(60), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(307), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(170), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(282), 10,
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
    ACTIONS(27), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [61] = 11,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(31), 1,
      anon_sym_Id,
    ACTIONS(33), 1,
      anon_sym_Parent,
    ACTIONS(35), 1,
      anon_sym_Title,
    ACTIONS(37), 1,
      anon_sym_STAR,
    STATE(41), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(60), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(307), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(170), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(282), 10,
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
    ACTIONS(39), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [122] = 11,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(31), 1,
      anon_sym_Id,
    ACTIONS(33), 1,
      anon_sym_Parent,
    ACTIONS(35), 1,
      anon_sym_Title,
    ACTIONS(37), 1,
      anon_sym_STAR,
    STATE(3), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(36), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(307), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(170), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(282), 10,
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
    ACTIONS(41), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [183] = 11,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(31), 1,
      anon_sym_Id,
    ACTIONS(33), 1,
      anon_sym_Parent,
    ACTIONS(35), 1,
      anon_sym_Title,
    ACTIONS(37), 1,
      anon_sym_STAR,
    STATE(2), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(34), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(307), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(170), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(282), 10,
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
      anon_sym_RuleSet,
  [244] = 17,
    ACTIONS(47), 1,
      anon_sym_EQ,
    ACTIONS(49), 1,
      anon_sym_insert,
    ACTIONS(51), 1,
      anon_sym_from,
    ACTIONS(53), 1,
      anon_sym_contains,
    ACTIONS(55), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_obeys,
    ACTIONS(59), 1,
      anon_sym_only,
    ACTIONS(61), 1,
      anon_sym_DASH_GT,
    ACTIONS(63), 1,
      anon_sym_CARET,
    ACTIONS(67), 1,
      aux_sym_cardinality_token1,
    ACTIONS(69), 1,
      anon_sym_DOT_DOT,
    STATE(63), 1,
      sym_cardinality,
    STATE(348), 1,
      aux_sym_flag_rule_repeat1,
    STATE(530), 1,
      sym_caret_path,
    STATE(79), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(65), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(45), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [314] = 10,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(31), 1,
      anon_sym_Id,
    ACTIONS(33), 1,
      anon_sym_Parent,
    ACTIONS(35), 1,
      anon_sym_Title,
    ACTIONS(73), 1,
      anon_sym_STAR,
    STATE(9), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(55), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(170), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(282), 10,
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
    ACTIONS(71), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [370] = 10,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(31), 1,
      anon_sym_Id,
    ACTIONS(33), 1,
      anon_sym_Parent,
    ACTIONS(35), 1,
      anon_sym_Title,
    ACTIONS(73), 1,
      anon_sym_STAR,
    STATE(51), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(60), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(170), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(282), 10,
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
      anon_sym_RuleSet,
  [426] = 10,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(31), 1,
      anon_sym_Id,
    ACTIONS(33), 1,
      anon_sym_Parent,
    ACTIONS(35), 1,
      anon_sym_Title,
    ACTIONS(73), 1,
      anon_sym_STAR,
    STATE(50), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(60), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(170), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(282), 10,
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
    ACTIONS(77), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [482] = 19,
    ACTIONS(83), 1,
      anon_sym_POUND,
    ACTIONS(85), 1,
      aux_sym_sequence_token1,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(91), 1,
      sym_number,
    ACTIONS(93), 1,
      sym_date,
    ACTIONS(95), 1,
      sym_time,
    ACTIONS(97), 1,
      anon_sym_Reference,
    ACTIONS(99), 1,
      anon_sym_Canonical,
    STATE(126), 1,
      sym_code,
    STATE(174), 1,
      sym_reference,
    STATE(197), 1,
      aux_sym_sequence_repeat1,
    STATE(231), 1,
      sym_quantity,
    STATE(271), 1,
      sym_sequence,
    STATE(309), 1,
      sym_value,
    STATE(504), 1,
      sym_ratio_part,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    STATE(273), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [555] = 19,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(93), 1,
      sym_date,
    ACTIONS(95), 1,
      sym_time,
    ACTIONS(97), 1,
      anon_sym_Reference,
    ACTIONS(99), 1,
      anon_sym_Canonical,
    ACTIONS(101), 1,
      anon_sym_POUND,
    ACTIONS(103), 1,
      aux_sym_sequence_token1,
    ACTIONS(105), 1,
      sym_number,
    STATE(126), 1,
      sym_code,
    STATE(155), 1,
      aux_sym_sequence_repeat1,
    STATE(174), 1,
      sym_reference,
    STATE(231), 1,
      sym_quantity,
    STATE(250), 1,
      sym_sequence,
    STATE(266), 1,
      sym_value,
    STATE(543), 1,
      sym_ratio_part,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    STATE(273), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [628] = 19,
    ACTIONS(83), 1,
      anon_sym_POUND,
    ACTIONS(85), 1,
      aux_sym_sequence_token1,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(91), 1,
      sym_number,
    ACTIONS(93), 1,
      sym_date,
    ACTIONS(95), 1,
      sym_time,
    ACTIONS(97), 1,
      anon_sym_Reference,
    ACTIONS(99), 1,
      anon_sym_Canonical,
    STATE(126), 1,
      sym_code,
    STATE(174), 1,
      sym_reference,
    STATE(197), 1,
      aux_sym_sequence_repeat1,
    STATE(231), 1,
      sym_quantity,
    STATE(271), 1,
      sym_sequence,
    STATE(283), 1,
      sym_value,
    STATE(504), 1,
      sym_ratio_part,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    STATE(273), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [701] = 19,
    ACTIONS(83), 1,
      anon_sym_POUND,
    ACTIONS(85), 1,
      aux_sym_sequence_token1,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(91), 1,
      sym_number,
    ACTIONS(93), 1,
      sym_date,
    ACTIONS(95), 1,
      sym_time,
    ACTIONS(97), 1,
      anon_sym_Reference,
    ACTIONS(99), 1,
      anon_sym_Canonical,
    STATE(126), 1,
      sym_code,
    STATE(174), 1,
      sym_reference,
    STATE(197), 1,
      aux_sym_sequence_repeat1,
    STATE(231), 1,
      sym_quantity,
    STATE(271), 1,
      sym_sequence,
    STATE(302), 1,
      sym_value,
    STATE(504), 1,
      sym_ratio_part,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    STATE(273), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [774] = 16,
    ACTIONS(47), 1,
      anon_sym_EQ,
    ACTIONS(49), 1,
      anon_sym_insert,
    ACTIONS(51), 1,
      anon_sym_from,
    ACTIONS(53), 1,
      anon_sym_contains,
    ACTIONS(55), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_obeys,
    ACTIONS(59), 1,
      anon_sym_only,
    ACTIONS(63), 1,
      anon_sym_CARET,
    ACTIONS(67), 1,
      aux_sym_cardinality_token1,
    ACTIONS(69), 1,
      anon_sym_DOT_DOT,
    STATE(63), 1,
      sym_cardinality,
    STATE(348), 1,
      aux_sym_flag_rule_repeat1,
    STATE(530), 1,
      sym_caret_path,
    STATE(79), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(65), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(45), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [841] = 5,
    ACTIONS(109), 1,
      anon_sym_STAR,
    STATE(17), 2,
      sym_rule_set_rule,
      aux_sym_rule_set_repeat1,
    STATE(314), 8,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_mapping_rule,
      sym_add_element_rule,
      sym_vs_component,
      sym_concept,
    STATE(282), 10,
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
    ACTIONS(107), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [885] = 6,
    ACTIONS(109), 1,
      anon_sym_STAR,
    STATE(18), 1,
      aux_sym_param_rule_set_repeat1,
    STATE(317), 1,
      sym_rule_set_rule,
    STATE(314), 8,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_mapping_rule,
      sym_add_element_rule,
      sym_vs_component,
      sym_concept,
    STATE(282), 10,
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
    ACTIONS(111), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [931] = 5,
    ACTIONS(115), 1,
      anon_sym_STAR,
    STATE(17), 2,
      sym_rule_set_rule,
      aux_sym_rule_set_repeat1,
    STATE(314), 8,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_mapping_rule,
      sym_add_element_rule,
      sym_vs_component,
      sym_concept,
    STATE(282), 10,
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
    ACTIONS(113), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [975] = 6,
    ACTIONS(120), 1,
      anon_sym_STAR,
    STATE(18), 1,
      aux_sym_param_rule_set_repeat1,
    STATE(317), 1,
      sym_rule_set_rule,
    STATE(314), 8,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_mapping_rule,
      sym_add_element_rule,
      sym_vs_component,
      sym_concept,
    STATE(282), 10,
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
      anon_sym_RuleSet,
  [1021] = 4,
    ACTIONS(125), 1,
      aux_sym_sequence_token1,
    ACTIONS(127), 1,
      aux_sym_cardinality_token1,
    STATE(20), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 30,
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
      anon_sym_DOT_DOT,
      anon_sym_QMARK_BANG,
  [1063] = 4,
    ACTIONS(131), 1,
      aux_sym_sequence_token1,
    ACTIONS(134), 1,
      aux_sym_cardinality_token1,
    STATE(20), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 30,
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
      anon_sym_DOT_DOT,
      anon_sym_QMARK_BANG,
  [1105] = 2,
    ACTIONS(138), 1,
      anon_sym_Instance,
    ACTIONS(136), 31,
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
  [1142] = 13,
    ACTIONS(47), 1,
      anon_sym_EQ,
    ACTIONS(49), 1,
      anon_sym_insert,
    ACTIONS(51), 1,
      anon_sym_from,
    ACTIONS(53), 1,
      anon_sym_contains,
    ACTIONS(55), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_obeys,
    ACTIONS(59), 1,
      anon_sym_only,
    ACTIONS(63), 1,
      anon_sym_CARET,
    STATE(348), 1,
      aux_sym_flag_rule_repeat1,
    STATE(530), 1,
      sym_caret_path,
    STATE(79), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(65), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(45), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [1200] = 4,
    ACTIONS(127), 1,
      aux_sym_cardinality_token1,
    ACTIONS(140), 1,
      aux_sym_sequence_token1,
    STATE(24), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 28,
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
      anon_sym_DOT_DOT,
      anon_sym_QMARK_BANG,
  [1240] = 4,
    ACTIONS(134), 1,
      aux_sym_cardinality_token1,
    ACTIONS(142), 1,
      aux_sym_sequence_token1,
    STATE(24), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 28,
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
      anon_sym_DOT_DOT,
      anon_sym_QMARK_BANG,
  [1280] = 3,
    ACTIONS(147), 1,
      anon_sym_POUND,
    ACTIONS(149), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
    ACTIONS(145), 28,
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
  [1318] = 11,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(35), 1,
      anon_sym_Title,
    ACTIONS(154), 1,
      anon_sym_Id,
    ACTIONS(156), 1,
      anon_sym_Source,
    ACTIONS(158), 1,
      anon_sym_Target,
    ACTIONS(160), 1,
      anon_sym_STAR,
    STATE(54), 2,
      sym_mapping_metadata,
      aux_sym_mapping_repeat1,
    STATE(142), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(301), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    STATE(113), 5,
      sym_description,
      sym_id,
      sym_source,
      sym_target,
      sym_title,
    ACTIONS(152), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [1371] = 2,
    ACTIONS(149), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
    ACTIONS(145), 28,
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
  [1406] = 2,
    ACTIONS(164), 2,
      anon_sym_Instance,
      anon_sym_DQUOTE,
    ACTIONS(162), 28,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [1441] = 2,
    ACTIONS(168), 2,
      anon_sym_Instance,
      anon_sym_DQUOTE,
    ACTIONS(166), 28,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [1476] = 11,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(35), 1,
      anon_sym_Title,
    ACTIONS(154), 1,
      anon_sym_Id,
    ACTIONS(156), 1,
      anon_sym_Source,
    ACTIONS(158), 1,
      anon_sym_Target,
    ACTIONS(160), 1,
      anon_sym_STAR,
    STATE(26), 2,
      sym_mapping_metadata,
      aux_sym_mapping_repeat1,
    STATE(145), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(301), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    STATE(113), 5,
      sym_description,
      sym_id,
      sym_source,
      sym_target,
      sym_title,
    ACTIONS(170), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [1529] = 2,
    ACTIONS(136), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
    ACTIONS(145), 27,
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
  [1563] = 21,
    ACTIONS(63), 1,
      anon_sym_CARET,
    ACTIONS(172), 1,
      anon_sym_insert,
    ACTIONS(174), 1,
      anon_sym_obeys,
    ACTIONS(176), 1,
      anon_sym_DASH_GT,
    ACTIONS(180), 1,
      anon_sym_codes,
    ACTIONS(182), 1,
      anon_sym_system,
    ACTIONS(184), 1,
      anon_sym_POUND,
    ACTIONS(186), 1,
      aux_sym_sequence_token1,
    ACTIONS(188), 1,
      sym_number,
    STATE(6), 1,
      sym_path,
    STATE(19), 1,
      aux_sym_sequence_repeat1,
    STATE(25), 1,
      sym_sequence,
    STATE(57), 1,
      aux_sym_code_insert_rule_repeat1,
    STATE(61), 1,
      sym_code,
    STATE(175), 1,
      sym_code_string,
    STATE(356), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(476), 1,
      sym_name,
    STATE(525), 1,
      sym_caret_path,
    ACTIONS(178), 2,
      anon_sym_include,
      anon_sym_exclude,
    STATE(340), 2,
      sym_vs_concept_component,
      sym_vs_filter_component,
    ACTIONS(79), 6,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [1634] = 11,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(35), 1,
      anon_sym_Title,
    ACTIONS(192), 1,
      anon_sym_Instance,
    ACTIONS(194), 1,
      anon_sym_InstanceOf,
    ACTIONS(196), 1,
      anon_sym_Usage,
    ACTIONS(198), 1,
      anon_sym_STAR,
    STATE(38), 2,
      sym_instance_metadata,
      aux_sym_instance_repeat1,
    STATE(127), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(286), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    STATE(159), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(190), 11,
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
  [1685] = 5,
    ACTIONS(37), 1,
      anon_sym_STAR,
    STATE(40), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(307), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(282), 10,
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
    ACTIONS(27), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [1724] = 2,
    ACTIONS(202), 1,
      anon_sym_Instance,
    ACTIONS(200), 27,
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
  [1757] = 5,
    ACTIONS(37), 1,
      anon_sym_STAR,
    STATE(40), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(307), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(282), 10,
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
    ACTIONS(39), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [1796] = 2,
    ACTIONS(206), 1,
      anon_sym_Instance,
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
  [1829] = 11,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(35), 1,
      anon_sym_Title,
    ACTIONS(194), 1,
      anon_sym_InstanceOf,
    ACTIONS(196), 1,
      anon_sym_Usage,
    ACTIONS(198), 1,
      anon_sym_STAR,
    ACTIONS(210), 1,
      anon_sym_Instance,
    STATE(59), 2,
      sym_instance_metadata,
      aux_sym_instance_repeat1,
    STATE(121), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(286), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    STATE(159), 4,
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
  [1880] = 5,
    ACTIONS(37), 1,
      anon_sym_STAR,
    STATE(40), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(307), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(282), 10,
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
    ACTIONS(212), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [1919] = 5,
    ACTIONS(216), 1,
      anon_sym_STAR,
    STATE(40), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(307), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(282), 10,
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
    ACTIONS(214), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [1958] = 5,
    ACTIONS(37), 1,
      anon_sym_STAR,
    STATE(40), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(307), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(282), 10,
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
      anon_sym_RuleSet,
  [1997] = 11,
    ACTIONS(225), 1,
      anon_sym_POUND,
    ACTIONS(227), 1,
      aux_sym_sequence_token1,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SLASH,
    STATE(126), 1,
      sym_code,
    STATE(259), 1,
      sym_vs_filter_value,
    STATE(421), 1,
      aux_sym_sequence_repeat1,
    STATE(559), 1,
      sym_sequence,
    ACTIONS(223), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(260), 3,
      sym_code_string,
      sym_string,
      sym_regex,
    ACTIONS(221), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [2047] = 9,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(35), 1,
      anon_sym_Title,
    ACTIONS(235), 1,
      anon_sym_Id,
    ACTIONS(237), 1,
      anon_sym_STAR,
    STATE(45), 2,
      sym_vs_metadata,
      aux_sym_valueset_repeat1,
    STATE(134), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(195), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(291), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
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
  [2092] = 9,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(35), 1,
      anon_sym_Title,
    ACTIONS(235), 1,
      anon_sym_Id,
    ACTIONS(241), 1,
      anon_sym_STAR,
    STATE(46), 2,
      sym_cs_metadata,
      aux_sym_codesystem_repeat1,
    STATE(135), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(199), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(293), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
    ACTIONS(239), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [2137] = 9,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(35), 1,
      anon_sym_Title,
    ACTIONS(235), 1,
      anon_sym_Id,
    ACTIONS(237), 1,
      anon_sym_STAR,
    STATE(86), 2,
      sym_vs_metadata,
      aux_sym_valueset_repeat1,
    STATE(114), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(195), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(291), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
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
      anon_sym_RuleSet,
  [2182] = 9,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(35), 1,
      anon_sym_Title,
    ACTIONS(235), 1,
      anon_sym_Id,
    ACTIONS(241), 1,
      anon_sym_STAR,
    STATE(91), 2,
      sym_cs_metadata,
      aux_sym_codesystem_repeat1,
    STATE(137), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(199), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(293), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
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
  [2227] = 2,
    ACTIONS(249), 1,
      anon_sym_Instance,
    ACTIONS(247), 24,
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
  [2257] = 13,
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
    ACTIONS(25), 1,
      anon_sym_RuleSet,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    STATE(53), 13,
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
      aux_sym_doc_repeat1,
  [2309] = 4,
    ACTIONS(255), 1,
      anon_sym_STAR,
    STATE(49), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(282), 10,
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
    ACTIONS(253), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [2343] = 4,
    ACTIONS(73), 1,
      anon_sym_STAR,
    STATE(49), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(282), 10,
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
      anon_sym_RuleSet,
  [2377] = 4,
    ACTIONS(73), 1,
      anon_sym_STAR,
    STATE(49), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(282), 10,
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
      anon_sym_RuleSet,
  [2411] = 2,
    ACTIONS(264), 1,
      anon_sym_Instance,
    ACTIONS(262), 24,
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
  [2441] = 13,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    ACTIONS(268), 1,
      anon_sym_Alias,
    ACTIONS(271), 1,
      anon_sym_Profile,
    ACTIONS(274), 1,
      anon_sym_Extension,
    ACTIONS(277), 1,
      anon_sym_Invariant,
    ACTIONS(280), 1,
      anon_sym_Instance,
    ACTIONS(283), 1,
      anon_sym_ValueSet,
    ACTIONS(286), 1,
      anon_sym_CodeSystem,
    ACTIONS(289), 1,
      anon_sym_Mapping,
    ACTIONS(292), 1,
      anon_sym_Logical,
    ACTIONS(295), 1,
      anon_sym_Resource,
    ACTIONS(298), 1,
      anon_sym_RuleSet,
    STATE(53), 13,
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
      aux_sym_doc_repeat1,
  [2493] = 8,
    ACTIONS(303), 1,
      anon_sym_Description,
    ACTIONS(306), 1,
      anon_sym_Id,
    ACTIONS(309), 1,
      anon_sym_Source,
    ACTIONS(312), 1,
      anon_sym_Target,
    ACTIONS(315), 1,
      anon_sym_Title,
    STATE(54), 2,
      sym_mapping_metadata,
      aux_sym_mapping_repeat1,
    STATE(113), 5,
      sym_description,
      sym_id,
      sym_source,
      sym_target,
      sym_title,
    ACTIONS(301), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [2535] = 4,
    ACTIONS(73), 1,
      anon_sym_STAR,
    STATE(49), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(282), 10,
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
    ACTIONS(77), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [2569] = 1,
    ACTIONS(145), 24,
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
  [2596] = 11,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(227), 1,
      aux_sym_sequence_token1,
    ACTIONS(320), 1,
      anon_sym_insert,
    ACTIONS(322), 1,
      anon_sym_POUND,
    STATE(151), 1,
      sym_string,
    STATE(298), 1,
      sym_multiline_string,
    STATE(421), 1,
      aux_sym_sequence_repeat1,
    STATE(551), 1,
      sym_sequence,
    STATE(67), 2,
      sym_code,
      aux_sym_code_insert_rule_repeat1,
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
  [2643] = 2,
    ACTIONS(326), 1,
      anon_sym_Instance,
    ACTIONS(324), 23,
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
  [2672] = 8,
    ACTIONS(330), 1,
      anon_sym_Instance,
    ACTIONS(332), 1,
      anon_sym_Description,
    ACTIONS(335), 1,
      anon_sym_InstanceOf,
    ACTIONS(338), 1,
      anon_sym_Title,
    ACTIONS(341), 1,
      anon_sym_Usage,
    STATE(59), 2,
      sym_instance_metadata,
      aux_sym_instance_repeat1,
    STATE(159), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(328), 12,
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
  [2712] = 7,
    ACTIONS(346), 1,
      anon_sym_Description,
    ACTIONS(349), 1,
      anon_sym_Id,
    ACTIONS(352), 1,
      anon_sym_Parent,
    ACTIONS(355), 1,
      anon_sym_Title,
    STATE(60), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(170), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    ACTIONS(344), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [2750] = 8,
    ACTIONS(63), 1,
      anon_sym_CARET,
    ACTIONS(365), 1,
      aux_sym_sequence_token1,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    STATE(196), 1,
      sym_string,
    STATE(531), 1,
      sym_caret_path,
    ACTIONS(363), 2,
      anon_sym_from,
      anon_sym_and,
    ACTIONS(361), 3,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(358), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [2790] = 3,
    STATE(73), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(65), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(370), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [2819] = 14,
    ACTIONS(97), 1,
      anon_sym_Reference,
    ACTIONS(99), 1,
      anon_sym_Canonical,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(372), 1,
      anon_sym_contentReference,
    ACTIONS(374), 1,
      aux_sym_sequence_token1,
    ACTIONS(378), 1,
      anon_sym_QMARK_BANG,
    STATE(21), 1,
      sym_sequence,
    STATE(247), 1,
      sym_reference,
    STATE(378), 1,
      aux_sym_sequence_repeat1,
    STATE(386), 1,
      sym_target_type,
    STATE(84), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    STATE(246), 2,
      sym_name,
      sym_canonical,
    ACTIONS(79), 3,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
    ACTIONS(376), 5,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [2870] = 8,
    ACTIONS(227), 1,
      aux_sym_sequence_token1,
    ACTIONS(383), 1,
      anon_sym_COLON,
    ACTIONS(385), 1,
      anon_sym_POUND,
    ACTIONS(387), 1,
      anon_sym_SQUOTE,
    STATE(421), 1,
      aux_sym_sequence_repeat1,
    STATE(556), 1,
      sym_sequence,
    STATE(164), 2,
      sym_code,
      sym_unit,
    ACTIONS(380), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [2909] = 4,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      aux_sym_sequence_token1,
    STATE(72), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
      anon_sym_CARET,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [2940] = 3,
    STATE(66), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(394), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(392), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [2969] = 7,
    ACTIONS(399), 1,
      anon_sym_POUND,
    ACTIONS(402), 1,
      aux_sym_sequence_token1,
    ACTIONS(405), 1,
      anon_sym_DQUOTE,
    STATE(421), 1,
      aux_sym_sequence_repeat1,
    STATE(551), 1,
      sym_sequence,
    STATE(67), 2,
      sym_code,
      aux_sym_code_insert_rule_repeat1,
    ACTIONS(397), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [3006] = 7,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(409), 1,
      anon_sym_Expression,
    ACTIONS(411), 1,
      anon_sym_Severity,
    ACTIONS(413), 1,
      anon_sym_XPath,
    STATE(71), 2,
      sym_invariant_metadata,
      aux_sym_invariant_repeat1,
    STATE(192), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
    ACTIONS(407), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [3043] = 5,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    STATE(15), 2,
      sym_rule_set_rule,
      aux_sym_rule_set_repeat1,
    STATE(314), 8,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_mapping_rule,
      sym_add_element_rule,
      sym_vs_component,
      sym_concept,
    STATE(282), 10,
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
  [3076] = 3,
    ACTIONS(419), 1,
      anon_sym_STAR,
    ACTIONS(421), 2,
      aux_sym_cardinality_token1,
      anon_sym_STAR2,
    ACTIONS(417), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3105] = 7,
    ACTIONS(425), 1,
      anon_sym_Description,
    ACTIONS(428), 1,
      anon_sym_Expression,
    ACTIONS(431), 1,
      anon_sym_Severity,
    ACTIONS(434), 1,
      anon_sym_XPath,
    STATE(71), 2,
      sym_invariant_metadata,
      aux_sym_invariant_repeat1,
    STATE(192), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
    ACTIONS(423), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [3142] = 4,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    ACTIONS(437), 1,
      aux_sym_sequence_token1,
    STATE(72), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
      anon_sym_CARET,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [3173] = 3,
    STATE(66), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(65), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(440), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [3202] = 3,
    STATE(76), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(65), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(442), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [3231] = 3,
    ACTIONS(446), 1,
      anon_sym_STAR,
    ACTIONS(448), 2,
      aux_sym_cardinality_token1,
      anon_sym_STAR2,
    ACTIONS(444), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3260] = 3,
    STATE(66), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(65), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(450), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [3289] = 2,
    ACTIONS(454), 1,
      anon_sym_Instance,
    ACTIONS(452), 20,
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
  [3315] = 8,
    ACTIONS(227), 1,
      aux_sym_sequence_token1,
    ACTIONS(383), 1,
      anon_sym_COLON,
    ACTIONS(387), 1,
      anon_sym_SQUOTE,
    ACTIONS(456), 1,
      anon_sym_POUND,
    STATE(421), 1,
      aux_sym_sequence_repeat1,
    STATE(555), 1,
      sym_sequence,
    STATE(164), 2,
      sym_code,
      sym_unit,
    ACTIONS(380), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [3353] = 3,
    STATE(66), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(65), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(458), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [3381] = 3,
    STATE(66), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(65), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(460), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [3409] = 3,
    ACTIONS(462), 1,
      aux_sym_sequence_token1,
    STATE(81), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
      anon_sym_DQUOTE,
      anon_sym_SLASH,
  [3437] = 3,
    STATE(66), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(65), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(465), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [3465] = 7,
    ACTIONS(101), 1,
      anon_sym_POUND,
    ACTIONS(227), 1,
      aux_sym_sequence_token1,
    ACTIONS(387), 1,
      anon_sym_SQUOTE,
    STATE(421), 1,
      aux_sym_sequence_repeat1,
    STATE(558), 1,
      sym_sequence,
    STATE(164), 2,
      sym_code,
      sym_unit,
    ACTIONS(383), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [3501] = 13,
    ACTIONS(97), 1,
      anon_sym_Reference,
    ACTIONS(99), 1,
      anon_sym_Canonical,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(374), 1,
      aux_sym_sequence_token1,
    ACTIONS(378), 1,
      anon_sym_QMARK_BANG,
    STATE(21), 1,
      sym_sequence,
    STATE(247), 1,
      sym_reference,
    STATE(378), 1,
      aux_sym_sequence_repeat1,
    STATE(405), 1,
      sym_target_type,
    STATE(220), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    STATE(246), 2,
      sym_name,
      sym_canonical,
    ACTIONS(79), 3,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
    ACTIONS(376), 5,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [3549] = 3,
    STATE(80), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(65), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(467), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [3577] = 6,
    ACTIONS(471), 1,
      anon_sym_Description,
    ACTIONS(474), 1,
      anon_sym_Id,
    ACTIONS(477), 1,
      anon_sym_Title,
    STATE(86), 2,
      sym_vs_metadata,
      aux_sym_valueset_repeat1,
    STATE(195), 3,
      sym_description,
      sym_id,
      sym_title,
    ACTIONS(469), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [3611] = 3,
    ACTIONS(480), 1,
      aux_sym_sequence_token1,
    STATE(81), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
      anon_sym_DQUOTE,
      anon_sym_SLASH,
  [3639] = 2,
    ACTIONS(202), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
    ACTIONS(200), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
      anon_sym_CARET,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [3665] = 5,
    ACTIONS(109), 1,
      anon_sym_STAR,
    STATE(16), 1,
      aux_sym_param_rule_set_repeat1,
    STATE(317), 1,
      sym_rule_set_rule,
    STATE(314), 8,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_mapping_rule,
      sym_add_element_rule,
      sym_vs_component,
      sym_concept,
    STATE(282), 10,
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
  [3697] = 2,
    ACTIONS(206), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
    ACTIONS(204), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
      anon_sym_CARET,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [3723] = 6,
    ACTIONS(485), 1,
      anon_sym_Description,
    ACTIONS(488), 1,
      anon_sym_Id,
    ACTIONS(491), 1,
      anon_sym_Title,
    STATE(91), 2,
      sym_cs_metadata,
      aux_sym_codesystem_repeat1,
    STATE(199), 3,
      sym_description,
      sym_id,
      sym_title,
    ACTIONS(483), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [3757] = 3,
    ACTIONS(494), 1,
      aux_sym_sequence_token1,
    STATE(102), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3784] = 2,
    ACTIONS(498), 1,
      aux_sym_sequence_token1,
    ACTIONS(496), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
      anon_sym_DQUOTE,
      anon_sym_SLASH,
  [3809] = 4,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    ACTIONS(500), 1,
      aux_sym_sequence_token1,
    STATE(94), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
      anon_sym_CARET,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [3838] = 4,
    ACTIONS(63), 1,
      anon_sym_CARET,
    STATE(531), 1,
      sym_caret_path,
    ACTIONS(365), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
    ACTIONS(361), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [3867] = 1,
    ACTIONS(503), 20,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [3890] = 8,
    ACTIONS(227), 1,
      aux_sym_sequence_token1,
    ACTIONS(507), 1,
      anon_sym_POUND,
    ACTIONS(509), 1,
      anon_sym_DQUOTE,
    STATE(119), 1,
      sym_string,
    STATE(310), 1,
      sym_code,
    STATE(421), 1,
      aux_sym_sequence_repeat1,
    STATE(554), 1,
      sym_sequence,
    ACTIONS(505), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [3927] = 8,
    ACTIONS(227), 1,
      aux_sym_sequence_token1,
    ACTIONS(507), 1,
      anon_sym_POUND,
    ACTIONS(509), 1,
      anon_sym_DQUOTE,
    STATE(129), 1,
      sym_string,
    STATE(315), 1,
      sym_code,
    STATE(421), 1,
      aux_sym_sequence_repeat1,
    STATE(554), 1,
      sym_sequence,
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
  [3964] = 1,
    ACTIONS(417), 20,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [3987] = 1,
    ACTIONS(513), 20,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [4010] = 4,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(515), 1,
      aux_sym_sequence_token1,
    STATE(94), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
      anon_sym_CARET,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [4039] = 3,
    ACTIONS(518), 1,
      aux_sym_sequence_token1,
    STATE(102), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4066] = 7,
    ACTIONS(83), 1,
      anon_sym_POUND,
    ACTIONS(227), 1,
      aux_sym_sequence_token1,
    ACTIONS(387), 1,
      anon_sym_SQUOTE,
    STATE(421), 1,
      aux_sym_sequence_repeat1,
    STATE(557), 1,
      sym_sequence,
    STATE(164), 2,
      sym_code,
      sym_unit,
    ACTIONS(383), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [4101] = 2,
    ACTIONS(206), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
    ACTIONS(204), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
      anon_sym_CARET,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [4125] = 4,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    ACTIONS(521), 1,
      aux_sym_sequence_token1,
    STATE(105), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [4153] = 3,
    ACTIONS(524), 1,
      aux_sym_sequence_token1,
    STATE(106), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4179] = 3,
    ACTIONS(527), 1,
      aux_sym_sequence_token1,
    STATE(106), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4205] = 4,
    ACTIONS(127), 1,
      anon_sym_Instance,
    ACTIONS(529), 1,
      aux_sym_sequence_token1,
    STATE(109), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 16,
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
  [4233] = 4,
    ACTIONS(134), 1,
      anon_sym_Instance,
    ACTIONS(531), 1,
      aux_sym_sequence_token1,
    STATE(109), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 16,
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
  [4261] = 1,
    ACTIONS(534), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4283] = 2,
    ACTIONS(202), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
    ACTIONS(200), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
      anon_sym_CARET,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [4307] = 4,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(536), 1,
      aux_sym_sequence_token1,
    STATE(105), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [4335] = 1,
    ACTIONS(539), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4356] = 4,
    ACTIONS(237), 1,
      anon_sym_STAR,
    STATE(131), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(291), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
    ACTIONS(541), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [4383] = 3,
    ACTIONS(543), 1,
      aux_sym_sequence_token1,
    STATE(115), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 16,
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
  [4408] = 10,
    ACTIONS(97), 1,
      anon_sym_Reference,
    ACTIONS(99), 1,
      anon_sym_Canonical,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(546), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(181), 1,
      aux_sym_sequence_repeat1,
    STATE(247), 1,
      sym_reference,
    STATE(248), 1,
      sym_target_type,
    STATE(246), 2,
      sym_name,
      sym_canonical,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [4447] = 2,
    ACTIONS(202), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
    ACTIONS(200), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [4470] = 3,
    ACTIONS(548), 1,
      aux_sym_sequence_token1,
    STATE(115), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 16,
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
  [4495] = 6,
    ACTIONS(227), 1,
      aux_sym_sequence_token1,
    ACTIONS(507), 1,
      anon_sym_POUND,
    STATE(333), 1,
      sym_code,
    STATE(421), 1,
      aux_sym_sequence_repeat1,
    STATE(554), 1,
      sym_sequence,
    ACTIONS(550), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [4526] = 10,
    ACTIONS(97), 1,
      anon_sym_Reference,
    ACTIONS(99), 1,
      anon_sym_Canonical,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(546), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(181), 1,
      aux_sym_sequence_repeat1,
    STATE(229), 1,
      sym_target_type,
    STATE(247), 1,
      sym_reference,
    STATE(246), 2,
      sym_name,
      sym_canonical,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [4565] = 4,
    ACTIONS(198), 1,
      anon_sym_STAR,
    STATE(122), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(286), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    ACTIONS(552), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [4592] = 4,
    ACTIONS(556), 1,
      anon_sym_STAR,
    STATE(122), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(286), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    ACTIONS(554), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [4619] = 3,
    ACTIONS(559), 1,
      aux_sym_sequence_token1,
    STATE(139), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4644] = 3,
    ACTIONS(561), 1,
      aux_sym_sequence_token1,
    STATE(124), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [4669] = 12,
    ACTIONS(63), 1,
      anon_sym_CARET,
    ACTIONS(174), 1,
      anon_sym_obeys,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(564), 1,
      anon_sym_insert,
    ACTIONS(566), 1,
      anon_sym_system,
    ACTIONS(568), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_path,
    STATE(23), 1,
      aux_sym_sequence_repeat1,
    STATE(31), 1,
      sym_sequence,
    STATE(476), 1,
      sym_name,
    STATE(525), 1,
      sym_caret_path,
    ACTIONS(79), 7,
      anon_sym_codes,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [4712] = 3,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    STATE(196), 1,
      sym_string,
    ACTIONS(363), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [4737] = 4,
    ACTIONS(198), 1,
      anon_sym_STAR,
    STATE(122), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(286), 3,
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
  [4764] = 10,
    ACTIONS(97), 1,
      anon_sym_Reference,
    ACTIONS(99), 1,
      anon_sym_Canonical,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(374), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(229), 1,
      sym_target_type,
    STATE(247), 1,
      sym_reference,
    STATE(378), 1,
      aux_sym_sequence_repeat1,
    STATE(246), 2,
      sym_name,
      sym_canonical,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [4803] = 6,
    ACTIONS(227), 1,
      aux_sym_sequence_token1,
    ACTIONS(507), 1,
      anon_sym_POUND,
    STATE(310), 1,
      sym_code,
    STATE(421), 1,
      aux_sym_sequence_repeat1,
    STATE(554), 1,
      sym_sequence,
    ACTIONS(505), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [4834] = 1,
    ACTIONS(570), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4855] = 4,
    ACTIONS(574), 1,
      anon_sym_STAR,
    STATE(131), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(291), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
    ACTIONS(572), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [4882] = 2,
    ACTIONS(206), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
    ACTIONS(204), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [4905] = 3,
    ACTIONS(577), 1,
      aux_sym_sequence_token1,
    STATE(124), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [4930] = 4,
    ACTIONS(237), 1,
      anon_sym_STAR,
    STATE(131), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(291), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
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
      anon_sym_RuleSet,
  [4957] = 4,
    ACTIONS(241), 1,
      anon_sym_STAR,
    STATE(138), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(293), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
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
  [4984] = 3,
    ACTIONS(579), 1,
      aux_sym_sequence_token1,
    STATE(136), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5009] = 4,
    ACTIONS(241), 1,
      anon_sym_STAR,
    STATE(138), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(293), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
    ACTIONS(582), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [5036] = 4,
    ACTIONS(586), 1,
      anon_sym_STAR,
    STATE(138), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(293), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
    ACTIONS(584), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [5063] = 3,
    ACTIONS(589), 1,
      aux_sym_sequence_token1,
    STATE(139), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5088] = 3,
    ACTIONS(592), 1,
      aux_sym_sequence_token1,
    STATE(136), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5113] = 1,
    ACTIONS(594), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5134] = 4,
    ACTIONS(160), 1,
      anon_sym_STAR,
    STATE(143), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(301), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
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
  [5161] = 4,
    ACTIONS(600), 1,
      anon_sym_STAR,
    STATE(143), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(301), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    ACTIONS(598), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [5188] = 12,
    ACTIONS(63), 1,
      anon_sym_CARET,
    ACTIONS(174), 1,
      anon_sym_obeys,
    ACTIONS(182), 1,
      anon_sym_system,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(564), 1,
      anon_sym_insert,
    ACTIONS(568), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_path,
    STATE(23), 1,
      aux_sym_sequence_repeat1,
    STATE(27), 1,
      sym_sequence,
    STATE(476), 1,
      sym_name,
    STATE(525), 1,
      sym_caret_path,
    ACTIONS(79), 7,
      anon_sym_codes,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [5231] = 4,
    ACTIONS(160), 1,
      anon_sym_STAR,
    STATE(143), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(301), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    ACTIONS(152), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [5258] = 4,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(331), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(603), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5284] = 3,
    ACTIONS(605), 1,
      aux_sym_sequence_token1,
    STATE(147), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 15,
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
  [5308] = 3,
    ACTIONS(608), 1,
      aux_sym_sequence_token1,
    STATE(152), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5332] = 3,
    ACTIONS(610), 1,
      aux_sym_sequence_token1,
    STATE(169), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5356] = 3,
    ACTIONS(612), 1,
      aux_sym_sequence_token1,
    STATE(150), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 15,
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
      anon_sym_DQUOTE,
  [5380] = 4,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(336), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(615), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5406] = 3,
    ACTIONS(617), 1,
      aux_sym_sequence_token1,
    STATE(152), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5430] = 3,
    ACTIONS(620), 1,
      aux_sym_sequence_token1,
    STATE(150), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 15,
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
      anon_sym_DQUOTE,
  [5454] = 3,
    ACTIONS(622), 1,
      aux_sym_sequence_token1,
    STATE(154), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5478] = 3,
    ACTIONS(625), 1,
      aux_sym_sequence_token1,
    STATE(160), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5502] = 15,
    ACTIONS(63), 1,
      anon_sym_CARET,
    ACTIONS(564), 1,
      anon_sym_insert,
    ACTIONS(627), 1,
      anon_sym_codes,
    ACTIONS(629), 1,
      anon_sym_system,
    ACTIONS(631), 1,
      anon_sym_POUND,
    ACTIONS(633), 1,
      aux_sym_sequence_token1,
    STATE(126), 1,
      sym_code,
    STATE(175), 1,
      sym_code_string,
    STATE(356), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(374), 1,
      aux_sym_sequence_repeat1,
    STATE(471), 1,
      sym_path,
    STATE(472), 1,
      sym_sequence,
    STATE(525), 1,
      sym_caret_path,
    ACTIONS(178), 2,
      anon_sym_include,
      anon_sym_exclude,
    STATE(340), 2,
      sym_vs_concept_component,
      sym_vs_filter_component,
  [5550] = 4,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(313), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(635), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5576] = 1,
    ACTIONS(637), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5596] = 2,
    ACTIONS(641), 1,
      anon_sym_Instance,
    ACTIONS(639), 16,
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
  [5618] = 3,
    ACTIONS(643), 1,
      aux_sym_sequence_token1,
    STATE(160), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5642] = 3,
    ACTIONS(646), 1,
      aux_sym_sequence_token1,
    STATE(161), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5666] = 3,
    ACTIONS(649), 1,
      aux_sym_sequence_token1,
    STATE(161), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5690] = 3,
    ACTIONS(651), 1,
      aux_sym_sequence_token1,
    STATE(154), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5714] = 3,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    STATE(228), 1,
      sym_string,
    ACTIONS(653), 15,
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
  [5738] = 4,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(326), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(655), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5764] = 3,
    ACTIONS(657), 1,
      aux_sym_sequence_token1,
    STATE(147), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 15,
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
  [5788] = 4,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(280), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(659), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5814] = 2,
    ACTIONS(663), 1,
      anon_sym_Instance,
    ACTIONS(661), 16,
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
  [5836] = 3,
    ACTIONS(665), 1,
      aux_sym_sequence_token1,
    STATE(169), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5860] = 1,
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
  [5880] = 2,
    ACTIONS(672), 1,
      anon_sym_Instance,
    ACTIONS(670), 16,
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
  [5902] = 1,
    ACTIONS(674), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5921] = 3,
    ACTIONS(678), 1,
      anon_sym_and,
    STATE(182), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(676), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5944] = 3,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    STATE(267), 1,
      sym_string,
    ACTIONS(680), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5967] = 4,
    ACTIONS(684), 1,
      anon_sym_from,
    ACTIONS(686), 1,
      anon_sym_and,
    STATE(303), 1,
      sym_vs_component_from,
    ACTIONS(682), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5992] = 1,
    ACTIONS(688), 16,
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
  [6011] = 3,
    ACTIONS(690), 1,
      aux_sym_sequence_token1,
    STATE(178), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6034] = 3,
    ACTIONS(692), 1,
      aux_sym_sequence_token1,
    STATE(178), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6057] = 1,
    ACTIONS(695), 16,
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
  [6076] = 3,
    ACTIONS(678), 1,
      anon_sym_and,
    STATE(173), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(697), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6099] = 3,
    ACTIONS(699), 1,
      aux_sym_sequence_token1,
    STATE(187), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6122] = 3,
    ACTIONS(703), 1,
      anon_sym_and,
    STATE(182), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(701), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6145] = 2,
    STATE(182), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(676), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6166] = 2,
    ACTIONS(168), 1,
      aux_sym_sequence_token1,
    ACTIONS(166), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
      anon_sym_DQUOTE,
  [6187] = 4,
    ACTIONS(706), 1,
      aux_sym_cardinality_token1,
    ACTIONS(708), 1,
      anon_sym_STAR2,
    ACTIONS(419), 2,
      aux_sym_sequence_token1,
      sym_number,
    ACTIONS(417), 12,
      anon_sym_contentReference,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
  [6212] = 2,
    ACTIONS(164), 1,
      aux_sym_sequence_token1,
    ACTIONS(162), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
      anon_sym_DQUOTE,
  [6233] = 3,
    ACTIONS(710), 1,
      aux_sym_sequence_token1,
    STATE(187), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6256] = 1,
    ACTIONS(713), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6275] = 1,
    ACTIONS(715), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6294] = 1,
    ACTIONS(717), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6313] = 4,
    ACTIONS(719), 1,
      aux_sym_cardinality_token1,
    ACTIONS(721), 1,
      anon_sym_STAR2,
    ACTIONS(446), 2,
      aux_sym_sequence_token1,
      sym_number,
    ACTIONS(444), 12,
      anon_sym_contentReference,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
  [6338] = 1,
    ACTIONS(723), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6357] = 3,
    ACTIONS(725), 1,
      aux_sym_sequence_token1,
    STATE(193), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6380] = 2,
    STATE(183), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(697), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6401] = 1,
    ACTIONS(728), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6420] = 1,
    ACTIONS(730), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6439] = 3,
    ACTIONS(732), 1,
      aux_sym_sequence_token1,
    STATE(193), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6462] = 1,
    ACTIONS(734), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6481] = 1,
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
  [6500] = 1,
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
  [6519] = 3,
    ACTIONS(740), 1,
      aux_sym_sequence_token1,
    STATE(202), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6542] = 3,
    ACTIONS(742), 1,
      aux_sym_sequence_token1,
    STATE(202), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6565] = 1,
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
  [6584] = 1,
    ACTIONS(747), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6603] = 3,
    ACTIONS(749), 1,
      aux_sym_sequence_token1,
    STATE(205), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6626] = 3,
    ACTIONS(752), 1,
      aux_sym_sequence_token1,
    STATE(205), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6649] = 3,
    ACTIONS(754), 1,
      aux_sym_sequence_token1,
    STATE(207), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6672] = 1,
    ACTIONS(757), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6691] = 3,
    ACTIONS(759), 1,
      aux_sym_sequence_token1,
    STATE(207), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6714] = 3,
    ACTIONS(763), 1,
      anon_sym_and,
    STATE(210), 1,
      aux_sym_vs_filter_list_repeat1,
    ACTIONS(761), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [6736] = 3,
    ACTIONS(768), 1,
      anon_sym_and,
    STATE(227), 1,
      aux_sym_contains_rule_repeat1,
    ACTIONS(766), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [6758] = 3,
    ACTIONS(772), 1,
      anon_sym_and,
    STATE(221), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(770), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [6780] = 3,
    ACTIONS(47), 1,
      anon_sym_EQ,
    ACTIONS(49), 1,
      anon_sym_insert,
    ACTIONS(45), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [6802] = 3,
    ACTIONS(776), 1,
      anon_sym_or,
    STATE(224), 1,
      aux_sym_only_rule_repeat1,
    ACTIONS(774), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [6824] = 1,
    ACTIONS(778), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6842] = 2,
    STATE(234), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(697), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6862] = 3,
    ACTIONS(780), 1,
      aux_sym_sequence_token1,
    STATE(217), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [6884] = 3,
    ACTIONS(772), 1,
      anon_sym_and,
    STATE(223), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(783), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [6906] = 3,
    ACTIONS(787), 1,
      anon_sym_and,
    STATE(225), 1,
      aux_sym_vs_filter_list_repeat1,
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
  [6928] = 4,
    ACTIONS(789), 2,
      aux_sym_sequence_token1,
      sym_number,
    STATE(220), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(392), 5,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_Reference,
      anon_sym_Canonical,
    ACTIONS(791), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [6952] = 3,
    ACTIONS(794), 1,
      anon_sym_and,
    STATE(221), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(701), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [6974] = 1,
    ACTIONS(701), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6992] = 3,
    ACTIONS(772), 1,
      anon_sym_and,
    STATE(221), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(797), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7014] = 3,
    ACTIONS(801), 1,
      anon_sym_or,
    STATE(224), 1,
      aux_sym_only_rule_repeat1,
    ACTIONS(799), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7036] = 3,
    ACTIONS(787), 1,
      anon_sym_and,
    STATE(210), 1,
      aux_sym_vs_filter_list_repeat1,
    ACTIONS(804), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7058] = 2,
    ACTIONS(808), 1,
      anon_sym_T,
    ACTIONS(806), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7078] = 3,
    ACTIONS(812), 1,
      anon_sym_and,
    STATE(227), 1,
      aux_sym_contains_rule_repeat1,
    ACTIONS(810), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7100] = 1,
    ACTIONS(815), 15,
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
  [7118] = 1,
    ACTIONS(799), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7136] = 3,
    ACTIONS(817), 1,
      aux_sym_sequence_token1,
    STATE(217), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7158] = 2,
    ACTIONS(383), 1,
      anon_sym_COLON,
    ACTIONS(680), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7178] = 3,
    ACTIONS(136), 2,
      anon_sym_or,
      anon_sym_DQUOTE,
    ACTIONS(819), 2,
      aux_sym_sequence_token1,
      sym_number,
    ACTIONS(503), 11,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
  [7200] = 3,
    ACTIONS(49), 1,
      anon_sym_insert,
    ACTIONS(61), 1,
      anon_sym_DASH_GT,
    ACTIONS(45), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7222] = 2,
    STATE(221), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(676), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7242] = 3,
    ACTIONS(772), 1,
      anon_sym_and,
    STATE(238), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(697), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7264] = 2,
    ACTIONS(164), 1,
      aux_sym_sequence_token1,
    ACTIONS(162), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7284] = 2,
    ACTIONS(168), 1,
      aux_sym_sequence_token1,
    ACTIONS(166), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7304] = 3,
    ACTIONS(772), 1,
      anon_sym_and,
    STATE(221), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(676), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7326] = 3,
    ACTIONS(821), 1,
      aux_sym_sequence_token1,
    STATE(249), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [7348] = 2,
    ACTIONS(825), 1,
      anon_sym_and,
    ACTIONS(823), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7368] = 3,
    ACTIONS(829), 1,
      anon_sym_LPAREN,
    STATE(296), 1,
      sym_strength,
    ACTIONS(827), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7390] = 2,
    ACTIONS(831), 1,
      anon_sym_and,
    ACTIONS(823), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7410] = 3,
    ACTIONS(768), 1,
      anon_sym_and,
    STATE(211), 1,
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
  [7432] = 8,
    ACTIONS(837), 1,
      aux_sym_sequence_token1,
    ACTIONS(839), 1,
      sym_number,
    STATE(219), 1,
      sym_vs_filter_definition,
    STATE(306), 1,
      sym_vs_filter_list,
    STATE(364), 1,
      sym_name,
    STATE(461), 1,
      aux_sym_sequence_repeat1,
    STATE(503), 1,
      sym_sequence,
    ACTIONS(835), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7464] = 3,
    ACTIONS(772), 1,
      anon_sym_and,
    STATE(212), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(797), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7486] = 1,
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
  [7504] = 1,
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
  [7522] = 3,
    ACTIONS(776), 1,
      anon_sym_or,
    STATE(214), 1,
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
  [7544] = 3,
    ACTIONS(847), 1,
      aux_sym_sequence_token1,
    STATE(249), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [7566] = 2,
    ACTIONS(850), 1,
      anon_sym_POUND,
    ACTIONS(136), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7586] = 1,
    ACTIONS(852), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7603] = 2,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
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
  [7622] = 2,
    ACTIONS(856), 1,
      anon_sym_and,
    ACTIONS(823), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7641] = 2,
    ACTIONS(858), 2,
      aux_sym_sequence_token1,
      sym_number,
    ACTIONS(513), 12,
      anon_sym_contentReference,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
  [7660] = 2,
    ACTIONS(419), 2,
      aux_sym_sequence_token1,
      sym_number,
    ACTIONS(417), 12,
      anon_sym_contentReference,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
  [7679] = 1,
    ACTIONS(860), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7696] = 3,
    ACTIONS(862), 1,
      aux_sym_sequence_token1,
    STATE(258), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [7717] = 3,
    ACTIONS(864), 1,
      aux_sym_sequence_token1,
    STATE(258), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [7738] = 1,
    ACTIONS(867), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7755] = 1,
    ACTIONS(869), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7772] = 2,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
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
  [7791] = 1,
    ACTIONS(761), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7808] = 2,
    ACTIONS(873), 1,
      anon_sym_and,
    ACTIONS(823), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7827] = 2,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
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
  [7846] = 2,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(877), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7865] = 2,
    ACTIONS(881), 1,
      anon_sym_LPAREN,
    ACTIONS(879), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7884] = 1,
    ACTIONS(883), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7901] = 7,
    ACTIONS(837), 1,
      aux_sym_sequence_token1,
    ACTIONS(839), 1,
      sym_number,
    STATE(262), 1,
      sym_vs_filter_definition,
    STATE(364), 1,
      sym_name,
    STATE(461), 1,
      aux_sym_sequence_repeat1,
    STATE(503), 1,
      sym_sequence,
    ACTIONS(835), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7930] = 2,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(885), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7949] = 7,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(888), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(243), 1,
      sym_item,
    STATE(368), 1,
      aux_sym_sequence_repeat1,
    STATE(392), 1,
      sym_name,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7978] = 2,
    ACTIONS(890), 1,
      anon_sym_POUND,
    ACTIONS(136), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7997] = 2,
    ACTIONS(894), 1,
      anon_sym_where,
    ACTIONS(892), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8016] = 1,
    ACTIONS(680), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [8033] = 1,
    ACTIONS(896), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [8050] = 1,
    ACTIONS(383), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [8067] = 1,
    ACTIONS(898), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [8084] = 7,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(888), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(278), 1,
      sym_item,
    STATE(368), 1,
      aux_sym_sequence_repeat1,
    STATE(392), 1,
      sym_name,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [8113] = 1,
    ACTIONS(810), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [8130] = 1,
    ACTIONS(900), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [8147] = 1,
    ACTIONS(655), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8163] = 6,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(902), 1,
      aux_sym_sequence_token1,
    STATE(5), 1,
      sym_name,
    STATE(21), 1,
      sym_sequence,
    STATE(107), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [8189] = 1,
    ACTIONS(904), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8205] = 1,
    ACTIONS(906), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8221] = 6,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(908), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(110), 1,
      sym_name,
    STATE(140), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [8247] = 2,
    ACTIONS(819), 2,
      aux_sym_sequence_token1,
      sym_number,
    ACTIONS(503), 11,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
  [8265] = 1,
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
  [8281] = 6,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(912), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(206), 1,
      aux_sym_sequence_repeat1,
    STATE(222), 1,
      sym_name,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [8307] = 6,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(912), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(206), 1,
      aux_sym_sequence_repeat1,
    STATE(235), 1,
      sym_name,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [8333] = 6,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(914), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(215), 1,
      sym_name,
    STATE(230), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [8359] = 6,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(916), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(149), 1,
      aux_sym_sequence_repeat1,
    STATE(180), 1,
      sym_name,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [8385] = 1,
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
  [8401] = 1,
    ACTIONS(920), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8417] = 1,
    ACTIONS(922), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8433] = 1,
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
  [8449] = 6,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(927), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(201), 1,
      aux_sym_sequence_repeat1,
    STATE(215), 1,
      sym_name,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [8475] = 1,
    ACTIONS(929), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8491] = 6,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(931), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(380), 1,
      aux_sym_sequence_repeat1,
    STATE(440), 1,
      sym_name,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [8517] = 1,
    ACTIONS(615), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8533] = 6,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(916), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(149), 1,
      aux_sym_sequence_repeat1,
    STATE(194), 1,
      sym_name,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [8559] = 1,
    ACTIONS(933), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8575] = 1,
    ACTIONS(935), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8591] = 1,
    ACTIONS(937), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8607] = 1,
    ACTIONS(939), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8623] = 6,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(941), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(92), 1,
      aux_sym_sequence_repeat1,
    STATE(110), 1,
      sym_name,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [8649] = 1,
    ACTIONS(943), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8665] = 1,
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
  [8681] = 1,
    ACTIONS(947), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8697] = 1,
    ACTIONS(949), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8713] = 1,
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
  [8729] = 1,
    ACTIONS(550), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8745] = 6,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(953), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(347), 1,
      sym_name,
    STATE(359), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [8771] = 6,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(912), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(206), 1,
      aux_sym_sequence_repeat1,
    STATE(245), 1,
      sym_name,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [8797] = 1,
    ACTIONS(955), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8813] = 1,
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
  [8829] = 1,
    ACTIONS(505), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8845] = 6,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(902), 1,
      aux_sym_sequence_token1,
    STATE(7), 1,
      sym_name,
    STATE(21), 1,
      sym_sequence,
    STATE(107), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [8871] = 1,
    ACTIONS(959), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8887] = 6,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(961), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(209), 1,
      aux_sym_sequence_repeat1,
    STATE(241), 1,
      sym_name,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [8913] = 6,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(963), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(346), 1,
      sym_name,
    STATE(360), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [8939] = 2,
    ACTIONS(967), 1,
      anon_sym_POUND,
    ACTIONS(965), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [8957] = 6,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(969), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(33), 1,
      sym_name,
    STATE(108), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [8983] = 6,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(908), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(43), 1,
      sym_name,
    STATE(140), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [9009] = 6,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(902), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(107), 1,
      aux_sym_sequence_repeat1,
    STATE(110), 1,
      sym_name,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [9035] = 1,
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
  [9051] = 6,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(902), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(107), 1,
      aux_sym_sequence_repeat1,
    STATE(158), 1,
      sym_name,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [9077] = 1,
    ACTIONS(635), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [9093] = 6,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(908), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(44), 1,
      sym_name,
    STATE(140), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [9119] = 6,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(941), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(30), 1,
      sym_name,
    STATE(92), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [9145] = 6,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(916), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(149), 1,
      aux_sym_sequence_repeat1,
    STATE(215), 1,
      sym_name,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [9171] = 6,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(902), 1,
      aux_sym_sequence_token1,
    STATE(4), 1,
      sym_name,
    STATE(21), 1,
      sym_sequence,
    STATE(107), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [9197] = 1,
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
  [9213] = 6,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(912), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(206), 1,
      aux_sym_sequence_repeat1,
    STATE(218), 1,
      sym_name,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [9239] = 1,
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
  [9255] = 1,
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
  [9271] = 1,
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
  [9287] = 1,
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
  [9303] = 6,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(912), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(206), 1,
      aux_sym_sequence_repeat1,
    STATE(216), 1,
      sym_name,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [9329] = 6,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(916), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(149), 1,
      aux_sym_sequence_repeat1,
    STATE(222), 1,
      sym_name,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [9355] = 6,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(912), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(206), 1,
      aux_sym_sequence_repeat1,
    STATE(215), 1,
      sym_name,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [9381] = 1,
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
  [9397] = 1,
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
  [9413] = 1,
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
  [9429] = 6,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(969), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(108), 1,
      aux_sym_sequence_repeat1,
    STATE(171), 1,
      sym_name,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [9455] = 1,
    ACTIONS(965), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [9470] = 9,
    ACTIONS(227), 1,
      aux_sym_sequence_token1,
    ACTIONS(627), 1,
      anon_sym_codes,
    ACTIONS(631), 1,
      anon_sym_POUND,
    STATE(126), 1,
      sym_code,
    STATE(175), 1,
      sym_code_string,
    STATE(356), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(421), 1,
      aux_sym_sequence_repeat1,
    STATE(549), 1,
      sym_sequence,
    STATE(305), 2,
      sym_vs_concept_component,
      sym_vs_filter_component,
  [9499] = 6,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(409), 1,
      anon_sym_Expression,
    ACTIONS(411), 1,
      anon_sym_Severity,
    ACTIONS(413), 1,
      anon_sym_XPath,
    STATE(68), 2,
      sym_invariant_metadata,
      aux_sym_invariant_repeat1,
    STATE(192), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
  [9522] = 6,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(31), 1,
      anon_sym_Id,
    ACTIONS(33), 1,
      anon_sym_Parent,
    ACTIONS(35), 1,
      anon_sym_Title,
    STATE(8), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(170), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
  [9545] = 4,
    ACTIONS(55), 1,
      anon_sym_and,
    STATE(351), 1,
      aux_sym_flag_rule_repeat1,
    STATE(82), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(65), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [9564] = 3,
    ACTIONS(989), 1,
      aux_sym_sequence_token1,
    STATE(350), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 7,
      anon_sym_and,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [9580] = 3,
    ACTIONS(991), 1,
      aux_sym_sequence_token1,
    STATE(350), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 7,
      anon_sym_and,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [9596] = 3,
    ACTIONS(994), 1,
      anon_sym_and,
    STATE(351), 1,
      aux_sym_flag_rule_repeat1,
    ACTIONS(997), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [9611] = 7,
    ACTIONS(999), 1,
      anon_sym_POUND,
    ACTIONS(1002), 1,
      aux_sym_sequence_token1,
    STATE(126), 1,
      sym_code,
    STATE(352), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(421), 1,
      aux_sym_sequence_repeat1,
    STATE(545), 1,
      sym_code_string,
    STATE(553), 1,
      sym_sequence,
  [9633] = 1,
    ACTIONS(997), 7,
      anon_sym_and,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [9643] = 7,
    ACTIONS(227), 1,
      aux_sym_sequence_token1,
    ACTIONS(1005), 1,
      anon_sym_insert,
    ACTIONS(1007), 1,
      anon_sym_POUND,
    STATE(57), 1,
      aux_sym_code_insert_rule_repeat1,
    STATE(95), 1,
      sym_code,
    STATE(421), 1,
      aux_sym_sequence_repeat1,
    STATE(534), 1,
      sym_sequence,
  [9665] = 7,
    ACTIONS(176), 1,
      anon_sym_DASH_GT,
    ACTIONS(564), 1,
      anon_sym_insert,
    ACTIONS(629), 1,
      anon_sym_system,
    ACTIONS(1009), 1,
      aux_sym_sequence_token1,
    STATE(56), 1,
      sym_sequence,
    STATE(163), 1,
      aux_sym_sequence_repeat1,
    STATE(233), 1,
      sym_path,
  [9687] = 7,
    ACTIONS(227), 1,
      aux_sym_sequence_token1,
    ACTIONS(1011), 1,
      anon_sym_POUND,
    STATE(126), 1,
      sym_code,
    STATE(352), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(421), 1,
      aux_sym_sequence_repeat1,
    STATE(460), 1,
      sym_code_string,
    STATE(550), 1,
      sym_sequence,
  [9709] = 6,
    ACTIONS(564), 1,
      anon_sym_insert,
    ACTIONS(629), 1,
      anon_sym_system,
    ACTIONS(1013), 1,
      aux_sym_sequence_token1,
    STATE(56), 1,
      sym_sequence,
    STATE(166), 1,
      aux_sym_sequence_repeat1,
    STATE(213), 1,
      sym_path,
  [9728] = 3,
    ACTIONS(1015), 1,
      aux_sym_sequence_token1,
    STATE(358), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 4,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
  [9741] = 3,
    ACTIONS(1018), 1,
      aux_sym_sequence_token1,
    STATE(358), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 4,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
  [9754] = 3,
    ACTIONS(1020), 1,
      aux_sym_sequence_token1,
    STATE(361), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 4,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [9767] = 3,
    ACTIONS(1022), 1,
      aux_sym_sequence_token1,
    STATE(361), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 4,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [9780] = 5,
    ACTIONS(227), 1,
      aux_sym_sequence_token1,
    ACTIONS(1025), 1,
      anon_sym_POUND,
    STATE(141), 1,
      sym_code,
    STATE(421), 1,
      aux_sym_sequence_repeat1,
    STATE(552), 1,
      sym_sequence,
  [9796] = 5,
    ACTIONS(629), 1,
      anon_sym_system,
    ACTIONS(1027), 1,
      aux_sym_sequence_token1,
    STATE(56), 1,
      sym_sequence,
    STATE(349), 1,
      aux_sym_sequence_repeat1,
    STATE(353), 1,
      sym_path,
  [9812] = 5,
    ACTIONS(1029), 1,
      anon_sym_EQ,
    ACTIONS(1031), 1,
      aux_sym_sequence_token1,
    STATE(42), 1,
      sym_vs_filter_operator,
    STATE(87), 1,
      aux_sym_sequence_repeat1,
    STATE(93), 1,
      sym_sequence,
  [9828] = 3,
    ACTIONS(1033), 1,
      aux_sym_sequence_token1,
    STATE(372), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE,
  [9840] = 4,
    ACTIONS(134), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1035), 1,
      aux_sym_sequence_token1,
    STATE(366), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 2,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [9854] = 3,
    ACTIONS(1038), 1,
      aux_sym_sequence_token1,
    STATE(371), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 3,
      anon_sym_from,
      anon_sym_and,
      anon_sym_DQUOTE,
  [9866] = 4,
    ACTIONS(127), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1040), 1,
      aux_sym_sequence_token1,
    STATE(366), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 2,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [9880] = 5,
    ACTIONS(227), 1,
      aux_sym_sequence_token1,
    ACTIONS(1042), 1,
      anon_sym_POUND,
    STATE(168), 1,
      sym_code,
    STATE(421), 1,
      aux_sym_sequence_repeat1,
    STATE(548), 1,
      sym_sequence,
  [9896] = 5,
    ACTIONS(1044), 1,
      anon_sym_POUND,
    ACTIONS(1046), 1,
      aux_sym_sequence_token1,
    STATE(239), 1,
      aux_sym_sequence_repeat1,
    STATE(320), 1,
      sym_sequence,
    STATE(344), 1,
      sym_code,
  [9912] = 3,
    ACTIONS(1048), 1,
      aux_sym_sequence_token1,
    STATE(371), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 3,
      anon_sym_from,
      anon_sym_and,
      anon_sym_DQUOTE,
  [9924] = 3,
    ACTIONS(1051), 1,
      aux_sym_sequence_token1,
    STATE(372), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE,
  [9936] = 5,
    ACTIONS(227), 1,
      aux_sym_sequence_token1,
    ACTIONS(1054), 1,
      anon_sym_POUND,
    STATE(189), 1,
      sym_code,
    STATE(421), 1,
      aux_sym_sequence_repeat1,
    STATE(540), 1,
      sym_sequence,
  [9952] = 3,
    ACTIONS(1056), 1,
      aux_sym_sequence_token1,
    STATE(375), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 3,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_CARET,
  [9964] = 3,
    ACTIONS(1058), 1,
      aux_sym_sequence_token1,
    STATE(375), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 3,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_CARET,
  [9976] = 5,
    ACTIONS(1061), 1,
      anon_sym_POUND,
    ACTIONS(1063), 1,
      aux_sym_sequence_token1,
    STATE(395), 1,
      aux_sym_sequence_repeat1,
    STATE(445), 1,
      sym_sequence,
    STATE(498), 1,
      sym_code,
  [9992] = 4,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(1065), 1,
      anon_sym_or,
    STATE(165), 1,
      sym_string,
    STATE(475), 1,
      aux_sym_only_rule_repeat1,
  [10005] = 3,
    ACTIONS(1067), 1,
      aux_sym_sequence_token1,
    STATE(418), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 2,
      anon_sym_or,
      anon_sym_DQUOTE,
  [10016] = 4,
    ACTIONS(1069), 1,
      aux_sym_sequence_token1,
    STATE(209), 1,
      aux_sym_sequence_repeat1,
    STATE(264), 1,
      sym_sequence,
    STATE(324), 1,
      sym_param_rule_set_reference,
  [10029] = 4,
    ACTIONS(123), 1,
      anon_sym_DOT_DOT,
    ACTIONS(127), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1071), 1,
      aux_sym_sequence_token1,
    STATE(387), 1,
      aux_sym_sequence_repeat1,
  [10042] = 4,
    ACTIONS(1069), 1,
      aux_sym_sequence_token1,
    STATE(209), 1,
      aux_sym_sequence_repeat1,
    STATE(261), 1,
      sym_sequence,
    STATE(334), 1,
      sym_param_rule_set_reference,
  [10055] = 3,
    ACTIONS(1073), 1,
      anon_sym_DQUOTE,
    STATE(383), 1,
      aux_sym_string_repeat1,
    ACTIONS(1075), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [10066] = 3,
    ACTIONS(1077), 1,
      anon_sym_DQUOTE,
    STATE(417), 1,
      aux_sym_string_repeat1,
    ACTIONS(1079), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [10077] = 3,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(58), 2,
      sym_string,
      sym_multiline_string,
  [10088] = 4,
    ACTIONS(1081), 1,
      aux_sym_sequence_token1,
    ACTIONS(1083), 1,
      aux_sym_param_rule_set_params_token1,
    STATE(399), 1,
      aux_sym_param_rule_set_params_repeat1,
    STATE(527), 1,
      sym_param_rule_set_params,
  [10101] = 4,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(1065), 1,
      anon_sym_or,
    STATE(167), 1,
      sym_string,
    STATE(377), 1,
      aux_sym_only_rule_repeat1,
  [10114] = 4,
    ACTIONS(129), 1,
      anon_sym_DOT_DOT,
    ACTIONS(134), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1085), 1,
      aux_sym_sequence_token1,
    STATE(387), 1,
      aux_sym_sequence_repeat1,
  [10127] = 3,
    ACTIONS(1088), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(388), 1,
      aux_sym_string_repeat1,
    ACTIONS(1090), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [10138] = 3,
    ACTIONS(1093), 1,
      aux_sym_sequence_token1,
    STATE(390), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [10149] = 3,
    ACTIONS(1095), 1,
      aux_sym_sequence_token1,
    STATE(390), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [10160] = 4,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(1065), 1,
      anon_sym_or,
    STATE(157), 1,
      sym_string,
    STATE(475), 1,
      aux_sym_only_rule_repeat1,
  [10173] = 4,
    ACTIONS(1098), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1100), 1,
      anon_sym_DOT_DOT,
    ACTIONS(1102), 1,
      anon_sym_named,
    STATE(62), 1,
      sym_cardinality,
  [10186] = 4,
    ACTIONS(1069), 1,
      aux_sym_sequence_token1,
    STATE(209), 1,
      aux_sym_sequence_repeat1,
    STATE(252), 1,
      sym_sequence,
    STATE(300), 1,
      sym_param_rule_set_reference,
  [10199] = 4,
    ACTIONS(1104), 1,
      aux_sym_sequence_token1,
    STATE(69), 1,
      sym_sequence,
    STATE(89), 1,
      sym_param_rule_set_reference,
    STATE(409), 1,
      aux_sym_sequence_repeat1,
  [10212] = 3,
    ACTIONS(1106), 1,
      aux_sym_sequence_token1,
    STATE(398), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 2,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [10223] = 4,
    ACTIONS(1069), 1,
      aux_sym_sequence_token1,
    STATE(209), 1,
      aux_sym_sequence_repeat1,
    STATE(269), 1,
      sym_sequence,
    STATE(294), 1,
      sym_param_rule_set_reference,
  [10236] = 3,
    ACTIONS(1108), 1,
      anon_sym_from,
    STATE(272), 1,
      sym_vs_component_from,
    ACTIONS(136), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
  [10247] = 3,
    ACTIONS(1110), 1,
      aux_sym_sequence_token1,
    STATE(398), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 2,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [10258] = 4,
    ACTIONS(1113), 1,
      anon_sym_RPAREN,
    ACTIONS(1115), 1,
      aux_sym_sequence_token1,
    ACTIONS(1117), 1,
      aux_sym_param_rule_set_params_token1,
    STATE(413), 1,
      aux_sym_param_rule_set_params_repeat1,
  [10271] = 3,
    ACTIONS(1119), 1,
      anon_sym_DQUOTE,
    STATE(414), 1,
      aux_sym_string_repeat1,
    ACTIONS(1121), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [10282] = 3,
    ACTIONS(1123), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(416), 1,
      aux_sym_string_repeat1,
    ACTIONS(1125), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [10293] = 3,
    ACTIONS(1127), 1,
      aux_sym_sequence_token1,
    STATE(406), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 2,
      anon_sym_and,
      anon_sym_DQUOTE,
  [10304] = 4,
    ACTIONS(1129), 1,
      anon_sym_RPAREN,
    ACTIONS(1131), 1,
      anon_sym_or,
    ACTIONS(1133), 1,
      anon_sym_PIPE,
    STATE(422), 1,
      aux_sym_canonical_repeat1,
  [10317] = 4,
    ACTIONS(1069), 1,
      aux_sym_sequence_token1,
    STATE(209), 1,
      aux_sym_sequence_repeat1,
    STATE(265), 1,
      sym_sequence,
    STATE(335), 1,
      sym_param_rule_set_reference,
  [10330] = 4,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(1065), 1,
      anon_sym_or,
    STATE(165), 1,
      sym_string,
    STATE(391), 1,
      aux_sym_only_rule_repeat1,
  [10343] = 3,
    ACTIONS(1135), 1,
      aux_sym_sequence_token1,
    STATE(406), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 2,
      anon_sym_and,
      anon_sym_DQUOTE,
  [10354] = 3,
    ACTIONS(1138), 1,
      anon_sym_DQUOTE,
    STATE(408), 1,
      aux_sym_string_repeat1,
    ACTIONS(1140), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [10365] = 3,
    ACTIONS(1142), 1,
      anon_sym_DQUOTE,
    STATE(417), 1,
      aux_sym_string_repeat1,
    ACTIONS(1079), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [10376] = 3,
    ACTIONS(1144), 1,
      aux_sym_sequence_token1,
    STATE(410), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 2,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [10387] = 3,
    ACTIONS(1146), 1,
      aux_sym_sequence_token1,
    STATE(410), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 2,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [10398] = 4,
    ACTIONS(1149), 1,
      anon_sym_system,
    ACTIONS(1151), 1,
      anon_sym_valueset,
    STATE(240), 1,
      sym_vs_from_system,
    STATE(242), 1,
      sym_vs_from_valueset,
  [10411] = 1,
    ACTIONS(1153), 4,
      anon_sym_example,
      anon_sym_preferred,
      anon_sym_extensible,
      anon_sym_required,
  [10418] = 4,
    ACTIONS(1155), 1,
      anon_sym_RPAREN,
    ACTIONS(1157), 1,
      aux_sym_sequence_token1,
    ACTIONS(1160), 1,
      aux_sym_param_rule_set_params_token1,
    STATE(413), 1,
      aux_sym_param_rule_set_params_repeat1,
  [10431] = 3,
    ACTIONS(1163), 1,
      anon_sym_DQUOTE,
    STATE(417), 1,
      aux_sym_string_repeat1,
    ACTIONS(1079), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [10442] = 4,
    ACTIONS(1165), 1,
      anon_sym_system,
    ACTIONS(1167), 1,
      anon_sym_valueset,
    STATE(253), 1,
      sym_vs_from_system,
    STATE(263), 1,
      sym_vs_from_valueset,
  [10455] = 3,
    ACTIONS(1169), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(388), 1,
      aux_sym_string_repeat1,
    ACTIONS(1171), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [10466] = 3,
    ACTIONS(1088), 1,
      anon_sym_DQUOTE,
    STATE(417), 1,
      aux_sym_string_repeat1,
    ACTIONS(1173), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [10477] = 3,
    ACTIONS(1176), 1,
      aux_sym_sequence_token1,
    STATE(418), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(129), 2,
      anon_sym_or,
      anon_sym_DQUOTE,
  [10488] = 3,
    ACTIONS(1179), 1,
      aux_sym_sequence_token1,
    STATE(365), 1,
      aux_sym_sequence_repeat1,
    STATE(403), 1,
      sym_sequence,
  [10498] = 3,
    ACTIONS(1181), 1,
      aux_sym_sequence_token1,
    STATE(35), 1,
      sym_sequence,
    STATE(230), 1,
      aux_sym_sequence_repeat1,
  [10508] = 3,
    ACTIONS(123), 1,
      anon_sym_POUND,
    ACTIONS(1183), 1,
      aux_sym_sequence_token1,
    STATE(455), 1,
      aux_sym_sequence_repeat1,
  [10518] = 3,
    ACTIONS(1131), 1,
      anon_sym_or,
    ACTIONS(1185), 1,
      anon_sym_RPAREN,
    STATE(428), 1,
      aux_sym_canonical_repeat1,
  [10528] = 3,
    ACTIONS(1187), 1,
      aux_sym_sequence_token1,
    STATE(112), 1,
      aux_sym_sequence_repeat1,
    STATE(117), 1,
      sym_sequence,
  [10538] = 3,
    ACTIONS(1189), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_sequence,
    STATE(367), 1,
      aux_sym_sequence_repeat1,
  [10548] = 3,
    ACTIONS(1131), 1,
      anon_sym_or,
    ACTIONS(1191), 1,
      anon_sym_RPAREN,
    STATE(428), 1,
      aux_sym_canonical_repeat1,
  [10558] = 3,
    ACTIONS(1193), 1,
      aux_sym_sequence_token1,
    STATE(389), 1,
      aux_sym_sequence_repeat1,
    STATE(502), 1,
      sym_sequence,
  [10568] = 3,
    ACTIONS(1189), 1,
      aux_sym_sequence_token1,
    STATE(35), 1,
      sym_sequence,
    STATE(367), 1,
      aux_sym_sequence_repeat1,
  [10578] = 3,
    ACTIONS(1195), 1,
      anon_sym_RPAREN,
    ACTIONS(1197), 1,
      anon_sym_or,
    STATE(428), 1,
      aux_sym_canonical_repeat1,
  [10588] = 3,
    ACTIONS(1131), 1,
      anon_sym_or,
    ACTIONS(1200), 1,
      anon_sym_RPAREN,
    STATE(425), 1,
      aux_sym_canonical_repeat1,
  [10598] = 2,
    ACTIONS(1202), 1,
      anon_sym_PIPE,
    ACTIONS(1195), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [10606] = 3,
    ACTIONS(1204), 1,
      anon_sym_RPAREN,
    ACTIONS(1206), 1,
      anon_sym_or,
    STATE(431), 1,
      aux_sym_reference_repeat1,
  [10616] = 3,
    ACTIONS(1209), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_sequence,
    STATE(108), 1,
      aux_sym_sequence_repeat1,
  [10626] = 3,
    ACTIONS(1209), 1,
      aux_sym_sequence_token1,
    STATE(35), 1,
      sym_sequence,
    STATE(108), 1,
      aux_sym_sequence_repeat1,
  [10636] = 3,
    ACTIONS(1211), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_sequence,
    STATE(162), 1,
      aux_sym_sequence_repeat1,
  [10646] = 3,
    ACTIONS(1193), 1,
      aux_sym_sequence_token1,
    STATE(389), 1,
      aux_sym_sequence_repeat1,
    STATE(429), 1,
      sym_sequence,
  [10656] = 3,
    ACTIONS(1179), 1,
      aux_sym_sequence_token1,
    STATE(365), 1,
      aux_sym_sequence_repeat1,
    STATE(430), 1,
      sym_sequence,
  [10666] = 3,
    ACTIONS(1213), 1,
      anon_sym_RPAREN,
    ACTIONS(1215), 1,
      anon_sym_or,
    STATE(431), 1,
      aux_sym_reference_repeat1,
  [10676] = 3,
    ACTIONS(1193), 1,
      aux_sym_sequence_token1,
    STATE(389), 1,
      aux_sym_sequence_repeat1,
    STATE(500), 1,
      sym_sequence,
  [10686] = 3,
    ACTIONS(1217), 1,
      anon_sym_SQUOTE,
    ACTIONS(1219), 1,
      aux_sym_unit_token1,
    STATE(439), 1,
      aux_sym_unit_repeat1,
  [10696] = 3,
    ACTIONS(1098), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1100), 1,
      anon_sym_DOT_DOT,
    STATE(74), 1,
      sym_cardinality,
  [10706] = 3,
    ACTIONS(1211), 1,
      aux_sym_sequence_token1,
    STATE(35), 1,
      sym_sequence,
    STATE(162), 1,
      aux_sym_sequence_repeat1,
  [10716] = 3,
    ACTIONS(1222), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_sequence,
    STATE(481), 1,
      aux_sym_sequence_repeat1,
  [10726] = 3,
    ACTIONS(1215), 1,
      anon_sym_or,
    ACTIONS(1224), 1,
      anon_sym_RPAREN,
    STATE(437), 1,
      aux_sym_reference_repeat1,
  [10736] = 3,
    ACTIONS(1226), 1,
      anon_sym_SQUOTE,
    ACTIONS(1228), 1,
      aux_sym_unit_token1,
    STATE(439), 1,
      aux_sym_unit_repeat1,
  [10746] = 3,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(1230), 1,
      anon_sym_POUND,
    STATE(146), 1,
      sym_string,
  [10756] = 3,
    ACTIONS(1232), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_sequence,
    STATE(123), 1,
      aux_sym_sequence_repeat1,
  [10766] = 3,
    ACTIONS(1232), 1,
      aux_sym_sequence_token1,
    STATE(35), 1,
      sym_sequence,
    STATE(123), 1,
      aux_sym_sequence_repeat1,
  [10776] = 3,
    ACTIONS(1234), 1,
      aux_sym_sequence_token1,
    STATE(65), 1,
      aux_sym_sequence_repeat1,
    STATE(90), 1,
      sym_sequence,
  [10786] = 3,
    ACTIONS(1222), 1,
      aux_sym_sequence_token1,
    STATE(35), 1,
      sym_sequence,
    STATE(481), 1,
      aux_sym_sequence_repeat1,
  [10796] = 3,
    ACTIONS(1236), 1,
      sym_number,
    STATE(275), 1,
      sym_quantity,
    STATE(276), 1,
      sym_ratio_part,
  [10806] = 3,
    ACTIONS(1193), 1,
      aux_sym_sequence_token1,
    STATE(389), 1,
      aux_sym_sequence_repeat1,
    STATE(443), 1,
      sym_sequence,
  [10816] = 3,
    ACTIONS(1238), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_sequence,
    STATE(118), 1,
      aux_sym_sequence_repeat1,
  [10826] = 3,
    ACTIONS(1240), 1,
      anon_sym_SQUOTE,
    ACTIONS(1242), 1,
      aux_sym_unit_token1,
    STATE(444), 1,
      aux_sym_unit_repeat1,
  [10836] = 3,
    ACTIONS(1238), 1,
      aux_sym_sequence_token1,
    STATE(35), 1,
      sym_sequence,
    STATE(118), 1,
      aux_sym_sequence_repeat1,
  [10846] = 3,
    ACTIONS(129), 1,
      anon_sym_POUND,
    ACTIONS(1244), 1,
      aux_sym_sequence_token1,
    STATE(455), 1,
      aux_sym_sequence_repeat1,
  [10856] = 3,
    ACTIONS(1247), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_sequence,
    STATE(153), 1,
      aux_sym_sequence_repeat1,
  [10866] = 3,
    ACTIONS(1247), 1,
      aux_sym_sequence_token1,
    STATE(35), 1,
      sym_sequence,
    STATE(153), 1,
      aux_sym_sequence_repeat1,
  [10876] = 3,
    ACTIONS(1234), 1,
      aux_sym_sequence_token1,
    STATE(65), 1,
      aux_sym_sequence_repeat1,
    STATE(88), 1,
      sym_sequence,
  [10886] = 3,
    ACTIONS(1181), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_sequence,
    STATE(230), 1,
      aux_sym_sequence_repeat1,
  [10896] = 3,
    ACTIONS(684), 1,
      anon_sym_from,
    ACTIONS(686), 1,
      anon_sym_and,
    STATE(308), 1,
      sym_vs_component_from,
  [10906] = 3,
    ACTIONS(123), 1,
      anon_sym_EQ,
    ACTIONS(1249), 1,
      aux_sym_sequence_token1,
    STATE(474), 1,
      aux_sym_sequence_repeat1,
  [10916] = 3,
    ACTIONS(1252), 1,
      aux_sym_sequence_token1,
    STATE(101), 1,
      aux_sym_sequence_repeat1,
    STATE(104), 1,
      sym_sequence,
  [10926] = 3,
    ACTIONS(1187), 1,
      aux_sym_sequence_token1,
    STATE(112), 1,
      aux_sym_sequence_repeat1,
    STATE(132), 1,
      sym_sequence,
  [10936] = 3,
    ACTIONS(1254), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_sequence,
    STATE(402), 1,
      aux_sym_sequence_repeat1,
  [10946] = 3,
    ACTIONS(1254), 1,
      aux_sym_sequence_token1,
    STATE(35), 1,
      sym_sequence,
    STATE(402), 1,
      aux_sym_sequence_repeat1,
  [10956] = 3,
    ACTIONS(1256), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_sequence,
    STATE(257), 1,
      aux_sym_sequence_repeat1,
  [10966] = 3,
    ACTIONS(1258), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_sequence,
    STATE(148), 1,
      aux_sym_sequence_repeat1,
  [10976] = 3,
    ACTIONS(1260), 1,
      aux_sym_sequence_token1,
    STATE(473), 1,
      aux_sym_sequence_repeat1,
    STATE(517), 1,
      sym_sequence,
  [10986] = 3,
    ACTIONS(1252), 1,
      aux_sym_sequence_token1,
    STATE(101), 1,
      aux_sym_sequence_repeat1,
    STATE(111), 1,
      sym_sequence,
  [10996] = 3,
    ACTIONS(1258), 1,
      aux_sym_sequence_token1,
    STATE(35), 1,
      sym_sequence,
    STATE(148), 1,
      aux_sym_sequence_repeat1,
  [11006] = 3,
    ACTIONS(49), 1,
      anon_sym_insert,
    ACTIONS(63), 1,
      anon_sym_CARET,
    STATE(530), 1,
      sym_caret_path,
  [11016] = 2,
    ACTIONS(1262), 1,
      anon_sym_POUND,
    ACTIONS(145), 2,
      anon_sym_insert,
      anon_sym_CARET,
  [11024] = 3,
    ACTIONS(123), 1,
      anon_sym_EQ,
    ACTIONS(1264), 1,
      aux_sym_sequence_token1,
    STATE(474), 1,
      aux_sym_sequence_repeat1,
  [11034] = 3,
    ACTIONS(129), 1,
      anon_sym_EQ,
    ACTIONS(1266), 1,
      aux_sym_sequence_token1,
    STATE(474), 1,
      aux_sym_sequence_repeat1,
  [11044] = 3,
    ACTIONS(799), 1,
      anon_sym_DQUOTE,
    ACTIONS(1269), 1,
      anon_sym_or,
    STATE(475), 1,
      aux_sym_only_rule_repeat1,
  [11054] = 3,
    ACTIONS(1098), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1100), 1,
      anon_sym_DOT_DOT,
    STATE(85), 1,
      sym_cardinality,
  [11064] = 3,
    ACTIONS(1272), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_sequence,
    STATE(177), 1,
      aux_sym_sequence_repeat1,
  [11074] = 3,
    ACTIONS(1260), 1,
      aux_sym_sequence_token1,
    STATE(473), 1,
      aux_sym_sequence_repeat1,
    STATE(528), 1,
      sym_sequence,
  [11084] = 3,
    ACTIONS(1274), 1,
      sym_number,
    STATE(275), 1,
      sym_quantity,
    STATE(276), 1,
      sym_ratio_part,
  [11094] = 3,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(1276), 1,
      aux_sym_sequence_token1,
    STATE(480), 1,
      aux_sym_sequence_repeat1,
  [11104] = 3,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(1279), 1,
      aux_sym_sequence_token1,
    STATE(480), 1,
      aux_sym_sequence_repeat1,
  [11114] = 3,
    ACTIONS(1256), 1,
      aux_sym_sequence_token1,
    STATE(35), 1,
      sym_sequence,
    STATE(257), 1,
      aux_sym_sequence_repeat1,
  [11124] = 3,
    ACTIONS(1272), 1,
      aux_sym_sequence_token1,
    STATE(35), 1,
      sym_sequence,
    STATE(177), 1,
      aux_sym_sequence_repeat1,
  [11134] = 3,
    ACTIONS(1281), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_sequence,
    STATE(92), 1,
      aux_sym_sequence_repeat1,
  [11144] = 3,
    ACTIONS(1281), 1,
      aux_sym_sequence_token1,
    STATE(35), 1,
      sym_sequence,
    STATE(92), 1,
      aux_sym_sequence_repeat1,
  [11154] = 3,
    ACTIONS(1283), 1,
      aux_sym_sequence_token1,
    STATE(35), 1,
      sym_sequence,
    STATE(133), 1,
      aux_sym_sequence_repeat1,
  [11164] = 3,
    ACTIONS(1283), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_sequence,
    STATE(133), 1,
      aux_sym_sequence_repeat1,
  [11174] = 2,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_string,
  [11181] = 2,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    STATE(188), 1,
      sym_string,
  [11188] = 2,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    STATE(190), 1,
      sym_string,
  [11195] = 2,
    ACTIONS(1108), 1,
      anon_sym_from,
    STATE(272), 1,
      sym_vs_component_from,
  [11202] = 2,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    STATE(130), 1,
      sym_string,
  [11209] = 2,
    ACTIONS(1285), 1,
      anon_sym_DQUOTE,
    STATE(98), 1,
      sym_string,
  [11216] = 2,
    ACTIONS(1287), 1,
      anon_sym_POUND,
    ACTIONS(1289), 1,
      aux_sym_sequence_token1,
  [11223] = 2,
    ACTIONS(1285), 1,
      anon_sym_DQUOTE,
    STATE(97), 1,
      sym_string,
  [11230] = 2,
    ACTIONS(1291), 1,
      anon_sym_valueset,
    STATE(279), 1,
      sym_vs_from_valueset,
  [11237] = 2,
    ACTIONS(1293), 1,
      anon_sym_system,
    STATE(279), 1,
      sym_vs_from_system,
  [11244] = 2,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    STATE(146), 1,
      sym_string,
  [11251] = 2,
    ACTIONS(1295), 1,
      anon_sym_valueset,
    STATE(279), 1,
      sym_vs_from_valueset,
  [11258] = 1,
    ACTIONS(1204), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [11263] = 2,
    ACTIONS(1297), 1,
      anon_sym_system,
    STATE(279), 1,
      sym_vs_from_system,
  [11270] = 1,
    ACTIONS(1299), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [11275] = 2,
    ACTIONS(136), 1,
      anon_sym_EQ,
    ACTIONS(138), 1,
      aux_sym_sequence_token1,
  [11282] = 1,
    ACTIONS(1301), 1,
      anon_sym_COLON,
  [11286] = 1,
    ACTIONS(1303), 1,
      ts_builtin_sym_end,
  [11290] = 1,
    ACTIONS(1305), 1,
      anon_sym_COLON,
  [11294] = 1,
    ACTIONS(1307), 1,
      anon_sym_COLON,
  [11298] = 1,
    ACTIONS(1309), 1,
      anon_sym_COLON,
  [11302] = 1,
    ACTIONS(1311), 1,
      anon_sym_COLON,
  [11306] = 1,
    ACTIONS(1313), 1,
      anon_sym_COLON,
  [11310] = 1,
    ACTIONS(1315), 1,
      anon_sym_COLON,
  [11314] = 1,
    ACTIONS(1317), 1,
      anon_sym_COLON,
  [11318] = 1,
    ACTIONS(1319), 1,
      anon_sym_COLON,
  [11322] = 1,
    ACTIONS(1321), 1,
      anon_sym_COLON,
  [11326] = 1,
    ACTIONS(1323), 1,
      anon_sym_DOT_DOT,
  [11330] = 1,
    ACTIONS(1325), 1,
      anon_sym_COLON,
  [11334] = 1,
    ACTIONS(1327), 1,
      anon_sym_EQ,
  [11338] = 1,
    ACTIONS(1329), 1,
      anon_sym_COLON,
  [11342] = 1,
    ACTIONS(1331), 1,
      anon_sym_COLON,
  [11346] = 1,
    ACTIONS(1333), 1,
      anon_sym_COLON,
  [11350] = 1,
    ACTIONS(1335), 1,
      anon_sym_SLASH2,
  [11354] = 1,
    ACTIONS(1337), 1,
      anon_sym_COLON,
  [11358] = 1,
    ACTIONS(1339), 1,
      anon_sym_COLON,
  [11362] = 1,
    ACTIONS(1341), 1,
      anon_sym_COLON,
  [11366] = 1,
    ACTIONS(1343), 1,
      anon_sym_EQ,
  [11370] = 1,
    ACTIONS(1345), 1,
      anon_sym_COLON,
  [11374] = 1,
    ACTIONS(1347), 1,
      anon_sym_RPAREN,
  [11378] = 1,
    ACTIONS(1349), 1,
      anon_sym_EQ,
  [11382] = 1,
    ACTIONS(1351), 1,
      anon_sym_DOT_DOT,
  [11386] = 1,
    ACTIONS(1353), 1,
      anon_sym_EQ,
  [11390] = 1,
    ACTIONS(1355), 1,
      anon_sym_EQ,
  [11394] = 1,
    ACTIONS(1357), 1,
      anon_sym_LPAREN,
  [11398] = 1,
    ACTIONS(1359), 1,
      anon_sym_LPAREN,
  [11402] = 1,
    ACTIONS(1361), 1,
      anon_sym_POUND,
  [11406] = 1,
    ACTIONS(1363), 1,
      sym_time,
  [11410] = 1,
    ACTIONS(1365), 1,
      anon_sym_exactly,
  [11414] = 1,
    ACTIONS(1367), 1,
      anon_sym_RPAREN,
  [11418] = 1,
    ACTIONS(1369), 1,
      anon_sym_RPAREN,
  [11422] = 1,
    ACTIONS(1371), 1,
      anon_sym_COLON,
  [11426] = 1,
    ACTIONS(1373), 1,
      anon_sym_POUND,
  [11430] = 1,
    ACTIONS(1375), 1,
      anon_sym_COLON,
  [11434] = 1,
    ACTIONS(1377), 1,
      anon_sym_COLON,
  [11438] = 1,
    ACTIONS(1379), 1,
      anon_sym_COLON,
  [11442] = 1,
    ACTIONS(1381), 1,
      anon_sym_COLON,
  [11446] = 1,
    ACTIONS(686), 1,
      anon_sym_and,
  [11450] = 1,
    ACTIONS(1383), 1,
      sym_regex_pattern,
  [11454] = 1,
    ACTIONS(1385), 1,
      anon_sym_COLON,
  [11458] = 1,
    ACTIONS(1387), 1,
      anon_sym_POUND,
  [11462] = 1,
    ACTIONS(1262), 1,
      anon_sym_POUND,
  [11466] = 1,
    ACTIONS(1389), 1,
      anon_sym_POUND,
  [11470] = 1,
    ACTIONS(1391), 1,
      anon_sym_POUND,
  [11474] = 1,
    ACTIONS(1393), 1,
      anon_sym_POUND,
  [11478] = 1,
    ACTIONS(1395), 1,
      anon_sym_POUND,
  [11482] = 1,
    ACTIONS(1397), 1,
      anon_sym_POUND,
  [11486] = 1,
    ACTIONS(1399), 1,
      anon_sym_POUND,
  [11490] = 1,
    ACTIONS(1401), 1,
      anon_sym_POUND,
  [11494] = 1,
    ACTIONS(890), 1,
      anon_sym_POUND,
  [11498] = 1,
    ACTIONS(850), 1,
      anon_sym_POUND,
  [11502] = 1,
    ACTIONS(1403), 1,
      anon_sym_POUND,
  [11506] = 1,
    ACTIONS(1405), 1,
      anon_sym_COLON,
  [11510] = 1,
    ACTIONS(1407), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 61,
  [SMALL_STATE(4)] = 122,
  [SMALL_STATE(5)] = 183,
  [SMALL_STATE(6)] = 244,
  [SMALL_STATE(7)] = 314,
  [SMALL_STATE(8)] = 370,
  [SMALL_STATE(9)] = 426,
  [SMALL_STATE(10)] = 482,
  [SMALL_STATE(11)] = 555,
  [SMALL_STATE(12)] = 628,
  [SMALL_STATE(13)] = 701,
  [SMALL_STATE(14)] = 774,
  [SMALL_STATE(15)] = 841,
  [SMALL_STATE(16)] = 885,
  [SMALL_STATE(17)] = 931,
  [SMALL_STATE(18)] = 975,
  [SMALL_STATE(19)] = 1021,
  [SMALL_STATE(20)] = 1063,
  [SMALL_STATE(21)] = 1105,
  [SMALL_STATE(22)] = 1142,
  [SMALL_STATE(23)] = 1200,
  [SMALL_STATE(24)] = 1240,
  [SMALL_STATE(25)] = 1280,
  [SMALL_STATE(26)] = 1318,
  [SMALL_STATE(27)] = 1371,
  [SMALL_STATE(28)] = 1406,
  [SMALL_STATE(29)] = 1441,
  [SMALL_STATE(30)] = 1476,
  [SMALL_STATE(31)] = 1529,
  [SMALL_STATE(32)] = 1563,
  [SMALL_STATE(33)] = 1634,
  [SMALL_STATE(34)] = 1685,
  [SMALL_STATE(35)] = 1724,
  [SMALL_STATE(36)] = 1757,
  [SMALL_STATE(37)] = 1796,
  [SMALL_STATE(38)] = 1829,
  [SMALL_STATE(39)] = 1880,
  [SMALL_STATE(40)] = 1919,
  [SMALL_STATE(41)] = 1958,
  [SMALL_STATE(42)] = 1997,
  [SMALL_STATE(43)] = 2047,
  [SMALL_STATE(44)] = 2092,
  [SMALL_STATE(45)] = 2137,
  [SMALL_STATE(46)] = 2182,
  [SMALL_STATE(47)] = 2227,
  [SMALL_STATE(48)] = 2257,
  [SMALL_STATE(49)] = 2309,
  [SMALL_STATE(50)] = 2343,
  [SMALL_STATE(51)] = 2377,
  [SMALL_STATE(52)] = 2411,
  [SMALL_STATE(53)] = 2441,
  [SMALL_STATE(54)] = 2493,
  [SMALL_STATE(55)] = 2535,
  [SMALL_STATE(56)] = 2569,
  [SMALL_STATE(57)] = 2596,
  [SMALL_STATE(58)] = 2643,
  [SMALL_STATE(59)] = 2672,
  [SMALL_STATE(60)] = 2712,
  [SMALL_STATE(61)] = 2750,
  [SMALL_STATE(62)] = 2790,
  [SMALL_STATE(63)] = 2819,
  [SMALL_STATE(64)] = 2870,
  [SMALL_STATE(65)] = 2909,
  [SMALL_STATE(66)] = 2940,
  [SMALL_STATE(67)] = 2969,
  [SMALL_STATE(68)] = 3006,
  [SMALL_STATE(69)] = 3043,
  [SMALL_STATE(70)] = 3076,
  [SMALL_STATE(71)] = 3105,
  [SMALL_STATE(72)] = 3142,
  [SMALL_STATE(73)] = 3173,
  [SMALL_STATE(74)] = 3202,
  [SMALL_STATE(75)] = 3231,
  [SMALL_STATE(76)] = 3260,
  [SMALL_STATE(77)] = 3289,
  [SMALL_STATE(78)] = 3315,
  [SMALL_STATE(79)] = 3353,
  [SMALL_STATE(80)] = 3381,
  [SMALL_STATE(81)] = 3409,
  [SMALL_STATE(82)] = 3437,
  [SMALL_STATE(83)] = 3465,
  [SMALL_STATE(84)] = 3501,
  [SMALL_STATE(85)] = 3549,
  [SMALL_STATE(86)] = 3577,
  [SMALL_STATE(87)] = 3611,
  [SMALL_STATE(88)] = 3639,
  [SMALL_STATE(89)] = 3665,
  [SMALL_STATE(90)] = 3697,
  [SMALL_STATE(91)] = 3723,
  [SMALL_STATE(92)] = 3757,
  [SMALL_STATE(93)] = 3784,
  [SMALL_STATE(94)] = 3809,
  [SMALL_STATE(95)] = 3838,
  [SMALL_STATE(96)] = 3867,
  [SMALL_STATE(97)] = 3890,
  [SMALL_STATE(98)] = 3927,
  [SMALL_STATE(99)] = 3964,
  [SMALL_STATE(100)] = 3987,
  [SMALL_STATE(101)] = 4010,
  [SMALL_STATE(102)] = 4039,
  [SMALL_STATE(103)] = 4066,
  [SMALL_STATE(104)] = 4101,
  [SMALL_STATE(105)] = 4125,
  [SMALL_STATE(106)] = 4153,
  [SMALL_STATE(107)] = 4179,
  [SMALL_STATE(108)] = 4205,
  [SMALL_STATE(109)] = 4233,
  [SMALL_STATE(110)] = 4261,
  [SMALL_STATE(111)] = 4283,
  [SMALL_STATE(112)] = 4307,
  [SMALL_STATE(113)] = 4335,
  [SMALL_STATE(114)] = 4356,
  [SMALL_STATE(115)] = 4383,
  [SMALL_STATE(116)] = 4408,
  [SMALL_STATE(117)] = 4447,
  [SMALL_STATE(118)] = 4470,
  [SMALL_STATE(119)] = 4495,
  [SMALL_STATE(120)] = 4526,
  [SMALL_STATE(121)] = 4565,
  [SMALL_STATE(122)] = 4592,
  [SMALL_STATE(123)] = 4619,
  [SMALL_STATE(124)] = 4644,
  [SMALL_STATE(125)] = 4669,
  [SMALL_STATE(126)] = 4712,
  [SMALL_STATE(127)] = 4737,
  [SMALL_STATE(128)] = 4764,
  [SMALL_STATE(129)] = 4803,
  [SMALL_STATE(130)] = 4834,
  [SMALL_STATE(131)] = 4855,
  [SMALL_STATE(132)] = 4882,
  [SMALL_STATE(133)] = 4905,
  [SMALL_STATE(134)] = 4930,
  [SMALL_STATE(135)] = 4957,
  [SMALL_STATE(136)] = 4984,
  [SMALL_STATE(137)] = 5009,
  [SMALL_STATE(138)] = 5036,
  [SMALL_STATE(139)] = 5063,
  [SMALL_STATE(140)] = 5088,
  [SMALL_STATE(141)] = 5113,
  [SMALL_STATE(142)] = 5134,
  [SMALL_STATE(143)] = 5161,
  [SMALL_STATE(144)] = 5188,
  [SMALL_STATE(145)] = 5231,
  [SMALL_STATE(146)] = 5258,
  [SMALL_STATE(147)] = 5284,
  [SMALL_STATE(148)] = 5308,
  [SMALL_STATE(149)] = 5332,
  [SMALL_STATE(150)] = 5356,
  [SMALL_STATE(151)] = 5380,
  [SMALL_STATE(152)] = 5406,
  [SMALL_STATE(153)] = 5430,
  [SMALL_STATE(154)] = 5454,
  [SMALL_STATE(155)] = 5478,
  [SMALL_STATE(156)] = 5502,
  [SMALL_STATE(157)] = 5550,
  [SMALL_STATE(158)] = 5576,
  [SMALL_STATE(159)] = 5596,
  [SMALL_STATE(160)] = 5618,
  [SMALL_STATE(161)] = 5642,
  [SMALL_STATE(162)] = 5666,
  [SMALL_STATE(163)] = 5690,
  [SMALL_STATE(164)] = 5714,
  [SMALL_STATE(165)] = 5738,
  [SMALL_STATE(166)] = 5764,
  [SMALL_STATE(167)] = 5788,
  [SMALL_STATE(168)] = 5814,
  [SMALL_STATE(169)] = 5836,
  [SMALL_STATE(170)] = 5860,
  [SMALL_STATE(171)] = 5880,
  [SMALL_STATE(172)] = 5902,
  [SMALL_STATE(173)] = 5921,
  [SMALL_STATE(174)] = 5944,
  [SMALL_STATE(175)] = 5967,
  [SMALL_STATE(176)] = 5992,
  [SMALL_STATE(177)] = 6011,
  [SMALL_STATE(178)] = 6034,
  [SMALL_STATE(179)] = 6057,
  [SMALL_STATE(180)] = 6076,
  [SMALL_STATE(181)] = 6099,
  [SMALL_STATE(182)] = 6122,
  [SMALL_STATE(183)] = 6145,
  [SMALL_STATE(184)] = 6166,
  [SMALL_STATE(185)] = 6187,
  [SMALL_STATE(186)] = 6212,
  [SMALL_STATE(187)] = 6233,
  [SMALL_STATE(188)] = 6256,
  [SMALL_STATE(189)] = 6275,
  [SMALL_STATE(190)] = 6294,
  [SMALL_STATE(191)] = 6313,
  [SMALL_STATE(192)] = 6338,
  [SMALL_STATE(193)] = 6357,
  [SMALL_STATE(194)] = 6380,
  [SMALL_STATE(195)] = 6401,
  [SMALL_STATE(196)] = 6420,
  [SMALL_STATE(197)] = 6439,
  [SMALL_STATE(198)] = 6462,
  [SMALL_STATE(199)] = 6481,
  [SMALL_STATE(200)] = 6500,
  [SMALL_STATE(201)] = 6519,
  [SMALL_STATE(202)] = 6542,
  [SMALL_STATE(203)] = 6565,
  [SMALL_STATE(204)] = 6584,
  [SMALL_STATE(205)] = 6603,
  [SMALL_STATE(206)] = 6626,
  [SMALL_STATE(207)] = 6649,
  [SMALL_STATE(208)] = 6672,
  [SMALL_STATE(209)] = 6691,
  [SMALL_STATE(210)] = 6714,
  [SMALL_STATE(211)] = 6736,
  [SMALL_STATE(212)] = 6758,
  [SMALL_STATE(213)] = 6780,
  [SMALL_STATE(214)] = 6802,
  [SMALL_STATE(215)] = 6824,
  [SMALL_STATE(216)] = 6842,
  [SMALL_STATE(217)] = 6862,
  [SMALL_STATE(218)] = 6884,
  [SMALL_STATE(219)] = 6906,
  [SMALL_STATE(220)] = 6928,
  [SMALL_STATE(221)] = 6952,
  [SMALL_STATE(222)] = 6974,
  [SMALL_STATE(223)] = 6992,
  [SMALL_STATE(224)] = 7014,
  [SMALL_STATE(225)] = 7036,
  [SMALL_STATE(226)] = 7058,
  [SMALL_STATE(227)] = 7078,
  [SMALL_STATE(228)] = 7100,
  [SMALL_STATE(229)] = 7118,
  [SMALL_STATE(230)] = 7136,
  [SMALL_STATE(231)] = 7158,
  [SMALL_STATE(232)] = 7178,
  [SMALL_STATE(233)] = 7200,
  [SMALL_STATE(234)] = 7222,
  [SMALL_STATE(235)] = 7242,
  [SMALL_STATE(236)] = 7264,
  [SMALL_STATE(237)] = 7284,
  [SMALL_STATE(238)] = 7304,
  [SMALL_STATE(239)] = 7326,
  [SMALL_STATE(240)] = 7348,
  [SMALL_STATE(241)] = 7368,
  [SMALL_STATE(242)] = 7390,
  [SMALL_STATE(243)] = 7410,
  [SMALL_STATE(244)] = 7432,
  [SMALL_STATE(245)] = 7464,
  [SMALL_STATE(246)] = 7486,
  [SMALL_STATE(247)] = 7504,
  [SMALL_STATE(248)] = 7522,
  [SMALL_STATE(249)] = 7544,
  [SMALL_STATE(250)] = 7566,
  [SMALL_STATE(251)] = 7586,
  [SMALL_STATE(252)] = 7603,
  [SMALL_STATE(253)] = 7622,
  [SMALL_STATE(254)] = 7641,
  [SMALL_STATE(255)] = 7660,
  [SMALL_STATE(256)] = 7679,
  [SMALL_STATE(257)] = 7696,
  [SMALL_STATE(258)] = 7717,
  [SMALL_STATE(259)] = 7738,
  [SMALL_STATE(260)] = 7755,
  [SMALL_STATE(261)] = 7772,
  [SMALL_STATE(262)] = 7791,
  [SMALL_STATE(263)] = 7808,
  [SMALL_STATE(264)] = 7827,
  [SMALL_STATE(265)] = 7846,
  [SMALL_STATE(266)] = 7865,
  [SMALL_STATE(267)] = 7884,
  [SMALL_STATE(268)] = 7901,
  [SMALL_STATE(269)] = 7930,
  [SMALL_STATE(270)] = 7949,
  [SMALL_STATE(271)] = 7978,
  [SMALL_STATE(272)] = 7997,
  [SMALL_STATE(273)] = 8016,
  [SMALL_STATE(274)] = 8033,
  [SMALL_STATE(275)] = 8050,
  [SMALL_STATE(276)] = 8067,
  [SMALL_STATE(277)] = 8084,
  [SMALL_STATE(278)] = 8113,
  [SMALL_STATE(279)] = 8130,
  [SMALL_STATE(280)] = 8147,
  [SMALL_STATE(281)] = 8163,
  [SMALL_STATE(282)] = 8189,
  [SMALL_STATE(283)] = 8205,
  [SMALL_STATE(284)] = 8221,
  [SMALL_STATE(285)] = 8247,
  [SMALL_STATE(286)] = 8265,
  [SMALL_STATE(287)] = 8281,
  [SMALL_STATE(288)] = 8307,
  [SMALL_STATE(289)] = 8333,
  [SMALL_STATE(290)] = 8359,
  [SMALL_STATE(291)] = 8385,
  [SMALL_STATE(292)] = 8401,
  [SMALL_STATE(293)] = 8417,
  [SMALL_STATE(294)] = 8433,
  [SMALL_STATE(295)] = 8449,
  [SMALL_STATE(296)] = 8475,
  [SMALL_STATE(297)] = 8491,
  [SMALL_STATE(298)] = 8517,
  [SMALL_STATE(299)] = 8533,
  [SMALL_STATE(300)] = 8559,
  [SMALL_STATE(301)] = 8575,
  [SMALL_STATE(302)] = 8591,
  [SMALL_STATE(303)] = 8607,
  [SMALL_STATE(304)] = 8623,
  [SMALL_STATE(305)] = 8649,
  [SMALL_STATE(306)] = 8665,
  [SMALL_STATE(307)] = 8681,
  [SMALL_STATE(308)] = 8697,
  [SMALL_STATE(309)] = 8713,
  [SMALL_STATE(310)] = 8729,
  [SMALL_STATE(311)] = 8745,
  [SMALL_STATE(312)] = 8771,
  [SMALL_STATE(313)] = 8797,
  [SMALL_STATE(314)] = 8813,
  [SMALL_STATE(315)] = 8829,
  [SMALL_STATE(316)] = 8845,
  [SMALL_STATE(317)] = 8871,
  [SMALL_STATE(318)] = 8887,
  [SMALL_STATE(319)] = 8913,
  [SMALL_STATE(320)] = 8939,
  [SMALL_STATE(321)] = 8957,
  [SMALL_STATE(322)] = 8983,
  [SMALL_STATE(323)] = 9009,
  [SMALL_STATE(324)] = 9035,
  [SMALL_STATE(325)] = 9051,
  [SMALL_STATE(326)] = 9077,
  [SMALL_STATE(327)] = 9093,
  [SMALL_STATE(328)] = 9119,
  [SMALL_STATE(329)] = 9145,
  [SMALL_STATE(330)] = 9171,
  [SMALL_STATE(331)] = 9197,
  [SMALL_STATE(332)] = 9213,
  [SMALL_STATE(333)] = 9239,
  [SMALL_STATE(334)] = 9255,
  [SMALL_STATE(335)] = 9271,
  [SMALL_STATE(336)] = 9287,
  [SMALL_STATE(337)] = 9303,
  [SMALL_STATE(338)] = 9329,
  [SMALL_STATE(339)] = 9355,
  [SMALL_STATE(340)] = 9381,
  [SMALL_STATE(341)] = 9397,
  [SMALL_STATE(342)] = 9413,
  [SMALL_STATE(343)] = 9429,
  [SMALL_STATE(344)] = 9455,
  [SMALL_STATE(345)] = 9470,
  [SMALL_STATE(346)] = 9499,
  [SMALL_STATE(347)] = 9522,
  [SMALL_STATE(348)] = 9545,
  [SMALL_STATE(349)] = 9564,
  [SMALL_STATE(350)] = 9580,
  [SMALL_STATE(351)] = 9596,
  [SMALL_STATE(352)] = 9611,
  [SMALL_STATE(353)] = 9633,
  [SMALL_STATE(354)] = 9643,
  [SMALL_STATE(355)] = 9665,
  [SMALL_STATE(356)] = 9687,
  [SMALL_STATE(357)] = 9709,
  [SMALL_STATE(358)] = 9728,
  [SMALL_STATE(359)] = 9741,
  [SMALL_STATE(360)] = 9754,
  [SMALL_STATE(361)] = 9767,
  [SMALL_STATE(362)] = 9780,
  [SMALL_STATE(363)] = 9796,
  [SMALL_STATE(364)] = 9812,
  [SMALL_STATE(365)] = 9828,
  [SMALL_STATE(366)] = 9840,
  [SMALL_STATE(367)] = 9854,
  [SMALL_STATE(368)] = 9866,
  [SMALL_STATE(369)] = 9880,
  [SMALL_STATE(370)] = 9896,
  [SMALL_STATE(371)] = 9912,
  [SMALL_STATE(372)] = 9924,
  [SMALL_STATE(373)] = 9936,
  [SMALL_STATE(374)] = 9952,
  [SMALL_STATE(375)] = 9964,
  [SMALL_STATE(376)] = 9976,
  [SMALL_STATE(377)] = 9992,
  [SMALL_STATE(378)] = 10005,
  [SMALL_STATE(379)] = 10016,
  [SMALL_STATE(380)] = 10029,
  [SMALL_STATE(381)] = 10042,
  [SMALL_STATE(382)] = 10055,
  [SMALL_STATE(383)] = 10066,
  [SMALL_STATE(384)] = 10077,
  [SMALL_STATE(385)] = 10088,
  [SMALL_STATE(386)] = 10101,
  [SMALL_STATE(387)] = 10114,
  [SMALL_STATE(388)] = 10127,
  [SMALL_STATE(389)] = 10138,
  [SMALL_STATE(390)] = 10149,
  [SMALL_STATE(391)] = 10160,
  [SMALL_STATE(392)] = 10173,
  [SMALL_STATE(393)] = 10186,
  [SMALL_STATE(394)] = 10199,
  [SMALL_STATE(395)] = 10212,
  [SMALL_STATE(396)] = 10223,
  [SMALL_STATE(397)] = 10236,
  [SMALL_STATE(398)] = 10247,
  [SMALL_STATE(399)] = 10258,
  [SMALL_STATE(400)] = 10271,
  [SMALL_STATE(401)] = 10282,
  [SMALL_STATE(402)] = 10293,
  [SMALL_STATE(403)] = 10304,
  [SMALL_STATE(404)] = 10317,
  [SMALL_STATE(405)] = 10330,
  [SMALL_STATE(406)] = 10343,
  [SMALL_STATE(407)] = 10354,
  [SMALL_STATE(408)] = 10365,
  [SMALL_STATE(409)] = 10376,
  [SMALL_STATE(410)] = 10387,
  [SMALL_STATE(411)] = 10398,
  [SMALL_STATE(412)] = 10411,
  [SMALL_STATE(413)] = 10418,
  [SMALL_STATE(414)] = 10431,
  [SMALL_STATE(415)] = 10442,
  [SMALL_STATE(416)] = 10455,
  [SMALL_STATE(417)] = 10466,
  [SMALL_STATE(418)] = 10477,
  [SMALL_STATE(419)] = 10488,
  [SMALL_STATE(420)] = 10498,
  [SMALL_STATE(421)] = 10508,
  [SMALL_STATE(422)] = 10518,
  [SMALL_STATE(423)] = 10528,
  [SMALL_STATE(424)] = 10538,
  [SMALL_STATE(425)] = 10548,
  [SMALL_STATE(426)] = 10558,
  [SMALL_STATE(427)] = 10568,
  [SMALL_STATE(428)] = 10578,
  [SMALL_STATE(429)] = 10588,
  [SMALL_STATE(430)] = 10598,
  [SMALL_STATE(431)] = 10606,
  [SMALL_STATE(432)] = 10616,
  [SMALL_STATE(433)] = 10626,
  [SMALL_STATE(434)] = 10636,
  [SMALL_STATE(435)] = 10646,
  [SMALL_STATE(436)] = 10656,
  [SMALL_STATE(437)] = 10666,
  [SMALL_STATE(438)] = 10676,
  [SMALL_STATE(439)] = 10686,
  [SMALL_STATE(440)] = 10696,
  [SMALL_STATE(441)] = 10706,
  [SMALL_STATE(442)] = 10716,
  [SMALL_STATE(443)] = 10726,
  [SMALL_STATE(444)] = 10736,
  [SMALL_STATE(445)] = 10746,
  [SMALL_STATE(446)] = 10756,
  [SMALL_STATE(447)] = 10766,
  [SMALL_STATE(448)] = 10776,
  [SMALL_STATE(449)] = 10786,
  [SMALL_STATE(450)] = 10796,
  [SMALL_STATE(451)] = 10806,
  [SMALL_STATE(452)] = 10816,
  [SMALL_STATE(453)] = 10826,
  [SMALL_STATE(454)] = 10836,
  [SMALL_STATE(455)] = 10846,
  [SMALL_STATE(456)] = 10856,
  [SMALL_STATE(457)] = 10866,
  [SMALL_STATE(458)] = 10876,
  [SMALL_STATE(459)] = 10886,
  [SMALL_STATE(460)] = 10896,
  [SMALL_STATE(461)] = 10906,
  [SMALL_STATE(462)] = 10916,
  [SMALL_STATE(463)] = 10926,
  [SMALL_STATE(464)] = 10936,
  [SMALL_STATE(465)] = 10946,
  [SMALL_STATE(466)] = 10956,
  [SMALL_STATE(467)] = 10966,
  [SMALL_STATE(468)] = 10976,
  [SMALL_STATE(469)] = 10986,
  [SMALL_STATE(470)] = 10996,
  [SMALL_STATE(471)] = 11006,
  [SMALL_STATE(472)] = 11016,
  [SMALL_STATE(473)] = 11024,
  [SMALL_STATE(474)] = 11034,
  [SMALL_STATE(475)] = 11044,
  [SMALL_STATE(476)] = 11054,
  [SMALL_STATE(477)] = 11064,
  [SMALL_STATE(478)] = 11074,
  [SMALL_STATE(479)] = 11084,
  [SMALL_STATE(480)] = 11094,
  [SMALL_STATE(481)] = 11104,
  [SMALL_STATE(482)] = 11114,
  [SMALL_STATE(483)] = 11124,
  [SMALL_STATE(484)] = 11134,
  [SMALL_STATE(485)] = 11144,
  [SMALL_STATE(486)] = 11154,
  [SMALL_STATE(487)] = 11164,
  [SMALL_STATE(488)] = 11174,
  [SMALL_STATE(489)] = 11181,
  [SMALL_STATE(490)] = 11188,
  [SMALL_STATE(491)] = 11195,
  [SMALL_STATE(492)] = 11202,
  [SMALL_STATE(493)] = 11209,
  [SMALL_STATE(494)] = 11216,
  [SMALL_STATE(495)] = 11223,
  [SMALL_STATE(496)] = 11230,
  [SMALL_STATE(497)] = 11237,
  [SMALL_STATE(498)] = 11244,
  [SMALL_STATE(499)] = 11251,
  [SMALL_STATE(500)] = 11258,
  [SMALL_STATE(501)] = 11263,
  [SMALL_STATE(502)] = 11270,
  [SMALL_STATE(503)] = 11275,
  [SMALL_STATE(504)] = 11282,
  [SMALL_STATE(505)] = 11286,
  [SMALL_STATE(506)] = 11290,
  [SMALL_STATE(507)] = 11294,
  [SMALL_STATE(508)] = 11298,
  [SMALL_STATE(509)] = 11302,
  [SMALL_STATE(510)] = 11306,
  [SMALL_STATE(511)] = 11310,
  [SMALL_STATE(512)] = 11314,
  [SMALL_STATE(513)] = 11318,
  [SMALL_STATE(514)] = 11322,
  [SMALL_STATE(515)] = 11326,
  [SMALL_STATE(516)] = 11330,
  [SMALL_STATE(517)] = 11334,
  [SMALL_STATE(518)] = 11338,
  [SMALL_STATE(519)] = 11342,
  [SMALL_STATE(520)] = 11346,
  [SMALL_STATE(521)] = 11350,
  [SMALL_STATE(522)] = 11354,
  [SMALL_STATE(523)] = 11358,
  [SMALL_STATE(524)] = 11362,
  [SMALL_STATE(525)] = 11366,
  [SMALL_STATE(526)] = 11370,
  [SMALL_STATE(527)] = 11374,
  [SMALL_STATE(528)] = 11378,
  [SMALL_STATE(529)] = 11382,
  [SMALL_STATE(530)] = 11386,
  [SMALL_STATE(531)] = 11390,
  [SMALL_STATE(532)] = 11394,
  [SMALL_STATE(533)] = 11398,
  [SMALL_STATE(534)] = 11402,
  [SMALL_STATE(535)] = 11406,
  [SMALL_STATE(536)] = 11410,
  [SMALL_STATE(537)] = 11414,
  [SMALL_STATE(538)] = 11418,
  [SMALL_STATE(539)] = 11422,
  [SMALL_STATE(540)] = 11426,
  [SMALL_STATE(541)] = 11430,
  [SMALL_STATE(542)] = 11434,
  [SMALL_STATE(543)] = 11438,
  [SMALL_STATE(544)] = 11442,
  [SMALL_STATE(545)] = 11446,
  [SMALL_STATE(546)] = 11450,
  [SMALL_STATE(547)] = 11454,
  [SMALL_STATE(548)] = 11458,
  [SMALL_STATE(549)] = 11462,
  [SMALL_STATE(550)] = 11466,
  [SMALL_STATE(551)] = 11470,
  [SMALL_STATE(552)] = 11474,
  [SMALL_STATE(553)] = 11478,
  [SMALL_STATE(554)] = 11482,
  [SMALL_STATE(555)] = 11486,
  [SMALL_STATE(556)] = 11490,
  [SMALL_STATE(557)] = 11494,
  [SMALL_STATE(558)] = 11498,
  [SMALL_STATE(559)] = 11502,
  [SMALL_STATE(560)] = 11506,
  [SMALL_STATE(561)] = 11510,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 4),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_rule, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 4),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 4),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 4, .production_id = 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_rule_set, 4),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_set_repeat1, 2),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_set_repeat1, 2), SHIFT_REPEAT(32),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_rule_set_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_rule_set_repeat1, 2), SHIFT_REPEAT(32),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(20),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(24),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_name, 1), REDUCE(sym_path, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 2, .production_id = 4),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 2, .production_id = 4),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3, .production_id = 5),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3, .production_id = 5),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 4),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance, 4),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 5),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_logical_repeat1, 2),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_logical_repeat1, 2), SHIFT_REPEAT(144),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_definition, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 4),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 4),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat2, 2),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat2, 2), SHIFT_REPEAT(125),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 5),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 5),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(526),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(561),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(560),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(544),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(542),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(541),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(512),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(511),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(508),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(507),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(506),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(513),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(547),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(523),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(524),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(519),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concept, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instance_repeat1, 2),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(513),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(510),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(519),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(522),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(513),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(509),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(520),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(519),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_code_string, 1), REDUCE(aux_sym_code_insert_rule_repeat1, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_insert_rule_repeat1, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_string, 1),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 1),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 1), SHIFT(400),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_name, 1), REDUCE(sym_value, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ratio_part, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(72),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2), SHIFT_REPEAT(96),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2), SHIFT_REPEAT(423),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2), SHIFT_REPEAT(421),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invariant, 4),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 2),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(513),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(518),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(516),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(514),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(72),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 1),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 5),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title, 3),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_rule, 3),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_rule, 4),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(81),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_rule, 4),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_rule, 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(513),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(539),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(519),
  [480] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(81),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(513),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(539),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(519),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_operator, 1),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vs_filter_operator, 1),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(94),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 1),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 4),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 3),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 3),
  [515] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(94),
  [518] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(102),
  [521] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(105),
  [524] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(106),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [531] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(109),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [536] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(105),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_metadata, 1),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 5),
  [543] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(115),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 5),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 5),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instance_repeat2, 2),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat2, 2), SHIFT_REPEAT(357),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [561] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(124),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_valueset_repeat2, 2),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat2, 2), SHIFT_REPEAT(156),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [579] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(136),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 5),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat2, 2),
  [586] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat2, 2), SHIFT_REPEAT(354),
  [589] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(139),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 5),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_repeat2, 2),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat2, 2), SHIFT_REPEAT(355),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_cre_element_rule, 6),
  [605] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(147),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [612] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(150),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concept, 3),
  [617] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(152),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [622] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(154),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 7),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parent, 3),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_metadata, 1),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance_metadata, 1),
  [643] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(160),
  [646] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(161),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 6),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 5),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usage, 3),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usage, 3),
  [665] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(169),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sd_metadata, 1),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_of, 3),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance_of, 3),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 4),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_valueset, 3),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 1),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 3),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [692] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(178),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_valueset, 2),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2),
  [703] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2), SHIFT_REPEAT(338),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [710] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(187),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_severity, 3),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath, 3),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invariant_metadata, 1),
  [725] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(193),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_metadata, 1),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_string, 2),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 7),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cs_metadata, 1),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 4),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [742] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(202),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 6),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 5),
  [749] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(205),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [754] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(207),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 5),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vs_filter_list_repeat1, 2),
  [763] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vs_filter_list_repeat1, 2), SHIFT_REPEAT(268),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_rule, 5),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 5),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_only_rule, 5),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_system, 2),
  [780] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(217),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 3),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_list, 1),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2),
  [791] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2), SHIFT_REPEAT(285),
  [794] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2), SHIFT_REPEAT(287),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 4),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2),
  [801] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2), SHIFT_REPEAT(120),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_list, 2),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 1),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contains_rule_repeat1, 2),
  [812] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contains_rule_repeat1, 2), SHIFT_REPEAT(277),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 3),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag, 1),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component_from, 2),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_rule, 4),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_rule, 4),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_type, 1),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_type, 1, .production_id = 7),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_only_rule, 4),
  [847] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(249),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 3),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_insert_rule, 3, .production_id = 1),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 3),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [864] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(258),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_definition, 3),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_value, 1),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_insert_rule, 4, .production_id = 6),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_rule, 3, .production_id = 1),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_rule, 4, .production_id = 6),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_value_rule, 4),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [885] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_code_insert_rule, 3, .production_id = 1), REDUCE(sym_insert_rule, 3, .production_id = 1),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_component, 2),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ratio, 3),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component_from, 4),
  [902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sd_rule, 1),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_value_rule, 4),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_rule, 1),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_rule, 1),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_rule_set_reference, 4),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cs_rule, 1),
  [924] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_code_insert_rule, 3), REDUCE(sym_insert_rule, 3),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_rule, 5),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_insert_rule, 3),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_entity_rule, 1),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_value_rule, 5),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 2),
  [941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component, 3),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_component, 4),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lr_rule, 1),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 3),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_caret_value_rule, 5),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 8),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set_rule, 1),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_rule_set_repeat1, 1, .production_id = 2),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 5, .production_id = 3),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_rule, 3),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_cre_element_rule, 7),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 6),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_insert_rule, 4),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_rule, 4),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concept, 4),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component, 2),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strength, 3),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_value_rule, 7),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [991] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(350),
  [994] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_rule_repeat1, 2), SHIFT_REPEAT(363),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_rule_repeat1, 2),
  [999] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2), SHIFT_REPEAT(465),
  [1002] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2), SHIFT_REPEAT(421),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [1015] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(358),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [1020] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [1022] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(361),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1027] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [1033] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [1035] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(366),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [1040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [1048] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(371),
  [1051] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(372),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [1058] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(375),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1063] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1067] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [1073] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1077] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1081] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1085] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(387),
  [1088] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [1090] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(388),
  [1093] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [1095] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(390),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(398),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_rule_set_params, 1),
  [1115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(406),
  [1138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [1144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [1146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(410),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_rule_set_params_repeat1, 2),
  [1157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_param_rule_set_params_repeat1, 2), SHIFT_REPEAT(413),
  [1160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_rule_set_params_repeat1, 2), SHIFT_REPEAT(413),
  [1163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(417),
  [1176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(418),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 2),
  [1197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 2), SHIFT_REPEAT(436),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reference_repeat1, 2),
  [1206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reference_repeat1, 2), SHIFT_REPEAT(438),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2),
  [1219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(439),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(455),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(474),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [1266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(474),
  [1269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2), SHIFT_REPEAT(128),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(480),
  [1279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2),
  [1289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 4),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1303] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_path, 2),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
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
