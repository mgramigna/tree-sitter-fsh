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
#define STATE_COUNT 488
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 176
#define ALIAS_COUNT 4
#define TOKEN_COUNT 73
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 5

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
  anon_sym_Description = 13,
  anon_sym_Expression = 14,
  anon_sym_Id = 15,
  anon_sym_InstanceOf = 16,
  anon_sym_Parent = 17,
  anon_sym_Severity = 18,
  anon_sym_Source = 19,
  anon_sym_Target = 20,
  anon_sym_Title = 21,
  anon_sym_Usage = 22,
  anon_sym_XPath = 23,
  anon_sym_STAR = 24,
  anon_sym_from = 25,
  anon_sym_LPAREN = 26,
  anon_sym_exactly = 27,
  anon_sym_RPAREN = 28,
  anon_sym_contains = 29,
  anon_sym_and = 30,
  anon_sym_obeys = 31,
  anon_sym_only = 32,
  anon_sym_or = 33,
  anon_sym_DASH_GT = 34,
  anon_sym_include = 35,
  anon_sym_exclude = 36,
  anon_sym_codes = 37,
  anon_sym_where = 38,
  anon_sym_system = 39,
  anon_sym_valueset = 40,
  anon_sym_true = 41,
  anon_sym_false = 42,
  anon_sym_POUND = 43,
  aux_sym_sequence_token1 = 44,
  anon_sym_CARET = 45,
  aux_sym_cardinality_token1 = 46,
  anon_sym_DOT_DOT = 47,
  anon_sym_STAR2 = 48,
  anon_sym_DQUOTE = 49,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 50,
  sym_double_quote_string_fragment = 51,
  sym_escape_sequence = 52,
  sym_number = 53,
  sym_date = 54,
  sym_time = 55,
  anon_sym_T = 56,
  anon_sym_SQUOTE = 57,
  aux_sym_unit_token1 = 58,
  anon_sym_example = 59,
  anon_sym_preferred = 60,
  anon_sym_extensible = 61,
  anon_sym_required = 62,
  anon_sym_Reference = 63,
  anon_sym_Canonical = 64,
  anon_sym_PIPE = 65,
  anon_sym_named = 66,
  anon_sym_QMARK_BANG = 67,
  anon_sym_MS = 68,
  anon_sym_SU = 69,
  anon_sym_TU = 70,
  anon_sym_N = 71,
  anon_sym_D = 72,
  sym_doc = 73,
  sym_alias = 74,
  sym_profile = 75,
  sym_extension = 76,
  sym_invariant = 77,
  sym_instance = 78,
  sym_valueset = 79,
  sym_codesystem = 80,
  sym_mapping = 81,
  sym_logical = 82,
  sym_resource = 83,
  sym_sd_metadata = 84,
  sym_instance_metadata = 85,
  sym_invariant_metadata = 86,
  sym_vs_metadata = 87,
  sym_cs_metadata = 88,
  sym_mapping_metadata = 89,
  sym_description = 90,
  sym_expression = 91,
  sym_id = 92,
  sym_instance_of = 93,
  sym_parent = 94,
  sym_severity = 95,
  sym_source = 96,
  sym_target = 97,
  sym_title = 98,
  sym_usage = 99,
  sym_xpath = 100,
  sym_sd_rule = 101,
  sym_lr_rule = 102,
  sym_vs_rule = 103,
  sym_cs_rule = 104,
  sym_instance_rule = 105,
  sym_mapping_entity_rule = 106,
  sym_cardinality_rule = 107,
  sym_valueset_rule = 108,
  sym_fixed_value_rule = 109,
  sym_contains_rule = 110,
  sym_caret_value_rule = 111,
  sym_code_caret_value_rule = 112,
  sym_obeys_rule = 113,
  sym_path_rule = 114,
  sym_flag_rule = 115,
  sym_only_rule = 116,
  sym_mapping_rule = 117,
  sym_add_element_rule = 118,
  sym_vs_component = 119,
  sym_vs_concept_component = 120,
  sym_vs_filter_component = 121,
  sym_vs_component_from = 122,
  sym_vs_from_system = 123,
  sym_vs_from_valueset = 124,
  sym_vs_filter_list = 125,
  sym_vs_filter_definition = 126,
  sym_vs_filter_operator = 127,
  sym_vs_filter_value = 128,
  sym_code = 129,
  sym_code_string = 130,
  sym_sequence = 131,
  sym_caret_path = 132,
  sym_name = 133,
  sym_cardinality = 134,
  sym_string = 135,
  sym_multiline_string = 136,
  sym_datetime = 137,
  sym_unit = 138,
  sym_quantity = 139,
  sym_ratio_part = 140,
  sym_ratio = 141,
  sym_bool = 142,
  sym_path = 143,
  sym_strength = 144,
  sym_reference = 145,
  sym_canonical = 146,
  sym_value = 147,
  sym_item = 148,
  sym_flag = 149,
  sym_target_type = 150,
  aux_sym_doc_repeat1 = 151,
  aux_sym_profile_repeat1 = 152,
  aux_sym_profile_repeat2 = 153,
  aux_sym_invariant_repeat1 = 154,
  aux_sym_instance_repeat1 = 155,
  aux_sym_instance_repeat2 = 156,
  aux_sym_valueset_repeat1 = 157,
  aux_sym_valueset_repeat2 = 158,
  aux_sym_codesystem_repeat1 = 159,
  aux_sym_codesystem_repeat2 = 160,
  aux_sym_mapping_repeat1 = 161,
  aux_sym_mapping_repeat2 = 162,
  aux_sym_logical_repeat1 = 163,
  aux_sym_cardinality_rule_repeat1 = 164,
  aux_sym_contains_rule_repeat1 = 165,
  aux_sym_obeys_rule_repeat1 = 166,
  aux_sym_flag_rule_repeat1 = 167,
  aux_sym_only_rule_repeat1 = 168,
  aux_sym_vs_concept_component_repeat1 = 169,
  aux_sym_vs_filter_list_repeat1 = 170,
  aux_sym_sequence_repeat1 = 171,
  aux_sym_string_repeat1 = 172,
  aux_sym_unit_repeat1 = 173,
  aux_sym_reference_repeat1 = 174,
  aux_sym_canonical_repeat1 = 175,
  alias_sym_alias_name = 176,
  alias_sym_code_system = 177,
  alias_sym_code_value = 178,
  alias_sym_reference_type = 179,
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
  [anon_sym_MS] = "MS",
  [anon_sym_SU] = "SU",
  [anon_sym_TU] = "TU",
  [anon_sym_N] = "N",
  [anon_sym_D] = "D",
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
  [sym_sd_rule] = "sd_rule",
  [sym_lr_rule] = "lr_rule",
  [sym_vs_rule] = "vs_rule",
  [sym_cs_rule] = "cs_rule",
  [sym_instance_rule] = "instance_rule",
  [sym_mapping_entity_rule] = "mapping_entity_rule",
  [sym_cardinality_rule] = "cardinality_rule",
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
  [aux_sym_cardinality_rule_repeat1] = "cardinality_rule_repeat1",
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
  [anon_sym_MS] = anon_sym_MS,
  [anon_sym_SU] = anon_sym_SU,
  [anon_sym_TU] = anon_sym_TU,
  [anon_sym_N] = anon_sym_N,
  [anon_sym_D] = anon_sym_D,
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
  [sym_sd_rule] = sym_sd_rule,
  [sym_lr_rule] = sym_lr_rule,
  [sym_vs_rule] = sym_vs_rule,
  [sym_cs_rule] = sym_cs_rule,
  [sym_instance_rule] = sym_instance_rule,
  [sym_mapping_entity_rule] = sym_mapping_entity_rule,
  [sym_cardinality_rule] = sym_cardinality_rule,
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
  [aux_sym_cardinality_rule_repeat1] = aux_sym_cardinality_rule_repeat1,
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
  [aux_sym_cardinality_rule_repeat1] = {
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
  [4] = {
    [0] = alias_sym_reference_type,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_sequence, 4,
    sym_sequence,
    alias_sym_alias_name,
    alias_sym_code_system,
    alias_sym_code_value,
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
  [22] = 21,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
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
  [61] = 54,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 11,
  [71] = 71,
  [72] = 72,
  [73] = 14,
  [74] = 74,
  [75] = 11,
  [76] = 14,
  [77] = 77,
  [78] = 78,
  [79] = 64,
  [80] = 14,
  [81] = 11,
  [82] = 82,
  [83] = 83,
  [84] = 11,
  [85] = 14,
  [86] = 14,
  [87] = 87,
  [88] = 11,
  [89] = 14,
  [90] = 11,
  [91] = 91,
  [92] = 92,
  [93] = 14,
  [94] = 94,
  [95] = 11,
  [96] = 96,
  [97] = 11,
  [98] = 14,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 11,
  [106] = 14,
  [107] = 107,
  [108] = 108,
  [109] = 11,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 11,
  [114] = 114,
  [115] = 14,
  [116] = 14,
  [117] = 11,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 11,
  [124] = 124,
  [125] = 14,
  [126] = 126,
  [127] = 127,
  [128] = 14,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 11,
  [137] = 137,
  [138] = 138,
  [139] = 14,
  [140] = 11,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 14,
  [145] = 11,
  [146] = 11,
  [147] = 14,
  [148] = 148,
  [149] = 14,
  [150] = 14,
  [151] = 11,
  [152] = 12,
  [153] = 153,
  [154] = 14,
  [155] = 11,
  [156] = 11,
  [157] = 157,
  [158] = 11,
  [159] = 142,
  [160] = 14,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 162,
  [169] = 14,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 13,
  [174] = 174,
  [175] = 175,
  [176] = 162,
  [177] = 177,
  [178] = 178,
  [179] = 11,
  [180] = 138,
  [181] = 181,
  [182] = 14,
  [183] = 183,
  [184] = 184,
  [185] = 13,
  [186] = 12,
  [187] = 14,
  [188] = 188,
  [189] = 11,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 142,
  [203] = 162,
  [204] = 204,
  [205] = 142,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 14,
  [211] = 211,
  [212] = 212,
  [213] = 195,
  [214] = 214,
  [215] = 215,
  [216] = 197,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 207,
  [224] = 11,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 52,
  [255] = 255,
  [256] = 56,
  [257] = 55,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 71,
  [263] = 263,
  [264] = 11,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 14,
  [269] = 78,
  [270] = 266,
  [271] = 77,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 14,
  [278] = 278,
  [279] = 11,
  [280] = 14,
  [281] = 11,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 14,
  [288] = 11,
  [289] = 289,
  [290] = 14,
  [291] = 291,
  [292] = 292,
  [293] = 11,
  [294] = 294,
  [295] = 295,
  [296] = 11,
  [297] = 297,
  [298] = 14,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 300,
  [305] = 305,
  [306] = 300,
  [307] = 307,
  [308] = 302,
  [309] = 302,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 311,
  [314] = 314,
  [315] = 299,
  [316] = 300,
  [317] = 302,
  [318] = 318,
  [319] = 312,
  [320] = 311,
  [321] = 299,
  [322] = 322,
  [323] = 14,
  [324] = 11,
  [325] = 325,
  [326] = 326,
  [327] = 14,
  [328] = 11,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 14,
  [334] = 11,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 11,
  [340] = 14,
  [341] = 341,
  [342] = 338,
  [343] = 343,
  [344] = 318,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 312,
  [352] = 352,
  [353] = 11,
  [354] = 305,
  [355] = 14,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 357,
  [362] = 14,
  [363] = 11,
  [364] = 364,
  [365] = 364,
  [366] = 357,
  [367] = 367,
  [368] = 368,
  [369] = 364,
  [370] = 357,
  [371] = 364,
  [372] = 14,
  [373] = 11,
  [374] = 357,
  [375] = 364,
  [376] = 376,
  [377] = 357,
  [378] = 364,
  [379] = 357,
  [380] = 364,
  [381] = 381,
  [382] = 357,
  [383] = 364,
  [384] = 357,
  [385] = 364,
  [386] = 11,
  [387] = 357,
  [388] = 388,
  [389] = 364,
  [390] = 390,
  [391] = 357,
  [392] = 364,
  [393] = 393,
  [394] = 14,
  [395] = 357,
  [396] = 364,
  [397] = 397,
  [398] = 14,
  [399] = 357,
  [400] = 400,
  [401] = 401,
  [402] = 357,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 364,
  [408] = 200,
  [409] = 367,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 364,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 419,
  [422] = 420,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 10,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 444,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 435,
  [467] = 462,
  [468] = 468,
  [469] = 469,
  [470] = 441,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 435,
  [475] = 462,
  [476] = 462,
  [477] = 462,
  [478] = 462,
  [479] = 462,
  [480] = 462,
  [481] = 462,
  [482] = 462,
  [483] = 462,
  [484] = 462,
  [485] = 462,
  [486] = 486,
  [487] = 487,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(325);
      if (lookahead == '"') ADVANCE(432);
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == '\'') ADVANCE(453);
      if (lookahead == '(') ADVANCE(352);
      if (lookahead == ')') ADVANCE(354);
      if (lookahead == '*') ADVANCE(430);
      if (lookahead == '-') ADVANCE(374);
      if (lookahead == '.') ADVANCE(372);
      if (lookahead == ':') ADVANCE(327);
      if (lookahead == '=') ADVANCE(328);
      if (lookahead == '?') ADVANCE(371);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'C') ADVANCE(382);
      if (lookahead == 'D') ADVANCE(469);
      if (lookahead == 'E') ADVANCE(420);
      if (lookahead == 'I') ADVANCE(395);
      if (lookahead == 'L') ADVANCE(410);
      if (lookahead == 'M') ADVANCE(377);
      if (lookahead == 'N') ADVANCE(468);
      if (lookahead == 'P') ADVANCE(385);
      if (lookahead == 'R') ADVANCE(397);
      if (lookahead == 'S') ADVANCE(379);
      if (lookahead == 'T') ADVANCE(452);
      if (lookahead == 'U') ADVANCE(419);
      if (lookahead == 'V') ADVANCE(386);
      if (lookahead == 'X') ADVANCE(375);
      if (lookahead == '^') ADVANCE(427);
      if (lookahead == 'a') ADVANCE(406);
      if (lookahead == 'c') ADVANCE(412);
      if (lookahead == 'e') ADVANCE(421);
      if (lookahead == 'f') ADVANCE(390);
      if (lookahead == 'i') ADVANCE(407);
      if (lookahead == 'n') ADVANCE(387);
      if (lookahead == 'o') ADVANCE(393);
      if (lookahead == 's') ADVANCE(424);
      if (lookahead == 't') ADVANCE(418);
      if (lookahead == 'w') ADVANCE(402);
      if (lookahead == '|') ADVANCE(462);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(464);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(432);
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == 'C') ADVANCE(381);
      if (lookahead == 'R') ADVANCE(399);
      if (lookahead == 'f') ADVANCE(389);
      if (lookahead == 't') ADVANCE(418);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(426);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(433);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(431);
      if (lookahead == '\\') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(434);
      if (lookahead != 0) ADVANCE(435);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(431);
      if (lookahead == 'a') ADVANCE(406);
      if (lookahead == 'f') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(431);
      if (lookahead == 'a') ADVANCE(406);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(431);
      if (lookahead == 'o') ADVANCE(416);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(434);
      if (lookahead != 0) ADVANCE(435);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == '^') ADVANCE(427);
      if (lookahead == 'c') ADVANCE(414);
      if (lookahead == 'e') ADVANCE(421);
      if (lookahead == 'i') ADVANCE(407);
      if (lookahead == 's') ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == '^') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == 'c') ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 15:
      if (lookahead == ')') ADVANCE(354);
      if (lookahead == 'o') ADVANCE(416);
      if (lookahead == '|') ADVANCE(462);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 16:
      if (lookahead == ')') ADVANCE(354);
      if (lookahead == 'o') ADVANCE(416);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(430);
      if (lookahead == '?') ADVANCE(371);
      if (lookahead == 'C') ADVANCE(381);
      if (lookahead == 'D') ADVANCE(469);
      if (lookahead == 'M') ADVANCE(376);
      if (lookahead == 'N') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(399);
      if (lookahead == 'S') ADVANCE(378);
      if (lookahead == 'T') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(374);
      if (lookahead == 's') ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(372);
      if (lookahead == 'n') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(429);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(282);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(360);
      END_STATE();
    case 25:
      if (lookahead == '?') ADVANCE(371);
      if (lookahead == 'C') ADVANCE(381);
      if (lookahead == 'D') ADVANCE(469);
      if (lookahead == 'M') ADVANCE(376);
      if (lookahead == 'N') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(399);
      if (lookahead == 'S') ADVANCE(378);
      if (lookahead == 'T') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 26:
      if (lookahead == '?') ADVANCE(371);
      if (lookahead == 'D') ADVANCE(469);
      if (lookahead == 'M') ADVANCE(376);
      if (lookahead == 'N') ADVANCE(468);
      if (lookahead == 'S') ADVANCE(378);
      if (lookahead == 'T') ADVANCE(380);
      if (lookahead == 'a') ADVANCE(406);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 27:
      if (lookahead == 'C') ADVANCE(381);
      if (lookahead == 'R') ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 28:
      if (lookahead == 'D') ADVANCE(400);
      if (lookahead == 'E') ADVANCE(422);
      if (lookahead == 'S') ADVANCE(398);
      if (lookahead == 'X') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 29:
      if (lookahead == 'D') ADVANCE(400);
      if (lookahead == 'I') ADVANCE(394);
      if (lookahead == 'P') ADVANCE(384);
      if (lookahead == 'T') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 30:
      if (lookahead == 'P') ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == 'S') ADVANCE(465);
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 32:
      if (lookahead == 'S') ADVANCE(266);
      END_STATE();
    case 33:
      if (lookahead == 'S') ADVANCE(110);
      END_STATE();
    case 34:
      if (lookahead == 'U') ADVANCE(466);
      END_STATE();
    case 35:
      if (lookahead == 'U') ADVANCE(467);
      END_STATE();
    case 36:
      if (lookahead == '^') ADVANCE(427);
      if (lookahead == 'o') ADVANCE(391);
      if (lookahead == 's') ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 37:
      if (lookahead == '^') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'i') ADVANCE(238);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(232);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 55:
      if (lookahead == 'b') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(155);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(204);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(243);
      if (lookahead == 'm') ADVANCE(195);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(150);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(158);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(341);
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(356);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(463);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(459);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(457);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == 'n') ADVANCE(242);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(456);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 120:
      if (lookahead == 'f') ADVANCE(342);
      END_STATE();
    case 121:
      if (lookahead == 'f') ADVANCE(141);
      END_STATE();
    case 122:
      if (lookahead == 'f') ADVANCE(111);
      END_STATE();
    case 123:
      if (lookahead == 'f') ADVANCE(118);
      END_STATE();
    case 124:
      if (lookahead == 'f') ADVANCE(118);
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 125:
      if (lookahead == 'g') ADVANCE(336);
      END_STATE();
    case 126:
      if (lookahead == 'g') ADVANCE(132);
      END_STATE();
    case 127:
      if (lookahead == 'g') ADVANCE(108);
      END_STATE();
    case 128:
      if (lookahead == 'g') ADVANCE(83);
      END_STATE();
    case 129:
      if (lookahead == 'h') ADVANCE(349);
      END_STATE();
    case 130:
      if (lookahead == 'h') ADVANCE(116);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(337);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(461);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(262);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(264);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(252);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(253);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(255);
      END_STATE();
    case 159:
      if (lookahead == 'm') ADVANCE(351);
      END_STATE();
    case 160:
      if (lookahead == 'm') ADVANCE(365);
      END_STATE();
    case 161:
      if (lookahead == 'm') ADVANCE(335);
      END_STATE();
    case 162:
      if (lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(330);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(340);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(339);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(242);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 190:
      if (lookahead == 'p') ADVANCE(191);
      END_STATE();
    case 191:
      if (lookahead == 'p') ADVANCE(136);
      END_STATE();
    case 192:
      if (lookahead == 'p') ADVANCE(246);
      END_STATE();
    case 193:
      if (lookahead == 'p') ADVANCE(205);
      END_STATE();
    case 194:
      if (lookahead == 'p') ADVANCE(205);
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 195:
      if (lookahead == 'p') ADVANCE(154);
      END_STATE();
    case 196:
      if (lookahead == 'q') ADVANCE(250);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(359);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(214)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(326);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(363);
      END_STATE();
    case 218:
      if (lookahead == 's') ADVANCE(357);
      END_STATE();
    case 219:
      if (lookahead == 's') ADVANCE(355);
      END_STATE();
    case 220:
      if (lookahead == 's') ADVANCE(241);
      if (lookahead == 'v') ADVANCE(46);
      END_STATE();
    case 221:
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 222:
      if (lookahead == 's') ADVANCE(244);
      END_STATE();
    case 223:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 224:
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 225:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 226:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 227:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 228:
      if (lookahead == 's') ADVANCE(245);
      END_STATE();
    case 229:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 230:
      if (lookahead == 's') ADVANCE(229);
      END_STATE();
    case 231:
      if (lookahead == 's') ADVANCE(247);
      if (lookahead == 'v') ADVANCE(46);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(343);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(346);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(366);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 248:
      if (lookahead == 'u') ADVANCE(267);
      if (lookahead == 'x') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(438);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 249:
      if (lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 250:
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 251:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 252:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 253:
      if (lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 254:
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 255:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 256:
      if (lookahead == 'u') ADVANCE(212);
      END_STATE();
    case 257:
      if (lookahead == 'v') ADVANCE(107);
      END_STATE();
    case 258:
      if (lookahead == 'x') ADVANCE(194);
      END_STATE();
    case 259:
      if (lookahead == 'x') ADVANCE(42);
      END_STATE();
    case 260:
      if (lookahead == 'x') ADVANCE(239);
      END_STATE();
    case 261:
      if (lookahead == 'y') ADVANCE(222);
      END_STATE();
    case 262:
      if (lookahead == 'y') ADVANCE(358);
      END_STATE();
    case 263:
      if (lookahead == 'y') ADVANCE(344);
      END_STATE();
    case 264:
      if (lookahead == 'y') ADVANCE(353);
      END_STATE();
    case 265:
      if (lookahead == 'y') ADVANCE(218);
      END_STATE();
    case 266:
      if (lookahead == 'y') ADVANCE(228);
      END_STATE();
    case 267:
      if (lookahead == '{') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(286);
      END_STATE();
    case 268:
      if (lookahead == '}') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      END_STATE();
    case 269:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(269)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 270:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(440);
      END_STATE();
    case 271:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      END_STATE();
    case 272:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      END_STATE();
    case 273:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 274:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      END_STATE();
    case 275:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(445);
      END_STATE();
    case 276:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      END_STATE();
    case 277:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      END_STATE();
    case 278:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      END_STATE();
    case 279:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 280:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 281:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 282:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 283:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 284:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 285:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      END_STATE();
    case 286:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(289);
      END_STATE();
    case 287:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(436);
      END_STATE();
    case 288:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      END_STATE();
    case 289:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(287);
      END_STATE();
    case 290:
      if (eof) ADVANCE(325);
      if (lookahead == '"') ADVANCE(432);
      if (lookahead == '(') ADVANCE(352);
      if (lookahead == '*') ADVANCE(350);
      if (lookahead == ':') ADVANCE(327);
      if (lookahead == 'A') ADVANCE(145);
      if (lookahead == 'C') ADVANCE(180);
      if (lookahead == 'D') ADVANCE(112);
      if (lookahead == 'E') ADVANCE(258);
      if (lookahead == 'I') ADVANCE(68);
      if (lookahead == 'L') ADVANCE(181);
      if (lookahead == 'M') ADVANCE(38);
      if (lookahead == 'P') ADVANCE(39);
      if (lookahead == 'R') ADVANCE(114);
      if (lookahead == 'S') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(43);
      if (lookahead == 'U') ADVANCE(215);
      if (lookahead == 'V') ADVANCE(40);
      if (lookahead == 'X') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(166);
      if (lookahead == 'f') ADVANCE(200);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(290)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(440);
      END_STATE();
    case 291:
      if (eof) ADVANCE(325);
      if (lookahead == '"') ADVANCE(432);
      if (lookahead == '*') ADVANCE(350);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '=') ADVANCE(328);
      if (lookahead == '?') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(145);
      if (lookahead == 'C') ADVANCE(180);
      if (lookahead == 'D') ADVANCE(469);
      if (lookahead == 'E') ADVANCE(260);
      if (lookahead == 'I') ADVANCE(179);
      if (lookahead == 'L') ADVANCE(181);
      if (lookahead == 'M') ADVANCE(31);
      if (lookahead == 'N') ADVANCE(468);
      if (lookahead == 'P') ADVANCE(197);
      if (lookahead == 'R') ADVANCE(114);
      if (lookahead == 'S') ADVANCE(34);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == 'V') ADVANCE(40);
      if (lookahead == '^') ADVANCE(427);
      if (lookahead == 'a') ADVANCE(166);
      if (lookahead == 'c') ADVANCE(188);
      if (lookahead == 'f') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(291)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(428);
      END_STATE();
    case 292:
      if (eof) ADVANCE(325);
      if (lookahead == '"') ADVANCE(431);
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == '(') ADVANCE(352);
      if (lookahead == '*') ADVANCE(350);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == ':') ADVANCE(327);
      if (lookahead == '=') ADVANCE(328);
      if (lookahead == 'A') ADVANCE(145);
      if (lookahead == 'C') ADVANCE(180);
      if (lookahead == 'D') ADVANCE(112);
      if (lookahead == 'E') ADVANCE(258);
      if (lookahead == 'I') ADVANCE(68);
      if (lookahead == 'L') ADVANCE(181);
      if (lookahead == 'M') ADVANCE(38);
      if (lookahead == 'P') ADVANCE(39);
      if (lookahead == 'R') ADVANCE(114);
      if (lookahead == 'S') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(43);
      if (lookahead == 'U') ADVANCE(215);
      if (lookahead == 'V') ADVANCE(40);
      if (lookahead == 'X') ADVANCE(30);
      if (lookahead == '^') ADVANCE(427);
      if (lookahead == 'a') ADVANCE(166);
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead == 'f') ADVANCE(200);
      if (lookahead == 'n') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(198);
      if (lookahead == 'p') ADVANCE(208);
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead == 's') ADVANCE(261);
      if (lookahead == 'v') ADVANCE(53);
      if (lookahead == 'w') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(292)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(428);
      END_STATE();
    case 293:
      if (eof) ADVANCE(325);
      if (lookahead == '"') ADVANCE(431);
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == '*') ADVANCE(350);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'C') ADVANCE(409);
      if (lookahead == 'E') ADVANCE(423);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(410);
      if (lookahead == 'M') ADVANCE(383);
      if (lookahead == 'P') ADVANCE(415);
      if (lookahead == 'R') ADVANCE(401);
      if (lookahead == 'V') ADVANCE(386);
      if (lookahead == 'a') ADVANCE(406);
      if (lookahead == 'f') ADVANCE(389);
      if (lookahead == 't') ADVANCE(418);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(293)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 294:
      if (eof) ADVANCE(325);
      if (lookahead == '"') ADVANCE(431);
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == '*') ADVANCE(350);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'C') ADVANCE(409);
      if (lookahead == 'E') ADVANCE(423);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(410);
      if (lookahead == 'M') ADVANCE(383);
      if (lookahead == 'P') ADVANCE(415);
      if (lookahead == 'R') ADVANCE(401);
      if (lookahead == 'V') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(294)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 295:
      if (eof) ADVANCE(325);
      if (lookahead == '"') ADVANCE(431);
      if (lookahead == '(') ADVANCE(352);
      if (lookahead == '*') ADVANCE(350);
      if (lookahead == ':') ADVANCE(327);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'C') ADVANCE(409);
      if (lookahead == 'E') ADVANCE(423);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(410);
      if (lookahead == 'M') ADVANCE(383);
      if (lookahead == 'P') ADVANCE(415);
      if (lookahead == 'R') ADVANCE(401);
      if (lookahead == 'V') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(295)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 296:
      if (eof) ADVANCE(325);
      if (lookahead == '"') ADVANCE(431);
      if (lookahead == '(') ADVANCE(352);
      if (lookahead == '*') ADVANCE(350);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'C') ADVANCE(409);
      if (lookahead == 'E') ADVANCE(423);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(410);
      if (lookahead == 'M') ADVANCE(383);
      if (lookahead == 'P') ADVANCE(415);
      if (lookahead == 'R') ADVANCE(401);
      if (lookahead == 'V') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(296)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 297:
      if (eof) ADVANCE(325);
      if (lookahead == '"') ADVANCE(431);
      if (lookahead == '*') ADVANCE(350);
      if (lookahead == ':') ADVANCE(327);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'C') ADVANCE(409);
      if (lookahead == 'E') ADVANCE(423);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(410);
      if (lookahead == 'M') ADVANCE(383);
      if (lookahead == 'P') ADVANCE(415);
      if (lookahead == 'R') ADVANCE(401);
      if (lookahead == 'V') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(297)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 298:
      if (eof) ADVANCE(325);
      if (lookahead == '"') ADVANCE(431);
      if (lookahead == '*') ADVANCE(350);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'C') ADVANCE(409);
      if (lookahead == 'E') ADVANCE(423);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(410);
      if (lookahead == 'M') ADVANCE(383);
      if (lookahead == 'P') ADVANCE(415);
      if (lookahead == 'R') ADVANCE(401);
      if (lookahead == 'V') ADVANCE(386);
      if (lookahead == 'a') ADVANCE(406);
      if (lookahead == 'f') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(298)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 299:
      if (eof) ADVANCE(325);
      if (lookahead == '"') ADVANCE(431);
      if (lookahead == '*') ADVANCE(350);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'C') ADVANCE(409);
      if (lookahead == 'E') ADVANCE(423);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(410);
      if (lookahead == 'M') ADVANCE(383);
      if (lookahead == 'P') ADVANCE(415);
      if (lookahead == 'R') ADVANCE(401);
      if (lookahead == 'V') ADVANCE(386);
      if (lookahead == 'a') ADVANCE(406);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(299)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 300:
      if (eof) ADVANCE(325);
      if (lookahead == '"') ADVANCE(431);
      if (lookahead == '*') ADVANCE(350);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'C') ADVANCE(409);
      if (lookahead == 'E') ADVANCE(423);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(410);
      if (lookahead == 'M') ADVANCE(383);
      if (lookahead == 'P') ADVANCE(415);
      if (lookahead == 'R') ADVANCE(401);
      if (lookahead == 'V') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(300)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 301:
      if (eof) ADVANCE(325);
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == '\'') ADVANCE(453);
      if (lookahead == '(') ADVANCE(352);
      if (lookahead == '*') ADVANCE(350);
      if (lookahead == ':') ADVANCE(327);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'C') ADVANCE(409);
      if (lookahead == 'E') ADVANCE(423);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(410);
      if (lookahead == 'M') ADVANCE(383);
      if (lookahead == 'P') ADVANCE(415);
      if (lookahead == 'R') ADVANCE(401);
      if (lookahead == 'V') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(301)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 302:
      if (eof) ADVANCE(325);
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == '\'') ADVANCE(453);
      if (lookahead == '(') ADVANCE(352);
      if (lookahead == '*') ADVANCE(350);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'C') ADVANCE(409);
      if (lookahead == 'E') ADVANCE(423);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(410);
      if (lookahead == 'M') ADVANCE(383);
      if (lookahead == 'P') ADVANCE(415);
      if (lookahead == 'R') ADVANCE(401);
      if (lookahead == 'V') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(302)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 303:
      if (eof) ADVANCE(325);
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == '\'') ADVANCE(453);
      if (lookahead == '*') ADVANCE(350);
      if (lookahead == ':') ADVANCE(327);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'C') ADVANCE(409);
      if (lookahead == 'E') ADVANCE(423);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(410);
      if (lookahead == 'M') ADVANCE(383);
      if (lookahead == 'P') ADVANCE(415);
      if (lookahead == 'R') ADVANCE(401);
      if (lookahead == 'V') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(303)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 304:
      if (eof) ADVANCE(325);
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == '\'') ADVANCE(453);
      if (lookahead == '*') ADVANCE(350);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'C') ADVANCE(409);
      if (lookahead == 'E') ADVANCE(423);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(410);
      if (lookahead == 'M') ADVANCE(383);
      if (lookahead == 'P') ADVANCE(415);
      if (lookahead == 'R') ADVANCE(401);
      if (lookahead == 'V') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(304)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 305:
      if (eof) ADVANCE(325);
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == '(') ADVANCE(352);
      if (lookahead == '*') ADVANCE(350);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'C') ADVANCE(409);
      if (lookahead == 'E') ADVANCE(423);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(410);
      if (lookahead == 'M') ADVANCE(383);
      if (lookahead == 'P') ADVANCE(415);
      if (lookahead == 'R') ADVANCE(401);
      if (lookahead == 'V') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(305)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 306:
      if (eof) ADVANCE(325);
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == '*') ADVANCE(350);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'C') ADVANCE(409);
      if (lookahead == 'E') ADVANCE(423);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(410);
      if (lookahead == 'M') ADVANCE(383);
      if (lookahead == 'P') ADVANCE(415);
      if (lookahead == 'R') ADVANCE(401);
      if (lookahead == 'V') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(306)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 307:
      if (eof) ADVANCE(325);
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'C') ADVANCE(409);
      if (lookahead == 'E') ADVANCE(423);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(410);
      if (lookahead == 'M') ADVANCE(383);
      if (lookahead == 'P') ADVANCE(415);
      if (lookahead == 'R') ADVANCE(401);
      if (lookahead == 'V') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(307)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 308:
      if (eof) ADVANCE(325);
      if (lookahead == '(') ADVANCE(352);
      if (lookahead == '*') ADVANCE(350);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'C') ADVANCE(409);
      if (lookahead == 'E') ADVANCE(423);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(410);
      if (lookahead == 'M') ADVANCE(383);
      if (lookahead == 'P') ADVANCE(415);
      if (lookahead == 'R') ADVANCE(401);
      if (lookahead == 'V') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(308)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 309:
      if (eof) ADVANCE(325);
      if (lookahead == '(') ADVANCE(352);
      if (lookahead == '*') ADVANCE(350);
      if (lookahead == 'A') ADVANCE(145);
      if (lookahead == 'C') ADVANCE(180);
      if (lookahead == 'E') ADVANCE(260);
      if (lookahead == 'I') ADVANCE(179);
      if (lookahead == 'L') ADVANCE(181);
      if (lookahead == 'M') ADVANCE(38);
      if (lookahead == 'P') ADVANCE(197);
      if (lookahead == 'R') ADVANCE(114);
      if (lookahead == 'T') ADVANCE(451);
      if (lookahead == 'V') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(309)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      END_STATE();
    case 310:
      if (eof) ADVANCE(325);
      if (lookahead == '*') ADVANCE(430);
      if (lookahead == '?') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(145);
      if (lookahead == 'C') ADVANCE(180);
      if (lookahead == 'D') ADVANCE(469);
      if (lookahead == 'E') ADVANCE(260);
      if (lookahead == 'I') ADVANCE(179);
      if (lookahead == 'L') ADVANCE(181);
      if (lookahead == 'M') ADVANCE(31);
      if (lookahead == 'N') ADVANCE(468);
      if (lookahead == 'P') ADVANCE(197);
      if (lookahead == 'R') ADVANCE(114);
      if (lookahead == 'S') ADVANCE(34);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == 'V') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(310)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(428);
      END_STATE();
    case 311:
      if (eof) ADVANCE(325);
      if (lookahead == '*') ADVANCE(350);
      if (lookahead == '-') ADVANCE(374);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'C') ADVANCE(409);
      if (lookahead == 'E') ADVANCE(423);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(410);
      if (lookahead == 'M') ADVANCE(383);
      if (lookahead == 'P') ADVANCE(415);
      if (lookahead == 'R') ADVANCE(401);
      if (lookahead == 'V') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(311)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 312:
      if (eof) ADVANCE(325);
      if (lookahead == '*') ADVANCE(350);
      if (lookahead == '.') ADVANCE(372);
      if (lookahead == '=') ADVANCE(328);
      if (lookahead == '?') ADVANCE(371);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'C') ADVANCE(409);
      if (lookahead == 'D') ADVANCE(469);
      if (lookahead == 'E') ADVANCE(423);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(410);
      if (lookahead == 'M') ADVANCE(377);
      if (lookahead == 'N') ADVANCE(468);
      if (lookahead == 'P') ADVANCE(415);
      if (lookahead == 'R') ADVANCE(401);
      if (lookahead == 'S') ADVANCE(378);
      if (lookahead == 'T') ADVANCE(380);
      if (lookahead == 'V') ADVANCE(386);
      if (lookahead == '^') ADVANCE(427);
      if (lookahead == 'a') ADVANCE(406);
      if (lookahead == 'c') ADVANCE(413);
      if (lookahead == 'f') ADVANCE(417);
      if (lookahead == 'o') ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(312)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 313:
      if (eof) ADVANCE(325);
      if (lookahead == '*') ADVANCE(350);
      if (lookahead == '=') ADVANCE(328);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'C') ADVANCE(409);
      if (lookahead == 'E') ADVANCE(423);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(410);
      if (lookahead == 'M') ADVANCE(383);
      if (lookahead == 'P') ADVANCE(415);
      if (lookahead == 'R') ADVANCE(401);
      if (lookahead == 'V') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(313)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 314:
      if (eof) ADVANCE(325);
      if (lookahead == '*') ADVANCE(350);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'C') ADVANCE(409);
      if (lookahead == 'D') ADVANCE(400);
      if (lookahead == 'E') ADVANCE(423);
      if (lookahead == 'I') ADVANCE(405);
      if (lookahead == 'L') ADVANCE(410);
      if (lookahead == 'M') ADVANCE(383);
      if (lookahead == 'P') ADVANCE(415);
      if (lookahead == 'R') ADVANCE(401);
      if (lookahead == 'T') ADVANCE(403);
      if (lookahead == 'U') ADVANCE(419);
      if (lookahead == 'V') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(314)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 315:
      if (eof) ADVANCE(325);
      if (lookahead == '*') ADVANCE(350);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'C') ADVANCE(409);
      if (lookahead == 'D') ADVANCE(400);
      if (lookahead == 'E') ADVANCE(423);
      if (lookahead == 'I') ADVANCE(396);
      if (lookahead == 'L') ADVANCE(410);
      if (lookahead == 'M') ADVANCE(383);
      if (lookahead == 'P') ADVANCE(385);
      if (lookahead == 'R') ADVANCE(401);
      if (lookahead == 'T') ADVANCE(403);
      if (lookahead == 'V') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(315)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 316:
      if (eof) ADVANCE(325);
      if (lookahead == '*') ADVANCE(350);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'C') ADVANCE(409);
      if (lookahead == 'D') ADVANCE(400);
      if (lookahead == 'E') ADVANCE(423);
      if (lookahead == 'I') ADVANCE(396);
      if (lookahead == 'L') ADVANCE(410);
      if (lookahead == 'M') ADVANCE(383);
      if (lookahead == 'P') ADVANCE(415);
      if (lookahead == 'R') ADVANCE(401);
      if (lookahead == 'S') ADVANCE(411);
      if (lookahead == 'T') ADVANCE(388);
      if (lookahead == 'V') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(316)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 317:
      if (eof) ADVANCE(325);
      if (lookahead == '*') ADVANCE(350);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'C') ADVANCE(409);
      if (lookahead == 'D') ADVANCE(400);
      if (lookahead == 'E') ADVANCE(423);
      if (lookahead == 'I') ADVANCE(396);
      if (lookahead == 'L') ADVANCE(410);
      if (lookahead == 'M') ADVANCE(383);
      if (lookahead == 'P') ADVANCE(415);
      if (lookahead == 'R') ADVANCE(401);
      if (lookahead == 'T') ADVANCE(403);
      if (lookahead == 'V') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(317)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 318:
      if (eof) ADVANCE(325);
      if (lookahead == '*') ADVANCE(350);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'C') ADVANCE(409);
      if (lookahead == 'E') ADVANCE(423);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(410);
      if (lookahead == 'M') ADVANCE(383);
      if (lookahead == 'P') ADVANCE(415);
      if (lookahead == 'R') ADVANCE(401);
      if (lookahead == 'V') ADVANCE(386);
      if (lookahead == 'a') ADVANCE(406);
      if (lookahead == 'w') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(318)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 319:
      if (eof) ADVANCE(325);
      if (lookahead == '*') ADVANCE(350);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'C') ADVANCE(409);
      if (lookahead == 'E') ADVANCE(423);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(410);
      if (lookahead == 'M') ADVANCE(383);
      if (lookahead == 'P') ADVANCE(415);
      if (lookahead == 'R') ADVANCE(401);
      if (lookahead == 'V') ADVANCE(386);
      if (lookahead == 'a') ADVANCE(406);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(319)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 320:
      if (eof) ADVANCE(325);
      if (lookahead == '*') ADVANCE(350);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'C') ADVANCE(409);
      if (lookahead == 'E') ADVANCE(423);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(410);
      if (lookahead == 'M') ADVANCE(383);
      if (lookahead == 'P') ADVANCE(415);
      if (lookahead == 'R') ADVANCE(401);
      if (lookahead == 'V') ADVANCE(386);
      if (lookahead == 'o') ADVANCE(416);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(320)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 321:
      if (eof) ADVANCE(325);
      if (lookahead == '*') ADVANCE(350);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'C') ADVANCE(409);
      if (lookahead == 'E') ADVANCE(423);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(410);
      if (lookahead == 'M') ADVANCE(383);
      if (lookahead == 'P') ADVANCE(415);
      if (lookahead == 'R') ADVANCE(401);
      if (lookahead == 'V') ADVANCE(386);
      if (lookahead == 'w') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(321)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 322:
      if (eof) ADVANCE(325);
      if (lookahead == '*') ADVANCE(350);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'C') ADVANCE(409);
      if (lookahead == 'E') ADVANCE(423);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(410);
      if (lookahead == 'M') ADVANCE(383);
      if (lookahead == 'P') ADVANCE(415);
      if (lookahead == 'R') ADVANCE(401);
      if (lookahead == 'V') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(322)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 323:
      if (eof) ADVANCE(325);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'C') ADVANCE(409);
      if (lookahead == 'D') ADVANCE(400);
      if (lookahead == 'E') ADVANCE(420);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(410);
      if (lookahead == 'M') ADVANCE(383);
      if (lookahead == 'P') ADVANCE(415);
      if (lookahead == 'R') ADVANCE(401);
      if (lookahead == 'S') ADVANCE(398);
      if (lookahead == 'V') ADVANCE(386);
      if (lookahead == 'X') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(323)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 324:
      if (eof) ADVANCE(325);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'C') ADVANCE(409);
      if (lookahead == 'E') ADVANCE(423);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'L') ADVANCE(410);
      if (lookahead == 'M') ADVANCE(383);
      if (lookahead == 'P') ADVANCE(415);
      if (lookahead == 'R') ADVANCE(401);
      if (lookahead == 'V') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(324)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(370);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_Alias);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_Profile);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_Extension);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_Invariant);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_Instance);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_Instance);
      if (lookahead == 'O') ADVANCE(120);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_ValueSet);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_CodeSystem);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_Mapping);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_Logical);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_Resource);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_Description);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_Expression);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_Id);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_InstanceOf);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_Parent);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_Severity);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_Source);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_Target);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_Title);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_Usage);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_XPath);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_exactly);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_obeys);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_exclude);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_codes);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_valueset);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '!') ADVANCE(464);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(429);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(442);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '>') ADVANCE(360);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'P') ADVANCE(44);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'S') ADVANCE(465);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'S') ADVANCE(465);
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'U') ADVANCE(466);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'U') ADVANCE(466);
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'U') ADVANCE(467);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(203);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'i') ADVANCE(238);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'b') ADVANCE(79);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'b') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'b') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(359);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(341);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(341);
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(341);
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'h') ADVANCE(116);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'i') ADVANCE(238);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(359);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(194);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(66);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(193);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(239);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'y') ADVANCE(222);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(428);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(440);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_cardinality_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(436);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(437);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(281);
      if (lookahead == '.') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(440);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(440);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(439);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(279);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == ':') ADVANCE(280);
      if (lookahead == 'Z') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(441);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '-') ADVANCE(284);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(279);
      if (lookahead == '.') ADVANCE(277);
      if (lookahead == 'Z') ADVANCE(446);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(279);
      if (lookahead == ':') ADVANCE(280);
      if (lookahead == 'Z') ADVANCE(446);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(279);
      if (lookahead == ':') ADVANCE(283);
      if (lookahead == 'Z') ADVANCE(446);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(279);
      if (lookahead == 'Z') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_T);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'U') ADVANCE(467);
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'i') ADVANCE(238);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(454);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_example);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_preferred);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_extensible);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_Reference);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_Canonical);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_named);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_QMARK_BANG);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_MS);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_SU);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_TU);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 292},
  [3] = {.lex_state = 292},
  [4] = {.lex_state = 292},
  [5] = {.lex_state = 292},
  [6] = {.lex_state = 292},
  [7] = {.lex_state = 292},
  [8] = {.lex_state = 292},
  [9] = {.lex_state = 291},
  [10] = {.lex_state = 292},
  [11] = {.lex_state = 312},
  [12] = {.lex_state = 290},
  [13] = {.lex_state = 290},
  [14] = {.lex_state = 312},
  [15] = {.lex_state = 291},
  [16] = {.lex_state = 291},
  [17] = {.lex_state = 292},
  [18] = {.lex_state = 292},
  [19] = {.lex_state = 292},
  [20] = {.lex_state = 292},
  [21] = {.lex_state = 291},
  [22] = {.lex_state = 291},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 292},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 292},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 292},
  [30] = {.lex_state = 292},
  [31] = {.lex_state = 292},
  [32] = {.lex_state = 292},
  [33] = {.lex_state = 292},
  [34] = {.lex_state = 293},
  [35] = {.lex_state = 292},
  [36] = {.lex_state = 292},
  [37] = {.lex_state = 292},
  [38] = {.lex_state = 292},
  [39] = {.lex_state = 292},
  [40] = {.lex_state = 292},
  [41] = {.lex_state = 292},
  [42] = {.lex_state = 292},
  [43] = {.lex_state = 292},
  [44] = {.lex_state = 292},
  [45] = {.lex_state = 292},
  [46] = {.lex_state = 292},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 292},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 292},
  [51] = {.lex_state = 292},
  [52] = {.lex_state = 310},
  [53] = {.lex_state = 292},
  [54] = {.lex_state = 301},
  [55] = {.lex_state = 291},
  [56] = {.lex_state = 310},
  [57] = {.lex_state = 291},
  [58] = {.lex_state = 291},
  [59] = {.lex_state = 291},
  [60] = {.lex_state = 291},
  [61] = {.lex_state = 303},
  [62] = {.lex_state = 292},
  [63] = {.lex_state = 292},
  [64] = {.lex_state = 302},
  [65] = {.lex_state = 291},
  [66] = {.lex_state = 291},
  [67] = {.lex_state = 291},
  [68] = {.lex_state = 292},
  [69] = {.lex_state = 291},
  [70] = {.lex_state = 293},
  [71] = {.lex_state = 291},
  [72] = {.lex_state = 294},
  [73] = {.lex_state = 293},
  [74] = {.lex_state = 294},
  [75] = {.lex_state = 316},
  [76] = {.lex_state = 316},
  [77] = {.lex_state = 291},
  [78] = {.lex_state = 291},
  [79] = {.lex_state = 304},
  [80] = {.lex_state = 315},
  [81] = {.lex_state = 314},
  [82] = {.lex_state = 293},
  [83] = {.lex_state = 292},
  [84] = {.lex_state = 315},
  [85] = {.lex_state = 314},
  [86] = {.lex_state = 298},
  [87] = {.lex_state = 292},
  [88] = {.lex_state = 298},
  [89] = {.lex_state = 323},
  [90] = {.lex_state = 323},
  [91] = {.lex_state = 306},
  [92] = {.lex_state = 25},
  [93] = {.lex_state = 295},
  [94] = {.lex_state = 292},
  [95] = {.lex_state = 295},
  [96] = {.lex_state = 292},
  [97] = {.lex_state = 317},
  [98] = {.lex_state = 317},
  [99] = {.lex_state = 306},
  [100] = {.lex_state = 292},
  [101] = {.lex_state = 25},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 291},
  [104] = {.lex_state = 292},
  [105] = {.lex_state = 318},
  [106] = {.lex_state = 318},
  [107] = {.lex_state = 292},
  [108] = {.lex_state = 292},
  [109] = {.lex_state = 305},
  [110] = {.lex_state = 292},
  [111] = {.lex_state = 292},
  [112] = {.lex_state = 292},
  [113] = {.lex_state = 296},
  [114] = {.lex_state = 292},
  [115] = {.lex_state = 297},
  [116] = {.lex_state = 296},
  [117] = {.lex_state = 297},
  [118] = {.lex_state = 291},
  [119] = {.lex_state = 292},
  [120] = {.lex_state = 292},
  [121] = {.lex_state = 292},
  [122] = {.lex_state = 292},
  [123] = {.lex_state = 299},
  [124] = {.lex_state = 292},
  [125] = {.lex_state = 305},
  [126] = {.lex_state = 292},
  [127] = {.lex_state = 292},
  [128] = {.lex_state = 299},
  [129] = {.lex_state = 291},
  [130] = {.lex_state = 292},
  [131] = {.lex_state = 292},
  [132] = {.lex_state = 292},
  [133] = {.lex_state = 292},
  [134] = {.lex_state = 292},
  [135] = {.lex_state = 292},
  [136] = {.lex_state = 319},
  [137] = {.lex_state = 292},
  [138] = {.lex_state = 292},
  [139] = {.lex_state = 306},
  [140] = {.lex_state = 306},
  [141] = {.lex_state = 292},
  [142] = {.lex_state = 292},
  [143] = {.lex_state = 292},
  [144] = {.lex_state = 308},
  [145] = {.lex_state = 313},
  [146] = {.lex_state = 308},
  [147] = {.lex_state = 313},
  [148] = {.lex_state = 292},
  [149] = {.lex_state = 320},
  [150] = {.lex_state = 321},
  [151] = {.lex_state = 320},
  [152] = {.lex_state = 294},
  [153] = {.lex_state = 292},
  [154] = {.lex_state = 300},
  [155] = {.lex_state = 300},
  [156] = {.lex_state = 321},
  [157] = {.lex_state = 292},
  [158] = {.lex_state = 311},
  [159] = {.lex_state = 292},
  [160] = {.lex_state = 311},
  [161] = {.lex_state = 292},
  [162] = {.lex_state = 292},
  [163] = {.lex_state = 292},
  [164] = {.lex_state = 292},
  [165] = {.lex_state = 292},
  [166] = {.lex_state = 292},
  [167] = {.lex_state = 292},
  [168] = {.lex_state = 292},
  [169] = {.lex_state = 319},
  [170] = {.lex_state = 292},
  [171] = {.lex_state = 292},
  [172] = {.lex_state = 292},
  [173] = {.lex_state = 294},
  [174] = {.lex_state = 292},
  [175] = {.lex_state = 292},
  [176] = {.lex_state = 292},
  [177] = {.lex_state = 292},
  [178] = {.lex_state = 292},
  [179] = {.lex_state = 322},
  [180] = {.lex_state = 292},
  [181] = {.lex_state = 292},
  [182] = {.lex_state = 322},
  [183] = {.lex_state = 292},
  [184] = {.lex_state = 292},
  [185] = {.lex_state = 306},
  [186] = {.lex_state = 306},
  [187] = {.lex_state = 307},
  [188] = {.lex_state = 292},
  [189] = {.lex_state = 307},
  [190] = {.lex_state = 292},
  [191] = {.lex_state = 309},
  [192] = {.lex_state = 292},
  [193] = {.lex_state = 292},
  [194] = {.lex_state = 292},
  [195] = {.lex_state = 292},
  [196] = {.lex_state = 292},
  [197] = {.lex_state = 292},
  [198] = {.lex_state = 292},
  [199] = {.lex_state = 292},
  [200] = {.lex_state = 292},
  [201] = {.lex_state = 292},
  [202] = {.lex_state = 292},
  [203] = {.lex_state = 292},
  [204] = {.lex_state = 292},
  [205] = {.lex_state = 292},
  [206] = {.lex_state = 292},
  [207] = {.lex_state = 292},
  [208] = {.lex_state = 292},
  [209] = {.lex_state = 292},
  [210] = {.lex_state = 324},
  [211] = {.lex_state = 292},
  [212] = {.lex_state = 292},
  [213] = {.lex_state = 292},
  [214] = {.lex_state = 292},
  [215] = {.lex_state = 292},
  [216] = {.lex_state = 292},
  [217] = {.lex_state = 292},
  [218] = {.lex_state = 292},
  [219] = {.lex_state = 292},
  [220] = {.lex_state = 292},
  [221] = {.lex_state = 292},
  [222] = {.lex_state = 292},
  [223] = {.lex_state = 292},
  [224] = {.lex_state = 324},
  [225] = {.lex_state = 292},
  [226] = {.lex_state = 292},
  [227] = {.lex_state = 292},
  [228] = {.lex_state = 292},
  [229] = {.lex_state = 292},
  [230] = {.lex_state = 292},
  [231] = {.lex_state = 292},
  [232] = {.lex_state = 292},
  [233] = {.lex_state = 292},
  [234] = {.lex_state = 292},
  [235] = {.lex_state = 292},
  [236] = {.lex_state = 292},
  [237] = {.lex_state = 292},
  [238] = {.lex_state = 292},
  [239] = {.lex_state = 292},
  [240] = {.lex_state = 292},
  [241] = {.lex_state = 292},
  [242] = {.lex_state = 292},
  [243] = {.lex_state = 292},
  [244] = {.lex_state = 292},
  [245] = {.lex_state = 292},
  [246] = {.lex_state = 292},
  [247] = {.lex_state = 292},
  [248] = {.lex_state = 292},
  [249] = {.lex_state = 292},
  [250] = {.lex_state = 292},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 292},
  [253] = {.lex_state = 292},
  [254] = {.lex_state = 17},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 17},
  [257] = {.lex_state = 25},
  [258] = {.lex_state = 12},
  [259] = {.lex_state = 292},
  [260] = {.lex_state = 292},
  [261] = {.lex_state = 291},
  [262] = {.lex_state = 25},
  [263] = {.lex_state = 27},
  [264] = {.lex_state = 26},
  [265] = {.lex_state = 36},
  [266] = {.lex_state = 27},
  [267] = {.lex_state = 36},
  [268] = {.lex_state = 26},
  [269] = {.lex_state = 25},
  [270] = {.lex_state = 27},
  [271] = {.lex_state = 25},
  [272] = {.lex_state = 291},
  [273] = {.lex_state = 13},
  [274] = {.lex_state = 291},
  [275] = {.lex_state = 13},
  [276] = {.lex_state = 18},
  [277] = {.lex_state = 28},
  [278] = {.lex_state = 269},
  [279] = {.lex_state = 29},
  [280] = {.lex_state = 29},
  [281] = {.lex_state = 28},
  [282] = {.lex_state = 269},
  [283] = {.lex_state = 13},
  [284] = {.lex_state = 214},
  [285] = {.lex_state = 269},
  [286] = {.lex_state = 214},
  [287] = {.lex_state = 19},
  [288] = {.lex_state = 19},
  [289] = {.lex_state = 13},
  [290] = {.lex_state = 6},
  [291] = {.lex_state = 269},
  [292] = {.lex_state = 13},
  [293] = {.lex_state = 6},
  [294] = {.lex_state = 23},
  [295] = {.lex_state = 13},
  [296] = {.lex_state = 15},
  [297] = {.lex_state = 13},
  [298] = {.lex_state = 15},
  [299] = {.lex_state = 269},
  [300] = {.lex_state = 269},
  [301] = {.lex_state = 269},
  [302] = {.lex_state = 269},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 269},
  [305] = {.lex_state = 292},
  [306] = {.lex_state = 269},
  [307] = {.lex_state = 269},
  [308] = {.lex_state = 269},
  [309] = {.lex_state = 269},
  [310] = {.lex_state = 9},
  [311] = {.lex_state = 5},
  [312] = {.lex_state = 5},
  [313] = {.lex_state = 5},
  [314] = {.lex_state = 292},
  [315] = {.lex_state = 269},
  [316] = {.lex_state = 269},
  [317] = {.lex_state = 269},
  [318] = {.lex_state = 269},
  [319] = {.lex_state = 5},
  [320] = {.lex_state = 5},
  [321] = {.lex_state = 269},
  [322] = {.lex_state = 269},
  [323] = {.lex_state = 20},
  [324] = {.lex_state = 20},
  [325] = {.lex_state = 269},
  [326] = {.lex_state = 269},
  [327] = {.lex_state = 16},
  [328] = {.lex_state = 16},
  [329] = {.lex_state = 269},
  [330] = {.lex_state = 269},
  [331] = {.lex_state = 269},
  [332] = {.lex_state = 269},
  [333] = {.lex_state = 7},
  [334] = {.lex_state = 7},
  [335] = {.lex_state = 269},
  [336] = {.lex_state = 269},
  [337] = {.lex_state = 269},
  [338] = {.lex_state = 9},
  [339] = {.lex_state = 8},
  [340] = {.lex_state = 8},
  [341] = {.lex_state = 292},
  [342] = {.lex_state = 5},
  [343] = {.lex_state = 269},
  [344] = {.lex_state = 269},
  [345] = {.lex_state = 269},
  [346] = {.lex_state = 292},
  [347] = {.lex_state = 292},
  [348] = {.lex_state = 292},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 9},
  [351] = {.lex_state = 5},
  [352] = {.lex_state = 292},
  [353] = {.lex_state = 11},
  [354] = {.lex_state = 292},
  [355] = {.lex_state = 11},
  [356] = {.lex_state = 269},
  [357] = {.lex_state = 269},
  [358] = {.lex_state = 269},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 269},
  [362] = {.lex_state = 13},
  [363] = {.lex_state = 13},
  [364] = {.lex_state = 269},
  [365] = {.lex_state = 269},
  [366] = {.lex_state = 269},
  [367] = {.lex_state = 290},
  [368] = {.lex_state = 269},
  [369] = {.lex_state = 269},
  [370] = {.lex_state = 269},
  [371] = {.lex_state = 269},
  [372] = {.lex_state = 37},
  [373] = {.lex_state = 37},
  [374] = {.lex_state = 269},
  [375] = {.lex_state = 269},
  [376] = {.lex_state = 269},
  [377] = {.lex_state = 269},
  [378] = {.lex_state = 269},
  [379] = {.lex_state = 269},
  [380] = {.lex_state = 269},
  [381] = {.lex_state = 14},
  [382] = {.lex_state = 269},
  [383] = {.lex_state = 269},
  [384] = {.lex_state = 269},
  [385] = {.lex_state = 269},
  [386] = {.lex_state = 23},
  [387] = {.lex_state = 269},
  [388] = {.lex_state = 269},
  [389] = {.lex_state = 269},
  [390] = {.lex_state = 292},
  [391] = {.lex_state = 269},
  [392] = {.lex_state = 269},
  [393] = {.lex_state = 292},
  [394] = {.lex_state = 23},
  [395] = {.lex_state = 269},
  [396] = {.lex_state = 269},
  [397] = {.lex_state = 14},
  [398] = {.lex_state = 23},
  [399] = {.lex_state = 269},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 269},
  [402] = {.lex_state = 269},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 269},
  [408] = {.lex_state = 292},
  [409] = {.lex_state = 290},
  [410] = {.lex_state = 14},
  [411] = {.lex_state = 269},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 269},
  [415] = {.lex_state = 269},
  [416] = {.lex_state = 269},
  [417] = {.lex_state = 292},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 292},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 292},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 292},
  [424] = {.lex_state = 292},
  [425] = {.lex_state = 13},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 23},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 292},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 292},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 292},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 309},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 292},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
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
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_sequence_token1] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [aux_sym_cardinality_token1] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_STAR2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_T] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_Reference] = ACTIONS(1),
    [anon_sym_Canonical] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_named] = ACTIONS(1),
    [anon_sym_QMARK_BANG] = ACTIONS(1),
    [anon_sym_MS] = ACTIONS(1),
    [anon_sym_SU] = ACTIONS(1),
    [anon_sym_TU] = ACTIONS(1),
    [anon_sym_N] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
  },
  [1] = {
    [sym_doc] = STATE(452),
    [sym_alias] = STATE(47),
    [sym_profile] = STATE(47),
    [sym_extension] = STATE(47),
    [sym_invariant] = STATE(47),
    [sym_instance] = STATE(47),
    [sym_valueset] = STATE(47),
    [sym_codesystem] = STATE(47),
    [sym_mapping] = STATE(47),
    [sym_logical] = STATE(47),
    [sym_resource] = STATE(47),
    [aux_sym_doc_repeat1] = STATE(47),
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
  [0] = 11,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(29), 1,
      anon_sym_Id,
    ACTIONS(31), 1,
      anon_sym_Parent,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(31), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(50), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(253), 2,
      sym_sd_rule,
      sym_add_element_rule,
    STATE(130), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(239), 9,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
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
  [58] = 11,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(29), 1,
      anon_sym_Id,
    ACTIONS(31), 1,
      anon_sym_Parent,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(32), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(50), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(253), 2,
      sym_sd_rule,
      sym_add_element_rule,
    STATE(130), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(239), 9,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
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
  [116] = 11,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(29), 1,
      anon_sym_Id,
    ACTIONS(31), 1,
      anon_sym_Parent,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(2), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(29), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(253), 2,
      sym_sd_rule,
      sym_add_element_rule,
    STATE(130), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(239), 9,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
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
  [174] = 11,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(29), 1,
      anon_sym_Id,
    ACTIONS(31), 1,
      anon_sym_Parent,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(3), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(33), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(253), 2,
      sym_sd_rule,
      sym_add_element_rule,
    STATE(130), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(239), 9,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
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
  [232] = 10,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(29), 1,
      anon_sym_Id,
    ACTIONS(31), 1,
      anon_sym_Parent,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(44), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(50), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(130), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(239), 9,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
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
  [286] = 10,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(29), 1,
      anon_sym_Id,
    ACTIONS(31), 1,
      anon_sym_Parent,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(41), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(50), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(130), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(239), 9,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(47), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [340] = 10,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(29), 1,
      anon_sym_Id,
    ACTIONS(31), 1,
      anon_sym_Parent,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(6), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(45), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(130), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(239), 9,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(49), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [394] = 15,
    ACTIONS(53), 1,
      anon_sym_EQ,
    ACTIONS(55), 1,
      anon_sym_from,
    ACTIONS(57), 1,
      anon_sym_contains,
    ACTIONS(59), 1,
      anon_sym_and,
    ACTIONS(61), 1,
      anon_sym_obeys,
    ACTIONS(63), 1,
      anon_sym_only,
    ACTIONS(65), 1,
      anon_sym_CARET,
    ACTIONS(67), 1,
      aux_sym_cardinality_token1,
    ACTIONS(69), 1,
      anon_sym_DOT_DOT,
    STATE(101), 1,
      sym_cardinality,
    STATE(261), 1,
      aux_sym_flag_rule_repeat1,
    STATE(453), 1,
      sym_caret_path,
    STATE(69), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(71), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
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
      anon_sym_STAR,
  [457] = 2,
    ACTIONS(75), 1,
      anon_sym_Instance,
    ACTIONS(73), 30,
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
  [493] = 4,
    ACTIONS(79), 1,
      aux_sym_sequence_token1,
    ACTIONS(82), 1,
      aux_sym_cardinality_token1,
    STATE(11), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 26,
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
      anon_sym_and,
      anon_sym_obeys,
      anon_sym_only,
      anon_sym_CARET,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [531] = 2,
    ACTIONS(86), 2,
      anon_sym_Instance,
      anon_sym_DQUOTE,
    ACTIONS(84), 27,
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
  [565] = 2,
    ACTIONS(90), 2,
      anon_sym_Instance,
      anon_sym_DQUOTE,
    ACTIONS(88), 27,
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
  [599] = 4,
    ACTIONS(94), 1,
      aux_sym_sequence_token1,
    ACTIONS(96), 1,
      aux_sym_cardinality_token1,
    STATE(11), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(92), 26,
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
      anon_sym_and,
      anon_sym_obeys,
      anon_sym_only,
      anon_sym_CARET,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [637] = 12,
    ACTIONS(53), 1,
      anon_sym_EQ,
    ACTIONS(55), 1,
      anon_sym_from,
    ACTIONS(57), 1,
      anon_sym_contains,
    ACTIONS(59), 1,
      anon_sym_and,
    ACTIONS(61), 1,
      anon_sym_obeys,
    ACTIONS(63), 1,
      anon_sym_only,
    ACTIONS(65), 1,
      anon_sym_CARET,
    STATE(261), 1,
      aux_sym_flag_rule_repeat1,
    STATE(453), 1,
      sym_caret_path,
    STATE(69), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(71), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
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
      anon_sym_STAR,
  [691] = 1,
    ACTIONS(98), 28,
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
      anon_sym_and,
      anon_sym_obeys,
      anon_sym_only,
      anon_sym_DASH_GT,
      anon_sym_CARET,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [722] = 2,
    ACTIONS(102), 1,
      anon_sym_Instance,
    ACTIONS(100), 27,
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
      anon_sym_CARET,
      anon_sym_DQUOTE,
  [755] = 11,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(106), 1,
      anon_sym_Id,
    ACTIONS(108), 1,
      anon_sym_Source,
    ACTIONS(110), 1,
      anon_sym_Target,
    ACTIONS(112), 1,
      anon_sym_STAR,
    STATE(38), 2,
      sym_mapping_metadata,
      aux_sym_mapping_repeat1,
    STATE(126), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(248), 2,
      sym_path_rule,
      sym_mapping_rule,
    STATE(94), 5,
      sym_description,
      sym_id,
      sym_source,
      sym_target,
      sym_title,
    ACTIONS(104), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [806] = 11,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(106), 1,
      anon_sym_Id,
    ACTIONS(108), 1,
      anon_sym_Source,
    ACTIONS(110), 1,
      anon_sym_Target,
    ACTIONS(112), 1,
      anon_sym_STAR,
    STATE(18), 2,
      sym_mapping_metadata,
      aux_sym_mapping_repeat1,
    STATE(119), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(248), 2,
      sym_path_rule,
      sym_mapping_rule,
    STATE(94), 5,
      sym_description,
      sym_id,
      sym_source,
      sym_target,
      sym_title,
    ACTIONS(114), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [857] = 2,
    ACTIONS(118), 1,
      anon_sym_Instance,
    ACTIONS(116), 27,
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
      anon_sym_CARET,
      anon_sym_DQUOTE,
  [890] = 2,
    ACTIONS(120), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
    ACTIONS(98), 25,
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
      anon_sym_and,
      anon_sym_obeys,
      anon_sym_only,
      anon_sym_CARET,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [922] = 2,
    ACTIONS(73), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
    ACTIONS(98), 25,
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
      anon_sym_and,
      anon_sym_obeys,
      anon_sym_only,
      anon_sym_CARET,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [954] = 18,
    ACTIONS(125), 1,
      anon_sym_POUND,
    ACTIONS(127), 1,
      aux_sym_sequence_token1,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(131), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(133), 1,
      sym_number,
    ACTIONS(135), 1,
      sym_date,
    ACTIONS(137), 1,
      sym_time,
    ACTIONS(139), 1,
      anon_sym_Reference,
    ACTIONS(141), 1,
      anon_sym_Canonical,
    STATE(96), 1,
      sym_code,
    STATE(139), 1,
      aux_sym_sequence_repeat1,
    STATE(143), 1,
      sym_reference,
    STATE(196), 1,
      sym_quantity,
    STATE(223), 1,
      sym_sequence,
    STATE(237), 1,
      sym_value,
    STATE(441), 1,
      sym_ratio_part,
    ACTIONS(123), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(228), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [1017] = 11,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(145), 1,
      anon_sym_Instance,
    ACTIONS(147), 1,
      anon_sym_InstanceOf,
    ACTIONS(149), 1,
      anon_sym_Usage,
    ACTIONS(151), 1,
      anon_sym_STAR,
    STATE(48), 2,
      sym_instance_metadata,
      aux_sym_instance_repeat1,
    STATE(110), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(240), 2,
      sym_fixed_value_rule,
      sym_path_rule,
    STATE(120), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(143), 10,
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
  [1066] = 18,
    ACTIONS(125), 1,
      anon_sym_POUND,
    ACTIONS(127), 1,
      aux_sym_sequence_token1,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(131), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(133), 1,
      sym_number,
    ACTIONS(135), 1,
      sym_date,
    ACTIONS(137), 1,
      sym_time,
    ACTIONS(139), 1,
      anon_sym_Reference,
    ACTIONS(141), 1,
      anon_sym_Canonical,
    STATE(96), 1,
      sym_code,
    STATE(139), 1,
      aux_sym_sequence_repeat1,
    STATE(143), 1,
      sym_reference,
    STATE(196), 1,
      sym_quantity,
    STATE(223), 1,
      sym_sequence,
    STATE(245), 1,
      sym_value,
    STATE(441), 1,
      sym_ratio_part,
    ACTIONS(123), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(228), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [1129] = 18,
    ACTIONS(125), 1,
      anon_sym_POUND,
    ACTIONS(127), 1,
      aux_sym_sequence_token1,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(131), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(133), 1,
      sym_number,
    ACTIONS(135), 1,
      sym_date,
    ACTIONS(137), 1,
      sym_time,
    ACTIONS(139), 1,
      anon_sym_Reference,
    ACTIONS(141), 1,
      anon_sym_Canonical,
    STATE(96), 1,
      sym_code,
    STATE(139), 1,
      aux_sym_sequence_repeat1,
    STATE(143), 1,
      sym_reference,
    STATE(196), 1,
      sym_quantity,
    STATE(223), 1,
      sym_sequence,
    STATE(252), 1,
      sym_value,
    STATE(441), 1,
      sym_ratio_part,
    ACTIONS(123), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(228), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [1192] = 11,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(147), 1,
      anon_sym_InstanceOf,
    ACTIONS(149), 1,
      anon_sym_Usage,
    ACTIONS(151), 1,
      anon_sym_STAR,
    ACTIONS(155), 1,
      anon_sym_Instance,
    STATE(24), 2,
      sym_instance_metadata,
      aux_sym_instance_repeat1,
    STATE(112), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(240), 2,
      sym_fixed_value_rule,
      sym_path_rule,
    STATE(120), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(153), 10,
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
  [1241] = 18,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(131), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(135), 1,
      sym_date,
    ACTIONS(137), 1,
      sym_time,
    ACTIONS(139), 1,
      anon_sym_Reference,
    ACTIONS(141), 1,
      anon_sym_Canonical,
    ACTIONS(157), 1,
      anon_sym_POUND,
    ACTIONS(159), 1,
      aux_sym_sequence_token1,
    ACTIONS(161), 1,
      sym_number,
    STATE(96), 1,
      sym_code,
    STATE(125), 1,
      aux_sym_sequence_repeat1,
    STATE(143), 1,
      sym_reference,
    STATE(196), 1,
      sym_quantity,
    STATE(207), 1,
      sym_sequence,
    STATE(212), 1,
      sym_value,
    STATE(470), 1,
      sym_ratio_part,
    ACTIONS(123), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(228), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [1304] = 5,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(30), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(253), 2,
      sym_sd_rule,
      sym_add_element_rule,
    STATE(239), 9,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
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
  [1340] = 5,
    ACTIONS(165), 1,
      anon_sym_STAR,
    STATE(30), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(253), 2,
      sym_sd_rule,
      sym_add_element_rule,
    STATE(239), 9,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(163), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1376] = 5,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(30), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(253), 2,
      sym_sd_rule,
      sym_add_element_rule,
    STATE(239), 9,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(168), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1412] = 5,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(30), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(253), 2,
      sym_sd_rule,
      sym_add_element_rule,
    STATE(239), 9,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(170), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1448] = 5,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(30), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(253), 2,
      sym_sd_rule,
      sym_add_element_rule,
    STATE(239), 9,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
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
  [1484] = 10,
    ACTIONS(176), 1,
      anon_sym_POUND,
    ACTIONS(178), 1,
      aux_sym_sequence_token1,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    STATE(96), 1,
      sym_code,
    STATE(222), 1,
      sym_vs_filter_value,
    STATE(362), 1,
      aux_sym_sequence_repeat1,
    STATE(485), 1,
      sym_sequence,
    ACTIONS(174), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(221), 2,
      sym_code_string,
      sym_string,
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
  [1529] = 2,
    ACTIONS(184), 1,
      anon_sym_Instance,
    ACTIONS(182), 23,
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
  [1558] = 9,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(188), 1,
      anon_sym_Id,
    ACTIONS(190), 1,
      anon_sym_STAR,
    STATE(37), 2,
      sym_vs_metadata,
      aux_sym_valueset_repeat1,
    STATE(114), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(230), 2,
      sym_caret_value_rule,
      sym_vs_component,
    STATE(172), 3,
      sym_description,
      sym_id,
      sym_title,
    ACTIONS(186), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1601] = 9,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(188), 1,
      anon_sym_Id,
    ACTIONS(190), 1,
      anon_sym_STAR,
    STATE(63), 2,
      sym_vs_metadata,
      aux_sym_valueset_repeat1,
    STATE(121), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(230), 2,
      sym_caret_value_rule,
      sym_vs_component,
    STATE(172), 3,
      sym_description,
      sym_id,
      sym_title,
    ACTIONS(192), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1644] = 8,
    ACTIONS(196), 1,
      anon_sym_Description,
    ACTIONS(199), 1,
      anon_sym_Id,
    ACTIONS(202), 1,
      anon_sym_Source,
    ACTIONS(205), 1,
      anon_sym_Target,
    ACTIONS(208), 1,
      anon_sym_Title,
    STATE(38), 2,
      sym_mapping_metadata,
      aux_sym_mapping_repeat1,
    STATE(94), 5,
      sym_description,
      sym_id,
      sym_source,
      sym_target,
      sym_title,
    ACTIONS(194), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [1685] = 2,
    ACTIONS(213), 1,
      anon_sym_Instance,
    ACTIONS(211), 23,
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
  [1714] = 2,
    ACTIONS(217), 1,
      anon_sym_Instance,
    ACTIONS(215), 22,
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
  [1742] = 4,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(42), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(239), 9,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(219), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1774] = 4,
    ACTIONS(223), 1,
      anon_sym_STAR,
    STATE(42), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(239), 9,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(221), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1806] = 9,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(188), 1,
      anon_sym_Id,
    ACTIONS(228), 1,
      anon_sym_STAR,
    STATE(243), 1,
      sym_code_caret_value_rule,
    STATE(46), 2,
      sym_cs_metadata,
      aux_sym_codesystem_repeat1,
    STATE(148), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(141), 3,
      sym_description,
      sym_id,
      sym_title,
    ACTIONS(226), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1848] = 4,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(42), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(239), 9,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(230), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1880] = 4,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(42), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(239), 9,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
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
  [1912] = 9,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(188), 1,
      anon_sym_Id,
    ACTIONS(228), 1,
      anon_sym_STAR,
    STATE(243), 1,
      sym_code_caret_value_rule,
    STATE(62), 2,
      sym_cs_metadata,
      aux_sym_codesystem_repeat1,
    STATE(133), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(141), 3,
      sym_description,
      sym_id,
      sym_title,
    ACTIONS(232), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1954] = 12,
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
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    STATE(49), 11,
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
  [2001] = 8,
    ACTIONS(238), 1,
      anon_sym_Instance,
    ACTIONS(240), 1,
      anon_sym_Description,
    ACTIONS(243), 1,
      anon_sym_InstanceOf,
    ACTIONS(246), 1,
      anon_sym_Title,
    ACTIONS(249), 1,
      anon_sym_Usage,
    STATE(48), 2,
      sym_instance_metadata,
      aux_sym_instance_repeat1,
    STATE(120), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(236), 11,
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
      anon_sym_STAR,
  [2040] = 12,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    ACTIONS(254), 1,
      anon_sym_Alias,
    ACTIONS(257), 1,
      anon_sym_Profile,
    ACTIONS(260), 1,
      anon_sym_Extension,
    ACTIONS(263), 1,
      anon_sym_Invariant,
    ACTIONS(266), 1,
      anon_sym_Instance,
    ACTIONS(269), 1,
      anon_sym_ValueSet,
    ACTIONS(272), 1,
      anon_sym_CodeSystem,
    ACTIONS(275), 1,
      anon_sym_Mapping,
    ACTIONS(278), 1,
      anon_sym_Logical,
    ACTIONS(281), 1,
      anon_sym_Resource,
    STATE(49), 11,
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
  [2087] = 7,
    ACTIONS(286), 1,
      anon_sym_Description,
    ACTIONS(289), 1,
      anon_sym_Id,
    ACTIONS(292), 1,
      anon_sym_Parent,
    ACTIONS(295), 1,
      anon_sym_Title,
    STATE(50), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(130), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    ACTIONS(284), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [2124] = 7,
    ACTIONS(300), 1,
      anon_sym_Description,
    ACTIONS(303), 1,
      anon_sym_Expression,
    ACTIONS(306), 1,
      anon_sym_Severity,
    ACTIONS(309), 1,
      anon_sym_XPath,
    STATE(51), 2,
      sym_invariant_metadata,
      aux_sym_invariant_repeat1,
    STATE(137), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
    ACTIONS(298), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [2160] = 3,
    ACTIONS(314), 1,
      anon_sym_STAR,
    ACTIONS(316), 2,
      aux_sym_cardinality_token1,
      anon_sym_STAR2,
    ACTIONS(312), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [2188] = 7,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(320), 1,
      anon_sym_Expression,
    ACTIONS(322), 1,
      anon_sym_Severity,
    ACTIONS(324), 1,
      anon_sym_XPath,
    STATE(51), 2,
      sym_invariant_metadata,
      aux_sym_invariant_repeat1,
    STATE(137), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
    ACTIONS(318), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [2224] = 8,
    ACTIONS(178), 1,
      aux_sym_sequence_token1,
    ACTIONS(328), 1,
      anon_sym_COLON,
    ACTIONS(330), 1,
      anon_sym_POUND,
    ACTIONS(332), 1,
      anon_sym_SQUOTE,
    STATE(362), 1,
      aux_sym_sequence_repeat1,
    STATE(482), 1,
      sym_sequence,
    STATE(104), 2,
      sym_code,
      sym_unit,
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
      anon_sym_STAR,
      anon_sym_LPAREN,
  [2262] = 3,
    STATE(55), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(336), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    ACTIONS(334), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [2290] = 3,
    ACTIONS(341), 1,
      anon_sym_STAR,
    ACTIONS(343), 2,
      aux_sym_cardinality_token1,
      anon_sym_STAR2,
    ACTIONS(339), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [2318] = 3,
    STATE(58), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(71), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    ACTIONS(345), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [2346] = 3,
    STATE(55), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(71), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
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
      anon_sym_STAR,
      anon_sym_and,
  [2374] = 3,
    STATE(60), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(71), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    ACTIONS(349), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [2402] = 3,
    STATE(55), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(71), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    ACTIONS(351), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [2430] = 8,
    ACTIONS(178), 1,
      aux_sym_sequence_token1,
    ACTIONS(328), 1,
      anon_sym_COLON,
    ACTIONS(332), 1,
      anon_sym_SQUOTE,
    ACTIONS(353), 1,
      anon_sym_POUND,
    STATE(362), 1,
      aux_sym_sequence_repeat1,
    STATE(481), 1,
      sym_sequence,
    STATE(104), 2,
      sym_code,
      sym_unit,
    ACTIONS(326), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [2467] = 6,
    ACTIONS(357), 1,
      anon_sym_Description,
    ACTIONS(360), 1,
      anon_sym_Id,
    ACTIONS(363), 1,
      anon_sym_Title,
    STATE(62), 2,
      sym_cs_metadata,
      aux_sym_codesystem_repeat1,
    STATE(141), 3,
      sym_description,
      sym_id,
      sym_title,
    ACTIONS(355), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [2500] = 6,
    ACTIONS(368), 1,
      anon_sym_Description,
    ACTIONS(371), 1,
      anon_sym_Id,
    ACTIONS(374), 1,
      anon_sym_Title,
    STATE(63), 2,
      sym_vs_metadata,
      aux_sym_valueset_repeat1,
    STATE(172), 3,
      sym_description,
      sym_id,
      sym_title,
    ACTIONS(366), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [2533] = 7,
    ACTIONS(157), 1,
      anon_sym_POUND,
    ACTIONS(178), 1,
      aux_sym_sequence_token1,
    ACTIONS(332), 1,
      anon_sym_SQUOTE,
    STATE(362), 1,
      aux_sym_sequence_repeat1,
    STATE(484), 1,
      sym_sequence,
    STATE(104), 2,
      sym_code,
      sym_unit,
    ACTIONS(328), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [2568] = 3,
    STATE(67), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(71), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    ACTIONS(377), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [2595] = 3,
    STATE(55), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(71), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    ACTIONS(379), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [2622] = 3,
    STATE(55), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(71), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    ACTIONS(381), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [2649] = 2,
    ACTIONS(385), 1,
      anon_sym_Instance,
    ACTIONS(383), 19,
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
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_InstanceOf,
      anon_sym_Parent,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_STAR,
  [2674] = 3,
    STATE(55), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(71), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    ACTIONS(387), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [2701] = 3,
    ACTIONS(389), 1,
      aux_sym_sequence_token1,
    STATE(70), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [2727] = 1,
    ACTIONS(392), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [2749] = 8,
    ACTIONS(178), 1,
      aux_sym_sequence_token1,
    ACTIONS(396), 1,
      anon_sym_POUND,
    ACTIONS(398), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_string,
    STATE(241), 1,
      sym_code,
    STATE(362), 1,
      aux_sym_sequence_repeat1,
    STATE(480), 1,
      sym_sequence,
    ACTIONS(394), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [2785] = 3,
    ACTIONS(400), 1,
      aux_sym_sequence_token1,
    STATE(70), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(92), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [2811] = 8,
    ACTIONS(178), 1,
      aux_sym_sequence_token1,
    ACTIONS(396), 1,
      anon_sym_POUND,
    ACTIONS(398), 1,
      anon_sym_DQUOTE,
    STATE(99), 1,
      sym_string,
    STATE(232), 1,
      sym_code,
    STATE(362), 1,
      aux_sym_sequence_repeat1,
    STATE(480), 1,
      sym_sequence,
    ACTIONS(403), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [2847] = 3,
    ACTIONS(405), 1,
      aux_sym_sequence_token1,
    STATE(75), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_STAR,
  [2873] = 3,
    ACTIONS(408), 1,
      aux_sym_sequence_token1,
    STATE(75), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(92), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_STAR,
  [2899] = 1,
    ACTIONS(339), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [2921] = 1,
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
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [2943] = 7,
    ACTIONS(125), 1,
      anon_sym_POUND,
    ACTIONS(178), 1,
      aux_sym_sequence_token1,
    ACTIONS(332), 1,
      anon_sym_SQUOTE,
    STATE(362), 1,
      aux_sym_sequence_repeat1,
    STATE(483), 1,
      sym_sequence,
    STATE(104), 2,
      sym_code,
      sym_unit,
    ACTIONS(328), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [2977] = 3,
    ACTIONS(412), 1,
      aux_sym_sequence_token1,
    STATE(84), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(92), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
      anon_sym_STAR,
  [3002] = 4,
    ACTIONS(82), 1,
      anon_sym_Instance,
    ACTIONS(414), 1,
      aux_sym_sequence_token1,
    STATE(81), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 15,
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
      anon_sym_Description,
      anon_sym_InstanceOf,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_STAR,
  [3029] = 2,
    ACTIONS(419), 1,
      aux_sym_sequence_token1,
    ACTIONS(417), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [3052] = 1,
    ACTIONS(421), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_STAR,
  [3073] = 3,
    ACTIONS(423), 1,
      aux_sym_sequence_token1,
    STATE(84), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
      anon_sym_STAR,
  [3098] = 4,
    ACTIONS(96), 1,
      anon_sym_Instance,
    ACTIONS(426), 1,
      aux_sym_sequence_token1,
    STATE(81), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(92), 15,
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
      anon_sym_Description,
      anon_sym_InstanceOf,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_STAR,
  [3125] = 3,
    ACTIONS(428), 1,
      aux_sym_sequence_token1,
    STATE(88), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(92), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_and,
      anon_sym_DQUOTE,
  [3149] = 1,
    ACTIONS(430), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_STAR,
  [3169] = 3,
    ACTIONS(432), 1,
      aux_sym_sequence_token1,
    STATE(88), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_and,
      anon_sym_DQUOTE,
  [3193] = 3,
    ACTIONS(435), 1,
      aux_sym_sequence_token1,
    STATE(90), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(92), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [3217] = 3,
    ACTIONS(437), 1,
      aux_sym_sequence_token1,
    STATE(90), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [3241] = 6,
    ACTIONS(178), 1,
      aux_sym_sequence_token1,
    ACTIONS(396), 1,
      anon_sym_POUND,
    STATE(232), 1,
      sym_code,
    STATE(362), 1,
      aux_sym_sequence_repeat1,
    STATE(480), 1,
      sym_sequence,
    ACTIONS(403), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3271] = 10,
    ACTIONS(139), 1,
      anon_sym_Reference,
    ACTIONS(141), 1,
      anon_sym_Canonical,
    ACTIONS(440), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(181), 1,
      sym_reference,
    STATE(340), 1,
      aux_sym_sequence_repeat1,
    STATE(347), 1,
      sym_target_type,
    STATE(209), 2,
      sym_name,
      sym_canonical,
    STATE(257), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(442), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [3309] = 3,
    ACTIONS(444), 1,
      aux_sym_sequence_token1,
    STATE(95), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(92), 15,
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
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [3333] = 1,
    ACTIONS(446), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_STAR,
  [3353] = 3,
    ACTIONS(448), 1,
      aux_sym_sequence_token1,
    STATE(95), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 15,
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
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [3377] = 3,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    STATE(170), 1,
      sym_string,
    ACTIONS(451), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_LPAREN,
      anon_sym_and,
  [3401] = 3,
    ACTIONS(453), 1,
      aux_sym_sequence_token1,
    STATE(97), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Title,
      anon_sym_STAR,
  [3425] = 3,
    ACTIONS(456), 1,
      aux_sym_sequence_token1,
    STATE(97), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(92), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Title,
      anon_sym_STAR,
  [3449] = 6,
    ACTIONS(178), 1,
      aux_sym_sequence_token1,
    ACTIONS(396), 1,
      anon_sym_POUND,
    STATE(234), 1,
      sym_code,
    STATE(362), 1,
      aux_sym_sequence_repeat1,
    STATE(480), 1,
      sym_sequence,
    ACTIONS(458), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3479] = 1,
    ACTIONS(460), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_STAR,
  [3499] = 10,
    ACTIONS(139), 1,
      anon_sym_Reference,
    ACTIONS(141), 1,
      anon_sym_Canonical,
    ACTIONS(440), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(181), 1,
      sym_reference,
    STATE(340), 1,
      aux_sym_sequence_repeat1,
    STATE(341), 1,
      sym_target_type,
    STATE(92), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    STATE(209), 2,
      sym_name,
      sym_canonical,
    ACTIONS(442), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [3537] = 14,
    ACTIONS(65), 1,
      anon_sym_CARET,
    ACTIONS(464), 1,
      anon_sym_codes,
    ACTIONS(466), 1,
      anon_sym_system,
    ACTIONS(468), 1,
      anon_sym_POUND,
    ACTIONS(470), 1,
      aux_sym_sequence_token1,
    STATE(96), 1,
      sym_code,
    STATE(131), 1,
      sym_code_string,
    STATE(273), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(355), 1,
      aux_sym_sequence_repeat1,
    STATE(427), 1,
      sym_path,
    STATE(431), 1,
      sym_sequence,
    STATE(449), 1,
      sym_caret_path,
    ACTIONS(462), 2,
      anon_sym_include,
      anon_sym_exclude,
    STATE(238), 2,
      sym_vs_concept_component,
      sym_vs_filter_component,
  [3582] = 4,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(131), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(231), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(472), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3607] = 3,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    STATE(192), 1,
      sym_string,
    ACTIONS(474), 14,
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
      anon_sym_STAR,
      anon_sym_LPAREN,
  [3630] = 3,
    ACTIONS(476), 1,
      aux_sym_sequence_token1,
    STATE(105), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_where,
  [3653] = 3,
    ACTIONS(479), 1,
      aux_sym_sequence_token1,
    STATE(105), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(92), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_where,
  [3676] = 2,
    ACTIONS(483), 1,
      anon_sym_Instance,
    ACTIONS(481), 15,
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
      anon_sym_Description,
      anon_sym_InstanceOf,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_STAR,
  [3697] = 2,
    ACTIONS(487), 1,
      anon_sym_Instance,
    ACTIONS(485), 15,
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
      anon_sym_Description,
      anon_sym_InstanceOf,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_STAR,
  [3718] = 3,
    ACTIONS(489), 1,
      aux_sym_sequence_token1,
    STATE(109), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3741] = 4,
    ACTIONS(151), 1,
      anon_sym_STAR,
    STATE(111), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(240), 2,
      sym_fixed_value_rule,
      sym_path_rule,
    ACTIONS(492), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3766] = 4,
    ACTIONS(496), 1,
      anon_sym_STAR,
    STATE(111), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(240), 2,
      sym_fixed_value_rule,
      sym_path_rule,
    ACTIONS(494), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3791] = 4,
    ACTIONS(151), 1,
      anon_sym_STAR,
    STATE(111), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(240), 2,
      sym_fixed_value_rule,
      sym_path_rule,
    ACTIONS(143), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3816] = 3,
    ACTIONS(499), 1,
      aux_sym_sequence_token1,
    STATE(113), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3839] = 4,
    ACTIONS(190), 1,
      anon_sym_STAR,
    STATE(122), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(230), 2,
      sym_caret_value_rule,
      sym_vs_component,
    ACTIONS(192), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3864] = 3,
    ACTIONS(502), 1,
      aux_sym_sequence_token1,
    STATE(117), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(92), 14,
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
      anon_sym_STAR,
      anon_sym_DQUOTE,
  [3887] = 3,
    ACTIONS(504), 1,
      aux_sym_sequence_token1,
    STATE(113), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(92), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3910] = 3,
    ACTIONS(506), 1,
      aux_sym_sequence_token1,
    STATE(117), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 14,
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
      anon_sym_STAR,
      anon_sym_DQUOTE,
  [3933] = 4,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(131), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(233), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(509), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3958] = 4,
    ACTIONS(112), 1,
      anon_sym_STAR,
    STATE(127), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(248), 2,
      sym_path_rule,
      sym_mapping_rule,
    ACTIONS(104), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3983] = 2,
    ACTIONS(513), 1,
      anon_sym_Instance,
    ACTIONS(511), 15,
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
      anon_sym_Description,
      anon_sym_InstanceOf,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_STAR,
  [4004] = 4,
    ACTIONS(190), 1,
      anon_sym_STAR,
    STATE(122), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(230), 2,
      sym_caret_value_rule,
      sym_vs_component,
    ACTIONS(515), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [4029] = 4,
    ACTIONS(519), 1,
      anon_sym_STAR,
    STATE(122), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(230), 2,
      sym_caret_value_rule,
      sym_vs_component,
    ACTIONS(517), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [4054] = 3,
    ACTIONS(522), 1,
      aux_sym_sequence_token1,
    STATE(123), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_DQUOTE,
  [4077] = 1,
    ACTIONS(525), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
      anon_sym_STAR,
  [4096] = 3,
    ACTIONS(527), 1,
      aux_sym_sequence_token1,
    STATE(109), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(92), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [4119] = 4,
    ACTIONS(112), 1,
      anon_sym_STAR,
    STATE(127), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(248), 2,
      sym_path_rule,
      sym_mapping_rule,
    ACTIONS(529), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [4144] = 4,
    ACTIONS(533), 1,
      anon_sym_STAR,
    STATE(127), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(248), 2,
      sym_path_rule,
      sym_mapping_rule,
    ACTIONS(531), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [4169] = 3,
    ACTIONS(536), 1,
      aux_sym_sequence_token1,
    STATE(123), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(92), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_DQUOTE,
  [4192] = 4,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(131), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(242), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(538), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [4217] = 1,
    ACTIONS(540), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
      anon_sym_STAR,
  [4236] = 4,
    ACTIONS(544), 1,
      anon_sym_from,
    ACTIONS(546), 1,
      anon_sym_and,
    STATE(249), 1,
      sym_vs_component_from,
    ACTIONS(542), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [4260] = 1,
    ACTIONS(548), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_or,
      anon_sym_DQUOTE,
  [4278] = 4,
    ACTIONS(228), 1,
      anon_sym_STAR,
    STATE(243), 1,
      sym_code_caret_value_rule,
    STATE(134), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    ACTIONS(550), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [4302] = 4,
    ACTIONS(554), 1,
      anon_sym_STAR,
    STATE(243), 1,
      sym_code_caret_value_rule,
    STATE(134), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    ACTIONS(552), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [4326] = 1,
    ACTIONS(557), 15,
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
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [4344] = 3,
    ACTIONS(559), 1,
      aux_sym_sequence_token1,
    STATE(136), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [4366] = 1,
    ACTIONS(562), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [4384] = 3,
    ACTIONS(566), 1,
      anon_sym_and,
    STATE(138), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(564), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_where,
  [4406] = 3,
    ACTIONS(569), 1,
      aux_sym_sequence_token1,
    STATE(140), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(92), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [4428] = 3,
    ACTIONS(571), 1,
      aux_sym_sequence_token1,
    STATE(140), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [4450] = 1,
    ACTIONS(574), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Title,
      anon_sym_STAR,
  [4468] = 2,
    STATE(138), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(576), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_where,
  [4488] = 3,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    STATE(225), 1,
      sym_string,
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
      anon_sym_STAR,
      anon_sym_LPAREN,
  [4510] = 3,
    ACTIONS(578), 1,
      aux_sym_sequence_token1,
    STATE(146), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(92), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [4532] = 3,
    ACTIONS(580), 1,
      aux_sym_sequence_token1,
    STATE(145), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 13,
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
  [4554] = 3,
    ACTIONS(583), 1,
      aux_sym_sequence_token1,
    STATE(146), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [4576] = 3,
    ACTIONS(586), 1,
      aux_sym_sequence_token1,
    STATE(145), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(92), 13,
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
  [4598] = 4,
    ACTIONS(228), 1,
      anon_sym_STAR,
    STATE(243), 1,
      sym_code_caret_value_rule,
    STATE(134), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    ACTIONS(232), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [4622] = 3,
    ACTIONS(588), 1,
      aux_sym_sequence_token1,
    STATE(151), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(92), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_or,
  [4644] = 3,
    ACTIONS(590), 1,
      aux_sym_sequence_token1,
    STATE(156), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(92), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_where,
  [4666] = 3,
    ACTIONS(592), 1,
      aux_sym_sequence_token1,
    STATE(151), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_or,
  [4688] = 2,
    ACTIONS(86), 1,
      aux_sym_sequence_token1,
    ACTIONS(84), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_DQUOTE,
  [4708] = 1,
    ACTIONS(595), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_or,
      anon_sym_DQUOTE,
  [4726] = 3,
    ACTIONS(597), 1,
      aux_sym_sequence_token1,
    STATE(155), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(92), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [4748] = 3,
    ACTIONS(599), 1,
      aux_sym_sequence_token1,
    STATE(155), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [4770] = 3,
    ACTIONS(602), 1,
      aux_sym_sequence_token1,
    STATE(156), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_where,
  [4792] = 1,
    ACTIONS(605), 15,
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
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [4810] = 3,
    ACTIONS(607), 1,
      aux_sym_sequence_token1,
    STATE(158), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_DASH_GT,
  [4832] = 3,
    ACTIONS(610), 1,
      anon_sym_and,
    STATE(138), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(576), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_where,
  [4854] = 3,
    ACTIONS(612), 1,
      aux_sym_sequence_token1,
    STATE(158), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(92), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_DASH_GT,
  [4876] = 1,
    ACTIONS(614), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_or,
      anon_sym_DQUOTE,
  [4894] = 3,
    ACTIONS(610), 1,
      anon_sym_and,
    STATE(159), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(616), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_where,
  [4916] = 1,
    ACTIONS(618), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [4934] = 1,
    ACTIONS(620), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [4952] = 1,
    ACTIONS(622), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [4970] = 1,
    ACTIONS(624), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_or,
      anon_sym_DQUOTE,
  [4988] = 1,
    ACTIONS(626), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_or,
      anon_sym_DQUOTE,
  [5006] = 2,
    STATE(142), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(616), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_where,
  [5026] = 3,
    ACTIONS(628), 1,
      aux_sym_sequence_token1,
    STATE(136), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(92), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5048] = 1,
    ACTIONS(630), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_LPAREN,
      anon_sym_and,
  [5066] = 1,
    ACTIONS(632), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_or,
      anon_sym_DQUOTE,
  [5084] = 1,
    ACTIONS(634), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Title,
      anon_sym_STAR,
  [5102] = 2,
    ACTIONS(90), 1,
      aux_sym_sequence_token1,
    ACTIONS(88), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_DQUOTE,
  [5122] = 1,
    ACTIONS(636), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_where,
  [5139] = 3,
    ACTIONS(640), 1,
      anon_sym_and,
    STATE(180), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(638), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5160] = 2,
    STATE(202), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(616), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5179] = 3,
    ACTIONS(644), 1,
      anon_sym_and,
    STATE(193), 1,
      aux_sym_contains_rule_repeat1,
    ACTIONS(642), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5200] = 3,
    ACTIONS(648), 1,
      anon_sym_or,
    STATE(200), 1,
      aux_sym_only_rule_repeat1,
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
      anon_sym_STAR,
  [5221] = 3,
    ACTIONS(650), 1,
      aux_sym_sequence_token1,
    STATE(179), 1,
      aux_sym_sequence_repeat1,
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
      anon_sym_STAR,
  [5242] = 3,
    ACTIONS(653), 1,
      anon_sym_and,
    STATE(180), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(564), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5263] = 1,
    ACTIONS(656), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_or,
      anon_sym_DQUOTE,
  [5280] = 3,
    ACTIONS(658), 1,
      aux_sym_sequence_token1,
    STATE(179), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(92), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5301] = 3,
    ACTIONS(662), 1,
      anon_sym_and,
    STATE(201), 1,
      aux_sym_vs_filter_list_repeat1,
    ACTIONS(660), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5322] = 1,
    ACTIONS(564), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_where,
  [5339] = 2,
    ACTIONS(90), 1,
      aux_sym_sequence_token1,
    ACTIONS(88), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5358] = 2,
    ACTIONS(86), 1,
      aux_sym_sequence_token1,
    ACTIONS(84), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5377] = 3,
    ACTIONS(664), 1,
      aux_sym_sequence_token1,
    STATE(189), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(92), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5398] = 3,
    ACTIONS(640), 1,
      anon_sym_and,
    STATE(180), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(666), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5419] = 3,
    ACTIONS(668), 1,
      aux_sym_sequence_token1,
    STATE(189), 1,
      aux_sym_sequence_repeat1,
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
      anon_sym_POUND,
  [5440] = 3,
    ACTIONS(673), 1,
      anon_sym_and,
    STATE(190), 1,
      aux_sym_vs_filter_list_repeat1,
    ACTIONS(671), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5461] = 2,
    ACTIONS(678), 1,
      anon_sym_T,
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
      anon_sym_STAR,
      anon_sym_LPAREN,
  [5480] = 1,
    ACTIONS(680), 14,
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
      anon_sym_STAR,
      anon_sym_LPAREN,
  [5497] = 3,
    ACTIONS(684), 1,
      anon_sym_and,
    STATE(193), 1,
      aux_sym_contains_rule_repeat1,
    ACTIONS(682), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5518] = 1,
    ACTIONS(687), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_or,
      anon_sym_DQUOTE,
  [5535] = 2,
    ACTIONS(691), 1,
      anon_sym_and,
    ACTIONS(689), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_where,
  [5554] = 2,
    ACTIONS(328), 1,
      anon_sym_COLON,
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
      anon_sym_STAR,
      anon_sym_LPAREN,
  [5573] = 2,
    ACTIONS(693), 1,
      anon_sym_and,
    ACTIONS(689), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_where,
  [5592] = 3,
    ACTIONS(640), 1,
      anon_sym_and,
    STATE(188), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(695), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5613] = 3,
    ACTIONS(648), 1,
      anon_sym_or,
    STATE(178), 1,
      aux_sym_only_rule_repeat1,
    ACTIONS(697), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5634] = 3,
    ACTIONS(699), 1,
      anon_sym_or,
    STATE(200), 1,
      aux_sym_only_rule_repeat1,
    ACTIONS(687), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5655] = 3,
    ACTIONS(662), 1,
      anon_sym_and,
    STATE(190), 1,
      aux_sym_vs_filter_list_repeat1,
    ACTIONS(702), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5676] = 2,
    STATE(180), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(576), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5695] = 3,
    ACTIONS(640), 1,
      anon_sym_and,
    STATE(205), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(616), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5716] = 3,
    ACTIONS(706), 1,
      anon_sym_LPAREN,
    STATE(244), 1,
      sym_strength,
    ACTIONS(704), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5737] = 3,
    ACTIONS(640), 1,
      anon_sym_and,
    STATE(180), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(576), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5758] = 3,
    ACTIONS(644), 1,
      anon_sym_and,
    STATE(177), 1,
      aux_sym_contains_rule_repeat1,
    ACTIONS(708), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5779] = 2,
    ACTIONS(710), 1,
      anon_sym_POUND,
    ACTIONS(73), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5798] = 3,
    ACTIONS(640), 1,
      anon_sym_and,
    STATE(175), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(666), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5819] = 1,
    ACTIONS(712), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_or,
      anon_sym_DQUOTE,
  [5836] = 3,
    ACTIONS(714), 1,
      aux_sym_sequence_token1,
    STATE(224), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(92), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [5856] = 2,
    ACTIONS(716), 1,
      anon_sym_DASH_GT,
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
      anon_sym_STAR,
  [5874] = 2,
    ACTIONS(720), 1,
      anon_sym_LPAREN,
    ACTIONS(718), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5892] = 2,
    ACTIONS(722), 1,
      anon_sym_and,
    ACTIONS(689), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5910] = 1,
    ACTIONS(671), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5926] = 1,
    ACTIONS(724), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5942] = 2,
    ACTIONS(726), 1,
      anon_sym_and,
    ACTIONS(689), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5960] = 1,
    ACTIONS(328), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5976] = 1,
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
      anon_sym_STAR,
      anon_sym_LPAREN,
  [5992] = 2,
    ACTIONS(732), 1,
      anon_sym_where,
    ACTIONS(730), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [6010] = 1,
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
      anon_sym_STAR,
      anon_sym_and,
  [6026] = 1,
    ACTIONS(734), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [6042] = 1,
    ACTIONS(736), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [6058] = 2,
    ACTIONS(738), 1,
      anon_sym_POUND,
    ACTIONS(73), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [6076] = 3,
    ACTIONS(740), 1,
      aux_sym_sequence_token1,
    STATE(224), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [6096] = 1,
    ACTIONS(743), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [6112] = 2,
    ACTIONS(53), 1,
      anon_sym_EQ,
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
      anon_sym_STAR,
  [6130] = 1,
    ACTIONS(745), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_where,
  [6146] = 1,
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
      anon_sym_STAR,
      anon_sym_LPAREN,
  [6162] = 1,
    ACTIONS(747), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [6178] = 1,
    ACTIONS(749), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [6193] = 1,
    ACTIONS(751), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [6208] = 1,
    ACTIONS(458), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [6223] = 1,
    ACTIONS(538), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [6238] = 1,
    ACTIONS(753), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [6253] = 1,
    ACTIONS(755), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [6268] = 1,
    ACTIONS(757), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [6283] = 1,
    ACTIONS(759), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [6298] = 1,
    ACTIONS(761), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [6313] = 1,
    ACTIONS(763), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [6328] = 1,
    ACTIONS(765), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [6343] = 1,
    ACTIONS(403), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [6358] = 1,
    ACTIONS(472), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [6373] = 1,
    ACTIONS(767), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [6388] = 1,
    ACTIONS(769), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [6403] = 1,
    ACTIONS(771), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [6418] = 1,
    ACTIONS(773), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [6433] = 1,
    ACTIONS(775), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [6448] = 1,
    ACTIONS(777), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [6463] = 1,
    ACTIONS(779), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [6478] = 1,
    ACTIONS(781), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [6493] = 2,
    ACTIONS(785), 1,
      anon_sym_POUND,
    ACTIONS(783), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [6510] = 1,
    ACTIONS(787), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [6525] = 1,
    ACTIONS(789), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [6540] = 4,
    ACTIONS(314), 1,
      aux_sym_sequence_token1,
    ACTIONS(791), 1,
      aux_sym_cardinality_token1,
    ACTIONS(793), 1,
      anon_sym_STAR2,
    ACTIONS(312), 8,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [6560] = 1,
    ACTIONS(783), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [6574] = 4,
    ACTIONS(341), 1,
      aux_sym_sequence_token1,
    ACTIONS(795), 1,
      aux_sym_cardinality_token1,
    ACTIONS(797), 1,
      anon_sym_STAR2,
    ACTIONS(339), 8,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [6594] = 4,
    ACTIONS(799), 1,
      aux_sym_sequence_token1,
    ACTIONS(334), 2,
      anon_sym_Reference,
      anon_sym_Canonical,
    STATE(257), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(801), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [6614] = 9,
    ACTIONS(178), 1,
      aux_sym_sequence_token1,
    ACTIONS(464), 1,
      anon_sym_codes,
    ACTIONS(468), 1,
      anon_sym_POUND,
    STATE(96), 1,
      sym_code,
    STATE(131), 1,
      sym_code_string,
    STATE(273), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(362), 1,
      aux_sym_sequence_repeat1,
    STATE(476), 1,
      sym_sequence,
    STATE(246), 2,
      sym_vs_concept_component,
      sym_vs_filter_component,
  [6643] = 6,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(29), 1,
      anon_sym_Id,
    ACTIONS(31), 1,
      anon_sym_Parent,
    ACTIONS(33), 1,
      anon_sym_Title,
    STATE(7), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(130), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
  [6666] = 6,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(320), 1,
      anon_sym_Expression,
    ACTIONS(322), 1,
      anon_sym_Severity,
    ACTIONS(324), 1,
      anon_sym_XPath,
    STATE(53), 2,
      sym_invariant_metadata,
      aux_sym_invariant_repeat1,
    STATE(137), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
  [6689] = 4,
    ACTIONS(59), 1,
      anon_sym_and,
    STATE(272), 1,
      aux_sym_flag_rule_repeat1,
    STATE(66), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(71), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [6708] = 2,
    ACTIONS(804), 1,
      aux_sym_sequence_token1,
    ACTIONS(392), 8,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [6722] = 8,
    ACTIONS(139), 1,
      anon_sym_Reference,
    ACTIONS(141), 1,
      anon_sym_Canonical,
    ACTIONS(806), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(149), 1,
      aux_sym_sequence_repeat1,
    STATE(181), 1,
      sym_reference,
    STATE(199), 1,
      sym_target_type,
    STATE(209), 2,
      sym_name,
      sym_canonical,
  [6748] = 3,
    ACTIONS(808), 1,
      aux_sym_sequence_token1,
    STATE(264), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 7,
      anon_sym_and,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [6764] = 9,
    ACTIONS(65), 1,
      anon_sym_CARET,
    ACTIONS(466), 1,
      anon_sym_system,
    ACTIONS(811), 1,
      anon_sym_obeys,
    ACTIONS(813), 1,
      aux_sym_sequence_token1,
    STATE(9), 1,
      sym_path,
    STATE(14), 1,
      aux_sym_sequence_repeat1,
    STATE(21), 1,
      sym_sequence,
    STATE(390), 1,
      sym_name,
    STATE(449), 1,
      sym_caret_path,
  [6792] = 8,
    ACTIONS(139), 1,
      anon_sym_Reference,
    ACTIONS(141), 1,
      anon_sym_Canonical,
    ACTIONS(806), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(149), 1,
      aux_sym_sequence_repeat1,
    STATE(181), 1,
      sym_reference,
    STATE(194), 1,
      sym_target_type,
    STATE(209), 2,
      sym_name,
      sym_canonical,
  [6818] = 9,
    ACTIONS(65), 1,
      anon_sym_CARET,
    ACTIONS(466), 1,
      anon_sym_system,
    ACTIONS(811), 1,
      anon_sym_obeys,
    ACTIONS(813), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      aux_sym_sequence_repeat1,
    STATE(15), 1,
      sym_path,
    STATE(22), 1,
      sym_sequence,
    STATE(390), 1,
      sym_name,
    STATE(449), 1,
      sym_caret_path,
  [6846] = 3,
    ACTIONS(815), 1,
      aux_sym_sequence_token1,
    STATE(264), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(92), 7,
      anon_sym_and,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [6862] = 2,
    ACTIONS(817), 1,
      aux_sym_sequence_token1,
    ACTIONS(410), 8,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [6876] = 8,
    ACTIONS(139), 1,
      anon_sym_Reference,
    ACTIONS(141), 1,
      anon_sym_Canonical,
    ACTIONS(440), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(181), 1,
      sym_reference,
    STATE(194), 1,
      sym_target_type,
    STATE(340), 1,
      aux_sym_sequence_repeat1,
    STATE(209), 2,
      sym_name,
      sym_canonical,
  [6902] = 2,
    ACTIONS(341), 1,
      aux_sym_sequence_token1,
    ACTIONS(339), 8,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [6916] = 3,
    ACTIONS(819), 1,
      anon_sym_and,
    STATE(272), 1,
      aux_sym_flag_rule_repeat1,
    ACTIONS(822), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [6931] = 7,
    ACTIONS(178), 1,
      aux_sym_sequence_token1,
    ACTIONS(824), 1,
      anon_sym_POUND,
    STATE(96), 1,
      sym_code,
    STATE(275), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(359), 1,
      sym_code_string,
    STATE(362), 1,
      aux_sym_sequence_repeat1,
    STATE(477), 1,
      sym_sequence,
  [6953] = 1,
    ACTIONS(822), 7,
      anon_sym_and,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [6963] = 7,
    ACTIONS(826), 1,
      anon_sym_POUND,
    ACTIONS(829), 1,
      aux_sym_sequence_token1,
    STATE(96), 1,
      sym_code,
    STATE(275), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(362), 1,
      aux_sym_sequence_repeat1,
    STATE(442), 1,
      sym_code_string,
    STATE(479), 1,
      sym_sequence,
  [6985] = 6,
    ACTIONS(466), 1,
      anon_sym_system,
    ACTIONS(832), 1,
      anon_sym_DASH_GT,
    ACTIONS(834), 1,
      aux_sym_sequence_token1,
    STATE(16), 1,
      sym_sequence,
    STATE(160), 1,
      aux_sym_sequence_repeat1,
    STATE(211), 1,
      sym_path,
  [7004] = 3,
    ACTIONS(836), 1,
      aux_sym_sequence_token1,
    STATE(281), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(92), 4,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [7017] = 6,
    ACTIONS(838), 1,
      aux_sym_sequence_token1,
    STATE(183), 1,
      sym_vs_filter_definition,
    STATE(250), 1,
      sym_vs_filter_list,
    STATE(294), 1,
      sym_name,
    STATE(398), 1,
      aux_sym_sequence_repeat1,
    STATE(428), 1,
      sym_sequence,
  [7036] = 3,
    ACTIONS(840), 1,
      aux_sym_sequence_token1,
    STATE(279), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 4,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
  [7049] = 3,
    ACTIONS(843), 1,
      aux_sym_sequence_token1,
    STATE(279), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(92), 4,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
  [7062] = 3,
    ACTIONS(845), 1,
      aux_sym_sequence_token1,
    STATE(281), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 4,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [7075] = 5,
    ACTIONS(848), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(220), 1,
      sym_item,
    STATE(287), 1,
      aux_sym_sequence_repeat1,
    STATE(352), 1,
      sym_name,
  [7091] = 5,
    ACTIONS(178), 1,
      aux_sym_sequence_token1,
    ACTIONS(850), 1,
      anon_sym_POUND,
    STATE(362), 1,
      aux_sym_sequence_repeat1,
    STATE(426), 1,
      sym_code,
    STATE(462), 1,
      sym_sequence,
  [7107] = 5,
    ACTIONS(466), 1,
      anon_sym_system,
    ACTIONS(852), 1,
      aux_sym_sequence_token1,
    STATE(16), 1,
      sym_sequence,
    STATE(147), 1,
      aux_sym_sequence_repeat1,
    STATE(226), 1,
      sym_path,
  [7123] = 5,
    ACTIONS(838), 1,
      aux_sym_sequence_token1,
    STATE(214), 1,
      sym_vs_filter_definition,
    STATE(294), 1,
      sym_name,
    STATE(398), 1,
      aux_sym_sequence_repeat1,
    STATE(428), 1,
      sym_sequence,
  [7139] = 5,
    ACTIONS(466), 1,
      anon_sym_system,
    ACTIONS(854), 1,
      aux_sym_sequence_token1,
    STATE(16), 1,
      sym_sequence,
    STATE(268), 1,
      aux_sym_sequence_repeat1,
    STATE(274), 1,
      sym_path,
  [7155] = 4,
    ACTIONS(96), 1,
      aux_sym_cardinality_token1,
    ACTIONS(856), 1,
      aux_sym_sequence_token1,
    STATE(288), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(92), 2,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [7169] = 4,
    ACTIONS(82), 1,
      aux_sym_cardinality_token1,
    ACTIONS(858), 1,
      aux_sym_sequence_token1,
    STATE(288), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 2,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [7183] = 5,
    ACTIONS(861), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      aux_sym_sequence_token1,
    STATE(187), 1,
      aux_sym_sequence_repeat1,
    STATE(251), 1,
      sym_sequence,
    STATE(255), 1,
      sym_code,
  [7199] = 3,
    ACTIONS(865), 1,
      aux_sym_sequence_token1,
    STATE(293), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(92), 3,
      anon_sym_from,
      anon_sym_and,
      anon_sym_DQUOTE,
  [7211] = 5,
    ACTIONS(848), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(206), 1,
      sym_item,
    STATE(287), 1,
      aux_sym_sequence_repeat1,
    STATE(352), 1,
      sym_name,
  [7227] = 5,
    ACTIONS(178), 1,
      aux_sym_sequence_token1,
    ACTIONS(867), 1,
      anon_sym_POUND,
    STATE(107), 1,
      sym_code,
    STATE(362), 1,
      aux_sym_sequence_repeat1,
    STATE(475), 1,
      sym_sequence,
  [7243] = 3,
    ACTIONS(869), 1,
      aux_sym_sequence_token1,
    STATE(293), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 3,
      anon_sym_from,
      anon_sym_and,
      anon_sym_DQUOTE,
  [7255] = 5,
    ACTIONS(872), 1,
      anon_sym_EQ,
    ACTIONS(874), 1,
      aux_sym_sequence_token1,
    STATE(34), 1,
      sym_vs_filter_operator,
    STATE(73), 1,
      aux_sym_sequence_repeat1,
    STATE(82), 1,
      sym_sequence,
  [7271] = 5,
    ACTIONS(178), 1,
      aux_sym_sequence_token1,
    ACTIONS(876), 1,
      anon_sym_POUND,
    STATE(100), 1,
      sym_code,
    STATE(362), 1,
      aux_sym_sequence_repeat1,
    STATE(478), 1,
      sym_sequence,
  [7287] = 3,
    ACTIONS(878), 1,
      aux_sym_sequence_token1,
    STATE(296), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE,
  [7299] = 5,
    ACTIONS(178), 1,
      aux_sym_sequence_token1,
    ACTIONS(881), 1,
      anon_sym_POUND,
    STATE(164), 1,
      sym_code,
    STATE(362), 1,
      aux_sym_sequence_repeat1,
    STATE(467), 1,
      sym_sequence,
  [7315] = 3,
    ACTIONS(883), 1,
      aux_sym_sequence_token1,
    STATE(296), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(92), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE,
  [7327] = 4,
    ACTIONS(885), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(80), 1,
      aux_sym_sequence_repeat1,
    STATE(83), 1,
      sym_name,
  [7340] = 4,
    ACTIONS(887), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(106), 1,
      aux_sym_sequence_repeat1,
    STATE(162), 1,
      sym_name,
  [7353] = 4,
    ACTIONS(889), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(169), 1,
      aux_sym_sequence_repeat1,
    STATE(208), 1,
      sym_name,
  [7366] = 4,
    ACTIONS(887), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(106), 1,
      aux_sym_sequence_repeat1,
    STATE(174), 1,
      sym_name,
  [7379] = 4,
    ACTIONS(891), 1,
      anon_sym_RPAREN,
    ACTIONS(893), 1,
      anon_sym_or,
    ACTIONS(895), 1,
      anon_sym_PIPE,
    STATE(413), 1,
      aux_sym_canonical_repeat1,
  [7392] = 4,
    ACTIONS(887), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(106), 1,
      aux_sym_sequence_repeat1,
    STATE(168), 1,
      sym_name,
  [7405] = 4,
    ACTIONS(897), 1,
      anon_sym_system,
    ACTIONS(899), 1,
      anon_sym_valueset,
    STATE(213), 1,
      sym_vs_from_valueset,
    STATE(216), 1,
      sym_vs_from_system,
  [7418] = 4,
    ACTIONS(889), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(169), 1,
      aux_sym_sequence_repeat1,
    STATE(203), 1,
      sym_name,
  [7431] = 4,
    ACTIONS(901), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(144), 1,
      aux_sym_sequence_repeat1,
    STATE(204), 1,
      sym_name,
  [7444] = 4,
    ACTIONS(903), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(174), 1,
      sym_name,
    STATE(182), 1,
      aux_sym_sequence_repeat1,
  [7457] = 4,
    ACTIONS(905), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(150), 1,
      aux_sym_sequence_repeat1,
    STATE(174), 1,
      sym_name,
  [7470] = 3,
    ACTIONS(907), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(350), 1,
      aux_sym_string_repeat1,
    ACTIONS(909), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7481] = 3,
    ACTIONS(911), 1,
      anon_sym_DQUOTE,
    STATE(351), 1,
      aux_sym_string_repeat1,
    ACTIONS(913), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7492] = 3,
    ACTIONS(915), 1,
      anon_sym_DQUOTE,
    STATE(342), 1,
      aux_sym_string_repeat1,
    ACTIONS(917), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7503] = 3,
    ACTIONS(919), 1,
      anon_sym_DQUOTE,
    STATE(312), 1,
      aux_sym_string_repeat1,
    ACTIONS(921), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7514] = 4,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(923), 1,
      anon_sym_or,
    STATE(103), 1,
      sym_string,
    STATE(408), 1,
      aux_sym_only_rule_repeat1,
  [7527] = 4,
    ACTIONS(925), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(76), 1,
      aux_sym_sequence_repeat1,
    STATE(83), 1,
      sym_name,
  [7540] = 4,
    ACTIONS(889), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(169), 1,
      aux_sym_sequence_repeat1,
    STATE(176), 1,
      sym_name,
  [7553] = 4,
    ACTIONS(889), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(169), 1,
      aux_sym_sequence_repeat1,
    STATE(174), 1,
      sym_name,
  [7566] = 4,
    ACTIONS(887), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(106), 1,
      aux_sym_sequence_repeat1,
    STATE(184), 1,
      sym_name,
  [7579] = 3,
    ACTIONS(927), 1,
      anon_sym_DQUOTE,
    STATE(342), 1,
      aux_sym_string_repeat1,
    ACTIONS(917), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7590] = 3,
    ACTIONS(929), 1,
      anon_sym_DQUOTE,
    STATE(319), 1,
      aux_sym_string_repeat1,
    ACTIONS(931), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7601] = 4,
    ACTIONS(933), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(83), 1,
      sym_name,
    STATE(98), 1,
      aux_sym_sequence_repeat1,
  [7614] = 4,
    ACTIONS(935), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(259), 1,
      sym_name,
    STATE(280), 1,
      aux_sym_sequence_repeat1,
  [7627] = 4,
    ACTIONS(92), 1,
      anon_sym_DOT_DOT,
    ACTIONS(96), 1,
      aux_sym_cardinality_token1,
    ACTIONS(937), 1,
      aux_sym_sequence_token1,
    STATE(324), 1,
      aux_sym_sequence_repeat1,
  [7640] = 4,
    ACTIONS(77), 1,
      anon_sym_DOT_DOT,
    ACTIONS(82), 1,
      aux_sym_cardinality_token1,
    ACTIONS(939), 1,
      aux_sym_sequence_token1,
    STATE(324), 1,
      aux_sym_sequence_repeat1,
  [7653] = 4,
    ACTIONS(885), 1,
      aux_sym_sequence_token1,
    STATE(8), 1,
      sym_name,
    STATE(10), 1,
      sym_sequence,
    STATE(80), 1,
      aux_sym_sequence_repeat1,
  [7666] = 4,
    ACTIONS(942), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(260), 1,
      sym_name,
    STATE(277), 1,
      aux_sym_sequence_repeat1,
  [7679] = 3,
    ACTIONS(944), 1,
      aux_sym_sequence_token1,
    STATE(328), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(92), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [7690] = 3,
    ACTIONS(946), 1,
      aux_sym_sequence_token1,
    STATE(328), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [7701] = 4,
    ACTIONS(949), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(27), 1,
      sym_name,
    STATE(85), 1,
      aux_sym_sequence_repeat1,
  [7714] = 4,
    ACTIONS(933), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(36), 1,
      sym_name,
    STATE(98), 1,
      aux_sym_sequence_repeat1,
  [7727] = 4,
    ACTIONS(933), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(43), 1,
      sym_name,
    STATE(98), 1,
      aux_sym_sequence_repeat1,
  [7740] = 4,
    ACTIONS(925), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(19), 1,
      sym_name,
    STATE(76), 1,
      aux_sym_sequence_repeat1,
  [7753] = 3,
    ACTIONS(951), 1,
      aux_sym_sequence_token1,
    STATE(334), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(92), 2,
      anon_sym_and,
      anon_sym_DQUOTE,
  [7764] = 3,
    ACTIONS(953), 1,
      aux_sym_sequence_token1,
    STATE(334), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 2,
      anon_sym_and,
      anon_sym_DQUOTE,
  [7775] = 4,
    ACTIONS(885), 1,
      aux_sym_sequence_token1,
    STATE(5), 1,
      sym_name,
    STATE(10), 1,
      sym_sequence,
    STATE(80), 1,
      aux_sym_sequence_repeat1,
  [7788] = 4,
    ACTIONS(949), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(85), 1,
      aux_sym_sequence_repeat1,
    STATE(108), 1,
      sym_name,
  [7801] = 4,
    ACTIONS(885), 1,
      aux_sym_sequence_token1,
    STATE(4), 1,
      sym_name,
    STATE(10), 1,
      sym_sequence,
    STATE(80), 1,
      aux_sym_sequence_repeat1,
  [7814] = 3,
    ACTIONS(956), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(338), 1,
      aux_sym_string_repeat1,
    ACTIONS(958), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7825] = 3,
    ACTIONS(961), 1,
      aux_sym_sequence_token1,
    STATE(339), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 2,
      anon_sym_or,
      anon_sym_DQUOTE,
  [7836] = 3,
    ACTIONS(964), 1,
      aux_sym_sequence_token1,
    STATE(339), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(92), 2,
      anon_sym_or,
      anon_sym_DQUOTE,
  [7847] = 4,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(923), 1,
      anon_sym_or,
    STATE(118), 1,
      sym_string,
    STATE(348), 1,
      aux_sym_only_rule_repeat1,
  [7860] = 3,
    ACTIONS(956), 1,
      anon_sym_DQUOTE,
    STATE(342), 1,
      aux_sym_string_repeat1,
    ACTIONS(966), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7871] = 4,
    ACTIONS(889), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(169), 1,
      aux_sym_sequence_repeat1,
    STATE(198), 1,
      sym_name,
  [7884] = 4,
    ACTIONS(889), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(169), 1,
      aux_sym_sequence_repeat1,
    STATE(184), 1,
      sym_name,
  [7897] = 4,
    ACTIONS(885), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(80), 1,
      aux_sym_sequence_repeat1,
    STATE(124), 1,
      sym_name,
  [7910] = 1,
    ACTIONS(969), 4,
      anon_sym_example,
      anon_sym_preferred,
      anon_sym_extensible,
      anon_sym_required,
  [7917] = 4,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(923), 1,
      anon_sym_or,
    STATE(129), 1,
      sym_string,
    STATE(314), 1,
      aux_sym_only_rule_repeat1,
  [7930] = 4,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(923), 1,
      anon_sym_or,
    STATE(129), 1,
      sym_string,
    STATE(408), 1,
      aux_sym_only_rule_repeat1,
  [7943] = 3,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(131), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(40), 2,
      sym_string,
      sym_multiline_string,
  [7954] = 3,
    ACTIONS(971), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(338), 1,
      aux_sym_string_repeat1,
    ACTIONS(973), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7965] = 3,
    ACTIONS(975), 1,
      anon_sym_DQUOTE,
    STATE(342), 1,
      aux_sym_string_repeat1,
    ACTIONS(917), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7976] = 4,
    ACTIONS(977), 1,
      aux_sym_cardinality_token1,
    ACTIONS(979), 1,
      anon_sym_DOT_DOT,
    ACTIONS(981), 1,
      anon_sym_named,
    STATE(59), 1,
      sym_cardinality,
  [7989] = 3,
    ACTIONS(983), 1,
      aux_sym_sequence_token1,
    STATE(353), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 2,
      anon_sym_POUND,
      anon_sym_CARET,
  [8000] = 4,
    ACTIONS(986), 1,
      anon_sym_system,
    ACTIONS(988), 1,
      anon_sym_valueset,
    STATE(195), 1,
      sym_vs_from_valueset,
    STATE(197), 1,
      sym_vs_from_system,
  [8013] = 3,
    ACTIONS(990), 1,
      aux_sym_sequence_token1,
    STATE(353), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(92), 2,
      anon_sym_POUND,
      anon_sym_CARET,
  [8024] = 4,
    ACTIONS(992), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(323), 1,
      aux_sym_sequence_repeat1,
    STATE(393), 1,
      sym_name,
  [8037] = 3,
    ACTIONS(994), 1,
      aux_sym_sequence_token1,
    STATE(17), 1,
      sym_sequence,
    STATE(86), 1,
      aux_sym_sequence_repeat1,
  [8047] = 3,
    ACTIONS(996), 1,
      aux_sym_sequence_token1,
    STATE(327), 1,
      aux_sym_sequence_repeat1,
    STATE(404), 1,
      sym_sequence,
  [8057] = 3,
    ACTIONS(544), 1,
      anon_sym_from,
    ACTIONS(546), 1,
      anon_sym_and,
    STATE(247), 1,
      sym_vs_component_from,
  [8067] = 3,
    ACTIONS(998), 1,
      anon_sym_RPAREN,
    ACTIONS(1000), 1,
      anon_sym_or,
    STATE(412), 1,
      aux_sym_reference_repeat1,
  [8077] = 3,
    ACTIONS(1002), 1,
      aux_sym_sequence_token1,
    STATE(17), 1,
      sym_sequence,
    STATE(128), 1,
      aux_sym_sequence_repeat1,
  [8087] = 3,
    ACTIONS(92), 1,
      anon_sym_POUND,
    ACTIONS(1004), 1,
      aux_sym_sequence_token1,
    STATE(363), 1,
      aux_sym_sequence_repeat1,
  [8097] = 3,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(1006), 1,
      aux_sym_sequence_token1,
    STATE(363), 1,
      aux_sym_sequence_repeat1,
  [8107] = 3,
    ACTIONS(1009), 1,
      aux_sym_sequence_token1,
    STATE(20), 1,
      sym_sequence,
    STATE(210), 1,
      aux_sym_sequence_repeat1,
  [8117] = 3,
    ACTIONS(1002), 1,
      aux_sym_sequence_token1,
    STATE(20), 1,
      sym_sequence,
    STATE(128), 1,
      aux_sym_sequence_repeat1,
  [8127] = 3,
    ACTIONS(1011), 1,
      aux_sym_sequence_token1,
    STATE(17), 1,
      sym_sequence,
    STATE(93), 1,
      aux_sym_sequence_repeat1,
  [8137] = 3,
    ACTIONS(1013), 1,
      sym_number,
    STATE(215), 1,
      sym_ratio_part,
    STATE(217), 1,
      sym_quantity,
  [8147] = 3,
    ACTIONS(1015), 1,
      aux_sym_sequence_token1,
    STATE(298), 1,
      aux_sym_sequence_repeat1,
    STATE(303), 1,
      sym_sequence,
  [8157] = 3,
    ACTIONS(1011), 1,
      aux_sym_sequence_token1,
    STATE(20), 1,
      sym_sequence,
    STATE(93), 1,
      aux_sym_sequence_repeat1,
  [8167] = 3,
    ACTIONS(1017), 1,
      aux_sym_sequence_token1,
    STATE(17), 1,
      sym_sequence,
    STATE(115), 1,
      aux_sym_sequence_repeat1,
  [8177] = 3,
    ACTIONS(1017), 1,
      aux_sym_sequence_token1,
    STATE(20), 1,
      sym_sequence,
    STATE(115), 1,
      aux_sym_sequence_repeat1,
  [8187] = 3,
    ACTIONS(92), 1,
      anon_sym_CARET,
    ACTIONS(1019), 1,
      aux_sym_sequence_token1,
    STATE(373), 1,
      aux_sym_sequence_repeat1,
  [8197] = 3,
    ACTIONS(77), 1,
      anon_sym_CARET,
    ACTIONS(1021), 1,
      aux_sym_sequence_token1,
    STATE(373), 1,
      aux_sym_sequence_repeat1,
  [8207] = 3,
    ACTIONS(903), 1,
      aux_sym_sequence_token1,
    STATE(17), 1,
      sym_sequence,
    STATE(182), 1,
      aux_sym_sequence_repeat1,
  [8217] = 3,
    ACTIONS(903), 1,
      aux_sym_sequence_token1,
    STATE(20), 1,
      sym_sequence,
    STATE(182), 1,
      aux_sym_sequence_repeat1,
  [8227] = 3,
    ACTIONS(1015), 1,
      aux_sym_sequence_token1,
    STATE(298), 1,
      aux_sym_sequence_repeat1,
    STATE(405), 1,
      sym_sequence,
  [8237] = 3,
    ACTIONS(1024), 1,
      aux_sym_sequence_token1,
    STATE(17), 1,
      sym_sequence,
    STATE(333), 1,
      aux_sym_sequence_repeat1,
  [8247] = 3,
    ACTIONS(1024), 1,
      aux_sym_sequence_token1,
    STATE(20), 1,
      sym_sequence,
    STATE(333), 1,
      aux_sym_sequence_repeat1,
  [8257] = 3,
    ACTIONS(1026), 1,
      aux_sym_sequence_token1,
    STATE(17), 1,
      sym_sequence,
    STATE(116), 1,
      aux_sym_sequence_repeat1,
  [8267] = 3,
    ACTIONS(1026), 1,
      aux_sym_sequence_token1,
    STATE(20), 1,
      sym_sequence,
    STATE(116), 1,
      aux_sym_sequence_repeat1,
  [8277] = 3,
    ACTIONS(1028), 1,
      anon_sym_SQUOTE,
    ACTIONS(1030), 1,
      aux_sym_unit_token1,
    STATE(397), 1,
      aux_sym_unit_repeat1,
  [8287] = 3,
    ACTIONS(1032), 1,
      aux_sym_sequence_token1,
    STATE(17), 1,
      sym_sequence,
    STATE(154), 1,
      aux_sym_sequence_repeat1,
  [8297] = 3,
    ACTIONS(1032), 1,
      aux_sym_sequence_token1,
    STATE(20), 1,
      sym_sequence,
    STATE(154), 1,
      aux_sym_sequence_repeat1,
  [8307] = 3,
    ACTIONS(925), 1,
      aux_sym_sequence_token1,
    STATE(17), 1,
      sym_sequence,
    STATE(76), 1,
      aux_sym_sequence_repeat1,
  [8317] = 3,
    ACTIONS(925), 1,
      aux_sym_sequence_token1,
    STATE(20), 1,
      sym_sequence,
    STATE(76), 1,
      aux_sym_sequence_repeat1,
  [8327] = 3,
    ACTIONS(77), 1,
      anon_sym_EQ,
    ACTIONS(1034), 1,
      aux_sym_sequence_token1,
    STATE(386), 1,
      aux_sym_sequence_repeat1,
  [8337] = 3,
    ACTIONS(1037), 1,
      aux_sym_sequence_token1,
    STATE(17), 1,
      sym_sequence,
    STATE(290), 1,
      aux_sym_sequence_repeat1,
  [8347] = 3,
    ACTIONS(1039), 1,
      aux_sym_sequence_token1,
    STATE(394), 1,
      aux_sym_sequence_repeat1,
    STATE(443), 1,
      sym_sequence,
  [8357] = 3,
    ACTIONS(1037), 1,
      aux_sym_sequence_token1,
    STATE(20), 1,
      sym_sequence,
    STATE(290), 1,
      aux_sym_sequence_repeat1,
  [8367] = 3,
    ACTIONS(977), 1,
      aux_sym_cardinality_token1,
    ACTIONS(979), 1,
      anon_sym_DOT_DOT,
    STATE(65), 1,
      sym_cardinality,
  [8377] = 3,
    ACTIONS(949), 1,
      aux_sym_sequence_token1,
    STATE(17), 1,
      sym_sequence,
    STATE(85), 1,
      aux_sym_sequence_repeat1,
  [8387] = 3,
    ACTIONS(949), 1,
      aux_sym_sequence_token1,
    STATE(20), 1,
      sym_sequence,
    STATE(85), 1,
      aux_sym_sequence_repeat1,
  [8397] = 3,
    ACTIONS(977), 1,
      aux_sym_cardinality_token1,
    ACTIONS(979), 1,
      anon_sym_DOT_DOT,
    STATE(57), 1,
      sym_cardinality,
  [8407] = 3,
    ACTIONS(92), 1,
      anon_sym_EQ,
    ACTIONS(1041), 1,
      aux_sym_sequence_token1,
    STATE(386), 1,
      aux_sym_sequence_repeat1,
  [8417] = 3,
    ACTIONS(1043), 1,
      aux_sym_sequence_token1,
    STATE(17), 1,
      sym_sequence,
    STATE(89), 1,
      aux_sym_sequence_repeat1,
  [8427] = 3,
    ACTIONS(1043), 1,
      aux_sym_sequence_token1,
    STATE(20), 1,
      sym_sequence,
    STATE(89), 1,
      aux_sym_sequence_repeat1,
  [8437] = 3,
    ACTIONS(1045), 1,
      anon_sym_SQUOTE,
    ACTIONS(1047), 1,
      aux_sym_unit_token1,
    STATE(410), 1,
      aux_sym_unit_repeat1,
  [8447] = 3,
    ACTIONS(92), 1,
      anon_sym_EQ,
    ACTIONS(1049), 1,
      aux_sym_sequence_token1,
    STATE(386), 1,
      aux_sym_sequence_repeat1,
  [8457] = 3,
    ACTIONS(1009), 1,
      aux_sym_sequence_token1,
    STATE(17), 1,
      sym_sequence,
    STATE(210), 1,
      aux_sym_sequence_repeat1,
  [8467] = 3,
    ACTIONS(893), 1,
      anon_sym_or,
    ACTIONS(1052), 1,
      anon_sym_RPAREN,
    STATE(403), 1,
      aux_sym_canonical_repeat1,
  [8477] = 3,
    ACTIONS(996), 1,
      aux_sym_sequence_token1,
    STATE(327), 1,
      aux_sym_sequence_repeat1,
    STATE(418), 1,
      sym_sequence,
  [8487] = 3,
    ACTIONS(1054), 1,
      aux_sym_sequence_token1,
    STATE(17), 1,
      sym_sequence,
    STATE(372), 1,
      aux_sym_sequence_repeat1,
  [8497] = 3,
    ACTIONS(1056), 1,
      anon_sym_RPAREN,
    ACTIONS(1058), 1,
      anon_sym_or,
    STATE(403), 1,
      aux_sym_canonical_repeat1,
  [8507] = 3,
    ACTIONS(893), 1,
      anon_sym_or,
    ACTIONS(1061), 1,
      anon_sym_RPAREN,
    STATE(400), 1,
      aux_sym_canonical_repeat1,
  [8517] = 2,
    ACTIONS(1063), 1,
      anon_sym_PIPE,
    ACTIONS(1056), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [8525] = 3,
    ACTIONS(1065), 1,
      anon_sym_RPAREN,
    ACTIONS(1067), 1,
      anon_sym_or,
    STATE(406), 1,
      aux_sym_reference_repeat1,
  [8535] = 3,
    ACTIONS(1054), 1,
      aux_sym_sequence_token1,
    STATE(20), 1,
      sym_sequence,
    STATE(372), 1,
      aux_sym_sequence_repeat1,
  [8545] = 3,
    ACTIONS(687), 1,
      anon_sym_DQUOTE,
    ACTIONS(1070), 1,
      anon_sym_or,
    STATE(408), 1,
      aux_sym_only_rule_repeat1,
  [8555] = 3,
    ACTIONS(1073), 1,
      sym_number,
    STATE(215), 1,
      sym_ratio_part,
    STATE(217), 1,
      sym_quantity,
  [8565] = 3,
    ACTIONS(1075), 1,
      anon_sym_SQUOTE,
    ACTIONS(1077), 1,
      aux_sym_unit_token1,
    STATE(410), 1,
      aux_sym_unit_repeat1,
  [8575] = 3,
    ACTIONS(996), 1,
      aux_sym_sequence_token1,
    STATE(327), 1,
      aux_sym_sequence_repeat1,
    STATE(429), 1,
      sym_sequence,
  [8585] = 3,
    ACTIONS(1000), 1,
      anon_sym_or,
    ACTIONS(1080), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym_reference_repeat1,
  [8595] = 3,
    ACTIONS(893), 1,
      anon_sym_or,
    ACTIONS(1082), 1,
      anon_sym_RPAREN,
    STATE(403), 1,
      aux_sym_canonical_repeat1,
  [8605] = 3,
    ACTIONS(1039), 1,
      aux_sym_sequence_token1,
    STATE(394), 1,
      aux_sym_sequence_repeat1,
    STATE(445), 1,
      sym_sequence,
  [8615] = 3,
    ACTIONS(996), 1,
      aux_sym_sequence_token1,
    STATE(327), 1,
      aux_sym_sequence_repeat1,
    STATE(360), 1,
      sym_sequence,
  [8625] = 3,
    ACTIONS(994), 1,
      aux_sym_sequence_token1,
    STATE(20), 1,
      sym_sequence,
    STATE(86), 1,
      aux_sym_sequence_repeat1,
  [8635] = 2,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    STATE(163), 1,
      sym_string,
  [8642] = 1,
    ACTIONS(1084), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [8647] = 2,
    ACTIONS(1086), 1,
      anon_sym_valueset,
    STATE(227), 1,
      sym_vs_from_valueset,
  [8654] = 2,
    ACTIONS(1088), 1,
      anon_sym_system,
    STATE(227), 1,
      sym_vs_from_system,
  [8661] = 2,
    ACTIONS(1090), 1,
      anon_sym_valueset,
    STATE(227), 1,
      sym_vs_from_valueset,
  [8668] = 2,
    ACTIONS(1092), 1,
      anon_sym_system,
    STATE(227), 1,
      sym_vs_from_system,
  [8675] = 2,
    ACTIONS(1094), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      sym_string,
  [8682] = 2,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    STATE(87), 1,
      sym_string,
  [8689] = 2,
    ACTIONS(1096), 1,
      anon_sym_POUND,
    ACTIONS(1098), 1,
      aux_sym_sequence_token1,
  [8696] = 2,
    ACTIONS(65), 1,
      anon_sym_CARET,
    STATE(464), 1,
      sym_caret_path,
  [8703] = 2,
    ACTIONS(65), 1,
      anon_sym_CARET,
    STATE(453), 1,
      sym_caret_path,
  [8710] = 2,
    ACTIONS(73), 1,
      anon_sym_EQ,
    ACTIONS(75), 1,
      aux_sym_sequence_token1,
  [8717] = 1,
    ACTIONS(1065), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [8722] = 2,
    ACTIONS(1094), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      sym_string,
  [8729] = 2,
    ACTIONS(98), 1,
      anon_sym_CARET,
    ACTIONS(1100), 1,
      anon_sym_POUND,
  [8736] = 2,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      sym_string,
  [8743] = 2,
    ACTIONS(1102), 1,
      anon_sym_from,
    STATE(219), 1,
      sym_vs_component_from,
  [8750] = 2,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    STATE(165), 1,
      sym_string,
  [8757] = 1,
    ACTIONS(1104), 1,
      anon_sym_COLON,
  [8761] = 1,
    ACTIONS(1106), 1,
      anon_sym_COLON,
  [8765] = 1,
    ACTIONS(1108), 1,
      anon_sym_COLON,
  [8769] = 1,
    ACTIONS(1110), 1,
      anon_sym_COLON,
  [8773] = 1,
    ACTIONS(1112), 1,
      anon_sym_COLON,
  [8777] = 1,
    ACTIONS(1114), 1,
      anon_sym_COLON,
  [8781] = 1,
    ACTIONS(1116), 1,
      anon_sym_COLON,
  [8785] = 1,
    ACTIONS(546), 1,
      anon_sym_and,
  [8789] = 1,
    ACTIONS(1118), 1,
      anon_sym_EQ,
  [8793] = 1,
    ACTIONS(1120), 1,
      anon_sym_DOT_DOT,
  [8797] = 1,
    ACTIONS(1122), 1,
      anon_sym_EQ,
  [8801] = 1,
    ACTIONS(1124), 1,
      anon_sym_LPAREN,
  [8805] = 1,
    ACTIONS(1126), 1,
      anon_sym_LPAREN,
  [8809] = 1,
    ACTIONS(1128), 1,
      anon_sym_DOT_DOT,
  [8813] = 1,
    ACTIONS(1130), 1,
      anon_sym_EQ,
  [8817] = 1,
    ACTIONS(1132), 1,
      anon_sym_COLON,
  [8821] = 1,
    ACTIONS(1134), 1,
      anon_sym_COLON,
  [8825] = 1,
    ACTIONS(1136), 1,
      ts_builtin_sym_end,
  [8829] = 1,
    ACTIONS(1138), 1,
      anon_sym_EQ,
  [8833] = 1,
    ACTIONS(1140), 1,
      anon_sym_COLON,
  [8837] = 1,
    ACTIONS(1142), 1,
      anon_sym_COLON,
  [8841] = 1,
    ACTIONS(1144), 1,
      anon_sym_COLON,
  [8845] = 1,
    ACTIONS(1146), 1,
      anon_sym_COLON,
  [8849] = 1,
    ACTIONS(1148), 1,
      sym_time,
  [8853] = 1,
    ACTIONS(1150), 1,
      anon_sym_COLON,
  [8857] = 1,
    ACTIONS(1152), 1,
      anon_sym_COLON,
  [8861] = 1,
    ACTIONS(1154), 1,
      anon_sym_COLON,
  [8865] = 1,
    ACTIONS(1156), 1,
      anon_sym_POUND,
  [8869] = 1,
    ACTIONS(1158), 1,
      anon_sym_COLON,
  [8873] = 1,
    ACTIONS(1160), 1,
      anon_sym_EQ,
  [8877] = 1,
    ACTIONS(1162), 1,
      anon_sym_exactly,
  [8881] = 1,
    ACTIONS(1164), 1,
      anon_sym_COLON,
  [8885] = 1,
    ACTIONS(1166), 1,
      anon_sym_POUND,
  [8889] = 1,
    ACTIONS(1168), 1,
      anon_sym_RPAREN,
  [8893] = 1,
    ACTIONS(1170), 1,
      anon_sym_COLON,
  [8897] = 1,
    ACTIONS(1172), 1,
      anon_sym_COLON,
  [8901] = 1,
    ACTIONS(1174), 1,
      anon_sym_COLON,
  [8905] = 1,
    ACTIONS(1176), 1,
      anon_sym_COLON,
  [8909] = 1,
    ACTIONS(1178), 1,
      anon_sym_COLON,
  [8913] = 1,
    ACTIONS(1180), 1,
      anon_sym_COLON,
  [8917] = 1,
    ACTIONS(1182), 1,
      anon_sym_POUND,
  [8921] = 1,
    ACTIONS(1100), 1,
      anon_sym_POUND,
  [8925] = 1,
    ACTIONS(1184), 1,
      anon_sym_POUND,
  [8929] = 1,
    ACTIONS(1186), 1,
      anon_sym_POUND,
  [8933] = 1,
    ACTIONS(1188), 1,
      anon_sym_POUND,
  [8937] = 1,
    ACTIONS(1190), 1,
      anon_sym_POUND,
  [8941] = 1,
    ACTIONS(1192), 1,
      anon_sym_POUND,
  [8945] = 1,
    ACTIONS(1194), 1,
      anon_sym_POUND,
  [8949] = 1,
    ACTIONS(738), 1,
      anon_sym_POUND,
  [8953] = 1,
    ACTIONS(710), 1,
      anon_sym_POUND,
  [8957] = 1,
    ACTIONS(1196), 1,
      anon_sym_POUND,
  [8961] = 1,
    ACTIONS(1198), 1,
      anon_sym_RPAREN,
  [8965] = 1,
    ACTIONS(1200), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 58,
  [SMALL_STATE(4)] = 116,
  [SMALL_STATE(5)] = 174,
  [SMALL_STATE(6)] = 232,
  [SMALL_STATE(7)] = 286,
  [SMALL_STATE(8)] = 340,
  [SMALL_STATE(9)] = 394,
  [SMALL_STATE(10)] = 457,
  [SMALL_STATE(11)] = 493,
  [SMALL_STATE(12)] = 531,
  [SMALL_STATE(13)] = 565,
  [SMALL_STATE(14)] = 599,
  [SMALL_STATE(15)] = 637,
  [SMALL_STATE(16)] = 691,
  [SMALL_STATE(17)] = 722,
  [SMALL_STATE(18)] = 755,
  [SMALL_STATE(19)] = 806,
  [SMALL_STATE(20)] = 857,
  [SMALL_STATE(21)] = 890,
  [SMALL_STATE(22)] = 922,
  [SMALL_STATE(23)] = 954,
  [SMALL_STATE(24)] = 1017,
  [SMALL_STATE(25)] = 1066,
  [SMALL_STATE(26)] = 1129,
  [SMALL_STATE(27)] = 1192,
  [SMALL_STATE(28)] = 1241,
  [SMALL_STATE(29)] = 1304,
  [SMALL_STATE(30)] = 1340,
  [SMALL_STATE(31)] = 1376,
  [SMALL_STATE(32)] = 1412,
  [SMALL_STATE(33)] = 1448,
  [SMALL_STATE(34)] = 1484,
  [SMALL_STATE(35)] = 1529,
  [SMALL_STATE(36)] = 1558,
  [SMALL_STATE(37)] = 1601,
  [SMALL_STATE(38)] = 1644,
  [SMALL_STATE(39)] = 1685,
  [SMALL_STATE(40)] = 1714,
  [SMALL_STATE(41)] = 1742,
  [SMALL_STATE(42)] = 1774,
  [SMALL_STATE(43)] = 1806,
  [SMALL_STATE(44)] = 1848,
  [SMALL_STATE(45)] = 1880,
  [SMALL_STATE(46)] = 1912,
  [SMALL_STATE(47)] = 1954,
  [SMALL_STATE(48)] = 2001,
  [SMALL_STATE(49)] = 2040,
  [SMALL_STATE(50)] = 2087,
  [SMALL_STATE(51)] = 2124,
  [SMALL_STATE(52)] = 2160,
  [SMALL_STATE(53)] = 2188,
  [SMALL_STATE(54)] = 2224,
  [SMALL_STATE(55)] = 2262,
  [SMALL_STATE(56)] = 2290,
  [SMALL_STATE(57)] = 2318,
  [SMALL_STATE(58)] = 2346,
  [SMALL_STATE(59)] = 2374,
  [SMALL_STATE(60)] = 2402,
  [SMALL_STATE(61)] = 2430,
  [SMALL_STATE(62)] = 2467,
  [SMALL_STATE(63)] = 2500,
  [SMALL_STATE(64)] = 2533,
  [SMALL_STATE(65)] = 2568,
  [SMALL_STATE(66)] = 2595,
  [SMALL_STATE(67)] = 2622,
  [SMALL_STATE(68)] = 2649,
  [SMALL_STATE(69)] = 2674,
  [SMALL_STATE(70)] = 2701,
  [SMALL_STATE(71)] = 2727,
  [SMALL_STATE(72)] = 2749,
  [SMALL_STATE(73)] = 2785,
  [SMALL_STATE(74)] = 2811,
  [SMALL_STATE(75)] = 2847,
  [SMALL_STATE(76)] = 2873,
  [SMALL_STATE(77)] = 2899,
  [SMALL_STATE(78)] = 2921,
  [SMALL_STATE(79)] = 2943,
  [SMALL_STATE(80)] = 2977,
  [SMALL_STATE(81)] = 3002,
  [SMALL_STATE(82)] = 3029,
  [SMALL_STATE(83)] = 3052,
  [SMALL_STATE(84)] = 3073,
  [SMALL_STATE(85)] = 3098,
  [SMALL_STATE(86)] = 3125,
  [SMALL_STATE(87)] = 3149,
  [SMALL_STATE(88)] = 3169,
  [SMALL_STATE(89)] = 3193,
  [SMALL_STATE(90)] = 3217,
  [SMALL_STATE(91)] = 3241,
  [SMALL_STATE(92)] = 3271,
  [SMALL_STATE(93)] = 3309,
  [SMALL_STATE(94)] = 3333,
  [SMALL_STATE(95)] = 3353,
  [SMALL_STATE(96)] = 3377,
  [SMALL_STATE(97)] = 3401,
  [SMALL_STATE(98)] = 3425,
  [SMALL_STATE(99)] = 3449,
  [SMALL_STATE(100)] = 3479,
  [SMALL_STATE(101)] = 3499,
  [SMALL_STATE(102)] = 3537,
  [SMALL_STATE(103)] = 3582,
  [SMALL_STATE(104)] = 3607,
  [SMALL_STATE(105)] = 3630,
  [SMALL_STATE(106)] = 3653,
  [SMALL_STATE(107)] = 3676,
  [SMALL_STATE(108)] = 3697,
  [SMALL_STATE(109)] = 3718,
  [SMALL_STATE(110)] = 3741,
  [SMALL_STATE(111)] = 3766,
  [SMALL_STATE(112)] = 3791,
  [SMALL_STATE(113)] = 3816,
  [SMALL_STATE(114)] = 3839,
  [SMALL_STATE(115)] = 3864,
  [SMALL_STATE(116)] = 3887,
  [SMALL_STATE(117)] = 3910,
  [SMALL_STATE(118)] = 3933,
  [SMALL_STATE(119)] = 3958,
  [SMALL_STATE(120)] = 3983,
  [SMALL_STATE(121)] = 4004,
  [SMALL_STATE(122)] = 4029,
  [SMALL_STATE(123)] = 4054,
  [SMALL_STATE(124)] = 4077,
  [SMALL_STATE(125)] = 4096,
  [SMALL_STATE(126)] = 4119,
  [SMALL_STATE(127)] = 4144,
  [SMALL_STATE(128)] = 4169,
  [SMALL_STATE(129)] = 4192,
  [SMALL_STATE(130)] = 4217,
  [SMALL_STATE(131)] = 4236,
  [SMALL_STATE(132)] = 4260,
  [SMALL_STATE(133)] = 4278,
  [SMALL_STATE(134)] = 4302,
  [SMALL_STATE(135)] = 4326,
  [SMALL_STATE(136)] = 4344,
  [SMALL_STATE(137)] = 4366,
  [SMALL_STATE(138)] = 4384,
  [SMALL_STATE(139)] = 4406,
  [SMALL_STATE(140)] = 4428,
  [SMALL_STATE(141)] = 4450,
  [SMALL_STATE(142)] = 4468,
  [SMALL_STATE(143)] = 4488,
  [SMALL_STATE(144)] = 4510,
  [SMALL_STATE(145)] = 4532,
  [SMALL_STATE(146)] = 4554,
  [SMALL_STATE(147)] = 4576,
  [SMALL_STATE(148)] = 4598,
  [SMALL_STATE(149)] = 4622,
  [SMALL_STATE(150)] = 4644,
  [SMALL_STATE(151)] = 4666,
  [SMALL_STATE(152)] = 4688,
  [SMALL_STATE(153)] = 4708,
  [SMALL_STATE(154)] = 4726,
  [SMALL_STATE(155)] = 4748,
  [SMALL_STATE(156)] = 4770,
  [SMALL_STATE(157)] = 4792,
  [SMALL_STATE(158)] = 4810,
  [SMALL_STATE(159)] = 4832,
  [SMALL_STATE(160)] = 4854,
  [SMALL_STATE(161)] = 4876,
  [SMALL_STATE(162)] = 4894,
  [SMALL_STATE(163)] = 4916,
  [SMALL_STATE(164)] = 4934,
  [SMALL_STATE(165)] = 4952,
  [SMALL_STATE(166)] = 4970,
  [SMALL_STATE(167)] = 4988,
  [SMALL_STATE(168)] = 5006,
  [SMALL_STATE(169)] = 5026,
  [SMALL_STATE(170)] = 5048,
  [SMALL_STATE(171)] = 5066,
  [SMALL_STATE(172)] = 5084,
  [SMALL_STATE(173)] = 5102,
  [SMALL_STATE(174)] = 5122,
  [SMALL_STATE(175)] = 5139,
  [SMALL_STATE(176)] = 5160,
  [SMALL_STATE(177)] = 5179,
  [SMALL_STATE(178)] = 5200,
  [SMALL_STATE(179)] = 5221,
  [SMALL_STATE(180)] = 5242,
  [SMALL_STATE(181)] = 5263,
  [SMALL_STATE(182)] = 5280,
  [SMALL_STATE(183)] = 5301,
  [SMALL_STATE(184)] = 5322,
  [SMALL_STATE(185)] = 5339,
  [SMALL_STATE(186)] = 5358,
  [SMALL_STATE(187)] = 5377,
  [SMALL_STATE(188)] = 5398,
  [SMALL_STATE(189)] = 5419,
  [SMALL_STATE(190)] = 5440,
  [SMALL_STATE(191)] = 5461,
  [SMALL_STATE(192)] = 5480,
  [SMALL_STATE(193)] = 5497,
  [SMALL_STATE(194)] = 5518,
  [SMALL_STATE(195)] = 5535,
  [SMALL_STATE(196)] = 5554,
  [SMALL_STATE(197)] = 5573,
  [SMALL_STATE(198)] = 5592,
  [SMALL_STATE(199)] = 5613,
  [SMALL_STATE(200)] = 5634,
  [SMALL_STATE(201)] = 5655,
  [SMALL_STATE(202)] = 5676,
  [SMALL_STATE(203)] = 5695,
  [SMALL_STATE(204)] = 5716,
  [SMALL_STATE(205)] = 5737,
  [SMALL_STATE(206)] = 5758,
  [SMALL_STATE(207)] = 5779,
  [SMALL_STATE(208)] = 5798,
  [SMALL_STATE(209)] = 5819,
  [SMALL_STATE(210)] = 5836,
  [SMALL_STATE(211)] = 5856,
  [SMALL_STATE(212)] = 5874,
  [SMALL_STATE(213)] = 5892,
  [SMALL_STATE(214)] = 5910,
  [SMALL_STATE(215)] = 5926,
  [SMALL_STATE(216)] = 5942,
  [SMALL_STATE(217)] = 5960,
  [SMALL_STATE(218)] = 5976,
  [SMALL_STATE(219)] = 5992,
  [SMALL_STATE(220)] = 6010,
  [SMALL_STATE(221)] = 6026,
  [SMALL_STATE(222)] = 6042,
  [SMALL_STATE(223)] = 6058,
  [SMALL_STATE(224)] = 6076,
  [SMALL_STATE(225)] = 6096,
  [SMALL_STATE(226)] = 6112,
  [SMALL_STATE(227)] = 6130,
  [SMALL_STATE(228)] = 6146,
  [SMALL_STATE(229)] = 6162,
  [SMALL_STATE(230)] = 6178,
  [SMALL_STATE(231)] = 6193,
  [SMALL_STATE(232)] = 6208,
  [SMALL_STATE(233)] = 6223,
  [SMALL_STATE(234)] = 6238,
  [SMALL_STATE(235)] = 6253,
  [SMALL_STATE(236)] = 6268,
  [SMALL_STATE(237)] = 6283,
  [SMALL_STATE(238)] = 6298,
  [SMALL_STATE(239)] = 6313,
  [SMALL_STATE(240)] = 6328,
  [SMALL_STATE(241)] = 6343,
  [SMALL_STATE(242)] = 6358,
  [SMALL_STATE(243)] = 6373,
  [SMALL_STATE(244)] = 6388,
  [SMALL_STATE(245)] = 6403,
  [SMALL_STATE(246)] = 6418,
  [SMALL_STATE(247)] = 6433,
  [SMALL_STATE(248)] = 6448,
  [SMALL_STATE(249)] = 6463,
  [SMALL_STATE(250)] = 6478,
  [SMALL_STATE(251)] = 6493,
  [SMALL_STATE(252)] = 6510,
  [SMALL_STATE(253)] = 6525,
  [SMALL_STATE(254)] = 6540,
  [SMALL_STATE(255)] = 6560,
  [SMALL_STATE(256)] = 6574,
  [SMALL_STATE(257)] = 6594,
  [SMALL_STATE(258)] = 6614,
  [SMALL_STATE(259)] = 6643,
  [SMALL_STATE(260)] = 6666,
  [SMALL_STATE(261)] = 6689,
  [SMALL_STATE(262)] = 6708,
  [SMALL_STATE(263)] = 6722,
  [SMALL_STATE(264)] = 6748,
  [SMALL_STATE(265)] = 6764,
  [SMALL_STATE(266)] = 6792,
  [SMALL_STATE(267)] = 6818,
  [SMALL_STATE(268)] = 6846,
  [SMALL_STATE(269)] = 6862,
  [SMALL_STATE(270)] = 6876,
  [SMALL_STATE(271)] = 6902,
  [SMALL_STATE(272)] = 6916,
  [SMALL_STATE(273)] = 6931,
  [SMALL_STATE(274)] = 6953,
  [SMALL_STATE(275)] = 6963,
  [SMALL_STATE(276)] = 6985,
  [SMALL_STATE(277)] = 7004,
  [SMALL_STATE(278)] = 7017,
  [SMALL_STATE(279)] = 7036,
  [SMALL_STATE(280)] = 7049,
  [SMALL_STATE(281)] = 7062,
  [SMALL_STATE(282)] = 7075,
  [SMALL_STATE(283)] = 7091,
  [SMALL_STATE(284)] = 7107,
  [SMALL_STATE(285)] = 7123,
  [SMALL_STATE(286)] = 7139,
  [SMALL_STATE(287)] = 7155,
  [SMALL_STATE(288)] = 7169,
  [SMALL_STATE(289)] = 7183,
  [SMALL_STATE(290)] = 7199,
  [SMALL_STATE(291)] = 7211,
  [SMALL_STATE(292)] = 7227,
  [SMALL_STATE(293)] = 7243,
  [SMALL_STATE(294)] = 7255,
  [SMALL_STATE(295)] = 7271,
  [SMALL_STATE(296)] = 7287,
  [SMALL_STATE(297)] = 7299,
  [SMALL_STATE(298)] = 7315,
  [SMALL_STATE(299)] = 7327,
  [SMALL_STATE(300)] = 7340,
  [SMALL_STATE(301)] = 7353,
  [SMALL_STATE(302)] = 7366,
  [SMALL_STATE(303)] = 7379,
  [SMALL_STATE(304)] = 7392,
  [SMALL_STATE(305)] = 7405,
  [SMALL_STATE(306)] = 7418,
  [SMALL_STATE(307)] = 7431,
  [SMALL_STATE(308)] = 7444,
  [SMALL_STATE(309)] = 7457,
  [SMALL_STATE(310)] = 7470,
  [SMALL_STATE(311)] = 7481,
  [SMALL_STATE(312)] = 7492,
  [SMALL_STATE(313)] = 7503,
  [SMALL_STATE(314)] = 7514,
  [SMALL_STATE(315)] = 7527,
  [SMALL_STATE(316)] = 7540,
  [SMALL_STATE(317)] = 7553,
  [SMALL_STATE(318)] = 7566,
  [SMALL_STATE(319)] = 7579,
  [SMALL_STATE(320)] = 7590,
  [SMALL_STATE(321)] = 7601,
  [SMALL_STATE(322)] = 7614,
  [SMALL_STATE(323)] = 7627,
  [SMALL_STATE(324)] = 7640,
  [SMALL_STATE(325)] = 7653,
  [SMALL_STATE(326)] = 7666,
  [SMALL_STATE(327)] = 7679,
  [SMALL_STATE(328)] = 7690,
  [SMALL_STATE(329)] = 7701,
  [SMALL_STATE(330)] = 7714,
  [SMALL_STATE(331)] = 7727,
  [SMALL_STATE(332)] = 7740,
  [SMALL_STATE(333)] = 7753,
  [SMALL_STATE(334)] = 7764,
  [SMALL_STATE(335)] = 7775,
  [SMALL_STATE(336)] = 7788,
  [SMALL_STATE(337)] = 7801,
  [SMALL_STATE(338)] = 7814,
  [SMALL_STATE(339)] = 7825,
  [SMALL_STATE(340)] = 7836,
  [SMALL_STATE(341)] = 7847,
  [SMALL_STATE(342)] = 7860,
  [SMALL_STATE(343)] = 7871,
  [SMALL_STATE(344)] = 7884,
  [SMALL_STATE(345)] = 7897,
  [SMALL_STATE(346)] = 7910,
  [SMALL_STATE(347)] = 7917,
  [SMALL_STATE(348)] = 7930,
  [SMALL_STATE(349)] = 7943,
  [SMALL_STATE(350)] = 7954,
  [SMALL_STATE(351)] = 7965,
  [SMALL_STATE(352)] = 7976,
  [SMALL_STATE(353)] = 7989,
  [SMALL_STATE(354)] = 8000,
  [SMALL_STATE(355)] = 8013,
  [SMALL_STATE(356)] = 8024,
  [SMALL_STATE(357)] = 8037,
  [SMALL_STATE(358)] = 8047,
  [SMALL_STATE(359)] = 8057,
  [SMALL_STATE(360)] = 8067,
  [SMALL_STATE(361)] = 8077,
  [SMALL_STATE(362)] = 8087,
  [SMALL_STATE(363)] = 8097,
  [SMALL_STATE(364)] = 8107,
  [SMALL_STATE(365)] = 8117,
  [SMALL_STATE(366)] = 8127,
  [SMALL_STATE(367)] = 8137,
  [SMALL_STATE(368)] = 8147,
  [SMALL_STATE(369)] = 8157,
  [SMALL_STATE(370)] = 8167,
  [SMALL_STATE(371)] = 8177,
  [SMALL_STATE(372)] = 8187,
  [SMALL_STATE(373)] = 8197,
  [SMALL_STATE(374)] = 8207,
  [SMALL_STATE(375)] = 8217,
  [SMALL_STATE(376)] = 8227,
  [SMALL_STATE(377)] = 8237,
  [SMALL_STATE(378)] = 8247,
  [SMALL_STATE(379)] = 8257,
  [SMALL_STATE(380)] = 8267,
  [SMALL_STATE(381)] = 8277,
  [SMALL_STATE(382)] = 8287,
  [SMALL_STATE(383)] = 8297,
  [SMALL_STATE(384)] = 8307,
  [SMALL_STATE(385)] = 8317,
  [SMALL_STATE(386)] = 8327,
  [SMALL_STATE(387)] = 8337,
  [SMALL_STATE(388)] = 8347,
  [SMALL_STATE(389)] = 8357,
  [SMALL_STATE(390)] = 8367,
  [SMALL_STATE(391)] = 8377,
  [SMALL_STATE(392)] = 8387,
  [SMALL_STATE(393)] = 8397,
  [SMALL_STATE(394)] = 8407,
  [SMALL_STATE(395)] = 8417,
  [SMALL_STATE(396)] = 8427,
  [SMALL_STATE(397)] = 8437,
  [SMALL_STATE(398)] = 8447,
  [SMALL_STATE(399)] = 8457,
  [SMALL_STATE(400)] = 8467,
  [SMALL_STATE(401)] = 8477,
  [SMALL_STATE(402)] = 8487,
  [SMALL_STATE(403)] = 8497,
  [SMALL_STATE(404)] = 8507,
  [SMALL_STATE(405)] = 8517,
  [SMALL_STATE(406)] = 8525,
  [SMALL_STATE(407)] = 8535,
  [SMALL_STATE(408)] = 8545,
  [SMALL_STATE(409)] = 8555,
  [SMALL_STATE(410)] = 8565,
  [SMALL_STATE(411)] = 8575,
  [SMALL_STATE(412)] = 8585,
  [SMALL_STATE(413)] = 8595,
  [SMALL_STATE(414)] = 8605,
  [SMALL_STATE(415)] = 8615,
  [SMALL_STATE(416)] = 8625,
  [SMALL_STATE(417)] = 8635,
  [SMALL_STATE(418)] = 8642,
  [SMALL_STATE(419)] = 8647,
  [SMALL_STATE(420)] = 8654,
  [SMALL_STATE(421)] = 8661,
  [SMALL_STATE(422)] = 8668,
  [SMALL_STATE(423)] = 8675,
  [SMALL_STATE(424)] = 8682,
  [SMALL_STATE(425)] = 8689,
  [SMALL_STATE(426)] = 8696,
  [SMALL_STATE(427)] = 8703,
  [SMALL_STATE(428)] = 8710,
  [SMALL_STATE(429)] = 8717,
  [SMALL_STATE(430)] = 8722,
  [SMALL_STATE(431)] = 8729,
  [SMALL_STATE(432)] = 8736,
  [SMALL_STATE(433)] = 8743,
  [SMALL_STATE(434)] = 8750,
  [SMALL_STATE(435)] = 8757,
  [SMALL_STATE(436)] = 8761,
  [SMALL_STATE(437)] = 8765,
  [SMALL_STATE(438)] = 8769,
  [SMALL_STATE(439)] = 8773,
  [SMALL_STATE(440)] = 8777,
  [SMALL_STATE(441)] = 8781,
  [SMALL_STATE(442)] = 8785,
  [SMALL_STATE(443)] = 8789,
  [SMALL_STATE(444)] = 8793,
  [SMALL_STATE(445)] = 8797,
  [SMALL_STATE(446)] = 8801,
  [SMALL_STATE(447)] = 8805,
  [SMALL_STATE(448)] = 8809,
  [SMALL_STATE(449)] = 8813,
  [SMALL_STATE(450)] = 8817,
  [SMALL_STATE(451)] = 8821,
  [SMALL_STATE(452)] = 8825,
  [SMALL_STATE(453)] = 8829,
  [SMALL_STATE(454)] = 8833,
  [SMALL_STATE(455)] = 8837,
  [SMALL_STATE(456)] = 8841,
  [SMALL_STATE(457)] = 8845,
  [SMALL_STATE(458)] = 8849,
  [SMALL_STATE(459)] = 8853,
  [SMALL_STATE(460)] = 8857,
  [SMALL_STATE(461)] = 8861,
  [SMALL_STATE(462)] = 8865,
  [SMALL_STATE(463)] = 8869,
  [SMALL_STATE(464)] = 8873,
  [SMALL_STATE(465)] = 8877,
  [SMALL_STATE(466)] = 8881,
  [SMALL_STATE(467)] = 8885,
  [SMALL_STATE(468)] = 8889,
  [SMALL_STATE(469)] = 8893,
  [SMALL_STATE(470)] = 8897,
  [SMALL_STATE(471)] = 8901,
  [SMALL_STATE(472)] = 8905,
  [SMALL_STATE(473)] = 8909,
  [SMALL_STATE(474)] = 8913,
  [SMALL_STATE(475)] = 8917,
  [SMALL_STATE(476)] = 8921,
  [SMALL_STATE(477)] = 8925,
  [SMALL_STATE(478)] = 8929,
  [SMALL_STATE(479)] = 8933,
  [SMALL_STATE(480)] = 8937,
  [SMALL_STATE(481)] = 8941,
  [SMALL_STATE(482)] = 8945,
  [SMALL_STATE(483)] = 8949,
  [SMALL_STATE(484)] = 8953,
  [SMALL_STATE(485)] = 8957,
  [SMALL_STATE(486)] = 8961,
  [SMALL_STATE(487)] = 8965,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 4),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 4),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_rule, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(11),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3, .production_id = 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3, .production_id = 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 4),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 2, .production_id = 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 2, .production_id = 2),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_name, 1), REDUCE(sym_path, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 4),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance, 4),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_logical_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_logical_repeat1, 2), SHIFT_REPEAT(265),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 5),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_definition, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 4),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(451),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(474),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(472),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(454),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(457),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 5),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat2, 2),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat2, 2), SHIFT_REPEAT(267),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 5),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instance_repeat1, 2),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(451),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(436),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(457),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(463),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(450),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(471),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(469),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(440),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(439),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(438),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(437),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(473),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(487),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(455),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(451),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(435),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(456),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(457),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(451),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(459),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(460),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(461),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 1),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invariant, 4),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ratio_part, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2), SHIFT_REPEAT(78),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 2),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 5),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(451),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(466),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(457),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(451),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(466),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(457),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_rule, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_rule, 4),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_rule, 4),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title, 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_rule, 3),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(70),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(70),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 4),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(75),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 1),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(81),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_operator, 1),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vs_filter_operator, 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [423] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(84),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(88),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(90),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_metadata, 1),
  [448] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(95),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_string, 1),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(97),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 5),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 7),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [476] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(105),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usage, 3),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usage, 3),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_of, 3),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance_of, 3),
  [489] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(109),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 5),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instance_repeat2, 2),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat2, 2), SHIFT_REPEAT(284),
  [499] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(113),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [506] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(117),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 5),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_metadata, 1),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance_metadata, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 5),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_valueset_repeat2, 2),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat2, 2), SHIFT_REPEAT(102),
  [522] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(123),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parent, 3),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 5),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_repeat2, 2),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat2, 2), SHIFT_REPEAT(276),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 6),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sd_metadata, 1),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 1),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 4),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 5),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat2, 2),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat2, 2), SHIFT_REPEAT(283),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 3),
  [559] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(136),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invariant_metadata, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2), SHIFT_REPEAT(318),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [571] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(140),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cs_metadata, 1),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_valueset, 3),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [580] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(145),
  [583] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(146),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [592] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(151),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 4),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [599] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(155),
  [602] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(156),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [607] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(158),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 5),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_valueset, 2),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_severity, 3),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath, 3),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 5),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 6),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_string, 2),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 7),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_metadata, 1),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_system, 2),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 5),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_rule, 5),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_only_rule, 5),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [650] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(179),
  [653] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2), SHIFT_REPEAT(344),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_type, 1, .production_id = 4),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_list, 1),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 4),
  [668] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(189),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vs_filter_list_repeat1, 2),
  [673] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vs_filter_list_repeat1, 2), SHIFT_REPEAT(285),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 1),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 3),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contains_rule_repeat1, 2),
  [684] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contains_rule_repeat1, 2), SHIFT_REPEAT(282),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component_from, 2),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 3),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_only_rule, 4),
  [699] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2), SHIFT_REPEAT(266),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_list, 2),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_rule, 4),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_rule, 4),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_type, 1),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_value_rule, 4),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ratio, 3),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 3),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_component, 2),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_value, 1),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_definition, 3),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [740] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(224),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component_from, 4),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_rule, 1),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 8),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 6),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strength, 3),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_value_rule, 7),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_caret_value_rule, 5),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component, 2),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sd_rule, 1),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_rule, 1),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cs_rule, 1),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_rule, 5),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_value_rule, 4),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component, 3),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 3),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_entity_rule, 1),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 2),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_component, 4),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 5, .production_id = 1),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_value_rule, 5),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lr_rule, 1),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2),
  [801] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2), SHIFT_REPEAT(269),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 3),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [808] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(264),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag, 1),
  [819] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_rule_repeat1, 2), SHIFT_REPEAT(286),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_rule_repeat1, 2),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [826] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2), SHIFT_REPEAT(378),
  [829] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2), SHIFT_REPEAT(362),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [840] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(279),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [845] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(281),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [858] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(288),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [869] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(293),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [878] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(296),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [939] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(324),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [946] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(328),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [953] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(334),
  [956] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [958] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(338),
  [961] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(339),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [966] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(342),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [975] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [983] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(353),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [1006] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(363),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [1021] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(373),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1028] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1034] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(386),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1045] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1049] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(386),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 2),
  [1058] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 2), SHIFT_REPEAT(376),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reference_repeat1, 2),
  [1067] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reference_repeat1, 2), SHIFT_REPEAT(411),
  [1070] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2), SHIFT_REPEAT(270),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1075] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2),
  [1077] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(410),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 4),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2),
  [1098] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_path, 2),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1136] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
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
