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
#define STATE_COUNT 559
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 193
#define ALIAS_COUNT 6
#define TOKEN_COUNT 77
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
  sym_doc = 77,
  sym_alias = 78,
  sym_profile = 79,
  sym_extension = 80,
  sym_invariant = 81,
  sym_instance = 82,
  sym_valueset = 83,
  sym_codesystem = 84,
  sym_mapping = 85,
  sym_logical = 86,
  sym_resource = 87,
  sym_rule_set = 88,
  sym_param_rule_set = 89,
  sym_sd_metadata = 90,
  sym_instance_metadata = 91,
  sym_invariant_metadata = 92,
  sym_vs_metadata = 93,
  sym_cs_metadata = 94,
  sym_mapping_metadata = 95,
  sym_description = 96,
  sym_expression = 97,
  sym_id = 98,
  sym_instance_of = 99,
  sym_parent = 100,
  sym_severity = 101,
  sym_source = 102,
  sym_target = 103,
  sym_title = 104,
  sym_usage = 105,
  sym_xpath = 106,
  sym_rule_set_rule = 107,
  sym_sd_rule = 108,
  sym_lr_rule = 109,
  sym_vs_rule = 110,
  sym_cs_rule = 111,
  sym_instance_rule = 112,
  sym_mapping_entity_rule = 113,
  sym_cardinality_rule = 114,
  sym_add_cre_element_rule = 115,
  sym_code_insert_rule = 116,
  sym_insert_rule = 117,
  sym_valueset_rule = 118,
  sym_fixed_value_rule = 119,
  sym_contains_rule = 120,
  sym_caret_value_rule = 121,
  sym_code_caret_value_rule = 122,
  sym_obeys_rule = 123,
  sym_path_rule = 124,
  sym_flag_rule = 125,
  sym_only_rule = 126,
  sym_mapping_rule = 127,
  sym_add_element_rule = 128,
  sym_vs_component = 129,
  sym_vs_concept_component = 130,
  sym_vs_filter_component = 131,
  sym_vs_component_from = 132,
  sym_vs_from_system = 133,
  sym_vs_from_valueset = 134,
  sym_vs_filter_list = 135,
  sym_vs_filter_definition = 136,
  sym_vs_filter_operator = 137,
  sym_vs_filter_value = 138,
  sym_code = 139,
  sym_concept = 140,
  sym_code_string = 141,
  sym_sequence = 142,
  sym_caret_path = 143,
  sym_name = 144,
  sym_cardinality = 145,
  sym_string = 146,
  sym_multiline_string = 147,
  sym_datetime = 148,
  sym_unit = 149,
  sym_quantity = 150,
  sym_ratio_part = 151,
  sym_ratio = 152,
  sym_bool = 153,
  sym_path = 154,
  sym_strength = 155,
  sym_reference = 156,
  sym_canonical = 157,
  sym_value = 158,
  sym_item = 159,
  sym_flag = 160,
  sym_target_type = 161,
  sym_param_rule_set_params = 162,
  sym_param_rule_set_reference = 163,
  aux_sym_doc_repeat1 = 164,
  aux_sym_profile_repeat1 = 165,
  aux_sym_profile_repeat2 = 166,
  aux_sym_invariant_repeat1 = 167,
  aux_sym_instance_repeat1 = 168,
  aux_sym_instance_repeat2 = 169,
  aux_sym_valueset_repeat1 = 170,
  aux_sym_valueset_repeat2 = 171,
  aux_sym_codesystem_repeat1 = 172,
  aux_sym_codesystem_repeat2 = 173,
  aux_sym_mapping_repeat1 = 174,
  aux_sym_mapping_repeat2 = 175,
  aux_sym_logical_repeat1 = 176,
  aux_sym_rule_set_repeat1 = 177,
  aux_sym_param_rule_set_repeat1 = 178,
  aux_sym_cardinality_rule_repeat1 = 179,
  aux_sym_code_insert_rule_repeat1 = 180,
  aux_sym_contains_rule_repeat1 = 181,
  aux_sym_obeys_rule_repeat1 = 182,
  aux_sym_flag_rule_repeat1 = 183,
  aux_sym_only_rule_repeat1 = 184,
  aux_sym_vs_concept_component_repeat1 = 185,
  aux_sym_vs_filter_list_repeat1 = 186,
  aux_sym_sequence_repeat1 = 187,
  aux_sym_string_repeat1 = 188,
  aux_sym_unit_repeat1 = 189,
  aux_sym_reference_repeat1 = 190,
  aux_sym_canonical_repeat1 = 191,
  aux_sym_param_rule_set_params_repeat1 = 192,
  alias_sym_alias_name = 193,
  alias_sym_code_system = 194,
  alias_sym_code_value = 195,
  alias_sym_param_rule_set_content = 196,
  alias_sym_reference_type = 197,
  alias_sym_rule_set_reference = 198,
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
  [23] = 23,
  [24] = 20,
  [25] = 19,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 28,
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
  [65] = 65,
  [66] = 66,
  [67] = 20,
  [68] = 68,
  [69] = 69,
  [70] = 19,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 33,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 62,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 36,
  [90] = 20,
  [91] = 19,
  [92] = 77,
  [93] = 93,
  [94] = 94,
  [95] = 20,
  [96] = 96,
  [97] = 97,
  [98] = 20,
  [99] = 19,
  [100] = 19,
  [101] = 101,
  [102] = 102,
  [103] = 33,
  [104] = 19,
  [105] = 36,
  [106] = 19,
  [107] = 107,
  [108] = 108,
  [109] = 19,
  [110] = 20,
  [111] = 20,
  [112] = 20,
  [113] = 20,
  [114] = 114,
  [115] = 20,
  [116] = 116,
  [117] = 117,
  [118] = 19,
  [119] = 119,
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
  [130] = 33,
  [131] = 131,
  [132] = 132,
  [133] = 121,
  [134] = 134,
  [135] = 19,
  [136] = 20,
  [137] = 137,
  [138] = 138,
  [139] = 19,
  [140] = 140,
  [141] = 19,
  [142] = 142,
  [143] = 143,
  [144] = 20,
  [145] = 36,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 19,
  [151] = 19,
  [152] = 19,
  [153] = 153,
  [154] = 154,
  [155] = 20,
  [156] = 20,
  [157] = 20,
  [158] = 158,
  [159] = 19,
  [160] = 19,
  [161] = 20,
  [162] = 162,
  [163] = 20,
  [164] = 19,
  [165] = 165,
  [166] = 20,
  [167] = 167,
  [168] = 168,
  [169] = 19,
  [170] = 20,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 20,
  [178] = 19,
  [179] = 179,
  [180] = 180,
  [181] = 20,
  [182] = 182,
  [183] = 173,
  [184] = 29,
  [185] = 74,
  [186] = 27,
  [187] = 19,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 69,
  [193] = 19,
  [194] = 182,
  [195] = 195,
  [196] = 196,
  [197] = 20,
  [198] = 198,
  [199] = 20,
  [200] = 200,
  [201] = 19,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 19,
  [206] = 20,
  [207] = 207,
  [208] = 19,
  [209] = 20,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 182,
  [217] = 19,
  [218] = 218,
  [219] = 219,
  [220] = 76,
  [221] = 180,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 20,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 173,
  [235] = 182,
  [236] = 27,
  [237] = 29,
  [238] = 173,
  [239] = 20,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 19,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 240,
  [254] = 102,
  [255] = 93,
  [256] = 20,
  [257] = 19,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 242,
  [263] = 263,
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
  [285] = 285,
  [286] = 284,
  [287] = 287,
  [288] = 285,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 289,
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
  [325] = 285,
  [326] = 287,
  [327] = 327,
  [328] = 328,
  [329] = 285,
  [330] = 289,
  [331] = 331,
  [332] = 332,
  [333] = 96,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 284,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 20,
  [349] = 19,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 20,
  [358] = 19,
  [359] = 20,
  [360] = 19,
  [361] = 361,
  [362] = 19,
  [363] = 19,
  [364] = 20,
  [365] = 20,
  [366] = 366,
  [367] = 19,
  [368] = 368,
  [369] = 20,
  [370] = 370,
  [371] = 20,
  [372] = 372,
  [373] = 19,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 19,
  [380] = 20,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 19,
  [387] = 387,
  [388] = 381,
  [389] = 389,
  [390] = 20,
  [391] = 19,
  [392] = 20,
  [393] = 393,
  [394] = 394,
  [395] = 20,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 19,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 20,
  [407] = 19,
  [408] = 381,
  [409] = 383,
  [410] = 383,
  [411] = 411,
  [412] = 385,
  [413] = 19,
  [414] = 414,
  [415] = 20,
  [416] = 401,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 20,
  [421] = 421,
  [422] = 422,
  [423] = 419,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 422,
  [431] = 419,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 422,
  [439] = 419,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 419,
  [444] = 422,
  [445] = 419,
  [446] = 422,
  [447] = 447,
  [448] = 448,
  [449] = 419,
  [450] = 450,
  [451] = 422,
  [452] = 419,
  [453] = 19,
  [454] = 422,
  [455] = 422,
  [456] = 419,
  [457] = 457,
  [458] = 20,
  [459] = 419,
  [460] = 422,
  [461] = 419,
  [462] = 422,
  [463] = 419,
  [464] = 419,
  [465] = 465,
  [466] = 422,
  [467] = 422,
  [468] = 468,
  [469] = 469,
  [470] = 20,
  [471] = 19,
  [472] = 224,
  [473] = 473,
  [474] = 419,
  [475] = 475,
  [476] = 447,
  [477] = 19,
  [478] = 20,
  [479] = 422,
  [480] = 422,
  [481] = 419,
  [482] = 422,
  [483] = 422,
  [484] = 419,
  [485] = 419,
  [486] = 422,
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
  [498] = 495,
  [499] = 496,
  [500] = 500,
  [501] = 501,
  [502] = 21,
  [503] = 503,
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
  [528] = 515,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 514,
  [537] = 533,
  [538] = 538,
  [539] = 539,
  [540] = 532,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 514,
  [545] = 533,
  [546] = 533,
  [547] = 533,
  [548] = 533,
  [549] = 533,
  [550] = 533,
  [551] = 533,
  [552] = 533,
  [553] = 533,
  [554] = 533,
  [555] = 533,
  [556] = 533,
  [557] = 557,
  [558] = 558,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(363);
      if (lookahead == '"') ADVANCE(486);
      if (lookahead == '#') ADVANCE(410);
      if (lookahead == '\'') ADVANCE(507);
      if (lookahead == '(') ADVANCE(393);
      if (lookahead == ')') ADVANCE(395);
      if (lookahead == '*') ADVANCE(484);
      if (lookahead == '+') ADVANCE(473);
      if (lookahead == '-') ADVANCE(418);
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == ':') ADVANCE(365);
      if (lookahead == '=') ADVANCE(366);
      if (lookahead == '?') ADVANCE(412);
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'C') ADVANCE(426);
      if (lookahead == 'D') ADVANCE(480);
      if (lookahead == 'E') ADVANCE(467);
      if (lookahead == 'I') ADVANCE(440);
      if (lookahead == 'L') ADVANCE(456);
      if (lookahead == 'M') ADVANCE(421);
      if (lookahead == 'N') ADVANCE(479);
      if (lookahead == 'P') ADVANCE(429);
      if (lookahead == 'R') ADVANCE(442);
      if (lookahead == 'S') ADVANCE(423);
      if (lookahead == 'T') ADVANCE(506);
      if (lookahead == 'U') ADVANCE(466);
      if (lookahead == 'V') ADVANCE(432);
      if (lookahead == 'X') ADVANCE(419);
      if (lookahead == '\\') ADVANCE(472);
      if (lookahead == '^') ADVANCE(475);
      if (lookahead == 'a') ADVANCE(452);
      if (lookahead == 'c') ADVANCE(458);
      if (lookahead == 'e') ADVANCE(468);
      if (lookahead == 'f') ADVANCE(434);
      if (lookahead == 'i') ADVANCE(451);
      if (lookahead == 'n') ADVANCE(430);
      if (lookahead == 'o') ADVANCE(438);
      if (lookahead == 's') ADVANCE(471);
      if (lookahead == 't') ADVANCE(465);
      if (lookahead == 'v') ADVANCE(435);
      if (lookahead == 'w') ADVANCE(447);
      if (lookahead == '|') ADVANCE(516);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(518);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(486);
      if (lookahead == '#') ADVANCE(410);
      if (lookahead == 'C') ADVANCE(425);
      if (lookahead == 'D') ADVANCE(480);
      if (lookahead == 'M') ADVANCE(420);
      if (lookahead == 'N') ADVANCE(479);
      if (lookahead == 'R') ADVANCE(446);
      if (lookahead == 'S') ADVANCE(422);
      if (lookahead == 'T') ADVANCE(424);
      if (lookahead == 'c') ADVANCE(461);
      if (lookahead == 'f') ADVANCE(433);
      if (lookahead == 's') ADVANCE(471);
      if (lookahead == 't') ADVANCE(465);
      if (lookahead == 'v') ADVANCE(435);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(473);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(487);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(485);
      if (lookahead == '#') ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(485);
      if (lookahead == '?') ADVANCE(412);
      if (lookahead == 'C') ADVANCE(425);
      if (lookahead == 'D') ADVANCE(480);
      if (lookahead == 'M') ADVANCE(420);
      if (lookahead == 'N') ADVANCE(479);
      if (lookahead == 'R') ADVANCE(446);
      if (lookahead == 'S') ADVANCE(422);
      if (lookahead == 'T') ADVANCE(424);
      if (lookahead == 'c') ADVANCE(461);
      if (lookahead == 'o') ADVANCE(463);
      if (lookahead == 's') ADVANCE(471);
      if (lookahead == 'v') ADVANCE(435);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(473);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(485);
      if (lookahead == '\\') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(488);
      if (lookahead != 0) ADVANCE(489);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(485);
      if (lookahead == 'a') ADVANCE(452);
      if (lookahead == 'f') ADVANCE(464);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(485);
      if (lookahead == 'a') ADVANCE(452);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(485);
      if (lookahead == 'o') ADVANCE(463);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(485);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(488);
      if (lookahead != 0) ADVANCE(489);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(410);
      if (lookahead == '+') ADVANCE(473);
      if (lookahead == '-') ADVANCE(418);
      if (lookahead == 'D') ADVANCE(480);
      if (lookahead == 'M') ADVANCE(420);
      if (lookahead == 'N') ADVANCE(479);
      if (lookahead == 'S') ADVANCE(422);
      if (lookahead == 'T') ADVANCE(424);
      if (lookahead == '^') ADVANCE(475);
      if (lookahead == 'c') ADVANCE(461);
      if (lookahead == 'e') ADVANCE(468);
      if (lookahead == 'i') ADVANCE(451);
      if (lookahead == 'o') ADVANCE(436);
      if (lookahead == 's') ADVANCE(471);
      if (lookahead == 'v') ADVANCE(435);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(410);
      if (lookahead == '^') ADVANCE(475);
      if (lookahead == 'c') ADVANCE(461);
      if (lookahead == 'e') ADVANCE(468);
      if (lookahead == 'i') ADVANCE(451);
      if (lookahead == 's') ADVANCE(471);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(410);
      if (lookahead == '^') ADVANCE(475);
      if (lookahead == 'i') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(410);
      if (lookahead == 'c') ADVANCE(461);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(410);
      if (lookahead == 'i') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 19:
      if (lookahead == '\'') ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(508);
      END_STATE();
    case 20:
      if (lookahead == '(') ADVANCE(393);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 21:
      if (lookahead == ')') ADVANCE(395);
      if (lookahead == '\\') ADVANCE(472);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 22:
      if (lookahead == ')') ADVANCE(395);
      if (lookahead == 'o') ADVANCE(463);
      if (lookahead == '|') ADVANCE(516);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 23:
      if (lookahead == ')') ADVANCE(395);
      if (lookahead == 'o') ADVANCE(463);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(484);
      if (lookahead == '?') ADVANCE(412);
      if (lookahead == 'C') ADVANCE(425);
      if (lookahead == 'D') ADVANCE(480);
      if (lookahead == 'M') ADVANCE(420);
      if (lookahead == 'N') ADVANCE(479);
      if (lookahead == 'R') ADVANCE(446);
      if (lookahead == 'S') ADVANCE(422);
      if (lookahead == 'T') ADVANCE(424);
      if (lookahead == 'c') ADVANCE(460);
      if (lookahead == 's') ADVANCE(471);
      if (lookahead == 'v') ADVANCE(435);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(473);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(417);
      if (lookahead == 'i') ADVANCE(453);
      if (lookahead == 's') ADVANCE(471);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == 'n') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(483);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(316);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(401);
      END_STATE();
    case 32:
      if (lookahead == '?') ADVANCE(412);
      if (lookahead == 'C') ADVANCE(425);
      if (lookahead == 'D') ADVANCE(480);
      if (lookahead == 'M') ADVANCE(420);
      if (lookahead == 'N') ADVANCE(479);
      if (lookahead == 'R') ADVANCE(446);
      if (lookahead == 'S') ADVANCE(422);
      if (lookahead == 'T') ADVANCE(424);
      if (lookahead == 'c') ADVANCE(461);
      if (lookahead == 's') ADVANCE(471);
      if (lookahead == 'v') ADVANCE(435);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(473);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 33:
      if (lookahead == '?') ADVANCE(412);
      if (lookahead == 'C') ADVANCE(425);
      if (lookahead == 'D') ADVANCE(480);
      if (lookahead == 'M') ADVANCE(420);
      if (lookahead == 'N') ADVANCE(479);
      if (lookahead == 'R') ADVANCE(446);
      if (lookahead == 'S') ADVANCE(422);
      if (lookahead == 'T') ADVANCE(424);
      if (lookahead == 'c') ADVANCE(460);
      if (lookahead == 's') ADVANCE(471);
      if (lookahead == 'v') ADVANCE(435);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(473);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 34:
      if (lookahead == '?') ADVANCE(412);
      if (lookahead == 'D') ADVANCE(480);
      if (lookahead == 'M') ADVANCE(420);
      if (lookahead == 'N') ADVANCE(479);
      if (lookahead == 'S') ADVANCE(422);
      if (lookahead == 'T') ADVANCE(424);
      if (lookahead == 'a') ADVANCE(452);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 35:
      if (lookahead == 'C') ADVANCE(425);
      if (lookahead == 'D') ADVANCE(480);
      if (lookahead == 'M') ADVANCE(420);
      if (lookahead == 'N') ADVANCE(479);
      if (lookahead == 'R') ADVANCE(446);
      if (lookahead == 'S') ADVANCE(422);
      if (lookahead == 'T') ADVANCE(424);
      if (lookahead == 'c') ADVANCE(461);
      if (lookahead == 's') ADVANCE(471);
      if (lookahead == 'v') ADVANCE(435);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(473);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 36:
      if (lookahead == 'D') ADVANCE(480);
      if (lookahead == 'M') ADVANCE(420);
      if (lookahead == 'N') ADVANCE(479);
      if (lookahead == 'S') ADVANCE(422);
      if (lookahead == 'T') ADVANCE(424);
      if (lookahead == '^') ADVANCE(475);
      if (lookahead == 'c') ADVANCE(461);
      if (lookahead == 'i') ADVANCE(453);
      if (lookahead == 'o') ADVANCE(436);
      if (lookahead == 's') ADVANCE(471);
      if (lookahead == 'v') ADVANCE(435);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(473);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 37:
      if (lookahead == 'D') ADVANCE(480);
      if (lookahead == 'M') ADVANCE(420);
      if (lookahead == 'N') ADVANCE(479);
      if (lookahead == 'S') ADVANCE(422);
      if (lookahead == 'T') ADVANCE(424);
      if (lookahead == 'c') ADVANCE(461);
      if (lookahead == 's') ADVANCE(471);
      if (lookahead == 'v') ADVANCE(435);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(473);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 38:
      if (lookahead == 'D') ADVANCE(444);
      if (lookahead == 'E') ADVANCE(469);
      if (lookahead == 'S') ADVANCE(443);
      if (lookahead == 'X') ADVANCE(419);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 39:
      if (lookahead == 'D') ADVANCE(444);
      if (lookahead == 'I') ADVANCE(439);
      if (lookahead == 'P') ADVANCE(428);
      if (lookahead == 'T') ADVANCE(448);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 40:
      if (lookahead == 'P') ADVANCE(55);
      END_STATE();
    case 41:
      if (lookahead == 'R') ADVANCE(115);
      END_STATE();
    case 42:
      if (lookahead == 'S') ADVANCE(476);
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 43:
      if (lookahead == 'S') ADVANCE(300);
      END_STATE();
    case 44:
      if (lookahead == 'S') ADVANCE(126);
      END_STATE();
    case 45:
      if (lookahead == 'S') ADVANCE(130);
      END_STATE();
    case 46:
      if (lookahead == 'U') ADVANCE(477);
      END_STATE();
    case 47:
      if (lookahead == 'U') ADVANCE(478);
      END_STATE();
    case 48:
      if (lookahead == '\\') ADVANCE(472);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(230);
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 66:
      if (lookahead == 'b') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 67:
      if (lookahead == 'b') ADVANCE(179);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(231);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(275);
      if (lookahead == 'm') ADVANCE(222);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(173);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(182);
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(380);
      if (lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(397);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(517);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(513);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(511);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(119);
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(119);
      if (lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(292);
      if (lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(514);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(510);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == 'u') ADVANCE(175);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 141:
      if (lookahead == 'f') ADVANCE(381);
      END_STATE();
    case 142:
      if (lookahead == 'f') ADVANCE(165);
      END_STATE();
    case 143:
      if (lookahead == 'f') ADVANCE(127);
      END_STATE();
    case 144:
      if (lookahead == 'f') ADVANCE(137);
      END_STATE();
    case 145:
      if (lookahead == 'f') ADVANCE(137);
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 146:
      if (lookahead == 'f') ADVANCE(140);
      END_STATE();
    case 147:
      if (lookahead == 'g') ADVANCE(374);
      END_STATE();
    case 148:
      if (lookahead == 'g') ADVANCE(154);
      END_STATE();
    case 149:
      if (lookahead == 'g') ADVANCE(125);
      END_STATE();
    case 150:
      if (lookahead == 'g') ADVANCE(96);
      END_STATE();
    case 151:
      if (lookahead == 'h') ADVANCE(388);
      END_STATE();
    case 152:
      if (lookahead == 'h') ADVANCE(135);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(453);
      if (lookahead == 's') ADVANCE(471);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(156)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(219);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(273);
      END_STATE();
    case 162:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 164:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 165:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 166:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 169:
      if (lookahead == 'l') ADVANCE(375);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(515);
      END_STATE();
    case 171:
      if (lookahead == 'l') ADVANCE(256);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(296);
      END_STATE();
    case 173:
      if (lookahead == 'l') ADVANCE(288);
      END_STATE();
    case 174:
      if (lookahead == 'l') ADVANCE(298);
      END_STATE();
    case 175:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 176:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 180:
      if (lookahead == 'l') ADVANCE(289);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(287);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(290);
      END_STATE();
    case 183:
      if (lookahead == 'm') ADVANCE(392);
      END_STATE();
    case 184:
      if (lookahead == 'm') ADVANCE(406);
      END_STATE();
    case 185:
      if (lookahead == 'm') ADVANCE(373);
      END_STATE();
    case 186:
      if (lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(368);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(379);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(378);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(268);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(255);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 205:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 206:
      if (lookahead == 'n') ADVANCE(261);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 208:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(205);
      END_STATE();
    case 211:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 212:
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 217:
      if (lookahead == 'p') ADVANCE(218);
      END_STATE();
    case 218:
      if (lookahead == 'p') ADVANCE(159);
      END_STATE();
    case 219:
      if (lookahead == 'p') ADVANCE(281);
      END_STATE();
    case 220:
      if (lookahead == 'p') ADVANCE(233);
      END_STATE();
    case 221:
      if (lookahead == 'p') ADVANCE(233);
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 222:
      if (lookahead == 'p') ADVANCE(178);
      END_STATE();
    case 223:
      if (lookahead == 'q') ADVANCE(285);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(400);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 243:
      if (lookahead == 's') ADVANCE(471);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(243)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 244:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 245:
      if (lookahead == 's') ADVANCE(364);
      END_STATE();
    case 246:
      if (lookahead == 's') ADVANCE(404);
      END_STATE();
    case 247:
      if (lookahead == 's') ADVANCE(398);
      END_STATE();
    case 248:
      if (lookahead == 's') ADVANCE(396);
      END_STATE();
    case 249:
      if (lookahead == 's') ADVANCE(274);
      if (lookahead == 'v') ADVANCE(57);
      END_STATE();
    case 250:
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 251:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 252:
      if (lookahead == 's') ADVANCE(277);
      END_STATE();
    case 253:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 254:
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 255:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 256:
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 257:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 258:
      if (lookahead == 's') ADVANCE(278);
      END_STATE();
    case 259:
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 260:
      if (lookahead == 's') ADVANCE(259);
      END_STATE();
    case 261:
      if (lookahead == 's') ADVANCE(282);
      if (lookahead == 'v') ADVANCE(57);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(382);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(385);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(391);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(377);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(372);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(407);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(369);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 283:
      if (lookahead == 'u') ADVANCE(301);
      if (lookahead == 'x') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(492);
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 284:
      if (lookahead == 'u') ADVANCE(228);
      END_STATE();
    case 285:
      if (lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 286:
      if (lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 287:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 288:
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 289:
      if (lookahead == 'u') ADVANCE(133);
      END_STATE();
    case 290:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 291:
      if (lookahead == 'u') ADVANCE(240);
      END_STATE();
    case 292:
      if (lookahead == 'v') ADVANCE(122);
      END_STATE();
    case 293:
      if (lookahead == 'x') ADVANCE(221);
      END_STATE();
    case 294:
      if (lookahead == 'x') ADVANCE(52);
      END_STATE();
    case 295:
      if (lookahead == 'x') ADVANCE(272);
      END_STATE();
    case 296:
      if (lookahead == 'y') ADVANCE(399);
      END_STATE();
    case 297:
      if (lookahead == 'y') ADVANCE(383);
      END_STATE();
    case 298:
      if (lookahead == 'y') ADVANCE(394);
      END_STATE();
    case 299:
      if (lookahead == 'y') ADVANCE(247);
      END_STATE();
    case 300:
      if (lookahead == 'y') ADVANCE(258);
      END_STATE();
    case 301:
      if (lookahead == '{') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(320);
      END_STATE();
    case 302:
      if (lookahead == '}') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(302);
      END_STATE();
    case 303:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(303)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 304:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      END_STATE();
    case 305:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(497);
      END_STATE();
    case 306:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(500);
      END_STATE();
    case 307:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 308:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(503);
      END_STATE();
    case 309:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      END_STATE();
    case 310:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(501);
      END_STATE();
    case 311:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      END_STATE();
    case 312:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(498);
      END_STATE();
    case 313:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 314:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 315:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 316:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 317:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 318:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 319:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(502);
      END_STATE();
    case 320:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      END_STATE();
    case 321:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(490);
      END_STATE();
    case 322:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(302);
      END_STATE();
    case 323:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(321);
      END_STATE();
    case 324:
      if (eof) ADVANCE(363);
      if (lookahead == '"') ADVANCE(486);
      if (lookahead == '#') ADVANCE(410);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '=') ADVANCE(366);
      if (lookahead == '?') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(168);
      if (lookahead == 'C') ADVANCE(207);
      if (lookahead == 'D') ADVANCE(480);
      if (lookahead == 'E') ADVANCE(295);
      if (lookahead == 'I') ADVANCE(206);
      if (lookahead == 'L') ADVANCE(208);
      if (lookahead == 'M') ADVANCE(42);
      if (lookahead == 'N') ADVANCE(479);
      if (lookahead == 'P') ADVANCE(224);
      if (lookahead == 'R') ADVANCE(129);
      if (lookahead == 'S') ADVANCE(46);
      if (lookahead == 'T') ADVANCE(47);
      if (lookahead == 'V') ADVANCE(54);
      if (lookahead == '^') ADVANCE(475);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'c') ADVANCE(215);
      if (lookahead == 'f') ADVANCE(227);
      if (lookahead == 'i') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(324)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      END_STATE();
    case 325:
      if (eof) ADVANCE(363);
      if (lookahead == '"') ADVANCE(486);
      if (lookahead == '#') ADVANCE(410);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'C') ADVANCE(455);
      if (lookahead == 'E') ADVANCE(470);
      if (lookahead == 'I') ADVANCE(454);
      if (lookahead == 'L') ADVANCE(456);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead == 'P') ADVANCE(462);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'V') ADVANCE(432);
      if (lookahead == '^') ADVANCE(475);
      if (lookahead == 'a') ADVANCE(452);
      if (lookahead == 'f') ADVANCE(464);
      if (lookahead == 'i') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(325)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 326:
      if (eof) ADVANCE(363);
      if (lookahead == '"') ADVANCE(486);
      if (lookahead == '#') ADVANCE(410);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'C') ADVANCE(455);
      if (lookahead == 'E') ADVANCE(470);
      if (lookahead == 'I') ADVANCE(454);
      if (lookahead == 'L') ADVANCE(456);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead == 'P') ADVANCE(462);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'V') ADVANCE(432);
      if (lookahead == '^') ADVANCE(475);
      if (lookahead == 'i') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(326)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 327:
      if (eof) ADVANCE(363);
      if (lookahead == '"') ADVANCE(486);
      if (lookahead == '#') ADVANCE(410);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'C') ADVANCE(455);
      if (lookahead == 'E') ADVANCE(470);
      if (lookahead == 'I') ADVANCE(454);
      if (lookahead == 'L') ADVANCE(456);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead == 'P') ADVANCE(462);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'V') ADVANCE(432);
      if (lookahead == 'i') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(327)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 328:
      if (eof) ADVANCE(363);
      if (lookahead == '"') ADVANCE(486);
      if (lookahead == '(') ADVANCE(393);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == ':') ADVANCE(365);
      if (lookahead == 'A') ADVANCE(168);
      if (lookahead == 'C') ADVANCE(207);
      if (lookahead == 'D') ADVANCE(128);
      if (lookahead == 'E') ADVANCE(293);
      if (lookahead == 'I') ADVANCE(80);
      if (lookahead == 'L') ADVANCE(208);
      if (lookahead == 'M') ADVANCE(49);
      if (lookahead == 'P') ADVANCE(50);
      if (lookahead == 'R') ADVANCE(129);
      if (lookahead == 'S') ADVANCE(91);
      if (lookahead == 'T') ADVANCE(53);
      if (lookahead == 'U') ADVANCE(244);
      if (lookahead == 'V') ADVANCE(54);
      if (lookahead == 'X') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'f') ADVANCE(227);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(328)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      END_STATE();
    case 329:
      if (eof) ADVANCE(363);
      if (lookahead == '"') ADVANCE(485);
      if (lookahead == '#') ADVANCE(410);
      if (lookahead == '(') ADVANCE(393);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(365);
      if (lookahead == '=') ADVANCE(366);
      if (lookahead == 'A') ADVANCE(168);
      if (lookahead == 'C') ADVANCE(207);
      if (lookahead == 'D') ADVANCE(128);
      if (lookahead == 'E') ADVANCE(293);
      if (lookahead == 'I') ADVANCE(80);
      if (lookahead == 'L') ADVANCE(208);
      if (lookahead == 'M') ADVANCE(49);
      if (lookahead == 'P') ADVANCE(50);
      if (lookahead == 'R') ADVANCE(129);
      if (lookahead == 'S') ADVANCE(91);
      if (lookahead == 'T') ADVANCE(53);
      if (lookahead == 'U') ADVANCE(244);
      if (lookahead == 'V') ADVANCE(54);
      if (lookahead == 'X') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'e') ADVANCE(294);
      if (lookahead == 'f') ADVANCE(227);
      if (lookahead == 'i') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(225);
      if (lookahead == 'p') ADVANCE(236);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead == 'w') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(329)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      END_STATE();
    case 330:
      if (eof) ADVANCE(363);
      if (lookahead == '"') ADVANCE(485);
      if (lookahead == '#') ADVANCE(410);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'C') ADVANCE(455);
      if (lookahead == 'E') ADVANCE(470);
      if (lookahead == 'I') ADVANCE(454);
      if (lookahead == 'L') ADVANCE(456);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead == 'P') ADVANCE(462);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'V') ADVANCE(432);
      if (lookahead == 'a') ADVANCE(452);
      if (lookahead == 'f') ADVANCE(433);
      if (lookahead == 't') ADVANCE(465);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(330)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 331:
      if (eof) ADVANCE(363);
      if (lookahead == '"') ADVANCE(485);
      if (lookahead == '#') ADVANCE(410);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'C') ADVANCE(455);
      if (lookahead == 'E') ADVANCE(470);
      if (lookahead == 'I') ADVANCE(454);
      if (lookahead == 'L') ADVANCE(456);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead == 'P') ADVANCE(462);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'V') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(331)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 332:
      if (eof) ADVANCE(363);
      if (lookahead == '"') ADVANCE(485);
      if (lookahead == '(') ADVANCE(393);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == ':') ADVANCE(365);
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'C') ADVANCE(455);
      if (lookahead == 'E') ADVANCE(470);
      if (lookahead == 'I') ADVANCE(454);
      if (lookahead == 'L') ADVANCE(456);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead == 'P') ADVANCE(462);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'V') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(332)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 333:
      if (eof) ADVANCE(363);
      if (lookahead == '"') ADVANCE(485);
      if (lookahead == '(') ADVANCE(393);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'C') ADVANCE(455);
      if (lookahead == 'E') ADVANCE(470);
      if (lookahead == 'I') ADVANCE(454);
      if (lookahead == 'L') ADVANCE(456);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead == 'P') ADVANCE(462);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'V') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(333)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 334:
      if (eof) ADVANCE(363);
      if (lookahead == '"') ADVANCE(485);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == ':') ADVANCE(365);
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'C') ADVANCE(455);
      if (lookahead == 'E') ADVANCE(470);
      if (lookahead == 'I') ADVANCE(454);
      if (lookahead == 'L') ADVANCE(456);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead == 'P') ADVANCE(462);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'V') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(334)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 335:
      if (eof) ADVANCE(363);
      if (lookahead == '"') ADVANCE(485);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'C') ADVANCE(455);
      if (lookahead == 'E') ADVANCE(470);
      if (lookahead == 'I') ADVANCE(454);
      if (lookahead == 'L') ADVANCE(456);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead == 'P') ADVANCE(462);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'V') ADVANCE(432);
      if (lookahead == 'a') ADVANCE(452);
      if (lookahead == 'f') ADVANCE(464);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(335)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 336:
      if (eof) ADVANCE(363);
      if (lookahead == '"') ADVANCE(485);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'C') ADVANCE(455);
      if (lookahead == 'E') ADVANCE(470);
      if (lookahead == 'I') ADVANCE(454);
      if (lookahead == 'L') ADVANCE(456);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead == 'P') ADVANCE(462);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'V') ADVANCE(432);
      if (lookahead == 'a') ADVANCE(452);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(336)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 337:
      if (eof) ADVANCE(363);
      if (lookahead == '"') ADVANCE(485);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'C') ADVANCE(455);
      if (lookahead == 'E') ADVANCE(470);
      if (lookahead == 'I') ADVANCE(454);
      if (lookahead == 'L') ADVANCE(456);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead == 'P') ADVANCE(462);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'V') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(337)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 338:
      if (eof) ADVANCE(363);
      if (lookahead == '#') ADVANCE(410);
      if (lookahead == '\'') ADVANCE(507);
      if (lookahead == '(') ADVANCE(393);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == ':') ADVANCE(365);
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'C') ADVANCE(455);
      if (lookahead == 'E') ADVANCE(470);
      if (lookahead == 'I') ADVANCE(454);
      if (lookahead == 'L') ADVANCE(456);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead == 'P') ADVANCE(462);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'V') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(338)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 339:
      if (eof) ADVANCE(363);
      if (lookahead == '#') ADVANCE(410);
      if (lookahead == '\'') ADVANCE(507);
      if (lookahead == '(') ADVANCE(393);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'C') ADVANCE(455);
      if (lookahead == 'E') ADVANCE(470);
      if (lookahead == 'I') ADVANCE(454);
      if (lookahead == 'L') ADVANCE(456);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead == 'P') ADVANCE(462);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'V') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(339)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 340:
      if (eof) ADVANCE(363);
      if (lookahead == '#') ADVANCE(410);
      if (lookahead == '\'') ADVANCE(507);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == ':') ADVANCE(365);
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'C') ADVANCE(455);
      if (lookahead == 'E') ADVANCE(470);
      if (lookahead == 'I') ADVANCE(454);
      if (lookahead == 'L') ADVANCE(456);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead == 'P') ADVANCE(462);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'V') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(340)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 341:
      if (eof) ADVANCE(363);
      if (lookahead == '#') ADVANCE(410);
      if (lookahead == '\'') ADVANCE(507);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'C') ADVANCE(455);
      if (lookahead == 'E') ADVANCE(470);
      if (lookahead == 'I') ADVANCE(454);
      if (lookahead == 'L') ADVANCE(456);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead == 'P') ADVANCE(462);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'V') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(341)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 342:
      if (eof) ADVANCE(363);
      if (lookahead == '#') ADVANCE(410);
      if (lookahead == '(') ADVANCE(393);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'C') ADVANCE(455);
      if (lookahead == 'E') ADVANCE(470);
      if (lookahead == 'I') ADVANCE(454);
      if (lookahead == 'L') ADVANCE(456);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead == 'P') ADVANCE(462);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'V') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(342)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 343:
      if (eof) ADVANCE(363);
      if (lookahead == '#') ADVANCE(410);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == '-') ADVANCE(417);
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == '=') ADVANCE(366);
      if (lookahead == '?') ADVANCE(412);
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'C') ADVANCE(455);
      if (lookahead == 'D') ADVANCE(480);
      if (lookahead == 'E') ADVANCE(470);
      if (lookahead == 'I') ADVANCE(454);
      if (lookahead == 'L') ADVANCE(456);
      if (lookahead == 'M') ADVANCE(421);
      if (lookahead == 'N') ADVANCE(479);
      if (lookahead == 'P') ADVANCE(462);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'S') ADVANCE(422);
      if (lookahead == 'T') ADVANCE(424);
      if (lookahead == 'V') ADVANCE(432);
      if (lookahead == '^') ADVANCE(475);
      if (lookahead == 'a') ADVANCE(452);
      if (lookahead == 'c') ADVANCE(459);
      if (lookahead == 'f') ADVANCE(464);
      if (lookahead == 'i') ADVANCE(453);
      if (lookahead == 'o') ADVANCE(437);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(343)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 344:
      if (eof) ADVANCE(363);
      if (lookahead == '#') ADVANCE(410);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'C') ADVANCE(455);
      if (lookahead == 'E') ADVANCE(470);
      if (lookahead == 'I') ADVANCE(454);
      if (lookahead == 'L') ADVANCE(456);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead == 'P') ADVANCE(462);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'V') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(344)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 345:
      if (eof) ADVANCE(363);
      if (lookahead == '#') ADVANCE(410);
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'C') ADVANCE(455);
      if (lookahead == 'E') ADVANCE(470);
      if (lookahead == 'I') ADVANCE(454);
      if (lookahead == 'L') ADVANCE(456);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead == 'P') ADVANCE(462);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'V') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(345)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 346:
      if (eof) ADVANCE(363);
      if (lookahead == '(') ADVANCE(393);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'C') ADVANCE(455);
      if (lookahead == 'E') ADVANCE(470);
      if (lookahead == 'I') ADVANCE(454);
      if (lookahead == 'L') ADVANCE(456);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead == 'P') ADVANCE(462);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'V') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(346)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 347:
      if (eof) ADVANCE(363);
      if (lookahead == '(') ADVANCE(393);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == 'A') ADVANCE(168);
      if (lookahead == 'C') ADVANCE(207);
      if (lookahead == 'E') ADVANCE(295);
      if (lookahead == 'I') ADVANCE(206);
      if (lookahead == 'L') ADVANCE(208);
      if (lookahead == 'M') ADVANCE(49);
      if (lookahead == 'P') ADVANCE(224);
      if (lookahead == 'R') ADVANCE(129);
      if (lookahead == 'T') ADVANCE(505);
      if (lookahead == 'V') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(347)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    case 348:
      if (eof) ADVANCE(363);
      if (lookahead == '*') ADVANCE(484);
      if (lookahead == '?') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(168);
      if (lookahead == 'C') ADVANCE(207);
      if (lookahead == 'D') ADVANCE(480);
      if (lookahead == 'E') ADVANCE(295);
      if (lookahead == 'I') ADVANCE(206);
      if (lookahead == 'L') ADVANCE(208);
      if (lookahead == 'M') ADVANCE(42);
      if (lookahead == 'N') ADVANCE(479);
      if (lookahead == 'P') ADVANCE(224);
      if (lookahead == 'R') ADVANCE(129);
      if (lookahead == 'S') ADVANCE(46);
      if (lookahead == 'T') ADVANCE(47);
      if (lookahead == 'V') ADVANCE(54);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(348)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      END_STATE();
    case 349:
      if (eof) ADVANCE(363);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == '-') ADVANCE(417);
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'C') ADVANCE(455);
      if (lookahead == 'E') ADVANCE(470);
      if (lookahead == 'I') ADVANCE(454);
      if (lookahead == 'L') ADVANCE(456);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead == 'P') ADVANCE(462);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'V') ADVANCE(432);
      if (lookahead == 'i') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(349)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 350:
      if (eof) ADVANCE(363);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == '=') ADVANCE(366);
      if (lookahead == '?') ADVANCE(412);
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'C') ADVANCE(455);
      if (lookahead == 'D') ADVANCE(480);
      if (lookahead == 'E') ADVANCE(470);
      if (lookahead == 'I') ADVANCE(454);
      if (lookahead == 'L') ADVANCE(456);
      if (lookahead == 'M') ADVANCE(421);
      if (lookahead == 'N') ADVANCE(479);
      if (lookahead == 'P') ADVANCE(462);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'S') ADVANCE(422);
      if (lookahead == 'T') ADVANCE(424);
      if (lookahead == 'V') ADVANCE(432);
      if (lookahead == '^') ADVANCE(475);
      if (lookahead == 'a') ADVANCE(452);
      if (lookahead == 'c') ADVANCE(459);
      if (lookahead == 'f') ADVANCE(464);
      if (lookahead == 'i') ADVANCE(453);
      if (lookahead == 'o') ADVANCE(437);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(350)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 351:
      if (eof) ADVANCE(363);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == '=') ADVANCE(366);
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'C') ADVANCE(455);
      if (lookahead == 'E') ADVANCE(470);
      if (lookahead == 'I') ADVANCE(454);
      if (lookahead == 'L') ADVANCE(456);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead == 'P') ADVANCE(462);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'V') ADVANCE(432);
      if (lookahead == 'i') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(351)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 352:
      if (eof) ADVANCE(363);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'C') ADVANCE(455);
      if (lookahead == 'D') ADVANCE(444);
      if (lookahead == 'E') ADVANCE(470);
      if (lookahead == 'I') ADVANCE(450);
      if (lookahead == 'L') ADVANCE(456);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead == 'P') ADVANCE(462);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'T') ADVANCE(448);
      if (lookahead == 'U') ADVANCE(466);
      if (lookahead == 'V') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(352)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 353:
      if (eof) ADVANCE(363);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'C') ADVANCE(455);
      if (lookahead == 'D') ADVANCE(444);
      if (lookahead == 'E') ADVANCE(470);
      if (lookahead == 'I') ADVANCE(441);
      if (lookahead == 'L') ADVANCE(456);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead == 'P') ADVANCE(429);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'T') ADVANCE(448);
      if (lookahead == 'V') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(353)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 354:
      if (eof) ADVANCE(363);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'C') ADVANCE(455);
      if (lookahead == 'D') ADVANCE(444);
      if (lookahead == 'E') ADVANCE(470);
      if (lookahead == 'I') ADVANCE(441);
      if (lookahead == 'L') ADVANCE(456);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead == 'P') ADVANCE(462);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'S') ADVANCE(457);
      if (lookahead == 'T') ADVANCE(431);
      if (lookahead == 'V') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(354)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 355:
      if (eof) ADVANCE(363);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'C') ADVANCE(455);
      if (lookahead == 'D') ADVANCE(444);
      if (lookahead == 'E') ADVANCE(470);
      if (lookahead == 'I') ADVANCE(441);
      if (lookahead == 'L') ADVANCE(456);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead == 'P') ADVANCE(462);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'T') ADVANCE(448);
      if (lookahead == 'V') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(355)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 356:
      if (eof) ADVANCE(363);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'C') ADVANCE(455);
      if (lookahead == 'E') ADVANCE(470);
      if (lookahead == 'I') ADVANCE(454);
      if (lookahead == 'L') ADVANCE(456);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead == 'P') ADVANCE(462);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'V') ADVANCE(432);
      if (lookahead == 'a') ADVANCE(452);
      if (lookahead == 'w') ADVANCE(447);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(356)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 357:
      if (eof) ADVANCE(363);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'C') ADVANCE(455);
      if (lookahead == 'E') ADVANCE(470);
      if (lookahead == 'I') ADVANCE(454);
      if (lookahead == 'L') ADVANCE(456);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead == 'P') ADVANCE(462);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'V') ADVANCE(432);
      if (lookahead == 'a') ADVANCE(452);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(357)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 358:
      if (eof) ADVANCE(363);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'C') ADVANCE(455);
      if (lookahead == 'E') ADVANCE(470);
      if (lookahead == 'I') ADVANCE(454);
      if (lookahead == 'L') ADVANCE(456);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead == 'P') ADVANCE(462);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'V') ADVANCE(432);
      if (lookahead == 'o') ADVANCE(463);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(358)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 359:
      if (eof) ADVANCE(363);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'C') ADVANCE(455);
      if (lookahead == 'E') ADVANCE(470);
      if (lookahead == 'I') ADVANCE(454);
      if (lookahead == 'L') ADVANCE(456);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead == 'P') ADVANCE(462);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'V') ADVANCE(432);
      if (lookahead == 'w') ADVANCE(447);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(359)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 360:
      if (eof) ADVANCE(363);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'C') ADVANCE(455);
      if (lookahead == 'E') ADVANCE(470);
      if (lookahead == 'I') ADVANCE(454);
      if (lookahead == 'L') ADVANCE(456);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead == 'P') ADVANCE(462);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'V') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(360)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 361:
      if (eof) ADVANCE(363);
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'C') ADVANCE(455);
      if (lookahead == 'D') ADVANCE(444);
      if (lookahead == 'E') ADVANCE(467);
      if (lookahead == 'I') ADVANCE(454);
      if (lookahead == 'L') ADVANCE(456);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead == 'P') ADVANCE(462);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'S') ADVANCE(443);
      if (lookahead == 'V') ADVANCE(432);
      if (lookahead == 'X') ADVANCE(419);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(361)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 362:
      if (eof) ADVANCE(363);
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'C') ADVANCE(455);
      if (lookahead == 'E') ADVANCE(470);
      if (lookahead == 'I') ADVANCE(454);
      if (lookahead == 'L') ADVANCE(456);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead == 'P') ADVANCE(462);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'V') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(362)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(411);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_Alias);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_Profile);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_Extension);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_Invariant);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_Instance);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_Instance);
      if (lookahead == 'O') ADVANCE(141);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_ValueSet);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_CodeSystem);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_Mapping);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_Logical);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_Resource);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_RuleSet);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_Description);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_Expression);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_Id);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_InstanceOf);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_Parent);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_Severity);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_Source);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_Target);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_Title);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_Usage);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_XPath);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_contentReference);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_insert);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_exactly);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_obeys);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_exclude);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_codes);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_valueset);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '!') ADVANCE(518);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(483);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '>') ADVANCE(401);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '>') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'P') ADVANCE(55);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'S') ADVANCE(476);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'S') ADVANCE(476);
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'U') ADVANCE(477);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'U') ADVANCE(477);
      if (lookahead == 'e') ADVANCE(292);
      if (lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'U') ADVANCE(478);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(230);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(230);
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'b') ADVANCE(92);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'b') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'b') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(172);
      if (lookahead == 'r') ADVANCE(400);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(380);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(380);
      if (lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(380);
      if (lookahead == 'n') ADVANCE(261);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == 'u') ADVANCE(175);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == 'u') ADVANCE(175);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'h') ADVANCE(135);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(255);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(261);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(400);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(221);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(78);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(220);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(272);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'y') ADVANCE(252);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(519);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_MS);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_SU);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_TU);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_cardinality_token1);
      if (lookahead == '.') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_cardinality_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(489);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(489);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(490);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(491);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(315);
      if (lookahead == '.') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(493);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(313);
      if (lookahead == '.') ADVANCE(305);
      if (lookahead == ':') ADVANCE(314);
      if (lookahead == 'Z') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(495);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(497);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '-') ADVANCE(318);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(313);
      if (lookahead == '.') ADVANCE(311);
      if (lookahead == 'Z') ADVANCE(500);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(313);
      if (lookahead == ':') ADVANCE(314);
      if (lookahead == 'Z') ADVANCE(500);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(313);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == 'Z') ADVANCE(500);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(313);
      if (lookahead == 'Z') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_T);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'U') ADVANCE(478);
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(508);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_example);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_preferred);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_extensible);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_Reference);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_Canonical);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_named);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_QMARK_BANG);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_param_rule_set_params_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 329},
  [3] = {.lex_state = 329},
  [4] = {.lex_state = 329},
  [5] = {.lex_state = 329},
  [6] = {.lex_state = 324},
  [7] = {.lex_state = 329},
  [8] = {.lex_state = 329},
  [9] = {.lex_state = 329},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 324},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 329},
  [16] = {.lex_state = 329},
  [17] = {.lex_state = 329},
  [18] = {.lex_state = 329},
  [19] = {.lex_state = 343},
  [20] = {.lex_state = 343},
  [21] = {.lex_state = 329},
  [22] = {.lex_state = 324},
  [23] = {.lex_state = 324},
  [24] = {.lex_state = 350},
  [25] = {.lex_state = 350},
  [26] = {.lex_state = 329},
  [27] = {.lex_state = 328},
  [28] = {.lex_state = 324},
  [29] = {.lex_state = 328},
  [30] = {.lex_state = 329},
  [31] = {.lex_state = 324},
  [32] = {.lex_state = 329},
  [33] = {.lex_state = 329},
  [34] = {.lex_state = 329},
  [35] = {.lex_state = 329},
  [36] = {.lex_state = 329},
  [37] = {.lex_state = 329},
  [38] = {.lex_state = 13},
  [39] = {.lex_state = 329},
  [40] = {.lex_state = 329},
  [41] = {.lex_state = 329},
  [42] = {.lex_state = 329},
  [43] = {.lex_state = 329},
  [44] = {.lex_state = 329},
  [45] = {.lex_state = 329},
  [46] = {.lex_state = 329},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 329},
  [49] = {.lex_state = 329},
  [50] = {.lex_state = 329},
  [51] = {.lex_state = 329},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 329},
  [54] = {.lex_state = 330},
  [55] = {.lex_state = 329},
  [56] = {.lex_state = 327},
  [57] = {.lex_state = 324},
  [58] = {.lex_state = 329},
  [59] = {.lex_state = 325},
  [60] = {.lex_state = 329},
  [61] = {.lex_state = 329},
  [62] = {.lex_state = 338},
  [63] = {.lex_state = 324},
  [64] = {.lex_state = 327},
  [65] = {.lex_state = 324},
  [66] = {.lex_state = 324},
  [67] = {.lex_state = 325},
  [68] = {.lex_state = 329},
  [69] = {.lex_state = 348},
  [70] = {.lex_state = 325},
  [71] = {.lex_state = 324},
  [72] = {.lex_state = 329},
  [73] = {.lex_state = 329},
  [74] = {.lex_state = 348},
  [75] = {.lex_state = 33},
  [76] = {.lex_state = 324},
  [77] = {.lex_state = 339},
  [78] = {.lex_state = 325},
  [79] = {.lex_state = 324},
  [80] = {.lex_state = 329},
  [81] = {.lex_state = 324},
  [82] = {.lex_state = 340},
  [83] = {.lex_state = 329},
  [84] = {.lex_state = 324},
  [85] = {.lex_state = 329},
  [86] = {.lex_state = 32},
  [87] = {.lex_state = 329},
  [88] = {.lex_state = 324},
  [89] = {.lex_state = 325},
  [90] = {.lex_state = 354},
  [91] = {.lex_state = 354},
  [92] = {.lex_state = 341},
  [93] = {.lex_state = 324},
  [94] = {.lex_state = 331},
  [95] = {.lex_state = 330},
  [96] = {.lex_state = 324},
  [97] = {.lex_state = 331},
  [98] = {.lex_state = 326},
  [99] = {.lex_state = 326},
  [100] = {.lex_state = 330},
  [101] = {.lex_state = 326},
  [102] = {.lex_state = 324},
  [103] = {.lex_state = 326},
  [104] = {.lex_state = 353},
  [105] = {.lex_state = 326},
  [106] = {.lex_state = 352},
  [107] = {.lex_state = 330},
  [108] = {.lex_state = 329},
  [109] = {.lex_state = 327},
  [110] = {.lex_state = 353},
  [111] = {.lex_state = 327},
  [112] = {.lex_state = 352},
  [113] = {.lex_state = 361},
  [114] = {.lex_state = 329},
  [115] = {.lex_state = 332},
  [116] = {.lex_state = 36},
  [117] = {.lex_state = 329},
  [118] = {.lex_state = 332},
  [119] = {.lex_state = 329},
  [120] = {.lex_state = 35},
  [121] = {.lex_state = 35},
  [122] = {.lex_state = 344},
  [123] = {.lex_state = 329},
  [124] = {.lex_state = 329},
  [125] = {.lex_state = 36},
  [126] = {.lex_state = 329},
  [127] = {.lex_state = 344},
  [128] = {.lex_state = 329},
  [129] = {.lex_state = 329},
  [130] = {.lex_state = 327},
  [131] = {.lex_state = 329},
  [132] = {.lex_state = 329},
  [133] = {.lex_state = 35},
  [134] = {.lex_state = 329},
  [135] = {.lex_state = 355},
  [136] = {.lex_state = 355},
  [137] = {.lex_state = 329},
  [138] = {.lex_state = 329},
  [139] = {.lex_state = 335},
  [140] = {.lex_state = 329},
  [141] = {.lex_state = 361},
  [142] = {.lex_state = 329},
  [143] = {.lex_state = 329},
  [144] = {.lex_state = 335},
  [145] = {.lex_state = 327},
  [146] = {.lex_state = 324},
  [147] = {.lex_state = 329},
  [148] = {.lex_state = 324},
  [149] = {.lex_state = 329},
  [150] = {.lex_state = 333},
  [151] = {.lex_state = 334},
  [152] = {.lex_state = 336},
  [153] = {.lex_state = 14},
  [154] = {.lex_state = 324},
  [155] = {.lex_state = 342},
  [156] = {.lex_state = 334},
  [157] = {.lex_state = 333},
  [158] = {.lex_state = 329},
  [159] = {.lex_state = 349},
  [160] = {.lex_state = 342},
  [161] = {.lex_state = 336},
  [162] = {.lex_state = 324},
  [163] = {.lex_state = 351},
  [164] = {.lex_state = 351},
  [165] = {.lex_state = 329},
  [166] = {.lex_state = 349},
  [167] = {.lex_state = 324},
  [168] = {.lex_state = 329},
  [169] = {.lex_state = 356},
  [170] = {.lex_state = 356},
  [171] = {.lex_state = 329},
  [172] = {.lex_state = 329},
  [173] = {.lex_state = 329},
  [174] = {.lex_state = 329},
  [175] = {.lex_state = 329},
  [176] = {.lex_state = 329},
  [177] = {.lex_state = 337},
  [178] = {.lex_state = 337},
  [179] = {.lex_state = 329},
  [180] = {.lex_state = 329},
  [181] = {.lex_state = 358},
  [182] = {.lex_state = 329},
  [183] = {.lex_state = 329},
  [184] = {.lex_state = 331},
  [185] = {.lex_state = 24},
  [186] = {.lex_state = 331},
  [187] = {.lex_state = 358},
  [188] = {.lex_state = 329},
  [189] = {.lex_state = 329},
  [190] = {.lex_state = 329},
  [191] = {.lex_state = 329},
  [192] = {.lex_state = 24},
  [193] = {.lex_state = 344},
  [194] = {.lex_state = 329},
  [195] = {.lex_state = 329},
  [196] = {.lex_state = 329},
  [197] = {.lex_state = 344},
  [198] = {.lex_state = 329},
  [199] = {.lex_state = 359},
  [200] = {.lex_state = 329},
  [201] = {.lex_state = 359},
  [202] = {.lex_state = 329},
  [203] = {.lex_state = 329},
  [204] = {.lex_state = 329},
  [205] = {.lex_state = 357},
  [206] = {.lex_state = 357},
  [207] = {.lex_state = 329},
  [208] = {.lex_state = 346},
  [209] = {.lex_state = 346},
  [210] = {.lex_state = 329},
  [211] = {.lex_state = 329},
  [212] = {.lex_state = 329},
  [213] = {.lex_state = 329},
  [214] = {.lex_state = 329},
  [215] = {.lex_state = 329},
  [216] = {.lex_state = 329},
  [217] = {.lex_state = 360},
  [218] = {.lex_state = 329},
  [219] = {.lex_state = 329},
  [220] = {.lex_state = 32},
  [221] = {.lex_state = 329},
  [222] = {.lex_state = 329},
  [223] = {.lex_state = 329},
  [224] = {.lex_state = 329},
  [225] = {.lex_state = 329},
  [226] = {.lex_state = 347},
  [227] = {.lex_state = 329},
  [228] = {.lex_state = 329},
  [229] = {.lex_state = 329},
  [230] = {.lex_state = 360},
  [231] = {.lex_state = 329},
  [232] = {.lex_state = 6},
  [233] = {.lex_state = 329},
  [234] = {.lex_state = 329},
  [235] = {.lex_state = 329},
  [236] = {.lex_state = 344},
  [237] = {.lex_state = 344},
  [238] = {.lex_state = 329},
  [239] = {.lex_state = 345},
  [240] = {.lex_state = 329},
  [241] = {.lex_state = 329},
  [242] = {.lex_state = 329},
  [243] = {.lex_state = 329},
  [244] = {.lex_state = 37},
  [245] = {.lex_state = 329},
  [246] = {.lex_state = 329},
  [247] = {.lex_state = 329},
  [248] = {.lex_state = 329},
  [249] = {.lex_state = 345},
  [250] = {.lex_state = 329},
  [251] = {.lex_state = 329},
  [252] = {.lex_state = 329},
  [253] = {.lex_state = 329},
  [254] = {.lex_state = 33},
  [255] = {.lex_state = 33},
  [256] = {.lex_state = 362},
  [257] = {.lex_state = 362},
  [258] = {.lex_state = 329},
  [259] = {.lex_state = 329},
  [260] = {.lex_state = 329},
  [261] = {.lex_state = 329},
  [262] = {.lex_state = 329},
  [263] = {.lex_state = 329},
  [264] = {.lex_state = 329},
  [265] = {.lex_state = 329},
  [266] = {.lex_state = 329},
  [267] = {.lex_state = 329},
  [268] = {.lex_state = 37},
  [269] = {.lex_state = 329},
  [270] = {.lex_state = 37},
  [271] = {.lex_state = 329},
  [272] = {.lex_state = 329},
  [273] = {.lex_state = 329},
  [274] = {.lex_state = 329},
  [275] = {.lex_state = 329},
  [276] = {.lex_state = 329},
  [277] = {.lex_state = 37},
  [278] = {.lex_state = 329},
  [279] = {.lex_state = 329},
  [280] = {.lex_state = 329},
  [281] = {.lex_state = 329},
  [282] = {.lex_state = 329},
  [283] = {.lex_state = 329},
  [284] = {.lex_state = 37},
  [285] = {.lex_state = 37},
  [286] = {.lex_state = 37},
  [287] = {.lex_state = 37},
  [288] = {.lex_state = 37},
  [289] = {.lex_state = 37},
  [290] = {.lex_state = 37},
  [291] = {.lex_state = 329},
  [292] = {.lex_state = 37},
  [293] = {.lex_state = 37},
  [294] = {.lex_state = 329},
  [295] = {.lex_state = 37},
  [296] = {.lex_state = 329},
  [297] = {.lex_state = 37},
  [298] = {.lex_state = 329},
  [299] = {.lex_state = 329},
  [300] = {.lex_state = 329},
  [301] = {.lex_state = 329},
  [302] = {.lex_state = 329},
  [303] = {.lex_state = 329},
  [304] = {.lex_state = 37},
  [305] = {.lex_state = 329},
  [306] = {.lex_state = 329},
  [307] = {.lex_state = 37},
  [308] = {.lex_state = 37},
  [309] = {.lex_state = 329},
  [310] = {.lex_state = 329},
  [311] = {.lex_state = 37},
  [312] = {.lex_state = 37},
  [313] = {.lex_state = 37},
  [314] = {.lex_state = 329},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 37},
  [317] = {.lex_state = 329},
  [318] = {.lex_state = 37},
  [319] = {.lex_state = 37},
  [320] = {.lex_state = 37},
  [321] = {.lex_state = 329},
  [322] = {.lex_state = 329},
  [323] = {.lex_state = 37},
  [324] = {.lex_state = 329},
  [325] = {.lex_state = 37},
  [326] = {.lex_state = 37},
  [327] = {.lex_state = 329},
  [328] = {.lex_state = 329},
  [329] = {.lex_state = 37},
  [330] = {.lex_state = 37},
  [331] = {.lex_state = 329},
  [332] = {.lex_state = 329},
  [333] = {.lex_state = 32},
  [334] = {.lex_state = 329},
  [335] = {.lex_state = 329},
  [336] = {.lex_state = 329},
  [337] = {.lex_state = 329},
  [338] = {.lex_state = 329},
  [339] = {.lex_state = 37},
  [340] = {.lex_state = 329},
  [341] = {.lex_state = 37},
  [342] = {.lex_state = 329},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 16},
  [345] = {.lex_state = 329},
  [346] = {.lex_state = 329},
  [347] = {.lex_state = 324},
  [348] = {.lex_state = 34},
  [349] = {.lex_state = 34},
  [350] = {.lex_state = 324},
  [351] = {.lex_state = 18},
  [352] = {.lex_state = 17},
  [353] = {.lex_state = 25},
  [354] = {.lex_state = 324},
  [355] = {.lex_state = 18},
  [356] = {.lex_state = 156},
  [357] = {.lex_state = 39},
  [358] = {.lex_state = 39},
  [359] = {.lex_state = 38},
  [360] = {.lex_state = 38},
  [361] = {.lex_state = 243},
  [362] = {.lex_state = 8},
  [363] = {.lex_state = 15},
  [364] = {.lex_state = 15},
  [365] = {.lex_state = 8},
  [366] = {.lex_state = 30},
  [367] = {.lex_state = 26},
  [368] = {.lex_state = 18},
  [369] = {.lex_state = 26},
  [370] = {.lex_state = 18},
  [371] = {.lex_state = 22},
  [372] = {.lex_state = 18},
  [373] = {.lex_state = 22},
  [374] = {.lex_state = 18},
  [375] = {.lex_state = 18},
  [376] = {.lex_state = 329},
  [377] = {.lex_state = 329},
  [378] = {.lex_state = 303},
  [379] = {.lex_state = 23},
  [380] = {.lex_state = 5},
  [381] = {.lex_state = 7},
  [382] = {.lex_state = 303},
  [383] = {.lex_state = 7},
  [384] = {.lex_state = 329},
  [385] = {.lex_state = 12},
  [386] = {.lex_state = 5},
  [387] = {.lex_state = 21},
  [388] = {.lex_state = 7},
  [389] = {.lex_state = 12},
  [390] = {.lex_state = 23},
  [391] = {.lex_state = 27},
  [392] = {.lex_state = 9},
  [393] = {.lex_state = 303},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 10},
  [396] = {.lex_state = 303},
  [397] = {.lex_state = 329},
  [398] = {.lex_state = 329},
  [399] = {.lex_state = 9},
  [400] = {.lex_state = 48},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 329},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 303},
  [405] = {.lex_state = 21},
  [406] = {.lex_state = 20},
  [407] = {.lex_state = 20},
  [408] = {.lex_state = 7},
  [409] = {.lex_state = 7},
  [410] = {.lex_state = 7},
  [411] = {.lex_state = 12},
  [412] = {.lex_state = 7},
  [413] = {.lex_state = 10},
  [414] = {.lex_state = 303},
  [415] = {.lex_state = 27},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 329},
  [418] = {.lex_state = 303},
  [419] = {.lex_state = 303},
  [420] = {.lex_state = 18},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 303},
  [423] = {.lex_state = 303},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 303},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 303},
  [431] = {.lex_state = 303},
  [432] = {.lex_state = 303},
  [433] = {.lex_state = 303},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 303},
  [436] = {.lex_state = 19},
  [437] = {.lex_state = 329},
  [438] = {.lex_state = 303},
  [439] = {.lex_state = 303},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 19},
  [442] = {.lex_state = 329},
  [443] = {.lex_state = 303},
  [444] = {.lex_state = 303},
  [445] = {.lex_state = 303},
  [446] = {.lex_state = 303},
  [447] = {.lex_state = 328},
  [448] = {.lex_state = 303},
  [449] = {.lex_state = 303},
  [450] = {.lex_state = 19},
  [451] = {.lex_state = 303},
  [452] = {.lex_state = 303},
  [453] = {.lex_state = 18},
  [454] = {.lex_state = 303},
  [455] = {.lex_state = 303},
  [456] = {.lex_state = 303},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 30},
  [459] = {.lex_state = 303},
  [460] = {.lex_state = 303},
  [461] = {.lex_state = 303},
  [462] = {.lex_state = 303},
  [463] = {.lex_state = 303},
  [464] = {.lex_state = 303},
  [465] = {.lex_state = 303},
  [466] = {.lex_state = 303},
  [467] = {.lex_state = 303},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 30},
  [471] = {.lex_state = 30},
  [472] = {.lex_state = 329},
  [473] = {.lex_state = 329},
  [474] = {.lex_state = 303},
  [475] = {.lex_state = 303},
  [476] = {.lex_state = 328},
  [477] = {.lex_state = 11},
  [478] = {.lex_state = 11},
  [479] = {.lex_state = 303},
  [480] = {.lex_state = 303},
  [481] = {.lex_state = 303},
  [482] = {.lex_state = 303},
  [483] = {.lex_state = 303},
  [484] = {.lex_state = 303},
  [485] = {.lex_state = 303},
  [486] = {.lex_state = 303},
  [487] = {.lex_state = 329},
  [488] = {.lex_state = 329},
  [489] = {.lex_state = 329},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 329},
  [492] = {.lex_state = 329},
  [493] = {.lex_state = 18},
  [494] = {.lex_state = 329},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 329},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 30},
  [503] = {.lex_state = 0},
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
  [521] = {.lex_state = 0},
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
  [534] = {.lex_state = 347},
  [535] = {.lex_state = 329},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
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
  },
  [1] = {
    [sym_doc] = STATE(516),
    [sym_alias] = STATE(52),
    [sym_profile] = STATE(52),
    [sym_extension] = STATE(52),
    [sym_invariant] = STATE(52),
    [sym_instance] = STATE(52),
    [sym_valueset] = STATE(52),
    [sym_codesystem] = STATE(52),
    [sym_mapping] = STATE(52),
    [sym_logical] = STATE(52),
    [sym_resource] = STATE(52),
    [sym_rule_set] = STATE(52),
    [sym_param_rule_set] = STATE(52),
    [aux_sym_doc_repeat1] = STATE(52),
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
    STATE(41), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(61), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(299), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(149), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(328), 10,
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
    STATE(2), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(34), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(299), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(149), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(328), 10,
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
    STATE(32), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(61), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(299), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(149), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(328), 10,
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
    STATE(4), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(37), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(299), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(149), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(328), 10,
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
    STATE(75), 1,
      sym_cardinality,
    STATE(347), 1,
      aux_sym_flag_rule_repeat1,
    STATE(529), 1,
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
    STATE(49), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(149), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(328), 10,
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
    STATE(53), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(61), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(149), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(328), 10,
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
    STATE(61), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(149), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(328), 10,
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
    STATE(540), 1,
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
    STATE(532), 1,
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
    STATE(532), 1,
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
  [701] = 16,
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
    STATE(75), 1,
      sym_cardinality,
    STATE(347), 1,
      aux_sym_flag_rule_repeat1,
    STATE(529), 1,
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
  [768] = 19,
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
    STATE(532), 1,
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
  [841] = 5,
    ACTIONS(109), 1,
      anon_sym_STAR,
    STATE(15), 2,
      sym_rule_set_rule,
      aux_sym_rule_set_repeat1,
    STATE(301), 8,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_mapping_rule,
      sym_add_element_rule,
      sym_vs_component,
      sym_concept,
    STATE(328), 10,
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
  [885] = 5,
    ACTIONS(114), 1,
      anon_sym_STAR,
    STATE(15), 2,
      sym_rule_set_rule,
      aux_sym_rule_set_repeat1,
    STATE(301), 8,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_mapping_rule,
      sym_add_element_rule,
      sym_vs_component,
      sym_concept,
    STATE(328), 10,
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
    ACTIONS(112), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [929] = 6,
    ACTIONS(118), 1,
      anon_sym_STAR,
    STATE(17), 1,
      aux_sym_param_rule_set_repeat1,
    STATE(280), 1,
      sym_rule_set_rule,
    STATE(301), 8,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_mapping_rule,
      sym_add_element_rule,
      sym_vs_component,
      sym_concept,
    STATE(328), 10,
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
    ACTIONS(116), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
    ACTIONS(114), 1,
      anon_sym_STAR,
    STATE(17), 1,
      aux_sym_param_rule_set_repeat1,
    STATE(280), 1,
      sym_rule_set_rule,
    STATE(301), 8,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_mapping_rule,
      sym_add_element_rule,
      sym_vs_component,
      sym_concept,
    STATE(328), 10,
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
    ACTIONS(121), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
    ACTIONS(128), 1,
      aux_sym_cardinality_token1,
    STATE(19), 1,
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
    ACTIONS(132), 1,
      aux_sym_sequence_token1,
    ACTIONS(134), 1,
      aux_sym_cardinality_token1,
    STATE(19), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 30,
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
  [1142] = 3,
    ACTIONS(142), 1,
      anon_sym_POUND,
    ACTIONS(144), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
    ACTIONS(140), 28,
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
  [1180] = 13,
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
    STATE(347), 1,
      aux_sym_flag_rule_repeat1,
    STATE(529), 1,
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
  [1238] = 4,
    ACTIONS(134), 1,
      aux_sym_cardinality_token1,
    ACTIONS(147), 1,
      aux_sym_sequence_token1,
    STATE(25), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 28,
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
  [1278] = 4,
    ACTIONS(128), 1,
      aux_sym_cardinality_token1,
    ACTIONS(149), 1,
      aux_sym_sequence_token1,
    STATE(25), 1,
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
    STATE(48), 2,
      sym_mapping_metadata,
      aux_sym_mapping_repeat1,
    STATE(142), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(340), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    STATE(129), 5,
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
  [1406] = 2,
    ACTIONS(144), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
    ACTIONS(140), 28,
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
    STATE(119), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(340), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    STATE(129), 5,
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
    ACTIONS(140), 27,
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
  [1563] = 5,
    ACTIONS(37), 1,
      anon_sym_STAR,
    STATE(40), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(299), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(328), 10,
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
      anon_sym_RuleSet,
  [1602] = 2,
    ACTIONS(176), 1,
      anon_sym_Instance,
    ACTIONS(174), 27,
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
  [1635] = 5,
    ACTIONS(37), 1,
      anon_sym_STAR,
    STATE(40), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(299), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(328), 10,
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
  [1674] = 11,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(35), 1,
      anon_sym_Title,
    ACTIONS(180), 1,
      anon_sym_Instance,
    ACTIONS(182), 1,
      anon_sym_InstanceOf,
    ACTIONS(184), 1,
      anon_sym_Usage,
    ACTIONS(186), 1,
      anon_sym_STAR,
    STATE(39), 2,
      sym_instance_metadata,
      aux_sym_instance_repeat1,
    STATE(140), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(331), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    STATE(147), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(178), 11,
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
  [1725] = 2,
    ACTIONS(190), 1,
      anon_sym_Instance,
    ACTIONS(188), 27,
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
  [1758] = 5,
    ACTIONS(37), 1,
      anon_sym_STAR,
    STATE(40), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(299), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(328), 10,
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
  [1797] = 21,
    ACTIONS(63), 1,
      anon_sym_CARET,
    ACTIONS(192), 1,
      anon_sym_insert,
    ACTIONS(194), 1,
      anon_sym_obeys,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    ACTIONS(200), 1,
      anon_sym_codes,
    ACTIONS(202), 1,
      anon_sym_system,
    ACTIONS(204), 1,
      anon_sym_POUND,
    ACTIONS(206), 1,
      aux_sym_sequence_token1,
    ACTIONS(208), 1,
      sym_number,
    STATE(6), 1,
      sym_path,
    STATE(20), 1,
      aux_sym_sequence_repeat1,
    STATE(22), 1,
      sym_sequence,
    STATE(56), 1,
      aux_sym_code_insert_rule_repeat1,
    STATE(59), 1,
      sym_code,
    STATE(175), 1,
      sym_code_string,
    STATE(351), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(473), 1,
      sym_name,
    STATE(524), 1,
      sym_caret_path,
    ACTIONS(198), 2,
      anon_sym_include,
      anon_sym_exclude,
    STATE(337), 2,
      sym_vs_concept_component,
      sym_vs_filter_component,
    ACTIONS(79), 6,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [1868] = 11,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(35), 1,
      anon_sym_Title,
    ACTIONS(182), 1,
      anon_sym_InstanceOf,
    ACTIONS(184), 1,
      anon_sym_Usage,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(212), 1,
      anon_sym_Instance,
    STATE(60), 2,
      sym_instance_metadata,
      aux_sym_instance_repeat1,
    STATE(123), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(331), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    STATE(147), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(210), 11,
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
  [1919] = 5,
    ACTIONS(216), 1,
      anon_sym_STAR,
    STATE(40), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(299), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(328), 10,
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
    STATE(299), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(328), 10,
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
  [1997] = 9,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(35), 1,
      anon_sym_Title,
    ACTIONS(223), 1,
      anon_sym_Id,
    ACTIONS(225), 1,
      anon_sym_STAR,
    STATE(87), 2,
      sym_cs_metadata,
      aux_sym_codesystem_repeat1,
    STATE(137), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(198), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(336), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
    ACTIONS(221), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [2042] = 9,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(35), 1,
      anon_sym_Title,
    ACTIONS(223), 1,
      anon_sym_Id,
    ACTIONS(229), 1,
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
    STATE(335), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
    ACTIONS(227), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [2087] = 9,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(35), 1,
      anon_sym_Title,
    ACTIONS(223), 1,
      anon_sym_Id,
    ACTIONS(225), 1,
      anon_sym_STAR,
    STATE(42), 2,
      sym_cs_metadata,
      aux_sym_codesystem_repeat1,
    STATE(132), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(198), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(336), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
    ACTIONS(231), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [2132] = 9,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(35), 1,
      anon_sym_Title,
    ACTIONS(223), 1,
      anon_sym_Id,
    ACTIONS(229), 1,
      anon_sym_STAR,
    STATE(85), 2,
      sym_vs_metadata,
      aux_sym_valueset_repeat1,
    STATE(114), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(195), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(335), 3,
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
  [2177] = 4,
    ACTIONS(237), 1,
      anon_sym_STAR,
    STATE(46), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(328), 10,
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
      anon_sym_RuleSet,
  [2211] = 13,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    ACTIONS(242), 1,
      anon_sym_Alias,
    ACTIONS(245), 1,
      anon_sym_Profile,
    ACTIONS(248), 1,
      anon_sym_Extension,
    ACTIONS(251), 1,
      anon_sym_Invariant,
    ACTIONS(254), 1,
      anon_sym_Instance,
    ACTIONS(257), 1,
      anon_sym_ValueSet,
    ACTIONS(260), 1,
      anon_sym_CodeSystem,
    ACTIONS(263), 1,
      anon_sym_Mapping,
    ACTIONS(266), 1,
      anon_sym_Logical,
    ACTIONS(269), 1,
      anon_sym_Resource,
    ACTIONS(272), 1,
      anon_sym_RuleSet,
    STATE(47), 13,
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
  [2263] = 8,
    ACTIONS(277), 1,
      anon_sym_Description,
    ACTIONS(280), 1,
      anon_sym_Id,
    ACTIONS(283), 1,
      anon_sym_Source,
    ACTIONS(286), 1,
      anon_sym_Target,
    ACTIONS(289), 1,
      anon_sym_Title,
    STATE(48), 2,
      sym_mapping_metadata,
      aux_sym_mapping_repeat1,
    STATE(129), 5,
      sym_description,
      sym_id,
      sym_source,
      sym_target,
      sym_title,
    ACTIONS(275), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [2305] = 4,
    ACTIONS(73), 1,
      anon_sym_STAR,
    STATE(46), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(328), 10,
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
  [2339] = 4,
    ACTIONS(73), 1,
      anon_sym_STAR,
    STATE(46), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(328), 10,
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
    ACTIONS(292), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [2373] = 2,
    ACTIONS(296), 1,
      anon_sym_Instance,
    ACTIONS(294), 24,
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
  [2403] = 13,
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
    ACTIONS(298), 1,
      ts_builtin_sym_end,
    STATE(47), 13,
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
  [2455] = 4,
    ACTIONS(73), 1,
      anon_sym_STAR,
    STATE(46), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(328), 10,
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
    ACTIONS(300), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [2489] = 10,
    ACTIONS(306), 1,
      anon_sym_POUND,
    ACTIONS(308), 1,
      aux_sym_sequence_token1,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
    STATE(126), 1,
      sym_code,
    STATE(258), 1,
      sym_vs_filter_value,
    STATE(420), 1,
      aux_sym_sequence_repeat1,
    STATE(556), 1,
      sym_sequence,
    ACTIONS(304), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(259), 2,
      sym_code_string,
      sym_string,
    ACTIONS(302), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [2535] = 2,
    ACTIONS(314), 1,
      anon_sym_Instance,
    ACTIONS(312), 24,
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
  [2565] = 11,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_sequence_token1,
    ACTIONS(318), 1,
      anon_sym_insert,
    ACTIONS(320), 1,
      anon_sym_POUND,
    STATE(148), 1,
      sym_string,
    STATE(298), 1,
      sym_multiline_string,
    STATE(420), 1,
      aux_sym_sequence_repeat1,
    STATE(548), 1,
      sym_sequence,
    STATE(64), 2,
      sym_code,
      aux_sym_code_insert_rule_repeat1,
    ACTIONS(316), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [2612] = 1,
    ACTIONS(140), 24,
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
  [2639] = 2,
    ACTIONS(324), 1,
      anon_sym_Instance,
    ACTIONS(322), 23,
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
  [2668] = 8,
    ACTIONS(63), 1,
      anon_sym_CARET,
    ACTIONS(333), 1,
      aux_sym_sequence_token1,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    STATE(196), 1,
      sym_string,
    STATE(530), 1,
      sym_caret_path,
    ACTIONS(331), 2,
      anon_sym_from,
      anon_sym_and,
    ACTIONS(329), 3,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(326), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [2708] = 8,
    ACTIONS(340), 1,
      anon_sym_Instance,
    ACTIONS(342), 1,
      anon_sym_Description,
    ACTIONS(345), 1,
      anon_sym_InstanceOf,
    ACTIONS(348), 1,
      anon_sym_Title,
    ACTIONS(351), 1,
      anon_sym_Usage,
    STATE(60), 2,
      sym_instance_metadata,
      aux_sym_instance_repeat1,
    STATE(147), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(338), 12,
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
  [2748] = 7,
    ACTIONS(356), 1,
      anon_sym_Description,
    ACTIONS(359), 1,
      anon_sym_Id,
    ACTIONS(362), 1,
      anon_sym_Parent,
    ACTIONS(365), 1,
      anon_sym_Title,
    STATE(61), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(149), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    ACTIONS(354), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [2786] = 8,
    ACTIONS(308), 1,
      aux_sym_sequence_token1,
    ACTIONS(371), 1,
      anon_sym_COLON,
    ACTIONS(373), 1,
      anon_sym_POUND,
    ACTIONS(375), 1,
      anon_sym_SQUOTE,
    STATE(420), 1,
      aux_sym_sequence_repeat1,
    STATE(553), 1,
      sym_sequence,
    STATE(165), 2,
      sym_code,
      sym_unit,
    ACTIONS(368), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [2825] = 3,
    STATE(65), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(65), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(377), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [2854] = 7,
    ACTIONS(381), 1,
      anon_sym_POUND,
    ACTIONS(384), 1,
      aux_sym_sequence_token1,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    STATE(420), 1,
      aux_sym_sequence_repeat1,
    STATE(548), 1,
      sym_sequence,
    STATE(64), 2,
      sym_code,
      aux_sym_code_insert_rule_repeat1,
    ACTIONS(379), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [2891] = 3,
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
    ACTIONS(389), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [2920] = 3,
    STATE(71), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(65), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(391), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [2949] = 4,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    ACTIONS(393), 1,
      aux_sym_sequence_token1,
    STATE(70), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [2980] = 7,
    ACTIONS(398), 1,
      anon_sym_Description,
    ACTIONS(401), 1,
      anon_sym_Expression,
    ACTIONS(404), 1,
      anon_sym_Severity,
    ACTIONS(407), 1,
      anon_sym_XPath,
    STATE(68), 2,
      sym_invariant_metadata,
      aux_sym_invariant_repeat1,
    STATE(191), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
    ACTIONS(396), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [3017] = 3,
    ACTIONS(412), 1,
      anon_sym_STAR,
    ACTIONS(414), 2,
      aux_sym_cardinality_token1,
      anon_sym_STAR2,
    ACTIONS(410), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3046] = 4,
    ACTIONS(128), 1,
      anon_sym_DQUOTE,
    ACTIONS(416), 1,
      aux_sym_sequence_token1,
    STATE(70), 1,
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
  [3077] = 3,
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
    ACTIONS(419), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [3106] = 7,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(423), 1,
      anon_sym_Expression,
    ACTIONS(425), 1,
      anon_sym_Severity,
    ACTIONS(427), 1,
      anon_sym_XPath,
    STATE(68), 2,
      sym_invariant_metadata,
      aux_sym_invariant_repeat1,
    STATE(191), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
    ACTIONS(421), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [3143] = 5,
    ACTIONS(114), 1,
      anon_sym_STAR,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    STATE(16), 2,
      sym_rule_set_rule,
      aux_sym_rule_set_repeat1,
    STATE(301), 8,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_mapping_rule,
      sym_add_element_rule,
      sym_vs_component,
      sym_concept,
    STATE(328), 10,
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
  [3176] = 3,
    ACTIONS(433), 1,
      anon_sym_STAR,
    ACTIONS(435), 2,
      aux_sym_cardinality_token1,
      anon_sym_STAR2,
    ACTIONS(431), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3205] = 14,
    ACTIONS(97), 1,
      anon_sym_Reference,
    ACTIONS(99), 1,
      anon_sym_Canonical,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(437), 1,
      anon_sym_contentReference,
    ACTIONS(439), 1,
      aux_sym_sequence_token1,
    ACTIONS(443), 1,
      anon_sym_QMARK_BANG,
    STATE(21), 1,
      sym_sequence,
    STATE(247), 1,
      sym_reference,
    STATE(395), 1,
      aux_sym_sequence_repeat1,
    STATE(417), 1,
      sym_target_type,
    STATE(86), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    STATE(246), 2,
      sym_name,
      sym_canonical,
    ACTIONS(79), 3,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
    ACTIONS(441), 5,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [3256] = 3,
    STATE(76), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(447), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(445), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [3285] = 7,
    ACTIONS(83), 1,
      anon_sym_POUND,
    ACTIONS(308), 1,
      aux_sym_sequence_token1,
    ACTIONS(375), 1,
      anon_sym_SQUOTE,
    STATE(420), 1,
      aux_sym_sequence_repeat1,
    STATE(555), 1,
      sym_sequence,
    STATE(165), 2,
      sym_code,
      sym_unit,
    ACTIONS(371), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [3321] = 2,
    ACTIONS(176), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
    ACTIONS(174), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [3347] = 3,
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
    ACTIONS(450), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [3375] = 5,
    ACTIONS(114), 1,
      anon_sym_STAR,
    STATE(18), 1,
      aux_sym_param_rule_set_repeat1,
    STATE(280), 1,
      sym_rule_set_rule,
    STATE(301), 8,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_mapping_rule,
      sym_add_element_rule,
      sym_vs_component,
      sym_concept,
    STATE(328), 10,
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
  [3407] = 3,
    STATE(88), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(65), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(452), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [3435] = 8,
    ACTIONS(308), 1,
      aux_sym_sequence_token1,
    ACTIONS(371), 1,
      anon_sym_COLON,
    ACTIONS(375), 1,
      anon_sym_SQUOTE,
    ACTIONS(454), 1,
      anon_sym_POUND,
    STATE(420), 1,
      aux_sym_sequence_repeat1,
    STATE(552), 1,
      sym_sequence,
    STATE(165), 2,
      sym_code,
      sym_unit,
    ACTIONS(368), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [3473] = 2,
    ACTIONS(458), 1,
      anon_sym_Instance,
    ACTIONS(456), 20,
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
  [3499] = 3,
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
  [3527] = 6,
    ACTIONS(464), 1,
      anon_sym_Description,
    ACTIONS(467), 1,
      anon_sym_Id,
    ACTIONS(470), 1,
      anon_sym_Title,
    STATE(85), 2,
      sym_vs_metadata,
      aux_sym_valueset_repeat1,
    STATE(195), 3,
      sym_description,
      sym_id,
      sym_title,
    ACTIONS(462), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [3561] = 13,
    ACTIONS(97), 1,
      anon_sym_Reference,
    ACTIONS(99), 1,
      anon_sym_Canonical,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(439), 1,
      aux_sym_sequence_token1,
    ACTIONS(443), 1,
      anon_sym_QMARK_BANG,
    STATE(21), 1,
      sym_sequence,
    STATE(247), 1,
      sym_reference,
    STATE(395), 1,
      aux_sym_sequence_repeat1,
    STATE(397), 1,
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
    ACTIONS(441), 5,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [3609] = 6,
    ACTIONS(475), 1,
      anon_sym_Description,
    ACTIONS(478), 1,
      anon_sym_Id,
    ACTIONS(481), 1,
      anon_sym_Title,
    STATE(87), 2,
      sym_cs_metadata,
      aux_sym_codesystem_repeat1,
    STATE(198), 3,
      sym_description,
      sym_id,
      sym_title,
    ACTIONS(473), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [3643] = 3,
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
    ACTIONS(484), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [3671] = 2,
    ACTIONS(190), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
    ACTIONS(188), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [3697] = 3,
    ACTIONS(486), 1,
      aux_sym_sequence_token1,
    STATE(91), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3724] = 3,
    ACTIONS(488), 1,
      aux_sym_sequence_token1,
    STATE(91), 1,
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
  [3751] = 7,
    ACTIONS(101), 1,
      anon_sym_POUND,
    ACTIONS(308), 1,
      aux_sym_sequence_token1,
    ACTIONS(375), 1,
      anon_sym_SQUOTE,
    STATE(420), 1,
      aux_sym_sequence_repeat1,
    STATE(554), 1,
      sym_sequence,
    STATE(165), 2,
      sym_code,
      sym_unit,
    ACTIONS(371), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [3786] = 1,
    ACTIONS(431), 20,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [3809] = 8,
    ACTIONS(308), 1,
      aux_sym_sequence_token1,
    ACTIONS(493), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_DQUOTE,
    STATE(127), 1,
      sym_string,
    STATE(281), 1,
      sym_code,
    STATE(420), 1,
      aux_sym_sequence_repeat1,
    STATE(551), 1,
      sym_sequence,
    ACTIONS(491), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [3846] = 3,
    ACTIONS(497), 1,
      aux_sym_sequence_token1,
    STATE(100), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [3873] = 1,
    ACTIONS(500), 20,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [3896] = 8,
    ACTIONS(308), 1,
      aux_sym_sequence_token1,
    ACTIONS(493), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_DQUOTE,
    STATE(122), 1,
      sym_string,
    STATE(310), 1,
      sym_code,
    STATE(420), 1,
      aux_sym_sequence_repeat1,
    STATE(551), 1,
      sym_sequence,
    ACTIONS(502), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [3933] = 4,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    ACTIONS(504), 1,
      aux_sym_sequence_token1,
    STATE(99), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [3962] = 4,
    ACTIONS(128), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      aux_sym_sequence_token1,
    STATE(99), 1,
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
  [3991] = 3,
    ACTIONS(510), 1,
      aux_sym_sequence_token1,
    STATE(100), 1,
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
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [4018] = 4,
    ACTIONS(63), 1,
      anon_sym_CARET,
    STATE(530), 1,
      sym_caret_path,
    ACTIONS(333), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
    ACTIONS(329), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [4047] = 1,
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
  [4070] = 2,
    ACTIONS(176), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
    ACTIONS(174), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [4094] = 3,
    ACTIONS(515), 1,
      aux_sym_sequence_token1,
    STATE(104), 1,
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
  [4120] = 2,
    ACTIONS(190), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
    ACTIONS(188), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [4144] = 4,
    ACTIONS(128), 1,
      anon_sym_Instance,
    ACTIONS(518), 1,
      aux_sym_sequence_token1,
    STATE(106), 1,
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
  [4172] = 2,
    ACTIONS(523), 1,
      aux_sym_sequence_token1,
    ACTIONS(521), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [4196] = 1,
    ACTIONS(525), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4218] = 4,
    ACTIONS(128), 1,
      anon_sym_DQUOTE,
    ACTIONS(527), 1,
      aux_sym_sequence_token1,
    STATE(109), 1,
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
  [4246] = 3,
    ACTIONS(530), 1,
      aux_sym_sequence_token1,
    STATE(104), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4272] = 4,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      aux_sym_sequence_token1,
    STATE(109), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [4300] = 4,
    ACTIONS(134), 1,
      anon_sym_Instance,
    ACTIONS(535), 1,
      aux_sym_sequence_token1,
    STATE(106), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 16,
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
  [4328] = 3,
    ACTIONS(537), 1,
      aux_sym_sequence_token1,
    STATE(141), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4353] = 4,
    ACTIONS(229), 1,
      anon_sym_STAR,
    STATE(131), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(335), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
    ACTIONS(539), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [4380] = 3,
    ACTIONS(541), 1,
      aux_sym_sequence_token1,
    STATE(118), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 16,
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
  [4405] = 12,
    ACTIONS(63), 1,
      anon_sym_CARET,
    ACTIONS(194), 1,
      anon_sym_obeys,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(543), 1,
      anon_sym_insert,
    ACTIONS(545), 1,
      anon_sym_system,
    ACTIONS(547), 1,
      aux_sym_sequence_token1,
    STATE(23), 1,
      sym_path,
    STATE(24), 1,
      aux_sym_sequence_repeat1,
    STATE(31), 1,
      sym_sequence,
    STATE(473), 1,
      sym_name,
    STATE(524), 1,
      sym_caret_path,
    ACTIONS(79), 7,
      anon_sym_codes,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [4448] = 1,
    ACTIONS(549), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4469] = 3,
    ACTIONS(551), 1,
      aux_sym_sequence_token1,
    STATE(118), 1,
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
  [4494] = 4,
    ACTIONS(160), 1,
      anon_sym_STAR,
    STATE(143), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(340), 3,
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
  [4521] = 10,
    ACTIONS(97), 1,
      anon_sym_Reference,
    ACTIONS(99), 1,
      anon_sym_Canonical,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(554), 1,
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
  [4560] = 10,
    ACTIONS(97), 1,
      anon_sym_Reference,
    ACTIONS(99), 1,
      anon_sym_Canonical,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(439), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(229), 1,
      sym_target_type,
    STATE(247), 1,
      sym_reference,
    STATE(395), 1,
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
  [4599] = 6,
    ACTIONS(308), 1,
      aux_sym_sequence_token1,
    ACTIONS(493), 1,
      anon_sym_POUND,
    STATE(332), 1,
      sym_code,
    STATE(420), 1,
      aux_sym_sequence_repeat1,
    STATE(551), 1,
      sym_sequence,
    ACTIONS(556), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [4630] = 4,
    ACTIONS(186), 1,
      anon_sym_STAR,
    STATE(124), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(331), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    ACTIONS(558), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [4657] = 4,
    ACTIONS(562), 1,
      anon_sym_STAR,
    STATE(124), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(331), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    ACTIONS(560), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [4684] = 12,
    ACTIONS(63), 1,
      anon_sym_CARET,
    ACTIONS(194), 1,
      anon_sym_obeys,
    ACTIONS(202), 1,
      anon_sym_system,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(543), 1,
      anon_sym_insert,
    ACTIONS(547), 1,
      aux_sym_sequence_token1,
    STATE(13), 1,
      sym_path,
    STATE(24), 1,
      aux_sym_sequence_repeat1,
    STATE(28), 1,
      sym_sequence,
    STATE(473), 1,
      sym_name,
    STATE(524), 1,
      sym_caret_path,
    ACTIONS(79), 7,
      anon_sym_codes,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [4727] = 3,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
    STATE(196), 1,
      sym_string,
    ACTIONS(331), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [4752] = 6,
    ACTIONS(308), 1,
      aux_sym_sequence_token1,
    ACTIONS(493), 1,
      anon_sym_POUND,
    STATE(310), 1,
      sym_code,
    STATE(420), 1,
      aux_sym_sequence_repeat1,
    STATE(551), 1,
      sym_sequence,
    ACTIONS(502), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [4783] = 1,
    ACTIONS(565), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4804] = 1,
    ACTIONS(567), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4825] = 2,
    ACTIONS(176), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [4848] = 4,
    ACTIONS(571), 1,
      anon_sym_STAR,
    STATE(131), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(335), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
    ACTIONS(569), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [4875] = 4,
    ACTIONS(225), 1,
      anon_sym_STAR,
    STATE(138), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(336), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
    ACTIONS(221), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [4902] = 10,
    ACTIONS(97), 1,
      anon_sym_Reference,
    ACTIONS(99), 1,
      anon_sym_Canonical,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(554), 1,
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
  [4941] = 4,
    ACTIONS(229), 1,
      anon_sym_STAR,
    STATE(131), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(335), 3,
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
  [4968] = 3,
    ACTIONS(574), 1,
      aux_sym_sequence_token1,
    STATE(135), 1,
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
  [4993] = 3,
    ACTIONS(577), 1,
      aux_sym_sequence_token1,
    STATE(135), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5018] = 4,
    ACTIONS(225), 1,
      anon_sym_STAR,
    STATE(138), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(336), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
    ACTIONS(579), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [5045] = 4,
    ACTIONS(583), 1,
      anon_sym_STAR,
    STATE(138), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(336), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
    ACTIONS(581), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [5072] = 3,
    ACTIONS(586), 1,
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
      anon_sym_STAR,
      anon_sym_from,
      anon_sym_and,
      anon_sym_DQUOTE,
  [5097] = 4,
    ACTIONS(186), 1,
      anon_sym_STAR,
    STATE(124), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(331), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    ACTIONS(210), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [5124] = 3,
    ACTIONS(589), 1,
      aux_sym_sequence_token1,
    STATE(141), 1,
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
  [5149] = 4,
    ACTIONS(160), 1,
      anon_sym_STAR,
    STATE(143), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(340), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
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
  [5176] = 4,
    ACTIONS(596), 1,
      anon_sym_STAR,
    STATE(143), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(340), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    ACTIONS(594), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [5203] = 3,
    ACTIONS(599), 1,
      aux_sym_sequence_token1,
    STATE(139), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5228] = 2,
    ACTIONS(190), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
    ACTIONS(188), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5251] = 4,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(317), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(601), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5277] = 2,
    ACTIONS(605), 1,
      anon_sym_Instance,
    ACTIONS(603), 16,
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
  [5299] = 4,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(314), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(607), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5325] = 1,
    ACTIONS(609), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5345] = 3,
    ACTIONS(611), 1,
      aux_sym_sequence_token1,
    STATE(150), 1,
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
  [5369] = 3,
    ACTIONS(614), 1,
      aux_sym_sequence_token1,
    STATE(151), 1,
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
  [5393] = 3,
    ACTIONS(617), 1,
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
      anon_sym_and,
      anon_sym_DQUOTE,
  [5417] = 15,
    ACTIONS(63), 1,
      anon_sym_CARET,
    ACTIONS(543), 1,
      anon_sym_insert,
    ACTIONS(620), 1,
      anon_sym_codes,
    ACTIONS(622), 1,
      anon_sym_system,
    ACTIONS(624), 1,
      anon_sym_POUND,
    ACTIONS(626), 1,
      aux_sym_sequence_token1,
    STATE(126), 1,
      sym_code,
    STATE(175), 1,
      sym_code_string,
    STATE(351), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(364), 1,
      aux_sym_sequence_repeat1,
    STATE(468), 1,
      sym_path,
    STATE(469), 1,
      sym_sequence,
    STATE(524), 1,
      sym_caret_path,
    ACTIONS(198), 2,
      anon_sym_include,
      anon_sym_exclude,
    STATE(337), 2,
      sym_vs_concept_component,
      sym_vs_filter_component,
  [5465] = 4,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(282), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(628), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5491] = 3,
    ACTIONS(630), 1,
      aux_sym_sequence_token1,
    STATE(160), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5515] = 3,
    ACTIONS(632), 1,
      aux_sym_sequence_token1,
    STATE(151), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 15,
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
  [5539] = 3,
    ACTIONS(634), 1,
      aux_sym_sequence_token1,
    STATE(150), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5563] = 1,
    ACTIONS(636), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5583] = 3,
    ACTIONS(638), 1,
      aux_sym_sequence_token1,
    STATE(159), 1,
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
  [5607] = 3,
    ACTIONS(641), 1,
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
  [5631] = 3,
    ACTIONS(644), 1,
      aux_sym_sequence_token1,
    STATE(152), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5655] = 4,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(321), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(646), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5681] = 3,
    ACTIONS(648), 1,
      aux_sym_sequence_token1,
    STATE(164), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 15,
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
  [5705] = 3,
    ACTIONS(650), 1,
      aux_sym_sequence_token1,
    STATE(164), 1,
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
  [5729] = 3,
    ACTIONS(310), 1,
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
  [5753] = 3,
    ACTIONS(655), 1,
      aux_sym_sequence_token1,
    STATE(159), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5777] = 4,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(279), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(657), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5803] = 2,
    ACTIONS(661), 1,
      anon_sym_Instance,
    ACTIONS(659), 16,
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
  [5825] = 3,
    ACTIONS(663), 1,
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
  [5849] = 3,
    ACTIONS(666), 1,
      aux_sym_sequence_token1,
    STATE(169), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5873] = 2,
    ACTIONS(670), 1,
      anon_sym_Instance,
    ACTIONS(668), 16,
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
  [5895] = 1,
    ACTIONS(672), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5914] = 3,
    ACTIONS(676), 1,
      anon_sym_and,
    STATE(180), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(674), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5937] = 3,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
    STATE(267), 1,
      sym_string,
    ACTIONS(678), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5960] = 4,
    ACTIONS(682), 1,
      anon_sym_from,
    ACTIONS(684), 1,
      anon_sym_and,
    STATE(303), 1,
      sym_vs_component_from,
    ACTIONS(680), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5985] = 1,
    ACTIONS(686), 16,
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
  [6004] = 3,
    ACTIONS(688), 1,
      aux_sym_sequence_token1,
    STATE(178), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6027] = 3,
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
  [6050] = 1,
    ACTIONS(693), 16,
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
  [6069] = 3,
    ACTIONS(697), 1,
      anon_sym_and,
    STATE(180), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(695), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6092] = 3,
    ACTIONS(700), 1,
      aux_sym_sequence_token1,
    STATE(187), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6115] = 3,
    ACTIONS(676), 1,
      anon_sym_and,
    STATE(173), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(702), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6138] = 2,
    STATE(180), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(674), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6159] = 2,
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
  [6180] = 4,
    ACTIONS(704), 1,
      aux_sym_cardinality_token1,
    ACTIONS(706), 1,
      anon_sym_STAR2,
    ACTIONS(433), 2,
      aux_sym_sequence_token1,
      sym_number,
    ACTIONS(431), 12,
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
  [6205] = 2,
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
  [6226] = 3,
    ACTIONS(708), 1,
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
  [6249] = 1,
    ACTIONS(711), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6268] = 1,
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
  [6287] = 1,
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
  [6306] = 1,
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
  [6325] = 4,
    ACTIONS(719), 1,
      aux_sym_cardinality_token1,
    ACTIONS(721), 1,
      anon_sym_STAR2,
    ACTIONS(412), 2,
      aux_sym_sequence_token1,
      sym_number,
    ACTIONS(410), 12,
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
  [6350] = 3,
    ACTIONS(723), 1,
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
  [6373] = 2,
    STATE(183), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(702), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6394] = 1,
    ACTIONS(726), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6413] = 1,
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
      anon_sym_STAR,
      anon_sym_from,
      anon_sym_LPAREN,
      anon_sym_and,
  [6432] = 3,
    ACTIONS(730), 1,
      aux_sym_sequence_token1,
    STATE(193), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6455] = 1,
    ACTIONS(732), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6474] = 3,
    ACTIONS(734), 1,
      aux_sym_sequence_token1,
    STATE(201), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6497] = 1,
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
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_or,
      anon_sym_DQUOTE,
  [6516] = 3,
    ACTIONS(738), 1,
      aux_sym_sequence_token1,
    STATE(201), 1,
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
  [6539] = 1,
    ACTIONS(741), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6558] = 1,
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
  [6577] = 1,
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
  [6596] = 3,
    ACTIONS(747), 1,
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
  [6619] = 3,
    ACTIONS(750), 1,
      aux_sym_sequence_token1,
    STATE(205), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6642] = 1,
    ACTIONS(752), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6661] = 3,
    ACTIONS(754), 1,
      aux_sym_sequence_token1,
    STATE(208), 1,
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
  [6684] = 3,
    ACTIONS(757), 1,
      aux_sym_sequence_token1,
    STATE(208), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6707] = 3,
    ACTIONS(761), 1,
      anon_sym_and,
    STATE(210), 1,
      aux_sym_vs_filter_list_repeat1,
    ACTIONS(759), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [6729] = 3,
    ACTIONS(766), 1,
      anon_sym_and,
    STATE(227), 1,
      aux_sym_contains_rule_repeat1,
    ACTIONS(764), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [6751] = 3,
    ACTIONS(770), 1,
      anon_sym_and,
    STATE(221), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(768), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [6773] = 3,
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
  [6795] = 3,
    ACTIONS(774), 1,
      anon_sym_or,
    STATE(224), 1,
      aux_sym_only_rule_repeat1,
    ACTIONS(772), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [6817] = 1,
    ACTIONS(776), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6835] = 2,
    STATE(234), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(702), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6855] = 3,
    ACTIONS(778), 1,
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
  [6877] = 3,
    ACTIONS(770), 1,
      anon_sym_and,
    STATE(223), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(781), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [6899] = 3,
    ACTIONS(785), 1,
      anon_sym_and,
    STATE(225), 1,
      aux_sym_vs_filter_list_repeat1,
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
  [6921] = 4,
    ACTIONS(787), 2,
      aux_sym_sequence_token1,
      sym_number,
    STATE(220), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(445), 5,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_Reference,
      anon_sym_Canonical,
    ACTIONS(789), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [6945] = 3,
    ACTIONS(792), 1,
      anon_sym_and,
    STATE(221), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(695), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [6967] = 1,
    ACTIONS(695), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6985] = 3,
    ACTIONS(770), 1,
      anon_sym_and,
    STATE(221), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(795), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7007] = 3,
    ACTIONS(799), 1,
      anon_sym_or,
    STATE(224), 1,
      aux_sym_only_rule_repeat1,
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
  [7029] = 3,
    ACTIONS(785), 1,
      anon_sym_and,
    STATE(210), 1,
      aux_sym_vs_filter_list_repeat1,
    ACTIONS(802), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7051] = 2,
    ACTIONS(806), 1,
      anon_sym_T,
    ACTIONS(804), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7071] = 3,
    ACTIONS(810), 1,
      anon_sym_and,
    STATE(227), 1,
      aux_sym_contains_rule_repeat1,
    ACTIONS(808), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7093] = 1,
    ACTIONS(813), 15,
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
  [7111] = 1,
    ACTIONS(797), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7129] = 3,
    ACTIONS(815), 1,
      aux_sym_sequence_token1,
    STATE(217), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7151] = 2,
    ACTIONS(371), 1,
      anon_sym_COLON,
    ACTIONS(678), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7171] = 3,
    ACTIONS(136), 2,
      anon_sym_or,
      anon_sym_DQUOTE,
    ACTIONS(817), 2,
      aux_sym_sequence_token1,
      sym_number,
    ACTIONS(500), 11,
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
  [7193] = 3,
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
  [7215] = 2,
    STATE(221), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(674), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7235] = 3,
    ACTIONS(770), 1,
      anon_sym_and,
    STATE(238), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(702), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7257] = 2,
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
  [7277] = 2,
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
  [7297] = 3,
    ACTIONS(770), 1,
      anon_sym_and,
    STATE(221), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(674), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7319] = 3,
    ACTIONS(819), 1,
      aux_sym_sequence_token1,
    STATE(249), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [7341] = 2,
    ACTIONS(823), 1,
      anon_sym_and,
    ACTIONS(821), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7361] = 3,
    ACTIONS(827), 1,
      anon_sym_LPAREN,
    STATE(296), 1,
      sym_strength,
    ACTIONS(825), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7383] = 2,
    ACTIONS(829), 1,
      anon_sym_and,
    ACTIONS(821), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7403] = 3,
    ACTIONS(766), 1,
      anon_sym_and,
    STATE(211), 1,
      aux_sym_contains_rule_repeat1,
    ACTIONS(831), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7425] = 8,
    ACTIONS(835), 1,
      aux_sym_sequence_token1,
    ACTIONS(837), 1,
      sym_number,
    STATE(219), 1,
      sym_vs_filter_definition,
    STATE(306), 1,
      sym_vs_filter_list,
    STATE(366), 1,
      sym_name,
    STATE(458), 1,
      aux_sym_sequence_repeat1,
    STATE(502), 1,
      sym_sequence,
    ACTIONS(833), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7457] = 3,
    ACTIONS(770), 1,
      anon_sym_and,
    STATE(212), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(795), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7479] = 1,
    ACTIONS(839), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7497] = 1,
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
  [7515] = 3,
    ACTIONS(774), 1,
      anon_sym_or,
    STATE(214), 1,
      aux_sym_only_rule_repeat1,
    ACTIONS(843), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7537] = 3,
    ACTIONS(845), 1,
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
  [7559] = 2,
    ACTIONS(848), 1,
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
  [7579] = 1,
    ACTIONS(850), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7596] = 1,
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
      anon_sym_where,
  [7613] = 2,
    ACTIONS(854), 1,
      anon_sym_and,
    ACTIONS(821), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7632] = 2,
    ACTIONS(856), 2,
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
  [7651] = 2,
    ACTIONS(433), 2,
      aux_sym_sequence_token1,
      sym_number,
    ACTIONS(431), 12,
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
  [7670] = 3,
    ACTIONS(858), 1,
      aux_sym_sequence_token1,
    STATE(257), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [7691] = 3,
    ACTIONS(860), 1,
      aux_sym_sequence_token1,
    STATE(257), 1,
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
  [7712] = 1,
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
      anon_sym_and,
  [7729] = 1,
    ACTIONS(865), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7746] = 1,
    ACTIONS(759), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7763] = 2,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7782] = 2,
    ACTIONS(869), 1,
      anon_sym_and,
    ACTIONS(821), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7801] = 2,
    ACTIONS(429), 1,
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
  [7820] = 2,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(873), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7839] = 2,
    ACTIONS(429), 1,
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
  [7858] = 2,
    ACTIONS(879), 1,
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
  [7877] = 1,
    ACTIONS(881), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7894] = 7,
    ACTIONS(835), 1,
      aux_sym_sequence_token1,
    ACTIONS(837), 1,
      sym_number,
    STATE(260), 1,
      sym_vs_filter_definition,
    STATE(366), 1,
      sym_name,
    STATE(458), 1,
      aux_sym_sequence_repeat1,
    STATE(502), 1,
      sym_sequence,
    ACTIONS(833), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7923] = 2,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(883), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7942] = 7,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(886), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(243), 1,
      sym_item,
    STATE(369), 1,
      aux_sym_sequence_repeat1,
    STATE(377), 1,
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
  [7971] = 2,
    ACTIONS(888), 1,
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
  [7990] = 2,
    ACTIONS(892), 1,
      anon_sym_where,
    ACTIONS(890), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8009] = 1,
    ACTIONS(678), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [8026] = 1,
    ACTIONS(894), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [8043] = 1,
    ACTIONS(371), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [8060] = 1,
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
  [8077] = 7,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(886), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(278), 1,
      sym_item,
    STATE(369), 1,
      aux_sym_sequence_repeat1,
    STATE(377), 1,
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
  [8106] = 1,
    ACTIONS(808), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [8123] = 1,
    ACTIONS(601), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8139] = 1,
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
  [8155] = 1,
    ACTIONS(502), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8171] = 1,
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
  [8187] = 1,
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
  [8203] = 6,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(904), 1,
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
  [8229] = 6,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(906), 1,
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
  [8255] = 6,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(908), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(170), 1,
      aux_sym_sequence_repeat1,
    STATE(182), 1,
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
  [8281] = 6,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(904), 1,
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
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(910), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(199), 1,
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
  [8333] = 6,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(912), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(90), 1,
      aux_sym_sequence_repeat1,
    STATE(108), 1,
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
  [8359] = 6,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(914), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(346), 1,
      sym_name,
    STATE(357), 1,
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
  [8385] = 1,
    ACTIONS(916), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8401] = 6,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(918), 1,
      aux_sym_sequence_token1,
    STATE(7), 1,
      sym_name,
    STATE(21), 1,
      sym_sequence,
    STATE(110), 1,
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
  [8427] = 6,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(920), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(345), 1,
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
  [8453] = 1,
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
  [8469] = 6,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(925), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(35), 1,
      sym_name,
    STATE(112), 1,
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
  [8495] = 1,
    ACTIONS(927), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8511] = 6,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(929), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(415), 1,
      aux_sym_sequence_repeat1,
    STATE(437), 1,
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
  [8537] = 1,
    ACTIONS(607), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8553] = 1,
    ACTIONS(931), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8569] = 1,
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
  [8585] = 1,
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
  [8601] = 1,
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
  [8617] = 1,
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
  [8633] = 6,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(941), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(43), 1,
      sym_name,
    STATE(136), 1,
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
  [8659] = 1,
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
  [8675] = 1,
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
  [8691] = 6,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(918), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(108), 1,
      sym_name,
    STATE(110), 1,
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
  [8717] = 6,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(941), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(44), 1,
      sym_name,
    STATE(136), 1,
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
  [8743] = 1,
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
  [8759] = 1,
    ACTIONS(556), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8775] = 6,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(912), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(30), 1,
      sym_name,
    STATE(90), 1,
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
  [8801] = 6,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(904), 1,
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
  [8827] = 6,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(918), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(110), 1,
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
  [8853] = 1,
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
  [8869] = 2,
    ACTIONS(953), 1,
      anon_sym_POUND,
    ACTIONS(951), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [8887] = 6,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(904), 1,
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
  [8913] = 1,
    ACTIONS(628), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8929] = 6,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(955), 1,
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
  [8955] = 6,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(918), 1,
      aux_sym_sequence_token1,
    STATE(3), 1,
      sym_name,
    STATE(21), 1,
      sym_sequence,
    STATE(110), 1,
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
  [8981] = 6,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(918), 1,
      aux_sym_sequence_token1,
    STATE(5), 1,
      sym_name,
    STATE(21), 1,
      sym_sequence,
    STATE(110), 1,
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
  [9007] = 1,
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
  [9023] = 1,
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
  [9039] = 6,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(904), 1,
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
  [9065] = 1,
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
  [9081] = 6,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(904), 1,
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
  [9107] = 6,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(908), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(170), 1,
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
  [9133] = 1,
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
  [9149] = 1,
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
  [9165] = 6,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(908), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(170), 1,
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
  [9191] = 6,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(941), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(108), 1,
      sym_name,
    STATE(136), 1,
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
  [9217] = 1,
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
  [9233] = 1,
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
  [9249] = 2,
    ACTIONS(817), 2,
      aux_sym_sequence_token1,
      sym_number,
    ACTIONS(500), 11,
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
  [9267] = 1,
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
  [9283] = 1,
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
  [9299] = 1,
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
  [9315] = 1,
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
  [9331] = 1,
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
  [9347] = 6,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(925), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(112), 1,
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
  [9373] = 1,
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
  [9389] = 6,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(908), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(170), 1,
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
  [9415] = 1,
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
  [9431] = 1,
    ACTIONS(951), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [9446] = 9,
    ACTIONS(308), 1,
      aux_sym_sequence_token1,
    ACTIONS(620), 1,
      anon_sym_codes,
    ACTIONS(624), 1,
      anon_sym_POUND,
    STATE(126), 1,
      sym_code,
    STATE(175), 1,
      sym_code_string,
    STATE(351), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(420), 1,
      aux_sym_sequence_repeat1,
    STATE(546), 1,
      sym_sequence,
    STATE(305), 2,
      sym_vs_concept_component,
      sym_vs_filter_component,
  [9475] = 6,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(423), 1,
      anon_sym_Expression,
    ACTIONS(425), 1,
      anon_sym_Severity,
    ACTIONS(427), 1,
      anon_sym_XPath,
    STATE(72), 2,
      sym_invariant_metadata,
      aux_sym_invariant_repeat1,
    STATE(191), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
  [9498] = 6,
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
    STATE(149), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
  [9521] = 4,
    ACTIONS(55), 1,
      anon_sym_and,
    STATE(350), 1,
      aux_sym_flag_rule_repeat1,
    STATE(84), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(65), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [9540] = 3,
    ACTIONS(985), 1,
      aux_sym_sequence_token1,
    STATE(349), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 7,
      anon_sym_and,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [9556] = 3,
    ACTIONS(987), 1,
      aux_sym_sequence_token1,
    STATE(349), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 7,
      anon_sym_and,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [9572] = 3,
    ACTIONS(990), 1,
      anon_sym_and,
    STATE(350), 1,
      aux_sym_flag_rule_repeat1,
    ACTIONS(993), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [9587] = 7,
    ACTIONS(308), 1,
      aux_sym_sequence_token1,
    ACTIONS(995), 1,
      anon_sym_POUND,
    STATE(126), 1,
      sym_code,
    STATE(355), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(420), 1,
      aux_sym_sequence_repeat1,
    STATE(457), 1,
      sym_code_string,
    STATE(547), 1,
      sym_sequence,
  [9609] = 7,
    ACTIONS(308), 1,
      aux_sym_sequence_token1,
    ACTIONS(997), 1,
      anon_sym_insert,
    ACTIONS(999), 1,
      anon_sym_POUND,
    STATE(56), 1,
      aux_sym_code_insert_rule_repeat1,
    STATE(101), 1,
      sym_code,
    STATE(420), 1,
      aux_sym_sequence_repeat1,
    STATE(533), 1,
      sym_sequence,
  [9631] = 7,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    ACTIONS(543), 1,
      anon_sym_insert,
    ACTIONS(622), 1,
      anon_sym_system,
    ACTIONS(1001), 1,
      aux_sym_sequence_token1,
    STATE(57), 1,
      sym_sequence,
    STATE(166), 1,
      aux_sym_sequence_repeat1,
    STATE(233), 1,
      sym_path,
  [9653] = 1,
    ACTIONS(993), 7,
      anon_sym_and,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [9663] = 7,
    ACTIONS(1003), 1,
      anon_sym_POUND,
    ACTIONS(1006), 1,
      aux_sym_sequence_token1,
    STATE(126), 1,
      sym_code,
    STATE(355), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(420), 1,
      aux_sym_sequence_repeat1,
    STATE(518), 1,
      sym_code_string,
    STATE(550), 1,
      sym_sequence,
  [9685] = 6,
    ACTIONS(543), 1,
      anon_sym_insert,
    ACTIONS(622), 1,
      anon_sym_system,
    ACTIONS(1009), 1,
      aux_sym_sequence_token1,
    STATE(57), 1,
      sym_sequence,
    STATE(163), 1,
      aux_sym_sequence_repeat1,
    STATE(213), 1,
      sym_path,
  [9704] = 3,
    ACTIONS(1011), 1,
      aux_sym_sequence_token1,
    STATE(358), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 4,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
  [9717] = 3,
    ACTIONS(1013), 1,
      aux_sym_sequence_token1,
    STATE(358), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 4,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
  [9730] = 3,
    ACTIONS(1016), 1,
      aux_sym_sequence_token1,
    STATE(360), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 4,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [9743] = 3,
    ACTIONS(1018), 1,
      aux_sym_sequence_token1,
    STATE(360), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 4,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [9756] = 5,
    ACTIONS(622), 1,
      anon_sym_system,
    ACTIONS(1021), 1,
      aux_sym_sequence_token1,
    STATE(57), 1,
      sym_sequence,
    STATE(348), 1,
      aux_sym_sequence_repeat1,
    STATE(354), 1,
      sym_path,
  [9772] = 3,
    ACTIONS(1023), 1,
      aux_sym_sequence_token1,
    STATE(362), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 3,
      anon_sym_from,
      anon_sym_and,
      anon_sym_DQUOTE,
  [9784] = 3,
    ACTIONS(1026), 1,
      aux_sym_sequence_token1,
    STATE(363), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 3,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_CARET,
  [9796] = 3,
    ACTIONS(1029), 1,
      aux_sym_sequence_token1,
    STATE(363), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 3,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_CARET,
  [9808] = 3,
    ACTIONS(1031), 1,
      aux_sym_sequence_token1,
    STATE(362), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 3,
      anon_sym_from,
      anon_sym_and,
      anon_sym_DQUOTE,
  [9820] = 5,
    ACTIONS(1033), 1,
      anon_sym_EQ,
    ACTIONS(1035), 1,
      aux_sym_sequence_token1,
    STATE(54), 1,
      sym_vs_filter_operator,
    STATE(95), 1,
      aux_sym_sequence_repeat1,
    STATE(107), 1,
      sym_sequence,
  [9836] = 4,
    ACTIONS(128), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1037), 1,
      aux_sym_sequence_token1,
    STATE(367), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 2,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [9850] = 5,
    ACTIONS(1040), 1,
      anon_sym_POUND,
    ACTIONS(1042), 1,
      aux_sym_sequence_token1,
    STATE(380), 1,
      aux_sym_sequence_repeat1,
    STATE(442), 1,
      sym_sequence,
    STATE(497), 1,
      sym_code,
  [9866] = 4,
    ACTIONS(134), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1044), 1,
      aux_sym_sequence_token1,
    STATE(367), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 2,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [9880] = 5,
    ACTIONS(308), 1,
      aux_sym_sequence_token1,
    ACTIONS(1046), 1,
      anon_sym_POUND,
    STATE(189), 1,
      sym_code,
    STATE(420), 1,
      aux_sym_sequence_repeat1,
    STATE(537), 1,
      sym_sequence,
  [9896] = 3,
    ACTIONS(1048), 1,
      aux_sym_sequence_token1,
    STATE(373), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE,
  [9908] = 5,
    ACTIONS(308), 1,
      aux_sym_sequence_token1,
    ACTIONS(1050), 1,
      anon_sym_POUND,
    STATE(168), 1,
      sym_code,
    STATE(420), 1,
      aux_sym_sequence_repeat1,
    STATE(545), 1,
      sym_sequence,
  [9924] = 3,
    ACTIONS(1052), 1,
      aux_sym_sequence_token1,
    STATE(373), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE,
  [9936] = 5,
    ACTIONS(1055), 1,
      anon_sym_POUND,
    ACTIONS(1057), 1,
      aux_sym_sequence_token1,
    STATE(239), 1,
      aux_sym_sequence_repeat1,
    STATE(315), 1,
      sym_sequence,
    STATE(343), 1,
      sym_code,
  [9952] = 5,
    ACTIONS(308), 1,
      aux_sym_sequence_token1,
    ACTIONS(1059), 1,
      anon_sym_POUND,
    STATE(128), 1,
      sym_code,
    STATE(420), 1,
      aux_sym_sequence_repeat1,
    STATE(549), 1,
      sym_sequence,
  [9968] = 4,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
    ACTIONS(1061), 1,
      anon_sym_or,
    STATE(154), 1,
      sym_string,
    STATE(472), 1,
      aux_sym_only_rule_repeat1,
  [9981] = 4,
    ACTIONS(1063), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1065), 1,
      anon_sym_DOT_DOT,
    ACTIONS(1067), 1,
      anon_sym_named,
    STATE(66), 1,
      sym_cardinality,
  [9994] = 4,
    ACTIONS(1069), 1,
      aux_sym_sequence_token1,
    STATE(209), 1,
      aux_sym_sequence_repeat1,
    STATE(263), 1,
      sym_sequence,
    STATE(300), 1,
      sym_param_rule_set_reference,
  [10007] = 3,
    ACTIONS(1071), 1,
      aux_sym_sequence_token1,
    STATE(379), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [10018] = 3,
    ACTIONS(1074), 1,
      aux_sym_sequence_token1,
    STATE(386), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 2,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [10029] = 3,
    ACTIONS(1076), 1,
      anon_sym_DQUOTE,
    STATE(383), 1,
      aux_sym_string_repeat1,
    ACTIONS(1078), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [10040] = 4,
    ACTIONS(1069), 1,
      aux_sym_sequence_token1,
    STATE(209), 1,
      aux_sym_sequence_repeat1,
    STATE(269), 1,
      sym_sequence,
    STATE(294), 1,
      sym_param_rule_set_reference,
  [10053] = 3,
    ACTIONS(1080), 1,
      anon_sym_DQUOTE,
    STATE(412), 1,
      aux_sym_string_repeat1,
    ACTIONS(1082), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [10064] = 3,
    ACTIONS(1084), 1,
      anon_sym_from,
    STATE(272), 1,
      sym_vs_component_from,
    ACTIONS(136), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
  [10075] = 3,
    ACTIONS(1086), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(385), 1,
      aux_sym_string_repeat1,
    ACTIONS(1088), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [10086] = 3,
    ACTIONS(1091), 1,
      aux_sym_sequence_token1,
    STATE(386), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 2,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [10097] = 4,
    ACTIONS(1094), 1,
      anon_sym_RPAREN,
    ACTIONS(1096), 1,
      aux_sym_sequence_token1,
    ACTIONS(1098), 1,
      aux_sym_param_rule_set_params_token1,
    STATE(405), 1,
      aux_sym_param_rule_set_params_repeat1,
  [10110] = 3,
    ACTIONS(1100), 1,
      anon_sym_DQUOTE,
    STATE(410), 1,
      aux_sym_string_repeat1,
    ACTIONS(1102), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [10121] = 3,
    ACTIONS(1104), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(411), 1,
      aux_sym_string_repeat1,
    ACTIONS(1106), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [10132] = 3,
    ACTIONS(1108), 1,
      aux_sym_sequence_token1,
    STATE(379), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [10143] = 4,
    ACTIONS(123), 1,
      anon_sym_DOT_DOT,
    ACTIONS(128), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1110), 1,
      aux_sym_sequence_token1,
    STATE(391), 1,
      aux_sym_sequence_repeat1,
  [10156] = 3,
    ACTIONS(1113), 1,
      aux_sym_sequence_token1,
    STATE(399), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 2,
      anon_sym_and,
      anon_sym_DQUOTE,
  [10167] = 4,
    ACTIONS(1115), 1,
      aux_sym_sequence_token1,
    STATE(73), 1,
      sym_sequence,
    STATE(80), 1,
      sym_param_rule_set_reference,
    STATE(406), 1,
      aux_sym_sequence_repeat1,
  [10180] = 4,
    ACTIONS(1117), 1,
      anon_sym_RPAREN,
    ACTIONS(1119), 1,
      anon_sym_or,
    ACTIONS(1121), 1,
      anon_sym_PIPE,
    STATE(421), 1,
      aux_sym_canonical_repeat1,
  [10193] = 3,
    ACTIONS(1123), 1,
      aux_sym_sequence_token1,
    STATE(413), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 2,
      anon_sym_or,
      anon_sym_DQUOTE,
  [10204] = 4,
    ACTIONS(1069), 1,
      aux_sym_sequence_token1,
    STATE(209), 1,
      aux_sym_sequence_repeat1,
    STATE(265), 1,
      sym_sequence,
    STATE(334), 1,
      sym_param_rule_set_reference,
  [10217] = 4,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
    ACTIONS(1061), 1,
      anon_sym_or,
    STATE(146), 1,
      sym_string,
    STATE(376), 1,
      aux_sym_only_rule_repeat1,
  [10230] = 4,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
    ACTIONS(1061), 1,
      anon_sym_or,
    STATE(146), 1,
      sym_string,
    STATE(472), 1,
      aux_sym_only_rule_repeat1,
  [10243] = 3,
    ACTIONS(1125), 1,
      aux_sym_sequence_token1,
    STATE(399), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 2,
      anon_sym_and,
      anon_sym_DQUOTE,
  [10254] = 4,
    ACTIONS(1128), 1,
      aux_sym_sequence_token1,
    ACTIONS(1130), 1,
      aux_sym_param_rule_set_params_token1,
    STATE(387), 1,
      aux_sym_param_rule_set_params_repeat1,
    STATE(526), 1,
      sym_param_rule_set_params,
  [10267] = 4,
    ACTIONS(1132), 1,
      anon_sym_system,
    ACTIONS(1134), 1,
      anon_sym_valueset,
    STATE(240), 1,
      sym_vs_from_system,
    STATE(242), 1,
      sym_vs_from_valueset,
  [10280] = 1,
    ACTIONS(1136), 4,
      anon_sym_example,
      anon_sym_preferred,
      anon_sym_extensible,
      anon_sym_required,
  [10287] = 3,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(58), 2,
      sym_string,
      sym_multiline_string,
  [10298] = 4,
    ACTIONS(1069), 1,
      aux_sym_sequence_token1,
    STATE(209), 1,
      aux_sym_sequence_repeat1,
    STATE(264), 1,
      sym_sequence,
    STATE(324), 1,
      sym_param_rule_set_reference,
  [10311] = 4,
    ACTIONS(1138), 1,
      anon_sym_RPAREN,
    ACTIONS(1140), 1,
      aux_sym_sequence_token1,
    ACTIONS(1143), 1,
      aux_sym_param_rule_set_params_token1,
    STATE(405), 1,
      aux_sym_param_rule_set_params_repeat1,
  [10324] = 3,
    ACTIONS(1146), 1,
      aux_sym_sequence_token1,
    STATE(407), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(130), 2,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [10335] = 3,
    ACTIONS(1148), 1,
      aux_sym_sequence_token1,
    STATE(407), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 2,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [10346] = 3,
    ACTIONS(1151), 1,
      anon_sym_DQUOTE,
    STATE(409), 1,
      aux_sym_string_repeat1,
    ACTIONS(1153), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [10357] = 3,
    ACTIONS(1155), 1,
      anon_sym_DQUOTE,
    STATE(412), 1,
      aux_sym_string_repeat1,
    ACTIONS(1082), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [10368] = 3,
    ACTIONS(1157), 1,
      anon_sym_DQUOTE,
    STATE(412), 1,
      aux_sym_string_repeat1,
    ACTIONS(1082), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [10379] = 3,
    ACTIONS(1159), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(385), 1,
      aux_sym_string_repeat1,
    ACTIONS(1161), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [10390] = 3,
    ACTIONS(1086), 1,
      anon_sym_DQUOTE,
    STATE(412), 1,
      aux_sym_string_repeat1,
    ACTIONS(1163), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [10401] = 3,
    ACTIONS(1166), 1,
      aux_sym_sequence_token1,
    STATE(413), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(123), 2,
      anon_sym_or,
      anon_sym_DQUOTE,
  [10412] = 4,
    ACTIONS(1069), 1,
      aux_sym_sequence_token1,
    STATE(209), 1,
      aux_sym_sequence_repeat1,
    STATE(261), 1,
      sym_sequence,
    STATE(322), 1,
      sym_param_rule_set_reference,
  [10425] = 4,
    ACTIONS(130), 1,
      anon_sym_DOT_DOT,
    ACTIONS(134), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1169), 1,
      aux_sym_sequence_token1,
    STATE(391), 1,
      aux_sym_sequence_repeat1,
  [10438] = 4,
    ACTIONS(1171), 1,
      anon_sym_system,
    ACTIONS(1173), 1,
      anon_sym_valueset,
    STATE(253), 1,
      sym_vs_from_system,
    STATE(262), 1,
      sym_vs_from_valueset,
  [10451] = 4,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
    ACTIONS(1061), 1,
      anon_sym_or,
    STATE(167), 1,
      sym_string,
    STATE(398), 1,
      aux_sym_only_rule_repeat1,
  [10464] = 3,
    ACTIONS(1175), 1,
      aux_sym_sequence_token1,
    STATE(390), 1,
      aux_sym_sequence_repeat1,
    STATE(440), 1,
      sym_sequence,
  [10474] = 3,
    ACTIONS(1177), 1,
      aux_sym_sequence_token1,
    STATE(33), 1,
      sym_sequence,
    STATE(230), 1,
      aux_sym_sequence_repeat1,
  [10484] = 3,
    ACTIONS(130), 1,
      anon_sym_POUND,
    ACTIONS(1179), 1,
      aux_sym_sequence_token1,
    STATE(453), 1,
      aux_sym_sequence_repeat1,
  [10494] = 3,
    ACTIONS(1119), 1,
      anon_sym_or,
    ACTIONS(1181), 1,
      anon_sym_RPAREN,
    STATE(426), 1,
      aux_sym_canonical_repeat1,
  [10504] = 3,
    ACTIONS(1183), 1,
      aux_sym_sequence_token1,
    STATE(111), 1,
      aux_sym_sequence_repeat1,
    STATE(145), 1,
      sym_sequence,
  [10514] = 3,
    ACTIONS(1185), 1,
      aux_sym_sequence_token1,
    STATE(33), 1,
      sym_sequence,
    STATE(365), 1,
      aux_sym_sequence_repeat1,
  [10524] = 3,
    ACTIONS(1119), 1,
      anon_sym_or,
    ACTIONS(1187), 1,
      anon_sym_RPAREN,
    STATE(426), 1,
      aux_sym_canonical_repeat1,
  [10534] = 3,
    ACTIONS(1175), 1,
      aux_sym_sequence_token1,
    STATE(390), 1,
      aux_sym_sequence_repeat1,
    STATE(501), 1,
      sym_sequence,
  [10544] = 3,
    ACTIONS(1189), 1,
      anon_sym_RPAREN,
    ACTIONS(1191), 1,
      anon_sym_or,
    STATE(426), 1,
      aux_sym_canonical_repeat1,
  [10554] = 3,
    ACTIONS(1119), 1,
      anon_sym_or,
    ACTIONS(1194), 1,
      anon_sym_RPAREN,
    STATE(424), 1,
      aux_sym_canonical_repeat1,
  [10564] = 2,
    ACTIONS(1196), 1,
      anon_sym_PIPE,
    ACTIONS(1189), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [10572] = 3,
    ACTIONS(1198), 1,
      anon_sym_RPAREN,
    ACTIONS(1200), 1,
      anon_sym_or,
    STATE(429), 1,
      aux_sym_reference_repeat1,
  [10582] = 3,
    ACTIONS(1185), 1,
      aux_sym_sequence_token1,
    STATE(36), 1,
      sym_sequence,
    STATE(365), 1,
      aux_sym_sequence_repeat1,
  [10592] = 3,
    ACTIONS(1203), 1,
      aux_sym_sequence_token1,
    STATE(33), 1,
      sym_sequence,
    STATE(112), 1,
      aux_sym_sequence_repeat1,
  [10602] = 3,
    ACTIONS(1175), 1,
      aux_sym_sequence_token1,
    STATE(390), 1,
      aux_sym_sequence_repeat1,
    STATE(427), 1,
      sym_sequence,
  [10612] = 3,
    ACTIONS(1205), 1,
      aux_sym_sequence_token1,
    STATE(371), 1,
      aux_sym_sequence_repeat1,
    STATE(428), 1,
      sym_sequence,
  [10622] = 3,
    ACTIONS(1207), 1,
      anon_sym_RPAREN,
    ACTIONS(1209), 1,
      anon_sym_or,
    STATE(429), 1,
      aux_sym_reference_repeat1,
  [10632] = 3,
    ACTIONS(1175), 1,
      aux_sym_sequence_token1,
    STATE(390), 1,
      aux_sym_sequence_repeat1,
    STATE(500), 1,
      sym_sequence,
  [10642] = 3,
    ACTIONS(1211), 1,
      anon_sym_SQUOTE,
    ACTIONS(1213), 1,
      aux_sym_unit_token1,
    STATE(436), 1,
      aux_sym_unit_repeat1,
  [10652] = 3,
    ACTIONS(1063), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1065), 1,
      anon_sym_DOT_DOT,
    STATE(63), 1,
      sym_cardinality,
  [10662] = 3,
    ACTIONS(1203), 1,
      aux_sym_sequence_token1,
    STATE(36), 1,
      sym_sequence,
    STATE(112), 1,
      aux_sym_sequence_repeat1,
  [10672] = 3,
    ACTIONS(1216), 1,
      aux_sym_sequence_token1,
    STATE(33), 1,
      sym_sequence,
    STATE(161), 1,
      aux_sym_sequence_repeat1,
  [10682] = 3,
    ACTIONS(1209), 1,
      anon_sym_or,
    ACTIONS(1218), 1,
      anon_sym_RPAREN,
    STATE(434), 1,
      aux_sym_reference_repeat1,
  [10692] = 3,
    ACTIONS(1220), 1,
      anon_sym_SQUOTE,
    ACTIONS(1222), 1,
      aux_sym_unit_token1,
    STATE(436), 1,
      aux_sym_unit_repeat1,
  [10702] = 3,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
    ACTIONS(1224), 1,
      anon_sym_POUND,
    STATE(162), 1,
      sym_string,
  [10712] = 3,
    ACTIONS(1226), 1,
      aux_sym_sequence_token1,
    STATE(33), 1,
      sym_sequence,
    STATE(113), 1,
      aux_sym_sequence_repeat1,
  [10722] = 3,
    ACTIONS(1226), 1,
      aux_sym_sequence_token1,
    STATE(36), 1,
      sym_sequence,
    STATE(113), 1,
      aux_sym_sequence_repeat1,
  [10732] = 3,
    ACTIONS(1228), 1,
      aux_sym_sequence_token1,
    STATE(67), 1,
      aux_sym_sequence_repeat1,
    STATE(78), 1,
      sym_sequence,
  [10742] = 3,
    ACTIONS(1216), 1,
      aux_sym_sequence_token1,
    STATE(36), 1,
      sym_sequence,
    STATE(161), 1,
      aux_sym_sequence_repeat1,
  [10752] = 3,
    ACTIONS(1230), 1,
      sym_number,
    STATE(275), 1,
      sym_quantity,
    STATE(276), 1,
      sym_ratio_part,
  [10762] = 3,
    ACTIONS(1205), 1,
      aux_sym_sequence_token1,
    STATE(371), 1,
      aux_sym_sequence_repeat1,
    STATE(394), 1,
      sym_sequence,
  [10772] = 3,
    ACTIONS(1232), 1,
      aux_sym_sequence_token1,
    STATE(33), 1,
      sym_sequence,
    STATE(478), 1,
      aux_sym_sequence_repeat1,
  [10782] = 3,
    ACTIONS(1234), 1,
      anon_sym_SQUOTE,
    ACTIONS(1236), 1,
      aux_sym_unit_token1,
    STATE(441), 1,
      aux_sym_unit_repeat1,
  [10792] = 3,
    ACTIONS(1232), 1,
      aux_sym_sequence_token1,
    STATE(36), 1,
      sym_sequence,
    STATE(478), 1,
      aux_sym_sequence_repeat1,
  [10802] = 3,
    ACTIONS(1238), 1,
      aux_sym_sequence_token1,
    STATE(33), 1,
      sym_sequence,
    STATE(115), 1,
      aux_sym_sequence_repeat1,
  [10812] = 3,
    ACTIONS(123), 1,
      anon_sym_POUND,
    ACTIONS(1240), 1,
      aux_sym_sequence_token1,
    STATE(453), 1,
      aux_sym_sequence_repeat1,
  [10822] = 3,
    ACTIONS(1238), 1,
      aux_sym_sequence_token1,
    STATE(36), 1,
      sym_sequence,
    STATE(115), 1,
      aux_sym_sequence_repeat1,
  [10832] = 3,
    ACTIONS(1228), 1,
      aux_sym_sequence_token1,
    STATE(67), 1,
      aux_sym_sequence_repeat1,
    STATE(89), 1,
      sym_sequence,
  [10842] = 3,
    ACTIONS(1243), 1,
      aux_sym_sequence_token1,
    STATE(33), 1,
      sym_sequence,
    STATE(156), 1,
      aux_sym_sequence_repeat1,
  [10852] = 3,
    ACTIONS(682), 1,
      anon_sym_from,
    ACTIONS(684), 1,
      anon_sym_and,
    STATE(327), 1,
      sym_vs_component_from,
  [10862] = 3,
    ACTIONS(130), 1,
      anon_sym_EQ,
    ACTIONS(1245), 1,
      aux_sym_sequence_token1,
    STATE(471), 1,
      aux_sym_sequence_repeat1,
  [10872] = 3,
    ACTIONS(1248), 1,
      aux_sym_sequence_token1,
    STATE(98), 1,
      aux_sym_sequence_repeat1,
    STATE(103), 1,
      sym_sequence,
  [10882] = 3,
    ACTIONS(1243), 1,
      aux_sym_sequence_token1,
    STATE(36), 1,
      sym_sequence,
    STATE(156), 1,
      aux_sym_sequence_repeat1,
  [10892] = 3,
    ACTIONS(1183), 1,
      aux_sym_sequence_token1,
    STATE(111), 1,
      aux_sym_sequence_repeat1,
    STATE(130), 1,
      sym_sequence,
  [10902] = 3,
    ACTIONS(1177), 1,
      aux_sym_sequence_token1,
    STATE(36), 1,
      sym_sequence,
    STATE(230), 1,
      aux_sym_sequence_repeat1,
  [10912] = 3,
    ACTIONS(1250), 1,
      aux_sym_sequence_token1,
    STATE(33), 1,
      sym_sequence,
    STATE(256), 1,
      aux_sym_sequence_repeat1,
  [10922] = 3,
    ACTIONS(1252), 1,
      aux_sym_sequence_token1,
    STATE(33), 1,
      sym_sequence,
    STATE(392), 1,
      aux_sym_sequence_repeat1,
  [10932] = 3,
    ACTIONS(1254), 1,
      aux_sym_sequence_token1,
    STATE(470), 1,
      aux_sym_sequence_repeat1,
    STATE(512), 1,
      sym_sequence,
  [10942] = 3,
    ACTIONS(1248), 1,
      aux_sym_sequence_token1,
    STATE(98), 1,
      aux_sym_sequence_repeat1,
    STATE(105), 1,
      sym_sequence,
  [10952] = 3,
    ACTIONS(1252), 1,
      aux_sym_sequence_token1,
    STATE(36), 1,
      sym_sequence,
    STATE(392), 1,
      aux_sym_sequence_repeat1,
  [10962] = 3,
    ACTIONS(49), 1,
      anon_sym_insert,
    ACTIONS(63), 1,
      anon_sym_CARET,
    STATE(529), 1,
      sym_caret_path,
  [10972] = 2,
    ACTIONS(1256), 1,
      anon_sym_POUND,
    ACTIONS(140), 2,
      anon_sym_insert,
      anon_sym_CARET,
  [10980] = 3,
    ACTIONS(130), 1,
      anon_sym_EQ,
    ACTIONS(1258), 1,
      aux_sym_sequence_token1,
    STATE(471), 1,
      aux_sym_sequence_repeat1,
  [10990] = 3,
    ACTIONS(123), 1,
      anon_sym_EQ,
    ACTIONS(1260), 1,
      aux_sym_sequence_token1,
    STATE(471), 1,
      aux_sym_sequence_repeat1,
  [11000] = 3,
    ACTIONS(797), 1,
      anon_sym_DQUOTE,
    ACTIONS(1263), 1,
      anon_sym_or,
    STATE(472), 1,
      aux_sym_only_rule_repeat1,
  [11010] = 3,
    ACTIONS(1063), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1065), 1,
      anon_sym_DOT_DOT,
    STATE(81), 1,
      sym_cardinality,
  [11020] = 3,
    ACTIONS(1266), 1,
      aux_sym_sequence_token1,
    STATE(33), 1,
      sym_sequence,
    STATE(157), 1,
      aux_sym_sequence_repeat1,
  [11030] = 3,
    ACTIONS(1254), 1,
      aux_sym_sequence_token1,
    STATE(470), 1,
      aux_sym_sequence_repeat1,
    STATE(527), 1,
      sym_sequence,
  [11040] = 3,
    ACTIONS(1268), 1,
      sym_number,
    STATE(275), 1,
      sym_quantity,
    STATE(276), 1,
      sym_ratio_part,
  [11050] = 3,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(1270), 1,
      aux_sym_sequence_token1,
    STATE(477), 1,
      aux_sym_sequence_repeat1,
  [11060] = 3,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(1273), 1,
      aux_sym_sequence_token1,
    STATE(477), 1,
      aux_sym_sequence_repeat1,
  [11070] = 3,
    ACTIONS(1250), 1,
      aux_sym_sequence_token1,
    STATE(36), 1,
      sym_sequence,
    STATE(256), 1,
      aux_sym_sequence_repeat1,
  [11080] = 3,
    ACTIONS(1266), 1,
      aux_sym_sequence_token1,
    STATE(36), 1,
      sym_sequence,
    STATE(157), 1,
      aux_sym_sequence_repeat1,
  [11090] = 3,
    ACTIONS(1275), 1,
      aux_sym_sequence_token1,
    STATE(33), 1,
      sym_sequence,
    STATE(177), 1,
      aux_sym_sequence_repeat1,
  [11100] = 3,
    ACTIONS(1275), 1,
      aux_sym_sequence_token1,
    STATE(36), 1,
      sym_sequence,
    STATE(177), 1,
      aux_sym_sequence_repeat1,
  [11110] = 3,
    ACTIONS(1277), 1,
      aux_sym_sequence_token1,
    STATE(36), 1,
      sym_sequence,
    STATE(144), 1,
      aux_sym_sequence_repeat1,
  [11120] = 3,
    ACTIONS(1279), 1,
      aux_sym_sequence_token1,
    STATE(33), 1,
      sym_sequence,
    STATE(90), 1,
      aux_sym_sequence_repeat1,
  [11130] = 3,
    ACTIONS(1277), 1,
      aux_sym_sequence_token1,
    STATE(33), 1,
      sym_sequence,
    STATE(144), 1,
      aux_sym_sequence_repeat1,
  [11140] = 3,
    ACTIONS(1279), 1,
      aux_sym_sequence_token1,
    STATE(36), 1,
      sym_sequence,
    STATE(90), 1,
      aux_sym_sequence_repeat1,
  [11150] = 2,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
    STATE(83), 1,
      sym_string,
  [11157] = 2,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
    STATE(188), 1,
      sym_string,
  [11164] = 2,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
    STATE(190), 1,
      sym_string,
  [11171] = 2,
    ACTIONS(1084), 1,
      anon_sym_from,
    STATE(272), 1,
      sym_vs_component_from,
  [11178] = 2,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
    STATE(117), 1,
      sym_string,
  [11185] = 2,
    ACTIONS(1281), 1,
      anon_sym_DQUOTE,
    STATE(94), 1,
      sym_string,
  [11192] = 2,
    ACTIONS(1283), 1,
      anon_sym_POUND,
    ACTIONS(1285), 1,
      aux_sym_sequence_token1,
  [11199] = 2,
    ACTIONS(1281), 1,
      anon_sym_DQUOTE,
    STATE(97), 1,
      sym_string,
  [11206] = 2,
    ACTIONS(1287), 1,
      anon_sym_valueset,
    STATE(252), 1,
      sym_vs_from_valueset,
  [11213] = 2,
    ACTIONS(1289), 1,
      anon_sym_system,
    STATE(252), 1,
      sym_vs_from_system,
  [11220] = 2,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
    STATE(162), 1,
      sym_string,
  [11227] = 2,
    ACTIONS(1291), 1,
      anon_sym_valueset,
    STATE(252), 1,
      sym_vs_from_valueset,
  [11234] = 2,
    ACTIONS(1293), 1,
      anon_sym_system,
    STATE(252), 1,
      sym_vs_from_system,
  [11241] = 1,
    ACTIONS(1198), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [11246] = 1,
    ACTIONS(1295), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [11251] = 2,
    ACTIONS(136), 1,
      anon_sym_EQ,
    ACTIONS(138), 1,
      aux_sym_sequence_token1,
  [11258] = 1,
    ACTIONS(1297), 1,
      anon_sym_LPAREN,
  [11262] = 1,
    ACTIONS(1299), 1,
      anon_sym_COLON,
  [11266] = 1,
    ACTIONS(1301), 1,
      anon_sym_COLON,
  [11270] = 1,
    ACTIONS(1303), 1,
      anon_sym_COLON,
  [11274] = 1,
    ACTIONS(1305), 1,
      anon_sym_COLON,
  [11278] = 1,
    ACTIONS(1307), 1,
      anon_sym_COLON,
  [11282] = 1,
    ACTIONS(1309), 1,
      anon_sym_COLON,
  [11286] = 1,
    ACTIONS(1311), 1,
      anon_sym_COLON,
  [11290] = 1,
    ACTIONS(1313), 1,
      anon_sym_COLON,
  [11294] = 1,
    ACTIONS(1315), 1,
      anon_sym_EQ,
  [11298] = 1,
    ACTIONS(1317), 1,
      anon_sym_COLON,
  [11302] = 1,
    ACTIONS(1319), 1,
      anon_sym_COLON,
  [11306] = 1,
    ACTIONS(1321), 1,
      anon_sym_DOT_DOT,
  [11310] = 1,
    ACTIONS(1323), 1,
      ts_builtin_sym_end,
  [11314] = 1,
    ACTIONS(1325), 1,
      anon_sym_COLON,
  [11318] = 1,
    ACTIONS(684), 1,
      anon_sym_and,
  [11322] = 1,
    ACTIONS(1327), 1,
      anon_sym_COLON,
  [11326] = 1,
    ACTIONS(1329), 1,
      anon_sym_COLON,
  [11330] = 1,
    ACTIONS(1331), 1,
      anon_sym_COLON,
  [11334] = 1,
    ACTIONS(1333), 1,
      anon_sym_COLON,
  [11338] = 1,
    ACTIONS(1335), 1,
      anon_sym_COLON,
  [11342] = 1,
    ACTIONS(1337), 1,
      anon_sym_EQ,
  [11346] = 1,
    ACTIONS(1339), 1,
      anon_sym_COLON,
  [11350] = 1,
    ACTIONS(1341), 1,
      anon_sym_RPAREN,
  [11354] = 1,
    ACTIONS(1343), 1,
      anon_sym_EQ,
  [11358] = 1,
    ACTIONS(1345), 1,
      anon_sym_DOT_DOT,
  [11362] = 1,
    ACTIONS(1347), 1,
      anon_sym_EQ,
  [11366] = 1,
    ACTIONS(1349), 1,
      anon_sym_EQ,
  [11370] = 1,
    ACTIONS(1351), 1,
      anon_sym_LPAREN,
  [11374] = 1,
    ACTIONS(1353), 1,
      anon_sym_COLON,
  [11378] = 1,
    ACTIONS(1355), 1,
      anon_sym_POUND,
  [11382] = 1,
    ACTIONS(1357), 1,
      sym_time,
  [11386] = 1,
    ACTIONS(1359), 1,
      anon_sym_exactly,
  [11390] = 1,
    ACTIONS(1361), 1,
      anon_sym_COLON,
  [11394] = 1,
    ACTIONS(1363), 1,
      anon_sym_POUND,
  [11398] = 1,
    ACTIONS(1365), 1,
      anon_sym_COLON,
  [11402] = 1,
    ACTIONS(1367), 1,
      anon_sym_COLON,
  [11406] = 1,
    ACTIONS(1369), 1,
      anon_sym_COLON,
  [11410] = 1,
    ACTIONS(1371), 1,
      anon_sym_COLON,
  [11414] = 1,
    ACTIONS(1373), 1,
      anon_sym_RPAREN,
  [11418] = 1,
    ACTIONS(1375), 1,
      anon_sym_RPAREN,
  [11422] = 1,
    ACTIONS(1377), 1,
      anon_sym_COLON,
  [11426] = 1,
    ACTIONS(1379), 1,
      anon_sym_POUND,
  [11430] = 1,
    ACTIONS(1256), 1,
      anon_sym_POUND,
  [11434] = 1,
    ACTIONS(1381), 1,
      anon_sym_POUND,
  [11438] = 1,
    ACTIONS(1383), 1,
      anon_sym_POUND,
  [11442] = 1,
    ACTIONS(1385), 1,
      anon_sym_POUND,
  [11446] = 1,
    ACTIONS(1387), 1,
      anon_sym_POUND,
  [11450] = 1,
    ACTIONS(1389), 1,
      anon_sym_POUND,
  [11454] = 1,
    ACTIONS(1391), 1,
      anon_sym_POUND,
  [11458] = 1,
    ACTIONS(1393), 1,
      anon_sym_POUND,
  [11462] = 1,
    ACTIONS(888), 1,
      anon_sym_POUND,
  [11466] = 1,
    ACTIONS(848), 1,
      anon_sym_POUND,
  [11470] = 1,
    ACTIONS(1395), 1,
      anon_sym_POUND,
  [11474] = 1,
    ACTIONS(1397), 1,
      anon_sym_COLON,
  [11478] = 1,
    ACTIONS(1399), 1,
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
  [SMALL_STATE(14)] = 768,
  [SMALL_STATE(15)] = 841,
  [SMALL_STATE(16)] = 885,
  [SMALL_STATE(17)] = 929,
  [SMALL_STATE(18)] = 975,
  [SMALL_STATE(19)] = 1021,
  [SMALL_STATE(20)] = 1063,
  [SMALL_STATE(21)] = 1105,
  [SMALL_STATE(22)] = 1142,
  [SMALL_STATE(23)] = 1180,
  [SMALL_STATE(24)] = 1238,
  [SMALL_STATE(25)] = 1278,
  [SMALL_STATE(26)] = 1318,
  [SMALL_STATE(27)] = 1371,
  [SMALL_STATE(28)] = 1406,
  [SMALL_STATE(29)] = 1441,
  [SMALL_STATE(30)] = 1476,
  [SMALL_STATE(31)] = 1529,
  [SMALL_STATE(32)] = 1563,
  [SMALL_STATE(33)] = 1602,
  [SMALL_STATE(34)] = 1635,
  [SMALL_STATE(35)] = 1674,
  [SMALL_STATE(36)] = 1725,
  [SMALL_STATE(37)] = 1758,
  [SMALL_STATE(38)] = 1797,
  [SMALL_STATE(39)] = 1868,
  [SMALL_STATE(40)] = 1919,
  [SMALL_STATE(41)] = 1958,
  [SMALL_STATE(42)] = 1997,
  [SMALL_STATE(43)] = 2042,
  [SMALL_STATE(44)] = 2087,
  [SMALL_STATE(45)] = 2132,
  [SMALL_STATE(46)] = 2177,
  [SMALL_STATE(47)] = 2211,
  [SMALL_STATE(48)] = 2263,
  [SMALL_STATE(49)] = 2305,
  [SMALL_STATE(50)] = 2339,
  [SMALL_STATE(51)] = 2373,
  [SMALL_STATE(52)] = 2403,
  [SMALL_STATE(53)] = 2455,
  [SMALL_STATE(54)] = 2489,
  [SMALL_STATE(55)] = 2535,
  [SMALL_STATE(56)] = 2565,
  [SMALL_STATE(57)] = 2612,
  [SMALL_STATE(58)] = 2639,
  [SMALL_STATE(59)] = 2668,
  [SMALL_STATE(60)] = 2708,
  [SMALL_STATE(61)] = 2748,
  [SMALL_STATE(62)] = 2786,
  [SMALL_STATE(63)] = 2825,
  [SMALL_STATE(64)] = 2854,
  [SMALL_STATE(65)] = 2891,
  [SMALL_STATE(66)] = 2920,
  [SMALL_STATE(67)] = 2949,
  [SMALL_STATE(68)] = 2980,
  [SMALL_STATE(69)] = 3017,
  [SMALL_STATE(70)] = 3046,
  [SMALL_STATE(71)] = 3077,
  [SMALL_STATE(72)] = 3106,
  [SMALL_STATE(73)] = 3143,
  [SMALL_STATE(74)] = 3176,
  [SMALL_STATE(75)] = 3205,
  [SMALL_STATE(76)] = 3256,
  [SMALL_STATE(77)] = 3285,
  [SMALL_STATE(78)] = 3321,
  [SMALL_STATE(79)] = 3347,
  [SMALL_STATE(80)] = 3375,
  [SMALL_STATE(81)] = 3407,
  [SMALL_STATE(82)] = 3435,
  [SMALL_STATE(83)] = 3473,
  [SMALL_STATE(84)] = 3499,
  [SMALL_STATE(85)] = 3527,
  [SMALL_STATE(86)] = 3561,
  [SMALL_STATE(87)] = 3609,
  [SMALL_STATE(88)] = 3643,
  [SMALL_STATE(89)] = 3671,
  [SMALL_STATE(90)] = 3697,
  [SMALL_STATE(91)] = 3724,
  [SMALL_STATE(92)] = 3751,
  [SMALL_STATE(93)] = 3786,
  [SMALL_STATE(94)] = 3809,
  [SMALL_STATE(95)] = 3846,
  [SMALL_STATE(96)] = 3873,
  [SMALL_STATE(97)] = 3896,
  [SMALL_STATE(98)] = 3933,
  [SMALL_STATE(99)] = 3962,
  [SMALL_STATE(100)] = 3991,
  [SMALL_STATE(101)] = 4018,
  [SMALL_STATE(102)] = 4047,
  [SMALL_STATE(103)] = 4070,
  [SMALL_STATE(104)] = 4094,
  [SMALL_STATE(105)] = 4120,
  [SMALL_STATE(106)] = 4144,
  [SMALL_STATE(107)] = 4172,
  [SMALL_STATE(108)] = 4196,
  [SMALL_STATE(109)] = 4218,
  [SMALL_STATE(110)] = 4246,
  [SMALL_STATE(111)] = 4272,
  [SMALL_STATE(112)] = 4300,
  [SMALL_STATE(113)] = 4328,
  [SMALL_STATE(114)] = 4353,
  [SMALL_STATE(115)] = 4380,
  [SMALL_STATE(116)] = 4405,
  [SMALL_STATE(117)] = 4448,
  [SMALL_STATE(118)] = 4469,
  [SMALL_STATE(119)] = 4494,
  [SMALL_STATE(120)] = 4521,
  [SMALL_STATE(121)] = 4560,
  [SMALL_STATE(122)] = 4599,
  [SMALL_STATE(123)] = 4630,
  [SMALL_STATE(124)] = 4657,
  [SMALL_STATE(125)] = 4684,
  [SMALL_STATE(126)] = 4727,
  [SMALL_STATE(127)] = 4752,
  [SMALL_STATE(128)] = 4783,
  [SMALL_STATE(129)] = 4804,
  [SMALL_STATE(130)] = 4825,
  [SMALL_STATE(131)] = 4848,
  [SMALL_STATE(132)] = 4875,
  [SMALL_STATE(133)] = 4902,
  [SMALL_STATE(134)] = 4941,
  [SMALL_STATE(135)] = 4968,
  [SMALL_STATE(136)] = 4993,
  [SMALL_STATE(137)] = 5018,
  [SMALL_STATE(138)] = 5045,
  [SMALL_STATE(139)] = 5072,
  [SMALL_STATE(140)] = 5097,
  [SMALL_STATE(141)] = 5124,
  [SMALL_STATE(142)] = 5149,
  [SMALL_STATE(143)] = 5176,
  [SMALL_STATE(144)] = 5203,
  [SMALL_STATE(145)] = 5228,
  [SMALL_STATE(146)] = 5251,
  [SMALL_STATE(147)] = 5277,
  [SMALL_STATE(148)] = 5299,
  [SMALL_STATE(149)] = 5325,
  [SMALL_STATE(150)] = 5345,
  [SMALL_STATE(151)] = 5369,
  [SMALL_STATE(152)] = 5393,
  [SMALL_STATE(153)] = 5417,
  [SMALL_STATE(154)] = 5465,
  [SMALL_STATE(155)] = 5491,
  [SMALL_STATE(156)] = 5515,
  [SMALL_STATE(157)] = 5539,
  [SMALL_STATE(158)] = 5563,
  [SMALL_STATE(159)] = 5583,
  [SMALL_STATE(160)] = 5607,
  [SMALL_STATE(161)] = 5631,
  [SMALL_STATE(162)] = 5655,
  [SMALL_STATE(163)] = 5681,
  [SMALL_STATE(164)] = 5705,
  [SMALL_STATE(165)] = 5729,
  [SMALL_STATE(166)] = 5753,
  [SMALL_STATE(167)] = 5777,
  [SMALL_STATE(168)] = 5803,
  [SMALL_STATE(169)] = 5825,
  [SMALL_STATE(170)] = 5849,
  [SMALL_STATE(171)] = 5873,
  [SMALL_STATE(172)] = 5895,
  [SMALL_STATE(173)] = 5914,
  [SMALL_STATE(174)] = 5937,
  [SMALL_STATE(175)] = 5960,
  [SMALL_STATE(176)] = 5985,
  [SMALL_STATE(177)] = 6004,
  [SMALL_STATE(178)] = 6027,
  [SMALL_STATE(179)] = 6050,
  [SMALL_STATE(180)] = 6069,
  [SMALL_STATE(181)] = 6092,
  [SMALL_STATE(182)] = 6115,
  [SMALL_STATE(183)] = 6138,
  [SMALL_STATE(184)] = 6159,
  [SMALL_STATE(185)] = 6180,
  [SMALL_STATE(186)] = 6205,
  [SMALL_STATE(187)] = 6226,
  [SMALL_STATE(188)] = 6249,
  [SMALL_STATE(189)] = 6268,
  [SMALL_STATE(190)] = 6287,
  [SMALL_STATE(191)] = 6306,
  [SMALL_STATE(192)] = 6325,
  [SMALL_STATE(193)] = 6350,
  [SMALL_STATE(194)] = 6373,
  [SMALL_STATE(195)] = 6394,
  [SMALL_STATE(196)] = 6413,
  [SMALL_STATE(197)] = 6432,
  [SMALL_STATE(198)] = 6455,
  [SMALL_STATE(199)] = 6474,
  [SMALL_STATE(200)] = 6497,
  [SMALL_STATE(201)] = 6516,
  [SMALL_STATE(202)] = 6539,
  [SMALL_STATE(203)] = 6558,
  [SMALL_STATE(204)] = 6577,
  [SMALL_STATE(205)] = 6596,
  [SMALL_STATE(206)] = 6619,
  [SMALL_STATE(207)] = 6642,
  [SMALL_STATE(208)] = 6661,
  [SMALL_STATE(209)] = 6684,
  [SMALL_STATE(210)] = 6707,
  [SMALL_STATE(211)] = 6729,
  [SMALL_STATE(212)] = 6751,
  [SMALL_STATE(213)] = 6773,
  [SMALL_STATE(214)] = 6795,
  [SMALL_STATE(215)] = 6817,
  [SMALL_STATE(216)] = 6835,
  [SMALL_STATE(217)] = 6855,
  [SMALL_STATE(218)] = 6877,
  [SMALL_STATE(219)] = 6899,
  [SMALL_STATE(220)] = 6921,
  [SMALL_STATE(221)] = 6945,
  [SMALL_STATE(222)] = 6967,
  [SMALL_STATE(223)] = 6985,
  [SMALL_STATE(224)] = 7007,
  [SMALL_STATE(225)] = 7029,
  [SMALL_STATE(226)] = 7051,
  [SMALL_STATE(227)] = 7071,
  [SMALL_STATE(228)] = 7093,
  [SMALL_STATE(229)] = 7111,
  [SMALL_STATE(230)] = 7129,
  [SMALL_STATE(231)] = 7151,
  [SMALL_STATE(232)] = 7171,
  [SMALL_STATE(233)] = 7193,
  [SMALL_STATE(234)] = 7215,
  [SMALL_STATE(235)] = 7235,
  [SMALL_STATE(236)] = 7257,
  [SMALL_STATE(237)] = 7277,
  [SMALL_STATE(238)] = 7297,
  [SMALL_STATE(239)] = 7319,
  [SMALL_STATE(240)] = 7341,
  [SMALL_STATE(241)] = 7361,
  [SMALL_STATE(242)] = 7383,
  [SMALL_STATE(243)] = 7403,
  [SMALL_STATE(244)] = 7425,
  [SMALL_STATE(245)] = 7457,
  [SMALL_STATE(246)] = 7479,
  [SMALL_STATE(247)] = 7497,
  [SMALL_STATE(248)] = 7515,
  [SMALL_STATE(249)] = 7537,
  [SMALL_STATE(250)] = 7559,
  [SMALL_STATE(251)] = 7579,
  [SMALL_STATE(252)] = 7596,
  [SMALL_STATE(253)] = 7613,
  [SMALL_STATE(254)] = 7632,
  [SMALL_STATE(255)] = 7651,
  [SMALL_STATE(256)] = 7670,
  [SMALL_STATE(257)] = 7691,
  [SMALL_STATE(258)] = 7712,
  [SMALL_STATE(259)] = 7729,
  [SMALL_STATE(260)] = 7746,
  [SMALL_STATE(261)] = 7763,
  [SMALL_STATE(262)] = 7782,
  [SMALL_STATE(263)] = 7801,
  [SMALL_STATE(264)] = 7820,
  [SMALL_STATE(265)] = 7839,
  [SMALL_STATE(266)] = 7858,
  [SMALL_STATE(267)] = 7877,
  [SMALL_STATE(268)] = 7894,
  [SMALL_STATE(269)] = 7923,
  [SMALL_STATE(270)] = 7942,
  [SMALL_STATE(271)] = 7971,
  [SMALL_STATE(272)] = 7990,
  [SMALL_STATE(273)] = 8009,
  [SMALL_STATE(274)] = 8026,
  [SMALL_STATE(275)] = 8043,
  [SMALL_STATE(276)] = 8060,
  [SMALL_STATE(277)] = 8077,
  [SMALL_STATE(278)] = 8106,
  [SMALL_STATE(279)] = 8123,
  [SMALL_STATE(280)] = 8139,
  [SMALL_STATE(281)] = 8155,
  [SMALL_STATE(282)] = 8171,
  [SMALL_STATE(283)] = 8187,
  [SMALL_STATE(284)] = 8203,
  [SMALL_STATE(285)] = 8229,
  [SMALL_STATE(286)] = 8255,
  [SMALL_STATE(287)] = 8281,
  [SMALL_STATE(288)] = 8307,
  [SMALL_STATE(289)] = 8333,
  [SMALL_STATE(290)] = 8359,
  [SMALL_STATE(291)] = 8385,
  [SMALL_STATE(292)] = 8401,
  [SMALL_STATE(293)] = 8427,
  [SMALL_STATE(294)] = 8453,
  [SMALL_STATE(295)] = 8469,
  [SMALL_STATE(296)] = 8495,
  [SMALL_STATE(297)] = 8511,
  [SMALL_STATE(298)] = 8537,
  [SMALL_STATE(299)] = 8553,
  [SMALL_STATE(300)] = 8569,
  [SMALL_STATE(301)] = 8585,
  [SMALL_STATE(302)] = 8601,
  [SMALL_STATE(303)] = 8617,
  [SMALL_STATE(304)] = 8633,
  [SMALL_STATE(305)] = 8659,
  [SMALL_STATE(306)] = 8675,
  [SMALL_STATE(307)] = 8691,
  [SMALL_STATE(308)] = 8717,
  [SMALL_STATE(309)] = 8743,
  [SMALL_STATE(310)] = 8759,
  [SMALL_STATE(311)] = 8775,
  [SMALL_STATE(312)] = 8801,
  [SMALL_STATE(313)] = 8827,
  [SMALL_STATE(314)] = 8853,
  [SMALL_STATE(315)] = 8869,
  [SMALL_STATE(316)] = 8887,
  [SMALL_STATE(317)] = 8913,
  [SMALL_STATE(318)] = 8929,
  [SMALL_STATE(319)] = 8955,
  [SMALL_STATE(320)] = 8981,
  [SMALL_STATE(321)] = 9007,
  [SMALL_STATE(322)] = 9023,
  [SMALL_STATE(323)] = 9039,
  [SMALL_STATE(324)] = 9065,
  [SMALL_STATE(325)] = 9081,
  [SMALL_STATE(326)] = 9107,
  [SMALL_STATE(327)] = 9133,
  [SMALL_STATE(328)] = 9149,
  [SMALL_STATE(329)] = 9165,
  [SMALL_STATE(330)] = 9191,
  [SMALL_STATE(331)] = 9217,
  [SMALL_STATE(332)] = 9233,
  [SMALL_STATE(333)] = 9249,
  [SMALL_STATE(334)] = 9267,
  [SMALL_STATE(335)] = 9283,
  [SMALL_STATE(336)] = 9299,
  [SMALL_STATE(337)] = 9315,
  [SMALL_STATE(338)] = 9331,
  [SMALL_STATE(339)] = 9347,
  [SMALL_STATE(340)] = 9373,
  [SMALL_STATE(341)] = 9389,
  [SMALL_STATE(342)] = 9415,
  [SMALL_STATE(343)] = 9431,
  [SMALL_STATE(344)] = 9446,
  [SMALL_STATE(345)] = 9475,
  [SMALL_STATE(346)] = 9498,
  [SMALL_STATE(347)] = 9521,
  [SMALL_STATE(348)] = 9540,
  [SMALL_STATE(349)] = 9556,
  [SMALL_STATE(350)] = 9572,
  [SMALL_STATE(351)] = 9587,
  [SMALL_STATE(352)] = 9609,
  [SMALL_STATE(353)] = 9631,
  [SMALL_STATE(354)] = 9653,
  [SMALL_STATE(355)] = 9663,
  [SMALL_STATE(356)] = 9685,
  [SMALL_STATE(357)] = 9704,
  [SMALL_STATE(358)] = 9717,
  [SMALL_STATE(359)] = 9730,
  [SMALL_STATE(360)] = 9743,
  [SMALL_STATE(361)] = 9756,
  [SMALL_STATE(362)] = 9772,
  [SMALL_STATE(363)] = 9784,
  [SMALL_STATE(364)] = 9796,
  [SMALL_STATE(365)] = 9808,
  [SMALL_STATE(366)] = 9820,
  [SMALL_STATE(367)] = 9836,
  [SMALL_STATE(368)] = 9850,
  [SMALL_STATE(369)] = 9866,
  [SMALL_STATE(370)] = 9880,
  [SMALL_STATE(371)] = 9896,
  [SMALL_STATE(372)] = 9908,
  [SMALL_STATE(373)] = 9924,
  [SMALL_STATE(374)] = 9936,
  [SMALL_STATE(375)] = 9952,
  [SMALL_STATE(376)] = 9968,
  [SMALL_STATE(377)] = 9981,
  [SMALL_STATE(378)] = 9994,
  [SMALL_STATE(379)] = 10007,
  [SMALL_STATE(380)] = 10018,
  [SMALL_STATE(381)] = 10029,
  [SMALL_STATE(382)] = 10040,
  [SMALL_STATE(383)] = 10053,
  [SMALL_STATE(384)] = 10064,
  [SMALL_STATE(385)] = 10075,
  [SMALL_STATE(386)] = 10086,
  [SMALL_STATE(387)] = 10097,
  [SMALL_STATE(388)] = 10110,
  [SMALL_STATE(389)] = 10121,
  [SMALL_STATE(390)] = 10132,
  [SMALL_STATE(391)] = 10143,
  [SMALL_STATE(392)] = 10156,
  [SMALL_STATE(393)] = 10167,
  [SMALL_STATE(394)] = 10180,
  [SMALL_STATE(395)] = 10193,
  [SMALL_STATE(396)] = 10204,
  [SMALL_STATE(397)] = 10217,
  [SMALL_STATE(398)] = 10230,
  [SMALL_STATE(399)] = 10243,
  [SMALL_STATE(400)] = 10254,
  [SMALL_STATE(401)] = 10267,
  [SMALL_STATE(402)] = 10280,
  [SMALL_STATE(403)] = 10287,
  [SMALL_STATE(404)] = 10298,
  [SMALL_STATE(405)] = 10311,
  [SMALL_STATE(406)] = 10324,
  [SMALL_STATE(407)] = 10335,
  [SMALL_STATE(408)] = 10346,
  [SMALL_STATE(409)] = 10357,
  [SMALL_STATE(410)] = 10368,
  [SMALL_STATE(411)] = 10379,
  [SMALL_STATE(412)] = 10390,
  [SMALL_STATE(413)] = 10401,
  [SMALL_STATE(414)] = 10412,
  [SMALL_STATE(415)] = 10425,
  [SMALL_STATE(416)] = 10438,
  [SMALL_STATE(417)] = 10451,
  [SMALL_STATE(418)] = 10464,
  [SMALL_STATE(419)] = 10474,
  [SMALL_STATE(420)] = 10484,
  [SMALL_STATE(421)] = 10494,
  [SMALL_STATE(422)] = 10504,
  [SMALL_STATE(423)] = 10514,
  [SMALL_STATE(424)] = 10524,
  [SMALL_STATE(425)] = 10534,
  [SMALL_STATE(426)] = 10544,
  [SMALL_STATE(427)] = 10554,
  [SMALL_STATE(428)] = 10564,
  [SMALL_STATE(429)] = 10572,
  [SMALL_STATE(430)] = 10582,
  [SMALL_STATE(431)] = 10592,
  [SMALL_STATE(432)] = 10602,
  [SMALL_STATE(433)] = 10612,
  [SMALL_STATE(434)] = 10622,
  [SMALL_STATE(435)] = 10632,
  [SMALL_STATE(436)] = 10642,
  [SMALL_STATE(437)] = 10652,
  [SMALL_STATE(438)] = 10662,
  [SMALL_STATE(439)] = 10672,
  [SMALL_STATE(440)] = 10682,
  [SMALL_STATE(441)] = 10692,
  [SMALL_STATE(442)] = 10702,
  [SMALL_STATE(443)] = 10712,
  [SMALL_STATE(444)] = 10722,
  [SMALL_STATE(445)] = 10732,
  [SMALL_STATE(446)] = 10742,
  [SMALL_STATE(447)] = 10752,
  [SMALL_STATE(448)] = 10762,
  [SMALL_STATE(449)] = 10772,
  [SMALL_STATE(450)] = 10782,
  [SMALL_STATE(451)] = 10792,
  [SMALL_STATE(452)] = 10802,
  [SMALL_STATE(453)] = 10812,
  [SMALL_STATE(454)] = 10822,
  [SMALL_STATE(455)] = 10832,
  [SMALL_STATE(456)] = 10842,
  [SMALL_STATE(457)] = 10852,
  [SMALL_STATE(458)] = 10862,
  [SMALL_STATE(459)] = 10872,
  [SMALL_STATE(460)] = 10882,
  [SMALL_STATE(461)] = 10892,
  [SMALL_STATE(462)] = 10902,
  [SMALL_STATE(463)] = 10912,
  [SMALL_STATE(464)] = 10922,
  [SMALL_STATE(465)] = 10932,
  [SMALL_STATE(466)] = 10942,
  [SMALL_STATE(467)] = 10952,
  [SMALL_STATE(468)] = 10962,
  [SMALL_STATE(469)] = 10972,
  [SMALL_STATE(470)] = 10980,
  [SMALL_STATE(471)] = 10990,
  [SMALL_STATE(472)] = 11000,
  [SMALL_STATE(473)] = 11010,
  [SMALL_STATE(474)] = 11020,
  [SMALL_STATE(475)] = 11030,
  [SMALL_STATE(476)] = 11040,
  [SMALL_STATE(477)] = 11050,
  [SMALL_STATE(478)] = 11060,
  [SMALL_STATE(479)] = 11070,
  [SMALL_STATE(480)] = 11080,
  [SMALL_STATE(481)] = 11090,
  [SMALL_STATE(482)] = 11100,
  [SMALL_STATE(483)] = 11110,
  [SMALL_STATE(484)] = 11120,
  [SMALL_STATE(485)] = 11130,
  [SMALL_STATE(486)] = 11140,
  [SMALL_STATE(487)] = 11150,
  [SMALL_STATE(488)] = 11157,
  [SMALL_STATE(489)] = 11164,
  [SMALL_STATE(490)] = 11171,
  [SMALL_STATE(491)] = 11178,
  [SMALL_STATE(492)] = 11185,
  [SMALL_STATE(493)] = 11192,
  [SMALL_STATE(494)] = 11199,
  [SMALL_STATE(495)] = 11206,
  [SMALL_STATE(496)] = 11213,
  [SMALL_STATE(497)] = 11220,
  [SMALL_STATE(498)] = 11227,
  [SMALL_STATE(499)] = 11234,
  [SMALL_STATE(500)] = 11241,
  [SMALL_STATE(501)] = 11246,
  [SMALL_STATE(502)] = 11251,
  [SMALL_STATE(503)] = 11258,
  [SMALL_STATE(504)] = 11262,
  [SMALL_STATE(505)] = 11266,
  [SMALL_STATE(506)] = 11270,
  [SMALL_STATE(507)] = 11274,
  [SMALL_STATE(508)] = 11278,
  [SMALL_STATE(509)] = 11282,
  [SMALL_STATE(510)] = 11286,
  [SMALL_STATE(511)] = 11290,
  [SMALL_STATE(512)] = 11294,
  [SMALL_STATE(513)] = 11298,
  [SMALL_STATE(514)] = 11302,
  [SMALL_STATE(515)] = 11306,
  [SMALL_STATE(516)] = 11310,
  [SMALL_STATE(517)] = 11314,
  [SMALL_STATE(518)] = 11318,
  [SMALL_STATE(519)] = 11322,
  [SMALL_STATE(520)] = 11326,
  [SMALL_STATE(521)] = 11330,
  [SMALL_STATE(522)] = 11334,
  [SMALL_STATE(523)] = 11338,
  [SMALL_STATE(524)] = 11342,
  [SMALL_STATE(525)] = 11346,
  [SMALL_STATE(526)] = 11350,
  [SMALL_STATE(527)] = 11354,
  [SMALL_STATE(528)] = 11358,
  [SMALL_STATE(529)] = 11362,
  [SMALL_STATE(530)] = 11366,
  [SMALL_STATE(531)] = 11370,
  [SMALL_STATE(532)] = 11374,
  [SMALL_STATE(533)] = 11378,
  [SMALL_STATE(534)] = 11382,
  [SMALL_STATE(535)] = 11386,
  [SMALL_STATE(536)] = 11390,
  [SMALL_STATE(537)] = 11394,
  [SMALL_STATE(538)] = 11398,
  [SMALL_STATE(539)] = 11402,
  [SMALL_STATE(540)] = 11406,
  [SMALL_STATE(541)] = 11410,
  [SMALL_STATE(542)] = 11414,
  [SMALL_STATE(543)] = 11418,
  [SMALL_STATE(544)] = 11422,
  [SMALL_STATE(545)] = 11426,
  [SMALL_STATE(546)] = 11430,
  [SMALL_STATE(547)] = 11434,
  [SMALL_STATE(548)] = 11438,
  [SMALL_STATE(549)] = 11442,
  [SMALL_STATE(550)] = 11446,
  [SMALL_STATE(551)] = 11450,
  [SMALL_STATE(552)] = 11454,
  [SMALL_STATE(553)] = 11458,
  [SMALL_STATE(554)] = 11462,
  [SMALL_STATE(555)] = 11466,
  [SMALL_STATE(556)] = 11470,
  [SMALL_STATE(557)] = 11474,
  [SMALL_STATE(558)] = 11478,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 4),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_rule, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 4),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 4),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_set_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_set_repeat1, 2), SHIFT_REPEAT(38),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 4, .production_id = 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_rule_set_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_rule_set_repeat1, 2), SHIFT_REPEAT(38),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_rule_set, 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(19),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_name, 1), REDUCE(sym_path, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(25),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3, .production_id = 5),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3, .production_id = 5),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 2, .production_id = 4),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 2, .production_id = 4),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 4),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance, 4),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_logical_repeat1, 2),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_logical_repeat1, 2), SHIFT_REPEAT(125),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 5),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 4),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 4),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat2, 2),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat2, 2), SHIFT_REPEAT(116),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(525),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(558),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(557),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(541),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(539),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(538),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(509),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(508),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(505),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(504),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(517),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(506),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(544),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(522),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(523),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(511),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 5),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 5),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_definition, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concept, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 3),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_code_string, 1), REDUCE(aux_sym_code_insert_rule_repeat1, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_insert_rule_repeat1, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_string, 1),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 1),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 1), SHIFT(388),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instance_repeat1, 2),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(506),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(520),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(511),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(521),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(506),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(514),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(513),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(511),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_name, 1), REDUCE(sym_value, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ratio_part, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2), SHIFT_REPEAT(422),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2), SHIFT_REPEAT(420),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 5),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(70),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(506),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(510),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(507),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(519),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 1),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(70),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invariant, 4),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 2),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2), SHIFT_REPEAT(96),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_rule, 3),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_rule, 3),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title, 3),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_rule, 4),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(506),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(536),
  [470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(511),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(506),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(536),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(511),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_rule, 4),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [488] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(91),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 3),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [497] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(100),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 1),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 4),
  [504] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(99),
  [507] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(99),
  [510] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(100),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 3),
  [515] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(104),
  [518] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(106),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_operator, 1),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vs_filter_operator, 1),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [527] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(109),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [532] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(109),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 5),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3),
  [551] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(118),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 5),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 5),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instance_repeat2, 2),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat2, 2), SHIFT_REPEAT(356),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_metadata, 1),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_valueset_repeat2, 2),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat2, 2), SHIFT_REPEAT(153),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(135),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 5),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat2, 2),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat2, 2), SHIFT_REPEAT(352),
  [586] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(139),
  [589] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(141),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 5),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_repeat2, 2),
  [596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat2, 2), SHIFT_REPEAT(353),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 6),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_metadata, 1),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance_metadata, 1),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concept, 3),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sd_metadata, 1),
  [611] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(150),
  [614] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(151),
  [617] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(152),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 7),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parent, 3),
  [638] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(159),
  [641] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(160),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_cre_element_rule, 6),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [650] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(164),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 5),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usage, 3),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usage, 3),
  [663] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(169),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_of, 3),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance_of, 3),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 4),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_valueset, 3),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 1),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 3),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [690] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(178),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2),
  [697] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2), SHIFT_REPEAT(326),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_valueset, 2),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [708] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(187),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_severity, 3),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath, 3),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invariant_metadata, 1),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [723] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(193),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_metadata, 1),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_string, 2),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cs_metadata, 1),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 4),
  [738] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(201),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 7),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 6),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 5),
  [747] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(205),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 5),
  [754] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(208),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vs_filter_list_repeat1, 2),
  [761] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vs_filter_list_repeat1, 2), SHIFT_REPEAT(268),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_rule, 5),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 5),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_only_rule, 5),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_system, 2),
  [778] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(217),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 3),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_list, 1),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2),
  [789] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2), SHIFT_REPEAT(333),
  [792] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2), SHIFT_REPEAT(287),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 4),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2),
  [799] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2), SHIFT_REPEAT(133),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_list, 2),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 1),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contains_rule_repeat1, 2),
  [810] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contains_rule_repeat1, 2), SHIFT_REPEAT(277),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 3),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag, 1),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component_from, 2),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_rule, 4),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_rule, 4),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_type, 1),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_type, 1, .production_id = 7),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_only_rule, 4),
  [845] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(249),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 3),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component_from, 4),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 3),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [860] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(257),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_definition, 3),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_value, 1),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_insert_rule, 4, .production_id = 6),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_insert_rule, 3, .production_id = 1),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_rule, 3, .production_id = 1),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_rule, 4, .production_id = 6),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_value_rule, 4),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [883] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_code_insert_rule, 3, .production_id = 1), REDUCE(sym_insert_rule, 3, .production_id = 1),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_component, 2),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ratio, 3),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_rule_set_repeat1, 1, .production_id = 2),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 8),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_value_rule, 4),
  [904] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_rule_set_reference, 4),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [922] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_code_insert_rule, 3), REDUCE(sym_insert_rule, 3),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_rule, 5),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lr_rule, 1),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_insert_rule, 3),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set_rule, 1),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_value_rule, 5),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 2),
  [941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component, 3),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_component, 4),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_caret_value_rule, 5),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concept, 4),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 5, .production_id = 3),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_cre_element_rule, 7),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_insert_rule, 4),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_rule, 3),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 3),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sd_rule, 1),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_rule, 1),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 6),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_rule, 4),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_rule, 1),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cs_rule, 1),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component, 2),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strength, 3),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_entity_rule, 1),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_value_rule, 7),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [987] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(349),
  [990] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_rule_repeat1, 2), SHIFT_REPEAT(361),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_rule_repeat1, 2),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [1003] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2), SHIFT_REPEAT(467),
  [1006] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2), SHIFT_REPEAT(420),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [1013] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(358),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [1018] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(360),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [1023] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(362),
  [1026] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(363),
  [1029] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [1037] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(367),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [1044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1052] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(373),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1071] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(379),
  [1074] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1086] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [1088] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(385),
  [1091] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(386),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_rule_set_params, 1),
  [1096] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [1110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(391),
  [1113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [1125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(399),
  [1128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_rule_set_params_repeat1, 2),
  [1140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_param_rule_set_params_repeat1, 2), SHIFT_REPEAT(405),
  [1143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_rule_set_params_repeat1, 2), SHIFT_REPEAT(405),
  [1146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [1148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(407),
  [1151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [1157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [1159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(412),
  [1166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(413),
  [1169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 2),
  [1191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 2), SHIFT_REPEAT(433),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reference_repeat1, 2),
  [1200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reference_repeat1, 2), SHIFT_REPEAT(435),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2),
  [1213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(436),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(453),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(471),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [1260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(471),
  [1263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2), SHIFT_REPEAT(121),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(477),
  [1273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2),
  [1285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 4),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1323] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_path, 2),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
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
