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
#define STATE_COUNT 502
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 180
#define ALIAS_COUNT 4
#define TOKEN_COUNT 74
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
  anon_sym_insert = 25,
  anon_sym_from = 26,
  anon_sym_LPAREN = 27,
  anon_sym_exactly = 28,
  anon_sym_RPAREN = 29,
  anon_sym_contains = 30,
  anon_sym_and = 31,
  anon_sym_obeys = 32,
  anon_sym_only = 33,
  anon_sym_or = 34,
  anon_sym_DASH_GT = 35,
  anon_sym_include = 36,
  anon_sym_exclude = 37,
  anon_sym_codes = 38,
  anon_sym_where = 39,
  anon_sym_system = 40,
  anon_sym_valueset = 41,
  anon_sym_true = 42,
  anon_sym_false = 43,
  anon_sym_POUND = 44,
  aux_sym_sequence_token1 = 45,
  anon_sym_CARET = 46,
  aux_sym_cardinality_token1 = 47,
  anon_sym_DOT_DOT = 48,
  anon_sym_STAR2 = 49,
  anon_sym_DQUOTE = 50,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 51,
  sym_double_quote_string_fragment = 52,
  sym_escape_sequence = 53,
  sym_number = 54,
  sym_date = 55,
  sym_time = 56,
  anon_sym_T = 57,
  anon_sym_SQUOTE = 58,
  aux_sym_unit_token1 = 59,
  anon_sym_example = 60,
  anon_sym_preferred = 61,
  anon_sym_extensible = 62,
  anon_sym_required = 63,
  anon_sym_Reference = 64,
  anon_sym_Canonical = 65,
  anon_sym_PIPE = 66,
  anon_sym_named = 67,
  anon_sym_QMARK_BANG = 68,
  anon_sym_MS = 69,
  anon_sym_SU = 70,
  anon_sym_TU = 71,
  anon_sym_N = 72,
  anon_sym_D = 73,
  sym_doc = 74,
  sym_alias = 75,
  sym_profile = 76,
  sym_extension = 77,
  sym_invariant = 78,
  sym_instance = 79,
  sym_valueset = 80,
  sym_codesystem = 81,
  sym_mapping = 82,
  sym_logical = 83,
  sym_resource = 84,
  sym_sd_metadata = 85,
  sym_instance_metadata = 86,
  sym_invariant_metadata = 87,
  sym_vs_metadata = 88,
  sym_cs_metadata = 89,
  sym_mapping_metadata = 90,
  sym_description = 91,
  sym_expression = 92,
  sym_id = 93,
  sym_instance_of = 94,
  sym_parent = 95,
  sym_severity = 96,
  sym_source = 97,
  sym_target = 98,
  sym_title = 99,
  sym_usage = 100,
  sym_xpath = 101,
  sym_sd_rule = 102,
  sym_lr_rule = 103,
  sym_vs_rule = 104,
  sym_cs_rule = 105,
  sym_instance_rule = 106,
  sym_mapping_entity_rule = 107,
  sym_cardinality_rule = 108,
  sym_code_insert_rule = 109,
  sym_insert_rule = 110,
  sym_valueset_rule = 111,
  sym_fixed_value_rule = 112,
  sym_contains_rule = 113,
  sym_caret_value_rule = 114,
  sym_code_caret_value_rule = 115,
  sym_obeys_rule = 116,
  sym_path_rule = 117,
  sym_flag_rule = 118,
  sym_only_rule = 119,
  sym_mapping_rule = 120,
  sym_add_element_rule = 121,
  sym_vs_component = 122,
  sym_vs_concept_component = 123,
  sym_vs_filter_component = 124,
  sym_vs_component_from = 125,
  sym_vs_from_system = 126,
  sym_vs_from_valueset = 127,
  sym_vs_filter_list = 128,
  sym_vs_filter_definition = 129,
  sym_vs_filter_operator = 130,
  sym_vs_filter_value = 131,
  sym_code = 132,
  sym_code_string = 133,
  sym_sequence = 134,
  sym_caret_path = 135,
  sym_name = 136,
  sym_cardinality = 137,
  sym_string = 138,
  sym_multiline_string = 139,
  sym_datetime = 140,
  sym_unit = 141,
  sym_quantity = 142,
  sym_ratio_part = 143,
  sym_ratio = 144,
  sym_bool = 145,
  sym_path = 146,
  sym_strength = 147,
  sym_reference = 148,
  sym_canonical = 149,
  sym_value = 150,
  sym_item = 151,
  sym_flag = 152,
  sym_target_type = 153,
  aux_sym_doc_repeat1 = 154,
  aux_sym_profile_repeat1 = 155,
  aux_sym_profile_repeat2 = 156,
  aux_sym_invariant_repeat1 = 157,
  aux_sym_instance_repeat1 = 158,
  aux_sym_instance_repeat2 = 159,
  aux_sym_valueset_repeat1 = 160,
  aux_sym_valueset_repeat2 = 161,
  aux_sym_codesystem_repeat1 = 162,
  aux_sym_codesystem_repeat2 = 163,
  aux_sym_mapping_repeat1 = 164,
  aux_sym_mapping_repeat2 = 165,
  aux_sym_logical_repeat1 = 166,
  aux_sym_cardinality_rule_repeat1 = 167,
  aux_sym_code_insert_rule_repeat1 = 168,
  aux_sym_contains_rule_repeat1 = 169,
  aux_sym_obeys_rule_repeat1 = 170,
  aux_sym_flag_rule_repeat1 = 171,
  aux_sym_only_rule_repeat1 = 172,
  aux_sym_vs_concept_component_repeat1 = 173,
  aux_sym_vs_filter_list_repeat1 = 174,
  aux_sym_sequence_repeat1 = 175,
  aux_sym_string_repeat1 = 176,
  aux_sym_unit_repeat1 = 177,
  aux_sym_reference_repeat1 = 178,
  aux_sym_canonical_repeat1 = 179,
  alias_sym_alias_name = 180,
  alias_sym_code_system = 181,
  alias_sym_code_value = 182,
  alias_sym_reference_type = 183,
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
  [20] = 19,
  [21] = 21,
  [22] = 22,
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
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 59,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 13,
  [72] = 72,
  [73] = 12,
  [74] = 68,
  [75] = 75,
  [76] = 76,
  [77] = 12,
  [78] = 13,
  [79] = 79,
  [80] = 12,
  [81] = 81,
  [82] = 12,
  [83] = 13,
  [84] = 84,
  [85] = 13,
  [86] = 12,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 13,
  [91] = 91,
  [92] = 12,
  [93] = 13,
  [94] = 94,
  [95] = 95,
  [96] = 12,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 13,
  [102] = 12,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 13,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 12,
  [113] = 12,
  [114] = 114,
  [115] = 115,
  [116] = 13,
  [117] = 12,
  [118] = 118,
  [119] = 12,
  [120] = 13,
  [121] = 13,
  [122] = 12,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 13,
  [128] = 13,
  [129] = 129,
  [130] = 130,
  [131] = 13,
  [132] = 12,
  [133] = 13,
  [134] = 134,
  [135] = 12,
  [136] = 136,
  [137] = 137,
  [138] = 12,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 13,
  [149] = 12,
  [150] = 150,
  [151] = 151,
  [152] = 13,
  [153] = 12,
  [154] = 13,
  [155] = 155,
  [156] = 13,
  [157] = 157,
  [158] = 12,
  [159] = 12,
  [160] = 160,
  [161] = 143,
  [162] = 162,
  [163] = 12,
  [164] = 13,
  [165] = 165,
  [166] = 17,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 14,
  [171] = 171,
  [172] = 13,
  [173] = 146,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 14,
  [178] = 178,
  [179] = 146,
  [180] = 180,
  [181] = 145,
  [182] = 143,
  [183] = 183,
  [184] = 184,
  [185] = 13,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 146,
  [191] = 17,
  [192] = 192,
  [193] = 12,
  [194] = 143,
  [195] = 13,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 12,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 180,
  [215] = 13,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 184,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 189,
  [228] = 228,
  [229] = 12,
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
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 54,
  [259] = 259,
  [260] = 57,
  [261] = 55,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 79,
  [269] = 269,
  [270] = 270,
  [271] = 270,
  [272] = 70,
  [273] = 12,
  [274] = 76,
  [275] = 13,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 12,
  [285] = 13,
  [286] = 13,
  [287] = 287,
  [288] = 288,
  [289] = 12,
  [290] = 290,
  [291] = 291,
  [292] = 13,
  [293] = 12,
  [294] = 294,
  [295] = 13,
  [296] = 12,
  [297] = 13,
  [298] = 12,
  [299] = 13,
  [300] = 300,
  [301] = 12,
  [302] = 13,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 13,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 311,
  [320] = 314,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 13,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 12,
  [330] = 330,
  [331] = 331,
  [332] = 315,
  [333] = 13,
  [334] = 316,
  [335] = 335,
  [336] = 24,
  [337] = 337,
  [338] = 338,
  [339] = 21,
  [340] = 12,
  [341] = 317,
  [342] = 342,
  [343] = 318,
  [344] = 344,
  [345] = 326,
  [346] = 346,
  [347] = 13,
  [348] = 348,
  [349] = 12,
  [350] = 350,
  [351] = 351,
  [352] = 318,
  [353] = 12,
  [354] = 13,
  [355] = 355,
  [356] = 12,
  [357] = 348,
  [358] = 358,
  [359] = 311,
  [360] = 360,
  [361] = 316,
  [362] = 315,
  [363] = 363,
  [364] = 314,
  [365] = 365,
  [366] = 366,
  [367] = 316,
  [368] = 315,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 13,
  [373] = 12,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 376,
  [379] = 379,
  [380] = 380,
  [381] = 380,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 376,
  [386] = 380,
  [387] = 380,
  [388] = 376,
  [389] = 380,
  [390] = 380,
  [391] = 376,
  [392] = 376,
  [393] = 376,
  [394] = 380,
  [395] = 395,
  [396] = 21,
  [397] = 12,
  [398] = 24,
  [399] = 13,
  [400] = 400,
  [401] = 13,
  [402] = 376,
  [403] = 380,
  [404] = 404,
  [405] = 376,
  [406] = 380,
  [407] = 376,
  [408] = 380,
  [409] = 376,
  [410] = 380,
  [411] = 376,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 380,
  [417] = 417,
  [418] = 418,
  [419] = 380,
  [420] = 420,
  [421] = 376,
  [422] = 422,
  [423] = 423,
  [424] = 376,
  [425] = 425,
  [426] = 426,
  [427] = 426,
  [428] = 186,
  [429] = 380,
  [430] = 380,
  [431] = 376,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 435,
  [438] = 438,
  [439] = 439,
  [440] = 10,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 436,
  [447] = 447,
  [448] = 448,
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
  [464] = 455,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
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
  [480] = 460,
  [481] = 481,
  [482] = 482,
  [483] = 470,
  [484] = 484,
  [485] = 485,
  [486] = 479,
  [487] = 479,
  [488] = 460,
  [489] = 460,
  [490] = 460,
  [491] = 460,
  [492] = 460,
  [493] = 460,
  [494] = 460,
  [495] = 460,
  [496] = 460,
  [497] = 460,
  [498] = 460,
  [499] = 460,
  [500] = 500,
  [501] = 501,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(331);
      if (lookahead == '"') ADVANCE(440);
      if (lookahead == '#') ADVANCE(376);
      if (lookahead == '\'') ADVANCE(461);
      if (lookahead == '(') ADVANCE(359);
      if (lookahead == ')') ADVANCE(361);
      if (lookahead == '*') ADVANCE(438);
      if (lookahead == '-') ADVANCE(381);
      if (lookahead == '.') ADVANCE(379);
      if (lookahead == ':') ADVANCE(333);
      if (lookahead == '=') ADVANCE(334);
      if (lookahead == '?') ADVANCE(378);
      if (lookahead == 'A') ADVANCE(411);
      if (lookahead == 'C') ADVANCE(389);
      if (lookahead == 'D') ADVANCE(477);
      if (lookahead == 'E') ADVANCE(428);
      if (lookahead == 'I') ADVANCE(402);
      if (lookahead == 'L') ADVANCE(418);
      if (lookahead == 'M') ADVANCE(384);
      if (lookahead == 'N') ADVANCE(476);
      if (lookahead == 'P') ADVANCE(392);
      if (lookahead == 'R') ADVANCE(404);
      if (lookahead == 'S') ADVANCE(386);
      if (lookahead == 'T') ADVANCE(460);
      if (lookahead == 'U') ADVANCE(427);
      if (lookahead == 'V') ADVANCE(393);
      if (lookahead == 'X') ADVANCE(382);
      if (lookahead == '^') ADVANCE(435);
      if (lookahead == 'a') ADVANCE(414);
      if (lookahead == 'c') ADVANCE(420);
      if (lookahead == 'e') ADVANCE(429);
      if (lookahead == 'f') ADVANCE(397);
      if (lookahead == 'i') ADVANCE(413);
      if (lookahead == 'n') ADVANCE(394);
      if (lookahead == 'o') ADVANCE(400);
      if (lookahead == 's') ADVANCE(432);
      if (lookahead == 't') ADVANCE(426);
      if (lookahead == 'w') ADVANCE(409);
      if (lookahead == '|') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(472);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(440);
      if (lookahead == '#') ADVANCE(376);
      if (lookahead == 'C') ADVANCE(388);
      if (lookahead == 'R') ADVANCE(406);
      if (lookahead == 'f') ADVANCE(396);
      if (lookahead == 't') ADVANCE(426);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(434);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(441);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(439);
      if (lookahead == '\\') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(442);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(439);
      if (lookahead == 'a') ADVANCE(414);
      if (lookahead == 'f') ADVANCE(425);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(439);
      if (lookahead == 'a') ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(439);
      if (lookahead == 'o') ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(442);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(376);
      if (lookahead == '^') ADVANCE(435);
      if (lookahead == 'c') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(429);
      if (lookahead == 'i') ADVANCE(413);
      if (lookahead == 's') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(376);
      if (lookahead == '^') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(376);
      if (lookahead == 'c') ADVANCE(422);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(376);
      if (lookahead == 'i') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(461);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(462);
      END_STATE();
    case 16:
      if (lookahead == ')') ADVANCE(361);
      if (lookahead == 'o') ADVANCE(424);
      if (lookahead == '|') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 17:
      if (lookahead == ')') ADVANCE(361);
      if (lookahead == 'o') ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(438);
      if (lookahead == '?') ADVANCE(378);
      if (lookahead == 'C') ADVANCE(388);
      if (lookahead == 'D') ADVANCE(477);
      if (lookahead == 'M') ADVANCE(383);
      if (lookahead == 'N') ADVANCE(476);
      if (lookahead == 'R') ADVANCE(406);
      if (lookahead == 'S') ADVANCE(385);
      if (lookahead == 'T') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(381);
      if (lookahead == 'i') ADVANCE(415);
      if (lookahead == 's') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(379);
      if (lookahead == 'n') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(437);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(288);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(367);
      END_STATE();
    case 26:
      if (lookahead == '?') ADVANCE(378);
      if (lookahead == 'C') ADVANCE(388);
      if (lookahead == 'D') ADVANCE(477);
      if (lookahead == 'M') ADVANCE(383);
      if (lookahead == 'N') ADVANCE(476);
      if (lookahead == 'R') ADVANCE(406);
      if (lookahead == 'S') ADVANCE(385);
      if (lookahead == 'T') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 27:
      if (lookahead == '?') ADVANCE(378);
      if (lookahead == 'D') ADVANCE(477);
      if (lookahead == 'M') ADVANCE(383);
      if (lookahead == 'N') ADVANCE(476);
      if (lookahead == 'S') ADVANCE(385);
      if (lookahead == 'T') ADVANCE(387);
      if (lookahead == 'a') ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 28:
      if (lookahead == 'C') ADVANCE(388);
      if (lookahead == 'R') ADVANCE(406);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 29:
      if (lookahead == 'D') ADVANCE(407);
      if (lookahead == 'E') ADVANCE(430);
      if (lookahead == 'S') ADVANCE(405);
      if (lookahead == 'X') ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 30:
      if (lookahead == 'D') ADVANCE(407);
      if (lookahead == 'I') ADVANCE(401);
      if (lookahead == 'P') ADVANCE(391);
      if (lookahead == 'T') ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 31:
      if (lookahead == 'P') ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == 'S') ADVANCE(473);
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 33:
      if (lookahead == 'S') ADVANCE(272);
      END_STATE();
    case 34:
      if (lookahead == 'S') ADVANCE(111);
      END_STATE();
    case 35:
      if (lookahead == 'U') ADVANCE(474);
      END_STATE();
    case 36:
      if (lookahead == 'U') ADVANCE(475);
      END_STATE();
    case 37:
      if (lookahead == '^') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(415);
      if (lookahead == 'o') ADVANCE(398);
      if (lookahead == 's') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 55:
      if (lookahead == 'b') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(157);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(208);
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
      if (lookahead == 'c') ADVANCE(249);
      if (lookahead == 'm') ADVANCE(198);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(152);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(160);
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(347);
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(363);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(471);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(467);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(465);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(468);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(464);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(466);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 121:
      if (lookahead == 'f') ADVANCE(348);
      END_STATE();
    case 122:
      if (lookahead == 'f') ADVANCE(143);
      END_STATE();
    case 123:
      if (lookahead == 'f') ADVANCE(112);
      END_STATE();
    case 124:
      if (lookahead == 'f') ADVANCE(119);
      END_STATE();
    case 125:
      if (lookahead == 'f') ADVANCE(119);
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 126:
      if (lookahead == 'g') ADVANCE(342);
      END_STATE();
    case 127:
      if (lookahead == 'g') ADVANCE(133);
      END_STATE();
    case 128:
      if (lookahead == 'g') ADVANCE(109);
      END_STATE();
    case 129:
      if (lookahead == 'g') ADVANCE(83);
      END_STATE();
    case 130:
      if (lookahead == 'h') ADVANCE(355);
      END_STATE();
    case 131:
      if (lookahead == 'h') ADVANCE(116);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(415);
      if (lookahead == 's') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(135)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(343);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(469);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(268);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(260);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(270);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(258);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(259);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(261);
      END_STATE();
    case 161:
      if (lookahead == 'm') ADVANCE(358);
      END_STATE();
    case 162:
      if (lookahead == 'm') ADVANCE(372);
      END_STATE();
    case 163:
      if (lookahead == 'm') ADVANCE(341);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(336);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(346);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(345);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(242);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(262);
      END_STATE();
    case 193:
      if (lookahead == 'p') ADVANCE(194);
      END_STATE();
    case 194:
      if (lookahead == 'p') ADVANCE(138);
      END_STATE();
    case 195:
      if (lookahead == 'p') ADVANCE(252);
      END_STATE();
    case 196:
      if (lookahead == 'p') ADVANCE(209);
      END_STATE();
    case 197:
      if (lookahead == 'p') ADVANCE(209);
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 198:
      if (lookahead == 'p') ADVANCE(156);
      END_STATE();
    case 199:
      if (lookahead == 'q') ADVANCE(256);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(366);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 218:
      if (lookahead == 's') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(218)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 219:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 220:
      if (lookahead == 's') ADVANCE(332);
      END_STATE();
    case 221:
      if (lookahead == 's') ADVANCE(370);
      END_STATE();
    case 222:
      if (lookahead == 's') ADVANCE(364);
      END_STATE();
    case 223:
      if (lookahead == 's') ADVANCE(362);
      END_STATE();
    case 224:
      if (lookahead == 's') ADVANCE(247);
      if (lookahead == 'v') ADVANCE(46);
      END_STATE();
    case 225:
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 226:
      if (lookahead == 's') ADVANCE(250);
      END_STATE();
    case 227:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 228:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 229:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 230:
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 231:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 232:
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 233:
      if (lookahead == 's') ADVANCE(251);
      END_STATE();
    case 234:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 235:
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 236:
      if (lookahead == 's') ADVANCE(253);
      if (lookahead == 'v') ADVANCE(46);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(349);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(352);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(357);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(340);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(337);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(373);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 254:
      if (lookahead == 'u') ADVANCE(273);
      if (lookahead == 'x') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(446);
      if (lookahead != 0) ADVANCE(444);
      END_STATE();
    case 255:
      if (lookahead == 'u') ADVANCE(204);
      END_STATE();
    case 256:
      if (lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 257:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 258:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 259:
      if (lookahead == 'u') ADVANCE(117);
      END_STATE();
    case 260:
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 261:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 262:
      if (lookahead == 'u') ADVANCE(216);
      END_STATE();
    case 263:
      if (lookahead == 'v') ADVANCE(107);
      END_STATE();
    case 264:
      if (lookahead == 'x') ADVANCE(197);
      END_STATE();
    case 265:
      if (lookahead == 'x') ADVANCE(42);
      END_STATE();
    case 266:
      if (lookahead == 'x') ADVANCE(245);
      END_STATE();
    case 267:
      if (lookahead == 'y') ADVANCE(226);
      END_STATE();
    case 268:
      if (lookahead == 'y') ADVANCE(365);
      END_STATE();
    case 269:
      if (lookahead == 'y') ADVANCE(350);
      END_STATE();
    case 270:
      if (lookahead == 'y') ADVANCE(360);
      END_STATE();
    case 271:
      if (lookahead == 'y') ADVANCE(222);
      END_STATE();
    case 272:
      if (lookahead == 'y') ADVANCE(233);
      END_STATE();
    case 273:
      if (lookahead == '{') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      END_STATE();
    case 274:
      if (lookahead == '}') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(274);
      END_STATE();
    case 275:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(275)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 276:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      END_STATE();
    case 277:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      END_STATE();
    case 278:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(454);
      END_STATE();
    case 279:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 280:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(457);
      END_STATE();
    case 281:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(453);
      END_STATE();
    case 282:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      END_STATE();
    case 283:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(458);
      END_STATE();
    case 284:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 285:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 286:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      END_STATE();
    case 287:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 288:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 289:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 290:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 291:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(456);
      END_STATE();
    case 292:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      END_STATE();
    case 293:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(444);
      END_STATE();
    case 294:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(274);
      END_STATE();
    case 295:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      END_STATE();
    case 296:
      if (eof) ADVANCE(331);
      if (lookahead == '"') ADVANCE(440);
      if (lookahead == '(') ADVANCE(359);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == ':') ADVANCE(333);
      if (lookahead == 'A') ADVANCE(147);
      if (lookahead == 'C') ADVANCE(183);
      if (lookahead == 'D') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(264);
      if (lookahead == 'I') ADVANCE(68);
      if (lookahead == 'L') ADVANCE(184);
      if (lookahead == 'M') ADVANCE(38);
      if (lookahead == 'P') ADVANCE(39);
      if (lookahead == 'R') ADVANCE(114);
      if (lookahead == 'S') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(43);
      if (lookahead == 'U') ADVANCE(219);
      if (lookahead == 'V') ADVANCE(40);
      if (lookahead == 'X') ADVANCE(31);
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == 'f') ADVANCE(203);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(296)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      END_STATE();
    case 297:
      if (eof) ADVANCE(331);
      if (lookahead == '"') ADVANCE(440);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '=') ADVANCE(334);
      if (lookahead == '?') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(147);
      if (lookahead == 'C') ADVANCE(183);
      if (lookahead == 'D') ADVANCE(477);
      if (lookahead == 'E') ADVANCE(266);
      if (lookahead == 'I') ADVANCE(182);
      if (lookahead == 'L') ADVANCE(184);
      if (lookahead == 'M') ADVANCE(32);
      if (lookahead == 'N') ADVANCE(476);
      if (lookahead == 'P') ADVANCE(200);
      if (lookahead == 'R') ADVANCE(114);
      if (lookahead == 'S') ADVANCE(35);
      if (lookahead == 'T') ADVANCE(36);
      if (lookahead == 'V') ADVANCE(40);
      if (lookahead == '^') ADVANCE(435);
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == 'c') ADVANCE(191);
      if (lookahead == 'f') ADVANCE(203);
      if (lookahead == 'i') ADVANCE(177);
      if (lookahead == 'o') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(297)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(436);
      END_STATE();
    case 298:
      if (eof) ADVANCE(331);
      if (lookahead == '"') ADVANCE(439);
      if (lookahead == '#') ADVANCE(376);
      if (lookahead == '(') ADVANCE(359);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == ':') ADVANCE(333);
      if (lookahead == '=') ADVANCE(334);
      if (lookahead == 'A') ADVANCE(147);
      if (lookahead == 'C') ADVANCE(183);
      if (lookahead == 'D') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(264);
      if (lookahead == 'I') ADVANCE(68);
      if (lookahead == 'L') ADVANCE(184);
      if (lookahead == 'M') ADVANCE(38);
      if (lookahead == 'P') ADVANCE(39);
      if (lookahead == 'R') ADVANCE(114);
      if (lookahead == 'S') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(43);
      if (lookahead == 'U') ADVANCE(219);
      if (lookahead == 'V') ADVANCE(40);
      if (lookahead == 'X') ADVANCE(31);
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == 'f') ADVANCE(203);
      if (lookahead == 'i') ADVANCE(177);
      if (lookahead == 'n') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(201);
      if (lookahead == 'p') ADVANCE(212);
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == 'v') ADVANCE(53);
      if (lookahead == 'w') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(298)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(436);
      END_STATE();
    case 299:
      if (eof) ADVANCE(331);
      if (lookahead == '"') ADVANCE(439);
      if (lookahead == '#') ADVANCE(376);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == 'A') ADVANCE(411);
      if (lookahead == 'C') ADVANCE(417);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead == 'I') ADVANCE(416);
      if (lookahead == 'L') ADVANCE(418);
      if (lookahead == 'M') ADVANCE(390);
      if (lookahead == 'P') ADVANCE(423);
      if (lookahead == 'R') ADVANCE(408);
      if (lookahead == 'V') ADVANCE(393);
      if (lookahead == 'a') ADVANCE(414);
      if (lookahead == 'f') ADVANCE(396);
      if (lookahead == 't') ADVANCE(426);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(299)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 300:
      if (eof) ADVANCE(331);
      if (lookahead == '"') ADVANCE(439);
      if (lookahead == '#') ADVANCE(376);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == 'A') ADVANCE(411);
      if (lookahead == 'C') ADVANCE(417);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead == 'I') ADVANCE(416);
      if (lookahead == 'L') ADVANCE(418);
      if (lookahead == 'M') ADVANCE(390);
      if (lookahead == 'P') ADVANCE(423);
      if (lookahead == 'R') ADVANCE(408);
      if (lookahead == 'V') ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(300)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 301:
      if (eof) ADVANCE(331);
      if (lookahead == '"') ADVANCE(439);
      if (lookahead == '(') ADVANCE(359);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == ':') ADVANCE(333);
      if (lookahead == 'A') ADVANCE(411);
      if (lookahead == 'C') ADVANCE(417);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead == 'I') ADVANCE(416);
      if (lookahead == 'L') ADVANCE(418);
      if (lookahead == 'M') ADVANCE(390);
      if (lookahead == 'P') ADVANCE(423);
      if (lookahead == 'R') ADVANCE(408);
      if (lookahead == 'V') ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(301)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 302:
      if (eof) ADVANCE(331);
      if (lookahead == '"') ADVANCE(439);
      if (lookahead == '(') ADVANCE(359);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == 'A') ADVANCE(411);
      if (lookahead == 'C') ADVANCE(417);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead == 'I') ADVANCE(416);
      if (lookahead == 'L') ADVANCE(418);
      if (lookahead == 'M') ADVANCE(390);
      if (lookahead == 'P') ADVANCE(423);
      if (lookahead == 'R') ADVANCE(408);
      if (lookahead == 'V') ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(302)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 303:
      if (eof) ADVANCE(331);
      if (lookahead == '"') ADVANCE(439);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == ':') ADVANCE(333);
      if (lookahead == 'A') ADVANCE(411);
      if (lookahead == 'C') ADVANCE(417);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead == 'I') ADVANCE(416);
      if (lookahead == 'L') ADVANCE(418);
      if (lookahead == 'M') ADVANCE(390);
      if (lookahead == 'P') ADVANCE(423);
      if (lookahead == 'R') ADVANCE(408);
      if (lookahead == 'V') ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(303)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 304:
      if (eof) ADVANCE(331);
      if (lookahead == '"') ADVANCE(439);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == 'A') ADVANCE(411);
      if (lookahead == 'C') ADVANCE(417);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead == 'I') ADVANCE(416);
      if (lookahead == 'L') ADVANCE(418);
      if (lookahead == 'M') ADVANCE(390);
      if (lookahead == 'P') ADVANCE(423);
      if (lookahead == 'R') ADVANCE(408);
      if (lookahead == 'V') ADVANCE(393);
      if (lookahead == 'a') ADVANCE(414);
      if (lookahead == 'f') ADVANCE(425);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(304)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 305:
      if (eof) ADVANCE(331);
      if (lookahead == '"') ADVANCE(439);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == 'A') ADVANCE(411);
      if (lookahead == 'C') ADVANCE(417);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead == 'I') ADVANCE(416);
      if (lookahead == 'L') ADVANCE(418);
      if (lookahead == 'M') ADVANCE(390);
      if (lookahead == 'P') ADVANCE(423);
      if (lookahead == 'R') ADVANCE(408);
      if (lookahead == 'V') ADVANCE(393);
      if (lookahead == 'a') ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(305)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 306:
      if (eof) ADVANCE(331);
      if (lookahead == '"') ADVANCE(439);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == 'A') ADVANCE(411);
      if (lookahead == 'C') ADVANCE(417);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead == 'I') ADVANCE(416);
      if (lookahead == 'L') ADVANCE(418);
      if (lookahead == 'M') ADVANCE(390);
      if (lookahead == 'P') ADVANCE(423);
      if (lookahead == 'R') ADVANCE(408);
      if (lookahead == 'V') ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(306)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 307:
      if (eof) ADVANCE(331);
      if (lookahead == '#') ADVANCE(376);
      if (lookahead == '\'') ADVANCE(461);
      if (lookahead == '(') ADVANCE(359);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == ':') ADVANCE(333);
      if (lookahead == 'A') ADVANCE(411);
      if (lookahead == 'C') ADVANCE(417);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead == 'I') ADVANCE(416);
      if (lookahead == 'L') ADVANCE(418);
      if (lookahead == 'M') ADVANCE(390);
      if (lookahead == 'P') ADVANCE(423);
      if (lookahead == 'R') ADVANCE(408);
      if (lookahead == 'V') ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(307)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 308:
      if (eof) ADVANCE(331);
      if (lookahead == '#') ADVANCE(376);
      if (lookahead == '\'') ADVANCE(461);
      if (lookahead == '(') ADVANCE(359);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == 'A') ADVANCE(411);
      if (lookahead == 'C') ADVANCE(417);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead == 'I') ADVANCE(416);
      if (lookahead == 'L') ADVANCE(418);
      if (lookahead == 'M') ADVANCE(390);
      if (lookahead == 'P') ADVANCE(423);
      if (lookahead == 'R') ADVANCE(408);
      if (lookahead == 'V') ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(308)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 309:
      if (eof) ADVANCE(331);
      if (lookahead == '#') ADVANCE(376);
      if (lookahead == '\'') ADVANCE(461);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == ':') ADVANCE(333);
      if (lookahead == 'A') ADVANCE(411);
      if (lookahead == 'C') ADVANCE(417);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead == 'I') ADVANCE(416);
      if (lookahead == 'L') ADVANCE(418);
      if (lookahead == 'M') ADVANCE(390);
      if (lookahead == 'P') ADVANCE(423);
      if (lookahead == 'R') ADVANCE(408);
      if (lookahead == 'V') ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(309)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 310:
      if (eof) ADVANCE(331);
      if (lookahead == '#') ADVANCE(376);
      if (lookahead == '\'') ADVANCE(461);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == 'A') ADVANCE(411);
      if (lookahead == 'C') ADVANCE(417);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead == 'I') ADVANCE(416);
      if (lookahead == 'L') ADVANCE(418);
      if (lookahead == 'M') ADVANCE(390);
      if (lookahead == 'P') ADVANCE(423);
      if (lookahead == 'R') ADVANCE(408);
      if (lookahead == 'V') ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(310)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 311:
      if (eof) ADVANCE(331);
      if (lookahead == '#') ADVANCE(376);
      if (lookahead == '(') ADVANCE(359);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == 'A') ADVANCE(411);
      if (lookahead == 'C') ADVANCE(417);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead == 'I') ADVANCE(416);
      if (lookahead == 'L') ADVANCE(418);
      if (lookahead == 'M') ADVANCE(390);
      if (lookahead == 'P') ADVANCE(423);
      if (lookahead == 'R') ADVANCE(408);
      if (lookahead == 'V') ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(311)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 312:
      if (eof) ADVANCE(331);
      if (lookahead == '#') ADVANCE(376);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == 'A') ADVANCE(411);
      if (lookahead == 'C') ADVANCE(417);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead == 'I') ADVANCE(416);
      if (lookahead == 'L') ADVANCE(418);
      if (lookahead == 'M') ADVANCE(390);
      if (lookahead == 'P') ADVANCE(423);
      if (lookahead == 'R') ADVANCE(408);
      if (lookahead == 'V') ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(312)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 313:
      if (eof) ADVANCE(331);
      if (lookahead == '#') ADVANCE(376);
      if (lookahead == 'A') ADVANCE(411);
      if (lookahead == 'C') ADVANCE(417);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead == 'I') ADVANCE(416);
      if (lookahead == 'L') ADVANCE(418);
      if (lookahead == 'M') ADVANCE(390);
      if (lookahead == 'P') ADVANCE(423);
      if (lookahead == 'R') ADVANCE(408);
      if (lookahead == 'V') ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(313)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 314:
      if (eof) ADVANCE(331);
      if (lookahead == '(') ADVANCE(359);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == 'A') ADVANCE(411);
      if (lookahead == 'C') ADVANCE(417);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead == 'I') ADVANCE(416);
      if (lookahead == 'L') ADVANCE(418);
      if (lookahead == 'M') ADVANCE(390);
      if (lookahead == 'P') ADVANCE(423);
      if (lookahead == 'R') ADVANCE(408);
      if (lookahead == 'V') ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(314)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 315:
      if (eof) ADVANCE(331);
      if (lookahead == '(') ADVANCE(359);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == 'A') ADVANCE(147);
      if (lookahead == 'C') ADVANCE(183);
      if (lookahead == 'E') ADVANCE(266);
      if (lookahead == 'I') ADVANCE(182);
      if (lookahead == 'L') ADVANCE(184);
      if (lookahead == 'M') ADVANCE(38);
      if (lookahead == 'P') ADVANCE(200);
      if (lookahead == 'R') ADVANCE(114);
      if (lookahead == 'T') ADVANCE(459);
      if (lookahead == 'V') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(315)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 316:
      if (eof) ADVANCE(331);
      if (lookahead == '*') ADVANCE(438);
      if (lookahead == '?') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(147);
      if (lookahead == 'C') ADVANCE(183);
      if (lookahead == 'D') ADVANCE(477);
      if (lookahead == 'E') ADVANCE(266);
      if (lookahead == 'I') ADVANCE(182);
      if (lookahead == 'L') ADVANCE(184);
      if (lookahead == 'M') ADVANCE(32);
      if (lookahead == 'N') ADVANCE(476);
      if (lookahead == 'P') ADVANCE(200);
      if (lookahead == 'R') ADVANCE(114);
      if (lookahead == 'S') ADVANCE(35);
      if (lookahead == 'T') ADVANCE(36);
      if (lookahead == 'V') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(316)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(436);
      END_STATE();
    case 317:
      if (eof) ADVANCE(331);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == '-') ADVANCE(381);
      if (lookahead == 'A') ADVANCE(411);
      if (lookahead == 'C') ADVANCE(417);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead == 'I') ADVANCE(416);
      if (lookahead == 'L') ADVANCE(418);
      if (lookahead == 'M') ADVANCE(390);
      if (lookahead == 'P') ADVANCE(423);
      if (lookahead == 'R') ADVANCE(408);
      if (lookahead == 'V') ADVANCE(393);
      if (lookahead == 'i') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(317)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 318:
      if (eof) ADVANCE(331);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == '.') ADVANCE(379);
      if (lookahead == '=') ADVANCE(334);
      if (lookahead == '?') ADVANCE(378);
      if (lookahead == 'A') ADVANCE(411);
      if (lookahead == 'C') ADVANCE(417);
      if (lookahead == 'D') ADVANCE(477);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead == 'I') ADVANCE(416);
      if (lookahead == 'L') ADVANCE(418);
      if (lookahead == 'M') ADVANCE(384);
      if (lookahead == 'N') ADVANCE(476);
      if (lookahead == 'P') ADVANCE(423);
      if (lookahead == 'R') ADVANCE(408);
      if (lookahead == 'S') ADVANCE(385);
      if (lookahead == 'T') ADVANCE(387);
      if (lookahead == 'V') ADVANCE(393);
      if (lookahead == '^') ADVANCE(435);
      if (lookahead == 'a') ADVANCE(414);
      if (lookahead == 'c') ADVANCE(421);
      if (lookahead == 'f') ADVANCE(425);
      if (lookahead == 'i') ADVANCE(415);
      if (lookahead == 'o') ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(318)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 319:
      if (eof) ADVANCE(331);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == '=') ADVANCE(334);
      if (lookahead == 'A') ADVANCE(411);
      if (lookahead == 'C') ADVANCE(417);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead == 'I') ADVANCE(416);
      if (lookahead == 'L') ADVANCE(418);
      if (lookahead == 'M') ADVANCE(390);
      if (lookahead == 'P') ADVANCE(423);
      if (lookahead == 'R') ADVANCE(408);
      if (lookahead == 'V') ADVANCE(393);
      if (lookahead == 'i') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(319)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 320:
      if (eof) ADVANCE(331);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == 'A') ADVANCE(411);
      if (lookahead == 'C') ADVANCE(417);
      if (lookahead == 'D') ADVANCE(407);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead == 'I') ADVANCE(412);
      if (lookahead == 'L') ADVANCE(418);
      if (lookahead == 'M') ADVANCE(390);
      if (lookahead == 'P') ADVANCE(423);
      if (lookahead == 'R') ADVANCE(408);
      if (lookahead == 'T') ADVANCE(410);
      if (lookahead == 'U') ADVANCE(427);
      if (lookahead == 'V') ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(320)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 321:
      if (eof) ADVANCE(331);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == 'A') ADVANCE(411);
      if (lookahead == 'C') ADVANCE(417);
      if (lookahead == 'D') ADVANCE(407);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead == 'I') ADVANCE(403);
      if (lookahead == 'L') ADVANCE(418);
      if (lookahead == 'M') ADVANCE(390);
      if (lookahead == 'P') ADVANCE(392);
      if (lookahead == 'R') ADVANCE(408);
      if (lookahead == 'T') ADVANCE(410);
      if (lookahead == 'V') ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(321)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 322:
      if (eof) ADVANCE(331);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == 'A') ADVANCE(411);
      if (lookahead == 'C') ADVANCE(417);
      if (lookahead == 'D') ADVANCE(407);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead == 'I') ADVANCE(403);
      if (lookahead == 'L') ADVANCE(418);
      if (lookahead == 'M') ADVANCE(390);
      if (lookahead == 'P') ADVANCE(423);
      if (lookahead == 'R') ADVANCE(408);
      if (lookahead == 'S') ADVANCE(419);
      if (lookahead == 'T') ADVANCE(395);
      if (lookahead == 'V') ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(322)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 323:
      if (eof) ADVANCE(331);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == 'A') ADVANCE(411);
      if (lookahead == 'C') ADVANCE(417);
      if (lookahead == 'D') ADVANCE(407);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead == 'I') ADVANCE(403);
      if (lookahead == 'L') ADVANCE(418);
      if (lookahead == 'M') ADVANCE(390);
      if (lookahead == 'P') ADVANCE(423);
      if (lookahead == 'R') ADVANCE(408);
      if (lookahead == 'T') ADVANCE(410);
      if (lookahead == 'V') ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(323)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 324:
      if (eof) ADVANCE(331);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == 'A') ADVANCE(411);
      if (lookahead == 'C') ADVANCE(417);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead == 'I') ADVANCE(416);
      if (lookahead == 'L') ADVANCE(418);
      if (lookahead == 'M') ADVANCE(390);
      if (lookahead == 'P') ADVANCE(423);
      if (lookahead == 'R') ADVANCE(408);
      if (lookahead == 'V') ADVANCE(393);
      if (lookahead == 'a') ADVANCE(414);
      if (lookahead == 'w') ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(324)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 325:
      if (eof) ADVANCE(331);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == 'A') ADVANCE(411);
      if (lookahead == 'C') ADVANCE(417);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead == 'I') ADVANCE(416);
      if (lookahead == 'L') ADVANCE(418);
      if (lookahead == 'M') ADVANCE(390);
      if (lookahead == 'P') ADVANCE(423);
      if (lookahead == 'R') ADVANCE(408);
      if (lookahead == 'V') ADVANCE(393);
      if (lookahead == 'a') ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(325)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 326:
      if (eof) ADVANCE(331);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == 'A') ADVANCE(411);
      if (lookahead == 'C') ADVANCE(417);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead == 'I') ADVANCE(416);
      if (lookahead == 'L') ADVANCE(418);
      if (lookahead == 'M') ADVANCE(390);
      if (lookahead == 'P') ADVANCE(423);
      if (lookahead == 'R') ADVANCE(408);
      if (lookahead == 'V') ADVANCE(393);
      if (lookahead == 'o') ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(326)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 327:
      if (eof) ADVANCE(331);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == 'A') ADVANCE(411);
      if (lookahead == 'C') ADVANCE(417);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead == 'I') ADVANCE(416);
      if (lookahead == 'L') ADVANCE(418);
      if (lookahead == 'M') ADVANCE(390);
      if (lookahead == 'P') ADVANCE(423);
      if (lookahead == 'R') ADVANCE(408);
      if (lookahead == 'V') ADVANCE(393);
      if (lookahead == 'w') ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(327)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 328:
      if (eof) ADVANCE(331);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == 'A') ADVANCE(411);
      if (lookahead == 'C') ADVANCE(417);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead == 'I') ADVANCE(416);
      if (lookahead == 'L') ADVANCE(418);
      if (lookahead == 'M') ADVANCE(390);
      if (lookahead == 'P') ADVANCE(423);
      if (lookahead == 'R') ADVANCE(408);
      if (lookahead == 'V') ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(328)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 329:
      if (eof) ADVANCE(331);
      if (lookahead == 'A') ADVANCE(411);
      if (lookahead == 'C') ADVANCE(417);
      if (lookahead == 'D') ADVANCE(407);
      if (lookahead == 'E') ADVANCE(428);
      if (lookahead == 'I') ADVANCE(416);
      if (lookahead == 'L') ADVANCE(418);
      if (lookahead == 'M') ADVANCE(390);
      if (lookahead == 'P') ADVANCE(423);
      if (lookahead == 'R') ADVANCE(408);
      if (lookahead == 'S') ADVANCE(405);
      if (lookahead == 'V') ADVANCE(393);
      if (lookahead == 'X') ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(329)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 330:
      if (eof) ADVANCE(331);
      if (lookahead == 'A') ADVANCE(411);
      if (lookahead == 'C') ADVANCE(417);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead == 'I') ADVANCE(416);
      if (lookahead == 'L') ADVANCE(418);
      if (lookahead == 'M') ADVANCE(390);
      if (lookahead == 'P') ADVANCE(423);
      if (lookahead == 'R') ADVANCE(408);
      if (lookahead == 'V') ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(330)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_Alias);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_Profile);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_Extension);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_Invariant);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_Instance);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_Instance);
      if (lookahead == 'O') ADVANCE(121);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_ValueSet);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_CodeSystem);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_Mapping);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_Logical);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_Resource);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_Description);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_Expression);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_Id);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_InstanceOf);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_Parent);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_Severity);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_Source);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_Target);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_Title);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_Usage);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_XPath);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_insert);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_exactly);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_obeys);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_exclude);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_codes);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_valueset);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '!') ADVANCE(472);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(437);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '>') ADVANCE(367);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'P') ADVANCE(44);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'S') ADVANCE(473);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'S') ADVANCE(473);
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'U') ADVANCE(474);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'U') ADVANCE(474);
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'U') ADVANCE(475);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'b') ADVANCE(79);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'b') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'b') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(366);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(347);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(347);
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(347);
      if (lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'h') ADVANCE(116);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(366);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(197);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(66);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(196);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(245);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'y') ADVANCE(226);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(436);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_cardinality_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(443);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(443);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(444);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(445);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(287);
      if (lookahead == '.') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(277);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == 'Z') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '-') ADVANCE(290);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(283);
      if (lookahead == 'Z') ADVANCE(454);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(285);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == 'Z') ADVANCE(454);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(285);
      if (lookahead == ':') ADVANCE(289);
      if (lookahead == 'Z') ADVANCE(454);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(285);
      if (lookahead == 'Z') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(458);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_T);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'U') ADVANCE(475);
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(462);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_example);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_preferred);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_extensible);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_Reference);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_Canonical);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_named);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_QMARK_BANG);
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
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 298},
  [3] = {.lex_state = 298},
  [4] = {.lex_state = 298},
  [5] = {.lex_state = 298},
  [6] = {.lex_state = 298},
  [7] = {.lex_state = 298},
  [8] = {.lex_state = 298},
  [9] = {.lex_state = 297},
  [10] = {.lex_state = 298},
  [11] = {.lex_state = 297},
  [12] = {.lex_state = 318},
  [13] = {.lex_state = 318},
  [14] = {.lex_state = 296},
  [15] = {.lex_state = 298},
  [16] = {.lex_state = 298},
  [17] = {.lex_state = 296},
  [18] = {.lex_state = 297},
  [19] = {.lex_state = 297},
  [20] = {.lex_state = 297},
  [21] = {.lex_state = 298},
  [22] = {.lex_state = 298},
  [23] = {.lex_state = 298},
  [24] = {.lex_state = 298},
  [25] = {.lex_state = 298},
  [26] = {.lex_state = 298},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 298},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 298},
  [33] = {.lex_state = 298},
  [34] = {.lex_state = 298},
  [35] = {.lex_state = 298},
  [36] = {.lex_state = 298},
  [37] = {.lex_state = 298},
  [38] = {.lex_state = 298},
  [39] = {.lex_state = 298},
  [40] = {.lex_state = 299},
  [41] = {.lex_state = 298},
  [42] = {.lex_state = 298},
  [43] = {.lex_state = 298},
  [44] = {.lex_state = 298},
  [45] = {.lex_state = 298},
  [46] = {.lex_state = 298},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 298},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 298},
  [51] = {.lex_state = 297},
  [52] = {.lex_state = 298},
  [53] = {.lex_state = 297},
  [54] = {.lex_state = 316},
  [55] = {.lex_state = 297},
  [56] = {.lex_state = 298},
  [57] = {.lex_state = 316},
  [58] = {.lex_state = 297},
  [59] = {.lex_state = 307},
  [60] = {.lex_state = 297},
  [61] = {.lex_state = 298},
  [62] = {.lex_state = 297},
  [63] = {.lex_state = 297},
  [64] = {.lex_state = 297},
  [65] = {.lex_state = 298},
  [66] = {.lex_state = 309},
  [67] = {.lex_state = 298},
  [68] = {.lex_state = 308},
  [69] = {.lex_state = 297},
  [70] = {.lex_state = 297},
  [71] = {.lex_state = 322},
  [72] = {.lex_state = 300},
  [73] = {.lex_state = 322},
  [74] = {.lex_state = 310},
  [75] = {.lex_state = 300},
  [76] = {.lex_state = 297},
  [77] = {.lex_state = 299},
  [78] = {.lex_state = 299},
  [79] = {.lex_state = 297},
  [80] = {.lex_state = 321},
  [81] = {.lex_state = 299},
  [82] = {.lex_state = 320},
  [83] = {.lex_state = 320},
  [84] = {.lex_state = 298},
  [85] = {.lex_state = 321},
  [86] = {.lex_state = 301},
  [87] = {.lex_state = 298},
  [88] = {.lex_state = 298},
  [89] = {.lex_state = 298},
  [90] = {.lex_state = 323},
  [91] = {.lex_state = 26},
  [92] = {.lex_state = 304},
  [93] = {.lex_state = 304},
  [94] = {.lex_state = 298},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 323},
  [97] = {.lex_state = 298},
  [98] = {.lex_state = 298},
  [99] = {.lex_state = 298},
  [100] = {.lex_state = 312},
  [101] = {.lex_state = 301},
  [102] = {.lex_state = 329},
  [103] = {.lex_state = 298},
  [104] = {.lex_state = 298},
  [105] = {.lex_state = 298},
  [106] = {.lex_state = 329},
  [107] = {.lex_state = 298},
  [108] = {.lex_state = 312},
  [109] = {.lex_state = 298},
  [110] = {.lex_state = 26},
  [111] = {.lex_state = 298},
  [112] = {.lex_state = 324},
  [113] = {.lex_state = 303},
  [114] = {.lex_state = 298},
  [115] = {.lex_state = 298},
  [116] = {.lex_state = 319},
  [117] = {.lex_state = 302},
  [118] = {.lex_state = 298},
  [119] = {.lex_state = 319},
  [120] = {.lex_state = 317},
  [121] = {.lex_state = 302},
  [122] = {.lex_state = 317},
  [123] = {.lex_state = 298},
  [124] = {.lex_state = 297},
  [125] = {.lex_state = 298},
  [126] = {.lex_state = 297},
  [127] = {.lex_state = 324},
  [128] = {.lex_state = 305},
  [129] = {.lex_state = 298},
  [130] = {.lex_state = 298},
  [131] = {.lex_state = 311},
  [132] = {.lex_state = 305},
  [133] = {.lex_state = 303},
  [134] = {.lex_state = 298},
  [135] = {.lex_state = 311},
  [136] = {.lex_state = 297},
  [137] = {.lex_state = 298},
  [138] = {.lex_state = 314},
  [139] = {.lex_state = 298},
  [140] = {.lex_state = 298},
  [141] = {.lex_state = 298},
  [142] = {.lex_state = 298},
  [143] = {.lex_state = 298},
  [144] = {.lex_state = 298},
  [145] = {.lex_state = 298},
  [146] = {.lex_state = 298},
  [147] = {.lex_state = 298},
  [148] = {.lex_state = 327},
  [149] = {.lex_state = 327},
  [150] = {.lex_state = 298},
  [151] = {.lex_state = 298},
  [152] = {.lex_state = 306},
  [153] = {.lex_state = 306},
  [154] = {.lex_state = 326},
  [155] = {.lex_state = 298},
  [156] = {.lex_state = 325},
  [157] = {.lex_state = 298},
  [158] = {.lex_state = 326},
  [159] = {.lex_state = 325},
  [160] = {.lex_state = 298},
  [161] = {.lex_state = 298},
  [162] = {.lex_state = 298},
  [163] = {.lex_state = 312},
  [164] = {.lex_state = 312},
  [165] = {.lex_state = 298},
  [166] = {.lex_state = 300},
  [167] = {.lex_state = 298},
  [168] = {.lex_state = 298},
  [169] = {.lex_state = 298},
  [170] = {.lex_state = 300},
  [171] = {.lex_state = 298},
  [172] = {.lex_state = 314},
  [173] = {.lex_state = 298},
  [174] = {.lex_state = 298},
  [175] = {.lex_state = 298},
  [176] = {.lex_state = 298},
  [177] = {.lex_state = 312},
  [178] = {.lex_state = 298},
  [179] = {.lex_state = 298},
  [180] = {.lex_state = 298},
  [181] = {.lex_state = 298},
  [182] = {.lex_state = 298},
  [183] = {.lex_state = 298},
  [184] = {.lex_state = 298},
  [185] = {.lex_state = 313},
  [186] = {.lex_state = 298},
  [187] = {.lex_state = 298},
  [188] = {.lex_state = 298},
  [189] = {.lex_state = 298},
  [190] = {.lex_state = 298},
  [191] = {.lex_state = 312},
  [192] = {.lex_state = 298},
  [193] = {.lex_state = 328},
  [194] = {.lex_state = 298},
  [195] = {.lex_state = 328},
  [196] = {.lex_state = 298},
  [197] = {.lex_state = 298},
  [198] = {.lex_state = 298},
  [199] = {.lex_state = 315},
  [200] = {.lex_state = 298},
  [201] = {.lex_state = 313},
  [202] = {.lex_state = 298},
  [203] = {.lex_state = 298},
  [204] = {.lex_state = 298},
  [205] = {.lex_state = 298},
  [206] = {.lex_state = 298},
  [207] = {.lex_state = 298},
  [208] = {.lex_state = 298},
  [209] = {.lex_state = 298},
  [210] = {.lex_state = 298},
  [211] = {.lex_state = 298},
  [212] = {.lex_state = 298},
  [213] = {.lex_state = 298},
  [214] = {.lex_state = 298},
  [215] = {.lex_state = 330},
  [216] = {.lex_state = 298},
  [217] = {.lex_state = 298},
  [218] = {.lex_state = 298},
  [219] = {.lex_state = 298},
  [220] = {.lex_state = 298},
  [221] = {.lex_state = 298},
  [222] = {.lex_state = 298},
  [223] = {.lex_state = 298},
  [224] = {.lex_state = 298},
  [225] = {.lex_state = 298},
  [226] = {.lex_state = 298},
  [227] = {.lex_state = 298},
  [228] = {.lex_state = 298},
  [229] = {.lex_state = 330},
  [230] = {.lex_state = 298},
  [231] = {.lex_state = 298},
  [232] = {.lex_state = 298},
  [233] = {.lex_state = 298},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 298},
  [236] = {.lex_state = 298},
  [237] = {.lex_state = 298},
  [238] = {.lex_state = 298},
  [239] = {.lex_state = 298},
  [240] = {.lex_state = 298},
  [241] = {.lex_state = 298},
  [242] = {.lex_state = 298},
  [243] = {.lex_state = 298},
  [244] = {.lex_state = 298},
  [245] = {.lex_state = 298},
  [246] = {.lex_state = 298},
  [247] = {.lex_state = 298},
  [248] = {.lex_state = 298},
  [249] = {.lex_state = 298},
  [250] = {.lex_state = 298},
  [251] = {.lex_state = 298},
  [252] = {.lex_state = 298},
  [253] = {.lex_state = 298},
  [254] = {.lex_state = 298},
  [255] = {.lex_state = 298},
  [256] = {.lex_state = 298},
  [257] = {.lex_state = 298},
  [258] = {.lex_state = 18},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 18},
  [261] = {.lex_state = 26},
  [262] = {.lex_state = 297},
  [263] = {.lex_state = 37},
  [264] = {.lex_state = 298},
  [265] = {.lex_state = 12},
  [266] = {.lex_state = 37},
  [267] = {.lex_state = 298},
  [268] = {.lex_state = 26},
  [269] = {.lex_state = 28},
  [270] = {.lex_state = 28},
  [271] = {.lex_state = 28},
  [272] = {.lex_state = 26},
  [273] = {.lex_state = 27},
  [274] = {.lex_state = 26},
  [275] = {.lex_state = 27},
  [276] = {.lex_state = 297},
  [277] = {.lex_state = 297},
  [278] = {.lex_state = 14},
  [279] = {.lex_state = 14},
  [280] = {.lex_state = 13},
  [281] = {.lex_state = 13},
  [282] = {.lex_state = 19},
  [283] = {.lex_state = 13},
  [284] = {.lex_state = 29},
  [285] = {.lex_state = 29},
  [286] = {.lex_state = 30},
  [287] = {.lex_state = 275},
  [288] = {.lex_state = 135},
  [289] = {.lex_state = 30},
  [290] = {.lex_state = 11},
  [291] = {.lex_state = 24},
  [292] = {.lex_state = 16},
  [293] = {.lex_state = 16},
  [294] = {.lex_state = 14},
  [295] = {.lex_state = 6},
  [296] = {.lex_state = 6},
  [297] = {.lex_state = 20},
  [298] = {.lex_state = 20},
  [299] = {.lex_state = 11},
  [300] = {.lex_state = 14},
  [301] = {.lex_state = 11},
  [302] = {.lex_state = 11},
  [303] = {.lex_state = 14},
  [304] = {.lex_state = 275},
  [305] = {.lex_state = 218},
  [306] = {.lex_state = 275},
  [307] = {.lex_state = 14},
  [308] = {.lex_state = 275},
  [309] = {.lex_state = 8},
  [310] = {.lex_state = 275},
  [311] = {.lex_state = 5},
  [312] = {.lex_state = 298},
  [313] = {.lex_state = 298},
  [314] = {.lex_state = 275},
  [315] = {.lex_state = 275},
  [316] = {.lex_state = 275},
  [317] = {.lex_state = 275},
  [318] = {.lex_state = 5},
  [319] = {.lex_state = 5},
  [320] = {.lex_state = 275},
  [321] = {.lex_state = 275},
  [322] = {.lex_state = 275},
  [323] = {.lex_state = 275},
  [324] = {.lex_state = 21},
  [325] = {.lex_state = 275},
  [326] = {.lex_state = 5},
  [327] = {.lex_state = 275},
  [328] = {.lex_state = 298},
  [329] = {.lex_state = 21},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 275},
  [332] = {.lex_state = 275},
  [333] = {.lex_state = 17},
  [334] = {.lex_state = 275},
  [335] = {.lex_state = 298},
  [336] = {.lex_state = 11},
  [337] = {.lex_state = 275},
  [338] = {.lex_state = 275},
  [339] = {.lex_state = 11},
  [340] = {.lex_state = 17},
  [341] = {.lex_state = 275},
  [342] = {.lex_state = 9},
  [343] = {.lex_state = 5},
  [344] = {.lex_state = 275},
  [345] = {.lex_state = 9},
  [346] = {.lex_state = 275},
  [347] = {.lex_state = 7},
  [348] = {.lex_state = 298},
  [349] = {.lex_state = 7},
  [350] = {.lex_state = 275},
  [351] = {.lex_state = 298},
  [352] = {.lex_state = 5},
  [353] = {.lex_state = 8},
  [354] = {.lex_state = 13},
  [355] = {.lex_state = 275},
  [356] = {.lex_state = 13},
  [357] = {.lex_state = 298},
  [358] = {.lex_state = 9},
  [359] = {.lex_state = 5},
  [360] = {.lex_state = 298},
  [361] = {.lex_state = 275},
  [362] = {.lex_state = 275},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 275},
  [365] = {.lex_state = 275},
  [366] = {.lex_state = 275},
  [367] = {.lex_state = 275},
  [368] = {.lex_state = 275},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 275},
  [372] = {.lex_state = 14},
  [373] = {.lex_state = 14},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 298},
  [376] = {.lex_state = 275},
  [377] = {.lex_state = 298},
  [378] = {.lex_state = 275},
  [379] = {.lex_state = 275},
  [380] = {.lex_state = 275},
  [381] = {.lex_state = 275},
  [382] = {.lex_state = 15},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 275},
  [386] = {.lex_state = 275},
  [387] = {.lex_state = 275},
  [388] = {.lex_state = 275},
  [389] = {.lex_state = 275},
  [390] = {.lex_state = 275},
  [391] = {.lex_state = 275},
  [392] = {.lex_state = 275},
  [393] = {.lex_state = 275},
  [394] = {.lex_state = 275},
  [395] = {.lex_state = 275},
  [396] = {.lex_state = 13},
  [397] = {.lex_state = 24},
  [398] = {.lex_state = 13},
  [399] = {.lex_state = 24},
  [400] = {.lex_state = 275},
  [401] = {.lex_state = 24},
  [402] = {.lex_state = 275},
  [403] = {.lex_state = 275},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 275},
  [406] = {.lex_state = 275},
  [407] = {.lex_state = 275},
  [408] = {.lex_state = 275},
  [409] = {.lex_state = 275},
  [410] = {.lex_state = 275},
  [411] = {.lex_state = 275},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 275},
  [414] = {.lex_state = 15},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 275},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 275},
  [419] = {.lex_state = 275},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 275},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 275},
  [424] = {.lex_state = 275},
  [425] = {.lex_state = 275},
  [426] = {.lex_state = 296},
  [427] = {.lex_state = 296},
  [428] = {.lex_state = 298},
  [429] = {.lex_state = 275},
  [430] = {.lex_state = 275},
  [431] = {.lex_state = 275},
  [432] = {.lex_state = 15},
  [433] = {.lex_state = 298},
  [434] = {.lex_state = 298},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 298},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 24},
  [441] = {.lex_state = 14},
  [442] = {.lex_state = 298},
  [443] = {.lex_state = 298},
  [444] = {.lex_state = 298},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 298},
  [447] = {.lex_state = 298},
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
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 315},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 298},
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
    [sym_doc] = STATE(451),
    [sym_alias] = STATE(49),
    [sym_profile] = STATE(49),
    [sym_extension] = STATE(49),
    [sym_invariant] = STATE(49),
    [sym_instance] = STATE(49),
    [sym_valueset] = STATE(49),
    [sym_codesystem] = STATE(49),
    [sym_mapping] = STATE(49),
    [sym_logical] = STATE(49),
    [sym_resource] = STATE(49),
    [aux_sym_doc_repeat1] = STATE(49),
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
    STATE(33), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(48), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(232), 2,
      sym_sd_rule,
      sym_add_element_rule,
    STATE(123), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(230), 10,
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
  [59] = 11,
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
    STATE(5), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(26), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(232), 2,
      sym_sd_rule,
      sym_add_element_rule,
    STATE(123), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(230), 10,
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
  [118] = 11,
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
    STATE(28), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(232), 2,
      sym_sd_rule,
      sym_add_element_rule,
    STATE(123), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(230), 10,
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
  [177] = 11,
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
    STATE(48), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(232), 2,
      sym_sd_rule,
      sym_add_element_rule,
    STATE(123), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(230), 10,
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
  [236] = 10,
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
    STATE(8), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(44), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(123), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(230), 10,
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
  [291] = 10,
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
    STATE(42), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(48), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(123), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(230), 10,
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
  [346] = 10,
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
    STATE(45), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(48), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(123), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(230), 10,
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
  [401] = 16,
    ACTIONS(53), 1,
      anon_sym_EQ,
    ACTIONS(55), 1,
      anon_sym_insert,
    ACTIONS(57), 1,
      anon_sym_from,
    ACTIONS(59), 1,
      anon_sym_contains,
    ACTIONS(61), 1,
      anon_sym_and,
    ACTIONS(63), 1,
      anon_sym_obeys,
    ACTIONS(65), 1,
      anon_sym_only,
    ACTIONS(67), 1,
      anon_sym_CARET,
    ACTIONS(69), 1,
      aux_sym_cardinality_token1,
    ACTIONS(71), 1,
      anon_sym_DOT_DOT,
    STATE(91), 1,
      sym_cardinality,
    STATE(262), 1,
      aux_sym_flag_rule_repeat1,
    STATE(465), 1,
      sym_caret_path,
    STATE(69), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(73), 6,
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
  [467] = 2,
    ACTIONS(77), 1,
      anon_sym_Instance,
    ACTIONS(75), 30,
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
  [503] = 13,
    ACTIONS(53), 1,
      anon_sym_EQ,
    ACTIONS(55), 1,
      anon_sym_insert,
    ACTIONS(57), 1,
      anon_sym_from,
    ACTIONS(59), 1,
      anon_sym_contains,
    ACTIONS(61), 1,
      anon_sym_and,
    ACTIONS(63), 1,
      anon_sym_obeys,
    ACTIONS(65), 1,
      anon_sym_only,
    ACTIONS(67), 1,
      anon_sym_CARET,
    STATE(262), 1,
      aux_sym_flag_rule_repeat1,
    STATE(465), 1,
      sym_caret_path,
    STATE(69), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(73), 6,
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
  [560] = 4,
    ACTIONS(81), 1,
      aux_sym_sequence_token1,
    ACTIONS(84), 1,
      aux_sym_cardinality_token1,
    STATE(12), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 27,
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
      anon_sym_insert,
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
  [599] = 4,
    ACTIONS(88), 1,
      aux_sym_sequence_token1,
    ACTIONS(90), 1,
      aux_sym_cardinality_token1,
    STATE(12), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 27,
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
      anon_sym_insert,
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
  [638] = 2,
    ACTIONS(94), 2,
      anon_sym_Instance,
      anon_sym_DQUOTE,
    ACTIONS(92), 27,
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
  [672] = 11,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(98), 1,
      anon_sym_Id,
    ACTIONS(100), 1,
      anon_sym_Source,
    ACTIONS(102), 1,
      anon_sym_Target,
    ACTIONS(104), 1,
      anon_sym_STAR,
    STATE(16), 2,
      sym_mapping_metadata,
      aux_sym_mapping_repeat1,
    STATE(105), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(249), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    STATE(99), 5,
      sym_description,
      sym_id,
      sym_source,
      sym_target,
      sym_title,
    ACTIONS(96), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [724] = 11,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(98), 1,
      anon_sym_Id,
    ACTIONS(100), 1,
      anon_sym_Source,
    ACTIONS(102), 1,
      anon_sym_Target,
    ACTIONS(104), 1,
      anon_sym_STAR,
    STATE(38), 2,
      sym_mapping_metadata,
      aux_sym_mapping_repeat1,
    STATE(89), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(249), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    STATE(99), 5,
      sym_description,
      sym_id,
      sym_source,
      sym_target,
      sym_title,
    ACTIONS(106), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [776] = 2,
    ACTIONS(110), 2,
      anon_sym_Instance,
      anon_sym_DQUOTE,
    ACTIONS(108), 27,
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
  [810] = 1,
    ACTIONS(112), 29,
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
      anon_sym_insert,
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
  [842] = 2,
    ACTIONS(75), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
    ACTIONS(112), 26,
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
      anon_sym_insert,
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
  [875] = 2,
    ACTIONS(114), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
    ACTIONS(112), 26,
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
      anon_sym_insert,
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
  [908] = 2,
    ACTIONS(119), 1,
      anon_sym_Instance,
    ACTIONS(117), 26,
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
      anon_sym_DQUOTE,
  [940] = 11,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(123), 1,
      anon_sym_Instance,
    ACTIONS(125), 1,
      anon_sym_InstanceOf,
    ACTIONS(127), 1,
      anon_sym_Usage,
    ACTIONS(129), 1,
      anon_sym_STAR,
    STATE(50), 2,
      sym_instance_metadata,
      aux_sym_instance_repeat1,
    STATE(111), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(253), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    STATE(137), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(121), 10,
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
  [990] = 11,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(125), 1,
      anon_sym_InstanceOf,
    ACTIONS(127), 1,
      anon_sym_Usage,
    ACTIONS(129), 1,
      anon_sym_STAR,
    ACTIONS(133), 1,
      anon_sym_Instance,
    STATE(22), 2,
      sym_instance_metadata,
      aux_sym_instance_repeat1,
    STATE(97), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(253), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    STATE(137), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(131), 10,
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
  [1040] = 2,
    ACTIONS(137), 1,
      anon_sym_Instance,
    ACTIONS(135), 26,
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
      anon_sym_DQUOTE,
  [1072] = 5,
    ACTIONS(141), 1,
      anon_sym_STAR,
    STATE(25), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(232), 2,
      sym_sd_rule,
      sym_add_element_rule,
    STATE(230), 10,
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
    ACTIONS(139), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1109] = 5,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(25), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(232), 2,
      sym_sd_rule,
      sym_add_element_rule,
    STATE(230), 10,
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
  [1146] = 18,
    ACTIONS(146), 1,
      anon_sym_POUND,
    ACTIONS(148), 1,
      aux_sym_sequence_token1,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(154), 1,
      sym_number,
    ACTIONS(156), 1,
      sym_date,
    ACTIONS(158), 1,
      sym_time,
    ACTIONS(160), 1,
      anon_sym_Reference,
    ACTIONS(162), 1,
      anon_sym_Canonical,
    STATE(107), 1,
      sym_code,
    STATE(131), 1,
      aux_sym_sequence_repeat1,
    STATE(139), 1,
      sym_reference,
    STATE(180), 1,
      sym_sequence,
    STATE(204), 1,
      sym_quantity,
    STATE(212), 1,
      sym_value,
    STATE(483), 1,
      sym_ratio_part,
    ACTIONS(144), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(216), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [1209] = 5,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(25), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(232), 2,
      sym_sd_rule,
      sym_add_element_rule,
    STATE(230), 10,
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
  [1246] = 18,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(156), 1,
      sym_date,
    ACTIONS(158), 1,
      sym_time,
    ACTIONS(160), 1,
      anon_sym_Reference,
    ACTIONS(162), 1,
      anon_sym_Canonical,
    ACTIONS(164), 1,
      anon_sym_POUND,
    ACTIONS(166), 1,
      aux_sym_sequence_token1,
    ACTIONS(168), 1,
      sym_number,
    STATE(107), 1,
      sym_code,
    STATE(139), 1,
      sym_reference,
    STATE(164), 1,
      aux_sym_sequence_repeat1,
    STATE(204), 1,
      sym_quantity,
    STATE(214), 1,
      sym_sequence,
    STATE(255), 1,
      sym_value,
    STATE(470), 1,
      sym_ratio_part,
    ACTIONS(144), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(216), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [1309] = 18,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(156), 1,
      sym_date,
    ACTIONS(158), 1,
      sym_time,
    ACTIONS(160), 1,
      anon_sym_Reference,
    ACTIONS(162), 1,
      anon_sym_Canonical,
    ACTIONS(164), 1,
      anon_sym_POUND,
    ACTIONS(166), 1,
      aux_sym_sequence_token1,
    ACTIONS(168), 1,
      sym_number,
    STATE(107), 1,
      sym_code,
    STATE(139), 1,
      sym_reference,
    STATE(164), 1,
      aux_sym_sequence_repeat1,
    STATE(204), 1,
      sym_quantity,
    STATE(214), 1,
      sym_sequence,
    STATE(254), 1,
      sym_value,
    STATE(470), 1,
      sym_ratio_part,
    ACTIONS(144), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(216), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [1372] = 18,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(156), 1,
      sym_date,
    ACTIONS(158), 1,
      sym_time,
    ACTIONS(160), 1,
      anon_sym_Reference,
    ACTIONS(162), 1,
      anon_sym_Canonical,
    ACTIONS(164), 1,
      anon_sym_POUND,
    ACTIONS(166), 1,
      aux_sym_sequence_token1,
    ACTIONS(168), 1,
      sym_number,
    STATE(107), 1,
      sym_code,
    STATE(139), 1,
      sym_reference,
    STATE(164), 1,
      aux_sym_sequence_repeat1,
    STATE(204), 1,
      sym_quantity,
    STATE(214), 1,
      sym_sequence,
    STATE(231), 1,
      sym_value,
    STATE(470), 1,
      sym_ratio_part,
    ACTIONS(144), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(216), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [1435] = 5,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(25), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(232), 2,
      sym_sd_rule,
      sym_add_element_rule,
    STATE(230), 10,
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
  [1472] = 5,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(25), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(232), 2,
      sym_sd_rule,
      sym_add_element_rule,
    STATE(230), 10,
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
    ACTIONS(172), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1509] = 9,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(176), 1,
      anon_sym_Id,
    ACTIONS(178), 1,
      anon_sym_STAR,
    STATE(67), 2,
      sym_vs_metadata,
      aux_sym_valueset_repeat1,
    STATE(103), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(165), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(251), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
    ACTIONS(174), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1553] = 9,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(176), 1,
      anon_sym_Id,
    ACTIONS(178), 1,
      anon_sym_STAR,
    STATE(34), 2,
      sym_vs_metadata,
      aux_sym_valueset_repeat1,
    STATE(94), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(165), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(251), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
    ACTIONS(180), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1597] = 9,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(176), 1,
      anon_sym_Id,
    ACTIONS(184), 1,
      anon_sym_STAR,
    STATE(61), 2,
      sym_cs_metadata,
      aux_sym_codesystem_repeat1,
    STATE(129), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(250), 2,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
    STATE(171), 3,
      sym_description,
      sym_id,
      sym_title,
    ACTIONS(182), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1640] = 4,
    ACTIONS(188), 1,
      anon_sym_STAR,
    STATE(37), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(230), 10,
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
  [1673] = 8,
    ACTIONS(193), 1,
      anon_sym_Description,
    ACTIONS(196), 1,
      anon_sym_Id,
    ACTIONS(199), 1,
      anon_sym_Source,
    ACTIONS(202), 1,
      anon_sym_Target,
    ACTIONS(205), 1,
      anon_sym_Title,
    STATE(38), 2,
      sym_mapping_metadata,
      aux_sym_mapping_repeat1,
    STATE(99), 5,
      sym_description,
      sym_id,
      sym_source,
      sym_target,
      sym_title,
    ACTIONS(191), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [1714] = 2,
    ACTIONS(210), 1,
      anon_sym_Instance,
    ACTIONS(208), 23,
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
  [1743] = 10,
    ACTIONS(216), 1,
      anon_sym_POUND,
    ACTIONS(218), 1,
      aux_sym_sequence_token1,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    STATE(107), 1,
      sym_code,
    STATE(218), 1,
      sym_vs_filter_value,
    STATE(372), 1,
      aux_sym_sequence_repeat1,
    STATE(499), 1,
      sym_sequence,
    ACTIONS(214), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(222), 2,
      sym_code_string,
      sym_string,
    ACTIONS(212), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [1788] = 2,
    ACTIONS(224), 1,
      anon_sym_Instance,
    ACTIONS(222), 23,
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
  [1817] = 4,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(37), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(230), 10,
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
  [1850] = 9,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(176), 1,
      anon_sym_Id,
    ACTIONS(184), 1,
      anon_sym_STAR,
    STATE(36), 2,
      sym_cs_metadata,
      aux_sym_codesystem_repeat1,
    STATE(114), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(250), 2,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
    STATE(171), 3,
      sym_description,
      sym_id,
      sym_title,
    ACTIONS(228), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1893] = 4,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(37), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(230), 10,
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
  [1926] = 4,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(37), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(230), 10,
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
  [1959] = 2,
    ACTIONS(234), 1,
      anon_sym_Instance,
    ACTIONS(232), 22,
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
  [1987] = 12,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
    ACTIONS(238), 1,
      anon_sym_Alias,
    ACTIONS(241), 1,
      anon_sym_Profile,
    ACTIONS(244), 1,
      anon_sym_Extension,
    ACTIONS(247), 1,
      anon_sym_Invariant,
    ACTIONS(250), 1,
      anon_sym_Instance,
    ACTIONS(253), 1,
      anon_sym_ValueSet,
    ACTIONS(256), 1,
      anon_sym_CodeSystem,
    ACTIONS(259), 1,
      anon_sym_Mapping,
    ACTIONS(262), 1,
      anon_sym_Logical,
    ACTIONS(265), 1,
      anon_sym_Resource,
    STATE(47), 11,
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
  [2034] = 7,
    ACTIONS(270), 1,
      anon_sym_Description,
    ACTIONS(273), 1,
      anon_sym_Id,
    ACTIONS(276), 1,
      anon_sym_Parent,
    ACTIONS(279), 1,
      anon_sym_Title,
    STATE(48), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(123), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
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
  [2071] = 12,
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
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    STATE(47), 11,
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
  [2118] = 8,
    ACTIONS(286), 1,
      anon_sym_Instance,
    ACTIONS(288), 1,
      anon_sym_Description,
    ACTIONS(291), 1,
      anon_sym_InstanceOf,
    ACTIONS(294), 1,
      anon_sym_Title,
    ACTIONS(297), 1,
      anon_sym_Usage,
    STATE(50), 2,
      sym_instance_metadata,
      aux_sym_instance_repeat1,
    STATE(137), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(284), 11,
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
  [2157] = 3,
    STATE(60), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(73), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    ACTIONS(300), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2185] = 7,
    ACTIONS(304), 1,
      anon_sym_Description,
    ACTIONS(307), 1,
      anon_sym_Expression,
    ACTIONS(310), 1,
      anon_sym_Severity,
    ACTIONS(313), 1,
      anon_sym_XPath,
    STATE(52), 2,
      sym_invariant_metadata,
      aux_sym_invariant_repeat1,
    STATE(160), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
    ACTIONS(302), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [2221] = 3,
    STATE(58), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(73), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
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
      anon_sym_STAR,
      anon_sym_and,
  [2249] = 3,
    ACTIONS(320), 1,
      anon_sym_STAR,
    ACTIONS(322), 2,
      aux_sym_cardinality_token1,
      anon_sym_STAR2,
    ACTIONS(318), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [2277] = 3,
    STATE(55), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(326), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    ACTIONS(324), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2305] = 7,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(331), 1,
      anon_sym_Expression,
    ACTIONS(333), 1,
      anon_sym_Severity,
    ACTIONS(335), 1,
      anon_sym_XPath,
    STATE(52), 2,
      sym_invariant_metadata,
      aux_sym_invariant_repeat1,
    STATE(160), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
    ACTIONS(329), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [2341] = 3,
    ACTIONS(339), 1,
      anon_sym_STAR,
    ACTIONS(341), 2,
      aux_sym_cardinality_token1,
      anon_sym_STAR2,
    ACTIONS(337), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [2369] = 3,
    STATE(55), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(73), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    ACTIONS(343), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2397] = 8,
    ACTIONS(218), 1,
      aux_sym_sequence_token1,
    ACTIONS(347), 1,
      anon_sym_COLON,
    ACTIONS(349), 1,
      anon_sym_POUND,
    ACTIONS(351), 1,
      anon_sym_SQUOTE,
    STATE(372), 1,
      aux_sym_sequence_repeat1,
    STATE(496), 1,
      sym_sequence,
    STATE(134), 2,
      sym_code,
      sym_unit,
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
      anon_sym_LPAREN,
  [2435] = 3,
    STATE(55), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(73), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    ACTIONS(353), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2463] = 6,
    ACTIONS(357), 1,
      anon_sym_Description,
    ACTIONS(360), 1,
      anon_sym_Id,
    ACTIONS(363), 1,
      anon_sym_Title,
    STATE(61), 2,
      sym_cs_metadata,
      aux_sym_codesystem_repeat1,
    STATE(171), 3,
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
  [2496] = 3,
    STATE(55), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(73), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
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
  [2523] = 3,
    STATE(55), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(73), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    ACTIONS(368), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2550] = 3,
    STATE(63), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(73), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    ACTIONS(370), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2577] = 2,
    ACTIONS(374), 1,
      anon_sym_Instance,
    ACTIONS(372), 19,
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
  [2602] = 8,
    ACTIONS(218), 1,
      aux_sym_sequence_token1,
    ACTIONS(347), 1,
      anon_sym_COLON,
    ACTIONS(351), 1,
      anon_sym_SQUOTE,
    ACTIONS(376), 1,
      anon_sym_POUND,
    STATE(372), 1,
      aux_sym_sequence_repeat1,
    STATE(495), 1,
      sym_sequence,
    STATE(134), 2,
      sym_code,
      sym_unit,
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
      anon_sym_STAR,
  [2639] = 6,
    ACTIONS(380), 1,
      anon_sym_Description,
    ACTIONS(383), 1,
      anon_sym_Id,
    ACTIONS(386), 1,
      anon_sym_Title,
    STATE(67), 2,
      sym_vs_metadata,
      aux_sym_valueset_repeat1,
    STATE(165), 3,
      sym_description,
      sym_id,
      sym_title,
    ACTIONS(378), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2672] = 7,
    ACTIONS(146), 1,
      anon_sym_POUND,
    ACTIONS(218), 1,
      aux_sym_sequence_token1,
    ACTIONS(351), 1,
      anon_sym_SQUOTE,
    STATE(372), 1,
      aux_sym_sequence_repeat1,
    STATE(498), 1,
      sym_sequence,
    STATE(134), 2,
      sym_code,
      sym_unit,
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
      anon_sym_LPAREN,
  [2707] = 3,
    STATE(55), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(73), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    ACTIONS(389), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2734] = 1,
    ACTIONS(391), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2756] = 3,
    ACTIONS(393), 1,
      aux_sym_sequence_token1,
    STATE(73), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [2782] = 8,
    ACTIONS(218), 1,
      aux_sym_sequence_token1,
    ACTIONS(397), 1,
      anon_sym_POUND,
    ACTIONS(399), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      sym_string,
    STATE(235), 1,
      sym_code,
    STATE(372), 1,
      aux_sym_sequence_repeat1,
    STATE(494), 1,
      sym_sequence,
    ACTIONS(395), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2818] = 3,
    ACTIONS(401), 1,
      aux_sym_sequence_token1,
    STATE(73), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [2844] = 7,
    ACTIONS(164), 1,
      anon_sym_POUND,
    ACTIONS(218), 1,
      aux_sym_sequence_token1,
    ACTIONS(351), 1,
      anon_sym_SQUOTE,
    STATE(372), 1,
      aux_sym_sequence_repeat1,
    STATE(497), 1,
      sym_sequence,
    STATE(134), 2,
      sym_code,
      sym_unit,
    ACTIONS(347), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2878] = 8,
    ACTIONS(218), 1,
      aux_sym_sequence_token1,
    ACTIONS(397), 1,
      anon_sym_POUND,
    ACTIONS(399), 1,
      anon_sym_DQUOTE,
    STATE(108), 1,
      sym_string,
    STATE(252), 1,
      sym_code,
    STATE(372), 1,
      aux_sym_sequence_repeat1,
    STATE(494), 1,
      sym_sequence,
    ACTIONS(404), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2914] = 1,
    ACTIONS(337), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2936] = 3,
    ACTIONS(406), 1,
      aux_sym_sequence_token1,
    STATE(77), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2962] = 3,
    ACTIONS(409), 1,
      aux_sym_sequence_token1,
    STATE(77), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2988] = 1,
    ACTIONS(412), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3010] = 3,
    ACTIONS(414), 1,
      aux_sym_sequence_token1,
    STATE(80), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3035] = 2,
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
  [3058] = 4,
    ACTIONS(84), 1,
      anon_sym_Instance,
    ACTIONS(421), 1,
      aux_sym_sequence_token1,
    STATE(82), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 15,
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
  [3085] = 4,
    ACTIONS(90), 1,
      anon_sym_Instance,
    ACTIONS(424), 1,
      aux_sym_sequence_token1,
    STATE(82), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 15,
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
  [3112] = 1,
    ACTIONS(426), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3133] = 3,
    ACTIONS(428), 1,
      aux_sym_sequence_token1,
    STATE(80), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3158] = 3,
    ACTIONS(430), 1,
      aux_sym_sequence_token1,
    STATE(86), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 15,
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
  [3182] = 4,
    ACTIONS(435), 1,
      anon_sym_STAR,
    STATE(87), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(251), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
    ACTIONS(433), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3208] = 4,
    ACTIONS(440), 1,
      anon_sym_STAR,
    STATE(88), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(249), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    ACTIONS(438), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3234] = 4,
    ACTIONS(104), 1,
      anon_sym_STAR,
    STATE(88), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(249), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    ACTIONS(443), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3260] = 3,
    ACTIONS(445), 1,
      aux_sym_sequence_token1,
    STATE(96), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3284] = 10,
    ACTIONS(160), 1,
      anon_sym_Reference,
    ACTIONS(162), 1,
      anon_sym_Canonical,
    ACTIONS(447), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(200), 1,
      sym_reference,
    STATE(309), 1,
      aux_sym_sequence_repeat1,
    STATE(328), 1,
      sym_target_type,
    STATE(110), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    STATE(202), 2,
      sym_name,
      sym_canonical,
    ACTIONS(449), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [3322] = 3,
    ACTIONS(451), 1,
      aux_sym_sequence_token1,
    STATE(92), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3346] = 3,
    ACTIONS(454), 1,
      aux_sym_sequence_token1,
    STATE(92), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3370] = 4,
    ACTIONS(178), 1,
      anon_sym_STAR,
    STATE(87), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(251), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
    ACTIONS(174), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3396] = 15,
    ACTIONS(67), 1,
      anon_sym_CARET,
    ACTIONS(456), 1,
      anon_sym_insert,
    ACTIONS(460), 1,
      anon_sym_codes,
    ACTIONS(462), 1,
      anon_sym_system,
    ACTIONS(464), 1,
      anon_sym_POUND,
    ACTIONS(466), 1,
      aux_sym_sequence_token1,
    STATE(107), 1,
      sym_code,
    STATE(147), 1,
      sym_code_string,
    STATE(279), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(302), 1,
      aux_sym_sequence_repeat1,
    STATE(383), 1,
      sym_sequence,
    STATE(384), 1,
      sym_path,
    STATE(458), 1,
      sym_caret_path,
    ACTIONS(458), 2,
      anon_sym_include,
      anon_sym_exclude,
    STATE(256), 2,
      sym_vs_concept_component,
      sym_vs_filter_component,
  [3444] = 3,
    ACTIONS(468), 1,
      aux_sym_sequence_token1,
    STATE(96), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3468] = 4,
    ACTIONS(129), 1,
      anon_sym_STAR,
    STATE(109), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(253), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    ACTIONS(121), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3494] = 1,
    ACTIONS(471), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3514] = 1,
    ACTIONS(473), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3534] = 6,
    ACTIONS(218), 1,
      aux_sym_sequence_token1,
    ACTIONS(397), 1,
      anon_sym_POUND,
    STATE(252), 1,
      sym_code,
    STATE(372), 1,
      aux_sym_sequence_repeat1,
    STATE(494), 1,
      sym_sequence,
    ACTIONS(404), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [3564] = 3,
    ACTIONS(475), 1,
      aux_sym_sequence_token1,
    STATE(86), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 15,
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
  [3588] = 3,
    ACTIONS(477), 1,
      aux_sym_sequence_token1,
    STATE(102), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3612] = 4,
    ACTIONS(178), 1,
      anon_sym_STAR,
    STATE(87), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(251), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
    ACTIONS(480), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3638] = 1,
    ACTIONS(482), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3658] = 4,
    ACTIONS(104), 1,
      anon_sym_STAR,
    STATE(88), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(249), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    ACTIONS(106), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3684] = 3,
    ACTIONS(484), 1,
      aux_sym_sequence_token1,
    STATE(102), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3708] = 3,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    STATE(162), 1,
      sym_string,
    ACTIONS(486), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3732] = 6,
    ACTIONS(218), 1,
      aux_sym_sequence_token1,
    ACTIONS(397), 1,
      anon_sym_POUND,
    STATE(243), 1,
      sym_code,
    STATE(372), 1,
      aux_sym_sequence_repeat1,
    STATE(494), 1,
      sym_sequence,
    ACTIONS(488), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [3762] = 4,
    ACTIONS(492), 1,
      anon_sym_STAR,
    STATE(109), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(253), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    ACTIONS(490), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3788] = 10,
    ACTIONS(160), 1,
      anon_sym_Reference,
    ACTIONS(162), 1,
      anon_sym_Canonical,
    ACTIONS(447), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(200), 1,
      sym_reference,
    STATE(309), 1,
      aux_sym_sequence_repeat1,
    STATE(313), 1,
      sym_target_type,
    STATE(202), 2,
      sym_name,
      sym_canonical,
    STATE(261), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(449), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [3826] = 4,
    ACTIONS(129), 1,
      anon_sym_STAR,
    STATE(109), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(253), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    ACTIONS(495), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3852] = 3,
    ACTIONS(497), 1,
      aux_sym_sequence_token1,
    STATE(112), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3875] = 3,
    ACTIONS(500), 1,
      aux_sym_sequence_token1,
    STATE(113), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 14,
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
  [3898] = 4,
    ACTIONS(184), 1,
      anon_sym_STAR,
    STATE(130), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(250), 2,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
    ACTIONS(182), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3923] = 2,
    ACTIONS(505), 1,
      anon_sym_Instance,
    ACTIONS(503), 15,
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
  [3944] = 3,
    ACTIONS(507), 1,
      aux_sym_sequence_token1,
    STATE(119), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 14,
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
      anon_sym_insert,
  [3967] = 3,
    ACTIONS(509), 1,
      aux_sym_sequence_token1,
    STATE(117), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3990] = 2,
    ACTIONS(514), 1,
      anon_sym_Instance,
    ACTIONS(512), 15,
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
  [4011] = 3,
    ACTIONS(516), 1,
      aux_sym_sequence_token1,
    STATE(119), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 14,
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
      anon_sym_insert,
  [4034] = 3,
    ACTIONS(519), 1,
      aux_sym_sequence_token1,
    STATE(122), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_DASH_GT,
  [4057] = 3,
    ACTIONS(521), 1,
      aux_sym_sequence_token1,
    STATE(117), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4080] = 3,
    ACTIONS(523), 1,
      aux_sym_sequence_token1,
    STATE(122), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_DASH_GT,
  [4103] = 1,
    ACTIONS(526), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [4122] = 4,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(242), 2,
      sym_string,
      sym_multiline_string,
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
      anon_sym_STAR,
  [4147] = 1,
    ACTIONS(530), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [4166] = 4,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(244), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(532), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [4191] = 3,
    ACTIONS(534), 1,
      aux_sym_sequence_token1,
    STATE(112), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4214] = 3,
    ACTIONS(536), 1,
      aux_sym_sequence_token1,
    STATE(132), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4237] = 4,
    ACTIONS(184), 1,
      anon_sym_STAR,
    STATE(130), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(250), 2,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
    ACTIONS(538), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [4262] = 4,
    ACTIONS(542), 1,
      anon_sym_STAR,
    STATE(130), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(250), 2,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
    ACTIONS(540), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [4287] = 3,
    ACTIONS(545), 1,
      aux_sym_sequence_token1,
    STATE(135), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4310] = 3,
    ACTIONS(547), 1,
      aux_sym_sequence_token1,
    STATE(132), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4333] = 3,
    ACTIONS(550), 1,
      aux_sym_sequence_token1,
    STATE(113), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 14,
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
  [4356] = 3,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    STATE(196), 1,
      sym_string,
    ACTIONS(552), 14,
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
  [4379] = 3,
    ACTIONS(554), 1,
      aux_sym_sequence_token1,
    STATE(135), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4402] = 4,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(233), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(557), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [4427] = 2,
    ACTIONS(561), 1,
      anon_sym_Instance,
    ACTIONS(559), 15,
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
  [4448] = 3,
    ACTIONS(563), 1,
      aux_sym_sequence_token1,
    STATE(138), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4470] = 3,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    STATE(213), 1,
      sym_string,
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
      anon_sym_LPAREN,
  [4492] = 1,
    ACTIONS(566), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4510] = 1,
    ACTIONS(568), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4528] = 1,
    ACTIONS(570), 15,
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
  [4546] = 2,
    STATE(145), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(572), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4566] = 1,
    ACTIONS(574), 15,
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
  [4584] = 3,
    ACTIONS(578), 1,
      anon_sym_and,
    STATE(145), 1,
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
  [4606] = 2,
    STATE(143), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(581), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4626] = 4,
    ACTIONS(585), 1,
      anon_sym_from,
    ACTIONS(587), 1,
      anon_sym_and,
    STATE(245), 1,
      sym_vs_component_from,
    ACTIONS(583), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [4650] = 3,
    ACTIONS(589), 1,
      aux_sym_sequence_token1,
    STATE(149), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4672] = 3,
    ACTIONS(591), 1,
      aux_sym_sequence_token1,
    STATE(149), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4694] = 1,
    ACTIONS(594), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4712] = 1,
    ACTIONS(596), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4730] = 3,
    ACTIONS(598), 1,
      aux_sym_sequence_token1,
    STATE(153), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4752] = 3,
    ACTIONS(600), 1,
      aux_sym_sequence_token1,
    STATE(153), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4774] = 3,
    ACTIONS(603), 1,
      aux_sym_sequence_token1,
    STATE(158), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4796] = 1,
    ACTIONS(605), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4814] = 3,
    ACTIONS(607), 1,
      aux_sym_sequence_token1,
    STATE(159), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4836] = 1,
    ACTIONS(609), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4854] = 3,
    ACTIONS(611), 1,
      aux_sym_sequence_token1,
    STATE(158), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4876] = 3,
    ACTIONS(614), 1,
      aux_sym_sequence_token1,
    STATE(159), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4898] = 1,
    ACTIONS(617), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [4916] = 3,
    ACTIONS(619), 1,
      anon_sym_and,
    STATE(145), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(572), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4938] = 1,
    ACTIONS(621), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4956] = 3,
    ACTIONS(623), 1,
      aux_sym_sequence_token1,
    STATE(163), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4978] = 3,
    ACTIONS(626), 1,
      aux_sym_sequence_token1,
    STATE(163), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5000] = 1,
    ACTIONS(628), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5018] = 2,
    ACTIONS(110), 1,
      aux_sym_sequence_token1,
    ACTIONS(108), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5038] = 1,
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
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [5056] = 1,
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
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [5074] = 1,
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
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [5092] = 2,
    ACTIONS(94), 1,
      aux_sym_sequence_token1,
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
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [5112] = 1,
    ACTIONS(636), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5130] = 3,
    ACTIONS(638), 1,
      aux_sym_sequence_token1,
    STATE(138), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5152] = 3,
    ACTIONS(619), 1,
      anon_sym_and,
    STATE(161), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(581), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5174] = 3,
    ACTIONS(642), 1,
      anon_sym_and,
    STATE(188), 1,
      aux_sym_contains_rule_repeat1,
    ACTIONS(640), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5195] = 3,
    ACTIONS(646), 1,
      anon_sym_and,
    STATE(183), 1,
      aux_sym_vs_filter_list_repeat1,
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
      anon_sym_STAR,
  [5216] = 3,
    ACTIONS(650), 1,
      anon_sym_and,
    STATE(176), 1,
      aux_sym_vs_filter_list_repeat1,
    ACTIONS(648), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5237] = 2,
    ACTIONS(94), 1,
      aux_sym_sequence_token1,
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
  [5256] = 1,
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
  [5273] = 2,
    STATE(194), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(581), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5292] = 2,
    ACTIONS(653), 1,
      anon_sym_POUND,
    ACTIONS(75), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5311] = 3,
    ACTIONS(655), 1,
      anon_sym_and,
    STATE(181), 1,
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
  [5332] = 3,
    ACTIONS(658), 1,
      anon_sym_and,
    STATE(181), 1,
      aux_sym_obeys_rule_repeat1,
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
      anon_sym_STAR,
  [5353] = 3,
    ACTIONS(646), 1,
      anon_sym_and,
    STATE(176), 1,
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
  [5374] = 2,
    ACTIONS(664), 1,
      anon_sym_and,
    ACTIONS(662), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5393] = 3,
    ACTIONS(666), 1,
      aux_sym_sequence_token1,
    STATE(201), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5414] = 3,
    ACTIONS(670), 1,
      anon_sym_or,
    STATE(186), 1,
      aux_sym_only_rule_repeat1,
    ACTIONS(668), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5435] = 1,
    ACTIONS(668), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5452] = 3,
    ACTIONS(675), 1,
      anon_sym_and,
    STATE(188), 1,
      aux_sym_contains_rule_repeat1,
    ACTIONS(673), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5473] = 2,
    ACTIONS(678), 1,
      anon_sym_and,
    ACTIONS(662), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5492] = 3,
    ACTIONS(658), 1,
      anon_sym_and,
    STATE(182), 1,
      aux_sym_obeys_rule_repeat1,
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
      anon_sym_STAR,
  [5513] = 2,
    ACTIONS(110), 1,
      aux_sym_sequence_token1,
    ACTIONS(108), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5532] = 3,
    ACTIONS(53), 1,
      anon_sym_EQ,
    ACTIONS(55), 1,
      anon_sym_insert,
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
  [5553] = 3,
    ACTIONS(680), 1,
      aux_sym_sequence_token1,
    STATE(193), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5574] = 2,
    STATE(181), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(572), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5593] = 3,
    ACTIONS(683), 1,
      aux_sym_sequence_token1,
    STATE(193), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5614] = 1,
    ACTIONS(685), 14,
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
  [5631] = 3,
    ACTIONS(658), 1,
      anon_sym_and,
    STATE(181), 1,
      aux_sym_obeys_rule_repeat1,
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
  [5652] = 3,
    ACTIONS(691), 1,
      anon_sym_or,
    STATE(206), 1,
      aux_sym_only_rule_repeat1,
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
  [5673] = 2,
    ACTIONS(695), 1,
      anon_sym_T,
    ACTIONS(693), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5692] = 1,
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
      anon_sym_STAR,
      anon_sym_or,
      anon_sym_DQUOTE,
  [5709] = 3,
    ACTIONS(699), 1,
      aux_sym_sequence_token1,
    STATE(201), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5730] = 1,
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
      anon_sym_STAR,
      anon_sym_or,
      anon_sym_DQUOTE,
  [5747] = 3,
    ACTIONS(658), 1,
      anon_sym_and,
    STATE(207), 1,
      aux_sym_obeys_rule_repeat1,
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
  [5768] = 2,
    ACTIONS(347), 1,
      anon_sym_COLON,
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
      anon_sym_LPAREN,
  [5787] = 1,
    ACTIONS(704), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5804] = 3,
    ACTIONS(691), 1,
      anon_sym_or,
    STATE(186), 1,
      aux_sym_only_rule_repeat1,
    ACTIONS(706), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5825] = 3,
    ACTIONS(658), 1,
      anon_sym_and,
    STATE(181), 1,
      aux_sym_obeys_rule_repeat1,
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
  [5846] = 3,
    ACTIONS(55), 1,
      anon_sym_insert,
    ACTIONS(710), 1,
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
  [5867] = 3,
    ACTIONS(642), 1,
      anon_sym_and,
    STATE(174), 1,
      aux_sym_contains_rule_repeat1,
    ACTIONS(712), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5888] = 3,
    ACTIONS(716), 1,
      anon_sym_LPAREN,
    STATE(248), 1,
      sym_strength,
    ACTIONS(714), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5909] = 3,
    ACTIONS(658), 1,
      anon_sym_and,
    STATE(197), 1,
      aux_sym_obeys_rule_repeat1,
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
  [5930] = 2,
    ACTIONS(722), 1,
      anon_sym_LPAREN,
    ACTIONS(720), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5948] = 1,
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
  [5964] = 2,
    ACTIONS(726), 1,
      anon_sym_POUND,
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
  [5982] = 3,
    ACTIONS(728), 1,
      aux_sym_sequence_token1,
    STATE(229), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [6002] = 1,
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
      anon_sym_LPAREN,
  [6018] = 1,
    ACTIONS(730), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6034] = 1,
    ACTIONS(732), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6050] = 1,
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
      anon_sym_LPAREN,
  [6066] = 2,
    ACTIONS(736), 1,
      anon_sym_and,
    ACTIONS(662), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6084] = 1,
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
      anon_sym_LPAREN,
  [6100] = 1,
    ACTIONS(738), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6116] = 1,
    ACTIONS(740), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6132] = 1,
    ACTIONS(673), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6148] = 1,
    ACTIONS(742), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6164] = 2,
    ACTIONS(746), 1,
      anon_sym_where,
    ACTIONS(744), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6182] = 2,
    ACTIONS(748), 1,
      anon_sym_and,
    ACTIONS(662), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6200] = 1,
    ACTIONS(648), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6216] = 3,
    ACTIONS(750), 1,
      aux_sym_sequence_token1,
    STATE(229), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [6236] = 1,
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
  [6251] = 1,
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
  [6266] = 1,
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
  [6281] = 1,
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
  [6296] = 2,
    ACTIONS(763), 1,
      anon_sym_POUND,
    ACTIONS(761), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [6313] = 1,
    ACTIONS(404), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6358] = 1,
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
  [6373] = 1,
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
  [6388] = 1,
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
  [6403] = 1,
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
  [6418] = 1,
    ACTIONS(532), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6448] = 1,
    ACTIONS(557), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6493] = 1,
    ACTIONS(783), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6508] = 1,
    ACTIONS(785), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6523] = 1,
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
  [6538] = 1,
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
  [6553] = 1,
    ACTIONS(791), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6568] = 1,
    ACTIONS(488), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6583] = 1,
    ACTIONS(793), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6598] = 1,
    ACTIONS(795), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6613] = 1,
    ACTIONS(797), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6628] = 1,
    ACTIONS(799), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6643] = 1,
    ACTIONS(801), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6658] = 4,
    ACTIONS(320), 1,
      aux_sym_sequence_token1,
    ACTIONS(803), 1,
      aux_sym_cardinality_token1,
    ACTIONS(805), 1,
      anon_sym_STAR2,
    ACTIONS(318), 8,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [6678] = 1,
    ACTIONS(761), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [6692] = 4,
    ACTIONS(339), 1,
      aux_sym_sequence_token1,
    ACTIONS(807), 1,
      aux_sym_cardinality_token1,
    ACTIONS(809), 1,
      anon_sym_STAR2,
    ACTIONS(337), 8,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [6712] = 4,
    ACTIONS(811), 1,
      aux_sym_sequence_token1,
    ACTIONS(324), 2,
      anon_sym_Reference,
      anon_sym_Canonical,
    STATE(261), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(813), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [6732] = 4,
    ACTIONS(61), 1,
      anon_sym_and,
    STATE(276), 1,
      aux_sym_flag_rule_repeat1,
    STATE(62), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(73), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [6751] = 10,
    ACTIONS(67), 1,
      anon_sym_CARET,
    ACTIONS(456), 1,
      anon_sym_insert,
    ACTIONS(462), 1,
      anon_sym_system,
    ACTIONS(816), 1,
      anon_sym_obeys,
    ACTIONS(818), 1,
      aux_sym_sequence_token1,
    STATE(11), 1,
      sym_path,
    STATE(13), 1,
      aux_sym_sequence_repeat1,
    STATE(19), 1,
      sym_sequence,
    STATE(377), 1,
      sym_name,
    STATE(458), 1,
      sym_caret_path,
  [6782] = 6,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(331), 1,
      anon_sym_Expression,
    ACTIONS(333), 1,
      anon_sym_Severity,
    ACTIONS(335), 1,
      anon_sym_XPath,
    STATE(56), 2,
      sym_invariant_metadata,
      aux_sym_invariant_repeat1,
    STATE(160), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
  [6805] = 9,
    ACTIONS(218), 1,
      aux_sym_sequence_token1,
    ACTIONS(460), 1,
      anon_sym_codes,
    ACTIONS(464), 1,
      anon_sym_POUND,
    STATE(107), 1,
      sym_code,
    STATE(147), 1,
      sym_code_string,
    STATE(279), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(372), 1,
      aux_sym_sequence_repeat1,
    STATE(489), 1,
      sym_sequence,
    STATE(241), 2,
      sym_vs_concept_component,
      sym_vs_filter_component,
  [6834] = 10,
    ACTIONS(67), 1,
      anon_sym_CARET,
    ACTIONS(456), 1,
      anon_sym_insert,
    ACTIONS(462), 1,
      anon_sym_system,
    ACTIONS(816), 1,
      anon_sym_obeys,
    ACTIONS(818), 1,
      aux_sym_sequence_token1,
    STATE(9), 1,
      sym_path,
    STATE(13), 1,
      aux_sym_sequence_repeat1,
    STATE(20), 1,
      sym_sequence,
    STATE(377), 1,
      sym_name,
    STATE(458), 1,
      sym_caret_path,
  [6865] = 6,
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
    STATE(123), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
  [6888] = 2,
    ACTIONS(820), 1,
      aux_sym_sequence_token1,
    ACTIONS(412), 8,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [6902] = 8,
    ACTIONS(160), 1,
      anon_sym_Reference,
    ACTIONS(162), 1,
      anon_sym_Canonical,
    ACTIONS(822), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(154), 1,
      aux_sym_sequence_repeat1,
    STATE(198), 1,
      sym_target_type,
    STATE(200), 1,
      sym_reference,
    STATE(202), 2,
      sym_name,
      sym_canonical,
  [6928] = 8,
    ACTIONS(160), 1,
      anon_sym_Reference,
    ACTIONS(162), 1,
      anon_sym_Canonical,
    ACTIONS(822), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(154), 1,
      aux_sym_sequence_repeat1,
    STATE(187), 1,
      sym_target_type,
    STATE(200), 1,
      sym_reference,
    STATE(202), 2,
      sym_name,
      sym_canonical,
  [6954] = 8,
    ACTIONS(160), 1,
      anon_sym_Reference,
    ACTIONS(162), 1,
      anon_sym_Canonical,
    ACTIONS(447), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(187), 1,
      sym_target_type,
    STATE(200), 1,
      sym_reference,
    STATE(309), 1,
      aux_sym_sequence_repeat1,
    STATE(202), 2,
      sym_name,
      sym_canonical,
  [6980] = 2,
    ACTIONS(824), 1,
      aux_sym_sequence_token1,
    ACTIONS(391), 8,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [6994] = 3,
    ACTIONS(826), 1,
      aux_sym_sequence_token1,
    STATE(273), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 7,
      anon_sym_and,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7010] = 2,
    ACTIONS(339), 1,
      aux_sym_sequence_token1,
    ACTIONS(337), 8,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7024] = 3,
    ACTIONS(829), 1,
      aux_sym_sequence_token1,
    STATE(273), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 7,
      anon_sym_and,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7040] = 3,
    ACTIONS(831), 1,
      anon_sym_and,
    STATE(276), 1,
      aux_sym_flag_rule_repeat1,
    ACTIONS(834), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7055] = 1,
    ACTIONS(834), 7,
      anon_sym_and,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7065] = 7,
    ACTIONS(836), 1,
      anon_sym_POUND,
    ACTIONS(839), 1,
      aux_sym_sequence_token1,
    STATE(107), 1,
      sym_code,
    STATE(278), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(372), 1,
      aux_sym_sequence_repeat1,
    STATE(472), 1,
      sym_code_string,
    STATE(493), 1,
      sym_sequence,
  [7087] = 7,
    ACTIONS(218), 1,
      aux_sym_sequence_token1,
    ACTIONS(842), 1,
      anon_sym_POUND,
    STATE(107), 1,
      sym_code,
    STATE(278), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(372), 1,
      aux_sym_sequence_repeat1,
    STATE(404), 1,
      sym_code_string,
    STATE(490), 1,
      sym_sequence,
  [7109] = 6,
    ACTIONS(218), 1,
      aux_sym_sequence_token1,
    ACTIONS(844), 1,
      anon_sym_insert,
    ACTIONS(846), 1,
      anon_sym_POUND,
    STATE(372), 1,
      aux_sym_sequence_repeat1,
    STATE(491), 1,
      sym_sequence,
    STATE(281), 2,
      sym_code,
      aux_sym_code_insert_rule_repeat1,
  [7129] = 6,
    ACTIONS(848), 1,
      anon_sym_insert,
    ACTIONS(850), 1,
      anon_sym_POUND,
    ACTIONS(853), 1,
      aux_sym_sequence_token1,
    STATE(372), 1,
      aux_sym_sequence_repeat1,
    STATE(491), 1,
      sym_sequence,
    STATE(281), 2,
      sym_code,
      aux_sym_code_insert_rule_repeat1,
  [7149] = 7,
    ACTIONS(456), 1,
      anon_sym_insert,
    ACTIONS(462), 1,
      anon_sym_system,
    ACTIONS(856), 1,
      anon_sym_DASH_GT,
    ACTIONS(858), 1,
      aux_sym_sequence_token1,
    STATE(18), 1,
      sym_sequence,
    STATE(120), 1,
      aux_sym_sequence_repeat1,
    STATE(208), 1,
      sym_path,
  [7171] = 7,
    ACTIONS(218), 1,
      aux_sym_sequence_token1,
    ACTIONS(860), 1,
      anon_sym_insert,
    ACTIONS(862), 1,
      anon_sym_POUND,
    STATE(280), 1,
      aux_sym_code_insert_rule_repeat1,
    STATE(290), 1,
      sym_code,
    STATE(372), 1,
      aux_sym_sequence_repeat1,
    STATE(460), 1,
      sym_sequence,
  [7193] = 3,
    ACTIONS(864), 1,
      aux_sym_sequence_token1,
    STATE(284), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 4,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [7206] = 3,
    ACTIONS(867), 1,
      aux_sym_sequence_token1,
    STATE(284), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 4,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [7219] = 3,
    ACTIONS(869), 1,
      aux_sym_sequence_token1,
    STATE(289), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 4,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
  [7232] = 6,
    ACTIONS(871), 1,
      aux_sym_sequence_token1,
    STATE(175), 1,
      sym_vs_filter_definition,
    STATE(257), 1,
      sym_vs_filter_list,
    STATE(291), 1,
      sym_name,
    STATE(401), 1,
      aux_sym_sequence_repeat1,
    STATE(440), 1,
      sym_sequence,
  [7251] = 6,
    ACTIONS(456), 1,
      anon_sym_insert,
    ACTIONS(462), 1,
      anon_sym_system,
    ACTIONS(873), 1,
      aux_sym_sequence_token1,
    STATE(18), 1,
      sym_sequence,
    STATE(116), 1,
      aux_sym_sequence_repeat1,
    STATE(192), 1,
      sym_path,
  [7270] = 3,
    ACTIONS(875), 1,
      aux_sym_sequence_token1,
    STATE(289), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 4,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
  [7283] = 4,
    ACTIONS(67), 1,
      anon_sym_CARET,
    ACTIONS(880), 1,
      aux_sym_sequence_token1,
    STATE(467), 1,
      sym_caret_path,
    ACTIONS(878), 2,
      anon_sym_insert,
      anon_sym_POUND,
  [7297] = 5,
    ACTIONS(882), 1,
      anon_sym_EQ,
    ACTIONS(884), 1,
      aux_sym_sequence_token1,
    STATE(40), 1,
      sym_vs_filter_operator,
    STATE(78), 1,
      aux_sym_sequence_repeat1,
    STATE(81), 1,
      sym_sequence,
  [7313] = 3,
    ACTIONS(886), 1,
      aux_sym_sequence_token1,
    STATE(293), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE,
  [7325] = 3,
    ACTIONS(888), 1,
      aux_sym_sequence_token1,
    STATE(293), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE,
  [7337] = 5,
    ACTIONS(891), 1,
      anon_sym_POUND,
    ACTIONS(893), 1,
      aux_sym_sequence_token1,
    STATE(185), 1,
      aux_sym_sequence_repeat1,
    STATE(234), 1,
      sym_sequence,
    STATE(259), 1,
      sym_code,
  [7353] = 3,
    ACTIONS(895), 1,
      aux_sym_sequence_token1,
    STATE(296), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 3,
      anon_sym_from,
      anon_sym_and,
      anon_sym_DQUOTE,
  [7365] = 3,
    ACTIONS(897), 1,
      aux_sym_sequence_token1,
    STATE(296), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 3,
      anon_sym_from,
      anon_sym_and,
      anon_sym_DQUOTE,
  [7377] = 4,
    ACTIONS(90), 1,
      aux_sym_cardinality_token1,
    ACTIONS(900), 1,
      aux_sym_sequence_token1,
    STATE(298), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 2,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [7391] = 4,
    ACTIONS(84), 1,
      aux_sym_cardinality_token1,
    ACTIONS(902), 1,
      aux_sym_sequence_token1,
    STATE(298), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 2,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [7405] = 3,
    ACTIONS(905), 1,
      aux_sym_sequence_token1,
    STATE(301), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 3,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_CARET,
  [7417] = 5,
    ACTIONS(218), 1,
      aux_sym_sequence_token1,
    ACTIONS(908), 1,
      anon_sym_POUND,
    STATE(168), 1,
      sym_code,
    STATE(372), 1,
      aux_sym_sequence_repeat1,
    STATE(480), 1,
      sym_sequence,
  [7433] = 3,
    ACTIONS(910), 1,
      aux_sym_sequence_token1,
    STATE(301), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 3,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_CARET,
  [7445] = 3,
    ACTIONS(913), 1,
      aux_sym_sequence_token1,
    STATE(301), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 3,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_CARET,
  [7457] = 5,
    ACTIONS(218), 1,
      aux_sym_sequence_token1,
    ACTIONS(915), 1,
      anon_sym_POUND,
    STATE(118), 1,
      sym_code,
    STATE(372), 1,
      aux_sym_sequence_repeat1,
    STATE(488), 1,
      sym_sequence,
  [7473] = 5,
    ACTIONS(917), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(209), 1,
      sym_item,
    STATE(297), 1,
      aux_sym_sequence_repeat1,
    STATE(335), 1,
      sym_name,
  [7489] = 5,
    ACTIONS(462), 1,
      anon_sym_system,
    ACTIONS(919), 1,
      aux_sym_sequence_token1,
    STATE(18), 1,
      sym_sequence,
    STATE(275), 1,
      aux_sym_sequence_repeat1,
    STATE(277), 1,
      sym_path,
  [7505] = 5,
    ACTIONS(917), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(224), 1,
      sym_item,
    STATE(297), 1,
      aux_sym_sequence_repeat1,
    STATE(335), 1,
      sym_name,
  [7521] = 5,
    ACTIONS(218), 1,
      aux_sym_sequence_token1,
    ACTIONS(921), 1,
      anon_sym_POUND,
    STATE(104), 1,
      sym_code,
    STATE(372), 1,
      aux_sym_sequence_repeat1,
    STATE(492), 1,
      sym_sequence,
  [7537] = 5,
    ACTIONS(871), 1,
      aux_sym_sequence_token1,
    STATE(228), 1,
      sym_vs_filter_definition,
    STATE(291), 1,
      sym_name,
    STATE(401), 1,
      aux_sym_sequence_repeat1,
    STATE(440), 1,
      sym_sequence,
  [7553] = 3,
    ACTIONS(923), 1,
      aux_sym_sequence_token1,
    STATE(353), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 2,
      anon_sym_or,
      anon_sym_DQUOTE,
  [7564] = 4,
    ACTIONS(925), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(83), 1,
      aux_sym_sequence_repeat1,
    STATE(115), 1,
      sym_name,
  [7577] = 3,
    ACTIONS(927), 1,
      anon_sym_DQUOTE,
    STATE(352), 1,
      aux_sym_string_repeat1,
    ACTIONS(929), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7588] = 4,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(931), 1,
      anon_sym_or,
    STATE(126), 1,
      sym_string,
    STATE(428), 1,
      aux_sym_only_rule_repeat1,
  [7601] = 4,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(931), 1,
      anon_sym_or,
    STATE(126), 1,
      sym_string,
    STATE(360), 1,
      aux_sym_only_rule_repeat1,
  [7614] = 4,
    ACTIONS(933), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(71), 1,
      aux_sym_sequence_repeat1,
    STATE(84), 1,
      sym_name,
  [7627] = 4,
    ACTIONS(935), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(156), 1,
      aux_sym_sequence_repeat1,
    STATE(179), 1,
      sym_name,
  [7640] = 4,
    ACTIONS(935), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(156), 1,
      aux_sym_sequence_repeat1,
    STATE(205), 1,
      sym_name,
  [7653] = 4,
    ACTIONS(937), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(127), 1,
      aux_sym_sequence_repeat1,
    STATE(178), 1,
      sym_name,
  [7666] = 3,
    ACTIONS(939), 1,
      anon_sym_DQUOTE,
    STATE(326), 1,
      aux_sym_string_repeat1,
    ACTIONS(941), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7677] = 3,
    ACTIONS(943), 1,
      anon_sym_DQUOTE,
    STATE(318), 1,
      aux_sym_string_repeat1,
    ACTIONS(945), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7688] = 4,
    ACTIONS(947), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(84), 1,
      sym_name,
    STATE(90), 1,
      aux_sym_sequence_repeat1,
  [7701] = 4,
    ACTIONS(949), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(267), 1,
      sym_name,
    STATE(286), 1,
      aux_sym_sequence_repeat1,
  [7714] = 4,
    ACTIONS(951), 1,
      aux_sym_sequence_token1,
    STATE(6), 1,
      sym_name,
    STATE(10), 1,
      sym_sequence,
    STATE(85), 1,
      aux_sym_sequence_repeat1,
  [7727] = 4,
    ACTIONS(953), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(264), 1,
      sym_name,
    STATE(285), 1,
      aux_sym_sequence_repeat1,
  [7740] = 4,
    ACTIONS(86), 1,
      anon_sym_DOT_DOT,
    ACTIONS(90), 1,
      aux_sym_cardinality_token1,
    ACTIONS(955), 1,
      aux_sym_sequence_token1,
    STATE(329), 1,
      aux_sym_sequence_repeat1,
  [7753] = 4,
    ACTIONS(925), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(23), 1,
      sym_name,
    STATE(83), 1,
      aux_sym_sequence_repeat1,
  [7766] = 3,
    ACTIONS(957), 1,
      anon_sym_DQUOTE,
    STATE(326), 1,
      aux_sym_string_repeat1,
    ACTIONS(959), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7777] = 4,
    ACTIONS(947), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(35), 1,
      sym_name,
    STATE(90), 1,
      aux_sym_sequence_repeat1,
  [7790] = 4,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(931), 1,
      anon_sym_or,
    STATE(124), 1,
      sym_string,
    STATE(312), 1,
      aux_sym_only_rule_repeat1,
  [7803] = 4,
    ACTIONS(79), 1,
      anon_sym_DOT_DOT,
    ACTIONS(84), 1,
      aux_sym_cardinality_token1,
    ACTIONS(962), 1,
      aux_sym_sequence_token1,
    STATE(329), 1,
      aux_sym_sequence_repeat1,
  [7816] = 4,
    ACTIONS(965), 1,
      anon_sym_RPAREN,
    ACTIONS(967), 1,
      anon_sym_or,
    ACTIONS(969), 1,
      anon_sym_PIPE,
    STATE(374), 1,
      aux_sym_canonical_repeat1,
  [7829] = 4,
    ACTIONS(947), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(43), 1,
      sym_name,
    STATE(90), 1,
      aux_sym_sequence_repeat1,
  [7842] = 4,
    ACTIONS(937), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(127), 1,
      aux_sym_sequence_repeat1,
    STATE(146), 1,
      sym_name,
  [7855] = 3,
    ACTIONS(971), 1,
      aux_sym_sequence_token1,
    STATE(340), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [7866] = 4,
    ACTIONS(937), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(127), 1,
      aux_sym_sequence_repeat1,
    STATE(205), 1,
      sym_name,
  [7879] = 4,
    ACTIONS(973), 1,
      aux_sym_cardinality_token1,
    ACTIONS(975), 1,
      anon_sym_DOT_DOT,
    ACTIONS(977), 1,
      anon_sym_named,
    STATE(51), 1,
      sym_cardinality,
  [7892] = 2,
    ACTIONS(137), 1,
      aux_sym_sequence_token1,
    ACTIONS(135), 3,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_CARET,
  [7901] = 4,
    ACTIONS(979), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(324), 1,
      aux_sym_sequence_repeat1,
    STATE(375), 1,
      sym_name,
  [7914] = 4,
    ACTIONS(933), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(15), 1,
      sym_name,
    STATE(71), 1,
      aux_sym_sequence_repeat1,
  [7927] = 2,
    ACTIONS(119), 1,
      aux_sym_sequence_token1,
    ACTIONS(117), 3,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_CARET,
  [7936] = 3,
    ACTIONS(981), 1,
      aux_sym_sequence_token1,
    STATE(340), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [7947] = 4,
    ACTIONS(935), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(156), 1,
      aux_sym_sequence_repeat1,
    STATE(178), 1,
      sym_name,
  [7960] = 3,
    ACTIONS(984), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(345), 1,
      aux_sym_string_repeat1,
    ACTIONS(986), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7971] = 3,
    ACTIONS(988), 1,
      anon_sym_DQUOTE,
    STATE(326), 1,
      aux_sym_string_repeat1,
    ACTIONS(941), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7982] = 4,
    ACTIONS(951), 1,
      aux_sym_sequence_token1,
    STATE(3), 1,
      sym_name,
    STATE(10), 1,
      sym_sequence,
    STATE(85), 1,
      aux_sym_sequence_repeat1,
  [7995] = 3,
    ACTIONS(957), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(345), 1,
      aux_sym_string_repeat1,
    ACTIONS(990), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [8006] = 4,
    ACTIONS(951), 1,
      aux_sym_sequence_token1,
    STATE(4), 1,
      sym_name,
    STATE(10), 1,
      sym_sequence,
    STATE(85), 1,
      aux_sym_sequence_repeat1,
  [8019] = 3,
    ACTIONS(993), 1,
      aux_sym_sequence_token1,
    STATE(349), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 2,
      anon_sym_and,
      anon_sym_DQUOTE,
  [8030] = 4,
    ACTIONS(995), 1,
      anon_sym_system,
    ACTIONS(997), 1,
      anon_sym_valueset,
    STATE(184), 1,
      sym_vs_from_valueset,
    STATE(189), 1,
      sym_vs_from_system,
  [8043] = 3,
    ACTIONS(999), 1,
      aux_sym_sequence_token1,
    STATE(349), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 2,
      anon_sym_and,
      anon_sym_DQUOTE,
  [8054] = 4,
    ACTIONS(935), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(156), 1,
      aux_sym_sequence_repeat1,
    STATE(203), 1,
      sym_name,
  [8067] = 1,
    ACTIONS(1002), 4,
      anon_sym_example,
      anon_sym_preferred,
      anon_sym_extensible,
      anon_sym_required,
  [8074] = 3,
    ACTIONS(1004), 1,
      anon_sym_DQUOTE,
    STATE(326), 1,
      aux_sym_string_repeat1,
    ACTIONS(941), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [8085] = 3,
    ACTIONS(1006), 1,
      aux_sym_sequence_token1,
    STATE(353), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 2,
      anon_sym_or,
      anon_sym_DQUOTE,
  [8096] = 3,
    ACTIONS(1009), 1,
      aux_sym_sequence_token1,
    STATE(356), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 2,
      anon_sym_insert,
      anon_sym_POUND,
  [8107] = 4,
    ACTIONS(1012), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(172), 1,
      aux_sym_sequence_repeat1,
    STATE(210), 1,
      sym_name,
  [8120] = 3,
    ACTIONS(1014), 1,
      aux_sym_sequence_token1,
    STATE(356), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 2,
      anon_sym_insert,
      anon_sym_POUND,
  [8131] = 4,
    ACTIONS(1017), 1,
      anon_sym_system,
    ACTIONS(1019), 1,
      anon_sym_valueset,
    STATE(220), 1,
      sym_vs_from_valueset,
    STATE(227), 1,
      sym_vs_from_system,
  [8144] = 3,
    ACTIONS(1021), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(342), 1,
      aux_sym_string_repeat1,
    ACTIONS(1023), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [8155] = 3,
    ACTIONS(1025), 1,
      anon_sym_DQUOTE,
    STATE(343), 1,
      aux_sym_string_repeat1,
    ACTIONS(1027), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [8166] = 4,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(931), 1,
      anon_sym_or,
    STATE(136), 1,
      sym_string,
    STATE(428), 1,
      aux_sym_only_rule_repeat1,
  [8179] = 4,
    ACTIONS(1029), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(148), 1,
      aux_sym_sequence_repeat1,
    STATE(205), 1,
      sym_name,
  [8192] = 4,
    ACTIONS(937), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(127), 1,
      aux_sym_sequence_repeat1,
    STATE(173), 1,
      sym_name,
  [8205] = 3,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(46), 2,
      sym_string,
      sym_multiline_string,
  [8216] = 4,
    ACTIONS(951), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(84), 1,
      sym_name,
    STATE(85), 1,
      aux_sym_sequence_repeat1,
  [8229] = 4,
    ACTIONS(951), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(85), 1,
      aux_sym_sequence_repeat1,
    STATE(125), 1,
      sym_name,
  [8242] = 4,
    ACTIONS(935), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(156), 1,
      aux_sym_sequence_repeat1,
    STATE(211), 1,
      sym_name,
  [8255] = 4,
    ACTIONS(1031), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(195), 1,
      aux_sym_sequence_repeat1,
    STATE(205), 1,
      sym_name,
  [8268] = 4,
    ACTIONS(935), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(156), 1,
      aux_sym_sequence_repeat1,
    STATE(190), 1,
      sym_name,
  [8281] = 3,
    ACTIONS(1033), 1,
      anon_sym_RPAREN,
    ACTIONS(1035), 1,
      anon_sym_or,
    STATE(422), 1,
      aux_sym_reference_repeat1,
  [8291] = 3,
    ACTIONS(1035), 1,
      anon_sym_or,
    ACTIONS(1037), 1,
      anon_sym_RPAREN,
    STATE(369), 1,
      aux_sym_reference_repeat1,
  [8301] = 3,
    ACTIONS(1039), 1,
      aux_sym_sequence_token1,
    STATE(333), 1,
      aux_sym_sequence_repeat1,
    STATE(438), 1,
      sym_sequence,
  [8311] = 3,
    ACTIONS(86), 1,
      anon_sym_POUND,
    ACTIONS(1041), 1,
      aux_sym_sequence_token1,
    STATE(373), 1,
      aux_sym_sequence_repeat1,
  [8321] = 3,
    ACTIONS(79), 1,
      anon_sym_POUND,
    ACTIONS(1043), 1,
      aux_sym_sequence_token1,
    STATE(373), 1,
      aux_sym_sequence_repeat1,
  [8331] = 3,
    ACTIONS(967), 1,
      anon_sym_or,
    ACTIONS(1046), 1,
      anon_sym_RPAREN,
    STATE(415), 1,
      aux_sym_canonical_repeat1,
  [8341] = 3,
    ACTIONS(973), 1,
      aux_sym_cardinality_token1,
    ACTIONS(975), 1,
      anon_sym_DOT_DOT,
    STATE(53), 1,
      sym_cardinality,
  [8351] = 3,
    ACTIONS(1048), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(101), 1,
      aux_sym_sequence_repeat1,
  [8361] = 3,
    ACTIONS(973), 1,
      aux_sym_cardinality_token1,
    ACTIONS(975), 1,
      anon_sym_DOT_DOT,
    STATE(64), 1,
      sym_cardinality,
  [8371] = 3,
    ACTIONS(1050), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(106), 1,
      aux_sym_sequence_repeat1,
  [8381] = 3,
    ACTIONS(1052), 1,
      aux_sym_sequence_token1,
    STATE(399), 1,
      aux_sym_sequence_repeat1,
    STATE(463), 1,
      sym_sequence,
  [8391] = 3,
    ACTIONS(925), 1,
      aux_sym_sequence_token1,
    STATE(24), 1,
      sym_sequence,
    STATE(83), 1,
      aux_sym_sequence_repeat1,
  [8401] = 3,
    ACTIONS(1050), 1,
      aux_sym_sequence_token1,
    STATE(24), 1,
      sym_sequence,
    STATE(106), 1,
      aux_sym_sequence_repeat1,
  [8411] = 3,
    ACTIONS(1054), 1,
      anon_sym_SQUOTE,
    ACTIONS(1056), 1,
      aux_sym_unit_token1,
    STATE(382), 1,
      aux_sym_unit_repeat1,
  [8421] = 2,
    ACTIONS(1059), 1,
      anon_sym_POUND,
    ACTIONS(112), 2,
      anon_sym_insert,
      anon_sym_CARET,
  [8429] = 3,
    ACTIONS(55), 1,
      anon_sym_insert,
    ACTIONS(67), 1,
      anon_sym_CARET,
    STATE(465), 1,
      sym_caret_path,
  [8439] = 3,
    ACTIONS(925), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(83), 1,
      aux_sym_sequence_repeat1,
  [8449] = 3,
    ACTIONS(1061), 1,
      aux_sym_sequence_token1,
    STATE(24), 1,
      sym_sequence,
    STATE(215), 1,
      aux_sym_sequence_repeat1,
  [8459] = 3,
    ACTIONS(1063), 1,
      aux_sym_sequence_token1,
    STATE(24), 1,
      sym_sequence,
    STATE(295), 1,
      aux_sym_sequence_repeat1,
  [8469] = 3,
    ACTIONS(1063), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(295), 1,
      aux_sym_sequence_repeat1,
  [8479] = 3,
    ACTIONS(1065), 1,
      aux_sym_sequence_token1,
    STATE(24), 1,
      sym_sequence,
    STATE(128), 1,
      aux_sym_sequence_repeat1,
  [8489] = 3,
    ACTIONS(1067), 1,
      aux_sym_sequence_token1,
    STATE(354), 1,
      aux_sym_sequence_repeat1,
    STATE(398), 1,
      sym_sequence,
  [8499] = 3,
    ACTIONS(1065), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(128), 1,
      aux_sym_sequence_repeat1,
  [8509] = 3,
    ACTIONS(1061), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(215), 1,
      aux_sym_sequence_repeat1,
  [8519] = 3,
    ACTIONS(1067), 1,
      aux_sym_sequence_token1,
    STATE(354), 1,
      aux_sym_sequence_repeat1,
    STATE(396), 1,
      sym_sequence,
  [8529] = 3,
    ACTIONS(933), 1,
      aux_sym_sequence_token1,
    STATE(24), 1,
      sym_sequence,
    STATE(71), 1,
      aux_sym_sequence_repeat1,
  [8539] = 3,
    ACTIONS(1069), 1,
      aux_sym_sequence_token1,
    STATE(292), 1,
      aux_sym_sequence_repeat1,
    STATE(420), 1,
      sym_sequence,
  [8549] = 2,
    ACTIONS(119), 1,
      aux_sym_sequence_token1,
    ACTIONS(117), 2,
      anon_sym_insert,
      anon_sym_POUND,
  [8557] = 3,
    ACTIONS(79), 1,
      anon_sym_EQ,
    ACTIONS(1071), 1,
      aux_sym_sequence_token1,
    STATE(397), 1,
      aux_sym_sequence_repeat1,
  [8567] = 2,
    ACTIONS(137), 1,
      aux_sym_sequence_token1,
    ACTIONS(135), 2,
      anon_sym_insert,
      anon_sym_POUND,
  [8575] = 3,
    ACTIONS(86), 1,
      anon_sym_EQ,
    ACTIONS(1074), 1,
      aux_sym_sequence_token1,
    STATE(397), 1,
      aux_sym_sequence_repeat1,
  [8585] = 3,
    ACTIONS(1039), 1,
      aux_sym_sequence_token1,
    STATE(333), 1,
      aux_sym_sequence_repeat1,
    STATE(417), 1,
      sym_sequence,
  [8595] = 3,
    ACTIONS(86), 1,
      anon_sym_EQ,
    ACTIONS(1076), 1,
      aux_sym_sequence_token1,
    STATE(397), 1,
      aux_sym_sequence_repeat1,
  [8605] = 3,
    ACTIONS(933), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(71), 1,
      aux_sym_sequence_repeat1,
  [8615] = 3,
    ACTIONS(1079), 1,
      aux_sym_sequence_token1,
    STATE(24), 1,
      sym_sequence,
    STATE(152), 1,
      aux_sym_sequence_repeat1,
  [8625] = 3,
    ACTIONS(585), 1,
      anon_sym_from,
    ACTIONS(587), 1,
      anon_sym_and,
    STATE(239), 1,
      sym_vs_component_from,
  [8635] = 3,
    ACTIONS(1079), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(152), 1,
      aux_sym_sequence_repeat1,
  [8645] = 3,
    ACTIONS(1081), 1,
      aux_sym_sequence_token1,
    STATE(24), 1,
      sym_sequence,
    STATE(121), 1,
      aux_sym_sequence_repeat1,
  [8655] = 3,
    ACTIONS(1081), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(121), 1,
      aux_sym_sequence_repeat1,
  [8665] = 3,
    ACTIONS(1083), 1,
      aux_sym_sequence_token1,
    STATE(24), 1,
      sym_sequence,
    STATE(347), 1,
      aux_sym_sequence_repeat1,
  [8675] = 3,
    ACTIONS(1083), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(347), 1,
      aux_sym_sequence_repeat1,
  [8685] = 3,
    ACTIONS(1031), 1,
      aux_sym_sequence_token1,
    STATE(24), 1,
      sym_sequence,
    STATE(195), 1,
      aux_sym_sequence_repeat1,
  [8695] = 3,
    ACTIONS(1031), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(195), 1,
      aux_sym_sequence_repeat1,
  [8705] = 3,
    ACTIONS(967), 1,
      anon_sym_or,
    ACTIONS(1085), 1,
      anon_sym_RPAREN,
    STATE(415), 1,
      aux_sym_canonical_repeat1,
  [8715] = 3,
    ACTIONS(1039), 1,
      aux_sym_sequence_token1,
    STATE(333), 1,
      aux_sym_sequence_repeat1,
    STATE(439), 1,
      sym_sequence,
  [8725] = 3,
    ACTIONS(1087), 1,
      anon_sym_SQUOTE,
    ACTIONS(1089), 1,
      aux_sym_unit_token1,
    STATE(432), 1,
      aux_sym_unit_repeat1,
  [8735] = 3,
    ACTIONS(1091), 1,
      anon_sym_RPAREN,
    ACTIONS(1093), 1,
      anon_sym_or,
    STATE(415), 1,
      aux_sym_canonical_repeat1,
  [8745] = 3,
    ACTIONS(1096), 1,
      aux_sym_sequence_token1,
    STATE(24), 1,
      sym_sequence,
    STATE(133), 1,
      aux_sym_sequence_repeat1,
  [8755] = 3,
    ACTIONS(967), 1,
      anon_sym_or,
    ACTIONS(1098), 1,
      anon_sym_RPAREN,
    STATE(412), 1,
      aux_sym_canonical_repeat1,
  [8765] = 3,
    ACTIONS(1052), 1,
      aux_sym_sequence_token1,
    STATE(399), 1,
      aux_sym_sequence_repeat1,
    STATE(454), 1,
      sym_sequence,
  [8775] = 3,
    ACTIONS(1100), 1,
      aux_sym_sequence_token1,
    STATE(24), 1,
      sym_sequence,
    STATE(93), 1,
      aux_sym_sequence_repeat1,
  [8785] = 2,
    ACTIONS(1102), 1,
      anon_sym_PIPE,
    ACTIONS(1091), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [8793] = 3,
    ACTIONS(1100), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(93), 1,
      aux_sym_sequence_repeat1,
  [8803] = 3,
    ACTIONS(1104), 1,
      anon_sym_RPAREN,
    ACTIONS(1106), 1,
      anon_sym_or,
    STATE(422), 1,
      aux_sym_reference_repeat1,
  [8813] = 3,
    ACTIONS(1039), 1,
      aux_sym_sequence_token1,
    STATE(333), 1,
      aux_sym_sequence_repeat1,
    STATE(370), 1,
      sym_sequence,
  [8823] = 3,
    ACTIONS(1096), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(133), 1,
      aux_sym_sequence_repeat1,
  [8833] = 3,
    ACTIONS(1069), 1,
      aux_sym_sequence_token1,
    STATE(292), 1,
      aux_sym_sequence_repeat1,
    STATE(330), 1,
      sym_sequence,
  [8843] = 3,
    ACTIONS(1109), 1,
      sym_number,
    STATE(221), 1,
      sym_quantity,
    STATE(223), 1,
      sym_ratio_part,
  [8853] = 3,
    ACTIONS(1111), 1,
      sym_number,
    STATE(221), 1,
      sym_quantity,
    STATE(223), 1,
      sym_ratio_part,
  [8863] = 3,
    ACTIONS(668), 1,
      anon_sym_DQUOTE,
    ACTIONS(1113), 1,
      anon_sym_or,
    STATE(428), 1,
      aux_sym_only_rule_repeat1,
  [8873] = 3,
    ACTIONS(1116), 1,
      aux_sym_sequence_token1,
    STATE(299), 1,
      aux_sym_sequence_repeat1,
    STATE(336), 1,
      sym_sequence,
  [8883] = 3,
    ACTIONS(1048), 1,
      aux_sym_sequence_token1,
    STATE(24), 1,
      sym_sequence,
    STATE(101), 1,
      aux_sym_sequence_repeat1,
  [8893] = 3,
    ACTIONS(1116), 1,
      aux_sym_sequence_token1,
    STATE(299), 1,
      aux_sym_sequence_repeat1,
    STATE(339), 1,
      sym_sequence,
  [8903] = 3,
    ACTIONS(1118), 1,
      anon_sym_SQUOTE,
    ACTIONS(1120), 1,
      aux_sym_unit_token1,
    STATE(382), 1,
      aux_sym_unit_repeat1,
  [8913] = 2,
    ACTIONS(1122), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      sym_string,
  [8920] = 2,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    STATE(169), 1,
      sym_string,
  [8927] = 2,
    ACTIONS(1124), 1,
      anon_sym_system,
    STATE(225), 1,
      sym_vs_from_system,
  [8934] = 2,
    ACTIONS(1126), 1,
      anon_sym_valueset,
    STATE(225), 1,
      sym_vs_from_valueset,
  [8941] = 2,
    ACTIONS(1128), 1,
      anon_sym_system,
    STATE(225), 1,
      sym_vs_from_system,
  [8948] = 1,
    ACTIONS(1104), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [8953] = 1,
    ACTIONS(1130), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [8958] = 2,
    ACTIONS(75), 1,
      anon_sym_EQ,
    ACTIONS(77), 1,
      aux_sym_sequence_token1,
  [8965] = 2,
    ACTIONS(1132), 1,
      anon_sym_POUND,
    ACTIONS(1134), 1,
      aux_sym_sequence_token1,
  [8972] = 2,
    ACTIONS(1122), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      sym_string,
  [8979] = 2,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    STATE(98), 1,
      sym_string,
  [8986] = 2,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    STATE(65), 1,
      sym_string,
  [8993] = 2,
    ACTIONS(1136), 1,
      anon_sym_from,
    STATE(226), 1,
      sym_vs_component_from,
  [9000] = 2,
    ACTIONS(1138), 1,
      anon_sym_valueset,
    STATE(225), 1,
      sym_vs_from_valueset,
  [9007] = 2,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    STATE(167), 1,
      sym_string,
  [9014] = 1,
    ACTIONS(1140), 1,
      anon_sym_COLON,
  [9018] = 1,
    ACTIONS(1142), 1,
      anon_sym_COLON,
  [9022] = 1,
    ACTIONS(1144), 1,
      anon_sym_COLON,
  [9026] = 1,
    ACTIONS(1146), 1,
      ts_builtin_sym_end,
  [9030] = 1,
    ACTIONS(1148), 1,
      anon_sym_COLON,
  [9034] = 1,
    ACTIONS(1150), 1,
      anon_sym_COLON,
  [9038] = 1,
    ACTIONS(1152), 1,
      anon_sym_EQ,
  [9042] = 1,
    ACTIONS(1154), 1,
      anon_sym_DOT_DOT,
  [9046] = 1,
    ACTIONS(1156), 1,
      anon_sym_COLON,
  [9050] = 1,
    ACTIONS(1158), 1,
      anon_sym_COLON,
  [9054] = 1,
    ACTIONS(1160), 1,
      anon_sym_EQ,
  [9058] = 1,
    ACTIONS(1162), 1,
      anon_sym_COLON,
  [9062] = 1,
    ACTIONS(1164), 1,
      anon_sym_POUND,
  [9066] = 1,
    ACTIONS(1166), 1,
      anon_sym_COLON,
  [9070] = 1,
    ACTIONS(1168), 1,
      anon_sym_COLON,
  [9074] = 1,
    ACTIONS(1170), 1,
      anon_sym_EQ,
  [9078] = 1,
    ACTIONS(1172), 1,
      anon_sym_DOT_DOT,
  [9082] = 1,
    ACTIONS(1174), 1,
      anon_sym_EQ,
  [9086] = 1,
    ACTIONS(1176), 1,
      anon_sym_COLON,
  [9090] = 1,
    ACTIONS(1178), 1,
      anon_sym_EQ,
  [9094] = 1,
    ACTIONS(1180), 1,
      anon_sym_LPAREN,
  [9098] = 1,
    ACTIONS(1182), 1,
      anon_sym_LPAREN,
  [9102] = 1,
    ACTIONS(1184), 1,
      anon_sym_COLON,
  [9106] = 1,
    ACTIONS(1186), 1,
      anon_sym_COLON,
  [9110] = 1,
    ACTIONS(587), 1,
      anon_sym_and,
  [9114] = 1,
    ACTIONS(1188), 1,
      anon_sym_COLON,
  [9118] = 1,
    ACTIONS(1190), 1,
      sym_time,
  [9122] = 1,
    ACTIONS(1192), 1,
      anon_sym_COLON,
  [9126] = 1,
    ACTIONS(1194), 1,
      anon_sym_exactly,
  [9130] = 1,
    ACTIONS(1196), 1,
      anon_sym_COLON,
  [9134] = 1,
    ACTIONS(1198), 1,
      anon_sym_RPAREN,
  [9138] = 1,
    ACTIONS(1200), 1,
      anon_sym_COLON,
  [9142] = 1,
    ACTIONS(1202), 1,
      anon_sym_POUND,
  [9146] = 1,
    ACTIONS(1204), 1,
      anon_sym_RPAREN,
  [9150] = 1,
    ACTIONS(1206), 1,
      anon_sym_COLON,
  [9154] = 1,
    ACTIONS(1208), 1,
      anon_sym_COLON,
  [9158] = 1,
    ACTIONS(1210), 1,
      anon_sym_COLON,
  [9162] = 1,
    ACTIONS(1212), 1,
      anon_sym_COLON,
  [9166] = 1,
    ACTIONS(1214), 1,
      anon_sym_COLON,
  [9170] = 1,
    ACTIONS(1216), 1,
      anon_sym_COLON,
  [9174] = 1,
    ACTIONS(1218), 1,
      anon_sym_POUND,
  [9178] = 1,
    ACTIONS(1059), 1,
      anon_sym_POUND,
  [9182] = 1,
    ACTIONS(1220), 1,
      anon_sym_POUND,
  [9186] = 1,
    ACTIONS(1222), 1,
      anon_sym_POUND,
  [9190] = 1,
    ACTIONS(1224), 1,
      anon_sym_POUND,
  [9194] = 1,
    ACTIONS(1226), 1,
      anon_sym_POUND,
  [9198] = 1,
    ACTIONS(1228), 1,
      anon_sym_POUND,
  [9202] = 1,
    ACTIONS(1230), 1,
      anon_sym_POUND,
  [9206] = 1,
    ACTIONS(1232), 1,
      anon_sym_POUND,
  [9210] = 1,
    ACTIONS(726), 1,
      anon_sym_POUND,
  [9214] = 1,
    ACTIONS(653), 1,
      anon_sym_POUND,
  [9218] = 1,
    ACTIONS(1234), 1,
      anon_sym_POUND,
  [9222] = 1,
    ACTIONS(1236), 1,
      anon_sym_COLON,
  [9226] = 1,
    ACTIONS(1238), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 118,
  [SMALL_STATE(5)] = 177,
  [SMALL_STATE(6)] = 236,
  [SMALL_STATE(7)] = 291,
  [SMALL_STATE(8)] = 346,
  [SMALL_STATE(9)] = 401,
  [SMALL_STATE(10)] = 467,
  [SMALL_STATE(11)] = 503,
  [SMALL_STATE(12)] = 560,
  [SMALL_STATE(13)] = 599,
  [SMALL_STATE(14)] = 638,
  [SMALL_STATE(15)] = 672,
  [SMALL_STATE(16)] = 724,
  [SMALL_STATE(17)] = 776,
  [SMALL_STATE(18)] = 810,
  [SMALL_STATE(19)] = 842,
  [SMALL_STATE(20)] = 875,
  [SMALL_STATE(21)] = 908,
  [SMALL_STATE(22)] = 940,
  [SMALL_STATE(23)] = 990,
  [SMALL_STATE(24)] = 1040,
  [SMALL_STATE(25)] = 1072,
  [SMALL_STATE(26)] = 1109,
  [SMALL_STATE(27)] = 1146,
  [SMALL_STATE(28)] = 1209,
  [SMALL_STATE(29)] = 1246,
  [SMALL_STATE(30)] = 1309,
  [SMALL_STATE(31)] = 1372,
  [SMALL_STATE(32)] = 1435,
  [SMALL_STATE(33)] = 1472,
  [SMALL_STATE(34)] = 1509,
  [SMALL_STATE(35)] = 1553,
  [SMALL_STATE(36)] = 1597,
  [SMALL_STATE(37)] = 1640,
  [SMALL_STATE(38)] = 1673,
  [SMALL_STATE(39)] = 1714,
  [SMALL_STATE(40)] = 1743,
  [SMALL_STATE(41)] = 1788,
  [SMALL_STATE(42)] = 1817,
  [SMALL_STATE(43)] = 1850,
  [SMALL_STATE(44)] = 1893,
  [SMALL_STATE(45)] = 1926,
  [SMALL_STATE(46)] = 1959,
  [SMALL_STATE(47)] = 1987,
  [SMALL_STATE(48)] = 2034,
  [SMALL_STATE(49)] = 2071,
  [SMALL_STATE(50)] = 2118,
  [SMALL_STATE(51)] = 2157,
  [SMALL_STATE(52)] = 2185,
  [SMALL_STATE(53)] = 2221,
  [SMALL_STATE(54)] = 2249,
  [SMALL_STATE(55)] = 2277,
  [SMALL_STATE(56)] = 2305,
  [SMALL_STATE(57)] = 2341,
  [SMALL_STATE(58)] = 2369,
  [SMALL_STATE(59)] = 2397,
  [SMALL_STATE(60)] = 2435,
  [SMALL_STATE(61)] = 2463,
  [SMALL_STATE(62)] = 2496,
  [SMALL_STATE(63)] = 2523,
  [SMALL_STATE(64)] = 2550,
  [SMALL_STATE(65)] = 2577,
  [SMALL_STATE(66)] = 2602,
  [SMALL_STATE(67)] = 2639,
  [SMALL_STATE(68)] = 2672,
  [SMALL_STATE(69)] = 2707,
  [SMALL_STATE(70)] = 2734,
  [SMALL_STATE(71)] = 2756,
  [SMALL_STATE(72)] = 2782,
  [SMALL_STATE(73)] = 2818,
  [SMALL_STATE(74)] = 2844,
  [SMALL_STATE(75)] = 2878,
  [SMALL_STATE(76)] = 2914,
  [SMALL_STATE(77)] = 2936,
  [SMALL_STATE(78)] = 2962,
  [SMALL_STATE(79)] = 2988,
  [SMALL_STATE(80)] = 3010,
  [SMALL_STATE(81)] = 3035,
  [SMALL_STATE(82)] = 3058,
  [SMALL_STATE(83)] = 3085,
  [SMALL_STATE(84)] = 3112,
  [SMALL_STATE(85)] = 3133,
  [SMALL_STATE(86)] = 3158,
  [SMALL_STATE(87)] = 3182,
  [SMALL_STATE(88)] = 3208,
  [SMALL_STATE(89)] = 3234,
  [SMALL_STATE(90)] = 3260,
  [SMALL_STATE(91)] = 3284,
  [SMALL_STATE(92)] = 3322,
  [SMALL_STATE(93)] = 3346,
  [SMALL_STATE(94)] = 3370,
  [SMALL_STATE(95)] = 3396,
  [SMALL_STATE(96)] = 3444,
  [SMALL_STATE(97)] = 3468,
  [SMALL_STATE(98)] = 3494,
  [SMALL_STATE(99)] = 3514,
  [SMALL_STATE(100)] = 3534,
  [SMALL_STATE(101)] = 3564,
  [SMALL_STATE(102)] = 3588,
  [SMALL_STATE(103)] = 3612,
  [SMALL_STATE(104)] = 3638,
  [SMALL_STATE(105)] = 3658,
  [SMALL_STATE(106)] = 3684,
  [SMALL_STATE(107)] = 3708,
  [SMALL_STATE(108)] = 3732,
  [SMALL_STATE(109)] = 3762,
  [SMALL_STATE(110)] = 3788,
  [SMALL_STATE(111)] = 3826,
  [SMALL_STATE(112)] = 3852,
  [SMALL_STATE(113)] = 3875,
  [SMALL_STATE(114)] = 3898,
  [SMALL_STATE(115)] = 3923,
  [SMALL_STATE(116)] = 3944,
  [SMALL_STATE(117)] = 3967,
  [SMALL_STATE(118)] = 3990,
  [SMALL_STATE(119)] = 4011,
  [SMALL_STATE(120)] = 4034,
  [SMALL_STATE(121)] = 4057,
  [SMALL_STATE(122)] = 4080,
  [SMALL_STATE(123)] = 4103,
  [SMALL_STATE(124)] = 4122,
  [SMALL_STATE(125)] = 4147,
  [SMALL_STATE(126)] = 4166,
  [SMALL_STATE(127)] = 4191,
  [SMALL_STATE(128)] = 4214,
  [SMALL_STATE(129)] = 4237,
  [SMALL_STATE(130)] = 4262,
  [SMALL_STATE(131)] = 4287,
  [SMALL_STATE(132)] = 4310,
  [SMALL_STATE(133)] = 4333,
  [SMALL_STATE(134)] = 4356,
  [SMALL_STATE(135)] = 4379,
  [SMALL_STATE(136)] = 4402,
  [SMALL_STATE(137)] = 4427,
  [SMALL_STATE(138)] = 4448,
  [SMALL_STATE(139)] = 4470,
  [SMALL_STATE(140)] = 4492,
  [SMALL_STATE(141)] = 4510,
  [SMALL_STATE(142)] = 4528,
  [SMALL_STATE(143)] = 4546,
  [SMALL_STATE(144)] = 4566,
  [SMALL_STATE(145)] = 4584,
  [SMALL_STATE(146)] = 4606,
  [SMALL_STATE(147)] = 4626,
  [SMALL_STATE(148)] = 4650,
  [SMALL_STATE(149)] = 4672,
  [SMALL_STATE(150)] = 4694,
  [SMALL_STATE(151)] = 4712,
  [SMALL_STATE(152)] = 4730,
  [SMALL_STATE(153)] = 4752,
  [SMALL_STATE(154)] = 4774,
  [SMALL_STATE(155)] = 4796,
  [SMALL_STATE(156)] = 4814,
  [SMALL_STATE(157)] = 4836,
  [SMALL_STATE(158)] = 4854,
  [SMALL_STATE(159)] = 4876,
  [SMALL_STATE(160)] = 4898,
  [SMALL_STATE(161)] = 4916,
  [SMALL_STATE(162)] = 4938,
  [SMALL_STATE(163)] = 4956,
  [SMALL_STATE(164)] = 4978,
  [SMALL_STATE(165)] = 5000,
  [SMALL_STATE(166)] = 5018,
  [SMALL_STATE(167)] = 5038,
  [SMALL_STATE(168)] = 5056,
  [SMALL_STATE(169)] = 5074,
  [SMALL_STATE(170)] = 5092,
  [SMALL_STATE(171)] = 5112,
  [SMALL_STATE(172)] = 5130,
  [SMALL_STATE(173)] = 5152,
  [SMALL_STATE(174)] = 5174,
  [SMALL_STATE(175)] = 5195,
  [SMALL_STATE(176)] = 5216,
  [SMALL_STATE(177)] = 5237,
  [SMALL_STATE(178)] = 5256,
  [SMALL_STATE(179)] = 5273,
  [SMALL_STATE(180)] = 5292,
  [SMALL_STATE(181)] = 5311,
  [SMALL_STATE(182)] = 5332,
  [SMALL_STATE(183)] = 5353,
  [SMALL_STATE(184)] = 5374,
  [SMALL_STATE(185)] = 5393,
  [SMALL_STATE(186)] = 5414,
  [SMALL_STATE(187)] = 5435,
  [SMALL_STATE(188)] = 5452,
  [SMALL_STATE(189)] = 5473,
  [SMALL_STATE(190)] = 5492,
  [SMALL_STATE(191)] = 5513,
  [SMALL_STATE(192)] = 5532,
  [SMALL_STATE(193)] = 5553,
  [SMALL_STATE(194)] = 5574,
  [SMALL_STATE(195)] = 5593,
  [SMALL_STATE(196)] = 5614,
  [SMALL_STATE(197)] = 5631,
  [SMALL_STATE(198)] = 5652,
  [SMALL_STATE(199)] = 5673,
  [SMALL_STATE(200)] = 5692,
  [SMALL_STATE(201)] = 5709,
  [SMALL_STATE(202)] = 5730,
  [SMALL_STATE(203)] = 5747,
  [SMALL_STATE(204)] = 5768,
  [SMALL_STATE(205)] = 5787,
  [SMALL_STATE(206)] = 5804,
  [SMALL_STATE(207)] = 5825,
  [SMALL_STATE(208)] = 5846,
  [SMALL_STATE(209)] = 5867,
  [SMALL_STATE(210)] = 5888,
  [SMALL_STATE(211)] = 5909,
  [SMALL_STATE(212)] = 5930,
  [SMALL_STATE(213)] = 5948,
  [SMALL_STATE(214)] = 5964,
  [SMALL_STATE(215)] = 5982,
  [SMALL_STATE(216)] = 6002,
  [SMALL_STATE(217)] = 6018,
  [SMALL_STATE(218)] = 6034,
  [SMALL_STATE(219)] = 6050,
  [SMALL_STATE(220)] = 6066,
  [SMALL_STATE(221)] = 6084,
  [SMALL_STATE(222)] = 6100,
  [SMALL_STATE(223)] = 6116,
  [SMALL_STATE(224)] = 6132,
  [SMALL_STATE(225)] = 6148,
  [SMALL_STATE(226)] = 6164,
  [SMALL_STATE(227)] = 6182,
  [SMALL_STATE(228)] = 6200,
  [SMALL_STATE(229)] = 6216,
  [SMALL_STATE(230)] = 6236,
  [SMALL_STATE(231)] = 6251,
  [SMALL_STATE(232)] = 6266,
  [SMALL_STATE(233)] = 6281,
  [SMALL_STATE(234)] = 6296,
  [SMALL_STATE(235)] = 6313,
  [SMALL_STATE(236)] = 6328,
  [SMALL_STATE(237)] = 6343,
  [SMALL_STATE(238)] = 6358,
  [SMALL_STATE(239)] = 6373,
  [SMALL_STATE(240)] = 6388,
  [SMALL_STATE(241)] = 6403,
  [SMALL_STATE(242)] = 6418,
  [SMALL_STATE(243)] = 6433,
  [SMALL_STATE(244)] = 6448,
  [SMALL_STATE(245)] = 6463,
  [SMALL_STATE(246)] = 6478,
  [SMALL_STATE(247)] = 6493,
  [SMALL_STATE(248)] = 6508,
  [SMALL_STATE(249)] = 6523,
  [SMALL_STATE(250)] = 6538,
  [SMALL_STATE(251)] = 6553,
  [SMALL_STATE(252)] = 6568,
  [SMALL_STATE(253)] = 6583,
  [SMALL_STATE(254)] = 6598,
  [SMALL_STATE(255)] = 6613,
  [SMALL_STATE(256)] = 6628,
  [SMALL_STATE(257)] = 6643,
  [SMALL_STATE(258)] = 6658,
  [SMALL_STATE(259)] = 6678,
  [SMALL_STATE(260)] = 6692,
  [SMALL_STATE(261)] = 6712,
  [SMALL_STATE(262)] = 6732,
  [SMALL_STATE(263)] = 6751,
  [SMALL_STATE(264)] = 6782,
  [SMALL_STATE(265)] = 6805,
  [SMALL_STATE(266)] = 6834,
  [SMALL_STATE(267)] = 6865,
  [SMALL_STATE(268)] = 6888,
  [SMALL_STATE(269)] = 6902,
  [SMALL_STATE(270)] = 6928,
  [SMALL_STATE(271)] = 6954,
  [SMALL_STATE(272)] = 6980,
  [SMALL_STATE(273)] = 6994,
  [SMALL_STATE(274)] = 7010,
  [SMALL_STATE(275)] = 7024,
  [SMALL_STATE(276)] = 7040,
  [SMALL_STATE(277)] = 7055,
  [SMALL_STATE(278)] = 7065,
  [SMALL_STATE(279)] = 7087,
  [SMALL_STATE(280)] = 7109,
  [SMALL_STATE(281)] = 7129,
  [SMALL_STATE(282)] = 7149,
  [SMALL_STATE(283)] = 7171,
  [SMALL_STATE(284)] = 7193,
  [SMALL_STATE(285)] = 7206,
  [SMALL_STATE(286)] = 7219,
  [SMALL_STATE(287)] = 7232,
  [SMALL_STATE(288)] = 7251,
  [SMALL_STATE(289)] = 7270,
  [SMALL_STATE(290)] = 7283,
  [SMALL_STATE(291)] = 7297,
  [SMALL_STATE(292)] = 7313,
  [SMALL_STATE(293)] = 7325,
  [SMALL_STATE(294)] = 7337,
  [SMALL_STATE(295)] = 7353,
  [SMALL_STATE(296)] = 7365,
  [SMALL_STATE(297)] = 7377,
  [SMALL_STATE(298)] = 7391,
  [SMALL_STATE(299)] = 7405,
  [SMALL_STATE(300)] = 7417,
  [SMALL_STATE(301)] = 7433,
  [SMALL_STATE(302)] = 7445,
  [SMALL_STATE(303)] = 7457,
  [SMALL_STATE(304)] = 7473,
  [SMALL_STATE(305)] = 7489,
  [SMALL_STATE(306)] = 7505,
  [SMALL_STATE(307)] = 7521,
  [SMALL_STATE(308)] = 7537,
  [SMALL_STATE(309)] = 7553,
  [SMALL_STATE(310)] = 7564,
  [SMALL_STATE(311)] = 7577,
  [SMALL_STATE(312)] = 7588,
  [SMALL_STATE(313)] = 7601,
  [SMALL_STATE(314)] = 7614,
  [SMALL_STATE(315)] = 7627,
  [SMALL_STATE(316)] = 7640,
  [SMALL_STATE(317)] = 7653,
  [SMALL_STATE(318)] = 7666,
  [SMALL_STATE(319)] = 7677,
  [SMALL_STATE(320)] = 7688,
  [SMALL_STATE(321)] = 7701,
  [SMALL_STATE(322)] = 7714,
  [SMALL_STATE(323)] = 7727,
  [SMALL_STATE(324)] = 7740,
  [SMALL_STATE(325)] = 7753,
  [SMALL_STATE(326)] = 7766,
  [SMALL_STATE(327)] = 7777,
  [SMALL_STATE(328)] = 7790,
  [SMALL_STATE(329)] = 7803,
  [SMALL_STATE(330)] = 7816,
  [SMALL_STATE(331)] = 7829,
  [SMALL_STATE(332)] = 7842,
  [SMALL_STATE(333)] = 7855,
  [SMALL_STATE(334)] = 7866,
  [SMALL_STATE(335)] = 7879,
  [SMALL_STATE(336)] = 7892,
  [SMALL_STATE(337)] = 7901,
  [SMALL_STATE(338)] = 7914,
  [SMALL_STATE(339)] = 7927,
  [SMALL_STATE(340)] = 7936,
  [SMALL_STATE(341)] = 7947,
  [SMALL_STATE(342)] = 7960,
  [SMALL_STATE(343)] = 7971,
  [SMALL_STATE(344)] = 7982,
  [SMALL_STATE(345)] = 7995,
  [SMALL_STATE(346)] = 8006,
  [SMALL_STATE(347)] = 8019,
  [SMALL_STATE(348)] = 8030,
  [SMALL_STATE(349)] = 8043,
  [SMALL_STATE(350)] = 8054,
  [SMALL_STATE(351)] = 8067,
  [SMALL_STATE(352)] = 8074,
  [SMALL_STATE(353)] = 8085,
  [SMALL_STATE(354)] = 8096,
  [SMALL_STATE(355)] = 8107,
  [SMALL_STATE(356)] = 8120,
  [SMALL_STATE(357)] = 8131,
  [SMALL_STATE(358)] = 8144,
  [SMALL_STATE(359)] = 8155,
  [SMALL_STATE(360)] = 8166,
  [SMALL_STATE(361)] = 8179,
  [SMALL_STATE(362)] = 8192,
  [SMALL_STATE(363)] = 8205,
  [SMALL_STATE(364)] = 8216,
  [SMALL_STATE(365)] = 8229,
  [SMALL_STATE(366)] = 8242,
  [SMALL_STATE(367)] = 8255,
  [SMALL_STATE(368)] = 8268,
  [SMALL_STATE(369)] = 8281,
  [SMALL_STATE(370)] = 8291,
  [SMALL_STATE(371)] = 8301,
  [SMALL_STATE(372)] = 8311,
  [SMALL_STATE(373)] = 8321,
  [SMALL_STATE(374)] = 8331,
  [SMALL_STATE(375)] = 8341,
  [SMALL_STATE(376)] = 8351,
  [SMALL_STATE(377)] = 8361,
  [SMALL_STATE(378)] = 8371,
  [SMALL_STATE(379)] = 8381,
  [SMALL_STATE(380)] = 8391,
  [SMALL_STATE(381)] = 8401,
  [SMALL_STATE(382)] = 8411,
  [SMALL_STATE(383)] = 8421,
  [SMALL_STATE(384)] = 8429,
  [SMALL_STATE(385)] = 8439,
  [SMALL_STATE(386)] = 8449,
  [SMALL_STATE(387)] = 8459,
  [SMALL_STATE(388)] = 8469,
  [SMALL_STATE(389)] = 8479,
  [SMALL_STATE(390)] = 8489,
  [SMALL_STATE(391)] = 8499,
  [SMALL_STATE(392)] = 8509,
  [SMALL_STATE(393)] = 8519,
  [SMALL_STATE(394)] = 8529,
  [SMALL_STATE(395)] = 8539,
  [SMALL_STATE(396)] = 8549,
  [SMALL_STATE(397)] = 8557,
  [SMALL_STATE(398)] = 8567,
  [SMALL_STATE(399)] = 8575,
  [SMALL_STATE(400)] = 8585,
  [SMALL_STATE(401)] = 8595,
  [SMALL_STATE(402)] = 8605,
  [SMALL_STATE(403)] = 8615,
  [SMALL_STATE(404)] = 8625,
  [SMALL_STATE(405)] = 8635,
  [SMALL_STATE(406)] = 8645,
  [SMALL_STATE(407)] = 8655,
  [SMALL_STATE(408)] = 8665,
  [SMALL_STATE(409)] = 8675,
  [SMALL_STATE(410)] = 8685,
  [SMALL_STATE(411)] = 8695,
  [SMALL_STATE(412)] = 8705,
  [SMALL_STATE(413)] = 8715,
  [SMALL_STATE(414)] = 8725,
  [SMALL_STATE(415)] = 8735,
  [SMALL_STATE(416)] = 8745,
  [SMALL_STATE(417)] = 8755,
  [SMALL_STATE(418)] = 8765,
  [SMALL_STATE(419)] = 8775,
  [SMALL_STATE(420)] = 8785,
  [SMALL_STATE(421)] = 8793,
  [SMALL_STATE(422)] = 8803,
  [SMALL_STATE(423)] = 8813,
  [SMALL_STATE(424)] = 8823,
  [SMALL_STATE(425)] = 8833,
  [SMALL_STATE(426)] = 8843,
  [SMALL_STATE(427)] = 8853,
  [SMALL_STATE(428)] = 8863,
  [SMALL_STATE(429)] = 8873,
  [SMALL_STATE(430)] = 8883,
  [SMALL_STATE(431)] = 8893,
  [SMALL_STATE(432)] = 8903,
  [SMALL_STATE(433)] = 8913,
  [SMALL_STATE(434)] = 8920,
  [SMALL_STATE(435)] = 8927,
  [SMALL_STATE(436)] = 8934,
  [SMALL_STATE(437)] = 8941,
  [SMALL_STATE(438)] = 8948,
  [SMALL_STATE(439)] = 8953,
  [SMALL_STATE(440)] = 8958,
  [SMALL_STATE(441)] = 8965,
  [SMALL_STATE(442)] = 8972,
  [SMALL_STATE(443)] = 8979,
  [SMALL_STATE(444)] = 8986,
  [SMALL_STATE(445)] = 8993,
  [SMALL_STATE(446)] = 9000,
  [SMALL_STATE(447)] = 9007,
  [SMALL_STATE(448)] = 9014,
  [SMALL_STATE(449)] = 9018,
  [SMALL_STATE(450)] = 9022,
  [SMALL_STATE(451)] = 9026,
  [SMALL_STATE(452)] = 9030,
  [SMALL_STATE(453)] = 9034,
  [SMALL_STATE(454)] = 9038,
  [SMALL_STATE(455)] = 9042,
  [SMALL_STATE(456)] = 9046,
  [SMALL_STATE(457)] = 9050,
  [SMALL_STATE(458)] = 9054,
  [SMALL_STATE(459)] = 9058,
  [SMALL_STATE(460)] = 9062,
  [SMALL_STATE(461)] = 9066,
  [SMALL_STATE(462)] = 9070,
  [SMALL_STATE(463)] = 9074,
  [SMALL_STATE(464)] = 9078,
  [SMALL_STATE(465)] = 9082,
  [SMALL_STATE(466)] = 9086,
  [SMALL_STATE(467)] = 9090,
  [SMALL_STATE(468)] = 9094,
  [SMALL_STATE(469)] = 9098,
  [SMALL_STATE(470)] = 9102,
  [SMALL_STATE(471)] = 9106,
  [SMALL_STATE(472)] = 9110,
  [SMALL_STATE(473)] = 9114,
  [SMALL_STATE(474)] = 9118,
  [SMALL_STATE(475)] = 9122,
  [SMALL_STATE(476)] = 9126,
  [SMALL_STATE(477)] = 9130,
  [SMALL_STATE(478)] = 9134,
  [SMALL_STATE(479)] = 9138,
  [SMALL_STATE(480)] = 9142,
  [SMALL_STATE(481)] = 9146,
  [SMALL_STATE(482)] = 9150,
  [SMALL_STATE(483)] = 9154,
  [SMALL_STATE(484)] = 9158,
  [SMALL_STATE(485)] = 9162,
  [SMALL_STATE(486)] = 9166,
  [SMALL_STATE(487)] = 9170,
  [SMALL_STATE(488)] = 9174,
  [SMALL_STATE(489)] = 9178,
  [SMALL_STATE(490)] = 9182,
  [SMALL_STATE(491)] = 9186,
  [SMALL_STATE(492)] = 9190,
  [SMALL_STATE(493)] = 9194,
  [SMALL_STATE(494)] = 9198,
  [SMALL_STATE(495)] = 9202,
  [SMALL_STATE(496)] = 9206,
  [SMALL_STATE(497)] = 9210,
  [SMALL_STATE(498)] = 9214,
  [SMALL_STATE(499)] = 9218,
  [SMALL_STATE(500)] = 9222,
  [SMALL_STATE(501)] = 9226,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_rule, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(12),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 4),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_name, 1), REDUCE(sym_path, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3, .production_id = 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3, .production_id = 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 4),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 2, .production_id = 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 2, .production_id = 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_logical_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_logical_repeat1, 2), SHIFT_REPEAT(266),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 5),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 4),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat2, 2),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat2, 2), SHIFT_REPEAT(263),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(485),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(487),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(456),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(457),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(448),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_definition, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 5),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 5),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(459),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(501),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(500),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(484),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(482),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(450),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(475),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(462),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(471),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(449),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(485),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(486),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(461),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(448),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instance_repeat1, 2),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(485),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(473),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(448),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(477),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(485),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(453),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(452),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(466),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 1),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2), SHIFT_REPEAT(70),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invariant, 4),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 2),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 5),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ratio_part, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(485),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(479),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(448),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_rule, 4),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_rule, 4),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_rule, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(485),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(479),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(448),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_rule, 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 1),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 3),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(73),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 4),
  [406] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(77),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(77),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 3),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(80),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_operator, 1),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vs_filter_operator, 1),
  [421] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(82),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(86),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_valueset_repeat2, 2),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat2, 2), SHIFT_REPEAT(95),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_repeat2, 2),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat2, 2), SHIFT_REPEAT(282),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 5),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [451] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(92),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(96),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_metadata, 1),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [477] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(102),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 5),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_string, 1),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 5),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instance_repeat2, 2),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat2, 2), SHIFT_REPEAT(288),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 5),
  [497] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(112),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(113),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_of, 3),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance_of, 3),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [509] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(117),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usage, 3),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usage, 3),
  [516] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(119),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [523] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(122),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sd_metadata, 1),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 5),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parent, 3),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 6),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 5),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat2, 2),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat2, 2), SHIFT_REPEAT(283),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [547] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(132),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [554] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(135),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 7),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_metadata, 1),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance_metadata, 1),
  [563] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(138),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 4),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 4),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 3),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_valueset, 3),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2),
  [578] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2), SHIFT_REPEAT(317),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_valueset, 2),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 1),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [591] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(149),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 5),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 5),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [600] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(153),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 6),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 7),
  [611] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(158),
  [614] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(159),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invariant_metadata, 1),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_string, 2),
  [623] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(163),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_metadata, 1),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_severity, 3),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath, 3),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cs_metadata, 1),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_rule, 5),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_list, 1),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vs_filter_list_repeat1, 2),
  [650] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vs_filter_list_repeat1, 2), SHIFT_REPEAT(308),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2), SHIFT_REPEAT(341),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_list, 2),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component_from, 2),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2),
  [670] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2), SHIFT_REPEAT(270),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contains_rule_repeat1, 2),
  [675] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contains_rule_repeat1, 2), SHIFT_REPEAT(306),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [680] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(193),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 3),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 4),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_only_rule, 4),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 1),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_type, 1, .production_id = 4),
  [699] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(201),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_type, 1),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_system, 2),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_only_rule, 5),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 5),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_rule, 4),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_rule, 4),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 3),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_value_rule, 4),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_definition, 3),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 3),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_value, 1),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ratio, 3),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component_from, 4),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_component, 2),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [750] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(229),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sd_rule, 1),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_caret_value_rule, 5),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lr_rule, 1),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 8),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 5, .production_id = 1),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strength, 3),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_value_rule, 7),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_rule, 3),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 3),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_insert_rule, 2),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component, 3),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 6),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 2),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_rule, 2),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_insert_rule, 3),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_rule, 5),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_entity_rule, 1),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cs_rule, 1),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_rule, 1),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_rule, 1),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_value_rule, 5),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_value_rule, 4),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component, 2),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_component, 4),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2),
  [813] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2), SHIFT_REPEAT(272),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 3),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [824] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag, 1),
  [826] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(273),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [831] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_rule_repeat1, 2), SHIFT_REPEAT(305),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_rule_repeat1, 2),
  [836] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2), SHIFT_REPEAT(408),
  [839] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2), SHIFT_REPEAT(372),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2),
  [850] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2), SHIFT_REPEAT(390),
  [853] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2), SHIFT_REPEAT(372),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [864] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(284),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [875] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(289),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_insert_rule_repeat1, 1),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 1),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [888] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(293),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [897] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(296),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [902] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(298),
  [905] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(301),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [910] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(301),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [957] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [959] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(326),
  [962] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(329),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [981] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(340),
  [984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [990] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(345),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [999] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(349),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [1006] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(353),
  [1009] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(356),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1014] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(356),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [1043] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(373),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1054] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2),
  [1056] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(382),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1071] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(397),
  [1074] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [1076] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(397),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1087] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 2),
  [1093] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 2), SHIFT_REPEAT(395),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reference_repeat1, 2),
  [1106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reference_repeat1, 2), SHIFT_REPEAT(371),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2), SHIFT_REPEAT(271),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 4),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2),
  [1134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1146] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_path, 2),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
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
