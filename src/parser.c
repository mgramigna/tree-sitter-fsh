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
#define STATE_COUNT 540
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 187
#define ALIAS_COUNT 5
#define TOKEN_COUNT 76
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 6

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
  [21] = 21,
  [22] = 16,
  [23] = 18,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 26,
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
  [60] = 16,
  [61] = 61,
  [62] = 62,
  [63] = 63,
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
  [75] = 30,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 66,
  [86] = 32,
  [87] = 18,
  [88] = 16,
  [89] = 89,
  [90] = 18,
  [91] = 91,
  [92] = 92,
  [93] = 18,
  [94] = 94,
  [95] = 16,
  [96] = 78,
  [97] = 97,
  [98] = 98,
  [99] = 16,
  [100] = 18,
  [101] = 18,
  [102] = 102,
  [103] = 16,
  [104] = 30,
  [105] = 16,
  [106] = 32,
  [107] = 107,
  [108] = 18,
  [109] = 16,
  [110] = 110,
  [111] = 111,
  [112] = 18,
  [113] = 30,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 16,
  [125] = 16,
  [126] = 18,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 18,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 119,
  [135] = 32,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 16,
  [140] = 16,
  [141] = 18,
  [142] = 142,
  [143] = 143,
  [144] = 16,
  [145] = 18,
  [146] = 16,
  [147] = 18,
  [148] = 148,
  [149] = 149,
  [150] = 16,
  [151] = 18,
  [152] = 18,
  [153] = 16,
  [154] = 154,
  [155] = 16,
  [156] = 156,
  [157] = 16,
  [158] = 18,
  [159] = 159,
  [160] = 160,
  [161] = 18,
  [162] = 162,
  [163] = 16,
  [164] = 164,
  [165] = 165,
  [166] = 18,
  [167] = 167,
  [168] = 168,
  [169] = 18,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 16,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 18,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 67,
  [189] = 25,
  [190] = 18,
  [191] = 16,
  [192] = 18,
  [193] = 16,
  [194] = 18,
  [195] = 16,
  [196] = 18,
  [197] = 16,
  [198] = 16,
  [199] = 72,
  [200] = 24,
  [201] = 201,
  [202] = 172,
  [203] = 173,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 24,
  [211] = 211,
  [212] = 173,
  [213] = 213,
  [214] = 18,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 68,
  [221] = 221,
  [222] = 222,
  [223] = 175,
  [224] = 224,
  [225] = 18,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 25,
  [233] = 233,
  [234] = 234,
  [235] = 172,
  [236] = 236,
  [237] = 237,
  [238] = 16,
  [239] = 16,
  [240] = 240,
  [241] = 172,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 173,
  [247] = 247,
  [248] = 248,
  [249] = 227,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 233,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 91,
  [260] = 260,
  [261] = 16,
  [262] = 97,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 18,
  [269] = 269,
  [270] = 213,
  [271] = 271,
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
  [284] = 280,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 281,
  [294] = 280,
  [295] = 295,
  [296] = 281,
  [297] = 280,
  [298] = 298,
  [299] = 281,
  [300] = 300,
  [301] = 283,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 98,
  [311] = 311,
  [312] = 312,
  [313] = 290,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 290,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
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
  [338] = 18,
  [339] = 16,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 16,
  [348] = 18,
  [349] = 18,
  [350] = 16,
  [351] = 351,
  [352] = 18,
  [353] = 353,
  [354] = 16,
  [355] = 355,
  [356] = 356,
  [357] = 16,
  [358] = 18,
  [359] = 359,
  [360] = 18,
  [361] = 16,
  [362] = 18,
  [363] = 363,
  [364] = 16,
  [365] = 365,
  [366] = 16,
  [367] = 367,
  [368] = 368,
  [369] = 16,
  [370] = 18,
  [371] = 18,
  [372] = 16,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 18,
  [380] = 16,
  [381] = 373,
  [382] = 382,
  [383] = 16,
  [384] = 384,
  [385] = 385,
  [386] = 18,
  [387] = 387,
  [388] = 382,
  [389] = 368,
  [390] = 384,
  [391] = 391,
  [392] = 368,
  [393] = 18,
  [394] = 382,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 18,
  [399] = 18,
  [400] = 400,
  [401] = 18,
  [402] = 402,
  [403] = 400,
  [404] = 402,
  [405] = 400,
  [406] = 400,
  [407] = 402,
  [408] = 16,
  [409] = 402,
  [410] = 410,
  [411] = 400,
  [412] = 402,
  [413] = 16,
  [414] = 402,
  [415] = 16,
  [416] = 416,
  [417] = 402,
  [418] = 402,
  [419] = 419,
  [420] = 400,
  [421] = 421,
  [422] = 402,
  [423] = 400,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 402,
  [431] = 400,
  [432] = 400,
  [433] = 402,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 16,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 400,
  [444] = 444,
  [445] = 402,
  [446] = 400,
  [447] = 447,
  [448] = 402,
  [449] = 400,
  [450] = 18,
  [451] = 16,
  [452] = 452,
  [453] = 453,
  [454] = 400,
  [455] = 455,
  [456] = 402,
  [457] = 402,
  [458] = 458,
  [459] = 400,
  [460] = 402,
  [461] = 400,
  [462] = 462,
  [463] = 463,
  [464] = 208,
  [465] = 402,
  [466] = 400,
  [467] = 463,
  [468] = 400,
  [469] = 19,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 472,
  [481] = 471,
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
  [517] = 512,
  [518] = 514,
  [519] = 519,
  [520] = 520,
  [521] = 511,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 512,
  [526] = 514,
  [527] = 514,
  [528] = 514,
  [529] = 514,
  [530] = 514,
  [531] = 514,
  [532] = 514,
  [533] = 514,
  [534] = 514,
  [535] = 514,
  [536] = 514,
  [537] = 514,
  [538] = 538,
  [539] = 506,
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
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 322},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 327},
  [16] = {.lex_state = 341},
  [17] = {.lex_state = 327},
  [18] = {.lex_state = 341},
  [19] = {.lex_state = 327},
  [20] = {.lex_state = 322},
  [21] = {.lex_state = 322},
  [22] = {.lex_state = 348},
  [23] = {.lex_state = 348},
  [24] = {.lex_state = 326},
  [25] = {.lex_state = 326},
  [26] = {.lex_state = 322},
  [27] = {.lex_state = 327},
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
  [45] = {.lex_state = 328},
  [46] = {.lex_state = 327},
  [47] = {.lex_state = 327},
  [48] = {.lex_state = 327},
  [49] = {.lex_state = 327},
  [50] = {.lex_state = 327},
  [51] = {.lex_state = 327},
  [52] = {.lex_state = 327},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 325},
  [56] = {.lex_state = 322},
  [57] = {.lex_state = 323},
  [58] = {.lex_state = 327},
  [59] = {.lex_state = 327},
  [60] = {.lex_state = 323},
  [61] = {.lex_state = 322},
  [62] = {.lex_state = 32},
  [63] = {.lex_state = 322},
  [64] = {.lex_state = 327},
  [65] = {.lex_state = 323},
  [66] = {.lex_state = 336},
  [67] = {.lex_state = 346},
  [68] = {.lex_state = 322},
  [69] = {.lex_state = 322},
  [70] = {.lex_state = 322},
  [71] = {.lex_state = 325},
  [72] = {.lex_state = 346},
  [73] = {.lex_state = 327},
  [74] = {.lex_state = 327},
  [75] = {.lex_state = 323},
  [76] = {.lex_state = 322},
  [77] = {.lex_state = 327},
  [78] = {.lex_state = 337},
  [79] = {.lex_state = 322},
  [80] = {.lex_state = 322},
  [81] = {.lex_state = 327},
  [82] = {.lex_state = 31},
  [83] = {.lex_state = 322},
  [84] = {.lex_state = 327},
  [85] = {.lex_state = 338},
  [86] = {.lex_state = 323},
  [87] = {.lex_state = 352},
  [88] = {.lex_state = 324},
  [89] = {.lex_state = 324},
  [90] = {.lex_state = 324},
  [91] = {.lex_state = 322},
  [92] = {.lex_state = 329},
  [93] = {.lex_state = 328},
  [94] = {.lex_state = 329},
  [95] = {.lex_state = 328},
  [96] = {.lex_state = 339},
  [97] = {.lex_state = 322},
  [98] = {.lex_state = 322},
  [99] = {.lex_state = 352},
  [100] = {.lex_state = 325},
  [101] = {.lex_state = 351},
  [102] = {.lex_state = 328},
  [103] = {.lex_state = 351},
  [104] = {.lex_state = 324},
  [105] = {.lex_state = 350},
  [106] = {.lex_state = 324},
  [107] = {.lex_state = 327},
  [108] = {.lex_state = 350},
  [109] = {.lex_state = 325},
  [110] = {.lex_state = 327},
  [111] = {.lex_state = 35},
  [112] = {.lex_state = 353},
  [113] = {.lex_state = 325},
  [114] = {.lex_state = 35},
  [115] = {.lex_state = 327},
  [116] = {.lex_state = 342},
  [117] = {.lex_state = 327},
  [118] = {.lex_state = 342},
  [119] = {.lex_state = 34},
  [120] = {.lex_state = 327},
  [121] = {.lex_state = 327},
  [122] = {.lex_state = 327},
  [123] = {.lex_state = 327},
  [124] = {.lex_state = 333},
  [125] = {.lex_state = 330},
  [126] = {.lex_state = 333},
  [127] = {.lex_state = 34},
  [128] = {.lex_state = 327},
  [129] = {.lex_state = 327},
  [130] = {.lex_state = 330},
  [131] = {.lex_state = 327},
  [132] = {.lex_state = 327},
  [133] = {.lex_state = 327},
  [134] = {.lex_state = 34},
  [135] = {.lex_state = 325},
  [136] = {.lex_state = 327},
  [137] = {.lex_state = 327},
  [138] = {.lex_state = 327},
  [139] = {.lex_state = 359},
  [140] = {.lex_state = 353},
  [141] = {.lex_state = 359},
  [142] = {.lex_state = 327},
  [143] = {.lex_state = 322},
  [144] = {.lex_state = 347},
  [145] = {.lex_state = 340},
  [146] = {.lex_state = 331},
  [147] = {.lex_state = 331},
  [148] = {.lex_state = 322},
  [149] = {.lex_state = 14},
  [150] = {.lex_state = 354},
  [151] = {.lex_state = 354},
  [152] = {.lex_state = 332},
  [153] = {.lex_state = 332},
  [154] = {.lex_state = 322},
  [155] = {.lex_state = 340},
  [156] = {.lex_state = 327},
  [157] = {.lex_state = 334},
  [158] = {.lex_state = 347},
  [159] = {.lex_state = 322},
  [160] = {.lex_state = 327},
  [161] = {.lex_state = 349},
  [162] = {.lex_state = 327},
  [163] = {.lex_state = 349},
  [164] = {.lex_state = 322},
  [165] = {.lex_state = 327},
  [166] = {.lex_state = 334},
  [167] = {.lex_state = 327},
  [168] = {.lex_state = 327},
  [169] = {.lex_state = 355},
  [170] = {.lex_state = 327},
  [171] = {.lex_state = 327},
  [172] = {.lex_state = 327},
  [173] = {.lex_state = 327},
  [174] = {.lex_state = 327},
  [175] = {.lex_state = 327},
  [176] = {.lex_state = 327},
  [177] = {.lex_state = 327},
  [178] = {.lex_state = 357},
  [179] = {.lex_state = 327},
  [180] = {.lex_state = 327},
  [181] = {.lex_state = 327},
  [182] = {.lex_state = 327},
  [183] = {.lex_state = 327},
  [184] = {.lex_state = 357},
  [185] = {.lex_state = 327},
  [186] = {.lex_state = 327},
  [187] = {.lex_state = 327},
  [188] = {.lex_state = 22},
  [189] = {.lex_state = 329},
  [190] = {.lex_state = 335},
  [191] = {.lex_state = 335},
  [192] = {.lex_state = 356},
  [193] = {.lex_state = 356},
  [194] = {.lex_state = 344},
  [195] = {.lex_state = 344},
  [196] = {.lex_state = 342},
  [197] = {.lex_state = 342},
  [198] = {.lex_state = 355},
  [199] = {.lex_state = 22},
  [200] = {.lex_state = 329},
  [201] = {.lex_state = 327},
  [202] = {.lex_state = 327},
  [203] = {.lex_state = 327},
  [204] = {.lex_state = 327},
  [205] = {.lex_state = 327},
  [206] = {.lex_state = 327},
  [207] = {.lex_state = 327},
  [208] = {.lex_state = 327},
  [209] = {.lex_state = 327},
  [210] = {.lex_state = 342},
  [211] = {.lex_state = 345},
  [212] = {.lex_state = 327},
  [213] = {.lex_state = 327},
  [214] = {.lex_state = 343},
  [215] = {.lex_state = 327},
  [216] = {.lex_state = 327},
  [217] = {.lex_state = 327},
  [218] = {.lex_state = 327},
  [219] = {.lex_state = 327},
  [220] = {.lex_state = 31},
  [221] = {.lex_state = 327},
  [222] = {.lex_state = 327},
  [223] = {.lex_state = 327},
  [224] = {.lex_state = 327},
  [225] = {.lex_state = 358},
  [226] = {.lex_state = 327},
  [227] = {.lex_state = 327},
  [228] = {.lex_state = 327},
  [229] = {.lex_state = 327},
  [230] = {.lex_state = 327},
  [231] = {.lex_state = 327},
  [232] = {.lex_state = 342},
  [233] = {.lex_state = 327},
  [234] = {.lex_state = 327},
  [235] = {.lex_state = 327},
  [236] = {.lex_state = 327},
  [237] = {.lex_state = 327},
  [238] = {.lex_state = 358},
  [239] = {.lex_state = 343},
  [240] = {.lex_state = 36},
  [241] = {.lex_state = 327},
  [242] = {.lex_state = 327},
  [243] = {.lex_state = 6},
  [244] = {.lex_state = 327},
  [245] = {.lex_state = 327},
  [246] = {.lex_state = 327},
  [247] = {.lex_state = 327},
  [248] = {.lex_state = 327},
  [249] = {.lex_state = 327},
  [250] = {.lex_state = 36},
  [251] = {.lex_state = 327},
  [252] = {.lex_state = 327},
  [253] = {.lex_state = 36},
  [254] = {.lex_state = 327},
  [255] = {.lex_state = 327},
  [256] = {.lex_state = 327},
  [257] = {.lex_state = 327},
  [258] = {.lex_state = 36},
  [259] = {.lex_state = 32},
  [260] = {.lex_state = 327},
  [261] = {.lex_state = 360},
  [262] = {.lex_state = 32},
  [263] = {.lex_state = 327},
  [264] = {.lex_state = 327},
  [265] = {.lex_state = 327},
  [266] = {.lex_state = 327},
  [267] = {.lex_state = 327},
  [268] = {.lex_state = 360},
  [269] = {.lex_state = 327},
  [270] = {.lex_state = 327},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 327},
  [273] = {.lex_state = 36},
  [274] = {.lex_state = 36},
  [275] = {.lex_state = 327},
  [276] = {.lex_state = 36},
  [277] = {.lex_state = 36},
  [278] = {.lex_state = 327},
  [279] = {.lex_state = 36},
  [280] = {.lex_state = 36},
  [281] = {.lex_state = 36},
  [282] = {.lex_state = 327},
  [283] = {.lex_state = 36},
  [284] = {.lex_state = 36},
  [285] = {.lex_state = 327},
  [286] = {.lex_state = 36},
  [287] = {.lex_state = 327},
  [288] = {.lex_state = 327},
  [289] = {.lex_state = 327},
  [290] = {.lex_state = 36},
  [291] = {.lex_state = 327},
  [292] = {.lex_state = 36},
  [293] = {.lex_state = 36},
  [294] = {.lex_state = 36},
  [295] = {.lex_state = 327},
  [296] = {.lex_state = 36},
  [297] = {.lex_state = 36},
  [298] = {.lex_state = 327},
  [299] = {.lex_state = 36},
  [300] = {.lex_state = 327},
  [301] = {.lex_state = 36},
  [302] = {.lex_state = 327},
  [303] = {.lex_state = 327},
  [304] = {.lex_state = 36},
  [305] = {.lex_state = 327},
  [306] = {.lex_state = 36},
  [307] = {.lex_state = 36},
  [308] = {.lex_state = 327},
  [309] = {.lex_state = 36},
  [310] = {.lex_state = 31},
  [311] = {.lex_state = 327},
  [312] = {.lex_state = 36},
  [313] = {.lex_state = 36},
  [314] = {.lex_state = 327},
  [315] = {.lex_state = 36},
  [316] = {.lex_state = 327},
  [317] = {.lex_state = 36},
  [318] = {.lex_state = 327},
  [319] = {.lex_state = 327},
  [320] = {.lex_state = 327},
  [321] = {.lex_state = 327},
  [322] = {.lex_state = 327},
  [323] = {.lex_state = 327},
  [324] = {.lex_state = 327},
  [325] = {.lex_state = 36},
  [326] = {.lex_state = 327},
  [327] = {.lex_state = 327},
  [328] = {.lex_state = 327},
  [329] = {.lex_state = 327},
  [330] = {.lex_state = 36},
  [331] = {.lex_state = 327},
  [332] = {.lex_state = 327},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 16},
  [335] = {.lex_state = 327},
  [336] = {.lex_state = 327},
  [337] = {.lex_state = 322},
  [338] = {.lex_state = 33},
  [339] = {.lex_state = 33},
  [340] = {.lex_state = 322},
  [341] = {.lex_state = 18},
  [342] = {.lex_state = 322},
  [343] = {.lex_state = 17},
  [344] = {.lex_state = 24},
  [345] = {.lex_state = 18},
  [346] = {.lex_state = 154},
  [347] = {.lex_state = 38},
  [348] = {.lex_state = 38},
  [349] = {.lex_state = 37},
  [350] = {.lex_state = 37},
  [351] = {.lex_state = 18},
  [352] = {.lex_state = 15},
  [353] = {.lex_state = 29},
  [354] = {.lex_state = 15},
  [355] = {.lex_state = 18},
  [356] = {.lex_state = 18},
  [357] = {.lex_state = 20},
  [358] = {.lex_state = 25},
  [359] = {.lex_state = 241},
  [360] = {.lex_state = 8},
  [361] = {.lex_state = 25},
  [362] = {.lex_state = 20},
  [363] = {.lex_state = 18},
  [364] = {.lex_state = 8},
  [365] = {.lex_state = 18},
  [366] = {.lex_state = 5},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 7},
  [369] = {.lex_state = 10},
  [370] = {.lex_state = 21},
  [371] = {.lex_state = 5},
  [372] = {.lex_state = 21},
  [373] = {.lex_state = 7},
  [374] = {.lex_state = 327},
  [375] = {.lex_state = 327},
  [376] = {.lex_state = 12},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 327},
  [379] = {.lex_state = 26},
  [380] = {.lex_state = 9},
  [381] = {.lex_state = 12},
  [382] = {.lex_state = 7},
  [383] = {.lex_state = 26},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 327},
  [386] = {.lex_state = 9},
  [387] = {.lex_state = 12},
  [388] = {.lex_state = 7},
  [389] = {.lex_state = 7},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 327},
  [392] = {.lex_state = 7},
  [393] = {.lex_state = 10},
  [394] = {.lex_state = 7},
  [395] = {.lex_state = 327},
  [396] = {.lex_state = 327},
  [397] = {.lex_state = 19},
  [398] = {.lex_state = 18},
  [399] = {.lex_state = 23},
  [400] = {.lex_state = 301},
  [401] = {.lex_state = 29},
  [402] = {.lex_state = 301},
  [403] = {.lex_state = 301},
  [404] = {.lex_state = 301},
  [405] = {.lex_state = 301},
  [406] = {.lex_state = 301},
  [407] = {.lex_state = 301},
  [408] = {.lex_state = 29},
  [409] = {.lex_state = 301},
  [410] = {.lex_state = 301},
  [411] = {.lex_state = 301},
  [412] = {.lex_state = 301},
  [413] = {.lex_state = 23},
  [414] = {.lex_state = 301},
  [415] = {.lex_state = 18},
  [416] = {.lex_state = 301},
  [417] = {.lex_state = 301},
  [418] = {.lex_state = 301},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 301},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 301},
  [423] = {.lex_state = 301},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 301},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 301},
  [431] = {.lex_state = 301},
  [432] = {.lex_state = 301},
  [433] = {.lex_state = 301},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 301},
  [436] = {.lex_state = 301},
  [437] = {.lex_state = 29},
  [438] = {.lex_state = 301},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 301},
  [442] = {.lex_state = 301},
  [443] = {.lex_state = 301},
  [444] = {.lex_state = 19},
  [445] = {.lex_state = 301},
  [446] = {.lex_state = 301},
  [447] = {.lex_state = 327},
  [448] = {.lex_state = 301},
  [449] = {.lex_state = 301},
  [450] = {.lex_state = 11},
  [451] = {.lex_state = 11},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 19},
  [454] = {.lex_state = 301},
  [455] = {.lex_state = 327},
  [456] = {.lex_state = 301},
  [457] = {.lex_state = 301},
  [458] = {.lex_state = 301},
  [459] = {.lex_state = 301},
  [460] = {.lex_state = 301},
  [461] = {.lex_state = 301},
  [462] = {.lex_state = 327},
  [463] = {.lex_state = 326},
  [464] = {.lex_state = 327},
  [465] = {.lex_state = 301},
  [466] = {.lex_state = 301},
  [467] = {.lex_state = 326},
  [468] = {.lex_state = 301},
  [469] = {.lex_state = 29},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 18},
  [474] = {.lex_state = 327},
  [475] = {.lex_state = 327},
  [476] = {.lex_state = 327},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 327},
  [479] = {.lex_state = 327},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 327},
  [484] = {.lex_state = 327},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
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
  [505] = {.lex_state = 327},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 345},
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
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
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
    [sym_doc] = STATE(515),
    [sym_alias] = STATE(53),
    [sym_profile] = STATE(53),
    [sym_extension] = STATE(53),
    [sym_invariant] = STATE(53),
    [sym_instance] = STATE(53),
    [sym_valueset] = STATE(53),
    [sym_codesystem] = STATE(53),
    [sym_mapping] = STATE(53),
    [sym_logical] = STATE(53),
    [sym_resource] = STATE(53),
    [sym_rule_set] = STATE(53),
    [aux_sym_doc_repeat1] = STATE(53),
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
    STATE(31), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(272), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(165), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(295), 10,
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
    STATE(5), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(34), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(272), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(165), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(295), 10,
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
    STATE(39), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(59), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(272), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(165), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(295), 10,
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
    STATE(36), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(59), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(272), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(165), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(295), 10,
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
    STATE(44), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(59), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(165), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(295), 10,
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
    STATE(6), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(49), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(165), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(295), 10,
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
    STATE(51), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(59), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(165), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(295), 10,
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
    STATE(337), 1,
      aux_sym_flag_rule_repeat1,
    STATE(497), 1,
      sym_caret_path,
    STATE(80), 2,
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
    STATE(123), 1,
      sym_code,
    STATE(197), 1,
      aux_sym_sequence_repeat1,
    STATE(201), 1,
      sym_reference,
    STATE(216), 1,
      sym_quantity,
    STATE(249), 1,
      sym_sequence,
    STATE(287), 1,
      sym_value,
    STATE(511), 1,
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
    STATE(267), 8,
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
    STATE(123), 1,
      sym_code,
    STATE(155), 1,
      aux_sym_sequence_repeat1,
    STATE(201), 1,
      sym_reference,
    STATE(216), 1,
      sym_quantity,
    STATE(227), 1,
      sym_sequence,
    STATE(248), 1,
      sym_value,
    STATE(521), 1,
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
    STATE(267), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [628] = 16,
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
    STATE(337), 1,
      aux_sym_flag_rule_repeat1,
    STATE(497), 1,
      sym_caret_path,
    STATE(80), 2,
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
  [695] = 19,
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
    STATE(123), 1,
      sym_code,
    STATE(197), 1,
      aux_sym_sequence_repeat1,
    STATE(201), 1,
      sym_reference,
    STATE(216), 1,
      sym_quantity,
    STATE(249), 1,
      sym_sequence,
    STATE(305), 1,
      sym_value,
    STATE(511), 1,
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
    STATE(267), 8,
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
    STATE(123), 1,
      sym_code,
    STATE(197), 1,
      aux_sym_sequence_repeat1,
    STATE(201), 1,
      sym_reference,
    STATE(216), 1,
      sym_quantity,
    STATE(249), 1,
      sym_sequence,
    STATE(282), 1,
      sym_value,
    STATE(511), 1,
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
    STATE(267), 8,
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
    STATE(17), 2,
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
    STATE(295), 10,
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
  [885] = 4,
    ACTIONS(113), 1,
      aux_sym_sequence_token1,
    ACTIONS(115), 1,
      aux_sym_cardinality_token1,
    STATE(18), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 30,
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
  [927] = 5,
    ACTIONS(119), 1,
      anon_sym_STAR,
    STATE(17), 2,
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
    STATE(295), 10,
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
    ACTIONS(117), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
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
  [1050] = 3,
    ACTIONS(135), 1,
      anon_sym_POUND,
    ACTIONS(137), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
    ACTIONS(133), 28,
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
  [1088] = 13,
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
    STATE(337), 1,
      aux_sym_flag_rule_repeat1,
    STATE(497), 1,
      sym_caret_path,
    STATE(80), 2,
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
  [1146] = 4,
    ACTIONS(115), 1,
      aux_sym_cardinality_token1,
    ACTIONS(140), 1,
      aux_sym_sequence_token1,
    STATE(23), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 28,
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
  [1186] = 4,
    ACTIONS(127), 1,
      aux_sym_cardinality_token1,
    ACTIONS(142), 1,
      aux_sym_sequence_token1,
    STATE(23), 1,
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
  [1226] = 2,
    ACTIONS(147), 2,
      anon_sym_Instance,
      anon_sym_DQUOTE,
    ACTIONS(145), 28,
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
  [1261] = 2,
    ACTIONS(151), 2,
      anon_sym_Instance,
      anon_sym_DQUOTE,
    ACTIONS(149), 28,
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
  [1296] = 2,
    ACTIONS(137), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
    ACTIONS(133), 28,
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
  [1331] = 11,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(35), 1,
      anon_sym_Title,
    ACTIONS(155), 1,
      anon_sym_Id,
    ACTIONS(157), 1,
      anon_sym_Source,
    ACTIONS(159), 1,
      anon_sym_Target,
    ACTIONS(161), 1,
      anon_sym_STAR,
    STATE(47), 2,
      sym_mapping_metadata,
      aux_sym_mapping_repeat1,
    STATE(142), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(311), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    STATE(117), 5,
      sym_description,
      sym_id,
      sym_source,
      sym_target,
      sym_title,
    ACTIONS(153), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [1384] = 11,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(35), 1,
      anon_sym_Title,
    ACTIONS(155), 1,
      anon_sym_Id,
    ACTIONS(157), 1,
      anon_sym_Source,
    ACTIONS(159), 1,
      anon_sym_Target,
    ACTIONS(161), 1,
      anon_sym_STAR,
    STATE(27), 2,
      sym_mapping_metadata,
      aux_sym_mapping_repeat1,
    STATE(122), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(311), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    STATE(117), 5,
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
    ACTIONS(133), 27,
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
  [1471] = 2,
    ACTIONS(167), 1,
      anon_sym_Instance,
    ACTIONS(165), 27,
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
  [1504] = 5,
    ACTIONS(37), 1,
      anon_sym_STAR,
    STATE(38), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(272), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(295), 10,
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
  [1543] = 2,
    ACTIONS(171), 1,
      anon_sym_Instance,
    ACTIONS(169), 27,
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
  [1576] = 11,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(35), 1,
      anon_sym_Title,
    ACTIONS(175), 1,
      anon_sym_Instance,
    ACTIONS(177), 1,
      anon_sym_InstanceOf,
    ACTIONS(179), 1,
      anon_sym_Usage,
    ACTIONS(181), 1,
      anon_sym_STAR,
    STATE(37), 2,
      sym_instance_metadata,
      aux_sym_instance_repeat1,
    STATE(131), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(300), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    STATE(156), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(173), 11,
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
  [1627] = 5,
    ACTIONS(37), 1,
      anon_sym_STAR,
    STATE(38), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(272), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(295), 10,
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
  [1666] = 21,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(183), 1,
      anon_sym_insert,
    ACTIONS(185), 1,
      anon_sym_obeys,
    ACTIONS(187), 1,
      anon_sym_DASH_GT,
    ACTIONS(191), 1,
      anon_sym_codes,
    ACTIONS(193), 1,
      anon_sym_system,
    ACTIONS(195), 1,
      anon_sym_POUND,
    ACTIONS(197), 1,
      aux_sym_sequence_token1,
    ACTIONS(199), 1,
      sym_number,
    STATE(9), 1,
      sym_path,
    STATE(16), 1,
      aux_sym_sequence_repeat1,
    STATE(20), 1,
      sym_sequence,
    STATE(55), 1,
      aux_sym_code_insert_rule_repeat1,
    STATE(57), 1,
      sym_code,
    STATE(185), 1,
      sym_code_string,
    STATE(341), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(462), 1,
      sym_name,
    STATE(485), 1,
      sym_caret_path,
    ACTIONS(189), 2,
      anon_sym_include,
      anon_sym_exclude,
    STATE(319), 2,
      sym_vs_concept_component,
      sym_vs_filter_component,
    ACTIONS(79), 6,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [1737] = 5,
    ACTIONS(37), 1,
      anon_sym_STAR,
    STATE(38), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(272), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(295), 10,
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
    ACTIONS(201), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [1776] = 11,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(35), 1,
      anon_sym_Title,
    ACTIONS(177), 1,
      anon_sym_InstanceOf,
    ACTIONS(179), 1,
      anon_sym_Usage,
    ACTIONS(181), 1,
      anon_sym_STAR,
    ACTIONS(205), 1,
      anon_sym_Instance,
    STATE(58), 2,
      sym_instance_metadata,
      aux_sym_instance_repeat1,
    STATE(120), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(300), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    STATE(156), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(203), 11,
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
  [1827] = 5,
    ACTIONS(209), 1,
      anon_sym_STAR,
    STATE(38), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(272), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(295), 10,
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
    ACTIONS(37), 1,
      anon_sym_STAR,
    STATE(38), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(272), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(295), 10,
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
  [1905] = 9,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(35), 1,
      anon_sym_Title,
    ACTIONS(216), 1,
      anon_sym_Id,
    ACTIONS(218), 1,
      anon_sym_STAR,
    STATE(84), 2,
      sym_cs_metadata,
      aux_sym_codesystem_repeat1,
    STATE(110), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(206), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(303), 3,
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
    STATE(74), 2,
      sym_vs_metadata,
      aux_sym_valueset_repeat1,
    STATE(128), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(205), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(302), 3,
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
    ACTIONS(222), 1,
      anon_sym_STAR,
    STATE(41), 2,
      sym_vs_metadata,
      aux_sym_valueset_repeat1,
    STATE(137), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(205), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(302), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
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
    ACTIONS(218), 1,
      anon_sym_STAR,
    STATE(40), 2,
      sym_cs_metadata,
      aux_sym_codesystem_repeat1,
    STATE(115), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(206), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(303), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
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
    STATE(48), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(295), 10,
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
  [2119] = 10,
    ACTIONS(234), 1,
      anon_sym_POUND,
    ACTIONS(236), 1,
      aux_sym_sequence_token1,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    STATE(123), 1,
      sym_code,
    STATE(266), 1,
      sym_vs_filter_value,
    STATE(415), 1,
      aux_sym_sequence_repeat1,
    STATE(537), 1,
      sym_sequence,
    ACTIONS(232), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(252), 2,
      sym_code_string,
      sym_string,
    ACTIONS(230), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [2165] = 2,
    ACTIONS(242), 1,
      anon_sym_Instance,
    ACTIONS(240), 24,
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
  [2195] = 8,
    ACTIONS(246), 1,
      anon_sym_Description,
    ACTIONS(249), 1,
      anon_sym_Id,
    ACTIONS(252), 1,
      anon_sym_Source,
    ACTIONS(255), 1,
      anon_sym_Target,
    ACTIONS(258), 1,
      anon_sym_Title,
    STATE(47), 2,
      sym_mapping_metadata,
      aux_sym_mapping_repeat1,
    STATE(117), 5,
      sym_description,
      sym_id,
      sym_source,
      sym_target,
      sym_title,
    ACTIONS(244), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [2237] = 4,
    ACTIONS(263), 1,
      anon_sym_STAR,
    STATE(48), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(295), 10,
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
  [2271] = 4,
    ACTIONS(47), 1,
      anon_sym_STAR,
    STATE(48), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(295), 10,
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
  [2305] = 2,
    ACTIONS(268), 1,
      anon_sym_Instance,
    ACTIONS(266), 24,
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
  [2335] = 4,
    ACTIONS(47), 1,
      anon_sym_STAR,
    STATE(48), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(295), 10,
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
  [2369] = 2,
    ACTIONS(274), 1,
      anon_sym_Instance,
    ACTIONS(272), 23,
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
  [2398] = 13,
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
    ACTIONS(276), 1,
      ts_builtin_sym_end,
    STATE(54), 12,
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
  [2449] = 13,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
    ACTIONS(280), 1,
      anon_sym_Alias,
    ACTIONS(283), 1,
      anon_sym_Profile,
    ACTIONS(286), 1,
      anon_sym_Extension,
    ACTIONS(289), 1,
      anon_sym_Invariant,
    ACTIONS(292), 1,
      anon_sym_Instance,
    ACTIONS(295), 1,
      anon_sym_ValueSet,
    ACTIONS(298), 1,
      anon_sym_CodeSystem,
    ACTIONS(301), 1,
      anon_sym_Mapping,
    ACTIONS(304), 1,
      anon_sym_Logical,
    ACTIONS(307), 1,
      anon_sym_Resource,
    ACTIONS(310), 1,
      anon_sym_RuleSet,
    STATE(54), 12,
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
  [2500] = 11,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_sequence_token1,
    ACTIONS(315), 1,
      anon_sym_insert,
    ACTIONS(317), 1,
      anon_sym_POUND,
    STATE(159), 1,
      sym_string,
    STATE(308), 1,
      sym_multiline_string,
    STATE(415), 1,
      aux_sym_sequence_repeat1,
    STATE(529), 1,
      sym_sequence,
    STATE(71), 2,
      sym_code,
      aux_sym_code_insert_rule_repeat1,
    ACTIONS(313), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [2547] = 1,
    ACTIONS(133), 24,
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
  [2574] = 8,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(326), 1,
      aux_sym_sequence_token1,
    ACTIONS(328), 1,
      anon_sym_DQUOTE,
    STATE(187), 1,
      sym_string,
    STATE(520), 1,
      sym_caret_path,
    ACTIONS(324), 2,
      anon_sym_from,
      anon_sym_and,
    ACTIONS(322), 3,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
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
  [2614] = 8,
    ACTIONS(333), 1,
      anon_sym_Instance,
    ACTIONS(335), 1,
      anon_sym_Description,
    ACTIONS(338), 1,
      anon_sym_InstanceOf,
    ACTIONS(341), 1,
      anon_sym_Title,
    ACTIONS(344), 1,
      anon_sym_Usage,
    STATE(58), 2,
      sym_instance_metadata,
      aux_sym_instance_repeat1,
    STATE(156), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(331), 12,
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
  [2654] = 7,
    ACTIONS(349), 1,
      anon_sym_Description,
    ACTIONS(352), 1,
      anon_sym_Id,
    ACTIONS(355), 1,
      anon_sym_Parent,
    ACTIONS(358), 1,
      anon_sym_Title,
    STATE(59), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(165), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    ACTIONS(347), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [2692] = 4,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(361), 1,
      aux_sym_sequence_token1,
    STATE(65), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [2723] = 3,
    STATE(70), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(73), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(364), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [2752] = 14,
    ACTIONS(97), 1,
      anon_sym_Reference,
    ACTIONS(99), 1,
      anon_sym_Canonical,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(366), 1,
      anon_sym_contentReference,
    ACTIONS(368), 1,
      aux_sym_sequence_token1,
    ACTIONS(372), 1,
      anon_sym_QMARK_BANG,
    STATE(19), 1,
      sym_sequence,
    STATE(230), 1,
      sym_reference,
    STATE(369), 1,
      aux_sym_sequence_repeat1,
    STATE(375), 1,
      sym_target_type,
    STATE(82), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    STATE(229), 2,
      sym_name,
      sym_canonical,
    ACTIONS(79), 3,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
    ACTIONS(370), 5,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [2803] = 3,
    STATE(68), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(73), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(374), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [2832] = 7,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(378), 1,
      anon_sym_Expression,
    ACTIONS(380), 1,
      anon_sym_Severity,
    ACTIONS(382), 1,
      anon_sym_XPath,
    STATE(73), 2,
      sym_invariant_metadata,
      aux_sym_invariant_repeat1,
    STATE(204), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
    ACTIONS(376), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [2869] = 4,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(384), 1,
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
  [2900] = 8,
    ACTIONS(236), 1,
      aux_sym_sequence_token1,
    ACTIONS(390), 1,
      anon_sym_COLON,
    ACTIONS(392), 1,
      anon_sym_POUND,
    ACTIONS(394), 1,
      anon_sym_SQUOTE,
    STATE(415), 1,
      aux_sym_sequence_repeat1,
    STATE(534), 1,
      sym_sequence,
    STATE(167), 2,
      sym_code,
      sym_unit,
    ACTIONS(387), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [2939] = 3,
    ACTIONS(398), 1,
      anon_sym_STAR,
    ACTIONS(400), 2,
      aux_sym_cardinality_token1,
      anon_sym_STAR2,
    ACTIONS(396), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2968] = 3,
    STATE(68), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(404), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(402), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
    STATE(63), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(73), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(407), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
    STATE(68), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(73), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(409), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
    ACTIONS(413), 1,
      anon_sym_POUND,
    ACTIONS(416), 1,
      aux_sym_sequence_token1,
    ACTIONS(419), 1,
      anon_sym_DQUOTE,
    STATE(415), 1,
      aux_sym_sequence_repeat1,
    STATE(529), 1,
      sym_sequence,
    STATE(71), 2,
      sym_code,
      aux_sym_code_insert_rule_repeat1,
    ACTIONS(411), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [3092] = 3,
    ACTIONS(423), 1,
      anon_sym_STAR,
    ACTIONS(425), 2,
      aux_sym_cardinality_token1,
      anon_sym_STAR2,
    ACTIONS(421), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3121] = 7,
    ACTIONS(429), 1,
      anon_sym_Description,
    ACTIONS(432), 1,
      anon_sym_Expression,
    ACTIONS(435), 1,
      anon_sym_Severity,
    ACTIONS(438), 1,
      anon_sym_XPath,
    STATE(73), 2,
      sym_invariant_metadata,
      aux_sym_invariant_repeat1,
    STATE(204), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
    ACTIONS(427), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [3158] = 6,
    ACTIONS(443), 1,
      anon_sym_Description,
    ACTIONS(446), 1,
      anon_sym_Id,
    ACTIONS(449), 1,
      anon_sym_Title,
    STATE(74), 2,
      sym_vs_metadata,
      aux_sym_valueset_repeat1,
    STATE(205), 3,
      sym_description,
      sym_id,
      sym_title,
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
  [3192] = 2,
    ACTIONS(167), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
    ACTIONS(165), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [3218] = 3,
    STATE(83), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(73), 6,
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
  [3246] = 4,
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
    STATE(295), 10,
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
  [3276] = 7,
    ACTIONS(101), 1,
      anon_sym_POUND,
    ACTIONS(236), 1,
      aux_sym_sequence_token1,
    ACTIONS(394), 1,
      anon_sym_SQUOTE,
    STATE(415), 1,
      aux_sym_sequence_repeat1,
    STATE(536), 1,
      sym_sequence,
    STATE(167), 2,
      sym_code,
      sym_unit,
    ACTIONS(390), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [3312] = 3,
    STATE(68), 2,
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
  [3340] = 3,
    STATE(68), 2,
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
  [3368] = 2,
    ACTIONS(460), 1,
      anon_sym_Instance,
    ACTIONS(458), 20,
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
  [3394] = 13,
    ACTIONS(97), 1,
      anon_sym_Reference,
    ACTIONS(99), 1,
      anon_sym_Canonical,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(368), 1,
      aux_sym_sequence_token1,
    ACTIONS(372), 1,
      anon_sym_QMARK_BANG,
    STATE(19), 1,
      sym_sequence,
    STATE(230), 1,
      sym_reference,
    STATE(369), 1,
      aux_sym_sequence_repeat1,
    STATE(385), 1,
      sym_target_type,
    STATE(220), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    STATE(229), 2,
      sym_name,
      sym_canonical,
    ACTIONS(79), 3,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
    ACTIONS(370), 5,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [3442] = 3,
    STATE(68), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(73), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
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
  [3470] = 6,
    ACTIONS(466), 1,
      anon_sym_Description,
    ACTIONS(469), 1,
      anon_sym_Id,
    ACTIONS(472), 1,
      anon_sym_Title,
    STATE(84), 2,
      sym_cs_metadata,
      aux_sym_codesystem_repeat1,
    STATE(206), 3,
      sym_description,
      sym_id,
      sym_title,
    ACTIONS(464), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [3504] = 8,
    ACTIONS(236), 1,
      aux_sym_sequence_token1,
    ACTIONS(390), 1,
      anon_sym_COLON,
    ACTIONS(394), 1,
      anon_sym_SQUOTE,
    ACTIONS(475), 1,
      anon_sym_POUND,
    STATE(415), 1,
      aux_sym_sequence_repeat1,
    STATE(533), 1,
      sym_sequence,
    STATE(167), 2,
      sym_code,
      sym_unit,
    ACTIONS(387), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
    ACTIONS(171), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
    ACTIONS(169), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_STAR,
  [3595] = 4,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(480), 1,
      aux_sym_sequence_token1,
    STATE(90), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [3624] = 4,
    ACTIONS(71), 1,
      anon_sym_CARET,
    STATE(520), 1,
      sym_caret_path,
    ACTIONS(326), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
    ACTIONS(322), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [3653] = 4,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(483), 1,
      aux_sym_sequence_token1,
    STATE(90), 1,
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
  [3682] = 1,
    ACTIONS(421), 20,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [3705] = 8,
    ACTIONS(236), 1,
      aux_sym_sequence_token1,
    ACTIONS(488), 1,
      anon_sym_POUND,
    ACTIONS(490), 1,
      anon_sym_DQUOTE,
    STATE(118), 1,
      sym_string,
    STATE(324), 1,
      sym_code,
    STATE(415), 1,
      aux_sym_sequence_repeat1,
    STATE(532), 1,
      sym_sequence,
    ACTIONS(486), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [3742] = 3,
    ACTIONS(492), 1,
      aux_sym_sequence_token1,
    STATE(93), 1,
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
  [3769] = 8,
    ACTIONS(236), 1,
      aux_sym_sequence_token1,
    ACTIONS(488), 1,
      anon_sym_POUND,
    ACTIONS(490), 1,
      anon_sym_DQUOTE,
    STATE(116), 1,
      sym_string,
    STATE(288), 1,
      sym_code,
    STATE(415), 1,
      aux_sym_sequence_repeat1,
    STATE(532), 1,
      sym_sequence,
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
  [3806] = 3,
    ACTIONS(497), 1,
      aux_sym_sequence_token1,
    STATE(93), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [3833] = 7,
    ACTIONS(83), 1,
      anon_sym_POUND,
    ACTIONS(236), 1,
      aux_sym_sequence_token1,
    ACTIONS(394), 1,
      anon_sym_SQUOTE,
    STATE(415), 1,
      aux_sym_sequence_repeat1,
    STATE(535), 1,
      sym_sequence,
    STATE(167), 2,
      sym_code,
      sym_unit,
    ACTIONS(390), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [3868] = 1,
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
  [3891] = 1,
    ACTIONS(502), 20,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [3914] = 3,
    ACTIONS(504), 1,
      aux_sym_sequence_token1,
    STATE(87), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3941] = 4,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(506), 1,
      aux_sym_sequence_token1,
    STATE(100), 1,
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
  [3969] = 3,
    ACTIONS(509), 1,
      aux_sym_sequence_token1,
    STATE(101), 1,
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
  [3995] = 2,
    ACTIONS(514), 1,
      aux_sym_sequence_token1,
    ACTIONS(512), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [4019] = 3,
    ACTIONS(516), 1,
      aux_sym_sequence_token1,
    STATE(101), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4045] = 2,
    ACTIONS(167), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_CARET,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [4069] = 4,
    ACTIONS(115), 1,
      anon_sym_Instance,
    ACTIONS(518), 1,
      aux_sym_sequence_token1,
    STATE(108), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 16,
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
  [4097] = 2,
    ACTIONS(171), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
    ACTIONS(169), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [4121] = 1,
    ACTIONS(520), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4143] = 4,
    ACTIONS(127), 1,
      anon_sym_Instance,
    ACTIONS(522), 1,
      aux_sym_sequence_token1,
    STATE(108), 1,
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
  [4171] = 4,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(525), 1,
      aux_sym_sequence_token1,
    STATE(100), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [4199] = 4,
    ACTIONS(218), 1,
      anon_sym_STAR,
    STATE(136), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(303), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
    ACTIONS(528), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [4226] = 12,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(185), 1,
      anon_sym_obeys,
    ACTIONS(193), 1,
      anon_sym_system,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(530), 1,
      anon_sym_insert,
    ACTIONS(532), 1,
      aux_sym_sequence_token1,
    STATE(12), 1,
      sym_path,
    STATE(22), 1,
      aux_sym_sequence_repeat1,
    STATE(26), 1,
      sym_sequence,
    STATE(462), 1,
      sym_name,
    STATE(485), 1,
      sym_caret_path,
    ACTIONS(79), 7,
      anon_sym_codes,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [4269] = 3,
    ACTIONS(534), 1,
      aux_sym_sequence_token1,
    STATE(112), 1,
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
  [4294] = 2,
    ACTIONS(167), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
    ACTIONS(165), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [4317] = 12,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(185), 1,
      anon_sym_obeys,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(530), 1,
      anon_sym_insert,
    ACTIONS(532), 1,
      aux_sym_sequence_token1,
    ACTIONS(537), 1,
      anon_sym_system,
    STATE(21), 1,
      sym_path,
    STATE(22), 1,
      aux_sym_sequence_repeat1,
    STATE(29), 1,
      sym_sequence,
    STATE(462), 1,
      sym_name,
    STATE(485), 1,
      sym_caret_path,
    ACTIONS(79), 7,
      anon_sym_codes,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [4360] = 4,
    ACTIONS(218), 1,
      anon_sym_STAR,
    STATE(136), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(303), 3,
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
  [4387] = 6,
    ACTIONS(236), 1,
      aux_sym_sequence_token1,
    ACTIONS(488), 1,
      anon_sym_POUND,
    STATE(314), 1,
      sym_code,
    STATE(415), 1,
      aux_sym_sequence_repeat1,
    STATE(532), 1,
      sym_sequence,
    ACTIONS(539), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [4418] = 1,
    ACTIONS(541), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4439] = 6,
    ACTIONS(236), 1,
      aux_sym_sequence_token1,
    ACTIONS(488), 1,
      anon_sym_POUND,
    STATE(288), 1,
      sym_code,
    STATE(415), 1,
      aux_sym_sequence_repeat1,
    STATE(532), 1,
      sym_sequence,
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
  [4470] = 10,
    ACTIONS(97), 1,
      anon_sym_Reference,
    ACTIONS(99), 1,
      anon_sym_Canonical,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(543), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(193), 1,
      aux_sym_sequence_repeat1,
    STATE(230), 1,
      sym_reference,
    STATE(236), 1,
      sym_target_type,
    STATE(229), 2,
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
  [4509] = 4,
    ACTIONS(181), 1,
      anon_sym_STAR,
    STATE(121), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(300), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    ACTIONS(545), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [4536] = 4,
    ACTIONS(549), 1,
      anon_sym_STAR,
    STATE(121), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(300), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    ACTIONS(547), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [4563] = 4,
    ACTIONS(161), 1,
      anon_sym_STAR,
    STATE(138), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(311), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    ACTIONS(153), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [4590] = 3,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    STATE(187), 1,
      sym_string,
    ACTIONS(324), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [4615] = 3,
    ACTIONS(552), 1,
      aux_sym_sequence_token1,
    STATE(126), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [4640] = 3,
    ACTIONS(554), 1,
      aux_sym_sequence_token1,
    STATE(130), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 16,
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
  [4665] = 3,
    ACTIONS(556), 1,
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
      anon_sym_STAR,
      anon_sym_from,
      anon_sym_and,
      anon_sym_DQUOTE,
  [4690] = 10,
    ACTIONS(97), 1,
      anon_sym_Reference,
    ACTIONS(99), 1,
      anon_sym_Canonical,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(543), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(193), 1,
      aux_sym_sequence_repeat1,
    STATE(230), 1,
      sym_reference,
    STATE(231), 1,
      sym_target_type,
    STATE(229), 2,
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
  [4729] = 4,
    ACTIONS(222), 1,
      anon_sym_STAR,
    STATE(129), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(302), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
    ACTIONS(559), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [4756] = 4,
    ACTIONS(563), 1,
      anon_sym_STAR,
    STATE(129), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(302), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
    ACTIONS(561), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [4783] = 3,
    ACTIONS(566), 1,
      aux_sym_sequence_token1,
    STATE(130), 1,
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
  [4808] = 4,
    ACTIONS(181), 1,
      anon_sym_STAR,
    STATE(121), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(300), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
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
      anon_sym_RuleSet,
  [4835] = 1,
    ACTIONS(569), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4856] = 1,
    ACTIONS(571), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4877] = 10,
    ACTIONS(97), 1,
      anon_sym_Reference,
    ACTIONS(99), 1,
      anon_sym_Canonical,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(368), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(230), 1,
      sym_reference,
    STATE(236), 1,
      sym_target_type,
    STATE(369), 1,
      aux_sym_sequence_repeat1,
    STATE(229), 2,
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
  [4916] = 2,
    ACTIONS(171), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
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
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [4939] = 4,
    ACTIONS(575), 1,
      anon_sym_STAR,
    STATE(136), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(303), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
    ACTIONS(573), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [4966] = 4,
    ACTIONS(222), 1,
      anon_sym_STAR,
    STATE(129), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(302), 3,
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
  [4993] = 4,
    ACTIONS(580), 1,
      anon_sym_STAR,
    STATE(138), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(311), 3,
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
  [5020] = 3,
    ACTIONS(583), 1,
      aux_sym_sequence_token1,
    STATE(141), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5045] = 3,
    ACTIONS(585), 1,
      aux_sym_sequence_token1,
    STATE(112), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5070] = 3,
    ACTIONS(587), 1,
      aux_sym_sequence_token1,
    STATE(141), 1,
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
  [5095] = 4,
    ACTIONS(161), 1,
      anon_sym_STAR,
    STATE(138), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(311), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    ACTIONS(590), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [5122] = 4,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(322), 2,
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
  [5148] = 3,
    ACTIONS(594), 1,
      aux_sym_sequence_token1,
    STATE(158), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5172] = 3,
    ACTIONS(596), 1,
      aux_sym_sequence_token1,
    STATE(145), 1,
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
  [5196] = 3,
    ACTIONS(599), 1,
      aux_sym_sequence_token1,
    STATE(147), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5220] = 3,
    ACTIONS(601), 1,
      aux_sym_sequence_token1,
    STATE(147), 1,
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
  [5244] = 4,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(327), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(604), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5270] = 15,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(530), 1,
      anon_sym_insert,
    ACTIONS(606), 1,
      anon_sym_codes,
    ACTIONS(608), 1,
      anon_sym_system,
    ACTIONS(610), 1,
      anon_sym_POUND,
    ACTIONS(612), 1,
      aux_sym_sequence_token1,
    STATE(123), 1,
      sym_code,
    STATE(185), 1,
      sym_code_string,
    STATE(341), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(354), 1,
      aux_sym_sequence_repeat1,
    STATE(419), 1,
      sym_path,
    STATE(421), 1,
      sym_sequence,
    STATE(485), 1,
      sym_caret_path,
    ACTIONS(189), 2,
      anon_sym_include,
      anon_sym_exclude,
    STATE(319), 2,
      sym_vs_concept_component,
      sym_vs_filter_component,
  [5318] = 3,
    ACTIONS(614), 1,
      aux_sym_sequence_token1,
    STATE(151), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5342] = 3,
    ACTIONS(616), 1,
      aux_sym_sequence_token1,
    STATE(151), 1,
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
  [5366] = 3,
    ACTIONS(619), 1,
      aux_sym_sequence_token1,
    STATE(152), 1,
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
  [5390] = 3,
    ACTIONS(622), 1,
      aux_sym_sequence_token1,
    STATE(152), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 15,
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
  [5414] = 4,
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
  [5440] = 3,
    ACTIONS(626), 1,
      aux_sym_sequence_token1,
    STATE(145), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5464] = 2,
    ACTIONS(630), 1,
      anon_sym_Instance,
    ACTIONS(628), 16,
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
  [5486] = 3,
    ACTIONS(632), 1,
      aux_sym_sequence_token1,
    STATE(166), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5510] = 3,
    ACTIONS(634), 1,
      aux_sym_sequence_token1,
    STATE(158), 1,
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
  [5534] = 4,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(331), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(637), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5560] = 1,
    ACTIONS(639), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5580] = 3,
    ACTIONS(641), 1,
      aux_sym_sequence_token1,
    STATE(161), 1,
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
  [5604] = 2,
    ACTIONS(646), 1,
      anon_sym_Instance,
    ACTIONS(644), 16,
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
  [5626] = 3,
    ACTIONS(648), 1,
      aux_sym_sequence_token1,
    STATE(161), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 15,
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
  [5650] = 4,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(316), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(650), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5676] = 1,
    ACTIONS(652), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5696] = 3,
    ACTIONS(654), 1,
      aux_sym_sequence_token1,
    STATE(166), 1,
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
  [5720] = 3,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    STATE(209), 1,
      sym_string,
    ACTIONS(657), 15,
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
  [5766] = 3,
    ACTIONS(663), 1,
      aux_sym_sequence_token1,
    STATE(169), 1,
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
  [5789] = 1,
    ACTIONS(666), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5808] = 1,
    ACTIONS(668), 16,
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
  [5827] = 2,
    STATE(173), 1,
      aux_sym_obeys_rule_repeat1,
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
  [5848] = 2,
    STATE(175), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(672), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5869] = 1,
    ACTIONS(674), 16,
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
  [5888] = 3,
    ACTIONS(678), 1,
      anon_sym_and,
    STATE(175), 1,
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
  [5911] = 1,
    ACTIONS(681), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5930] = 1,
    ACTIONS(683), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5949] = 3,
    ACTIONS(685), 1,
      aux_sym_sequence_token1,
    STATE(184), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [5972] = 1,
    ACTIONS(687), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5991] = 1,
    ACTIONS(689), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6010] = 1,
    ACTIONS(691), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6029] = 1,
    ACTIONS(693), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6048] = 1,
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
  [6067] = 3,
    ACTIONS(697), 1,
      aux_sym_sequence_token1,
    STATE(184), 1,
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
  [6090] = 4,
    ACTIONS(702), 1,
      anon_sym_from,
    ACTIONS(704), 1,
      anon_sym_and,
    STATE(320), 1,
      sym_vs_component_from,
    ACTIONS(700), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [6115] = 1,
    ACTIONS(706), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6134] = 1,
    ACTIONS(708), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6153] = 4,
    ACTIONS(710), 1,
      aux_sym_cardinality_token1,
    ACTIONS(712), 1,
      anon_sym_STAR2,
    ACTIONS(398), 2,
      aux_sym_sequence_token1,
      sym_number,
    ACTIONS(396), 12,
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
  [6178] = 2,
    ACTIONS(151), 1,
      aux_sym_sequence_token1,
    ACTIONS(149), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6199] = 3,
    ACTIONS(714), 1,
      aux_sym_sequence_token1,
    STATE(190), 1,
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
  [6222] = 3,
    ACTIONS(717), 1,
      aux_sym_sequence_token1,
    STATE(190), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6245] = 3,
    ACTIONS(719), 1,
      aux_sym_sequence_token1,
    STATE(192), 1,
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
  [6268] = 3,
    ACTIONS(722), 1,
      aux_sym_sequence_token1,
    STATE(192), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6291] = 3,
    ACTIONS(724), 1,
      aux_sym_sequence_token1,
    STATE(194), 1,
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
  [6314] = 3,
    ACTIONS(727), 1,
      aux_sym_sequence_token1,
    STATE(194), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6337] = 3,
    ACTIONS(729), 1,
      aux_sym_sequence_token1,
    STATE(196), 1,
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
  [6360] = 3,
    ACTIONS(732), 1,
      aux_sym_sequence_token1,
    STATE(196), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6383] = 3,
    ACTIONS(734), 1,
      aux_sym_sequence_token1,
    STATE(169), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6406] = 4,
    ACTIONS(736), 1,
      aux_sym_cardinality_token1,
    ACTIONS(738), 1,
      anon_sym_STAR2,
    ACTIONS(423), 2,
      aux_sym_sequence_token1,
      sym_number,
    ACTIONS(421), 12,
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
  [6431] = 2,
    ACTIONS(147), 1,
      aux_sym_sequence_token1,
    ACTIONS(145), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6452] = 3,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    STATE(263), 1,
      sym_string,
    ACTIONS(740), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6475] = 3,
    ACTIONS(742), 1,
      anon_sym_and,
    STATE(203), 1,
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
  [6498] = 3,
    ACTIONS(742), 1,
      anon_sym_and,
    STATE(175), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(672), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6521] = 1,
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
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [6540] = 1,
    ACTIONS(746), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6559] = 1,
    ACTIONS(748), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6578] = 1,
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
  [6596] = 3,
    ACTIONS(752), 1,
      anon_sym_or,
    STATE(208), 1,
      aux_sym_only_rule_repeat1,
    ACTIONS(750), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [6618] = 1,
    ACTIONS(755), 15,
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
  [6636] = 2,
    ACTIONS(147), 1,
      aux_sym_sequence_token1,
    ACTIONS(145), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6656] = 2,
    ACTIONS(759), 1,
      anon_sym_T,
    ACTIONS(757), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6676] = 3,
    ACTIONS(761), 1,
      anon_sym_and,
    STATE(223), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(672), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [6698] = 2,
    ACTIONS(765), 1,
      anon_sym_and,
    ACTIONS(763), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6718] = 3,
    ACTIONS(767), 1,
      aux_sym_sequence_token1,
    STATE(214), 1,
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
  [6740] = 1,
    ACTIONS(770), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6758] = 2,
    ACTIONS(390), 1,
      anon_sym_COLON,
    ACTIONS(740), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [6778] = 3,
    ACTIONS(774), 1,
      anon_sym_or,
    STATE(208), 1,
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
  [6800] = 3,
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
  [6822] = 3,
    ACTIONS(778), 1,
      anon_sym_and,
    STATE(244), 1,
      aux_sym_vs_filter_list_repeat1,
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
  [6844] = 4,
    ACTIONS(780), 2,
      aux_sym_sequence_token1,
      sym_number,
    STATE(220), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(402), 5,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_Reference,
      anon_sym_Canonical,
    ACTIONS(782), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [6868] = 3,
    ACTIONS(761), 1,
      anon_sym_and,
    STATE(223), 1,
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
  [6890] = 3,
    ACTIONS(789), 1,
      anon_sym_and,
    STATE(222), 1,
      aux_sym_contains_rule_repeat1,
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
  [6912] = 3,
    ACTIONS(792), 1,
      anon_sym_and,
    STATE(223), 1,
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
  [6934] = 3,
    ACTIONS(797), 1,
      anon_sym_LPAREN,
    STATE(278), 1,
      sym_strength,
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
  [6956] = 3,
    ACTIONS(799), 1,
      aux_sym_sequence_token1,
    STATE(225), 1,
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
  [6978] = 3,
    ACTIONS(804), 1,
      anon_sym_and,
    STATE(245), 1,
      aux_sym_contains_rule_repeat1,
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
  [7000] = 2,
    ACTIONS(806), 1,
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
  [7020] = 3,
    ACTIONS(761), 1,
      anon_sym_and,
    STATE(221), 1,
      aux_sym_obeys_rule_repeat1,
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
  [7042] = 1,
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
  [7060] = 1,
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
  [7078] = 3,
    ACTIONS(774), 1,
      anon_sym_or,
    STATE(217), 1,
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
  [7100] = 2,
    ACTIONS(151), 1,
      aux_sym_sequence_token1,
    ACTIONS(149), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7120] = 2,
    ACTIONS(816), 1,
      anon_sym_and,
    ACTIONS(763), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7140] = 3,
    ACTIONS(761), 1,
      anon_sym_and,
    STATE(237), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(818), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7162] = 2,
    STATE(246), 1,
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
      anon_sym_and,
  [7182] = 1,
    ACTIONS(750), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7200] = 3,
    ACTIONS(761), 1,
      anon_sym_and,
    STATE(223), 1,
      aux_sym_obeys_rule_repeat1,
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
  [7222] = 3,
    ACTIONS(820), 1,
      aux_sym_sequence_token1,
    STATE(225), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7244] = 3,
    ACTIONS(822), 1,
      aux_sym_sequence_token1,
    STATE(214), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [7266] = 8,
    ACTIONS(826), 1,
      aux_sym_sequence_token1,
    ACTIONS(828), 1,
      sym_number,
    STATE(219), 1,
      sym_vs_filter_definition,
    STATE(285), 1,
      sym_vs_filter_list,
    STATE(353), 1,
      sym_name,
    STATE(437), 1,
      aux_sym_sequence_repeat1,
    STATE(469), 1,
      sym_sequence,
    ACTIONS(824), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7298] = 3,
    ACTIONS(761), 1,
      anon_sym_and,
    STATE(212), 1,
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
  [7320] = 3,
    ACTIONS(832), 1,
      anon_sym_and,
    STATE(242), 1,
      aux_sym_vs_filter_list_repeat1,
    ACTIONS(830), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7342] = 3,
    ACTIONS(129), 2,
      anon_sym_or,
      anon_sym_DQUOTE,
    ACTIONS(835), 2,
      aux_sym_sequence_token1,
      sym_number,
    ACTIONS(502), 11,
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
  [7364] = 3,
    ACTIONS(778), 1,
      anon_sym_and,
    STATE(242), 1,
      aux_sym_vs_filter_list_repeat1,
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
  [7386] = 3,
    ACTIONS(804), 1,
      anon_sym_and,
    STATE(222), 1,
      aux_sym_contains_rule_repeat1,
    ACTIONS(839), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7408] = 2,
    STATE(223), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(672), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7428] = 3,
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
  [7450] = 2,
    ACTIONS(843), 1,
      anon_sym_LPAREN,
    ACTIONS(841), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7469] = 2,
    ACTIONS(845), 1,
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
  [7488] = 7,
    ACTIONS(826), 1,
      aux_sym_sequence_token1,
    ACTIONS(828), 1,
      sym_number,
    STATE(260), 1,
      sym_vs_filter_definition,
    STATE(353), 1,
      sym_name,
    STATE(437), 1,
      aux_sym_sequence_repeat1,
    STATE(469), 1,
      sym_sequence,
    ACTIONS(824), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7517] = 1,
    ACTIONS(847), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7534] = 1,
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
  [7551] = 7,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(851), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(226), 1,
      sym_item,
    STATE(361), 1,
      aux_sym_sequence_repeat1,
    STATE(374), 1,
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
  [7580] = 2,
    ACTIONS(853), 1,
      anon_sym_and,
    ACTIONS(763), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7599] = 2,
    ACTIONS(857), 1,
      anon_sym_where,
    ACTIONS(855), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7618] = 1,
    ACTIONS(787), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7635] = 1,
    ACTIONS(390), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7652] = 7,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(851), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(256), 1,
      sym_item,
    STATE(361), 1,
      aux_sym_sequence_repeat1,
    STATE(374), 1,
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
  [7681] = 2,
    ACTIONS(423), 2,
      aux_sym_sequence_token1,
      sym_number,
    ACTIONS(421), 12,
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
  [7700] = 1,
    ACTIONS(830), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7717] = 3,
    ACTIONS(859), 1,
      aux_sym_sequence_token1,
    STATE(268), 1,
      aux_sym_sequence_repeat1,
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
  [7738] = 2,
    ACTIONS(861), 2,
      aux_sym_sequence_token1,
      sym_number,
    ACTIONS(500), 12,
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
  [7757] = 1,
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
      anon_sym_LPAREN,
  [7774] = 1,
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
      anon_sym_LPAREN,
  [7791] = 1,
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
      anon_sym_LPAREN,
  [7808] = 1,
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
  [7825] = 1,
    ACTIONS(740), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
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
  [7842] = 3,
    ACTIONS(871), 1,
      aux_sym_sequence_token1,
    STATE(268), 1,
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
  [7863] = 1,
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
  [7880] = 2,
    ACTIONS(876), 1,
      anon_sym_and,
    ACTIONS(763), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7899] = 2,
    ACTIONS(880), 1,
      anon_sym_POUND,
    ACTIONS(878), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [7917] = 1,
    ACTIONS(882), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [7933] = 6,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(884), 1,
      aux_sym_sequence_token1,
    STATE(2), 1,
      sym_name,
    STATE(19), 1,
      sym_sequence,
    STATE(103), 1,
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
  [7959] = 6,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(886), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(198), 1,
      aux_sym_sequence_repeat1,
    STATE(228), 1,
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
  [7985] = 1,
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
  [8001] = 6,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(890), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(33), 1,
      sym_name,
    STATE(105), 1,
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
  [8027] = 6,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(884), 1,
      aux_sym_sequence_token1,
    STATE(3), 1,
      sym_name,
    STATE(19), 1,
      sym_sequence,
    STATE(103), 1,
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
  [8053] = 1,
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
  [8069] = 6,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(894), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(383), 1,
      aux_sym_sequence_repeat1,
    STATE(447), 1,
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
  [8095] = 6,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(886), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(198), 1,
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
  [8121] = 6,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(886), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(198), 1,
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
  [8147] = 1,
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
  [8163] = 6,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(898), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(150), 1,
      aux_sym_sequence_repeat1,
    STATE(207), 1,
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
  [8189] = 6,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(898), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(150), 1,
      aux_sym_sequence_repeat1,
    STATE(172), 1,
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
  [8215] = 1,
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
  [8231] = 6,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(902), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(335), 1,
      sym_name,
    STATE(350), 1,
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
  [8257] = 1,
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
  [8273] = 1,
    ACTIONS(539), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8289] = 1,
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
  [8305] = 6,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(909), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(107), 1,
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
  [8331] = 1,
    ACTIONS(911), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8347] = 6,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(886), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(198), 1,
      aux_sym_sequence_repeat1,
    STATE(234), 1,
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
  [8373] = 6,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(913), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(178), 1,
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
  [8399] = 6,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(898), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(150), 1,
      aux_sym_sequence_repeat1,
    STATE(202), 1,
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
  [8425] = 1,
    ACTIONS(915), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8441] = 6,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(917), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(215), 1,
      sym_name,
    STATE(238), 1,
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
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(886), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(198), 1,
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
  [8493] = 1,
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
  [8509] = 6,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(898), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(150), 1,
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
  [8535] = 1,
    ACTIONS(921), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8551] = 6,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(886), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(198), 1,
      aux_sym_sequence_repeat1,
    STATE(207), 1,
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
  [8577] = 1,
    ACTIONS(923), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8593] = 1,
    ACTIONS(925), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8609] = 6,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(909), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
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
  [8635] = 1,
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
  [8651] = 6,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(929), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(195), 1,
      aux_sym_sequence_repeat1,
    STATE(224), 1,
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
  [8677] = 6,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(931), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(28), 1,
      sym_name,
    STATE(99), 1,
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
  [8703] = 1,
    ACTIONS(637), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8719] = 6,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(890), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(105), 1,
      aux_sym_sequence_repeat1,
    STATE(162), 1,
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
  [8745] = 2,
    ACTIONS(835), 2,
      aux_sym_sequence_token1,
      sym_number,
    ACTIONS(502), 11,
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
  [8763] = 1,
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
  [8779] = 6,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(884), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(103), 1,
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
  [8805] = 6,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(884), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(103), 1,
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
  [8831] = 1,
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
  [8847] = 6,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(884), 1,
      aux_sym_sequence_token1,
    STATE(7), 1,
      sym_name,
    STATE(19), 1,
      sym_sequence,
    STATE(103), 1,
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
  [8889] = 6,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(931), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(99), 1,
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
  [8915] = 1,
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
  [8931] = 1,
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
  [8947] = 1,
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
  [8963] = 1,
    ACTIONS(604), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8979] = 1,
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
  [8995] = 1,
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
  [9011] = 1,
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
  [9027] = 6,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(947), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(336), 1,
      sym_name,
    STATE(347), 1,
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
  [9053] = 1,
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
  [9069] = 1,
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
  [9085] = 1,
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
  [9101] = 1,
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
  [9117] = 6,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(909), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      sym_sequence,
    STATE(42), 1,
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
    ACTIONS(878), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [9190] = 9,
    ACTIONS(236), 1,
      aux_sym_sequence_token1,
    ACTIONS(606), 1,
      anon_sym_codes,
    ACTIONS(610), 1,
      anon_sym_POUND,
    STATE(123), 1,
      sym_code,
    STATE(185), 1,
      sym_code_string,
    STATE(341), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(415), 1,
      aux_sym_sequence_repeat1,
    STATE(527), 1,
      sym_sequence,
    STATE(291), 2,
      sym_vs_concept_component,
      sym_vs_filter_component,
  [9219] = 6,
    ACTIONS(29), 1,
      anon_sym_Description,
    ACTIONS(378), 1,
      anon_sym_Expression,
    ACTIONS(380), 1,
      anon_sym_Severity,
    ACTIONS(382), 1,
      anon_sym_XPath,
    STATE(64), 2,
      sym_invariant_metadata,
      aux_sym_invariant_repeat1,
    STATE(204), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
  [9242] = 6,
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
    STATE(165), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
  [9265] = 4,
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
  [9284] = 3,
    ACTIONS(961), 1,
      aux_sym_sequence_token1,
    STATE(338), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 7,
      anon_sym_and,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [9300] = 3,
    ACTIONS(964), 1,
      aux_sym_sequence_token1,
    STATE(338), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 7,
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
    ACTIONS(236), 1,
      aux_sym_sequence_token1,
    ACTIONS(971), 1,
      anon_sym_POUND,
    STATE(123), 1,
      sym_code,
    STATE(345), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(415), 1,
      aux_sym_sequence_repeat1,
    STATE(440), 1,
      sym_code_string,
    STATE(528), 1,
      sym_sequence,
  [9353] = 1,
    ACTIONS(969), 7,
      anon_sym_and,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [9363] = 7,
    ACTIONS(236), 1,
      aux_sym_sequence_token1,
    ACTIONS(973), 1,
      anon_sym_insert,
    ACTIONS(975), 1,
      anon_sym_POUND,
    STATE(55), 1,
      aux_sym_code_insert_rule_repeat1,
    STATE(89), 1,
      sym_code,
    STATE(415), 1,
      aux_sym_sequence_repeat1,
    STATE(514), 1,
      sym_sequence,
  [9385] = 7,
    ACTIONS(187), 1,
      anon_sym_DASH_GT,
    ACTIONS(530), 1,
      anon_sym_insert,
    ACTIONS(608), 1,
      anon_sym_system,
    ACTIONS(977), 1,
      aux_sym_sequence_token1,
    STATE(56), 1,
      sym_sequence,
    STATE(144), 1,
      aux_sym_sequence_repeat1,
    STATE(218), 1,
      sym_path,
  [9407] = 7,
    ACTIONS(979), 1,
      anon_sym_POUND,
    ACTIONS(982), 1,
      aux_sym_sequence_token1,
    STATE(123), 1,
      sym_code,
    STATE(345), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(415), 1,
      aux_sym_sequence_repeat1,
    STATE(510), 1,
      sym_code_string,
    STATE(531), 1,
      sym_sequence,
  [9429] = 6,
    ACTIONS(530), 1,
      anon_sym_insert,
    ACTIONS(608), 1,
      anon_sym_system,
    ACTIONS(985), 1,
      aux_sym_sequence_token1,
    STATE(56), 1,
      sym_sequence,
    STATE(163), 1,
      aux_sym_sequence_repeat1,
    STATE(247), 1,
      sym_path,
  [9448] = 3,
    ACTIONS(987), 1,
      aux_sym_sequence_token1,
    STATE(348), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 4,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
  [9461] = 3,
    ACTIONS(989), 1,
      aux_sym_sequence_token1,
    STATE(348), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 4,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
  [9474] = 3,
    ACTIONS(992), 1,
      aux_sym_sequence_token1,
    STATE(349), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 4,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [9487] = 3,
    ACTIONS(995), 1,
      aux_sym_sequence_token1,
    STATE(349), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 4,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [9500] = 5,
    ACTIONS(997), 1,
      anon_sym_POUND,
    ACTIONS(999), 1,
      aux_sym_sequence_token1,
    STATE(239), 1,
      aux_sym_sequence_repeat1,
    STATE(271), 1,
      sym_sequence,
    STATE(333), 1,
      sym_code,
  [9516] = 3,
    ACTIONS(1001), 1,
      aux_sym_sequence_token1,
    STATE(352), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 3,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_CARET,
  [9528] = 5,
    ACTIONS(1004), 1,
      anon_sym_EQ,
    ACTIONS(1006), 1,
      aux_sym_sequence_token1,
    STATE(45), 1,
      sym_vs_filter_operator,
    STATE(95), 1,
      aux_sym_sequence_repeat1,
    STATE(102), 1,
      sym_sequence,
  [9544] = 3,
    ACTIONS(1008), 1,
      aux_sym_sequence_token1,
    STATE(352), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 3,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_CARET,
  [9556] = 5,
    ACTIONS(236), 1,
      aux_sym_sequence_token1,
    ACTIONS(1010), 1,
      anon_sym_POUND,
    STATE(132), 1,
      sym_code,
    STATE(415), 1,
      aux_sym_sequence_repeat1,
    STATE(530), 1,
      sym_sequence,
  [9572] = 5,
    ACTIONS(1012), 1,
      anon_sym_POUND,
    ACTIONS(1014), 1,
      aux_sym_sequence_token1,
    STATE(366), 1,
      aux_sym_sequence_repeat1,
    STATE(455), 1,
      sym_sequence,
    STATE(483), 1,
      sym_code,
  [9588] = 3,
    ACTIONS(1016), 1,
      aux_sym_sequence_token1,
    STATE(362), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE,
  [9600] = 4,
    ACTIONS(127), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1018), 1,
      aux_sym_sequence_token1,
    STATE(358), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 2,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [9614] = 5,
    ACTIONS(608), 1,
      anon_sym_system,
    ACTIONS(1021), 1,
      aux_sym_sequence_token1,
    STATE(56), 1,
      sym_sequence,
    STATE(339), 1,
      aux_sym_sequence_repeat1,
    STATE(342), 1,
      sym_path,
  [9630] = 3,
    ACTIONS(1023), 1,
      aux_sym_sequence_token1,
    STATE(360), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 3,
      anon_sym_from,
      anon_sym_and,
      anon_sym_DQUOTE,
  [9642] = 4,
    ACTIONS(115), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1026), 1,
      aux_sym_sequence_token1,
    STATE(358), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 2,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [9656] = 3,
    ACTIONS(1028), 1,
      aux_sym_sequence_token1,
    STATE(362), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE,
  [9668] = 5,
    ACTIONS(236), 1,
      aux_sym_sequence_token1,
    ACTIONS(1031), 1,
      anon_sym_POUND,
    STATE(168), 1,
      sym_code,
    STATE(415), 1,
      aux_sym_sequence_repeat1,
    STATE(526), 1,
      sym_sequence,
  [9684] = 3,
    ACTIONS(1033), 1,
      aux_sym_sequence_token1,
    STATE(360), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 3,
      anon_sym_from,
      anon_sym_and,
      anon_sym_DQUOTE,
  [9696] = 5,
    ACTIONS(236), 1,
      aux_sym_sequence_token1,
    ACTIONS(1035), 1,
      anon_sym_POUND,
    STATE(180), 1,
      sym_code,
    STATE(415), 1,
      aux_sym_sequence_repeat1,
    STATE(518), 1,
      sym_sequence,
  [9712] = 3,
    ACTIONS(1037), 1,
      aux_sym_sequence_token1,
    STATE(371), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 2,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [9723] = 4,
    ACTIONS(1039), 1,
      anon_sym_RPAREN,
    ACTIONS(1041), 1,
      anon_sym_or,
    ACTIONS(1043), 1,
      anon_sym_PIPE,
    STATE(434), 1,
      aux_sym_canonical_repeat1,
  [9736] = 3,
    ACTIONS(1045), 1,
      anon_sym_DQUOTE,
    STATE(382), 1,
      aux_sym_string_repeat1,
    ACTIONS(1047), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [9747] = 3,
    ACTIONS(1049), 1,
      aux_sym_sequence_token1,
    STATE(393), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 2,
      anon_sym_or,
      anon_sym_DQUOTE,
  [9758] = 3,
    ACTIONS(1051), 1,
      aux_sym_sequence_token1,
    STATE(370), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [9769] = 3,
    ACTIONS(1054), 1,
      aux_sym_sequence_token1,
    STATE(371), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 2,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [9780] = 3,
    ACTIONS(1057), 1,
      aux_sym_sequence_token1,
    STATE(370), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [9791] = 3,
    ACTIONS(1059), 1,
      anon_sym_DQUOTE,
    STATE(373), 1,
      aux_sym_string_repeat1,
    ACTIONS(1061), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [9802] = 4,
    ACTIONS(1064), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1066), 1,
      anon_sym_DOT_DOT,
    ACTIONS(1068), 1,
      anon_sym_named,
    STATE(69), 1,
      sym_cardinality,
  [9815] = 4,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    ACTIONS(1070), 1,
      anon_sym_or,
    STATE(164), 1,
      sym_string,
    STATE(391), 1,
      aux_sym_only_rule_repeat1,
  [9828] = 3,
    ACTIONS(1072), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(381), 1,
      aux_sym_string_repeat1,
    ACTIONS(1074), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [9839] = 3,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(52), 2,
      sym_string,
      sym_multiline_string,
  [9850] = 4,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    ACTIONS(1070), 1,
      anon_sym_or,
    STATE(148), 1,
      sym_string,
    STATE(464), 1,
      aux_sym_only_rule_repeat1,
  [9863] = 4,
    ACTIONS(122), 1,
      anon_sym_DOT_DOT,
    ACTIONS(127), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1076), 1,
      aux_sym_sequence_token1,
    STATE(379), 1,
      aux_sym_sequence_repeat1,
  [9876] = 3,
    ACTIONS(1079), 1,
      aux_sym_sequence_token1,
    STATE(386), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(111), 2,
      anon_sym_and,
      anon_sym_DQUOTE,
  [9887] = 3,
    ACTIONS(1059), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(381), 1,
      aux_sym_string_repeat1,
    ACTIONS(1081), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [9898] = 3,
    ACTIONS(1084), 1,
      anon_sym_DQUOTE,
    STATE(373), 1,
      aux_sym_string_repeat1,
    ACTIONS(1086), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [9909] = 4,
    ACTIONS(111), 1,
      anon_sym_DOT_DOT,
    ACTIONS(115), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1088), 1,
      aux_sym_sequence_token1,
    STATE(379), 1,
      aux_sym_sequence_repeat1,
  [9922] = 4,
    ACTIONS(1090), 1,
      anon_sym_system,
    ACTIONS(1092), 1,
      anon_sym_valueset,
    STATE(213), 1,
      sym_vs_from_valueset,
    STATE(233), 1,
      sym_vs_from_system,
  [9935] = 4,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    ACTIONS(1070), 1,
      anon_sym_or,
    STATE(154), 1,
      sym_string,
    STATE(378), 1,
      aux_sym_only_rule_repeat1,
  [9948] = 3,
    ACTIONS(1094), 1,
      aux_sym_sequence_token1,
    STATE(386), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 2,
      anon_sym_and,
      anon_sym_DQUOTE,
  [9959] = 3,
    ACTIONS(1097), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(376), 1,
      aux_sym_string_repeat1,
    ACTIONS(1099), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [9970] = 3,
    ACTIONS(1101), 1,
      anon_sym_DQUOTE,
    STATE(373), 1,
      aux_sym_string_repeat1,
    ACTIONS(1086), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [9981] = 3,
    ACTIONS(1103), 1,
      anon_sym_DQUOTE,
    STATE(388), 1,
      aux_sym_string_repeat1,
    ACTIONS(1105), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [9992] = 4,
    ACTIONS(1107), 1,
      anon_sym_system,
    ACTIONS(1109), 1,
      anon_sym_valueset,
    STATE(254), 1,
      sym_vs_from_system,
    STATE(270), 1,
      sym_vs_from_valueset,
  [10005] = 4,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    ACTIONS(1070), 1,
      anon_sym_or,
    STATE(154), 1,
      sym_string,
    STATE(464), 1,
      aux_sym_only_rule_repeat1,
  [10018] = 3,
    ACTIONS(1111), 1,
      anon_sym_DQUOTE,
    STATE(394), 1,
      aux_sym_string_repeat1,
    ACTIONS(1113), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [10029] = 3,
    ACTIONS(1115), 1,
      aux_sym_sequence_token1,
    STATE(393), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(122), 2,
      anon_sym_or,
      anon_sym_DQUOTE,
  [10040] = 3,
    ACTIONS(1118), 1,
      anon_sym_DQUOTE,
    STATE(373), 1,
      aux_sym_string_repeat1,
    ACTIONS(1086), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [10051] = 1,
    ACTIONS(1120), 4,
      anon_sym_example,
      anon_sym_preferred,
      anon_sym_extensible,
      anon_sym_required,
  [10058] = 3,
    ACTIONS(1122), 1,
      anon_sym_from,
    STATE(255), 1,
      sym_vs_component_from,
    ACTIONS(129), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
  [10069] = 3,
    ACTIONS(1124), 1,
      anon_sym_SQUOTE,
    ACTIONS(1126), 1,
      aux_sym_unit_token1,
    STATE(397), 1,
      aux_sym_unit_repeat1,
  [10079] = 3,
    ACTIONS(122), 1,
      anon_sym_POUND,
    ACTIONS(1129), 1,
      aux_sym_sequence_token1,
    STATE(398), 1,
      aux_sym_sequence_repeat1,
  [10089] = 3,
    ACTIONS(122), 1,
      anon_sym_STAR,
    ACTIONS(1132), 1,
      aux_sym_sequence_token1,
    STATE(399), 1,
      aux_sym_sequence_repeat1,
  [10099] = 3,
    ACTIONS(1135), 1,
      aux_sym_sequence_token1,
    STATE(32), 1,
      sym_sequence,
    STATE(139), 1,
      aux_sym_sequence_repeat1,
  [10109] = 3,
    ACTIONS(122), 1,
      anon_sym_EQ,
    ACTIONS(1137), 1,
      aux_sym_sequence_token1,
    STATE(401), 1,
      aux_sym_sequence_repeat1,
  [10119] = 3,
    ACTIONS(1140), 1,
      aux_sym_sequence_token1,
    STATE(30), 1,
      sym_sequence,
    STATE(451), 1,
      aux_sym_sequence_repeat1,
  [10129] = 3,
    ACTIONS(1142), 1,
      aux_sym_sequence_token1,
    STATE(32), 1,
      sym_sequence,
    STATE(157), 1,
      aux_sym_sequence_repeat1,
  [10139] = 3,
    ACTIONS(1142), 1,
      aux_sym_sequence_token1,
    STATE(30), 1,
      sym_sequence,
    STATE(157), 1,
      aux_sym_sequence_repeat1,
  [10149] = 3,
    ACTIONS(1144), 1,
      aux_sym_sequence_token1,
    STATE(60), 1,
      aux_sym_sequence_repeat1,
    STATE(86), 1,
      sym_sequence,
  [10159] = 3,
    ACTIONS(1146), 1,
      aux_sym_sequence_token1,
    STATE(32), 1,
      sym_sequence,
    STATE(125), 1,
      aux_sym_sequence_repeat1,
  [10169] = 3,
    ACTIONS(1146), 1,
      aux_sym_sequence_token1,
    STATE(30), 1,
      sym_sequence,
    STATE(125), 1,
      aux_sym_sequence_repeat1,
  [10179] = 3,
    ACTIONS(111), 1,
      anon_sym_EQ,
    ACTIONS(1148), 1,
      aux_sym_sequence_token1,
    STATE(401), 1,
      aux_sym_sequence_repeat1,
  [10189] = 3,
    ACTIONS(1150), 1,
      aux_sym_sequence_token1,
    STATE(88), 1,
      aux_sym_sequence_repeat1,
    STATE(104), 1,
      sym_sequence,
  [10199] = 3,
    ACTIONS(1152), 1,
      aux_sym_sequence_token1,
    STATE(77), 1,
      sym_sequence,
    STATE(413), 1,
      aux_sym_sequence_repeat1,
  [10209] = 3,
    ACTIONS(1140), 1,
      aux_sym_sequence_token1,
    STATE(32), 1,
      sym_sequence,
    STATE(451), 1,
      aux_sym_sequence_repeat1,
  [10219] = 3,
    ACTIONS(1144), 1,
      aux_sym_sequence_token1,
    STATE(60), 1,
      aux_sym_sequence_repeat1,
    STATE(75), 1,
      sym_sequence,
  [10229] = 3,
    ACTIONS(111), 1,
      anon_sym_STAR,
    ACTIONS(1154), 1,
      aux_sym_sequence_token1,
    STATE(399), 1,
      aux_sym_sequence_repeat1,
  [10239] = 3,
    ACTIONS(1156), 1,
      aux_sym_sequence_token1,
    STATE(30), 1,
      sym_sequence,
    STATE(261), 1,
      aux_sym_sequence_repeat1,
  [10249] = 3,
    ACTIONS(111), 1,
      anon_sym_POUND,
    ACTIONS(1158), 1,
      aux_sym_sequence_token1,
    STATE(398), 1,
      aux_sym_sequence_repeat1,
  [10259] = 3,
    ACTIONS(1160), 1,
      aux_sym_sequence_token1,
    STATE(357), 1,
      aux_sym_sequence_repeat1,
    STATE(367), 1,
      sym_sequence,
  [10269] = 3,
    ACTIONS(1135), 1,
      aux_sym_sequence_token1,
    STATE(30), 1,
      sym_sequence,
    STATE(139), 1,
      aux_sym_sequence_repeat1,
  [10279] = 3,
    ACTIONS(1162), 1,
      aux_sym_sequence_token1,
    STATE(30), 1,
      sym_sequence,
    STATE(153), 1,
      aux_sym_sequence_repeat1,
  [10289] = 3,
    ACTIONS(57), 1,
      anon_sym_insert,
    ACTIONS(71), 1,
      anon_sym_CARET,
    STATE(497), 1,
      sym_caret_path,
  [10299] = 3,
    ACTIONS(1164), 1,
      aux_sym_sequence_token1,
    STATE(32), 1,
      sym_sequence,
    STATE(105), 1,
      aux_sym_sequence_repeat1,
  [10309] = 2,
    ACTIONS(1166), 1,
      anon_sym_POUND,
    ACTIONS(133), 2,
      anon_sym_insert,
      anon_sym_CARET,
  [10317] = 3,
    ACTIONS(1164), 1,
      aux_sym_sequence_token1,
    STATE(30), 1,
      sym_sequence,
    STATE(105), 1,
      aux_sym_sequence_repeat1,
  [10327] = 3,
    ACTIONS(1168), 1,
      aux_sym_sequence_token1,
    STATE(32), 1,
      sym_sequence,
    STATE(364), 1,
      aux_sym_sequence_repeat1,
  [10337] = 3,
    ACTIONS(1041), 1,
      anon_sym_or,
    ACTIONS(1170), 1,
      anon_sym_RPAREN,
    STATE(426), 1,
      aux_sym_canonical_repeat1,
  [10347] = 3,
    ACTIONS(1172), 1,
      aux_sym_sequence_token1,
    STATE(372), 1,
      aux_sym_sequence_repeat1,
    STATE(470), 1,
      sym_sequence,
  [10357] = 3,
    ACTIONS(1174), 1,
      anon_sym_RPAREN,
    ACTIONS(1176), 1,
      anon_sym_or,
    STATE(426), 1,
      aux_sym_canonical_repeat1,
  [10367] = 3,
    ACTIONS(1041), 1,
      anon_sym_or,
    ACTIONS(1179), 1,
      anon_sym_RPAREN,
    STATE(424), 1,
      aux_sym_canonical_repeat1,
  [10377] = 2,
    ACTIONS(1181), 1,
      anon_sym_PIPE,
    ACTIONS(1174), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [10385] = 3,
    ACTIONS(1183), 1,
      anon_sym_RPAREN,
    ACTIONS(1185), 1,
      anon_sym_or,
    STATE(429), 1,
      aux_sym_reference_repeat1,
  [10395] = 3,
    ACTIONS(1168), 1,
      aux_sym_sequence_token1,
    STATE(30), 1,
      sym_sequence,
    STATE(364), 1,
      aux_sym_sequence_repeat1,
  [10405] = 3,
    ACTIONS(1156), 1,
      aux_sym_sequence_token1,
    STATE(32), 1,
      sym_sequence,
    STATE(261), 1,
      aux_sym_sequence_repeat1,
  [10415] = 3,
    ACTIONS(1162), 1,
      aux_sym_sequence_token1,
    STATE(32), 1,
      sym_sequence,
    STATE(153), 1,
      aux_sym_sequence_repeat1,
  [10425] = 3,
    ACTIONS(1188), 1,
      aux_sym_sequence_token1,
    STATE(30), 1,
      sym_sequence,
    STATE(238), 1,
      aux_sym_sequence_repeat1,
  [10435] = 3,
    ACTIONS(1041), 1,
      anon_sym_or,
    ACTIONS(1190), 1,
      anon_sym_RPAREN,
    STATE(426), 1,
      aux_sym_canonical_repeat1,
  [10445] = 3,
    ACTIONS(1172), 1,
      aux_sym_sequence_token1,
    STATE(372), 1,
      aux_sym_sequence_repeat1,
    STATE(427), 1,
      sym_sequence,
  [10455] = 3,
    ACTIONS(1192), 1,
      aux_sym_sequence_token1,
    STATE(408), 1,
      aux_sym_sequence_repeat1,
    STATE(502), 1,
      sym_sequence,
  [10465] = 3,
    ACTIONS(111), 1,
      anon_sym_EQ,
    ACTIONS(1194), 1,
      aux_sym_sequence_token1,
    STATE(401), 1,
      aux_sym_sequence_repeat1,
  [10475] = 3,
    ACTIONS(1160), 1,
      aux_sym_sequence_token1,
    STATE(357), 1,
      aux_sym_sequence_repeat1,
    STATE(428), 1,
      sym_sequence,
  [10485] = 3,
    ACTIONS(1197), 1,
      anon_sym_RPAREN,
    ACTIONS(1199), 1,
      anon_sym_or,
    STATE(429), 1,
      aux_sym_reference_repeat1,
  [10495] = 3,
    ACTIONS(702), 1,
      anon_sym_from,
    ACTIONS(704), 1,
      anon_sym_and,
    STATE(323), 1,
      sym_vs_component_from,
  [10505] = 3,
    ACTIONS(1172), 1,
      aux_sym_sequence_token1,
    STATE(372), 1,
      aux_sym_sequence_repeat1,
    STATE(482), 1,
      sym_sequence,
  [10515] = 3,
    ACTIONS(1172), 1,
      aux_sym_sequence_token1,
    STATE(372), 1,
      aux_sym_sequence_repeat1,
    STATE(452), 1,
      sym_sequence,
  [10525] = 3,
    ACTIONS(1188), 1,
      aux_sym_sequence_token1,
    STATE(32), 1,
      sym_sequence,
    STATE(238), 1,
      aux_sym_sequence_repeat1,
  [10535] = 3,
    ACTIONS(1201), 1,
      anon_sym_SQUOTE,
    ACTIONS(1203), 1,
      aux_sym_unit_token1,
    STATE(453), 1,
      aux_sym_unit_repeat1,
  [10545] = 3,
    ACTIONS(1205), 1,
      aux_sym_sequence_token1,
    STATE(30), 1,
      sym_sequence,
    STATE(380), 1,
      aux_sym_sequence_repeat1,
  [10555] = 3,
    ACTIONS(1207), 1,
      aux_sym_sequence_token1,
    STATE(109), 1,
      aux_sym_sequence_repeat1,
    STATE(135), 1,
      sym_sequence,
  [10565] = 3,
    ACTIONS(1064), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1066), 1,
      anon_sym_DOT_DOT,
    STATE(61), 1,
      sym_cardinality,
  [10575] = 3,
    ACTIONS(1207), 1,
      aux_sym_sequence_token1,
    STATE(109), 1,
      aux_sym_sequence_repeat1,
    STATE(113), 1,
      sym_sequence,
  [10585] = 3,
    ACTIONS(1209), 1,
      aux_sym_sequence_token1,
    STATE(32), 1,
      sym_sequence,
    STATE(99), 1,
      aux_sym_sequence_repeat1,
  [10595] = 3,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(1211), 1,
      aux_sym_sequence_token1,
    STATE(450), 1,
      aux_sym_sequence_repeat1,
  [10605] = 3,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(1214), 1,
      aux_sym_sequence_token1,
    STATE(450), 1,
      aux_sym_sequence_repeat1,
  [10615] = 3,
    ACTIONS(1199), 1,
      anon_sym_or,
    ACTIONS(1216), 1,
      anon_sym_RPAREN,
    STATE(439), 1,
      aux_sym_reference_repeat1,
  [10625] = 3,
    ACTIONS(1218), 1,
      anon_sym_SQUOTE,
    ACTIONS(1220), 1,
      aux_sym_unit_token1,
    STATE(397), 1,
      aux_sym_unit_repeat1,
  [10635] = 3,
    ACTIONS(1222), 1,
      aux_sym_sequence_token1,
    STATE(32), 1,
      sym_sequence,
    STATE(124), 1,
      aux_sym_sequence_repeat1,
  [10645] = 3,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    ACTIONS(1224), 1,
      anon_sym_POUND,
    STATE(143), 1,
      sym_string,
  [10655] = 3,
    ACTIONS(1222), 1,
      aux_sym_sequence_token1,
    STATE(30), 1,
      sym_sequence,
    STATE(124), 1,
      aux_sym_sequence_repeat1,
  [10665] = 3,
    ACTIONS(1209), 1,
      aux_sym_sequence_token1,
    STATE(30), 1,
      sym_sequence,
    STATE(99), 1,
      aux_sym_sequence_repeat1,
  [10675] = 3,
    ACTIONS(1192), 1,
      aux_sym_sequence_token1,
    STATE(408), 1,
      aux_sym_sequence_repeat1,
    STATE(538), 1,
      sym_sequence,
  [10685] = 3,
    ACTIONS(1226), 1,
      aux_sym_sequence_token1,
    STATE(32), 1,
      sym_sequence,
    STATE(191), 1,
      aux_sym_sequence_repeat1,
  [10695] = 3,
    ACTIONS(1226), 1,
      aux_sym_sequence_token1,
    STATE(30), 1,
      sym_sequence,
    STATE(191), 1,
      aux_sym_sequence_repeat1,
  [10705] = 3,
    ACTIONS(1228), 1,
      aux_sym_sequence_token1,
    STATE(32), 1,
      sym_sequence,
    STATE(146), 1,
      aux_sym_sequence_repeat1,
  [10715] = 3,
    ACTIONS(1064), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1066), 1,
      anon_sym_DOT_DOT,
    STATE(76), 1,
      sym_cardinality,
  [10725] = 3,
    ACTIONS(1230), 1,
      sym_number,
    STATE(257), 1,
      sym_quantity,
    STATE(264), 1,
      sym_ratio_part,
  [10735] = 3,
    ACTIONS(750), 1,
      anon_sym_DQUOTE,
    ACTIONS(1232), 1,
      anon_sym_or,
    STATE(464), 1,
      aux_sym_only_rule_repeat1,
  [10745] = 3,
    ACTIONS(1228), 1,
      aux_sym_sequence_token1,
    STATE(30), 1,
      sym_sequence,
    STATE(146), 1,
      aux_sym_sequence_repeat1,
  [10755] = 3,
    ACTIONS(1205), 1,
      aux_sym_sequence_token1,
    STATE(32), 1,
      sym_sequence,
    STATE(380), 1,
      aux_sym_sequence_repeat1,
  [10765] = 3,
    ACTIONS(1235), 1,
      sym_number,
    STATE(257), 1,
      sym_quantity,
    STATE(264), 1,
      sym_ratio_part,
  [10775] = 3,
    ACTIONS(1150), 1,
      aux_sym_sequence_token1,
    STATE(88), 1,
      aux_sym_sequence_repeat1,
    STATE(106), 1,
      sym_sequence,
  [10785] = 2,
    ACTIONS(129), 1,
      anon_sym_EQ,
    ACTIONS(131), 1,
      aux_sym_sequence_token1,
  [10792] = 1,
    ACTIONS(1237), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [10797] = 2,
    ACTIONS(1239), 1,
      anon_sym_system,
    STATE(251), 1,
      sym_vs_from_system,
  [10804] = 2,
    ACTIONS(1241), 1,
      anon_sym_valueset,
    STATE(251), 1,
      sym_vs_from_valueset,
  [10811] = 2,
    ACTIONS(1243), 1,
      anon_sym_POUND,
    ACTIONS(1245), 1,
      aux_sym_sequence_token1,
  [10818] = 2,
    ACTIONS(1247), 1,
      anon_sym_DQUOTE,
    STATE(94), 1,
      sym_string,
  [10825] = 2,
    ACTIONS(1247), 1,
      anon_sym_DQUOTE,
    STATE(92), 1,
      sym_string,
  [10832] = 2,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    STATE(133), 1,
      sym_string,
  [10839] = 2,
    ACTIONS(1122), 1,
      anon_sym_from,
    STATE(255), 1,
      sym_vs_component_from,
  [10846] = 2,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    STATE(181), 1,
      sym_string,
  [10853] = 2,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    STATE(179), 1,
      sym_string,
  [10860] = 2,
    ACTIONS(1249), 1,
      anon_sym_valueset,
    STATE(251), 1,
      sym_vs_from_valueset,
  [10867] = 2,
    ACTIONS(1251), 1,
      anon_sym_system,
    STATE(251), 1,
      sym_vs_from_system,
  [10874] = 1,
    ACTIONS(1183), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [10879] = 2,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    STATE(143), 1,
      sym_string,
  [10886] = 2,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    STATE(81), 1,
      sym_string,
  [10893] = 1,
    ACTIONS(1253), 1,
      anon_sym_EQ,
  [10897] = 1,
    ACTIONS(1255), 1,
      anon_sym_LPAREN,
  [10901] = 1,
    ACTIONS(1257), 1,
      anon_sym_COLON,
  [10905] = 1,
    ACTIONS(1259), 1,
      anon_sym_COLON,
  [10909] = 1,
    ACTIONS(1261), 1,
      anon_sym_COLON,
  [10913] = 1,
    ACTIONS(1263), 1,
      anon_sym_COLON,
  [10917] = 1,
    ACTIONS(1265), 1,
      anon_sym_COLON,
  [10921] = 1,
    ACTIONS(1267), 1,
      anon_sym_COLON,
  [10925] = 1,
    ACTIONS(1269), 1,
      anon_sym_COLON,
  [10929] = 1,
    ACTIONS(1271), 1,
      anon_sym_COLON,
  [10933] = 1,
    ACTIONS(1273), 1,
      anon_sym_COLON,
  [10937] = 1,
    ACTIONS(1275), 1,
      anon_sym_COLON,
  [10941] = 1,
    ACTIONS(1277), 1,
      anon_sym_EQ,
  [10945] = 1,
    ACTIONS(1279), 1,
      anon_sym_COLON,
  [10949] = 1,
    ACTIONS(1281), 1,
      anon_sym_RPAREN,
  [10953] = 1,
    ACTIONS(1283), 1,
      anon_sym_RPAREN,
  [10957] = 1,
    ACTIONS(1285), 1,
      anon_sym_COLON,
  [10961] = 1,
    ACTIONS(1287), 1,
      anon_sym_EQ,
  [10965] = 1,
    ACTIONS(1289), 1,
      anon_sym_COLON,
  [10969] = 1,
    ACTIONS(1291), 1,
      anon_sym_COLON,
  [10973] = 1,
    ACTIONS(1293), 1,
      anon_sym_exactly,
  [10977] = 1,
    ACTIONS(1295), 1,
      anon_sym_DOT_DOT,
  [10981] = 1,
    ACTIONS(1297), 1,
      sym_time,
  [10985] = 1,
    ACTIONS(1299), 1,
      anon_sym_COLON,
  [10989] = 1,
    ACTIONS(1301), 1,
      anon_sym_COLON,
  [10993] = 1,
    ACTIONS(704), 1,
      anon_sym_and,
  [10997] = 1,
    ACTIONS(1303), 1,
      anon_sym_COLON,
  [11001] = 1,
    ACTIONS(1305), 1,
      anon_sym_COLON,
  [11005] = 1,
    ACTIONS(1307), 1,
      anon_sym_LPAREN,
  [11009] = 1,
    ACTIONS(1309), 1,
      anon_sym_POUND,
  [11013] = 1,
    ACTIONS(1311), 1,
      ts_builtin_sym_end,
  [11017] = 1,
    ACTIONS(1313), 1,
      anon_sym_COLON,
  [11021] = 1,
    ACTIONS(1315), 1,
      anon_sym_COLON,
  [11025] = 1,
    ACTIONS(1317), 1,
      anon_sym_POUND,
  [11029] = 1,
    ACTIONS(1319), 1,
      anon_sym_COLON,
  [11033] = 1,
    ACTIONS(1321), 1,
      anon_sym_EQ,
  [11037] = 1,
    ACTIONS(1323), 1,
      anon_sym_COLON,
  [11041] = 1,
    ACTIONS(1325), 1,
      anon_sym_COLON,
  [11045] = 1,
    ACTIONS(1327), 1,
      anon_sym_COLON,
  [11049] = 1,
    ACTIONS(1329), 1,
      anon_sym_COLON,
  [11053] = 1,
    ACTIONS(1331), 1,
      anon_sym_COLON,
  [11057] = 1,
    ACTIONS(1333), 1,
      anon_sym_POUND,
  [11061] = 1,
    ACTIONS(1166), 1,
      anon_sym_POUND,
  [11065] = 1,
    ACTIONS(1335), 1,
      anon_sym_POUND,
  [11069] = 1,
    ACTIONS(1337), 1,
      anon_sym_POUND,
  [11073] = 1,
    ACTIONS(1339), 1,
      anon_sym_POUND,
  [11077] = 1,
    ACTIONS(1341), 1,
      anon_sym_POUND,
  [11081] = 1,
    ACTIONS(1343), 1,
      anon_sym_POUND,
  [11085] = 1,
    ACTIONS(1345), 1,
      anon_sym_POUND,
  [11089] = 1,
    ACTIONS(1347), 1,
      anon_sym_POUND,
  [11093] = 1,
    ACTIONS(845), 1,
      anon_sym_POUND,
  [11097] = 1,
    ACTIONS(806), 1,
      anon_sym_POUND,
  [11101] = 1,
    ACTIONS(1349), 1,
      anon_sym_POUND,
  [11105] = 1,
    ACTIONS(1351), 1,
      anon_sym_EQ,
  [11109] = 1,
    ACTIONS(1353), 1,
      anon_sym_DOT_DOT,
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
  [SMALL_STATE(11)] = 555,
  [SMALL_STATE(12)] = 628,
  [SMALL_STATE(13)] = 695,
  [SMALL_STATE(14)] = 768,
  [SMALL_STATE(15)] = 841,
  [SMALL_STATE(16)] = 885,
  [SMALL_STATE(17)] = 927,
  [SMALL_STATE(18)] = 971,
  [SMALL_STATE(19)] = 1013,
  [SMALL_STATE(20)] = 1050,
  [SMALL_STATE(21)] = 1088,
  [SMALL_STATE(22)] = 1146,
  [SMALL_STATE(23)] = 1186,
  [SMALL_STATE(24)] = 1226,
  [SMALL_STATE(25)] = 1261,
  [SMALL_STATE(26)] = 1296,
  [SMALL_STATE(27)] = 1331,
  [SMALL_STATE(28)] = 1384,
  [SMALL_STATE(29)] = 1437,
  [SMALL_STATE(30)] = 1471,
  [SMALL_STATE(31)] = 1504,
  [SMALL_STATE(32)] = 1543,
  [SMALL_STATE(33)] = 1576,
  [SMALL_STATE(34)] = 1627,
  [SMALL_STATE(35)] = 1666,
  [SMALL_STATE(36)] = 1737,
  [SMALL_STATE(37)] = 1776,
  [SMALL_STATE(38)] = 1827,
  [SMALL_STATE(39)] = 1866,
  [SMALL_STATE(40)] = 1905,
  [SMALL_STATE(41)] = 1950,
  [SMALL_STATE(42)] = 1995,
  [SMALL_STATE(43)] = 2040,
  [SMALL_STATE(44)] = 2085,
  [SMALL_STATE(45)] = 2119,
  [SMALL_STATE(46)] = 2165,
  [SMALL_STATE(47)] = 2195,
  [SMALL_STATE(48)] = 2237,
  [SMALL_STATE(49)] = 2271,
  [SMALL_STATE(50)] = 2305,
  [SMALL_STATE(51)] = 2335,
  [SMALL_STATE(52)] = 2369,
  [SMALL_STATE(53)] = 2398,
  [SMALL_STATE(54)] = 2449,
  [SMALL_STATE(55)] = 2500,
  [SMALL_STATE(56)] = 2547,
  [SMALL_STATE(57)] = 2574,
  [SMALL_STATE(58)] = 2614,
  [SMALL_STATE(59)] = 2654,
  [SMALL_STATE(60)] = 2692,
  [SMALL_STATE(61)] = 2723,
  [SMALL_STATE(62)] = 2752,
  [SMALL_STATE(63)] = 2803,
  [SMALL_STATE(64)] = 2832,
  [SMALL_STATE(65)] = 2869,
  [SMALL_STATE(66)] = 2900,
  [SMALL_STATE(67)] = 2939,
  [SMALL_STATE(68)] = 2968,
  [SMALL_STATE(69)] = 2997,
  [SMALL_STATE(70)] = 3026,
  [SMALL_STATE(71)] = 3055,
  [SMALL_STATE(72)] = 3092,
  [SMALL_STATE(73)] = 3121,
  [SMALL_STATE(74)] = 3158,
  [SMALL_STATE(75)] = 3192,
  [SMALL_STATE(76)] = 3218,
  [SMALL_STATE(77)] = 3246,
  [SMALL_STATE(78)] = 3276,
  [SMALL_STATE(79)] = 3312,
  [SMALL_STATE(80)] = 3340,
  [SMALL_STATE(81)] = 3368,
  [SMALL_STATE(82)] = 3394,
  [SMALL_STATE(83)] = 3442,
  [SMALL_STATE(84)] = 3470,
  [SMALL_STATE(85)] = 3504,
  [SMALL_STATE(86)] = 3542,
  [SMALL_STATE(87)] = 3568,
  [SMALL_STATE(88)] = 3595,
  [SMALL_STATE(89)] = 3624,
  [SMALL_STATE(90)] = 3653,
  [SMALL_STATE(91)] = 3682,
  [SMALL_STATE(92)] = 3705,
  [SMALL_STATE(93)] = 3742,
  [SMALL_STATE(94)] = 3769,
  [SMALL_STATE(95)] = 3806,
  [SMALL_STATE(96)] = 3833,
  [SMALL_STATE(97)] = 3868,
  [SMALL_STATE(98)] = 3891,
  [SMALL_STATE(99)] = 3914,
  [SMALL_STATE(100)] = 3941,
  [SMALL_STATE(101)] = 3969,
  [SMALL_STATE(102)] = 3995,
  [SMALL_STATE(103)] = 4019,
  [SMALL_STATE(104)] = 4045,
  [SMALL_STATE(105)] = 4069,
  [SMALL_STATE(106)] = 4097,
  [SMALL_STATE(107)] = 4121,
  [SMALL_STATE(108)] = 4143,
  [SMALL_STATE(109)] = 4171,
  [SMALL_STATE(110)] = 4199,
  [SMALL_STATE(111)] = 4226,
  [SMALL_STATE(112)] = 4269,
  [SMALL_STATE(113)] = 4294,
  [SMALL_STATE(114)] = 4317,
  [SMALL_STATE(115)] = 4360,
  [SMALL_STATE(116)] = 4387,
  [SMALL_STATE(117)] = 4418,
  [SMALL_STATE(118)] = 4439,
  [SMALL_STATE(119)] = 4470,
  [SMALL_STATE(120)] = 4509,
  [SMALL_STATE(121)] = 4536,
  [SMALL_STATE(122)] = 4563,
  [SMALL_STATE(123)] = 4590,
  [SMALL_STATE(124)] = 4615,
  [SMALL_STATE(125)] = 4640,
  [SMALL_STATE(126)] = 4665,
  [SMALL_STATE(127)] = 4690,
  [SMALL_STATE(128)] = 4729,
  [SMALL_STATE(129)] = 4756,
  [SMALL_STATE(130)] = 4783,
  [SMALL_STATE(131)] = 4808,
  [SMALL_STATE(132)] = 4835,
  [SMALL_STATE(133)] = 4856,
  [SMALL_STATE(134)] = 4877,
  [SMALL_STATE(135)] = 4916,
  [SMALL_STATE(136)] = 4939,
  [SMALL_STATE(137)] = 4966,
  [SMALL_STATE(138)] = 4993,
  [SMALL_STATE(139)] = 5020,
  [SMALL_STATE(140)] = 5045,
  [SMALL_STATE(141)] = 5070,
  [SMALL_STATE(142)] = 5095,
  [SMALL_STATE(143)] = 5122,
  [SMALL_STATE(144)] = 5148,
  [SMALL_STATE(145)] = 5172,
  [SMALL_STATE(146)] = 5196,
  [SMALL_STATE(147)] = 5220,
  [SMALL_STATE(148)] = 5244,
  [SMALL_STATE(149)] = 5270,
  [SMALL_STATE(150)] = 5318,
  [SMALL_STATE(151)] = 5342,
  [SMALL_STATE(152)] = 5366,
  [SMALL_STATE(153)] = 5390,
  [SMALL_STATE(154)] = 5414,
  [SMALL_STATE(155)] = 5440,
  [SMALL_STATE(156)] = 5464,
  [SMALL_STATE(157)] = 5486,
  [SMALL_STATE(158)] = 5510,
  [SMALL_STATE(159)] = 5534,
  [SMALL_STATE(160)] = 5560,
  [SMALL_STATE(161)] = 5580,
  [SMALL_STATE(162)] = 5604,
  [SMALL_STATE(163)] = 5626,
  [SMALL_STATE(164)] = 5650,
  [SMALL_STATE(165)] = 5676,
  [SMALL_STATE(166)] = 5696,
  [SMALL_STATE(167)] = 5720,
  [SMALL_STATE(168)] = 5744,
  [SMALL_STATE(169)] = 5766,
  [SMALL_STATE(170)] = 5789,
  [SMALL_STATE(171)] = 5808,
  [SMALL_STATE(172)] = 5827,
  [SMALL_STATE(173)] = 5848,
  [SMALL_STATE(174)] = 5869,
  [SMALL_STATE(175)] = 5888,
  [SMALL_STATE(176)] = 5911,
  [SMALL_STATE(177)] = 5930,
  [SMALL_STATE(178)] = 5949,
  [SMALL_STATE(179)] = 5972,
  [SMALL_STATE(180)] = 5991,
  [SMALL_STATE(181)] = 6010,
  [SMALL_STATE(182)] = 6029,
  [SMALL_STATE(183)] = 6048,
  [SMALL_STATE(184)] = 6067,
  [SMALL_STATE(185)] = 6090,
  [SMALL_STATE(186)] = 6115,
  [SMALL_STATE(187)] = 6134,
  [SMALL_STATE(188)] = 6153,
  [SMALL_STATE(189)] = 6178,
  [SMALL_STATE(190)] = 6199,
  [SMALL_STATE(191)] = 6222,
  [SMALL_STATE(192)] = 6245,
  [SMALL_STATE(193)] = 6268,
  [SMALL_STATE(194)] = 6291,
  [SMALL_STATE(195)] = 6314,
  [SMALL_STATE(196)] = 6337,
  [SMALL_STATE(197)] = 6360,
  [SMALL_STATE(198)] = 6383,
  [SMALL_STATE(199)] = 6406,
  [SMALL_STATE(200)] = 6431,
  [SMALL_STATE(201)] = 6452,
  [SMALL_STATE(202)] = 6475,
  [SMALL_STATE(203)] = 6498,
  [SMALL_STATE(204)] = 6521,
  [SMALL_STATE(205)] = 6540,
  [SMALL_STATE(206)] = 6559,
  [SMALL_STATE(207)] = 6578,
  [SMALL_STATE(208)] = 6596,
  [SMALL_STATE(209)] = 6618,
  [SMALL_STATE(210)] = 6636,
  [SMALL_STATE(211)] = 6656,
  [SMALL_STATE(212)] = 6676,
  [SMALL_STATE(213)] = 6698,
  [SMALL_STATE(214)] = 6718,
  [SMALL_STATE(215)] = 6740,
  [SMALL_STATE(216)] = 6758,
  [SMALL_STATE(217)] = 6778,
  [SMALL_STATE(218)] = 6800,
  [SMALL_STATE(219)] = 6822,
  [SMALL_STATE(220)] = 6844,
  [SMALL_STATE(221)] = 6868,
  [SMALL_STATE(222)] = 6890,
  [SMALL_STATE(223)] = 6912,
  [SMALL_STATE(224)] = 6934,
  [SMALL_STATE(225)] = 6956,
  [SMALL_STATE(226)] = 6978,
  [SMALL_STATE(227)] = 7000,
  [SMALL_STATE(228)] = 7020,
  [SMALL_STATE(229)] = 7042,
  [SMALL_STATE(230)] = 7060,
  [SMALL_STATE(231)] = 7078,
  [SMALL_STATE(232)] = 7100,
  [SMALL_STATE(233)] = 7120,
  [SMALL_STATE(234)] = 7140,
  [SMALL_STATE(235)] = 7162,
  [SMALL_STATE(236)] = 7182,
  [SMALL_STATE(237)] = 7200,
  [SMALL_STATE(238)] = 7222,
  [SMALL_STATE(239)] = 7244,
  [SMALL_STATE(240)] = 7266,
  [SMALL_STATE(241)] = 7298,
  [SMALL_STATE(242)] = 7320,
  [SMALL_STATE(243)] = 7342,
  [SMALL_STATE(244)] = 7364,
  [SMALL_STATE(245)] = 7386,
  [SMALL_STATE(246)] = 7408,
  [SMALL_STATE(247)] = 7428,
  [SMALL_STATE(248)] = 7450,
  [SMALL_STATE(249)] = 7469,
  [SMALL_STATE(250)] = 7488,
  [SMALL_STATE(251)] = 7517,
  [SMALL_STATE(252)] = 7534,
  [SMALL_STATE(253)] = 7551,
  [SMALL_STATE(254)] = 7580,
  [SMALL_STATE(255)] = 7599,
  [SMALL_STATE(256)] = 7618,
  [SMALL_STATE(257)] = 7635,
  [SMALL_STATE(258)] = 7652,
  [SMALL_STATE(259)] = 7681,
  [SMALL_STATE(260)] = 7700,
  [SMALL_STATE(261)] = 7717,
  [SMALL_STATE(262)] = 7738,
  [SMALL_STATE(263)] = 7757,
  [SMALL_STATE(264)] = 7774,
  [SMALL_STATE(265)] = 7791,
  [SMALL_STATE(266)] = 7808,
  [SMALL_STATE(267)] = 7825,
  [SMALL_STATE(268)] = 7842,
  [SMALL_STATE(269)] = 7863,
  [SMALL_STATE(270)] = 7880,
  [SMALL_STATE(271)] = 7899,
  [SMALL_STATE(272)] = 7917,
  [SMALL_STATE(273)] = 7933,
  [SMALL_STATE(274)] = 7959,
  [SMALL_STATE(275)] = 7985,
  [SMALL_STATE(276)] = 8001,
  [SMALL_STATE(277)] = 8027,
  [SMALL_STATE(278)] = 8053,
  [SMALL_STATE(279)] = 8069,
  [SMALL_STATE(280)] = 8095,
  [SMALL_STATE(281)] = 8121,
  [SMALL_STATE(282)] = 8147,
  [SMALL_STATE(283)] = 8163,
  [SMALL_STATE(284)] = 8189,
  [SMALL_STATE(285)] = 8215,
  [SMALL_STATE(286)] = 8231,
  [SMALL_STATE(287)] = 8257,
  [SMALL_STATE(288)] = 8273,
  [SMALL_STATE(289)] = 8289,
  [SMALL_STATE(290)] = 8305,
  [SMALL_STATE(291)] = 8331,
  [SMALL_STATE(292)] = 8347,
  [SMALL_STATE(293)] = 8373,
  [SMALL_STATE(294)] = 8399,
  [SMALL_STATE(295)] = 8425,
  [SMALL_STATE(296)] = 8441,
  [SMALL_STATE(297)] = 8467,
  [SMALL_STATE(298)] = 8493,
  [SMALL_STATE(299)] = 8509,
  [SMALL_STATE(300)] = 8535,
  [SMALL_STATE(301)] = 8551,
  [SMALL_STATE(302)] = 8577,
  [SMALL_STATE(303)] = 8593,
  [SMALL_STATE(304)] = 8609,
  [SMALL_STATE(305)] = 8635,
  [SMALL_STATE(306)] = 8651,
  [SMALL_STATE(307)] = 8677,
  [SMALL_STATE(308)] = 8703,
  [SMALL_STATE(309)] = 8719,
  [SMALL_STATE(310)] = 8745,
  [SMALL_STATE(311)] = 8763,
  [SMALL_STATE(312)] = 8779,
  [SMALL_STATE(313)] = 8805,
  [SMALL_STATE(314)] = 8831,
  [SMALL_STATE(315)] = 8847,
  [SMALL_STATE(316)] = 8873,
  [SMALL_STATE(317)] = 8889,
  [SMALL_STATE(318)] = 8915,
  [SMALL_STATE(319)] = 8931,
  [SMALL_STATE(320)] = 8947,
  [SMALL_STATE(321)] = 8963,
  [SMALL_STATE(322)] = 8979,
  [SMALL_STATE(323)] = 8995,
  [SMALL_STATE(324)] = 9011,
  [SMALL_STATE(325)] = 9027,
  [SMALL_STATE(326)] = 9053,
  [SMALL_STATE(327)] = 9069,
  [SMALL_STATE(328)] = 9085,
  [SMALL_STATE(329)] = 9101,
  [SMALL_STATE(330)] = 9117,
  [SMALL_STATE(331)] = 9143,
  [SMALL_STATE(332)] = 9159,
  [SMALL_STATE(333)] = 9175,
  [SMALL_STATE(334)] = 9190,
  [SMALL_STATE(335)] = 9219,
  [SMALL_STATE(336)] = 9242,
  [SMALL_STATE(337)] = 9265,
  [SMALL_STATE(338)] = 9284,
  [SMALL_STATE(339)] = 9300,
  [SMALL_STATE(340)] = 9316,
  [SMALL_STATE(341)] = 9331,
  [SMALL_STATE(342)] = 9353,
  [SMALL_STATE(343)] = 9363,
  [SMALL_STATE(344)] = 9385,
  [SMALL_STATE(345)] = 9407,
  [SMALL_STATE(346)] = 9429,
  [SMALL_STATE(347)] = 9448,
  [SMALL_STATE(348)] = 9461,
  [SMALL_STATE(349)] = 9474,
  [SMALL_STATE(350)] = 9487,
  [SMALL_STATE(351)] = 9500,
  [SMALL_STATE(352)] = 9516,
  [SMALL_STATE(353)] = 9528,
  [SMALL_STATE(354)] = 9544,
  [SMALL_STATE(355)] = 9556,
  [SMALL_STATE(356)] = 9572,
  [SMALL_STATE(357)] = 9588,
  [SMALL_STATE(358)] = 9600,
  [SMALL_STATE(359)] = 9614,
  [SMALL_STATE(360)] = 9630,
  [SMALL_STATE(361)] = 9642,
  [SMALL_STATE(362)] = 9656,
  [SMALL_STATE(363)] = 9668,
  [SMALL_STATE(364)] = 9684,
  [SMALL_STATE(365)] = 9696,
  [SMALL_STATE(366)] = 9712,
  [SMALL_STATE(367)] = 9723,
  [SMALL_STATE(368)] = 9736,
  [SMALL_STATE(369)] = 9747,
  [SMALL_STATE(370)] = 9758,
  [SMALL_STATE(371)] = 9769,
  [SMALL_STATE(372)] = 9780,
  [SMALL_STATE(373)] = 9791,
  [SMALL_STATE(374)] = 9802,
  [SMALL_STATE(375)] = 9815,
  [SMALL_STATE(376)] = 9828,
  [SMALL_STATE(377)] = 9839,
  [SMALL_STATE(378)] = 9850,
  [SMALL_STATE(379)] = 9863,
  [SMALL_STATE(380)] = 9876,
  [SMALL_STATE(381)] = 9887,
  [SMALL_STATE(382)] = 9898,
  [SMALL_STATE(383)] = 9909,
  [SMALL_STATE(384)] = 9922,
  [SMALL_STATE(385)] = 9935,
  [SMALL_STATE(386)] = 9948,
  [SMALL_STATE(387)] = 9959,
  [SMALL_STATE(388)] = 9970,
  [SMALL_STATE(389)] = 9981,
  [SMALL_STATE(390)] = 9992,
  [SMALL_STATE(391)] = 10005,
  [SMALL_STATE(392)] = 10018,
  [SMALL_STATE(393)] = 10029,
  [SMALL_STATE(394)] = 10040,
  [SMALL_STATE(395)] = 10051,
  [SMALL_STATE(396)] = 10058,
  [SMALL_STATE(397)] = 10069,
  [SMALL_STATE(398)] = 10079,
  [SMALL_STATE(399)] = 10089,
  [SMALL_STATE(400)] = 10099,
  [SMALL_STATE(401)] = 10109,
  [SMALL_STATE(402)] = 10119,
  [SMALL_STATE(403)] = 10129,
  [SMALL_STATE(404)] = 10139,
  [SMALL_STATE(405)] = 10149,
  [SMALL_STATE(406)] = 10159,
  [SMALL_STATE(407)] = 10169,
  [SMALL_STATE(408)] = 10179,
  [SMALL_STATE(409)] = 10189,
  [SMALL_STATE(410)] = 10199,
  [SMALL_STATE(411)] = 10209,
  [SMALL_STATE(412)] = 10219,
  [SMALL_STATE(413)] = 10229,
  [SMALL_STATE(414)] = 10239,
  [SMALL_STATE(415)] = 10249,
  [SMALL_STATE(416)] = 10259,
  [SMALL_STATE(417)] = 10269,
  [SMALL_STATE(418)] = 10279,
  [SMALL_STATE(419)] = 10289,
  [SMALL_STATE(420)] = 10299,
  [SMALL_STATE(421)] = 10309,
  [SMALL_STATE(422)] = 10317,
  [SMALL_STATE(423)] = 10327,
  [SMALL_STATE(424)] = 10337,
  [SMALL_STATE(425)] = 10347,
  [SMALL_STATE(426)] = 10357,
  [SMALL_STATE(427)] = 10367,
  [SMALL_STATE(428)] = 10377,
  [SMALL_STATE(429)] = 10385,
  [SMALL_STATE(430)] = 10395,
  [SMALL_STATE(431)] = 10405,
  [SMALL_STATE(432)] = 10415,
  [SMALL_STATE(433)] = 10425,
  [SMALL_STATE(434)] = 10435,
  [SMALL_STATE(435)] = 10445,
  [SMALL_STATE(436)] = 10455,
  [SMALL_STATE(437)] = 10465,
  [SMALL_STATE(438)] = 10475,
  [SMALL_STATE(439)] = 10485,
  [SMALL_STATE(440)] = 10495,
  [SMALL_STATE(441)] = 10505,
  [SMALL_STATE(442)] = 10515,
  [SMALL_STATE(443)] = 10525,
  [SMALL_STATE(444)] = 10535,
  [SMALL_STATE(445)] = 10545,
  [SMALL_STATE(446)] = 10555,
  [SMALL_STATE(447)] = 10565,
  [SMALL_STATE(448)] = 10575,
  [SMALL_STATE(449)] = 10585,
  [SMALL_STATE(450)] = 10595,
  [SMALL_STATE(451)] = 10605,
  [SMALL_STATE(452)] = 10615,
  [SMALL_STATE(453)] = 10625,
  [SMALL_STATE(454)] = 10635,
  [SMALL_STATE(455)] = 10645,
  [SMALL_STATE(456)] = 10655,
  [SMALL_STATE(457)] = 10665,
  [SMALL_STATE(458)] = 10675,
  [SMALL_STATE(459)] = 10685,
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
  [SMALL_STATE(470)] = 10792,
  [SMALL_STATE(471)] = 10797,
  [SMALL_STATE(472)] = 10804,
  [SMALL_STATE(473)] = 10811,
  [SMALL_STATE(474)] = 10818,
  [SMALL_STATE(475)] = 10825,
  [SMALL_STATE(476)] = 10832,
  [SMALL_STATE(477)] = 10839,
  [SMALL_STATE(478)] = 10846,
  [SMALL_STATE(479)] = 10853,
  [SMALL_STATE(480)] = 10860,
  [SMALL_STATE(481)] = 10867,
  [SMALL_STATE(482)] = 10874,
  [SMALL_STATE(483)] = 10879,
  [SMALL_STATE(484)] = 10886,
  [SMALL_STATE(485)] = 10893,
  [SMALL_STATE(486)] = 10897,
  [SMALL_STATE(487)] = 10901,
  [SMALL_STATE(488)] = 10905,
  [SMALL_STATE(489)] = 10909,
  [SMALL_STATE(490)] = 10913,
  [SMALL_STATE(491)] = 10917,
  [SMALL_STATE(492)] = 10921,
  [SMALL_STATE(493)] = 10925,
  [SMALL_STATE(494)] = 10929,
  [SMALL_STATE(495)] = 10933,
  [SMALL_STATE(496)] = 10937,
  [SMALL_STATE(497)] = 10941,
  [SMALL_STATE(498)] = 10945,
  [SMALL_STATE(499)] = 10949,
  [SMALL_STATE(500)] = 10953,
  [SMALL_STATE(501)] = 10957,
  [SMALL_STATE(502)] = 10961,
  [SMALL_STATE(503)] = 10965,
  [SMALL_STATE(504)] = 10969,
  [SMALL_STATE(505)] = 10973,
  [SMALL_STATE(506)] = 10977,
  [SMALL_STATE(507)] = 10981,
  [SMALL_STATE(508)] = 10985,
  [SMALL_STATE(509)] = 10989,
  [SMALL_STATE(510)] = 10993,
  [SMALL_STATE(511)] = 10997,
  [SMALL_STATE(512)] = 11001,
  [SMALL_STATE(513)] = 11005,
  [SMALL_STATE(514)] = 11009,
  [SMALL_STATE(515)] = 11013,
  [SMALL_STATE(516)] = 11017,
  [SMALL_STATE(517)] = 11021,
  [SMALL_STATE(518)] = 11025,
  [SMALL_STATE(519)] = 11029,
  [SMALL_STATE(520)] = 11033,
  [SMALL_STATE(521)] = 11037,
  [SMALL_STATE(522)] = 11041,
  [SMALL_STATE(523)] = 11045,
  [SMALL_STATE(524)] = 11049,
  [SMALL_STATE(525)] = 11053,
  [SMALL_STATE(526)] = 11057,
  [SMALL_STATE(527)] = 11061,
  [SMALL_STATE(528)] = 11065,
  [SMALL_STATE(529)] = 11069,
  [SMALL_STATE(530)] = 11073,
  [SMALL_STATE(531)] = 11077,
  [SMALL_STATE(532)] = 11081,
  [SMALL_STATE(533)] = 11085,
  [SMALL_STATE(534)] = 11089,
  [SMALL_STATE(535)] = 11093,
  [SMALL_STATE(536)] = 11097,
  [SMALL_STATE(537)] = 11101,
  [SMALL_STATE(538)] = 11105,
  [SMALL_STATE(539)] = 11109,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_rule, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 4, .production_id = 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_set_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_set_repeat1, 2), SHIFT_REPEAT(35),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(18),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_name, 1), REDUCE(sym_path, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(23),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3, .production_id = 4),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3, .production_id = 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 2, .production_id = 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 2, .production_id = 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 4),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance, 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_logical_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_logical_repeat1, 2), SHIFT_REPEAT(111),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 5),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 4),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 4),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 5),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_definition, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(501),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(525),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(494),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(495),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(488),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat2, 2),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat2, 2), SHIFT_REPEAT(114),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 5),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(496),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(519),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(522),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(523),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(508),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(509),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(524),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(498),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(504),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(503),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(516),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concept, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_code_string, 1), REDUCE(aux_sym_code_insert_rule_repeat1, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_insert_rule_repeat1, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_string, 1),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 1),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 1), SHIFT(368),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instance_repeat1, 2),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(501),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(492),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(488),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(493),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(501),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(512),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(487),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(488),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(65),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invariant, 4),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(65),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_name, 1), REDUCE(sym_value, 1),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ratio_part, 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 1),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2), SHIFT_REPEAT(98),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 5),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2), SHIFT_REPEAT(446),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2), SHIFT_REPEAT(415),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 2),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(501),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(489),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(490),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(491),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(501),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(517),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(488),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_rule, 3),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_rule, 4),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_rule, 3),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title, 3),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_rule, 4),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(501),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(517),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(488),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [477] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(87),
  [480] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(90),
  [483] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(90),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 3),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [492] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(93),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 4),
  [497] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(93),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 3),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 1),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [506] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(100),
  [509] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(101),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_operator, 1),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vs_filter_operator, 1),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [522] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(108),
  [525] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(100),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 5),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [534] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(112),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 5),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_metadata, 1),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 5),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instance_repeat2, 2),
  [549] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat2, 2), SHIFT_REPEAT(346),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [556] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(126),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 5),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_valueset_repeat2, 2),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat2, 2), SHIFT_REPEAT(149),
  [566] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(130),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat2, 2),
  [575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat2, 2), SHIFT_REPEAT(343),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_repeat2, 2),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat2, 2), SHIFT_REPEAT(344),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [587] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(141),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 5),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_cre_element_rule, 6),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [596] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(145),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [601] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(147),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 7),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [616] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(151),
  [619] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(152),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 6),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_metadata, 1),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance_metadata, 1),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [634] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(158),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concept, 3),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parent, 3),
  [641] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(161),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_of, 3),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance_of, 3),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 5),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sd_metadata, 1),
  [654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(166),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usage, 3),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usage, 3),
  [663] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(169),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 4),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_valueset, 2),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_valueset, 3),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 3),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2),
  [678] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2), SHIFT_REPEAT(283),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 4),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 5),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_severity, 3),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath, 3),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 5),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 6),
  [697] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(184),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 1),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 7),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_string, 2),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [714] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(190),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [719] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(192),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [724] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(194),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [729] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(196),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invariant_metadata, 1),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_metadata, 1),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cs_metadata, 1),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2),
  [752] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2), SHIFT_REPEAT(119),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 3),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 1),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component_from, 2),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [767] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(214),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_system, 2),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_only_rule, 5),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_list, 1),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2),
  [782] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2), SHIFT_REPEAT(310),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 5),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contains_rule_repeat1, 2),
  [789] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contains_rule_repeat1, 2), SHIFT_REPEAT(258),
  [792] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2), SHIFT_REPEAT(301),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_rule, 4),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [799] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(225),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_rule, 4),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 4),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_type, 1),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_type, 1, .production_id = 5),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_only_rule, 4),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 3),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vs_filter_list_repeat1, 2),
  [832] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vs_filter_list_repeat1, 2), SHIFT_REPEAT(250),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag, 1),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_list, 2),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_rule, 5),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_value_rule, 4),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component_from, 4),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_value, 1),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_component, 2),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 3),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ratio, 3),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 3),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_definition, 3),
  [871] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(268),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 5, .production_id = 2),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lr_rule, 1),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_insert_rule, 2),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_rule, 5),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_value_rule, 5),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_component, 4),
  [902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_caret_value_rule, 5),
  [906] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_code_insert_rule, 2), REDUCE(sym_insert_rule, 2),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component, 3),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sd_rule, 1),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_rule, 2),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_rule, 1),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_rule, 1),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cs_rule, 1),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_value_rule, 4),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_entity_rule, 1),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 6),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_rule, 3),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component, 2),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 2),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_cre_element_rule, 7),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 3),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_insert_rule, 3),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 8),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_value_rule, 7),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strength, 3),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concept, 4),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set_rule, 1),
  [961] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(338),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [966] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_rule_repeat1, 2), SHIFT_REPEAT(359),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_rule_repeat1, 2),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [979] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2), SHIFT_REPEAT(466),
  [982] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2), SHIFT_REPEAT(415),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [989] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(348),
  [992] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(349),
  [995] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [999] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [1001] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(352),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [1018] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(358),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [1023] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(360),
  [1026] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [1028] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(362),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1033] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1037] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1045] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1049] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [1051] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(370),
  [1054] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(371),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [1059] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [1061] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(373),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1076] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(379),
  [1079] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [1081] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(381),
  [1084] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1094] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(386),
  [1097] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [1103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(393),
  [1118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2),
  [1126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(397),
  [1129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(398),
  [1132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(399),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(401),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 2),
  [1176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 2), SHIFT_REPEAT(438),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reference_repeat1, 2),
  [1185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reference_repeat1, 2), SHIFT_REPEAT(441),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(401),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(450),
  [1214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2), SHIFT_REPEAT(134),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 4),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2),
  [1245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1311] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_path, 2),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
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
