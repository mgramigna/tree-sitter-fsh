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
#define STATE_COUNT 545
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 187
#define ALIAS_COUNT 5
#define TOKEN_COUNT 76
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 7

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
  sym_doc = 76,
  sym_alias = 77,
  sym_profile = 78,
  sym_extension = 79,
  sym_invariant = 80,
  sym_instance = 81,
  sym_valueset = 82,
  sym_codesystem = 83,
  sym_mapping = 84,
  sym_logical = 85,
  sym_resource = 86,
  sym_rule_set = 87,
  sym_sd_metadata = 88,
  sym_instance_metadata = 89,
  sym_invariant_metadata = 90,
  sym_vs_metadata = 91,
  sym_cs_metadata = 92,
  sym_mapping_metadata = 93,
  sym_description = 94,
  sym_expression = 95,
  sym_id = 96,
  sym_instance_of = 97,
  sym_parent = 98,
  sym_severity = 99,
  sym_source = 100,
  sym_target = 101,
  sym_title = 102,
  sym_usage = 103,
  sym_xpath = 104,
  sym_rule_set_rule = 105,
  sym_sd_rule = 106,
  sym_lr_rule = 107,
  sym_vs_rule = 108,
  sym_cs_rule = 109,
  sym_instance_rule = 110,
  sym_mapping_entity_rule = 111,
  sym_cardinality_rule = 112,
  sym_add_cre_element_rule = 113,
  sym_code_insert_rule = 114,
  sym_insert_rule = 115,
  sym_valueset_rule = 116,
  sym_fixed_value_rule = 117,
  sym_contains_rule = 118,
  sym_caret_value_rule = 119,
  sym_code_caret_value_rule = 120,
  sym_obeys_rule = 121,
  sym_path_rule = 122,
  sym_flag_rule = 123,
  sym_only_rule = 124,
  sym_mapping_rule = 125,
  sym_add_element_rule = 126,
  sym_vs_component = 127,
  sym_vs_concept_component = 128,
  sym_vs_filter_component = 129,
  sym_vs_component_from = 130,
  sym_vs_from_system = 131,
  sym_vs_from_valueset = 132,
  sym_vs_filter_list = 133,
  sym_vs_filter_definition = 134,
  sym_vs_filter_operator = 135,
  sym_vs_filter_value = 136,
  sym_code = 137,
  sym_concept = 138,
  sym_code_string = 139,
  sym_sequence = 140,
  sym_caret_path = 141,
  sym_name = 142,
  sym_cardinality = 143,
  sym_string = 144,
  sym_multiline_string = 145,
  sym_datetime = 146,
  sym_unit = 147,
  sym_quantity = 148,
  sym_ratio_part = 149,
  sym_ratio = 150,
  sym_bool = 151,
  sym_path = 152,
  sym_strength = 153,
  sym_reference = 154,
  sym_canonical = 155,
  sym_value = 156,
  sym_item = 157,
  sym_flag = 158,
  sym_target_type = 159,
  aux_sym_doc_repeat1 = 160,
  aux_sym_profile_repeat1 = 161,
  aux_sym_profile_repeat2 = 162,
  aux_sym_invariant_repeat1 = 163,
  aux_sym_instance_repeat1 = 164,
  aux_sym_instance_repeat2 = 165,
  aux_sym_valueset_repeat1 = 166,
  aux_sym_valueset_repeat2 = 167,
  aux_sym_codesystem_repeat1 = 168,
  aux_sym_codesystem_repeat2 = 169,
  aux_sym_mapping_repeat1 = 170,
  aux_sym_mapping_repeat2 = 171,
  aux_sym_logical_repeat1 = 172,
  aux_sym_rule_set_repeat1 = 173,
  aux_sym_cardinality_rule_repeat1 = 174,
  aux_sym_code_insert_rule_repeat1 = 175,
  aux_sym_contains_rule_repeat1 = 176,
  aux_sym_obeys_rule_repeat1 = 177,
  aux_sym_flag_rule_repeat1 = 178,
  aux_sym_only_rule_repeat1 = 179,
  aux_sym_vs_concept_component_repeat1 = 180,
  aux_sym_vs_filter_list_repeat1 = 181,
  aux_sym_sequence_repeat1 = 182,
  aux_sym_string_repeat1 = 183,
  aux_sym_unit_repeat1 = 184,
  aux_sym_reference_repeat1 = 185,
  aux_sym_canonical_repeat1 = 186,
  alias_sym_alias_name = 187,
  alias_sym_code_system = 188,
  alias_sym_code_value = 189,
  alias_sym_reference_type = 190,
  alias_sym_rule_set_reference = 191,
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
  [alias_sym_alias_name] = "alias_name",
  [alias_sym_code_system] = "code_system",
  [alias_sym_code_value] = "code_value",
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
  [alias_sym_alias_name] = alias_sym_alias_name,
  [alias_sym_code_system] = alias_sym_code_system,
  [alias_sym_code_value] = alias_sym_code_value,
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
    [2] = alias_sym_alias_name,
  },
  [3] = {
    [1] = alias_sym_code_value,
  },
  [4] = {
    [0] = alias_sym_code_system,
    [2] = alias_sym_code_value,
  },
  [5] = {
    [3] = alias_sym_rule_set_reference,
  },
  [6] = {
    [0] = alias_sym_reference_type,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
  [21] = 17,
  [22] = 18,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 24,
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
  [63] = 17,
  [64] = 64,
  [65] = 18,
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
  [78] = 37,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 64,
  [86] = 36,
  [87] = 18,
  [88] = 18,
  [89] = 17,
  [90] = 90,
  [91] = 74,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 18,
  [96] = 96,
  [97] = 17,
  [98] = 17,
  [99] = 99,
  [100] = 17,
  [101] = 17,
  [102] = 18,
  [103] = 103,
  [104] = 18,
  [105] = 36,
  [106] = 17,
  [107] = 107,
  [108] = 18,
  [109] = 37,
  [110] = 110,
  [111] = 18,
  [112] = 17,
  [113] = 37,
  [114] = 36,
  [115] = 17,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 18,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 18,
  [127] = 127,
  [128] = 128,
  [129] = 17,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 17,
  [136] = 136,
  [137] = 137,
  [138] = 18,
  [139] = 120,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 17,
  [146] = 18,
  [147] = 147,
  [148] = 17,
  [149] = 18,
  [150] = 18,
  [151] = 17,
  [152] = 18,
  [153] = 17,
  [154] = 154,
  [155] = 18,
  [156] = 17,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 17,
  [162] = 162,
  [163] = 163,
  [164] = 18,
  [165] = 17,
  [166] = 166,
  [167] = 18,
  [168] = 168,
  [169] = 169,
  [170] = 18,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 17,
  [175] = 26,
  [176] = 176,
  [177] = 18,
  [178] = 178,
  [179] = 179,
  [180] = 17,
  [181] = 18,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 61,
  [191] = 191,
  [192] = 66,
  [193] = 191,
  [194] = 194,
  [195] = 17,
  [196] = 27,
  [197] = 18,
  [198] = 198,
  [199] = 199,
  [200] = 176,
  [201] = 17,
  [202] = 17,
  [203] = 18,
  [204] = 204,
  [205] = 17,
  [206] = 18,
  [207] = 18,
  [208] = 27,
  [209] = 18,
  [210] = 210,
  [211] = 211,
  [212] = 26,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 17,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 176,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 172,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 17,
  [237] = 73,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 191,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 176,
  [246] = 191,
  [247] = 247,
  [248] = 17,
  [249] = 247,
  [250] = 92,
  [251] = 251,
  [252] = 243,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 96,
  [257] = 242,
  [258] = 18,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 273,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 90,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 277,
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
  [305] = 273,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 274,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 274,
  [315] = 275,
  [316] = 316,
  [317] = 317,
  [318] = 275,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 275,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 274,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 17,
  [339] = 18,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 17,
  [347] = 18,
  [348] = 17,
  [349] = 18,
  [350] = 350,
  [351] = 18,
  [352] = 17,
  [353] = 353,
  [354] = 354,
  [355] = 17,
  [356] = 356,
  [357] = 18,
  [358] = 18,
  [359] = 17,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 18,
  [364] = 364,
  [365] = 17,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 366,
  [375] = 373,
  [376] = 368,
  [377] = 17,
  [378] = 18,
  [379] = 368,
  [380] = 371,
  [381] = 381,
  [382] = 17,
  [383] = 18,
  [384] = 17,
  [385] = 18,
  [386] = 17,
  [387] = 18,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 371,
  [392] = 18,
  [393] = 17,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 18,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 17,
  [404] = 18,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 405,
  [411] = 406,
  [412] = 405,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 406,
  [417] = 405,
  [418] = 406,
  [419] = 405,
  [420] = 406,
  [421] = 405,
  [422] = 406,
  [423] = 405,
  [424] = 406,
  [425] = 405,
  [426] = 406,
  [427] = 427,
  [428] = 428,
  [429] = 405,
  [430] = 430,
  [431] = 18,
  [432] = 406,
  [433] = 406,
  [434] = 406,
  [435] = 435,
  [436] = 436,
  [437] = 17,
  [438] = 405,
  [439] = 406,
  [440] = 405,
  [441] = 441,
  [442] = 17,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 17,
  [447] = 406,
  [448] = 448,
  [449] = 405,
  [450] = 406,
  [451] = 451,
  [452] = 452,
  [453] = 405,
  [454] = 454,
  [455] = 406,
  [456] = 405,
  [457] = 457,
  [458] = 406,
  [459] = 459,
  [460] = 460,
  [461] = 18,
  [462] = 17,
  [463] = 405,
  [464] = 464,
  [465] = 406,
  [466] = 466,
  [467] = 405,
  [468] = 468,
  [469] = 469,
  [470] = 469,
  [471] = 224,
  [472] = 405,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 474,
  [478] = 475,
  [479] = 479,
  [480] = 19,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
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
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
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
  [517] = 514,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 500,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 500,
  [531] = 523,
  [532] = 523,
  [533] = 523,
  [534] = 523,
  [535] = 523,
  [536] = 523,
  [537] = 523,
  [538] = 523,
  [539] = 523,
  [540] = 523,
  [541] = 523,
  [542] = 523,
  [543] = 523,
  [544] = 526,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(361);
      if (lookahead == '"') ADVANCE(483);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '\'') ADVANCE(504);
      if (lookahead == '(') ADVANCE(391);
      if (lookahead == ')') ADVANCE(393);
      if (lookahead == '*') ADVANCE(481);
      if (lookahead == '+') ADVANCE(470);
      if (lookahead == '-') ADVANCE(416);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == ':') ADVANCE(363);
      if (lookahead == '=') ADVANCE(364);
      if (lookahead == '?') ADVANCE(410);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(424);
      if (lookahead == 'D') ADVANCE(477);
      if (lookahead == 'E') ADVANCE(465);
      if (lookahead == 'I') ADVANCE(438);
      if (lookahead == 'L') ADVANCE(454);
      if (lookahead == 'M') ADVANCE(419);
      if (lookahead == 'N') ADVANCE(476);
      if (lookahead == 'P') ADVANCE(427);
      if (lookahead == 'R') ADVANCE(440);
      if (lookahead == 'S') ADVANCE(421);
      if (lookahead == 'T') ADVANCE(503);
      if (lookahead == 'U') ADVANCE(464);
      if (lookahead == 'V') ADVANCE(430);
      if (lookahead == 'X') ADVANCE(417);
      if (lookahead == '^') ADVANCE(472);
      if (lookahead == 'a') ADVANCE(450);
      if (lookahead == 'c') ADVANCE(456);
      if (lookahead == 'e') ADVANCE(466);
      if (lookahead == 'f') ADVANCE(432);
      if (lookahead == 'i') ADVANCE(449);
      if (lookahead == 'n') ADVANCE(428);
      if (lookahead == 'o') ADVANCE(436);
      if (lookahead == 's') ADVANCE(469);
      if (lookahead == 't') ADVANCE(463);
      if (lookahead == 'v') ADVANCE(433);
      if (lookahead == 'w') ADVANCE(445);
      if (lookahead == '|') ADVANCE(513);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(515);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(483);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == 'C') ADVANCE(423);
      if (lookahead == 'D') ADVANCE(477);
      if (lookahead == 'M') ADVANCE(418);
      if (lookahead == 'N') ADVANCE(476);
      if (lookahead == 'R') ADVANCE(444);
      if (lookahead == 'S') ADVANCE(420);
      if (lookahead == 'T') ADVANCE(422);
      if (lookahead == 'c') ADVANCE(459);
      if (lookahead == 'f') ADVANCE(431);
      if (lookahead == 's') ADVANCE(469);
      if (lookahead == 't') ADVANCE(463);
      if (lookahead == 'v') ADVANCE(433);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(484);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(482);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(482);
      if (lookahead == '?') ADVANCE(410);
      if (lookahead == 'C') ADVANCE(423);
      if (lookahead == 'D') ADVANCE(477);
      if (lookahead == 'M') ADVANCE(418);
      if (lookahead == 'N') ADVANCE(476);
      if (lookahead == 'R') ADVANCE(444);
      if (lookahead == 'S') ADVANCE(420);
      if (lookahead == 'T') ADVANCE(422);
      if (lookahead == 'c') ADVANCE(459);
      if (lookahead == 'o') ADVANCE(461);
      if (lookahead == 's') ADVANCE(469);
      if (lookahead == 'v') ADVANCE(433);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(482);
      if (lookahead == '\\') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(485);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(482);
      if (lookahead == 'a') ADVANCE(450);
      if (lookahead == 'f') ADVANCE(462);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(482);
      if (lookahead == 'a') ADVANCE(450);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(461);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(482);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(485);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '+') ADVANCE(470);
      if (lookahead == '-') ADVANCE(416);
      if (lookahead == 'D') ADVANCE(477);
      if (lookahead == 'M') ADVANCE(418);
      if (lookahead == 'N') ADVANCE(476);
      if (lookahead == 'S') ADVANCE(420);
      if (lookahead == 'T') ADVANCE(422);
      if (lookahead == '^') ADVANCE(472);
      if (lookahead == 'c') ADVANCE(459);
      if (lookahead == 'e') ADVANCE(466);
      if (lookahead == 'i') ADVANCE(449);
      if (lookahead == 'o') ADVANCE(434);
      if (lookahead == 's') ADVANCE(469);
      if (lookahead == 'v') ADVANCE(433);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '^') ADVANCE(472);
      if (lookahead == 'c') ADVANCE(459);
      if (lookahead == 'e') ADVANCE(466);
      if (lookahead == 'i') ADVANCE(449);
      if (lookahead == 's') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '^') ADVANCE(472);
      if (lookahead == 'i') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == 'c') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == 'i') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 19:
      if (lookahead == '\'') ADVANCE(504);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(505);
      END_STATE();
    case 20:
      if (lookahead == ')') ADVANCE(393);
      if (lookahead == 'o') ADVANCE(461);
      if (lookahead == '|') ADVANCE(513);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 21:
      if (lookahead == ')') ADVANCE(393);
      if (lookahead == 'o') ADVANCE(461);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(481);
      if (lookahead == '?') ADVANCE(410);
      if (lookahead == 'C') ADVANCE(423);
      if (lookahead == 'D') ADVANCE(477);
      if (lookahead == 'M') ADVANCE(418);
      if (lookahead == 'N') ADVANCE(476);
      if (lookahead == 'R') ADVANCE(444);
      if (lookahead == 'S') ADVANCE(420);
      if (lookahead == 'T') ADVANCE(422);
      if (lookahead == 'c') ADVANCE(458);
      if (lookahead == 's') ADVANCE(469);
      if (lookahead == 'v') ADVANCE(433);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(415);
      if (lookahead == 'i') ADVANCE(451);
      if (lookahead == 's') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == 'n') ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(480);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(314);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(364);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(399);
      END_STATE();
    case 31:
      if (lookahead == '?') ADVANCE(410);
      if (lookahead == 'C') ADVANCE(423);
      if (lookahead == 'D') ADVANCE(477);
      if (lookahead == 'M') ADVANCE(418);
      if (lookahead == 'N') ADVANCE(476);
      if (lookahead == 'R') ADVANCE(444);
      if (lookahead == 'S') ADVANCE(420);
      if (lookahead == 'T') ADVANCE(422);
      if (lookahead == 'c') ADVANCE(459);
      if (lookahead == 's') ADVANCE(469);
      if (lookahead == 'v') ADVANCE(433);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 32:
      if (lookahead == '?') ADVANCE(410);
      if (lookahead == 'C') ADVANCE(423);
      if (lookahead == 'D') ADVANCE(477);
      if (lookahead == 'M') ADVANCE(418);
      if (lookahead == 'N') ADVANCE(476);
      if (lookahead == 'R') ADVANCE(444);
      if (lookahead == 'S') ADVANCE(420);
      if (lookahead == 'T') ADVANCE(422);
      if (lookahead == 'c') ADVANCE(458);
      if (lookahead == 's') ADVANCE(469);
      if (lookahead == 'v') ADVANCE(433);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 33:
      if (lookahead == '?') ADVANCE(410);
      if (lookahead == 'D') ADVANCE(477);
      if (lookahead == 'M') ADVANCE(418);
      if (lookahead == 'N') ADVANCE(476);
      if (lookahead == 'S') ADVANCE(420);
      if (lookahead == 'T') ADVANCE(422);
      if (lookahead == 'a') ADVANCE(450);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 34:
      if (lookahead == 'C') ADVANCE(423);
      if (lookahead == 'D') ADVANCE(477);
      if (lookahead == 'M') ADVANCE(418);
      if (lookahead == 'N') ADVANCE(476);
      if (lookahead == 'R') ADVANCE(444);
      if (lookahead == 'S') ADVANCE(420);
      if (lookahead == 'T') ADVANCE(422);
      if (lookahead == 'c') ADVANCE(459);
      if (lookahead == 's') ADVANCE(469);
      if (lookahead == 'v') ADVANCE(433);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 35:
      if (lookahead == 'D') ADVANCE(477);
      if (lookahead == 'M') ADVANCE(418);
      if (lookahead == 'N') ADVANCE(476);
      if (lookahead == 'S') ADVANCE(420);
      if (lookahead == 'T') ADVANCE(422);
      if (lookahead == '^') ADVANCE(472);
      if (lookahead == 'c') ADVANCE(459);
      if (lookahead == 'i') ADVANCE(451);
      if (lookahead == 'o') ADVANCE(434);
      if (lookahead == 's') ADVANCE(469);
      if (lookahead == 'v') ADVANCE(433);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 36:
      if (lookahead == 'D') ADVANCE(477);
      if (lookahead == 'M') ADVANCE(418);
      if (lookahead == 'N') ADVANCE(476);
      if (lookahead == 'S') ADVANCE(420);
      if (lookahead == 'T') ADVANCE(422);
      if (lookahead == 'c') ADVANCE(459);
      if (lookahead == 's') ADVANCE(469);
      if (lookahead == 'v') ADVANCE(433);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 37:
      if (lookahead == 'D') ADVANCE(442);
      if (lookahead == 'E') ADVANCE(467);
      if (lookahead == 'S') ADVANCE(441);
      if (lookahead == 'X') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 38:
      if (lookahead == 'D') ADVANCE(442);
      if (lookahead == 'I') ADVANCE(437);
      if (lookahead == 'P') ADVANCE(426);
      if (lookahead == 'T') ADVANCE(446);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 39:
      if (lookahead == 'P') ADVANCE(53);
      END_STATE();
    case 40:
      if (lookahead == 'R') ADVANCE(113);
      END_STATE();
    case 41:
      if (lookahead == 'S') ADVANCE(473);
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 42:
      if (lookahead == 'S') ADVANCE(298);
      END_STATE();
    case 43:
      if (lookahead == 'S') ADVANCE(124);
      END_STATE();
    case 44:
      if (lookahead == 'S') ADVANCE(128);
      END_STATE();
    case 45:
      if (lookahead == 'U') ADVANCE(474);
      END_STATE();
    case 46:
      if (lookahead == 'U') ADVANCE(475);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(224);
      if (lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 64:
      if (lookahead == 'b') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 65:
      if (lookahead == 'b') ADVANCE(177);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(229);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(273);
      if (lookahead == 'm') ADVANCE(220);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(171);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(180);
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(378);
      if (lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(395);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(514);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(510);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(508);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(117);
      if (lookahead == 'n') ADVANCE(261);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(117);
      if (lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(290);
      if (lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(511);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(507);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(509);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 139:
      if (lookahead == 'f') ADVANCE(379);
      END_STATE();
    case 140:
      if (lookahead == 'f') ADVANCE(163);
      END_STATE();
    case 141:
      if (lookahead == 'f') ADVANCE(125);
      END_STATE();
    case 142:
      if (lookahead == 'f') ADVANCE(135);
      END_STATE();
    case 143:
      if (lookahead == 'f') ADVANCE(135);
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 144:
      if (lookahead == 'f') ADVANCE(138);
      END_STATE();
    case 145:
      if (lookahead == 'g') ADVANCE(372);
      END_STATE();
    case 146:
      if (lookahead == 'g') ADVANCE(152);
      END_STATE();
    case 147:
      if (lookahead == 'g') ADVANCE(123);
      END_STATE();
    case 148:
      if (lookahead == 'g') ADVANCE(94);
      END_STATE();
    case 149:
      if (lookahead == 'h') ADVANCE(386);
      END_STATE();
    case 150:
      if (lookahead == 'h') ADVANCE(133);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(451);
      if (lookahead == 's') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(154)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(271);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 162:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 164:
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 165:
      if (lookahead == 'i') ADVANCE(235);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(373);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(512);
      END_STATE();
    case 169:
      if (lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(294);
      END_STATE();
    case 171:
      if (lookahead == 'l') ADVANCE(286);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(296);
      END_STATE();
    case 173:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 174:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 175:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 176:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(287);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(285);
      END_STATE();
    case 180:
      if (lookahead == 'l') ADVANCE(288);
      END_STATE();
    case 181:
      if (lookahead == 'm') ADVANCE(390);
      END_STATE();
    case 182:
      if (lookahead == 'm') ADVANCE(404);
      END_STATE();
    case 183:
      if (lookahead == 'm') ADVANCE(371);
      END_STATE();
    case 184:
      if (lookahead == 'm') ADVANCE(111);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(366);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(377);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(376);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 208:
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 211:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 212:
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(289);
      END_STATE();
    case 215:
      if (lookahead == 'p') ADVANCE(216);
      END_STATE();
    case 216:
      if (lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 217:
      if (lookahead == 'p') ADVANCE(279);
      END_STATE();
    case 218:
      if (lookahead == 'p') ADVANCE(231);
      END_STATE();
    case 219:
      if (lookahead == 'p') ADVANCE(231);
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 220:
      if (lookahead == 'p') ADVANCE(176);
      END_STATE();
    case 221:
      if (lookahead == 'q') ADVANCE(283);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(398);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(264);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 241:
      if (lookahead == 's') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(241)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 242:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 243:
      if (lookahead == 's') ADVANCE(362);
      END_STATE();
    case 244:
      if (lookahead == 's') ADVANCE(402);
      END_STATE();
    case 245:
      if (lookahead == 's') ADVANCE(396);
      END_STATE();
    case 246:
      if (lookahead == 's') ADVANCE(394);
      END_STATE();
    case 247:
      if (lookahead == 's') ADVANCE(272);
      if (lookahead == 'v') ADVANCE(55);
      END_STATE();
    case 248:
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 249:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 250:
      if (lookahead == 's') ADVANCE(275);
      END_STATE();
    case 251:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 252:
      if (lookahead == 's') ADVANCE(151);
      END_STATE();
    case 253:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 254:
      if (lookahead == 's') ADVANCE(95);
      END_STATE();
    case 255:
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 256:
      if (lookahead == 's') ADVANCE(276);
      END_STATE();
    case 257:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 258:
      if (lookahead == 's') ADVANCE(257);
      END_STATE();
    case 259:
      if (lookahead == 's') ADVANCE(280);
      if (lookahead == 'v') ADVANCE(55);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(380);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(383);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(389);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(375);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(370);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(405);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(367);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 281:
      if (lookahead == 'u') ADVANCE(299);
      if (lookahead == 'x') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(489);
      if (lookahead != 0) ADVANCE(487);
      END_STATE();
    case 282:
      if (lookahead == 'u') ADVANCE(226);
      END_STATE();
    case 283:
      if (lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 284:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 285:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 286:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 287:
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 288:
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 289:
      if (lookahead == 'u') ADVANCE(238);
      END_STATE();
    case 290:
      if (lookahead == 'v') ADVANCE(120);
      END_STATE();
    case 291:
      if (lookahead == 'x') ADVANCE(219);
      END_STATE();
    case 292:
      if (lookahead == 'x') ADVANCE(50);
      END_STATE();
    case 293:
      if (lookahead == 'x') ADVANCE(270);
      END_STATE();
    case 294:
      if (lookahead == 'y') ADVANCE(397);
      END_STATE();
    case 295:
      if (lookahead == 'y') ADVANCE(381);
      END_STATE();
    case 296:
      if (lookahead == 'y') ADVANCE(392);
      END_STATE();
    case 297:
      if (lookahead == 'y') ADVANCE(245);
      END_STATE();
    case 298:
      if (lookahead == 'y') ADVANCE(256);
      END_STATE();
    case 299:
      if (lookahead == '{') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(318);
      END_STATE();
    case 300:
      if (lookahead == '}') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(300);
      END_STATE();
    case 301:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(301)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 302:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      END_STATE();
    case 303:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      END_STATE();
    case 304:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(497);
      END_STATE();
    case 305:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 306:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(500);
      END_STATE();
    case 307:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      END_STATE();
    case 308:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(498);
      END_STATE();
    case 309:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(501);
      END_STATE();
    case 310:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(495);
      END_STATE();
    case 311:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 312:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 313:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 314:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 315:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 316:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 317:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      END_STATE();
    case 318:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(321);
      END_STATE();
    case 319:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(487);
      END_STATE();
    case 320:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(300);
      END_STATE();
    case 321:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      END_STATE();
    case 322:
      if (eof) ADVANCE(361);
      if (lookahead == '"') ADVANCE(483);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '=') ADVANCE(364);
      if (lookahead == '?') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(166);
      if (lookahead == 'C') ADVANCE(205);
      if (lookahead == 'D') ADVANCE(477);
      if (lookahead == 'E') ADVANCE(293);
      if (lookahead == 'I') ADVANCE(204);
      if (lookahead == 'L') ADVANCE(206);
      if (lookahead == 'M') ADVANCE(41);
      if (lookahead == 'N') ADVANCE(476);
      if (lookahead == 'P') ADVANCE(222);
      if (lookahead == 'R') ADVANCE(127);
      if (lookahead == 'S') ADVANCE(45);
      if (lookahead == 'T') ADVANCE(46);
      if (lookahead == 'V') ADVANCE(52);
      if (lookahead == '^') ADVANCE(472);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'c') ADVANCE(213);
      if (lookahead == 'f') ADVANCE(225);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(322)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      END_STATE();
    case 323:
      if (eof) ADVANCE(361);
      if (lookahead == '"') ADVANCE(483);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'I') ADVANCE(452);
      if (lookahead == 'L') ADVANCE(454);
      if (lookahead == 'M') ADVANCE(425);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead == 'V') ADVANCE(430);
      if (lookahead == '^') ADVANCE(472);
      if (lookahead == 'a') ADVANCE(450);
      if (lookahead == 'f') ADVANCE(462);
      if (lookahead == 'i') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(323)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 324:
      if (eof) ADVANCE(361);
      if (lookahead == '"') ADVANCE(483);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'I') ADVANCE(452);
      if (lookahead == 'L') ADVANCE(454);
      if (lookahead == 'M') ADVANCE(425);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead == 'V') ADVANCE(430);
      if (lookahead == '^') ADVANCE(472);
      if (lookahead == 'i') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(324)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 325:
      if (eof) ADVANCE(361);
      if (lookahead == '"') ADVANCE(483);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'I') ADVANCE(452);
      if (lookahead == 'L') ADVANCE(454);
      if (lookahead == 'M') ADVANCE(425);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead == 'V') ADVANCE(430);
      if (lookahead == 'i') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(325)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 326:
      if (eof) ADVANCE(361);
      if (lookahead == '"') ADVANCE(483);
      if (lookahead == '(') ADVANCE(391);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == ':') ADVANCE(363);
      if (lookahead == 'A') ADVANCE(166);
      if (lookahead == 'C') ADVANCE(205);
      if (lookahead == 'D') ADVANCE(126);
      if (lookahead == 'E') ADVANCE(291);
      if (lookahead == 'I') ADVANCE(78);
      if (lookahead == 'L') ADVANCE(206);
      if (lookahead == 'M') ADVANCE(47);
      if (lookahead == 'P') ADVANCE(48);
      if (lookahead == 'R') ADVANCE(127);
      if (lookahead == 'S') ADVANCE(89);
      if (lookahead == 'T') ADVANCE(51);
      if (lookahead == 'U') ADVANCE(242);
      if (lookahead == 'V') ADVANCE(52);
      if (lookahead == 'X') ADVANCE(39);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'f') ADVANCE(225);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(326)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      END_STATE();
    case 327:
      if (eof) ADVANCE(361);
      if (lookahead == '"') ADVANCE(482);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '(') ADVANCE(391);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == ':') ADVANCE(363);
      if (lookahead == '=') ADVANCE(364);
      if (lookahead == 'A') ADVANCE(166);
      if (lookahead == 'C') ADVANCE(205);
      if (lookahead == 'D') ADVANCE(126);
      if (lookahead == 'E') ADVANCE(291);
      if (lookahead == 'I') ADVANCE(78);
      if (lookahead == 'L') ADVANCE(206);
      if (lookahead == 'M') ADVANCE(47);
      if (lookahead == 'P') ADVANCE(48);
      if (lookahead == 'R') ADVANCE(127);
      if (lookahead == 'S') ADVANCE(89);
      if (lookahead == 'T') ADVANCE(51);
      if (lookahead == 'U') ADVANCE(242);
      if (lookahead == 'V') ADVANCE(52);
      if (lookahead == 'X') ADVANCE(39);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(292);
      if (lookahead == 'f') ADVANCE(225);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead == 'n') ADVANCE(49);
      if (lookahead == 'o') ADVANCE(223);
      if (lookahead == 'p') ADVANCE(234);
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead == 'w') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(327)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      END_STATE();
    case 328:
      if (eof) ADVANCE(361);
      if (lookahead == '"') ADVANCE(482);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'I') ADVANCE(452);
      if (lookahead == 'L') ADVANCE(454);
      if (lookahead == 'M') ADVANCE(425);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead == 'V') ADVANCE(430);
      if (lookahead == 'a') ADVANCE(450);
      if (lookahead == 'f') ADVANCE(431);
      if (lookahead == 't') ADVANCE(463);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(328)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 329:
      if (eof) ADVANCE(361);
      if (lookahead == '"') ADVANCE(482);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'I') ADVANCE(452);
      if (lookahead == 'L') ADVANCE(454);
      if (lookahead == 'M') ADVANCE(425);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead == 'V') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(329)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 330:
      if (eof) ADVANCE(361);
      if (lookahead == '"') ADVANCE(482);
      if (lookahead == '(') ADVANCE(391);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == ':') ADVANCE(363);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'I') ADVANCE(452);
      if (lookahead == 'L') ADVANCE(454);
      if (lookahead == 'M') ADVANCE(425);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead == 'V') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(330)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 331:
      if (eof) ADVANCE(361);
      if (lookahead == '"') ADVANCE(482);
      if (lookahead == '(') ADVANCE(391);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'I') ADVANCE(452);
      if (lookahead == 'L') ADVANCE(454);
      if (lookahead == 'M') ADVANCE(425);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead == 'V') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(331)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 332:
      if (eof) ADVANCE(361);
      if (lookahead == '"') ADVANCE(482);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == ':') ADVANCE(363);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'I') ADVANCE(452);
      if (lookahead == 'L') ADVANCE(454);
      if (lookahead == 'M') ADVANCE(425);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead == 'V') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(332)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 333:
      if (eof) ADVANCE(361);
      if (lookahead == '"') ADVANCE(482);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'I') ADVANCE(452);
      if (lookahead == 'L') ADVANCE(454);
      if (lookahead == 'M') ADVANCE(425);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead == 'V') ADVANCE(430);
      if (lookahead == 'a') ADVANCE(450);
      if (lookahead == 'f') ADVANCE(462);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(333)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 334:
      if (eof) ADVANCE(361);
      if (lookahead == '"') ADVANCE(482);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'I') ADVANCE(452);
      if (lookahead == 'L') ADVANCE(454);
      if (lookahead == 'M') ADVANCE(425);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead == 'V') ADVANCE(430);
      if (lookahead == 'a') ADVANCE(450);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(334)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 335:
      if (eof) ADVANCE(361);
      if (lookahead == '"') ADVANCE(482);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'I') ADVANCE(452);
      if (lookahead == 'L') ADVANCE(454);
      if (lookahead == 'M') ADVANCE(425);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead == 'V') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(335)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 336:
      if (eof) ADVANCE(361);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '\'') ADVANCE(504);
      if (lookahead == '(') ADVANCE(391);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == ':') ADVANCE(363);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'I') ADVANCE(452);
      if (lookahead == 'L') ADVANCE(454);
      if (lookahead == 'M') ADVANCE(425);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead == 'V') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(336)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 337:
      if (eof) ADVANCE(361);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '\'') ADVANCE(504);
      if (lookahead == '(') ADVANCE(391);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'I') ADVANCE(452);
      if (lookahead == 'L') ADVANCE(454);
      if (lookahead == 'M') ADVANCE(425);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead == 'V') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(337)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 338:
      if (eof) ADVANCE(361);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '\'') ADVANCE(504);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == ':') ADVANCE(363);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'I') ADVANCE(452);
      if (lookahead == 'L') ADVANCE(454);
      if (lookahead == 'M') ADVANCE(425);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead == 'V') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(338)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 339:
      if (eof) ADVANCE(361);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '\'') ADVANCE(504);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'I') ADVANCE(452);
      if (lookahead == 'L') ADVANCE(454);
      if (lookahead == 'M') ADVANCE(425);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead == 'V') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(339)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 340:
      if (eof) ADVANCE(361);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '(') ADVANCE(391);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'I') ADVANCE(452);
      if (lookahead == 'L') ADVANCE(454);
      if (lookahead == 'M') ADVANCE(425);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead == 'V') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(340)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 341:
      if (eof) ADVANCE(361);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == '-') ADVANCE(415);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == '=') ADVANCE(364);
      if (lookahead == '?') ADVANCE(410);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == 'D') ADVANCE(477);
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'I') ADVANCE(452);
      if (lookahead == 'L') ADVANCE(454);
      if (lookahead == 'M') ADVANCE(419);
      if (lookahead == 'N') ADVANCE(476);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead == 'S') ADVANCE(420);
      if (lookahead == 'T') ADVANCE(422);
      if (lookahead == 'V') ADVANCE(430);
      if (lookahead == '^') ADVANCE(472);
      if (lookahead == 'a') ADVANCE(450);
      if (lookahead == 'c') ADVANCE(457);
      if (lookahead == 'f') ADVANCE(462);
      if (lookahead == 'i') ADVANCE(451);
      if (lookahead == 'o') ADVANCE(435);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(341)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 342:
      if (eof) ADVANCE(361);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'I') ADVANCE(452);
      if (lookahead == 'L') ADVANCE(454);
      if (lookahead == 'M') ADVANCE(425);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead == 'V') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(342)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 343:
      if (eof) ADVANCE(361);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'I') ADVANCE(452);
      if (lookahead == 'L') ADVANCE(454);
      if (lookahead == 'M') ADVANCE(425);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead == 'V') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(343)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 344:
      if (eof) ADVANCE(361);
      if (lookahead == '(') ADVANCE(391);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'I') ADVANCE(452);
      if (lookahead == 'L') ADVANCE(454);
      if (lookahead == 'M') ADVANCE(425);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead == 'V') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(344)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 345:
      if (eof) ADVANCE(361);
      if (lookahead == '(') ADVANCE(391);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == 'A') ADVANCE(166);
      if (lookahead == 'C') ADVANCE(205);
      if (lookahead == 'E') ADVANCE(293);
      if (lookahead == 'I') ADVANCE(204);
      if (lookahead == 'L') ADVANCE(206);
      if (lookahead == 'M') ADVANCE(47);
      if (lookahead == 'P') ADVANCE(222);
      if (lookahead == 'R') ADVANCE(127);
      if (lookahead == 'T') ADVANCE(502);
      if (lookahead == 'V') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(345)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 346:
      if (eof) ADVANCE(361);
      if (lookahead == '*') ADVANCE(481);
      if (lookahead == '?') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(166);
      if (lookahead == 'C') ADVANCE(205);
      if (lookahead == 'D') ADVANCE(477);
      if (lookahead == 'E') ADVANCE(293);
      if (lookahead == 'I') ADVANCE(204);
      if (lookahead == 'L') ADVANCE(206);
      if (lookahead == 'M') ADVANCE(41);
      if (lookahead == 'N') ADVANCE(476);
      if (lookahead == 'P') ADVANCE(222);
      if (lookahead == 'R') ADVANCE(127);
      if (lookahead == 'S') ADVANCE(45);
      if (lookahead == 'T') ADVANCE(46);
      if (lookahead == 'V') ADVANCE(52);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(346)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      END_STATE();
    case 347:
      if (eof) ADVANCE(361);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == '-') ADVANCE(415);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'I') ADVANCE(452);
      if (lookahead == 'L') ADVANCE(454);
      if (lookahead == 'M') ADVANCE(425);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead == 'V') ADVANCE(430);
      if (lookahead == 'i') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(347)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 348:
      if (eof) ADVANCE(361);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == '=') ADVANCE(364);
      if (lookahead == '?') ADVANCE(410);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == 'D') ADVANCE(477);
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'I') ADVANCE(452);
      if (lookahead == 'L') ADVANCE(454);
      if (lookahead == 'M') ADVANCE(419);
      if (lookahead == 'N') ADVANCE(476);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead == 'S') ADVANCE(420);
      if (lookahead == 'T') ADVANCE(422);
      if (lookahead == 'V') ADVANCE(430);
      if (lookahead == '^') ADVANCE(472);
      if (lookahead == 'a') ADVANCE(450);
      if (lookahead == 'c') ADVANCE(457);
      if (lookahead == 'f') ADVANCE(462);
      if (lookahead == 'i') ADVANCE(451);
      if (lookahead == 'o') ADVANCE(435);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(348)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 349:
      if (eof) ADVANCE(361);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == '=') ADVANCE(364);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'I') ADVANCE(452);
      if (lookahead == 'L') ADVANCE(454);
      if (lookahead == 'M') ADVANCE(425);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead == 'V') ADVANCE(430);
      if (lookahead == 'i') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(349)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 350:
      if (eof) ADVANCE(361);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == 'D') ADVANCE(442);
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'I') ADVANCE(448);
      if (lookahead == 'L') ADVANCE(454);
      if (lookahead == 'M') ADVANCE(425);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead == 'T') ADVANCE(446);
      if (lookahead == 'U') ADVANCE(464);
      if (lookahead == 'V') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(350)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 351:
      if (eof) ADVANCE(361);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == 'D') ADVANCE(442);
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'I') ADVANCE(439);
      if (lookahead == 'L') ADVANCE(454);
      if (lookahead == 'M') ADVANCE(425);
      if (lookahead == 'P') ADVANCE(427);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead == 'T') ADVANCE(446);
      if (lookahead == 'V') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(351)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 352:
      if (eof) ADVANCE(361);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == 'D') ADVANCE(442);
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'I') ADVANCE(439);
      if (lookahead == 'L') ADVANCE(454);
      if (lookahead == 'M') ADVANCE(425);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead == 'S') ADVANCE(455);
      if (lookahead == 'T') ADVANCE(429);
      if (lookahead == 'V') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(352)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 353:
      if (eof) ADVANCE(361);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == 'D') ADVANCE(442);
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'I') ADVANCE(439);
      if (lookahead == 'L') ADVANCE(454);
      if (lookahead == 'M') ADVANCE(425);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead == 'T') ADVANCE(446);
      if (lookahead == 'V') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(353)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 354:
      if (eof) ADVANCE(361);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'I') ADVANCE(452);
      if (lookahead == 'L') ADVANCE(454);
      if (lookahead == 'M') ADVANCE(425);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead == 'V') ADVANCE(430);
      if (lookahead == 'a') ADVANCE(450);
      if (lookahead == 'w') ADVANCE(445);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(354)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 355:
      if (eof) ADVANCE(361);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'I') ADVANCE(452);
      if (lookahead == 'L') ADVANCE(454);
      if (lookahead == 'M') ADVANCE(425);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead == 'V') ADVANCE(430);
      if (lookahead == 'a') ADVANCE(450);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(355)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 356:
      if (eof) ADVANCE(361);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'I') ADVANCE(452);
      if (lookahead == 'L') ADVANCE(454);
      if (lookahead == 'M') ADVANCE(425);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead == 'V') ADVANCE(430);
      if (lookahead == 'o') ADVANCE(461);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(356)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 357:
      if (eof) ADVANCE(361);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'I') ADVANCE(452);
      if (lookahead == 'L') ADVANCE(454);
      if (lookahead == 'M') ADVANCE(425);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead == 'V') ADVANCE(430);
      if (lookahead == 'w') ADVANCE(445);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(357)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 358:
      if (eof) ADVANCE(361);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'I') ADVANCE(452);
      if (lookahead == 'L') ADVANCE(454);
      if (lookahead == 'M') ADVANCE(425);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead == 'V') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(358)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 359:
      if (eof) ADVANCE(361);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == 'D') ADVANCE(442);
      if (lookahead == 'E') ADVANCE(465);
      if (lookahead == 'I') ADVANCE(452);
      if (lookahead == 'L') ADVANCE(454);
      if (lookahead == 'M') ADVANCE(425);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead == 'S') ADVANCE(441);
      if (lookahead == 'V') ADVANCE(430);
      if (lookahead == 'X') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(359)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 360:
      if (eof) ADVANCE(361);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'I') ADVANCE(452);
      if (lookahead == 'L') ADVANCE(454);
      if (lookahead == 'M') ADVANCE(425);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead == 'V') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(360)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(409);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_Alias);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_Profile);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_Extension);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_Invariant);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_Instance);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_Instance);
      if (lookahead == 'O') ADVANCE(139);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_ValueSet);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_CodeSystem);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_Mapping);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_Logical);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_Resource);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_RuleSet);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_Description);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_Expression);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_Id);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_InstanceOf);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_Parent);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_Severity);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_Source);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_Target);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_Title);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_Usage);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_XPath);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_contentReference);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_insert);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_exactly);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_obeys);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_exclude);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_codes);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_valueset);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '!') ADVANCE(515);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(480);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(493);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '>') ADVANCE(399);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '>') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'P') ADVANCE(53);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'S') ADVANCE(473);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'S') ADVANCE(473);
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'U') ADVANCE(474);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'U') ADVANCE(474);
      if (lookahead == 'e') ADVANCE(290);
      if (lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'U') ADVANCE(475);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(228);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(224);
      if (lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'b') ADVANCE(90);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'b') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'b') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(170);
      if (lookahead == 'r') ADVANCE(398);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(378);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(378);
      if (lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(378);
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'h') ADVANCE(133);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(398);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(219);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(76);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(218);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(270);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'y') ADVANCE(250);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_MS);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_SU);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_TU);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_cardinality_token1);
      if (lookahead == '.') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_cardinality_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(486);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(486);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(487);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(488);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(313);
      if (lookahead == '.') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(490);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(311);
      if (lookahead == '.') ADVANCE(303);
      if (lookahead == ':') ADVANCE(312);
      if (lookahead == 'Z') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(492);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '-') ADVANCE(316);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(311);
      if (lookahead == '.') ADVANCE(309);
      if (lookahead == 'Z') ADVANCE(497);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(312);
      if (lookahead == 'Z') ADVANCE(497);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(311);
      if (lookahead == ':') ADVANCE(315);
      if (lookahead == 'Z') ADVANCE(497);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(311);
      if (lookahead == 'Z') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(501);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_T);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'U') ADVANCE(475);
      if (lookahead == 'a') ADVANCE(224);
      if (lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(505);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_example);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_preferred);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_extensible);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_Reference);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_Canonical);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_named);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_QMARK_BANG);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 327},
  [3] = {.lex_state = 327},
  [4] = {.lex_state = 327},
  [5] = {.lex_state = 327},
  [6] = {.lex_state = 327},
  [7] = {.lex_state = 327},
  [8] = {.lex_state = 327},
  [9] = {.lex_state = 322},
  [10] = {.lex_state = 322},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 327},
  [16] = {.lex_state = 327},
  [17] = {.lex_state = 341},
  [18] = {.lex_state = 341},
  [19] = {.lex_state = 327},
  [20] = {.lex_state = 322},
  [21] = {.lex_state = 348},
  [22] = {.lex_state = 348},
  [23] = {.lex_state = 322},
  [24] = {.lex_state = 322},
  [25] = {.lex_state = 327},
  [26] = {.lex_state = 326},
  [27] = {.lex_state = 326},
  [28] = {.lex_state = 327},
  [29] = {.lex_state = 322},
  [30] = {.lex_state = 327},
  [31] = {.lex_state = 327},
  [32] = {.lex_state = 327},
  [33] = {.lex_state = 327},
  [34] = {.lex_state = 327},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 327},
  [37] = {.lex_state = 327},
  [38] = {.lex_state = 327},
  [39] = {.lex_state = 327},
  [40] = {.lex_state = 327},
  [41] = {.lex_state = 327},
  [42] = {.lex_state = 327},
  [43] = {.lex_state = 327},
  [44] = {.lex_state = 327},
  [45] = {.lex_state = 327},
  [46] = {.lex_state = 327},
  [47] = {.lex_state = 327},
  [48] = {.lex_state = 327},
  [49] = {.lex_state = 327},
  [50] = {.lex_state = 328},
  [51] = {.lex_state = 327},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 322},
  [54] = {.lex_state = 325},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 327},
  [57] = {.lex_state = 327},
  [58] = {.lex_state = 323},
  [59] = {.lex_state = 327},
  [60] = {.lex_state = 327},
  [61] = {.lex_state = 346},
  [62] = {.lex_state = 32},
  [63] = {.lex_state = 323},
  [64] = {.lex_state = 336},
  [65] = {.lex_state = 323},
  [66] = {.lex_state = 346},
  [67] = {.lex_state = 322},
  [68] = {.lex_state = 322},
  [69] = {.lex_state = 322},
  [70] = {.lex_state = 322},
  [71] = {.lex_state = 325},
  [72] = {.lex_state = 327},
  [73] = {.lex_state = 322},
  [74] = {.lex_state = 337},
  [75] = {.lex_state = 322},
  [76] = {.lex_state = 327},
  [77] = {.lex_state = 322},
  [78] = {.lex_state = 323},
  [79] = {.lex_state = 322},
  [80] = {.lex_state = 31},
  [81] = {.lex_state = 327},
  [82] = {.lex_state = 322},
  [83] = {.lex_state = 327},
  [84] = {.lex_state = 327},
  [85] = {.lex_state = 338},
  [86] = {.lex_state = 323},
  [87] = {.lex_state = 328},
  [88] = {.lex_state = 324},
  [89] = {.lex_state = 328},
  [90] = {.lex_state = 322},
  [91] = {.lex_state = 339},
  [92] = {.lex_state = 322},
  [93] = {.lex_state = 329},
  [94] = {.lex_state = 329},
  [95] = {.lex_state = 352},
  [96] = {.lex_state = 322},
  [97] = {.lex_state = 324},
  [98] = {.lex_state = 352},
  [99] = {.lex_state = 324},
  [100] = {.lex_state = 325},
  [101] = {.lex_state = 350},
  [102] = {.lex_state = 350},
  [103] = {.lex_state = 328},
  [104] = {.lex_state = 351},
  [105] = {.lex_state = 324},
  [106] = {.lex_state = 351},
  [107] = {.lex_state = 327},
  [108] = {.lex_state = 325},
  [109] = {.lex_state = 324},
  [110] = {.lex_state = 34},
  [111] = {.lex_state = 353},
  [112] = {.lex_state = 330},
  [113] = {.lex_state = 325},
  [114] = {.lex_state = 325},
  [115] = {.lex_state = 353},
  [116] = {.lex_state = 327},
  [117] = {.lex_state = 327},
  [118] = {.lex_state = 327},
  [119] = {.lex_state = 330},
  [120] = {.lex_state = 34},
  [121] = {.lex_state = 342},
  [122] = {.lex_state = 327},
  [123] = {.lex_state = 35},
  [124] = {.lex_state = 327},
  [125] = {.lex_state = 327},
  [126] = {.lex_state = 359},
  [127] = {.lex_state = 327},
  [128] = {.lex_state = 327},
  [129] = {.lex_state = 359},
  [130] = {.lex_state = 327},
  [131] = {.lex_state = 327},
  [132] = {.lex_state = 327},
  [133] = {.lex_state = 327},
  [134] = {.lex_state = 327},
  [135] = {.lex_state = 333},
  [136] = {.lex_state = 327},
  [137] = {.lex_state = 327},
  [138] = {.lex_state = 333},
  [139] = {.lex_state = 34},
  [140] = {.lex_state = 35},
  [141] = {.lex_state = 342},
  [142] = {.lex_state = 327},
  [143] = {.lex_state = 322},
  [144] = {.lex_state = 14},
  [145] = {.lex_state = 334},
  [146] = {.lex_state = 334},
  [147] = {.lex_state = 327},
  [148] = {.lex_state = 332},
  [149] = {.lex_state = 332},
  [150] = {.lex_state = 354},
  [151] = {.lex_state = 354},
  [152] = {.lex_state = 331},
  [153] = {.lex_state = 331},
  [154] = {.lex_state = 322},
  [155] = {.lex_state = 340},
  [156] = {.lex_state = 340},
  [157] = {.lex_state = 327},
  [158] = {.lex_state = 322},
  [159] = {.lex_state = 322},
  [160] = {.lex_state = 327},
  [161] = {.lex_state = 349},
  [162] = {.lex_state = 322},
  [163] = {.lex_state = 327},
  [164] = {.lex_state = 349},
  [165] = {.lex_state = 347},
  [166] = {.lex_state = 327},
  [167] = {.lex_state = 347},
  [168] = {.lex_state = 327},
  [169] = {.lex_state = 327},
  [170] = {.lex_state = 335},
  [171] = {.lex_state = 327},
  [172] = {.lex_state = 327},
  [173] = {.lex_state = 327},
  [174] = {.lex_state = 357},
  [175] = {.lex_state = 329},
  [176] = {.lex_state = 327},
  [177] = {.lex_state = 357},
  [178] = {.lex_state = 327},
  [179] = {.lex_state = 327},
  [180] = {.lex_state = 355},
  [181] = {.lex_state = 355},
  [182] = {.lex_state = 327},
  [183] = {.lex_state = 327},
  [184] = {.lex_state = 327},
  [185] = {.lex_state = 327},
  [186] = {.lex_state = 327},
  [187] = {.lex_state = 327},
  [188] = {.lex_state = 327},
  [189] = {.lex_state = 327},
  [190] = {.lex_state = 22},
  [191] = {.lex_state = 327},
  [192] = {.lex_state = 22},
  [193] = {.lex_state = 327},
  [194] = {.lex_state = 327},
  [195] = {.lex_state = 342},
  [196] = {.lex_state = 329},
  [197] = {.lex_state = 342},
  [198] = {.lex_state = 327},
  [199] = {.lex_state = 327},
  [200] = {.lex_state = 327},
  [201] = {.lex_state = 344},
  [202] = {.lex_state = 335},
  [203] = {.lex_state = 344},
  [204] = {.lex_state = 327},
  [205] = {.lex_state = 356},
  [206] = {.lex_state = 356},
  [207] = {.lex_state = 358},
  [208] = {.lex_state = 342},
  [209] = {.lex_state = 343},
  [210] = {.lex_state = 327},
  [211] = {.lex_state = 327},
  [212] = {.lex_state = 342},
  [213] = {.lex_state = 327},
  [214] = {.lex_state = 327},
  [215] = {.lex_state = 327},
  [216] = {.lex_state = 327},
  [217] = {.lex_state = 343},
  [218] = {.lex_state = 327},
  [219] = {.lex_state = 327},
  [220] = {.lex_state = 327},
  [221] = {.lex_state = 327},
  [222] = {.lex_state = 327},
  [223] = {.lex_state = 327},
  [224] = {.lex_state = 327},
  [225] = {.lex_state = 327},
  [226] = {.lex_state = 327},
  [227] = {.lex_state = 345},
  [228] = {.lex_state = 327},
  [229] = {.lex_state = 327},
  [230] = {.lex_state = 327},
  [231] = {.lex_state = 327},
  [232] = {.lex_state = 327},
  [233] = {.lex_state = 327},
  [234] = {.lex_state = 327},
  [235] = {.lex_state = 327},
  [236] = {.lex_state = 358},
  [237] = {.lex_state = 31},
  [238] = {.lex_state = 327},
  [239] = {.lex_state = 327},
  [240] = {.lex_state = 6},
  [241] = {.lex_state = 327},
  [242] = {.lex_state = 327},
  [243] = {.lex_state = 327},
  [244] = {.lex_state = 36},
  [245] = {.lex_state = 327},
  [246] = {.lex_state = 327},
  [247] = {.lex_state = 327},
  [248] = {.lex_state = 360},
  [249] = {.lex_state = 327},
  [250] = {.lex_state = 32},
  [251] = {.lex_state = 36},
  [252] = {.lex_state = 327},
  [253] = {.lex_state = 327},
  [254] = {.lex_state = 327},
  [255] = {.lex_state = 327},
  [256] = {.lex_state = 32},
  [257] = {.lex_state = 327},
  [258] = {.lex_state = 360},
  [259] = {.lex_state = 327},
  [260] = {.lex_state = 327},
  [261] = {.lex_state = 36},
  [262] = {.lex_state = 327},
  [263] = {.lex_state = 327},
  [264] = {.lex_state = 327},
  [265] = {.lex_state = 327},
  [266] = {.lex_state = 327},
  [267] = {.lex_state = 36},
  [268] = {.lex_state = 327},
  [269] = {.lex_state = 327},
  [270] = {.lex_state = 327},
  [271] = {.lex_state = 36},
  [272] = {.lex_state = 327},
  [273] = {.lex_state = 36},
  [274] = {.lex_state = 36},
  [275] = {.lex_state = 36},
  [276] = {.lex_state = 327},
  [277] = {.lex_state = 36},
  [278] = {.lex_state = 36},
  [279] = {.lex_state = 327},
  [280] = {.lex_state = 36},
  [281] = {.lex_state = 36},
  [282] = {.lex_state = 327},
  [283] = {.lex_state = 36},
  [284] = {.lex_state = 36},
  [285] = {.lex_state = 327},
  [286] = {.lex_state = 327},
  [287] = {.lex_state = 31},
  [288] = {.lex_state = 36},
  [289] = {.lex_state = 327},
  [290] = {.lex_state = 327},
  [291] = {.lex_state = 327},
  [292] = {.lex_state = 327},
  [293] = {.lex_state = 36},
  [294] = {.lex_state = 36},
  [295] = {.lex_state = 36},
  [296] = {.lex_state = 36},
  [297] = {.lex_state = 36},
  [298] = {.lex_state = 36},
  [299] = {.lex_state = 327},
  [300] = {.lex_state = 36},
  [301] = {.lex_state = 327},
  [302] = {.lex_state = 327},
  [303] = {.lex_state = 36},
  [304] = {.lex_state = 36},
  [305] = {.lex_state = 36},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 36},
  [308] = {.lex_state = 327},
  [309] = {.lex_state = 36},
  [310] = {.lex_state = 327},
  [311] = {.lex_state = 327},
  [312] = {.lex_state = 327},
  [313] = {.lex_state = 327},
  [314] = {.lex_state = 36},
  [315] = {.lex_state = 36},
  [316] = {.lex_state = 327},
  [317] = {.lex_state = 327},
  [318] = {.lex_state = 36},
  [319] = {.lex_state = 327},
  [320] = {.lex_state = 327},
  [321] = {.lex_state = 327},
  [322] = {.lex_state = 36},
  [323] = {.lex_state = 327},
  [324] = {.lex_state = 327},
  [325] = {.lex_state = 327},
  [326] = {.lex_state = 36},
  [327] = {.lex_state = 327},
  [328] = {.lex_state = 327},
  [329] = {.lex_state = 327},
  [330] = {.lex_state = 327},
  [331] = {.lex_state = 327},
  [332] = {.lex_state = 327},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 322},
  [335] = {.lex_state = 16},
  [336] = {.lex_state = 327},
  [337] = {.lex_state = 327},
  [338] = {.lex_state = 33},
  [339] = {.lex_state = 33},
  [340] = {.lex_state = 322},
  [341] = {.lex_state = 18},
  [342] = {.lex_state = 17},
  [343] = {.lex_state = 322},
  [344] = {.lex_state = 24},
  [345] = {.lex_state = 18},
  [346] = {.lex_state = 38},
  [347] = {.lex_state = 37},
  [348] = {.lex_state = 37},
  [349] = {.lex_state = 38},
  [350] = {.lex_state = 154},
  [351] = {.lex_state = 25},
  [352] = {.lex_state = 15},
  [353] = {.lex_state = 18},
  [354] = {.lex_state = 18},
  [355] = {.lex_state = 8},
  [356] = {.lex_state = 18},
  [357] = {.lex_state = 8},
  [358] = {.lex_state = 15},
  [359] = {.lex_state = 25},
  [360] = {.lex_state = 18},
  [361] = {.lex_state = 29},
  [362] = {.lex_state = 18},
  [363] = {.lex_state = 20},
  [364] = {.lex_state = 241},
  [365] = {.lex_state = 20},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 7},
  [369] = {.lex_state = 327},
  [370] = {.lex_state = 327},
  [371] = {.lex_state = 7},
  [372] = {.lex_state = 327},
  [373] = {.lex_state = 7},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 12},
  [376] = {.lex_state = 7},
  [377] = {.lex_state = 26},
  [378] = {.lex_state = 26},
  [379] = {.lex_state = 7},
  [380] = {.lex_state = 7},
  [381] = {.lex_state = 12},
  [382] = {.lex_state = 21},
  [383] = {.lex_state = 21},
  [384] = {.lex_state = 5},
  [385] = {.lex_state = 5},
  [386] = {.lex_state = 9},
  [387] = {.lex_state = 9},
  [388] = {.lex_state = 12},
  [389] = {.lex_state = 327},
  [390] = {.lex_state = 327},
  [391] = {.lex_state = 7},
  [392] = {.lex_state = 10},
  [393] = {.lex_state = 10},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 327},
  [396] = {.lex_state = 327},
  [397] = {.lex_state = 23},
  [398] = {.lex_state = 19},
  [399] = {.lex_state = 301},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 18},
  [404] = {.lex_state = 18},
  [405] = {.lex_state = 301},
  [406] = {.lex_state = 301},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 301},
  [409] = {.lex_state = 301},
  [410] = {.lex_state = 301},
  [411] = {.lex_state = 301},
  [412] = {.lex_state = 301},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 301},
  [415] = {.lex_state = 19},
  [416] = {.lex_state = 301},
  [417] = {.lex_state = 301},
  [418] = {.lex_state = 301},
  [419] = {.lex_state = 301},
  [420] = {.lex_state = 301},
  [421] = {.lex_state = 301},
  [422] = {.lex_state = 301},
  [423] = {.lex_state = 301},
  [424] = {.lex_state = 301},
  [425] = {.lex_state = 301},
  [426] = {.lex_state = 301},
  [427] = {.lex_state = 301},
  [428] = {.lex_state = 327},
  [429] = {.lex_state = 301},
  [430] = {.lex_state = 19},
  [431] = {.lex_state = 29},
  [432] = {.lex_state = 301},
  [433] = {.lex_state = 301},
  [434] = {.lex_state = 301},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 29},
  [438] = {.lex_state = 301},
  [439] = {.lex_state = 301},
  [440] = {.lex_state = 301},
  [441] = {.lex_state = 301},
  [442] = {.lex_state = 23},
  [443] = {.lex_state = 301},
  [444] = {.lex_state = 301},
  [445] = {.lex_state = 301},
  [446] = {.lex_state = 29},
  [447] = {.lex_state = 301},
  [448] = {.lex_state = 327},
  [449] = {.lex_state = 301},
  [450] = {.lex_state = 301},
  [451] = {.lex_state = 327},
  [452] = {.lex_state = 301},
  [453] = {.lex_state = 301},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 301},
  [456] = {.lex_state = 301},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 301},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 301},
  [461] = {.lex_state = 11},
  [462] = {.lex_state = 11},
  [463] = {.lex_state = 301},
  [464] = {.lex_state = 301},
  [465] = {.lex_state = 301},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 301},
  [468] = {.lex_state = 301},
  [469] = {.lex_state = 326},
  [470] = {.lex_state = 326},
  [471] = {.lex_state = 327},
  [472] = {.lex_state = 301},
  [473] = {.lex_state = 301},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 327},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 29},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 327},
  [483] = {.lex_state = 327},
  [484] = {.lex_state = 327},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 327},
  [487] = {.lex_state = 327},
  [488] = {.lex_state = 327},
  [489] = {.lex_state = 18},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 345},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 327},
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
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
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
  },
  [1] = {
    [sym_doc] = STATE(521),
    [sym_alias] = STATE(55),
    [sym_profile] = STATE(55),
    [sym_extension] = STATE(55),
    [sym_invariant] = STATE(55),
    [sym_instance] = STATE(55),
    [sym_valueset] = STATE(55),
    [sym_codesystem] = STATE(55),
    [sym_mapping] = STATE(55),
    [sym_logical] = STATE(55),
    [sym_resource] = STATE(55),
    [sym_rule_set] = STATE(55),
    [aux_sym_doc_repeat1] = STATE(55),
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
    STATE(4), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(34), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(331), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(157), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(311), 10,
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
    STATE(38), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(57), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(331), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(157), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(311), 10,
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
    STATE(31), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(57), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(331), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(157), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(311), 10,
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
    STATE(3), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(30), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(331), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(157), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(311), 10,
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
  [244] = 10,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(31), 1,
      anon_sym_Id,
    ACTIONS(33), 1,
      anon_sym_Parent,
    ACTIONS(35), 1,
      anon_sym_Title,
    ACTIONS(47), 1,
      anon_sym_STAR,
    STATE(8), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(48), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(157), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(311), 10,
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
    ACTIONS(45), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [300] = 10,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(31), 1,
      anon_sym_Id,
    ACTIONS(33), 1,
      anon_sym_Parent,
    ACTIONS(35), 1,
      anon_sym_Title,
    ACTIONS(47), 1,
      anon_sym_STAR,
    STATE(51), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(57), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(157), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(311), 10,
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
  [356] = 10,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(31), 1,
      anon_sym_Id,
    ACTIONS(33), 1,
      anon_sym_Parent,
    ACTIONS(35), 1,
      anon_sym_Title,
    ACTIONS(47), 1,
      anon_sym_STAR,
    STATE(44), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(57), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(157), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(311), 10,
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
  [412] = 17,
    ACTIONS(55), 1,
      anon_sym_EQ,
    ACTIONS(57), 1,
      anon_sym_insert,
    ACTIONS(59), 1,
      anon_sym_from,
    ACTIONS(61), 1,
      anon_sym_contains,
    ACTIONS(63), 1,
      anon_sym_and,
    ACTIONS(65), 1,
      anon_sym_obeys,
    ACTIONS(67), 1,
      anon_sym_only,
    ACTIONS(69), 1,
      anon_sym_DASH_GT,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(75), 1,
      aux_sym_cardinality_token1,
    ACTIONS(77), 1,
      anon_sym_DOT_DOT,
    STATE(62), 1,
      sym_cardinality,
    STATE(334), 1,
      aux_sym_flag_rule_repeat1,
    STATE(511), 1,
      sym_caret_path,
    STATE(82), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(73), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(53), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [482] = 16,
    ACTIONS(55), 1,
      anon_sym_EQ,
    ACTIONS(57), 1,
      anon_sym_insert,
    ACTIONS(59), 1,
      anon_sym_from,
    ACTIONS(61), 1,
      anon_sym_contains,
    ACTIONS(63), 1,
      anon_sym_and,
    ACTIONS(65), 1,
      anon_sym_obeys,
    ACTIONS(67), 1,
      anon_sym_only,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(75), 1,
      aux_sym_cardinality_token1,
    ACTIONS(77), 1,
      anon_sym_DOT_DOT,
    STATE(62), 1,
      sym_cardinality,
    STATE(334), 1,
      aux_sym_flag_rule_repeat1,
    STATE(511), 1,
      sym_caret_path,
    STATE(82), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(73), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(53), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [549] = 19,
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
    STATE(122), 1,
      sym_code,
    STATE(194), 1,
      sym_reference,
    STATE(195), 1,
      aux_sym_sequence_repeat1,
    STATE(219), 1,
      sym_quantity,
    STATE(249), 1,
      sym_sequence,
    STATE(285), 1,
      sym_value,
    STATE(544), 1,
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
    STATE(269), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [622] = 19,
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
    STATE(122), 1,
      sym_code,
    STATE(194), 1,
      sym_reference,
    STATE(195), 1,
      aux_sym_sequence_repeat1,
    STATE(219), 1,
      sym_quantity,
    STATE(249), 1,
      sym_sequence,
    STATE(291), 1,
      sym_value,
    STATE(544), 1,
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
    STATE(269), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [695] = 19,
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
    STATE(122), 1,
      sym_code,
    STATE(156), 1,
      aux_sym_sequence_repeat1,
    STATE(194), 1,
      sym_reference,
    STATE(219), 1,
      sym_quantity,
    STATE(247), 1,
      sym_sequence,
    STATE(259), 1,
      sym_value,
    STATE(526), 1,
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
    STATE(269), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [768] = 19,
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
    STATE(122), 1,
      sym_code,
    STATE(194), 1,
      sym_reference,
    STATE(195), 1,
      aux_sym_sequence_repeat1,
    STATE(219), 1,
      sym_quantity,
    STATE(249), 1,
      sym_sequence,
    STATE(282), 1,
      sym_value,
    STATE(544), 1,
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
    STATE(269), 8,
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
    STATE(332), 8,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_mapping_rule,
      sym_add_element_rule,
      sym_vs_component,
      sym_concept,
    STATE(311), 10,
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
    STATE(332), 8,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_mapping_rule,
      sym_add_element_rule,
      sym_vs_component,
      sym_concept,
    STATE(311), 10,
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
  [929] = 4,
    ACTIONS(118), 1,
      aux_sym_sequence_token1,
    ACTIONS(120), 1,
      aux_sym_cardinality_token1,
    STATE(18), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 30,
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
  [971] = 4,
    ACTIONS(124), 1,
      aux_sym_sequence_token1,
    ACTIONS(127), 1,
      aux_sym_cardinality_token1,
    STATE(18), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 30,
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
  [1013] = 2,
    ACTIONS(131), 1,
      anon_sym_Instance,
    ACTIONS(129), 31,
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
  [1050] = 13,
    ACTIONS(55), 1,
      anon_sym_EQ,
    ACTIONS(57), 1,
      anon_sym_insert,
    ACTIONS(59), 1,
      anon_sym_from,
    ACTIONS(61), 1,
      anon_sym_contains,
    ACTIONS(63), 1,
      anon_sym_and,
    ACTIONS(65), 1,
      anon_sym_obeys,
    ACTIONS(67), 1,
      anon_sym_only,
    ACTIONS(71), 1,
      anon_sym_CARET,
    STATE(334), 1,
      aux_sym_flag_rule_repeat1,
    STATE(511), 1,
      sym_caret_path,
    STATE(82), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(73), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(53), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [1108] = 4,
    ACTIONS(120), 1,
      aux_sym_cardinality_token1,
    ACTIONS(133), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 28,
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
  [1148] = 4,
    ACTIONS(127), 1,
      aux_sym_cardinality_token1,
    ACTIONS(135), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 28,
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
  [1188] = 3,
    ACTIONS(140), 1,
      anon_sym_POUND,
    ACTIONS(142), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
    ACTIONS(138), 28,
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
  [1226] = 2,
    ACTIONS(142), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
    ACTIONS(138), 28,
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
  [1261] = 11,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(35), 1,
      anon_sym_Title,
    ACTIONS(147), 1,
      anon_sym_Id,
    ACTIONS(149), 1,
      anon_sym_Source,
    ACTIONS(151), 1,
      anon_sym_Target,
    ACTIONS(153), 1,
      anon_sym_STAR,
    STATE(28), 2,
      sym_mapping_metadata,
      aux_sym_mapping_repeat1,
    STATE(124), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(330), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    STATE(125), 5,
      sym_description,
      sym_id,
      sym_source,
      sym_target,
      sym_title,
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
      anon_sym_RuleSet,
  [1314] = 2,
    ACTIONS(157), 2,
      anon_sym_Instance,
      anon_sym_DQUOTE,
    ACTIONS(155), 28,
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
  [1349] = 2,
    ACTIONS(161), 2,
      anon_sym_Instance,
      anon_sym_DQUOTE,
    ACTIONS(159), 28,
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
  [1384] = 11,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(35), 1,
      anon_sym_Title,
    ACTIONS(147), 1,
      anon_sym_Id,
    ACTIONS(149), 1,
      anon_sym_Source,
    ACTIONS(151), 1,
      anon_sym_Target,
    ACTIONS(153), 1,
      anon_sym_STAR,
    STATE(49), 2,
      sym_mapping_metadata,
      aux_sym_mapping_repeat1,
    STATE(136), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(330), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    STATE(125), 5,
      sym_description,
      sym_id,
      sym_source,
      sym_target,
      sym_title,
    ACTIONS(163), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [1437] = 2,
    ACTIONS(129), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
    ACTIONS(138), 27,
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
  [1471] = 5,
    ACTIONS(37), 1,
      anon_sym_STAR,
    STATE(39), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(331), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(311), 10,
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
  [1510] = 5,
    ACTIONS(37), 1,
      anon_sym_STAR,
    STATE(39), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(331), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(311), 10,
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
    ACTIONS(165), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [1549] = 11,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(35), 1,
      anon_sym_Title,
    ACTIONS(169), 1,
      anon_sym_Instance,
    ACTIONS(171), 1,
      anon_sym_InstanceOf,
    ACTIONS(173), 1,
      anon_sym_Usage,
    ACTIONS(175), 1,
      anon_sym_STAR,
    STATE(33), 2,
      sym_instance_metadata,
      aux_sym_instance_repeat1,
    STATE(134), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(272), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    STATE(163), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(167), 11,
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
  [1600] = 11,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(35), 1,
      anon_sym_Title,
    ACTIONS(171), 1,
      anon_sym_InstanceOf,
    ACTIONS(173), 1,
      anon_sym_Usage,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(179), 1,
      anon_sym_Instance,
    STATE(59), 2,
      sym_instance_metadata,
      aux_sym_instance_repeat1,
    STATE(117), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(272), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    STATE(163), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(177), 11,
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
  [1651] = 5,
    ACTIONS(37), 1,
      anon_sym_STAR,
    STATE(39), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(331), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(311), 10,
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
  [1690] = 21,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(181), 1,
      anon_sym_insert,
    ACTIONS(183), 1,
      anon_sym_obeys,
    ACTIONS(185), 1,
      anon_sym_DASH_GT,
    ACTIONS(189), 1,
      anon_sym_codes,
    ACTIONS(191), 1,
      anon_sym_system,
    ACTIONS(193), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      aux_sym_sequence_token1,
    ACTIONS(197), 1,
      sym_number,
    STATE(9), 1,
      sym_path,
    STATE(17), 1,
      aux_sym_sequence_repeat1,
    STATE(23), 1,
      sym_sequence,
    STATE(54), 1,
      aux_sym_code_insert_rule_repeat1,
    STATE(58), 1,
      sym_code,
    STATE(198), 1,
      sym_code_string,
    STATE(341), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(448), 1,
      sym_name,
    STATE(516), 1,
      sym_caret_path,
    ACTIONS(187), 2,
      anon_sym_include,
      anon_sym_exclude,
    STATE(286), 2,
      sym_vs_concept_component,
      sym_vs_filter_component,
    ACTIONS(79), 6,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [1761] = 2,
    ACTIONS(201), 1,
      anon_sym_Instance,
    ACTIONS(199), 27,
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
  [1794] = 2,
    ACTIONS(205), 1,
      anon_sym_Instance,
    ACTIONS(203), 27,
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
  [1827] = 5,
    ACTIONS(37), 1,
      anon_sym_STAR,
    STATE(39), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(331), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(311), 10,
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
      anon_sym_RuleSet,
  [1866] = 5,
    ACTIONS(211), 1,
      anon_sym_STAR,
    STATE(39), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(331), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(311), 10,
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
      anon_sym_RuleSet,
  [1905] = 9,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(35), 1,
      anon_sym_Title,
    ACTIONS(216), 1,
      anon_sym_Id,
    ACTIONS(218), 1,
      anon_sym_STAR,
    STATE(81), 2,
      sym_cs_metadata,
      aux_sym_codesystem_repeat1,
    STATE(132), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(178), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(327), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
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
  [1950] = 9,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(35), 1,
      anon_sym_Title,
    ACTIONS(216), 1,
      anon_sym_Id,
    ACTIONS(222), 1,
      anon_sym_STAR,
    STATE(43), 2,
      sym_vs_metadata,
      aux_sym_valueset_repeat1,
    STATE(131), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(183), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(323), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
    ACTIONS(220), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [1995] = 9,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(35), 1,
      anon_sym_Title,
    ACTIONS(216), 1,
      anon_sym_Id,
    ACTIONS(218), 1,
      anon_sym_STAR,
    STATE(40), 2,
      sym_cs_metadata,
      aux_sym_codesystem_repeat1,
    STATE(130), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(178), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(327), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
    ACTIONS(224), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [2040] = 9,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(35), 1,
      anon_sym_Title,
    ACTIONS(216), 1,
      anon_sym_Id,
    ACTIONS(222), 1,
      anon_sym_STAR,
    STATE(76), 2,
      sym_vs_metadata,
      aux_sym_valueset_repeat1,
    STATE(127), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(183), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(323), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
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
  [2085] = 4,
    ACTIONS(47), 1,
      anon_sym_STAR,
    STATE(47), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(311), 10,
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
  [2119] = 2,
    ACTIONS(232), 1,
      anon_sym_Instance,
    ACTIONS(230), 24,
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
  [2149] = 2,
    ACTIONS(236), 1,
      anon_sym_Instance,
    ACTIONS(234), 24,
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
  [2179] = 4,
    ACTIONS(240), 1,
      anon_sym_STAR,
    STATE(47), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(311), 10,
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
    ACTIONS(238), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [2213] = 4,
    ACTIONS(47), 1,
      anon_sym_STAR,
    STATE(47), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(311), 10,
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
  [2247] = 8,
    ACTIONS(245), 1,
      anon_sym_Description,
    ACTIONS(248), 1,
      anon_sym_Id,
    ACTIONS(251), 1,
      anon_sym_Source,
    ACTIONS(254), 1,
      anon_sym_Target,
    ACTIONS(257), 1,
      anon_sym_Title,
    STATE(49), 2,
      sym_mapping_metadata,
      aux_sym_mapping_repeat1,
    STATE(125), 5,
      sym_description,
      sym_id,
      sym_source,
      sym_target,
      sym_title,
    ACTIONS(243), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [2289] = 10,
    ACTIONS(264), 1,
      anon_sym_POUND,
    ACTIONS(266), 1,
      aux_sym_sequence_token1,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    STATE(122), 1,
      sym_code,
    STATE(253), 1,
      sym_vs_filter_value,
    STATE(403), 1,
      aux_sym_sequence_repeat1,
    STATE(542), 1,
      sym_sequence,
    ACTIONS(262), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(254), 2,
      sym_code_string,
      sym_string,
    ACTIONS(260), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [2335] = 4,
    ACTIONS(47), 1,
      anon_sym_STAR,
    STATE(47), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(311), 10,
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
      anon_sym_RuleSet,
  [2369] = 13,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
    ACTIONS(274), 1,
      anon_sym_Alias,
    ACTIONS(277), 1,
      anon_sym_Profile,
    ACTIONS(280), 1,
      anon_sym_Extension,
    ACTIONS(283), 1,
      anon_sym_Invariant,
    ACTIONS(286), 1,
      anon_sym_Instance,
    ACTIONS(289), 1,
      anon_sym_ValueSet,
    ACTIONS(292), 1,
      anon_sym_CodeSystem,
    ACTIONS(295), 1,
      anon_sym_Mapping,
    ACTIONS(298), 1,
      anon_sym_Logical,
    ACTIONS(301), 1,
      anon_sym_Resource,
    ACTIONS(304), 1,
      anon_sym_RuleSet,
    STATE(52), 12,
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
      aux_sym_doc_repeat1,
  [2420] = 1,
    ACTIONS(138), 24,
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
  [2447] = 11,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(266), 1,
      aux_sym_sequence_token1,
    ACTIONS(309), 1,
      anon_sym_insert,
    ACTIONS(311), 1,
      anon_sym_POUND,
    STATE(158), 1,
      sym_string,
    STATE(308), 1,
      sym_multiline_string,
    STATE(403), 1,
      aux_sym_sequence_repeat1,
    STATE(534), 1,
      sym_sequence,
    STATE(71), 2,
      sym_code,
      aux_sym_code_insert_rule_repeat1,
    ACTIONS(307), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [2494] = 13,
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
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    STATE(52), 12,
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
      aux_sym_doc_repeat1,
  [2545] = 2,
    ACTIONS(317), 1,
      anon_sym_Instance,
    ACTIONS(315), 23,
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
  [2574] = 7,
    ACTIONS(321), 1,
      anon_sym_Description,
    ACTIONS(324), 1,
      anon_sym_Id,
    ACTIONS(327), 1,
      anon_sym_Parent,
    ACTIONS(330), 1,
      anon_sym_Title,
    STATE(57), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(157), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    ACTIONS(319), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [2612] = 8,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(340), 1,
      aux_sym_sequence_token1,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    STATE(188), 1,
      sym_string,
    STATE(499), 1,
      sym_caret_path,
    ACTIONS(338), 2,
      anon_sym_from,
      anon_sym_and,
    ACTIONS(336), 3,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(333), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [2652] = 8,
    ACTIONS(347), 1,
      anon_sym_Instance,
    ACTIONS(349), 1,
      anon_sym_Description,
    ACTIONS(352), 1,
      anon_sym_InstanceOf,
    ACTIONS(355), 1,
      anon_sym_Title,
    ACTIONS(358), 1,
      anon_sym_Usage,
    STATE(59), 2,
      sym_instance_metadata,
      aux_sym_instance_repeat1,
    STATE(163), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(345), 12,
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
  [2692] = 7,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(363), 1,
      anon_sym_Expression,
    ACTIONS(365), 1,
      anon_sym_Severity,
    ACTIONS(367), 1,
      anon_sym_XPath,
    STATE(72), 2,
      sym_invariant_metadata,
      aux_sym_invariant_repeat1,
    STATE(189), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
    ACTIONS(361), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [2729] = 3,
    ACTIONS(371), 1,
      anon_sym_STAR,
    ACTIONS(373), 2,
      aux_sym_cardinality_token1,
      anon_sym_STAR2,
    ACTIONS(369), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2758] = 14,
    ACTIONS(97), 1,
      anon_sym_Reference,
    ACTIONS(99), 1,
      anon_sym_Canonical,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(375), 1,
      anon_sym_contentReference,
    ACTIONS(377), 1,
      aux_sym_sequence_token1,
    ACTIONS(381), 1,
      anon_sym_QMARK_BANG,
    STATE(19), 1,
      sym_sequence,
    STATE(234), 1,
      sym_reference,
    STATE(372), 1,
      sym_target_type,
    STATE(393), 1,
      aux_sym_sequence_repeat1,
    STATE(80), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    STATE(233), 2,
      sym_name,
      sym_canonical,
    ACTIONS(79), 3,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
    ACTIONS(379), 5,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [2809] = 4,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(383), 1,
      aux_sym_sequence_token1,
    STATE(65), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [2840] = 8,
    ACTIONS(266), 1,
      aux_sym_sequence_token1,
    ACTIONS(389), 1,
      anon_sym_COLON,
    ACTIONS(391), 1,
      anon_sym_POUND,
    ACTIONS(393), 1,
      anon_sym_SQUOTE,
    STATE(403), 1,
      aux_sym_sequence_repeat1,
    STATE(539), 1,
      sym_sequence,
    STATE(147), 2,
      sym_code,
      sym_unit,
    ACTIONS(386), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [2879] = 4,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      aux_sym_sequence_token1,
    STATE(65), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [2910] = 3,
    ACTIONS(400), 1,
      anon_sym_STAR,
    ACTIONS(402), 2,
      aux_sym_cardinality_token1,
      anon_sym_STAR2,
    ACTIONS(398), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2939] = 3,
    STATE(73), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(73), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(404), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [2968] = 3,
    STATE(69), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(73), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(406), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [2997] = 3,
    STATE(73), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(73), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(408), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [3026] = 3,
    STATE(67), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(73), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(410), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [3055] = 7,
    ACTIONS(414), 1,
      anon_sym_POUND,
    ACTIONS(417), 1,
      aux_sym_sequence_token1,
    ACTIONS(420), 1,
      anon_sym_DQUOTE,
    STATE(403), 1,
      aux_sym_sequence_repeat1,
    STATE(534), 1,
      sym_sequence,
    STATE(71), 2,
      sym_code,
      aux_sym_code_insert_rule_repeat1,
    ACTIONS(412), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [3092] = 7,
    ACTIONS(424), 1,
      anon_sym_Description,
    ACTIONS(427), 1,
      anon_sym_Expression,
    ACTIONS(430), 1,
      anon_sym_Severity,
    ACTIONS(433), 1,
      anon_sym_XPath,
    STATE(72), 2,
      sym_invariant_metadata,
      aux_sym_invariant_repeat1,
    STATE(189), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
    ACTIONS(422), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [3129] = 3,
    STATE(73), 2,
      sym_flag,
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
  [3158] = 7,
    ACTIONS(101), 1,
      anon_sym_POUND,
    ACTIONS(266), 1,
      aux_sym_sequence_token1,
    ACTIONS(393), 1,
      anon_sym_SQUOTE,
    STATE(403), 1,
      aux_sym_sequence_repeat1,
    STATE(541), 1,
      sym_sequence,
    STATE(147), 2,
      sym_code,
      sym_unit,
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
      anon_sym_LPAREN,
  [3194] = 3,
    STATE(77), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(73), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(441), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [3222] = 6,
    ACTIONS(445), 1,
      anon_sym_Description,
    ACTIONS(448), 1,
      anon_sym_Id,
    ACTIONS(451), 1,
      anon_sym_Title,
    STATE(76), 2,
      sym_vs_metadata,
      aux_sym_valueset_repeat1,
    STATE(183), 3,
      sym_description,
      sym_id,
      sym_title,
    ACTIONS(443), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [3256] = 3,
    STATE(73), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(73), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(454), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [3284] = 2,
    ACTIONS(205), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
    ACTIONS(203), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [3310] = 3,
    STATE(73), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(73), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(456), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [3338] = 13,
    ACTIONS(97), 1,
      anon_sym_Reference,
    ACTIONS(99), 1,
      anon_sym_Canonical,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(377), 1,
      aux_sym_sequence_token1,
    ACTIONS(381), 1,
      anon_sym_QMARK_BANG,
    STATE(19), 1,
      sym_sequence,
    STATE(234), 1,
      sym_reference,
    STATE(390), 1,
      sym_target_type,
    STATE(393), 1,
      aux_sym_sequence_repeat1,
    STATE(233), 2,
      sym_name,
      sym_canonical,
    STATE(237), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(79), 3,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
    ACTIONS(379), 5,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [3386] = 6,
    ACTIONS(460), 1,
      anon_sym_Description,
    ACTIONS(463), 1,
      anon_sym_Id,
    ACTIONS(466), 1,
      anon_sym_Title,
    STATE(81), 2,
      sym_cs_metadata,
      aux_sym_codesystem_repeat1,
    STATE(178), 3,
      sym_description,
      sym_id,
      sym_title,
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
  [3420] = 3,
    STATE(73), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(73), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
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
  [3448] = 4,
    ACTIONS(114), 1,
      anon_sym_STAR,
    STATE(16), 2,
      sym_rule_set_rule,
      aux_sym_rule_set_repeat1,
    STATE(332), 8,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_mapping_rule,
      sym_add_element_rule,
      sym_vs_component,
      sym_concept,
    STATE(311), 10,
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
  [3478] = 2,
    ACTIONS(473), 1,
      anon_sym_Instance,
    ACTIONS(471), 20,
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
  [3504] = 8,
    ACTIONS(266), 1,
      aux_sym_sequence_token1,
    ACTIONS(389), 1,
      anon_sym_COLON,
    ACTIONS(393), 1,
      anon_sym_SQUOTE,
    ACTIONS(475), 1,
      anon_sym_POUND,
    STATE(403), 1,
      aux_sym_sequence_repeat1,
    STATE(538), 1,
      sym_sequence,
    STATE(147), 2,
      sym_code,
      sym_unit,
    ACTIONS(386), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [3542] = 2,
    ACTIONS(201), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
    ACTIONS(199), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [3568] = 3,
    ACTIONS(477), 1,
      aux_sym_sequence_token1,
    STATE(87), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [3595] = 4,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(480), 1,
      aux_sym_sequence_token1,
    STATE(88), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [3624] = 3,
    ACTIONS(483), 1,
      aux_sym_sequence_token1,
    STATE(87), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [3651] = 1,
    ACTIONS(486), 20,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [3674] = 7,
    ACTIONS(83), 1,
      anon_sym_POUND,
    ACTIONS(266), 1,
      aux_sym_sequence_token1,
    ACTIONS(393), 1,
      anon_sym_SQUOTE,
    STATE(403), 1,
      aux_sym_sequence_repeat1,
    STATE(540), 1,
      sym_sequence,
    STATE(147), 2,
      sym_code,
      sym_unit,
    ACTIONS(389), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [3709] = 1,
    ACTIONS(398), 20,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [3732] = 8,
    ACTIONS(266), 1,
      aux_sym_sequence_token1,
    ACTIONS(490), 1,
      anon_sym_POUND,
    ACTIONS(492), 1,
      anon_sym_DQUOTE,
    STATE(121), 1,
      sym_string,
    STATE(292), 1,
      sym_code,
    STATE(403), 1,
      aux_sym_sequence_repeat1,
    STATE(537), 1,
      sym_sequence,
    ACTIONS(488), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [3769] = 8,
    ACTIONS(266), 1,
      aux_sym_sequence_token1,
    ACTIONS(490), 1,
      anon_sym_POUND,
    ACTIONS(492), 1,
      anon_sym_DQUOTE,
    STATE(141), 1,
      sym_string,
    STATE(325), 1,
      sym_code,
    STATE(403), 1,
      aux_sym_sequence_repeat1,
    STATE(537), 1,
      sym_sequence,
    ACTIONS(494), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [3806] = 3,
    ACTIONS(496), 1,
      aux_sym_sequence_token1,
    STATE(95), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3833] = 1,
    ACTIONS(499), 20,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [3856] = 4,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(501), 1,
      aux_sym_sequence_token1,
    STATE(88), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [3885] = 3,
    ACTIONS(504), 1,
      aux_sym_sequence_token1,
    STATE(95), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3912] = 4,
    ACTIONS(71), 1,
      anon_sym_CARET,
    STATE(499), 1,
      sym_caret_path,
    ACTIONS(340), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
    ACTIONS(336), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [3941] = 4,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(506), 1,
      aux_sym_sequence_token1,
    STATE(108), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [3969] = 4,
    ACTIONS(120), 1,
      anon_sym_Instance,
    ACTIONS(509), 1,
      aux_sym_sequence_token1,
    STATE(102), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 16,
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
  [3997] = 4,
    ACTIONS(127), 1,
      anon_sym_Instance,
    ACTIONS(511), 1,
      aux_sym_sequence_token1,
    STATE(102), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 16,
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
  [4025] = 2,
    ACTIONS(516), 1,
      aux_sym_sequence_token1,
    ACTIONS(514), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [4049] = 3,
    ACTIONS(518), 1,
      aux_sym_sequence_token1,
    STATE(104), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4075] = 2,
    ACTIONS(201), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
    ACTIONS(199), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [4099] = 3,
    ACTIONS(521), 1,
      aux_sym_sequence_token1,
    STATE(104), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4125] = 1,
    ACTIONS(523), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4147] = 4,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(525), 1,
      aux_sym_sequence_token1,
    STATE(108), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [4175] = 2,
    ACTIONS(205), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
    ACTIONS(203), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [4199] = 10,
    ACTIONS(97), 1,
      anon_sym_Reference,
    ACTIONS(99), 1,
      anon_sym_Canonical,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(528), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(205), 1,
      aux_sym_sequence_repeat1,
    STATE(234), 1,
      sym_reference,
    STATE(235), 1,
      sym_target_type,
    STATE(233), 2,
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
  [4238] = 3,
    ACTIONS(530), 1,
      aux_sym_sequence_token1,
    STATE(111), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4263] = 3,
    ACTIONS(533), 1,
      aux_sym_sequence_token1,
    STATE(119), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 16,
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
  [4288] = 2,
    ACTIONS(205), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
    ACTIONS(203), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [4311] = 2,
    ACTIONS(201), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
    ACTIONS(199), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [4334] = 3,
    ACTIONS(535), 1,
      aux_sym_sequence_token1,
    STATE(111), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4359] = 1,
    ACTIONS(537), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4380] = 4,
    ACTIONS(175), 1,
      anon_sym_STAR,
    STATE(118), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(272), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
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
  [4407] = 4,
    ACTIONS(543), 1,
      anon_sym_STAR,
    STATE(118), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(272), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
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
  [4434] = 3,
    ACTIONS(546), 1,
      aux_sym_sequence_token1,
    STATE(119), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 16,
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
  [4459] = 10,
    ACTIONS(97), 1,
      anon_sym_Reference,
    ACTIONS(99), 1,
      anon_sym_Canonical,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(528), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(205), 1,
      aux_sym_sequence_repeat1,
    STATE(222), 1,
      sym_target_type,
    STATE(234), 1,
      sym_reference,
    STATE(233), 2,
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
  [4498] = 6,
    ACTIONS(266), 1,
      aux_sym_sequence_token1,
    ACTIONS(490), 1,
      anon_sym_POUND,
    STATE(319), 1,
      sym_code,
    STATE(403), 1,
      aux_sym_sequence_repeat1,
    STATE(537), 1,
      sym_sequence,
    ACTIONS(549), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [4529] = 3,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    STATE(188), 1,
      sym_string,
    ACTIONS(338), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [4554] = 12,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(183), 1,
      anon_sym_obeys,
    ACTIONS(191), 1,
      anon_sym_system,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(551), 1,
      anon_sym_insert,
    ACTIONS(553), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_path,
    STATE(21), 1,
      aux_sym_sequence_repeat1,
    STATE(24), 1,
      sym_sequence,
    STATE(448), 1,
      sym_name,
    STATE(516), 1,
      sym_caret_path,
    ACTIONS(79), 7,
      anon_sym_codes,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [4597] = 4,
    ACTIONS(153), 1,
      anon_sym_STAR,
    STATE(137), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(330), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    ACTIONS(163), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [4624] = 1,
    ACTIONS(555), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4645] = 3,
    ACTIONS(557), 1,
      aux_sym_sequence_token1,
    STATE(126), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4670] = 4,
    ACTIONS(222), 1,
      anon_sym_STAR,
    STATE(128), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(323), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
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
  [4697] = 4,
    ACTIONS(564), 1,
      anon_sym_STAR,
    STATE(128), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(323), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
    ACTIONS(562), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [4724] = 3,
    ACTIONS(567), 1,
      aux_sym_sequence_token1,
    STATE(126), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4749] = 4,
    ACTIONS(218), 1,
      anon_sym_STAR,
    STATE(133), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(327), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
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
  [4776] = 4,
    ACTIONS(222), 1,
      anon_sym_STAR,
    STATE(128), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(323), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
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
  [4803] = 4,
    ACTIONS(218), 1,
      anon_sym_STAR,
    STATE(133), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(327), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
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
  [4830] = 4,
    ACTIONS(573), 1,
      anon_sym_STAR,
    STATE(133), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(327), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
    ACTIONS(571), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [4857] = 4,
    ACTIONS(175), 1,
      anon_sym_STAR,
    STATE(118), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(272), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
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
      anon_sym_RuleSet,
  [4884] = 3,
    ACTIONS(576), 1,
      aux_sym_sequence_token1,
    STATE(138), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [4909] = 4,
    ACTIONS(153), 1,
      anon_sym_STAR,
    STATE(137), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(330), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    ACTIONS(578), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [4936] = 4,
    ACTIONS(582), 1,
      anon_sym_STAR,
    STATE(137), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(330), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    ACTIONS(580), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [4963] = 3,
    ACTIONS(585), 1,
      aux_sym_sequence_token1,
    STATE(138), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [4988] = 10,
    ACTIONS(97), 1,
      anon_sym_Reference,
    ACTIONS(99), 1,
      anon_sym_Canonical,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(377), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(222), 1,
      sym_target_type,
    STATE(234), 1,
      sym_reference,
    STATE(393), 1,
      aux_sym_sequence_repeat1,
    STATE(233), 2,
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
  [5027] = 12,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(183), 1,
      anon_sym_obeys,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(551), 1,
      anon_sym_insert,
    ACTIONS(553), 1,
      aux_sym_sequence_token1,
    ACTIONS(588), 1,
      anon_sym_system,
    STATE(20), 1,
      sym_path,
    STATE(21), 1,
      aux_sym_sequence_repeat1,
    STATE(29), 1,
      sym_sequence,
    STATE(448), 1,
      sym_name,
    STATE(516), 1,
      sym_caret_path,
    ACTIONS(79), 7,
      anon_sym_codes,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [5070] = 6,
    ACTIONS(266), 1,
      aux_sym_sequence_token1,
    ACTIONS(490), 1,
      anon_sym_POUND,
    STATE(292), 1,
      sym_code,
    STATE(403), 1,
      aux_sym_sequence_repeat1,
    STATE(537), 1,
      sym_sequence,
    ACTIONS(488), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5101] = 1,
    ACTIONS(590), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5122] = 4,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(313), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(592), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5148] = 15,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(551), 1,
      anon_sym_insert,
    ACTIONS(594), 1,
      anon_sym_codes,
    ACTIONS(596), 1,
      anon_sym_system,
    ACTIONS(598), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      aux_sym_sequence_token1,
    STATE(122), 1,
      sym_code,
    STATE(198), 1,
      sym_code_string,
    STATE(341), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(352), 1,
      aux_sym_sequence_repeat1,
    STATE(459), 1,
      sym_sequence,
    STATE(466), 1,
      sym_path,
    STATE(516), 1,
      sym_caret_path,
    ACTIONS(187), 2,
      anon_sym_include,
      anon_sym_exclude,
    STATE(286), 2,
      sym_vs_concept_component,
      sym_vs_filter_component,
  [5196] = 3,
    ACTIONS(602), 1,
      aux_sym_sequence_token1,
    STATE(146), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5220] = 3,
    ACTIONS(604), 1,
      aux_sym_sequence_token1,
    STATE(146), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5244] = 3,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    STATE(228), 1,
      sym_string,
    ACTIONS(607), 15,
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
  [5268] = 3,
    ACTIONS(609), 1,
      aux_sym_sequence_token1,
    STATE(149), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 15,
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
  [5292] = 3,
    ACTIONS(611), 1,
      aux_sym_sequence_token1,
    STATE(149), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 15,
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
  [5316] = 3,
    ACTIONS(614), 1,
      aux_sym_sequence_token1,
    STATE(150), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5340] = 3,
    ACTIONS(617), 1,
      aux_sym_sequence_token1,
    STATE(150), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5364] = 3,
    ACTIONS(619), 1,
      aux_sym_sequence_token1,
    STATE(152), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5388] = 3,
    ACTIONS(622), 1,
      aux_sym_sequence_token1,
    STATE(152), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5412] = 4,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(321), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(624), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5438] = 3,
    ACTIONS(626), 1,
      aux_sym_sequence_token1,
    STATE(155), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5462] = 3,
    ACTIONS(629), 1,
      aux_sym_sequence_token1,
    STATE(155), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5486] = 1,
    ACTIONS(631), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5506] = 4,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(320), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(633), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5532] = 4,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(316), 2,
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
  [5558] = 1,
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
  [5578] = 3,
    ACTIONS(639), 1,
      aux_sym_sequence_token1,
    STATE(164), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 15,
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
  [5602] = 4,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(302), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(641), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5628] = 2,
    ACTIONS(645), 1,
      anon_sym_Instance,
    ACTIONS(643), 16,
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
  [5650] = 3,
    ACTIONS(647), 1,
      aux_sym_sequence_token1,
    STATE(164), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 15,
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
  [5674] = 3,
    ACTIONS(650), 1,
      aux_sym_sequence_token1,
    STATE(167), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5698] = 2,
    ACTIONS(654), 1,
      anon_sym_Instance,
    ACTIONS(652), 16,
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
  [5720] = 3,
    ACTIONS(656), 1,
      aux_sym_sequence_token1,
    STATE(167), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5744] = 2,
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
  [5766] = 1,
    ACTIONS(663), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5785] = 3,
    ACTIONS(665), 1,
      aux_sym_sequence_token1,
    STATE(170), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5808] = 1,
    ACTIONS(668), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5827] = 3,
    ACTIONS(672), 1,
      anon_sym_and,
    STATE(172), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(670), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5850] = 1,
    ACTIONS(675), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5869] = 3,
    ACTIONS(677), 1,
      aux_sym_sequence_token1,
    STATE(177), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5892] = 2,
    ACTIONS(157), 1,
      aux_sym_sequence_token1,
    ACTIONS(155), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5913] = 3,
    ACTIONS(681), 1,
      anon_sym_and,
    STATE(193), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(679), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5936] = 3,
    ACTIONS(683), 1,
      aux_sym_sequence_token1,
    STATE(177), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5959] = 1,
    ACTIONS(686), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5978] = 1,
    ACTIONS(688), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5997] = 3,
    ACTIONS(690), 1,
      aux_sym_sequence_token1,
    STATE(181), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6020] = 3,
    ACTIONS(692), 1,
      aux_sym_sequence_token1,
    STATE(181), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6043] = 1,
    ACTIONS(695), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6062] = 1,
    ACTIONS(697), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6081] = 1,
    ACTIONS(699), 16,
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
  [6100] = 1,
    ACTIONS(701), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6119] = 1,
    ACTIONS(703), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6138] = 1,
    ACTIONS(705), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6157] = 1,
    ACTIONS(707), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6176] = 1,
    ACTIONS(709), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6195] = 4,
    ACTIONS(711), 1,
      aux_sym_cardinality_token1,
    ACTIONS(713), 1,
      anon_sym_STAR2,
    ACTIONS(371), 2,
      aux_sym_sequence_token1,
      sym_number,
    ACTIONS(369), 12,
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
  [6220] = 2,
    STATE(172), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(715), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6241] = 4,
    ACTIONS(717), 1,
      aux_sym_cardinality_token1,
    ACTIONS(719), 1,
      anon_sym_STAR2,
    ACTIONS(400), 2,
      aux_sym_sequence_token1,
      sym_number,
    ACTIONS(398), 12,
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
  [6266] = 3,
    ACTIONS(681), 1,
      anon_sym_and,
    STATE(172), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(715), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6289] = 3,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    STATE(268), 1,
      sym_string,
    ACTIONS(721), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6312] = 3,
    ACTIONS(723), 1,
      aux_sym_sequence_token1,
    STATE(197), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6335] = 2,
    ACTIONS(161), 1,
      aux_sym_sequence_token1,
    ACTIONS(159), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6356] = 3,
    ACTIONS(725), 1,
      aux_sym_sequence_token1,
    STATE(197), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6379] = 4,
    ACTIONS(730), 1,
      anon_sym_from,
    ACTIONS(732), 1,
      anon_sym_and,
    STATE(317), 1,
      sym_vs_component_from,
    ACTIONS(728), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [6404] = 1,
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
  [6423] = 2,
    STATE(191), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(679), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6444] = 3,
    ACTIONS(736), 1,
      aux_sym_sequence_token1,
    STATE(203), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6467] = 3,
    ACTIONS(738), 1,
      aux_sym_sequence_token1,
    STATE(170), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6490] = 3,
    ACTIONS(740), 1,
      aux_sym_sequence_token1,
    STATE(203), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6513] = 1,
    ACTIONS(743), 16,
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
  [6532] = 3,
    ACTIONS(745), 1,
      aux_sym_sequence_token1,
    STATE(206), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6555] = 3,
    ACTIONS(747), 1,
      aux_sym_sequence_token1,
    STATE(206), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6578] = 3,
    ACTIONS(750), 1,
      aux_sym_sequence_token1,
    STATE(207), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [6600] = 2,
    ACTIONS(161), 1,
      aux_sym_sequence_token1,
    ACTIONS(159), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6620] = 3,
    ACTIONS(753), 1,
      aux_sym_sequence_token1,
    STATE(209), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6642] = 3,
    ACTIONS(758), 1,
      anon_sym_and,
    STATE(225), 1,
      aux_sym_vs_filter_list_repeat1,
    ACTIONS(756), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [6664] = 3,
    ACTIONS(762), 1,
      anon_sym_and,
    STATE(229), 1,
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
  [6686] = 2,
    ACTIONS(157), 1,
      aux_sym_sequence_token1,
    ACTIONS(155), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6706] = 3,
    ACTIONS(55), 1,
      anon_sym_EQ,
    ACTIONS(57), 1,
      anon_sym_insert,
    ACTIONS(53), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [6728] = 3,
    ACTIONS(766), 1,
      anon_sym_LPAREN,
    STATE(279), 1,
      sym_strength,
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
  [6750] = 1,
    ACTIONS(768), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6768] = 3,
    ACTIONS(772), 1,
      anon_sym_or,
    STATE(224), 1,
      aux_sym_only_rule_repeat1,
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
  [6790] = 3,
    ACTIONS(774), 1,
      aux_sym_sequence_token1,
    STATE(209), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6812] = 3,
    ACTIONS(762), 1,
      anon_sym_and,
    STATE(229), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(776), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [6834] = 2,
    ACTIONS(389), 1,
      anon_sym_COLON,
    ACTIONS(721), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6854] = 3,
    ACTIONS(780), 1,
      anon_sym_and,
    STATE(221), 1,
      aux_sym_contains_rule_repeat1,
    ACTIONS(778), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [6876] = 3,
    ACTIONS(784), 1,
      anon_sym_and,
    STATE(221), 1,
      aux_sym_contains_rule_repeat1,
    ACTIONS(782), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [6898] = 1,
    ACTIONS(787), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6916] = 2,
    STATE(241), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(679), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6936] = 3,
    ACTIONS(789), 1,
      anon_sym_or,
    STATE(224), 1,
      aux_sym_only_rule_repeat1,
    ACTIONS(787), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [6958] = 3,
    ACTIONS(758), 1,
      anon_sym_and,
    STATE(226), 1,
      aux_sym_vs_filter_list_repeat1,
    ACTIONS(792), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [6980] = 3,
    ACTIONS(796), 1,
      anon_sym_and,
    STATE(226), 1,
      aux_sym_vs_filter_list_repeat1,
    ACTIONS(794), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7002] = 2,
    ACTIONS(801), 1,
      anon_sym_T,
    ACTIONS(799), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7022] = 1,
    ACTIONS(803), 15,
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
  [7040] = 3,
    ACTIONS(805), 1,
      anon_sym_and,
    STATE(229), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(670), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7062] = 3,
    ACTIONS(780), 1,
      anon_sym_and,
    STATE(220), 1,
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
  [7084] = 1,
    ACTIONS(670), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7102] = 3,
    ACTIONS(762), 1,
      anon_sym_and,
    STATE(218), 1,
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
  [7124] = 1,
    ACTIONS(810), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7142] = 1,
    ACTIONS(812), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7160] = 3,
    ACTIONS(772), 1,
      anon_sym_or,
    STATE(216), 1,
      aux_sym_only_rule_repeat1,
    ACTIONS(814), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7182] = 3,
    ACTIONS(816), 1,
      aux_sym_sequence_token1,
    STATE(207), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7204] = 4,
    ACTIONS(818), 2,
      aux_sym_sequence_token1,
      sym_number,
    STATE(237), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(436), 5,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_Reference,
      anon_sym_Canonical,
    ACTIONS(820), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [7228] = 3,
    ACTIONS(57), 1,
      anon_sym_insert,
    ACTIONS(69), 1,
      anon_sym_DASH_GT,
    ACTIONS(53), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7250] = 3,
    ACTIONS(762), 1,
      anon_sym_and,
    STATE(211), 1,
      aux_sym_obeys_rule_repeat1,
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
  [7272] = 3,
    ACTIONS(129), 2,
      anon_sym_or,
      anon_sym_DQUOTE,
    ACTIONS(825), 2,
      aux_sym_sequence_token1,
      sym_number,
    ACTIONS(486), 11,
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
  [7294] = 2,
    STATE(229), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(715), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7314] = 2,
    ACTIONS(829), 1,
      anon_sym_and,
    ACTIONS(827), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7334] = 2,
    ACTIONS(831), 1,
      anon_sym_and,
    ACTIONS(827), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7354] = 8,
    ACTIONS(835), 1,
      aux_sym_sequence_token1,
    ACTIONS(837), 1,
      sym_number,
    STATE(210), 1,
      sym_vs_filter_definition,
    STATE(289), 1,
      sym_vs_filter_list,
    STATE(361), 1,
      sym_name,
    STATE(446), 1,
      aux_sym_sequence_repeat1,
    STATE(480), 1,
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
  [7386] = 3,
    ACTIONS(762), 1,
      anon_sym_and,
    STATE(246), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(679), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7408] = 3,
    ACTIONS(762), 1,
      anon_sym_and,
    STATE(229), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(715), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7430] = 2,
    ACTIONS(839), 1,
      anon_sym_POUND,
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
  [7450] = 3,
    ACTIONS(841), 1,
      aux_sym_sequence_token1,
    STATE(258), 1,
      aux_sym_sequence_repeat1,
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
  [7471] = 2,
    ACTIONS(843), 1,
      anon_sym_POUND,
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
  [7490] = 2,
    ACTIONS(400), 2,
      aux_sym_sequence_token1,
      sym_number,
    ACTIONS(398), 12,
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
  [7509] = 7,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(845), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(230), 1,
      sym_item,
    STATE(359), 1,
      aux_sym_sequence_repeat1,
    STATE(395), 1,
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
  [7538] = 2,
    ACTIONS(847), 1,
      anon_sym_and,
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
  [7557] = 1,
    ACTIONS(849), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7574] = 1,
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
  [7591] = 1,
    ACTIONS(794), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7608] = 2,
    ACTIONS(853), 2,
      aux_sym_sequence_token1,
      sym_number,
    ACTIONS(499), 12,
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
  [7627] = 2,
    ACTIONS(855), 1,
      anon_sym_and,
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
  [7646] = 3,
    ACTIONS(857), 1,
      aux_sym_sequence_token1,
    STATE(258), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [7667] = 2,
    ACTIONS(862), 1,
      anon_sym_LPAREN,
    ACTIONS(860), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7686] = 2,
    ACTIONS(866), 1,
      anon_sym_where,
    ACTIONS(864), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7705] = 7,
    ACTIONS(835), 1,
      aux_sym_sequence_token1,
    ACTIONS(837), 1,
      sym_number,
    STATE(255), 1,
      sym_vs_filter_definition,
    STATE(361), 1,
      sym_name,
    STATE(446), 1,
      aux_sym_sequence_repeat1,
    STATE(480), 1,
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
  [7734] = 1,
    ACTIONS(868), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7751] = 1,
    ACTIONS(782), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7768] = 1,
    ACTIONS(870), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7785] = 1,
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
      anon_sym_LPAREN,
  [7802] = 1,
    ACTIONS(872), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7819] = 7,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(845), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(263), 1,
      sym_item,
    STATE(359), 1,
      aux_sym_sequence_repeat1,
    STATE(395), 1,
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
  [7848] = 1,
    ACTIONS(874), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7865] = 1,
    ACTIONS(721), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7882] = 1,
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
      anon_sym_LPAREN,
  [7899] = 6,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(878), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(180), 1,
      aux_sym_sequence_repeat1,
    STATE(232), 1,
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
  [7925] = 1,
    ACTIONS(880), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7941] = 6,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(882), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(98), 1,
      aux_sym_sequence_repeat1,
    STATE(107), 1,
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
  [7967] = 6,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(878), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(180), 1,
      aux_sym_sequence_repeat1,
    STATE(223), 1,
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
  [7993] = 6,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(878), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(180), 1,
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
  [8019] = 1,
    ACTIONS(884), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8035] = 6,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(886), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(151), 1,
      aux_sym_sequence_repeat1,
    STATE(231), 1,
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
  [8061] = 6,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(888), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(107), 1,
      sym_name,
    STATE(115), 1,
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
  [8087] = 1,
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
  [8103] = 6,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(892), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(377), 1,
      aux_sym_sequence_repeat1,
    STATE(428), 1,
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
  [8129] = 6,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(894), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(336), 1,
      sym_name,
    STATE(346), 1,
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
  [8155] = 1,
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
  [8171] = 6,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(898), 1,
      aux_sym_sequence_token1,
    STATE(6), 1,
      sym_name,
    STATE(19), 1,
      sym_sequence,
    STATE(106), 1,
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
  [8197] = 6,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(900), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(337), 1,
      sym_name,
    STATE(348), 1,
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
  [8223] = 1,
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
  [8239] = 1,
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
  [8255] = 2,
    ACTIONS(825), 2,
      aux_sym_sequence_token1,
      sym_number,
    ACTIONS(486), 11,
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
  [8273] = 6,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(906), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(32), 1,
      sym_name,
    STATE(101), 1,
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
  [8299] = 1,
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
  [8315] = 1,
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
  [8331] = 1,
    ACTIONS(912), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8347] = 1,
    ACTIONS(549), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8363] = 6,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(878), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(180), 1,
      aux_sym_sequence_repeat1,
    STATE(231), 1,
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
  [8389] = 6,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(888), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(41), 1,
      sym_name,
    STATE(115), 1,
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
  [8415] = 6,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(888), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(42), 1,
      sym_name,
    STATE(115), 1,
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
  [8441] = 6,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(882), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(25), 1,
      sym_name,
    STATE(98), 1,
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
  [8467] = 6,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(898), 1,
      aux_sym_sequence_token1,
    STATE(5), 1,
      sym_name,
    STATE(19), 1,
      sym_sequence,
    STATE(106), 1,
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
  [8493] = 6,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(898), 1,
      aux_sym_sequence_token1,
    STATE(2), 1,
      sym_name,
    STATE(19), 1,
      sym_sequence,
    STATE(106), 1,
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
  [8519] = 1,
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
  [8535] = 6,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(906), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(101), 1,
      aux_sym_sequence_repeat1,
    STATE(166), 1,
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
  [8561] = 1,
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
  [8577] = 1,
    ACTIONS(919), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8593] = 6,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(878), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(180), 1,
      aux_sym_sequence_repeat1,
    STATE(239), 1,
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
  [8619] = 6,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(898), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(106), 1,
      aux_sym_sequence_repeat1,
    STATE(160), 1,
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
  [8645] = 6,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(898), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(106), 1,
      aux_sym_sequence_repeat1,
    STATE(107), 1,
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
  [8671] = 2,
    ACTIONS(923), 1,
      anon_sym_POUND,
    ACTIONS(921), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [8689] = 6,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(925), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(201), 1,
      aux_sym_sequence_repeat1,
    STATE(214), 1,
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
  [8715] = 1,
    ACTIONS(633), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8731] = 6,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(886), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(151), 1,
      aux_sym_sequence_repeat1,
    STATE(200), 1,
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
  [8757] = 1,
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
  [8773] = 1,
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
  [8789] = 1,
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
  [8805] = 1,
    ACTIONS(641), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8821] = 6,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(886), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(151), 1,
      aux_sym_sequence_repeat1,
    STATE(176), 1,
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
  [8847] = 6,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(933), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(215), 1,
      sym_name,
    STATE(236), 1,
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
  [8873] = 1,
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
  [8889] = 1,
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
  [8905] = 6,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(939), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(174), 1,
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
  [8931] = 1,
    ACTIONS(941), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8947] = 1,
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
  [8963] = 1,
    ACTIONS(592), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8979] = 6,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(886), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(151), 1,
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
  [9005] = 1,
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
  [9021] = 1,
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
  [9037] = 1,
    ACTIONS(488), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [9053] = 6,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(878), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(180), 1,
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
  [9079] = 1,
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
  [9095] = 1,
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
  [9111] = 1,
    ACTIONS(953), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [9127] = 1,
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
  [9143] = 1,
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
  [9159] = 1,
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
  [9175] = 1,
    ACTIONS(921), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [9190] = 4,
    ACTIONS(63), 1,
      anon_sym_and,
    STATE(340), 1,
      aux_sym_flag_rule_repeat1,
    STATE(79), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(73), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [9209] = 9,
    ACTIONS(266), 1,
      aux_sym_sequence_token1,
    ACTIONS(594), 1,
      anon_sym_codes,
    ACTIONS(598), 1,
      anon_sym_POUND,
    STATE(122), 1,
      sym_code,
    STATE(198), 1,
      sym_code_string,
    STATE(341), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(403), 1,
      aux_sym_sequence_repeat1,
    STATE(532), 1,
      sym_sequence,
    STATE(324), 2,
      sym_vs_concept_component,
      sym_vs_filter_component,
  [9238] = 6,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(31), 1,
      anon_sym_Id,
    ACTIONS(33), 1,
      anon_sym_Parent,
    ACTIONS(35), 1,
      anon_sym_Title,
    STATE(7), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(157), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
  [9261] = 6,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(363), 1,
      anon_sym_Expression,
    ACTIONS(365), 1,
      anon_sym_Severity,
    ACTIONS(367), 1,
      anon_sym_XPath,
    STATE(60), 2,
      sym_invariant_metadata,
      aux_sym_invariant_repeat1,
    STATE(189), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
  [9284] = 3,
    ACTIONS(961), 1,
      aux_sym_sequence_token1,
    STATE(339), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 7,
      anon_sym_and,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [9300] = 3,
    ACTIONS(963), 1,
      aux_sym_sequence_token1,
    STATE(339), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 7,
      anon_sym_and,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [9316] = 3,
    ACTIONS(966), 1,
      anon_sym_and,
    STATE(340), 1,
      aux_sym_flag_rule_repeat1,
    ACTIONS(969), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [9331] = 7,
    ACTIONS(266), 1,
      aux_sym_sequence_token1,
    ACTIONS(971), 1,
      anon_sym_POUND,
    STATE(122), 1,
      sym_code,
    STATE(345), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(403), 1,
      aux_sym_sequence_repeat1,
    STATE(457), 1,
      sym_code_string,
    STATE(533), 1,
      sym_sequence,
  [9353] = 7,
    ACTIONS(266), 1,
      aux_sym_sequence_token1,
    ACTIONS(973), 1,
      anon_sym_insert,
    ACTIONS(975), 1,
      anon_sym_POUND,
    STATE(54), 1,
      aux_sym_code_insert_rule_repeat1,
    STATE(99), 1,
      sym_code,
    STATE(403), 1,
      aux_sym_sequence_repeat1,
    STATE(543), 1,
      sym_sequence,
  [9375] = 1,
    ACTIONS(969), 7,
      anon_sym_and,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [9385] = 7,
    ACTIONS(185), 1,
      anon_sym_DASH_GT,
    ACTIONS(551), 1,
      anon_sym_insert,
    ACTIONS(596), 1,
      anon_sym_system,
    ACTIONS(977), 1,
      aux_sym_sequence_token1,
    STATE(53), 1,
      sym_sequence,
    STATE(165), 1,
      aux_sym_sequence_repeat1,
    STATE(238), 1,
      sym_path,
  [9407] = 7,
    ACTIONS(979), 1,
      anon_sym_POUND,
    ACTIONS(982), 1,
      aux_sym_sequence_token1,
    STATE(122), 1,
      sym_code,
    STATE(345), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(403), 1,
      aux_sym_sequence_repeat1,
    STATE(503), 1,
      sym_code_string,
    STATE(536), 1,
      sym_sequence,
  [9429] = 3,
    ACTIONS(985), 1,
      aux_sym_sequence_token1,
    STATE(349), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 4,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
  [9442] = 3,
    ACTIONS(987), 1,
      aux_sym_sequence_token1,
    STATE(347), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 4,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [9455] = 3,
    ACTIONS(990), 1,
      aux_sym_sequence_token1,
    STATE(347), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 4,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [9468] = 3,
    ACTIONS(992), 1,
      aux_sym_sequence_token1,
    STATE(349), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 4,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
  [9481] = 6,
    ACTIONS(551), 1,
      anon_sym_insert,
    ACTIONS(596), 1,
      anon_sym_system,
    ACTIONS(995), 1,
      aux_sym_sequence_token1,
    STATE(53), 1,
      sym_sequence,
    STATE(161), 1,
      aux_sym_sequence_repeat1,
    STATE(213), 1,
      sym_path,
  [9500] = 4,
    ACTIONS(127), 1,
      aux_sym_cardinality_token1,
    ACTIONS(997), 1,
      aux_sym_sequence_token1,
    STATE(351), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 2,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [9514] = 3,
    ACTIONS(1000), 1,
      aux_sym_sequence_token1,
    STATE(358), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 3,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_CARET,
  [9526] = 5,
    ACTIONS(1002), 1,
      anon_sym_POUND,
    ACTIONS(1004), 1,
      aux_sym_sequence_token1,
    STATE(217), 1,
      aux_sym_sequence_repeat1,
    STATE(306), 1,
      sym_sequence,
    STATE(333), 1,
      sym_code,
  [9542] = 5,
    ACTIONS(1006), 1,
      anon_sym_POUND,
    ACTIONS(1008), 1,
      aux_sym_sequence_token1,
    STATE(384), 1,
      aux_sym_sequence_repeat1,
    STATE(451), 1,
      sym_sequence,
    STATE(487), 1,
      sym_code,
  [9558] = 3,
    ACTIONS(1010), 1,
      aux_sym_sequence_token1,
    STATE(357), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 3,
      anon_sym_from,
      anon_sym_and,
      anon_sym_DQUOTE,
  [9570] = 5,
    ACTIONS(266), 1,
      aux_sym_sequence_token1,
    ACTIONS(1012), 1,
      anon_sym_POUND,
    STATE(186), 1,
      sym_code,
    STATE(403), 1,
      aux_sym_sequence_repeat1,
    STATE(523), 1,
      sym_sequence,
  [9586] = 3,
    ACTIONS(1014), 1,
      aux_sym_sequence_token1,
    STATE(357), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 3,
      anon_sym_from,
      anon_sym_and,
      anon_sym_DQUOTE,
  [9598] = 3,
    ACTIONS(1017), 1,
      aux_sym_sequence_token1,
    STATE(358), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 3,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_CARET,
  [9610] = 4,
    ACTIONS(120), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1020), 1,
      aux_sym_sequence_token1,
    STATE(351), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 2,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [9624] = 5,
    ACTIONS(266), 1,
      aux_sym_sequence_token1,
    ACTIONS(1022), 1,
      anon_sym_POUND,
    STATE(168), 1,
      sym_code,
    STATE(403), 1,
      aux_sym_sequence_repeat1,
    STATE(531), 1,
      sym_sequence,
  [9640] = 5,
    ACTIONS(1024), 1,
      anon_sym_EQ,
    ACTIONS(1026), 1,
      aux_sym_sequence_token1,
    STATE(50), 1,
      sym_vs_filter_operator,
    STATE(89), 1,
      aux_sym_sequence_repeat1,
    STATE(103), 1,
      sym_sequence,
  [9656] = 5,
    ACTIONS(266), 1,
      aux_sym_sequence_token1,
    ACTIONS(1028), 1,
      anon_sym_POUND,
    STATE(142), 1,
      sym_code,
    STATE(403), 1,
      aux_sym_sequence_repeat1,
    STATE(535), 1,
      sym_sequence,
  [9672] = 3,
    ACTIONS(1030), 1,
      aux_sym_sequence_token1,
    STATE(363), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE,
  [9684] = 5,
    ACTIONS(596), 1,
      anon_sym_system,
    ACTIONS(1033), 1,
      aux_sym_sequence_token1,
    STATE(53), 1,
      sym_sequence,
    STATE(338), 1,
      aux_sym_sequence_repeat1,
    STATE(343), 1,
      sym_path,
  [9700] = 3,
    ACTIONS(1035), 1,
      aux_sym_sequence_token1,
    STATE(363), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE,
  [9712] = 4,
    ACTIONS(1037), 1,
      anon_sym_system,
    ACTIONS(1039), 1,
      anon_sym_valueset,
    STATE(242), 1,
      sym_vs_from_system,
    STATE(243), 1,
      sym_vs_from_valueset,
  [9725] = 3,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(56), 2,
      sym_string,
      sym_multiline_string,
  [9736] = 3,
    ACTIONS(1041), 1,
      anon_sym_DQUOTE,
    STATE(391), 1,
      aux_sym_string_repeat1,
    ACTIONS(1043), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [9747] = 1,
    ACTIONS(1045), 4,
      anon_sym_example,
      anon_sym_preferred,
      anon_sym_extensible,
      anon_sym_required,
  [9754] = 3,
    ACTIONS(1047), 1,
      anon_sym_from,
    STATE(260), 1,
      sym_vs_component_from,
    ACTIONS(129), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
  [9765] = 3,
    ACTIONS(1049), 1,
      anon_sym_DQUOTE,
    STATE(373), 1,
      aux_sym_string_repeat1,
    ACTIONS(1051), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [9776] = 4,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(1053), 1,
      anon_sym_or,
    STATE(154), 1,
      sym_string,
    STATE(389), 1,
      aux_sym_only_rule_repeat1,
  [9789] = 3,
    ACTIONS(1055), 1,
      anon_sym_DQUOTE,
    STATE(373), 1,
      aux_sym_string_repeat1,
    ACTIONS(1057), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [9800] = 4,
    ACTIONS(1060), 1,
      anon_sym_system,
    ACTIONS(1062), 1,
      anon_sym_valueset,
    STATE(252), 1,
      sym_vs_from_valueset,
    STATE(257), 1,
      sym_vs_from_system,
  [9813] = 3,
    ACTIONS(1055), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(375), 1,
      aux_sym_string_repeat1,
    ACTIONS(1064), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [9824] = 3,
    ACTIONS(1067), 1,
      anon_sym_DQUOTE,
    STATE(371), 1,
      aux_sym_string_repeat1,
    ACTIONS(1069), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [9835] = 4,
    ACTIONS(116), 1,
      anon_sym_DOT_DOT,
    ACTIONS(120), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1071), 1,
      aux_sym_sequence_token1,
    STATE(378), 1,
      aux_sym_sequence_repeat1,
  [9848] = 4,
    ACTIONS(122), 1,
      anon_sym_DOT_DOT,
    ACTIONS(127), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1073), 1,
      aux_sym_sequence_token1,
    STATE(378), 1,
      aux_sym_sequence_repeat1,
  [9861] = 3,
    ACTIONS(1076), 1,
      anon_sym_DQUOTE,
    STATE(380), 1,
      aux_sym_string_repeat1,
    ACTIONS(1078), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [9872] = 3,
    ACTIONS(1080), 1,
      anon_sym_DQUOTE,
    STATE(373), 1,
      aux_sym_string_repeat1,
    ACTIONS(1051), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [9883] = 3,
    ACTIONS(1082), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(388), 1,
      aux_sym_string_repeat1,
    ACTIONS(1084), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [9894] = 3,
    ACTIONS(1086), 1,
      aux_sym_sequence_token1,
    STATE(383), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [9905] = 3,
    ACTIONS(1088), 1,
      aux_sym_sequence_token1,
    STATE(383), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [9916] = 3,
    ACTIONS(1091), 1,
      aux_sym_sequence_token1,
    STATE(385), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 2,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [9927] = 3,
    ACTIONS(1093), 1,
      aux_sym_sequence_token1,
    STATE(385), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 2,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [9938] = 3,
    ACTIONS(1096), 1,
      aux_sym_sequence_token1,
    STATE(387), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 2,
      anon_sym_and,
      anon_sym_DQUOTE,
  [9949] = 3,
    ACTIONS(1098), 1,
      aux_sym_sequence_token1,
    STATE(387), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 2,
      anon_sym_and,
      anon_sym_DQUOTE,
  [9960] = 3,
    ACTIONS(1101), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(375), 1,
      aux_sym_string_repeat1,
    ACTIONS(1103), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [9971] = 4,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(1053), 1,
      anon_sym_or,
    STATE(143), 1,
      sym_string,
    STATE(471), 1,
      aux_sym_only_rule_repeat1,
  [9984] = 4,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(1053), 1,
      anon_sym_or,
    STATE(143), 1,
      sym_string,
    STATE(396), 1,
      aux_sym_only_rule_repeat1,
  [9997] = 3,
    ACTIONS(1105), 1,
      anon_sym_DQUOTE,
    STATE(373), 1,
      aux_sym_string_repeat1,
    ACTIONS(1051), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [10008] = 3,
    ACTIONS(1107), 1,
      aux_sym_sequence_token1,
    STATE(392), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 2,
      anon_sym_or,
      anon_sym_DQUOTE,
  [10019] = 3,
    ACTIONS(1110), 1,
      aux_sym_sequence_token1,
    STATE(392), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(116), 2,
      anon_sym_or,
      anon_sym_DQUOTE,
  [10030] = 4,
    ACTIONS(1112), 1,
      anon_sym_RPAREN,
    ACTIONS(1114), 1,
      anon_sym_or,
    ACTIONS(1116), 1,
      anon_sym_PIPE,
    STATE(407), 1,
      aux_sym_canonical_repeat1,
  [10043] = 4,
    ACTIONS(1118), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1120), 1,
      anon_sym_DOT_DOT,
    ACTIONS(1122), 1,
      anon_sym_named,
    STATE(68), 1,
      sym_cardinality,
  [10056] = 4,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(1053), 1,
      anon_sym_or,
    STATE(162), 1,
      sym_string,
    STATE(471), 1,
      aux_sym_only_rule_repeat1,
  [10069] = 3,
    ACTIONS(122), 1,
      anon_sym_STAR,
    ACTIONS(1124), 1,
      aux_sym_sequence_token1,
    STATE(397), 1,
      aux_sym_sequence_repeat1,
  [10079] = 3,
    ACTIONS(1127), 1,
      anon_sym_SQUOTE,
    ACTIONS(1129), 1,
      aux_sym_unit_token1,
    STATE(415), 1,
      aux_sym_unit_repeat1,
  [10089] = 3,
    ACTIONS(1131), 1,
      aux_sym_sequence_token1,
    STATE(236), 1,
      aux_sym_sequence_repeat1,
    STATE(276), 1,
      sym_sequence,
  [10099] = 3,
    ACTIONS(1114), 1,
      anon_sym_or,
    ACTIONS(1133), 1,
      anon_sym_RPAREN,
    STATE(454), 1,
      aux_sym_canonical_repeat1,
  [10109] = 2,
    ACTIONS(1137), 1,
      anon_sym_PIPE,
    ACTIONS(1135), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [10117] = 3,
    ACTIONS(1139), 1,
      anon_sym_RPAREN,
    ACTIONS(1141), 1,
      anon_sym_or,
    STATE(402), 1,
      aux_sym_reference_repeat1,
  [10127] = 3,
    ACTIONS(116), 1,
      anon_sym_POUND,
    ACTIONS(1144), 1,
      aux_sym_sequence_token1,
    STATE(404), 1,
      aux_sym_sequence_repeat1,
  [10137] = 3,
    ACTIONS(122), 1,
      anon_sym_POUND,
    ACTIONS(1146), 1,
      aux_sym_sequence_token1,
    STATE(404), 1,
      aux_sym_sequence_repeat1,
  [10147] = 3,
    ACTIONS(1131), 1,
      aux_sym_sequence_token1,
    STATE(36), 1,
      sym_sequence,
    STATE(236), 1,
      aux_sym_sequence_repeat1,
  [10157] = 3,
    ACTIONS(1149), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_sequence,
    STATE(386), 1,
      aux_sym_sequence_repeat1,
  [10167] = 3,
    ACTIONS(1114), 1,
      anon_sym_or,
    ACTIONS(1151), 1,
      anon_sym_RPAREN,
    STATE(436), 1,
      aux_sym_canonical_repeat1,
  [10177] = 3,
    ACTIONS(1153), 1,
      aux_sym_sequence_token1,
    STATE(382), 1,
      aux_sym_sequence_repeat1,
    STATE(400), 1,
      sym_sequence,
  [10187] = 3,
    ACTIONS(1155), 1,
      aux_sym_sequence_token1,
    STATE(365), 1,
      aux_sym_sequence_repeat1,
    STATE(401), 1,
      sym_sequence,
  [10197] = 3,
    ACTIONS(1149), 1,
      aux_sym_sequence_token1,
    STATE(36), 1,
      sym_sequence,
    STATE(386), 1,
      aux_sym_sequence_repeat1,
  [10207] = 3,
    ACTIONS(1157), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_sequence,
    STATE(153), 1,
      aux_sym_sequence_repeat1,
  [10217] = 3,
    ACTIONS(1157), 1,
      aux_sym_sequence_token1,
    STATE(36), 1,
      sym_sequence,
    STATE(153), 1,
      aux_sym_sequence_repeat1,
  [10227] = 3,
    ACTIONS(1159), 1,
      anon_sym_RPAREN,
    ACTIONS(1161), 1,
      anon_sym_or,
    STATE(402), 1,
      aux_sym_reference_repeat1,
  [10237] = 3,
    ACTIONS(1153), 1,
      aux_sym_sequence_token1,
    STATE(382), 1,
      aux_sym_sequence_repeat1,
    STATE(485), 1,
      sym_sequence,
  [10247] = 3,
    ACTIONS(1163), 1,
      anon_sym_SQUOTE,
    ACTIONS(1165), 1,
      aux_sym_unit_token1,
    STATE(415), 1,
      aux_sym_unit_repeat1,
  [10257] = 3,
    ACTIONS(1168), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_sequence,
    STATE(202), 1,
      aux_sym_sequence_repeat1,
  [10267] = 3,
    ACTIONS(1168), 1,
      aux_sym_sequence_token1,
    STATE(36), 1,
      sym_sequence,
    STATE(202), 1,
      aux_sym_sequence_repeat1,
  [10277] = 3,
    ACTIONS(1170), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_sequence,
    STATE(98), 1,
      aux_sym_sequence_repeat1,
  [10287] = 3,
    ACTIONS(1170), 1,
      aux_sym_sequence_token1,
    STATE(36), 1,
      sym_sequence,
    STATE(98), 1,
      aux_sym_sequence_repeat1,
  [10297] = 3,
    ACTIONS(1172), 1,
      aux_sym_sequence_token1,
    STATE(100), 1,
      aux_sym_sequence_repeat1,
    STATE(113), 1,
      sym_sequence,
  [10307] = 3,
    ACTIONS(1172), 1,
      aux_sym_sequence_token1,
    STATE(100), 1,
      aux_sym_sequence_repeat1,
    STATE(114), 1,
      sym_sequence,
  [10317] = 3,
    ACTIONS(1174), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_sequence,
    STATE(355), 1,
      aux_sym_sequence_repeat1,
  [10327] = 3,
    ACTIONS(1174), 1,
      aux_sym_sequence_token1,
    STATE(36), 1,
      sym_sequence,
    STATE(355), 1,
      aux_sym_sequence_repeat1,
  [10337] = 3,
    ACTIONS(1176), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_sequence,
    STATE(101), 1,
      aux_sym_sequence_repeat1,
  [10347] = 3,
    ACTIONS(1176), 1,
      aux_sym_sequence_token1,
    STATE(36), 1,
      sym_sequence,
    STATE(101), 1,
      aux_sym_sequence_repeat1,
  [10357] = 3,
    ACTIONS(1178), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_sequence,
    STATE(129), 1,
      aux_sym_sequence_repeat1,
  [10367] = 3,
    ACTIONS(1131), 1,
      aux_sym_sequence_token1,
    STATE(236), 1,
      aux_sym_sequence_repeat1,
    STATE(310), 1,
      sym_sequence,
  [10377] = 3,
    ACTIONS(1118), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1120), 1,
      anon_sym_DOT_DOT,
    STATE(70), 1,
      sym_cardinality,
  [10387] = 3,
    ACTIONS(1178), 1,
      aux_sym_sequence_token1,
    STATE(36), 1,
      sym_sequence,
    STATE(129), 1,
      aux_sym_sequence_repeat1,
  [10397] = 3,
    ACTIONS(1180), 1,
      anon_sym_SQUOTE,
    ACTIONS(1182), 1,
      aux_sym_unit_token1,
    STATE(398), 1,
      aux_sym_unit_repeat1,
  [10407] = 3,
    ACTIONS(122), 1,
      anon_sym_EQ,
    ACTIONS(1184), 1,
      aux_sym_sequence_token1,
    STATE(431), 1,
      aux_sym_sequence_repeat1,
  [10417] = 3,
    ACTIONS(1187), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_sequence,
    STATE(248), 1,
      aux_sym_sequence_repeat1,
  [10427] = 3,
    ACTIONS(1189), 1,
      aux_sym_sequence_token1,
    STATE(63), 1,
      aux_sym_sequence_repeat1,
    STATE(78), 1,
      sym_sequence,
  [10437] = 3,
    ACTIONS(1131), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_sequence,
    STATE(236), 1,
      aux_sym_sequence_repeat1,
  [10447] = 3,
    ACTIONS(1161), 1,
      anon_sym_or,
    ACTIONS(1191), 1,
      anon_sym_RPAREN,
    STATE(413), 1,
      aux_sym_reference_repeat1,
  [10457] = 3,
    ACTIONS(1135), 1,
      anon_sym_RPAREN,
    ACTIONS(1193), 1,
      anon_sym_or,
    STATE(436), 1,
      aux_sym_canonical_repeat1,
  [10467] = 3,
    ACTIONS(116), 1,
      anon_sym_EQ,
    ACTIONS(1196), 1,
      aux_sym_sequence_token1,
    STATE(431), 1,
      aux_sym_sequence_repeat1,
  [10477] = 3,
    ACTIONS(1198), 1,
      aux_sym_sequence_token1,
    STATE(36), 1,
      sym_sequence,
    STATE(148), 1,
      aux_sym_sequence_repeat1,
  [10487] = 3,
    ACTIONS(1200), 1,
      aux_sym_sequence_token1,
    STATE(97), 1,
      aux_sym_sequence_repeat1,
    STATE(109), 1,
      sym_sequence,
  [10497] = 3,
    ACTIONS(1189), 1,
      aux_sym_sequence_token1,
    STATE(63), 1,
      aux_sym_sequence_repeat1,
    STATE(86), 1,
      sym_sequence,
  [10507] = 3,
    ACTIONS(1202), 1,
      aux_sym_sequence_token1,
    STATE(83), 1,
      sym_sequence,
    STATE(442), 1,
      aux_sym_sequence_repeat1,
  [10517] = 3,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(1204), 1,
      aux_sym_sequence_token1,
    STATE(397), 1,
      aux_sym_sequence_repeat1,
  [10527] = 3,
    ACTIONS(1131), 1,
      aux_sym_sequence_token1,
    STATE(236), 1,
      aux_sym_sequence_repeat1,
    STATE(299), 1,
      sym_sequence,
  [10537] = 3,
    ACTIONS(1153), 1,
      aux_sym_sequence_token1,
    STATE(382), 1,
      aux_sym_sequence_repeat1,
    STATE(481), 1,
      sym_sequence,
  [10547] = 3,
    ACTIONS(1206), 1,
      aux_sym_sequence_token1,
    STATE(437), 1,
      aux_sym_sequence_repeat1,
    STATE(518), 1,
      sym_sequence,
  [10557] = 3,
    ACTIONS(116), 1,
      anon_sym_EQ,
    ACTIONS(1208), 1,
      aux_sym_sequence_token1,
    STATE(431), 1,
      aux_sym_sequence_repeat1,
  [10567] = 3,
    ACTIONS(1198), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_sequence,
    STATE(148), 1,
      aux_sym_sequence_repeat1,
  [10577] = 3,
    ACTIONS(1118), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1120), 1,
      anon_sym_DOT_DOT,
    STATE(75), 1,
      sym_cardinality,
  [10587] = 3,
    ACTIONS(1211), 1,
      aux_sym_sequence_token1,
    STATE(36), 1,
      sym_sequence,
    STATE(112), 1,
      aux_sym_sequence_repeat1,
  [10597] = 3,
    ACTIONS(1211), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_sequence,
    STATE(112), 1,
      aux_sym_sequence_repeat1,
  [10607] = 3,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(1213), 1,
      anon_sym_POUND,
    STATE(159), 1,
      sym_string,
  [10617] = 3,
    ACTIONS(1153), 1,
      aux_sym_sequence_token1,
    STATE(382), 1,
      aux_sym_sequence_repeat1,
    STATE(435), 1,
      sym_sequence,
  [10627] = 3,
    ACTIONS(1215), 1,
      aux_sym_sequence_token1,
    STATE(36), 1,
      sym_sequence,
    STATE(462), 1,
      aux_sym_sequence_repeat1,
  [10637] = 3,
    ACTIONS(1114), 1,
      anon_sym_or,
    ACTIONS(1217), 1,
      anon_sym_RPAREN,
    STATE(436), 1,
      aux_sym_canonical_repeat1,
  [10647] = 3,
    ACTIONS(1215), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_sequence,
    STATE(462), 1,
      aux_sym_sequence_repeat1,
  [10657] = 3,
    ACTIONS(1219), 1,
      aux_sym_sequence_token1,
    STATE(36), 1,
      sym_sequence,
    STATE(145), 1,
      aux_sym_sequence_repeat1,
  [10667] = 3,
    ACTIONS(730), 1,
      anon_sym_from,
    ACTIONS(732), 1,
      anon_sym_and,
    STATE(290), 1,
      sym_vs_component_from,
  [10677] = 3,
    ACTIONS(1219), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_sequence,
    STATE(145), 1,
      aux_sym_sequence_repeat1,
  [10687] = 2,
    ACTIONS(1221), 1,
      anon_sym_POUND,
    ACTIONS(138), 2,
      anon_sym_insert,
      anon_sym_CARET,
  [10695] = 3,
    ACTIONS(1206), 1,
      aux_sym_sequence_token1,
    STATE(437), 1,
      aux_sym_sequence_repeat1,
    STATE(495), 1,
      sym_sequence,
  [10705] = 3,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(1223), 1,
      aux_sym_sequence_token1,
    STATE(461), 1,
      aux_sym_sequence_repeat1,
  [10715] = 3,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(1226), 1,
      aux_sym_sequence_token1,
    STATE(461), 1,
      aux_sym_sequence_repeat1,
  [10725] = 3,
    ACTIONS(1228), 1,
      aux_sym_sequence_token1,
    STATE(36), 1,
      sym_sequence,
    STATE(135), 1,
      aux_sym_sequence_repeat1,
  [10735] = 3,
    ACTIONS(1131), 1,
      aux_sym_sequence_token1,
    STATE(236), 1,
      aux_sym_sequence_repeat1,
    STATE(312), 1,
      sym_sequence,
  [10745] = 3,
    ACTIONS(1228), 1,
      aux_sym_sequence_token1,
    STATE(37), 1,
      sym_sequence,
    STATE(135), 1,
      aux_sym_sequence_repeat1,
  [10755] = 3,
    ACTIONS(57), 1,
      anon_sym_insert,
    ACTIONS(71), 1,
      anon_sym_CARET,
    STATE(511), 1,
      sym_caret_path,
  [10765] = 3,
    ACTIONS(1187), 1,
      aux_sym_sequence_token1,
    STATE(36), 1,
      sym_sequence,
    STATE(248), 1,
      aux_sym_sequence_repeat1,
  [10775] = 3,
    ACTIONS(1131), 1,
      aux_sym_sequence_token1,
    STATE(236), 1,
      aux_sym_sequence_repeat1,
    STATE(301), 1,
      sym_sequence,
  [10785] = 3,
    ACTIONS(1230), 1,
      sym_number,
    STATE(264), 1,
      sym_ratio_part,
    STATE(265), 1,
      sym_quantity,
  [10795] = 3,
    ACTIONS(1232), 1,
      sym_number,
    STATE(264), 1,
      sym_ratio_part,
    STATE(265), 1,
      sym_quantity,
  [10805] = 3,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(1234), 1,
      anon_sym_or,
    STATE(471), 1,
      aux_sym_only_rule_repeat1,
  [10815] = 3,
    ACTIONS(1200), 1,
      aux_sym_sequence_token1,
    STATE(97), 1,
      aux_sym_sequence_repeat1,
    STATE(105), 1,
      sym_sequence,
  [10825] = 3,
    ACTIONS(1155), 1,
      aux_sym_sequence_token1,
    STATE(365), 1,
      aux_sym_sequence_repeat1,
    STATE(394), 1,
      sym_sequence,
  [10835] = 2,
    ACTIONS(1237), 1,
      anon_sym_system,
    STATE(262), 1,
      sym_vs_from_system,
  [10842] = 2,
    ACTIONS(1239), 1,
      anon_sym_valueset,
    STATE(262), 1,
      sym_vs_from_valueset,
  [10849] = 2,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    STATE(116), 1,
      sym_string,
  [10856] = 2,
    ACTIONS(1241), 1,
      anon_sym_system,
    STATE(262), 1,
      sym_vs_from_system,
  [10863] = 2,
    ACTIONS(1243), 1,
      anon_sym_valueset,
    STATE(262), 1,
      sym_vs_from_valueset,
  [10870] = 2,
    ACTIONS(1047), 1,
      anon_sym_from,
    STATE(260), 1,
      sym_vs_component_from,
  [10877] = 2,
    ACTIONS(129), 1,
      anon_sym_EQ,
    ACTIONS(131), 1,
      aux_sym_sequence_token1,
  [10884] = 1,
    ACTIONS(1245), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [10889] = 2,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    STATE(187), 1,
      sym_string,
  [10896] = 2,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    STATE(185), 1,
      sym_string,
  [10903] = 2,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    STATE(84), 1,
      sym_string,
  [10910] = 1,
    ACTIONS(1139), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [10915] = 2,
    ACTIONS(1247), 1,
      anon_sym_DQUOTE,
    STATE(93), 1,
      sym_string,
  [10922] = 2,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    STATE(159), 1,
      sym_string,
  [10929] = 2,
    ACTIONS(1247), 1,
      anon_sym_DQUOTE,
    STATE(94), 1,
      sym_string,
  [10936] = 2,
    ACTIONS(1249), 1,
      anon_sym_POUND,
    ACTIONS(1251), 1,
      aux_sym_sequence_token1,
  [10943] = 1,
    ACTIONS(1253), 1,
      anon_sym_COLON,
  [10947] = 1,
    ACTIONS(1255), 1,
      anon_sym_COLON,
  [10951] = 1,
    ACTIONS(1257), 1,
      anon_sym_COLON,
  [10955] = 1,
    ACTIONS(1259), 1,
      anon_sym_LPAREN,
  [10959] = 1,
    ACTIONS(1261), 1,
      sym_time,
  [10963] = 1,
    ACTIONS(1263), 1,
      anon_sym_EQ,
  [10967] = 1,
    ACTIONS(1265), 1,
      anon_sym_RPAREN,
  [10971] = 1,
    ACTIONS(1267), 1,
      anon_sym_COLON,
  [10975] = 1,
    ACTIONS(1269), 1,
      anon_sym_RPAREN,
  [10979] = 1,
    ACTIONS(1271), 1,
      anon_sym_EQ,
  [10983] = 1,
    ACTIONS(1273), 1,
      anon_sym_COLON,
  [10987] = 1,
    ACTIONS(1275), 1,
      anon_sym_COLON,
  [10991] = 1,
    ACTIONS(1277), 1,
      anon_sym_COLON,
  [10995] = 1,
    ACTIONS(732), 1,
      anon_sym_and,
  [10999] = 1,
    ACTIONS(1279), 1,
      anon_sym_COLON,
  [11003] = 1,
    ACTIONS(1281), 1,
      anon_sym_COLON,
  [11007] = 1,
    ACTIONS(1283), 1,
      anon_sym_COLON,
  [11011] = 1,
    ACTIONS(1285), 1,
      anon_sym_COLON,
  [11015] = 1,
    ACTIONS(1287), 1,
      anon_sym_COLON,
  [11019] = 1,
    ACTIONS(1289), 1,
      anon_sym_COLON,
  [11023] = 1,
    ACTIONS(1291), 1,
      anon_sym_COLON,
  [11027] = 1,
    ACTIONS(1293), 1,
      anon_sym_EQ,
  [11031] = 1,
    ACTIONS(1295), 1,
      anon_sym_exactly,
  [11035] = 1,
    ACTIONS(1297), 1,
      anon_sym_COLON,
  [11039] = 1,
    ACTIONS(1299), 1,
      anon_sym_DOT_DOT,
  [11043] = 1,
    ACTIONS(1301), 1,
      anon_sym_COLON,
  [11047] = 1,
    ACTIONS(1303), 1,
      anon_sym_EQ,
  [11051] = 1,
    ACTIONS(1305), 1,
      anon_sym_DOT_DOT,
  [11055] = 1,
    ACTIONS(1307), 1,
      anon_sym_EQ,
  [11059] = 1,
    ACTIONS(1309), 1,
      anon_sym_COLON,
  [11063] = 1,
    ACTIONS(1311), 1,
      anon_sym_COLON,
  [11067] = 1,
    ACTIONS(1313), 1,
      ts_builtin_sym_end,
  [11071] = 1,
    ACTIONS(1315), 1,
      anon_sym_COLON,
  [11075] = 1,
    ACTIONS(1317), 1,
      anon_sym_POUND,
  [11079] = 1,
    ACTIONS(1319), 1,
      anon_sym_COLON,
  [11083] = 1,
    ACTIONS(1321), 1,
      anon_sym_COLON,
  [11087] = 1,
    ACTIONS(1323), 1,
      anon_sym_COLON,
  [11091] = 1,
    ACTIONS(1325), 1,
      anon_sym_COLON,
  [11095] = 1,
    ACTIONS(1327), 1,
      anon_sym_LPAREN,
  [11099] = 1,
    ACTIONS(1329), 1,
      anon_sym_COLON,
  [11103] = 1,
    ACTIONS(1331), 1,
      anon_sym_COLON,
  [11107] = 1,
    ACTIONS(1333), 1,
      anon_sym_POUND,
  [11111] = 1,
    ACTIONS(1221), 1,
      anon_sym_POUND,
  [11115] = 1,
    ACTIONS(1335), 1,
      anon_sym_POUND,
  [11119] = 1,
    ACTIONS(1337), 1,
      anon_sym_POUND,
  [11123] = 1,
    ACTIONS(1339), 1,
      anon_sym_POUND,
  [11127] = 1,
    ACTIONS(1341), 1,
      anon_sym_POUND,
  [11131] = 1,
    ACTIONS(1343), 1,
      anon_sym_POUND,
  [11135] = 1,
    ACTIONS(1345), 1,
      anon_sym_POUND,
  [11139] = 1,
    ACTIONS(1347), 1,
      anon_sym_POUND,
  [11143] = 1,
    ACTIONS(843), 1,
      anon_sym_POUND,
  [11147] = 1,
    ACTIONS(839), 1,
      anon_sym_POUND,
  [11151] = 1,
    ACTIONS(1349), 1,
      anon_sym_POUND,
  [11155] = 1,
    ACTIONS(1351), 1,
      anon_sym_POUND,
  [11159] = 1,
    ACTIONS(1353), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 61,
  [SMALL_STATE(4)] = 122,
  [SMALL_STATE(5)] = 183,
  [SMALL_STATE(6)] = 244,
  [SMALL_STATE(7)] = 300,
  [SMALL_STATE(8)] = 356,
  [SMALL_STATE(9)] = 412,
  [SMALL_STATE(10)] = 482,
  [SMALL_STATE(11)] = 549,
  [SMALL_STATE(12)] = 622,
  [SMALL_STATE(13)] = 695,
  [SMALL_STATE(14)] = 768,
  [SMALL_STATE(15)] = 841,
  [SMALL_STATE(16)] = 885,
  [SMALL_STATE(17)] = 929,
  [SMALL_STATE(18)] = 971,
  [SMALL_STATE(19)] = 1013,
  [SMALL_STATE(20)] = 1050,
  [SMALL_STATE(21)] = 1108,
  [SMALL_STATE(22)] = 1148,
  [SMALL_STATE(23)] = 1188,
  [SMALL_STATE(24)] = 1226,
  [SMALL_STATE(25)] = 1261,
  [SMALL_STATE(26)] = 1314,
  [SMALL_STATE(27)] = 1349,
  [SMALL_STATE(28)] = 1384,
  [SMALL_STATE(29)] = 1437,
  [SMALL_STATE(30)] = 1471,
  [SMALL_STATE(31)] = 1510,
  [SMALL_STATE(32)] = 1549,
  [SMALL_STATE(33)] = 1600,
  [SMALL_STATE(34)] = 1651,
  [SMALL_STATE(35)] = 1690,
  [SMALL_STATE(36)] = 1761,
  [SMALL_STATE(37)] = 1794,
  [SMALL_STATE(38)] = 1827,
  [SMALL_STATE(39)] = 1866,
  [SMALL_STATE(40)] = 1905,
  [SMALL_STATE(41)] = 1950,
  [SMALL_STATE(42)] = 1995,
  [SMALL_STATE(43)] = 2040,
  [SMALL_STATE(44)] = 2085,
  [SMALL_STATE(45)] = 2119,
  [SMALL_STATE(46)] = 2149,
  [SMALL_STATE(47)] = 2179,
  [SMALL_STATE(48)] = 2213,
  [SMALL_STATE(49)] = 2247,
  [SMALL_STATE(50)] = 2289,
  [SMALL_STATE(51)] = 2335,
  [SMALL_STATE(52)] = 2369,
  [SMALL_STATE(53)] = 2420,
  [SMALL_STATE(54)] = 2447,
  [SMALL_STATE(55)] = 2494,
  [SMALL_STATE(56)] = 2545,
  [SMALL_STATE(57)] = 2574,
  [SMALL_STATE(58)] = 2612,
  [SMALL_STATE(59)] = 2652,
  [SMALL_STATE(60)] = 2692,
  [SMALL_STATE(61)] = 2729,
  [SMALL_STATE(62)] = 2758,
  [SMALL_STATE(63)] = 2809,
  [SMALL_STATE(64)] = 2840,
  [SMALL_STATE(65)] = 2879,
  [SMALL_STATE(66)] = 2910,
  [SMALL_STATE(67)] = 2939,
  [SMALL_STATE(68)] = 2968,
  [SMALL_STATE(69)] = 2997,
  [SMALL_STATE(70)] = 3026,
  [SMALL_STATE(71)] = 3055,
  [SMALL_STATE(72)] = 3092,
  [SMALL_STATE(73)] = 3129,
  [SMALL_STATE(74)] = 3158,
  [SMALL_STATE(75)] = 3194,
  [SMALL_STATE(76)] = 3222,
  [SMALL_STATE(77)] = 3256,
  [SMALL_STATE(78)] = 3284,
  [SMALL_STATE(79)] = 3310,
  [SMALL_STATE(80)] = 3338,
  [SMALL_STATE(81)] = 3386,
  [SMALL_STATE(82)] = 3420,
  [SMALL_STATE(83)] = 3448,
  [SMALL_STATE(84)] = 3478,
  [SMALL_STATE(85)] = 3504,
  [SMALL_STATE(86)] = 3542,
  [SMALL_STATE(87)] = 3568,
  [SMALL_STATE(88)] = 3595,
  [SMALL_STATE(89)] = 3624,
  [SMALL_STATE(90)] = 3651,
  [SMALL_STATE(91)] = 3674,
  [SMALL_STATE(92)] = 3709,
  [SMALL_STATE(93)] = 3732,
  [SMALL_STATE(94)] = 3769,
  [SMALL_STATE(95)] = 3806,
  [SMALL_STATE(96)] = 3833,
  [SMALL_STATE(97)] = 3856,
  [SMALL_STATE(98)] = 3885,
  [SMALL_STATE(99)] = 3912,
  [SMALL_STATE(100)] = 3941,
  [SMALL_STATE(101)] = 3969,
  [SMALL_STATE(102)] = 3997,
  [SMALL_STATE(103)] = 4025,
  [SMALL_STATE(104)] = 4049,
  [SMALL_STATE(105)] = 4075,
  [SMALL_STATE(106)] = 4099,
  [SMALL_STATE(107)] = 4125,
  [SMALL_STATE(108)] = 4147,
  [SMALL_STATE(109)] = 4175,
  [SMALL_STATE(110)] = 4199,
  [SMALL_STATE(111)] = 4238,
  [SMALL_STATE(112)] = 4263,
  [SMALL_STATE(113)] = 4288,
  [SMALL_STATE(114)] = 4311,
  [SMALL_STATE(115)] = 4334,
  [SMALL_STATE(116)] = 4359,
  [SMALL_STATE(117)] = 4380,
  [SMALL_STATE(118)] = 4407,
  [SMALL_STATE(119)] = 4434,
  [SMALL_STATE(120)] = 4459,
  [SMALL_STATE(121)] = 4498,
  [SMALL_STATE(122)] = 4529,
  [SMALL_STATE(123)] = 4554,
  [SMALL_STATE(124)] = 4597,
  [SMALL_STATE(125)] = 4624,
  [SMALL_STATE(126)] = 4645,
  [SMALL_STATE(127)] = 4670,
  [SMALL_STATE(128)] = 4697,
  [SMALL_STATE(129)] = 4724,
  [SMALL_STATE(130)] = 4749,
  [SMALL_STATE(131)] = 4776,
  [SMALL_STATE(132)] = 4803,
  [SMALL_STATE(133)] = 4830,
  [SMALL_STATE(134)] = 4857,
  [SMALL_STATE(135)] = 4884,
  [SMALL_STATE(136)] = 4909,
  [SMALL_STATE(137)] = 4936,
  [SMALL_STATE(138)] = 4963,
  [SMALL_STATE(139)] = 4988,
  [SMALL_STATE(140)] = 5027,
  [SMALL_STATE(141)] = 5070,
  [SMALL_STATE(142)] = 5101,
  [SMALL_STATE(143)] = 5122,
  [SMALL_STATE(144)] = 5148,
  [SMALL_STATE(145)] = 5196,
  [SMALL_STATE(146)] = 5220,
  [SMALL_STATE(147)] = 5244,
  [SMALL_STATE(148)] = 5268,
  [SMALL_STATE(149)] = 5292,
  [SMALL_STATE(150)] = 5316,
  [SMALL_STATE(151)] = 5340,
  [SMALL_STATE(152)] = 5364,
  [SMALL_STATE(153)] = 5388,
  [SMALL_STATE(154)] = 5412,
  [SMALL_STATE(155)] = 5438,
  [SMALL_STATE(156)] = 5462,
  [SMALL_STATE(157)] = 5486,
  [SMALL_STATE(158)] = 5506,
  [SMALL_STATE(159)] = 5532,
  [SMALL_STATE(160)] = 5558,
  [SMALL_STATE(161)] = 5578,
  [SMALL_STATE(162)] = 5602,
  [SMALL_STATE(163)] = 5628,
  [SMALL_STATE(164)] = 5650,
  [SMALL_STATE(165)] = 5674,
  [SMALL_STATE(166)] = 5698,
  [SMALL_STATE(167)] = 5720,
  [SMALL_STATE(168)] = 5744,
  [SMALL_STATE(169)] = 5766,
  [SMALL_STATE(170)] = 5785,
  [SMALL_STATE(171)] = 5808,
  [SMALL_STATE(172)] = 5827,
  [SMALL_STATE(173)] = 5850,
  [SMALL_STATE(174)] = 5869,
  [SMALL_STATE(175)] = 5892,
  [SMALL_STATE(176)] = 5913,
  [SMALL_STATE(177)] = 5936,
  [SMALL_STATE(178)] = 5959,
  [SMALL_STATE(179)] = 5978,
  [SMALL_STATE(180)] = 5997,
  [SMALL_STATE(181)] = 6020,
  [SMALL_STATE(182)] = 6043,
  [SMALL_STATE(183)] = 6062,
  [SMALL_STATE(184)] = 6081,
  [SMALL_STATE(185)] = 6100,
  [SMALL_STATE(186)] = 6119,
  [SMALL_STATE(187)] = 6138,
  [SMALL_STATE(188)] = 6157,
  [SMALL_STATE(189)] = 6176,
  [SMALL_STATE(190)] = 6195,
  [SMALL_STATE(191)] = 6220,
  [SMALL_STATE(192)] = 6241,
  [SMALL_STATE(193)] = 6266,
  [SMALL_STATE(194)] = 6289,
  [SMALL_STATE(195)] = 6312,
  [SMALL_STATE(196)] = 6335,
  [SMALL_STATE(197)] = 6356,
  [SMALL_STATE(198)] = 6379,
  [SMALL_STATE(199)] = 6404,
  [SMALL_STATE(200)] = 6423,
  [SMALL_STATE(201)] = 6444,
  [SMALL_STATE(202)] = 6467,
  [SMALL_STATE(203)] = 6490,
  [SMALL_STATE(204)] = 6513,
  [SMALL_STATE(205)] = 6532,
  [SMALL_STATE(206)] = 6555,
  [SMALL_STATE(207)] = 6578,
  [SMALL_STATE(208)] = 6600,
  [SMALL_STATE(209)] = 6620,
  [SMALL_STATE(210)] = 6642,
  [SMALL_STATE(211)] = 6664,
  [SMALL_STATE(212)] = 6686,
  [SMALL_STATE(213)] = 6706,
  [SMALL_STATE(214)] = 6728,
  [SMALL_STATE(215)] = 6750,
  [SMALL_STATE(216)] = 6768,
  [SMALL_STATE(217)] = 6790,
  [SMALL_STATE(218)] = 6812,
  [SMALL_STATE(219)] = 6834,
  [SMALL_STATE(220)] = 6854,
  [SMALL_STATE(221)] = 6876,
  [SMALL_STATE(222)] = 6898,
  [SMALL_STATE(223)] = 6916,
  [SMALL_STATE(224)] = 6936,
  [SMALL_STATE(225)] = 6958,
  [SMALL_STATE(226)] = 6980,
  [SMALL_STATE(227)] = 7002,
  [SMALL_STATE(228)] = 7022,
  [SMALL_STATE(229)] = 7040,
  [SMALL_STATE(230)] = 7062,
  [SMALL_STATE(231)] = 7084,
  [SMALL_STATE(232)] = 7102,
  [SMALL_STATE(233)] = 7124,
  [SMALL_STATE(234)] = 7142,
  [SMALL_STATE(235)] = 7160,
  [SMALL_STATE(236)] = 7182,
  [SMALL_STATE(237)] = 7204,
  [SMALL_STATE(238)] = 7228,
  [SMALL_STATE(239)] = 7250,
  [SMALL_STATE(240)] = 7272,
  [SMALL_STATE(241)] = 7294,
  [SMALL_STATE(242)] = 7314,
  [SMALL_STATE(243)] = 7334,
  [SMALL_STATE(244)] = 7354,
  [SMALL_STATE(245)] = 7386,
  [SMALL_STATE(246)] = 7408,
  [SMALL_STATE(247)] = 7430,
  [SMALL_STATE(248)] = 7450,
  [SMALL_STATE(249)] = 7471,
  [SMALL_STATE(250)] = 7490,
  [SMALL_STATE(251)] = 7509,
  [SMALL_STATE(252)] = 7538,
  [SMALL_STATE(253)] = 7557,
  [SMALL_STATE(254)] = 7574,
  [SMALL_STATE(255)] = 7591,
  [SMALL_STATE(256)] = 7608,
  [SMALL_STATE(257)] = 7627,
  [SMALL_STATE(258)] = 7646,
  [SMALL_STATE(259)] = 7667,
  [SMALL_STATE(260)] = 7686,
  [SMALL_STATE(261)] = 7705,
  [SMALL_STATE(262)] = 7734,
  [SMALL_STATE(263)] = 7751,
  [SMALL_STATE(264)] = 7768,
  [SMALL_STATE(265)] = 7785,
  [SMALL_STATE(266)] = 7802,
  [SMALL_STATE(267)] = 7819,
  [SMALL_STATE(268)] = 7848,
  [SMALL_STATE(269)] = 7865,
  [SMALL_STATE(270)] = 7882,
  [SMALL_STATE(271)] = 7899,
  [SMALL_STATE(272)] = 7925,
  [SMALL_STATE(273)] = 7941,
  [SMALL_STATE(274)] = 7967,
  [SMALL_STATE(275)] = 7993,
  [SMALL_STATE(276)] = 8019,
  [SMALL_STATE(277)] = 8035,
  [SMALL_STATE(278)] = 8061,
  [SMALL_STATE(279)] = 8087,
  [SMALL_STATE(280)] = 8103,
  [SMALL_STATE(281)] = 8129,
  [SMALL_STATE(282)] = 8155,
  [SMALL_STATE(283)] = 8171,
  [SMALL_STATE(284)] = 8197,
  [SMALL_STATE(285)] = 8223,
  [SMALL_STATE(286)] = 8239,
  [SMALL_STATE(287)] = 8255,
  [SMALL_STATE(288)] = 8273,
  [SMALL_STATE(289)] = 8299,
  [SMALL_STATE(290)] = 8315,
  [SMALL_STATE(291)] = 8331,
  [SMALL_STATE(292)] = 8347,
  [SMALL_STATE(293)] = 8363,
  [SMALL_STATE(294)] = 8389,
  [SMALL_STATE(295)] = 8415,
  [SMALL_STATE(296)] = 8441,
  [SMALL_STATE(297)] = 8467,
  [SMALL_STATE(298)] = 8493,
  [SMALL_STATE(299)] = 8519,
  [SMALL_STATE(300)] = 8535,
  [SMALL_STATE(301)] = 8561,
  [SMALL_STATE(302)] = 8577,
  [SMALL_STATE(303)] = 8593,
  [SMALL_STATE(304)] = 8619,
  [SMALL_STATE(305)] = 8645,
  [SMALL_STATE(306)] = 8671,
  [SMALL_STATE(307)] = 8689,
  [SMALL_STATE(308)] = 8715,
  [SMALL_STATE(309)] = 8731,
  [SMALL_STATE(310)] = 8757,
  [SMALL_STATE(311)] = 8773,
  [SMALL_STATE(312)] = 8789,
  [SMALL_STATE(313)] = 8805,
  [SMALL_STATE(314)] = 8821,
  [SMALL_STATE(315)] = 8847,
  [SMALL_STATE(316)] = 8873,
  [SMALL_STATE(317)] = 8889,
  [SMALL_STATE(318)] = 8905,
  [SMALL_STATE(319)] = 8931,
  [SMALL_STATE(320)] = 8947,
  [SMALL_STATE(321)] = 8963,
  [SMALL_STATE(322)] = 8979,
  [SMALL_STATE(323)] = 9005,
  [SMALL_STATE(324)] = 9021,
  [SMALL_STATE(325)] = 9037,
  [SMALL_STATE(326)] = 9053,
  [SMALL_STATE(327)] = 9079,
  [SMALL_STATE(328)] = 9095,
  [SMALL_STATE(329)] = 9111,
  [SMALL_STATE(330)] = 9127,
  [SMALL_STATE(331)] = 9143,
  [SMALL_STATE(332)] = 9159,
  [SMALL_STATE(333)] = 9175,
  [SMALL_STATE(334)] = 9190,
  [SMALL_STATE(335)] = 9209,
  [SMALL_STATE(336)] = 9238,
  [SMALL_STATE(337)] = 9261,
  [SMALL_STATE(338)] = 9284,
  [SMALL_STATE(339)] = 9300,
  [SMALL_STATE(340)] = 9316,
  [SMALL_STATE(341)] = 9331,
  [SMALL_STATE(342)] = 9353,
  [SMALL_STATE(343)] = 9375,
  [SMALL_STATE(344)] = 9385,
  [SMALL_STATE(345)] = 9407,
  [SMALL_STATE(346)] = 9429,
  [SMALL_STATE(347)] = 9442,
  [SMALL_STATE(348)] = 9455,
  [SMALL_STATE(349)] = 9468,
  [SMALL_STATE(350)] = 9481,
  [SMALL_STATE(351)] = 9500,
  [SMALL_STATE(352)] = 9514,
  [SMALL_STATE(353)] = 9526,
  [SMALL_STATE(354)] = 9542,
  [SMALL_STATE(355)] = 9558,
  [SMALL_STATE(356)] = 9570,
  [SMALL_STATE(357)] = 9586,
  [SMALL_STATE(358)] = 9598,
  [SMALL_STATE(359)] = 9610,
  [SMALL_STATE(360)] = 9624,
  [SMALL_STATE(361)] = 9640,
  [SMALL_STATE(362)] = 9656,
  [SMALL_STATE(363)] = 9672,
  [SMALL_STATE(364)] = 9684,
  [SMALL_STATE(365)] = 9700,
  [SMALL_STATE(366)] = 9712,
  [SMALL_STATE(367)] = 9725,
  [SMALL_STATE(368)] = 9736,
  [SMALL_STATE(369)] = 9747,
  [SMALL_STATE(370)] = 9754,
  [SMALL_STATE(371)] = 9765,
  [SMALL_STATE(372)] = 9776,
  [SMALL_STATE(373)] = 9789,
  [SMALL_STATE(374)] = 9800,
  [SMALL_STATE(375)] = 9813,
  [SMALL_STATE(376)] = 9824,
  [SMALL_STATE(377)] = 9835,
  [SMALL_STATE(378)] = 9848,
  [SMALL_STATE(379)] = 9861,
  [SMALL_STATE(380)] = 9872,
  [SMALL_STATE(381)] = 9883,
  [SMALL_STATE(382)] = 9894,
  [SMALL_STATE(383)] = 9905,
  [SMALL_STATE(384)] = 9916,
  [SMALL_STATE(385)] = 9927,
  [SMALL_STATE(386)] = 9938,
  [SMALL_STATE(387)] = 9949,
  [SMALL_STATE(388)] = 9960,
  [SMALL_STATE(389)] = 9971,
  [SMALL_STATE(390)] = 9984,
  [SMALL_STATE(391)] = 9997,
  [SMALL_STATE(392)] = 10008,
  [SMALL_STATE(393)] = 10019,
  [SMALL_STATE(394)] = 10030,
  [SMALL_STATE(395)] = 10043,
  [SMALL_STATE(396)] = 10056,
  [SMALL_STATE(397)] = 10069,
  [SMALL_STATE(398)] = 10079,
  [SMALL_STATE(399)] = 10089,
  [SMALL_STATE(400)] = 10099,
  [SMALL_STATE(401)] = 10109,
  [SMALL_STATE(402)] = 10117,
  [SMALL_STATE(403)] = 10127,
  [SMALL_STATE(404)] = 10137,
  [SMALL_STATE(405)] = 10147,
  [SMALL_STATE(406)] = 10157,
  [SMALL_STATE(407)] = 10167,
  [SMALL_STATE(408)] = 10177,
  [SMALL_STATE(409)] = 10187,
  [SMALL_STATE(410)] = 10197,
  [SMALL_STATE(411)] = 10207,
  [SMALL_STATE(412)] = 10217,
  [SMALL_STATE(413)] = 10227,
  [SMALL_STATE(414)] = 10237,
  [SMALL_STATE(415)] = 10247,
  [SMALL_STATE(416)] = 10257,
  [SMALL_STATE(417)] = 10267,
  [SMALL_STATE(418)] = 10277,
  [SMALL_STATE(419)] = 10287,
  [SMALL_STATE(420)] = 10297,
  [SMALL_STATE(421)] = 10307,
  [SMALL_STATE(422)] = 10317,
  [SMALL_STATE(423)] = 10327,
  [SMALL_STATE(424)] = 10337,
  [SMALL_STATE(425)] = 10347,
  [SMALL_STATE(426)] = 10357,
  [SMALL_STATE(427)] = 10367,
  [SMALL_STATE(428)] = 10377,
  [SMALL_STATE(429)] = 10387,
  [SMALL_STATE(430)] = 10397,
  [SMALL_STATE(431)] = 10407,
  [SMALL_STATE(432)] = 10417,
  [SMALL_STATE(433)] = 10427,
  [SMALL_STATE(434)] = 10437,
  [SMALL_STATE(435)] = 10447,
  [SMALL_STATE(436)] = 10457,
  [SMALL_STATE(437)] = 10467,
  [SMALL_STATE(438)] = 10477,
  [SMALL_STATE(439)] = 10487,
  [SMALL_STATE(440)] = 10497,
  [SMALL_STATE(441)] = 10507,
  [SMALL_STATE(442)] = 10517,
  [SMALL_STATE(443)] = 10527,
  [SMALL_STATE(444)] = 10537,
  [SMALL_STATE(445)] = 10547,
  [SMALL_STATE(446)] = 10557,
  [SMALL_STATE(447)] = 10567,
  [SMALL_STATE(448)] = 10577,
  [SMALL_STATE(449)] = 10587,
  [SMALL_STATE(450)] = 10597,
  [SMALL_STATE(451)] = 10607,
  [SMALL_STATE(452)] = 10617,
  [SMALL_STATE(453)] = 10627,
  [SMALL_STATE(454)] = 10637,
  [SMALL_STATE(455)] = 10647,
  [SMALL_STATE(456)] = 10657,
  [SMALL_STATE(457)] = 10667,
  [SMALL_STATE(458)] = 10677,
  [SMALL_STATE(459)] = 10687,
  [SMALL_STATE(460)] = 10695,
  [SMALL_STATE(461)] = 10705,
  [SMALL_STATE(462)] = 10715,
  [SMALL_STATE(463)] = 10725,
  [SMALL_STATE(464)] = 10735,
  [SMALL_STATE(465)] = 10745,
  [SMALL_STATE(466)] = 10755,
  [SMALL_STATE(467)] = 10765,
  [SMALL_STATE(468)] = 10775,
  [SMALL_STATE(469)] = 10785,
  [SMALL_STATE(470)] = 10795,
  [SMALL_STATE(471)] = 10805,
  [SMALL_STATE(472)] = 10815,
  [SMALL_STATE(473)] = 10825,
  [SMALL_STATE(474)] = 10835,
  [SMALL_STATE(475)] = 10842,
  [SMALL_STATE(476)] = 10849,
  [SMALL_STATE(477)] = 10856,
  [SMALL_STATE(478)] = 10863,
  [SMALL_STATE(479)] = 10870,
  [SMALL_STATE(480)] = 10877,
  [SMALL_STATE(481)] = 10884,
  [SMALL_STATE(482)] = 10889,
  [SMALL_STATE(483)] = 10896,
  [SMALL_STATE(484)] = 10903,
  [SMALL_STATE(485)] = 10910,
  [SMALL_STATE(486)] = 10915,
  [SMALL_STATE(487)] = 10922,
  [SMALL_STATE(488)] = 10929,
  [SMALL_STATE(489)] = 10936,
  [SMALL_STATE(490)] = 10943,
  [SMALL_STATE(491)] = 10947,
  [SMALL_STATE(492)] = 10951,
  [SMALL_STATE(493)] = 10955,
  [SMALL_STATE(494)] = 10959,
  [SMALL_STATE(495)] = 10963,
  [SMALL_STATE(496)] = 10967,
  [SMALL_STATE(497)] = 10971,
  [SMALL_STATE(498)] = 10975,
  [SMALL_STATE(499)] = 10979,
  [SMALL_STATE(500)] = 10983,
  [SMALL_STATE(501)] = 10987,
  [SMALL_STATE(502)] = 10991,
  [SMALL_STATE(503)] = 10995,
  [SMALL_STATE(504)] = 10999,
  [SMALL_STATE(505)] = 11003,
  [SMALL_STATE(506)] = 11007,
  [SMALL_STATE(507)] = 11011,
  [SMALL_STATE(508)] = 11015,
  [SMALL_STATE(509)] = 11019,
  [SMALL_STATE(510)] = 11023,
  [SMALL_STATE(511)] = 11027,
  [SMALL_STATE(512)] = 11031,
  [SMALL_STATE(513)] = 11035,
  [SMALL_STATE(514)] = 11039,
  [SMALL_STATE(515)] = 11043,
  [SMALL_STATE(516)] = 11047,
  [SMALL_STATE(517)] = 11051,
  [SMALL_STATE(518)] = 11055,
  [SMALL_STATE(519)] = 11059,
  [SMALL_STATE(520)] = 11063,
  [SMALL_STATE(521)] = 11067,
  [SMALL_STATE(522)] = 11071,
  [SMALL_STATE(523)] = 11075,
  [SMALL_STATE(524)] = 11079,
  [SMALL_STATE(525)] = 11083,
  [SMALL_STATE(526)] = 11087,
  [SMALL_STATE(527)] = 11091,
  [SMALL_STATE(528)] = 11095,
  [SMALL_STATE(529)] = 11099,
  [SMALL_STATE(530)] = 11103,
  [SMALL_STATE(531)] = 11107,
  [SMALL_STATE(532)] = 11111,
  [SMALL_STATE(533)] = 11115,
  [SMALL_STATE(534)] = 11119,
  [SMALL_STATE(535)] = 11123,
  [SMALL_STATE(536)] = 11127,
  [SMALL_STATE(537)] = 11131,
  [SMALL_STATE(538)] = 11135,
  [SMALL_STATE(539)] = 11139,
  [SMALL_STATE(540)] = 11143,
  [SMALL_STATE(541)] = 11147,
  [SMALL_STATE(542)] = 11151,
  [SMALL_STATE(543)] = 11155,
  [SMALL_STATE(544)] = 11159,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_rule, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_set_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_set_repeat1, 2), SHIFT_REPEAT(35),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 4, .production_id = 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(18),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(22),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_name, 1), REDUCE(sym_path, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 4),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance, 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 2, .production_id = 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 2, .production_id = 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3, .production_id = 4),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3, .production_id = 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 5),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_logical_repeat1, 2),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_logical_repeat1, 2), SHIFT_REPEAT(123),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 4),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 4),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 5),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat2, 2),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat2, 2), SHIFT_REPEAT(140),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(497),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(530),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(490),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(510),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(502),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_definition, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 5),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(513),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(527),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(525),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(491),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(519),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(520),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(524),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(529),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(509),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(492),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(515),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concept, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(497),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(500),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(501),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(502),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_code_string, 1), REDUCE(aux_sym_code_insert_rule_repeat1, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_insert_rule_repeat1, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_string, 1),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 1),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 1), SHIFT(368),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instance_repeat1, 2),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(497),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(507),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(502),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(508),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invariant, 4),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 1),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(65),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_name, 1), REDUCE(sym_value, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ratio_part, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(65),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 2),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 5),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2), SHIFT_REPEAT(421),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2), SHIFT_REPEAT(403),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(497),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(504),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(505),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(506),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2), SHIFT_REPEAT(90),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_rule, 3),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(497),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(522),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(502),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_rule, 4),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_rule, 4),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(497),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(522),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(502),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_rule, 3),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title, 3),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [477] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(87),
  [480] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(88),
  [483] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(87),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 1),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 4),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 3),
  [496] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(95),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 3),
  [501] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(88),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [506] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(108),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [511] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(102),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_operator, 1),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vs_filter_operator, 1),
  [518] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(104),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [525] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(108),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [530] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(111),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 5),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instance_repeat2, 2),
  [543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat2, 2), SHIFT_REPEAT(350),
  [546] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(119),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 5),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_metadata, 1),
  [557] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(126),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 5),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_valueset_repeat2, 2),
  [564] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat2, 2), SHIFT_REPEAT(144),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 5),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat2, 2),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat2, 2), SHIFT_REPEAT(342),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 5),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_repeat2, 2),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat2, 2), SHIFT_REPEAT(344),
  [585] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(138),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 6),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [604] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(146),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [611] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(149),
  [614] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(150),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [619] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(152),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 5),
  [626] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(155),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sd_metadata, 1),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concept, 3),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_cre_element_rule, 6),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parent, 3),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 7),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_metadata, 1),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance_metadata, 1),
  [647] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(164),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_of, 3),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance_of, 3),
  [656] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(167),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usage, 3),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usage, 3),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 5),
  [665] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(170),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 6),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2), SHIFT_REPEAT(277),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 5),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_valueset, 2),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [683] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(177),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cs_metadata, 1),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 4),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [692] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(181),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 4),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_metadata, 1),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 3),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_severity, 3),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath, 3),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_string, 2),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invariant_metadata, 1),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_valueset, 3),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [725] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(197),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 1),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 7),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [740] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(203),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [747] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(206),
  [750] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(207),
  [753] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(209),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_list, 1),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 4),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_rule, 4),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_system, 2),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_only_rule, 5),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 5),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_rule, 5),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contains_rule_repeat1, 2),
  [784] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contains_rule_repeat1, 2), SHIFT_REPEAT(267),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2),
  [789] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2), SHIFT_REPEAT(120),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_list, 2),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vs_filter_list_repeat1, 2),
  [796] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vs_filter_list_repeat1, 2), SHIFT_REPEAT(261),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 1),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 3),
  [805] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2), SHIFT_REPEAT(293),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_rule, 4),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_type, 1),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_type, 1, .production_id = 6),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_only_rule, 4),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2),
  [820] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2), SHIFT_REPEAT(287),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 3),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag, 1),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component_from, 2),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_definition, 3),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_value, 1),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 3),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [857] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(258),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_value_rule, 4),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_component, 2),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component_from, 4),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ratio, 3),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 3),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_rule, 1),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_rule, 4, .production_id = 5),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_rule, 5),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_value_rule, 4),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_value_rule, 5),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component, 2),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_component, 4),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 3),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_caret_value_rule, 5),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_rule, 3, .production_id = 1),
  [916] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_code_insert_rule, 3, .production_id = 1), REDUCE(sym_insert_rule, 3, .production_id = 1),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 8),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 5, .production_id = 2),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_insert_rule, 4, .production_id = 5),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sd_rule, 1),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_insert_rule, 3, .production_id = 1),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_cre_element_rule, 7),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 2),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 6),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concept, 4),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_rule, 1),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component, 3),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cs_rule, 1),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strength, 3),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_value_rule, 7),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_entity_rule, 1),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lr_rule, 1),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set_rule, 1),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [963] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(339),
  [966] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_rule_repeat1, 2), SHIFT_REPEAT(364),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_rule_repeat1, 2),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [979] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2), SHIFT_REPEAT(410),
  [982] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2), SHIFT_REPEAT(403),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [987] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(347),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [992] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(349),
  [995] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [997] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(351),
  [1000] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [1010] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1014] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(357),
  [1017] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(358),
  [1020] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1026] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1030] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(363),
  [1033] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1049] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1055] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [1057] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(373),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1064] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(375),
  [1067] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [1073] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(378),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1086] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [1088] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(383),
  [1091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [1093] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(385),
  [1096] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [1098] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(387),
  [1101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [1107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(392),
  [1110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(397),
  [1127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 2),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reference_repeat1, 2),
  [1141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reference_repeat1, 2), SHIFT_REPEAT(414),
  [1144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [1146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(404),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2),
  [1165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(415),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(431),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 2), SHIFT_REPEAT(409),
  [1196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(431),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(461),
  [1226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2), SHIFT_REPEAT(139),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 4),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2),
  [1251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_path, 2),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1313] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
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
