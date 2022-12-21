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
#define STATE_COUNT 490
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 178
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
  sym_insert_rule = 109,
  sym_valueset_rule = 110,
  sym_fixed_value_rule = 111,
  sym_contains_rule = 112,
  sym_caret_value_rule = 113,
  sym_code_caret_value_rule = 114,
  sym_obeys_rule = 115,
  sym_path_rule = 116,
  sym_flag_rule = 117,
  sym_only_rule = 118,
  sym_mapping_rule = 119,
  sym_add_element_rule = 120,
  sym_vs_component = 121,
  sym_vs_concept_component = 122,
  sym_vs_filter_component = 123,
  sym_vs_component_from = 124,
  sym_vs_from_system = 125,
  sym_vs_from_valueset = 126,
  sym_vs_filter_list = 127,
  sym_vs_filter_definition = 128,
  sym_vs_filter_operator = 129,
  sym_vs_filter_value = 130,
  sym_code = 131,
  sym_code_string = 132,
  sym_sequence = 133,
  sym_caret_path = 134,
  sym_name = 135,
  sym_cardinality = 136,
  sym_string = 137,
  sym_multiline_string = 138,
  sym_datetime = 139,
  sym_unit = 140,
  sym_quantity = 141,
  sym_ratio_part = 142,
  sym_ratio = 143,
  sym_bool = 144,
  sym_path = 145,
  sym_strength = 146,
  sym_reference = 147,
  sym_canonical = 148,
  sym_value = 149,
  sym_item = 150,
  sym_flag = 151,
  sym_target_type = 152,
  aux_sym_doc_repeat1 = 153,
  aux_sym_profile_repeat1 = 154,
  aux_sym_profile_repeat2 = 155,
  aux_sym_invariant_repeat1 = 156,
  aux_sym_instance_repeat1 = 157,
  aux_sym_instance_repeat2 = 158,
  aux_sym_valueset_repeat1 = 159,
  aux_sym_valueset_repeat2 = 160,
  aux_sym_codesystem_repeat1 = 161,
  aux_sym_codesystem_repeat2 = 162,
  aux_sym_mapping_repeat1 = 163,
  aux_sym_mapping_repeat2 = 164,
  aux_sym_logical_repeat1 = 165,
  aux_sym_cardinality_rule_repeat1 = 166,
  aux_sym_contains_rule_repeat1 = 167,
  aux_sym_obeys_rule_repeat1 = 168,
  aux_sym_flag_rule_repeat1 = 169,
  aux_sym_only_rule_repeat1 = 170,
  aux_sym_vs_concept_component_repeat1 = 171,
  aux_sym_vs_filter_list_repeat1 = 172,
  aux_sym_sequence_repeat1 = 173,
  aux_sym_string_repeat1 = 174,
  aux_sym_unit_repeat1 = 175,
  aux_sym_reference_repeat1 = 176,
  aux_sym_canonical_repeat1 = 177,
  alias_sym_alias_name = 178,
  alias_sym_code_system = 179,
  alias_sym_code_value = 180,
  alias_sym_reference_type = 181,
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
  [22] = 19,
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
  [66] = 54,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 11,
  [71] = 71,
  [72] = 72,
  [73] = 61,
  [74] = 74,
  [75] = 13,
  [76] = 76,
  [77] = 77,
  [78] = 11,
  [79] = 13,
  [80] = 80,
  [81] = 81,
  [82] = 13,
  [83] = 11,
  [84] = 13,
  [85] = 11,
  [86] = 13,
  [87] = 87,
  [88] = 13,
  [89] = 11,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 13,
  [95] = 13,
  [96] = 11,
  [97] = 11,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 11,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 13,
  [113] = 11,
  [114] = 114,
  [115] = 11,
  [116] = 13,
  [117] = 117,
  [118] = 118,
  [119] = 11,
  [120] = 13,
  [121] = 121,
  [122] = 13,
  [123] = 11,
  [124] = 13,
  [125] = 11,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 11,
  [132] = 11,
  [133] = 13,
  [134] = 13,
  [135] = 135,
  [136] = 136,
  [137] = 11,
  [138] = 13,
  [139] = 11,
  [140] = 13,
  [141] = 11,
  [142] = 142,
  [143] = 11,
  [144] = 144,
  [145] = 17,
  [146] = 13,
  [147] = 14,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 11,
  [153] = 153,
  [154] = 13,
  [155] = 155,
  [156] = 156,
  [157] = 135,
  [158] = 158,
  [159] = 159,
  [160] = 144,
  [161] = 13,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 13,
  [169] = 11,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 144,
  [184] = 184,
  [185] = 135,
  [186] = 144,
  [187] = 135,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 11,
  [193] = 13,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 142,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 17,
  [207] = 14,
  [208] = 208,
  [209] = 209,
  [210] = 13,
  [211] = 11,
  [212] = 212,
  [213] = 213,
  [214] = 13,
  [215] = 215,
  [216] = 200,
  [217] = 217,
  [218] = 11,
  [219] = 219,
  [220] = 184,
  [221] = 201,
  [222] = 222,
  [223] = 223,
  [224] = 224,
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
  [254] = 254,
  [255] = 255,
  [256] = 51,
  [257] = 57,
  [258] = 58,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 76,
  [267] = 71,
  [268] = 13,
  [269] = 11,
  [270] = 270,
  [271] = 271,
  [272] = 270,
  [273] = 74,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 11,
  [280] = 280,
  [281] = 13,
  [282] = 282,
  [283] = 13,
  [284] = 11,
  [285] = 285,
  [286] = 286,
  [287] = 11,
  [288] = 13,
  [289] = 13,
  [290] = 290,
  [291] = 11,
  [292] = 13,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 11,
  [297] = 297,
  [298] = 298,
  [299] = 13,
  [300] = 300,
  [301] = 11,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 11,
  [309] = 13,
  [310] = 11,
  [311] = 311,
  [312] = 13,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 11,
  [317] = 13,
  [318] = 318,
  [319] = 319,
  [320] = 13,
  [321] = 11,
  [322] = 307,
  [323] = 315,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 303,
  [334] = 319,
  [335] = 324,
  [336] = 306,
  [337] = 319,
  [338] = 338,
  [339] = 311,
  [340] = 307,
  [341] = 306,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 324,
  [347] = 303,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 324,
  [357] = 303,
  [358] = 318,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 359,
  [363] = 360,
  [364] = 364,
  [365] = 365,
  [366] = 11,
  [367] = 13,
  [368] = 365,
  [369] = 360,
  [370] = 365,
  [371] = 360,
  [372] = 365,
  [373] = 360,
  [374] = 11,
  [375] = 13,
  [376] = 376,
  [377] = 377,
  [378] = 365,
  [379] = 379,
  [380] = 360,
  [381] = 365,
  [382] = 11,
  [383] = 360,
  [384] = 365,
  [385] = 365,
  [386] = 360,
  [387] = 365,
  [388] = 360,
  [389] = 365,
  [390] = 390,
  [391] = 360,
  [392] = 392,
  [393] = 365,
  [394] = 360,
  [395] = 365,
  [396] = 360,
  [397] = 13,
  [398] = 398,
  [399] = 399,
  [400] = 11,
  [401] = 365,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 360,
  [408] = 408,
  [409] = 409,
  [410] = 191,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 365,
  [417] = 417,
  [418] = 418,
  [419] = 360,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 10,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 424,
  [433] = 425,
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
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 441,
  [469] = 448,
  [470] = 470,
  [471] = 471,
  [472] = 438,
  [473] = 473,
  [474] = 474,
  [475] = 446,
  [476] = 441,
  [477] = 448,
  [478] = 448,
  [479] = 448,
  [480] = 448,
  [481] = 448,
  [482] = 448,
  [483] = 448,
  [484] = 448,
  [485] = 448,
  [486] = 448,
  [487] = 448,
  [488] = 488,
  [489] = 489,
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(461);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(462);
      END_STATE();
    case 15:
      if (lookahead == ')') ADVANCE(361);
      if (lookahead == 'o') ADVANCE(424);
      if (lookahead == '|') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 16:
      if (lookahead == ')') ADVANCE(361);
      if (lookahead == 'o') ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 17:
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
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(381);
      if (lookahead == 'i') ADVANCE(415);
      if (lookahead == 's') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(379);
      if (lookahead == 'n') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(379);
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
      if (lookahead == '.') ADVANCE(437);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(288);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(367);
      END_STATE();
    case 25:
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
          lookahead == ' ') SKIP(25)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 26:
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
          lookahead == ' ') SKIP(26)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 27:
      if (lookahead == 'C') ADVANCE(388);
      if (lookahead == 'R') ADVANCE(406);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 28:
      if (lookahead == 'D') ADVANCE(407);
      if (lookahead == 'E') ADVANCE(430);
      if (lookahead == 'S') ADVANCE(405);
      if (lookahead == 'X') ADVANCE(382);
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
      if (lookahead == 'I') ADVANCE(401);
      if (lookahead == 'P') ADVANCE(391);
      if (lookahead == 'T') ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 30:
      if (lookahead == 'P') ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == 'S') ADVANCE(473);
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 32:
      if (lookahead == 'S') ADVANCE(272);
      END_STATE();
    case 33:
      if (lookahead == 'S') ADVANCE(111);
      END_STATE();
    case 34:
      if (lookahead == 'U') ADVANCE(474);
      END_STATE();
    case 35:
      if (lookahead == 'U') ADVANCE(475);
      END_STATE();
    case 36:
      if (lookahead == '^') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(415);
      if (lookahead == 'o') ADVANCE(398);
      if (lookahead == 's') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(377);
      END_STATE();
    case 37:
      if (lookahead == '^') ADVANCE(435);
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
      if (lookahead == 'e') ADVANCE(32);
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
      if (lookahead == 'e') ADVANCE(33);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
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
      if (lookahead == 'X') ADVANCE(30);
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
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '=') ADVANCE(334);
      if (lookahead == '?') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(147);
      if (lookahead == 'C') ADVANCE(183);
      if (lookahead == 'D') ADVANCE(477);
      if (lookahead == 'E') ADVANCE(266);
      if (lookahead == 'I') ADVANCE(182);
      if (lookahead == 'L') ADVANCE(184);
      if (lookahead == 'M') ADVANCE(31);
      if (lookahead == 'N') ADVANCE(476);
      if (lookahead == 'P') ADVANCE(200);
      if (lookahead == 'R') ADVANCE(114);
      if (lookahead == 'S') ADVANCE(34);
      if (lookahead == 'T') ADVANCE(35);
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
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(21);
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
      if (lookahead == 'X') ADVANCE(30);
      if (lookahead == '^') ADVANCE(435);
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
      if (lookahead == 'M') ADVANCE(31);
      if (lookahead == 'N') ADVANCE(476);
      if (lookahead == 'P') ADVANCE(200);
      if (lookahead == 'R') ADVANCE(114);
      if (lookahead == 'S') ADVANCE(34);
      if (lookahead == 'T') ADVANCE(35);
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
  [11] = {.lex_state = 318},
  [12] = {.lex_state = 297},
  [13] = {.lex_state = 318},
  [14] = {.lex_state = 296},
  [15] = {.lex_state = 298},
  [16] = {.lex_state = 297},
  [17] = {.lex_state = 296},
  [18] = {.lex_state = 298},
  [19] = {.lex_state = 297},
  [20] = {.lex_state = 298},
  [21] = {.lex_state = 298},
  [22] = {.lex_state = 297},
  [23] = {.lex_state = 298},
  [24] = {.lex_state = 298},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 298},
  [27] = {.lex_state = 298},
  [28] = {.lex_state = 298},
  [29] = {.lex_state = 298},
  [30] = {.lex_state = 298},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 298},
  [35] = {.lex_state = 298},
  [36] = {.lex_state = 298},
  [37] = {.lex_state = 298},
  [38] = {.lex_state = 298},
  [39] = {.lex_state = 298},
  [40] = {.lex_state = 298},
  [41] = {.lex_state = 299},
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
  [52] = {.lex_state = 297},
  [53] = {.lex_state = 298},
  [54] = {.lex_state = 307},
  [55] = {.lex_state = 298},
  [56] = {.lex_state = 297},
  [57] = {.lex_state = 316},
  [58] = {.lex_state = 316},
  [59] = {.lex_state = 297},
  [60] = {.lex_state = 297},
  [61] = {.lex_state = 308},
  [62] = {.lex_state = 297},
  [63] = {.lex_state = 297},
  [64] = {.lex_state = 298},
  [65] = {.lex_state = 298},
  [66] = {.lex_state = 309},
  [67] = {.lex_state = 297},
  [68] = {.lex_state = 297},
  [69] = {.lex_state = 298},
  [70] = {.lex_state = 299},
  [71] = {.lex_state = 297},
  [72] = {.lex_state = 300},
  [73] = {.lex_state = 310},
  [74] = {.lex_state = 297},
  [75] = {.lex_state = 299},
  [76] = {.lex_state = 297},
  [77] = {.lex_state = 300},
  [78] = {.lex_state = 322},
  [79] = {.lex_state = 322},
  [80] = {.lex_state = 298},
  [81] = {.lex_state = 299},
  [82] = {.lex_state = 320},
  [83] = {.lex_state = 320},
  [84] = {.lex_state = 321},
  [85] = {.lex_state = 321},
  [86] = {.lex_state = 301},
  [87] = {.lex_state = 298},
  [88] = {.lex_state = 323},
  [89] = {.lex_state = 329},
  [90] = {.lex_state = 298},
  [91] = {.lex_state = 25},
  [92] = {.lex_state = 312},
  [93] = {.lex_state = 298},
  [94] = {.lex_state = 304},
  [95] = {.lex_state = 329},
  [96] = {.lex_state = 304},
  [97] = {.lex_state = 301},
  [98] = {.lex_state = 298},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 298},
  [101] = {.lex_state = 298},
  [102] = {.lex_state = 298},
  [103] = {.lex_state = 323},
  [104] = {.lex_state = 298},
  [105] = {.lex_state = 298},
  [106] = {.lex_state = 25},
  [107] = {.lex_state = 298},
  [108] = {.lex_state = 298},
  [109] = {.lex_state = 312},
  [110] = {.lex_state = 298},
  [111] = {.lex_state = 298},
  [112] = {.lex_state = 317},
  [113] = {.lex_state = 311},
  [114] = {.lex_state = 298},
  [115] = {.lex_state = 305},
  [116] = {.lex_state = 305},
  [117] = {.lex_state = 298},
  [118] = {.lex_state = 298},
  [119] = {.lex_state = 303},
  [120] = {.lex_state = 303},
  [121] = {.lex_state = 298},
  [122] = {.lex_state = 324},
  [123] = {.lex_state = 324},
  [124] = {.lex_state = 302},
  [125] = {.lex_state = 302},
  [126] = {.lex_state = 297},
  [127] = {.lex_state = 297},
  [128] = {.lex_state = 297},
  [129] = {.lex_state = 298},
  [130] = {.lex_state = 298},
  [131] = {.lex_state = 319},
  [132] = {.lex_state = 317},
  [133] = {.lex_state = 319},
  [134] = {.lex_state = 311},
  [135] = {.lex_state = 298},
  [136] = {.lex_state = 298},
  [137] = {.lex_state = 314},
  [138] = {.lex_state = 312},
  [139] = {.lex_state = 312},
  [140] = {.lex_state = 325},
  [141] = {.lex_state = 325},
  [142] = {.lex_state = 298},
  [143] = {.lex_state = 326},
  [144] = {.lex_state = 298},
  [145] = {.lex_state = 300},
  [146] = {.lex_state = 326},
  [147] = {.lex_state = 300},
  [148] = {.lex_state = 298},
  [149] = {.lex_state = 298},
  [150] = {.lex_state = 298},
  [151] = {.lex_state = 298},
  [152] = {.lex_state = 306},
  [153] = {.lex_state = 298},
  [154] = {.lex_state = 314},
  [155] = {.lex_state = 298},
  [156] = {.lex_state = 298},
  [157] = {.lex_state = 298},
  [158] = {.lex_state = 298},
  [159] = {.lex_state = 298},
  [160] = {.lex_state = 298},
  [161] = {.lex_state = 306},
  [162] = {.lex_state = 298},
  [163] = {.lex_state = 298},
  [164] = {.lex_state = 298},
  [165] = {.lex_state = 298},
  [166] = {.lex_state = 298},
  [167] = {.lex_state = 298},
  [168] = {.lex_state = 327},
  [169] = {.lex_state = 327},
  [170] = {.lex_state = 298},
  [171] = {.lex_state = 298},
  [172] = {.lex_state = 298},
  [173] = {.lex_state = 298},
  [174] = {.lex_state = 298},
  [175] = {.lex_state = 298},
  [176] = {.lex_state = 298},
  [177] = {.lex_state = 298},
  [178] = {.lex_state = 298},
  [179] = {.lex_state = 298},
  [180] = {.lex_state = 298},
  [181] = {.lex_state = 298},
  [182] = {.lex_state = 298},
  [183] = {.lex_state = 298},
  [184] = {.lex_state = 298},
  [185] = {.lex_state = 298},
  [186] = {.lex_state = 298},
  [187] = {.lex_state = 298},
  [188] = {.lex_state = 298},
  [189] = {.lex_state = 298},
  [190] = {.lex_state = 298},
  [191] = {.lex_state = 298},
  [192] = {.lex_state = 328},
  [193] = {.lex_state = 328},
  [194] = {.lex_state = 298},
  [195] = {.lex_state = 298},
  [196] = {.lex_state = 298},
  [197] = {.lex_state = 298},
  [198] = {.lex_state = 315},
  [199] = {.lex_state = 298},
  [200] = {.lex_state = 298},
  [201] = {.lex_state = 298},
  [202] = {.lex_state = 298},
  [203] = {.lex_state = 298},
  [204] = {.lex_state = 298},
  [205] = {.lex_state = 298},
  [206] = {.lex_state = 312},
  [207] = {.lex_state = 312},
  [208] = {.lex_state = 298},
  [209] = {.lex_state = 298},
  [210] = {.lex_state = 313},
  [211] = {.lex_state = 313},
  [212] = {.lex_state = 298},
  [213] = {.lex_state = 298},
  [214] = {.lex_state = 330},
  [215] = {.lex_state = 298},
  [216] = {.lex_state = 298},
  [217] = {.lex_state = 298},
  [218] = {.lex_state = 330},
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
  [229] = {.lex_state = 298},
  [230] = {.lex_state = 298},
  [231] = {.lex_state = 298},
  [232] = {.lex_state = 298},
  [233] = {.lex_state = 298},
  [234] = {.lex_state = 298},
  [235] = {.lex_state = 298},
  [236] = {.lex_state = 298},
  [237] = {.lex_state = 298},
  [238] = {.lex_state = 298},
  [239] = {.lex_state = 298},
  [240] = {.lex_state = 298},
  [241] = {.lex_state = 0},
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
  [256] = {.lex_state = 25},
  [257] = {.lex_state = 17},
  [258] = {.lex_state = 17},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 12},
  [261] = {.lex_state = 298},
  [262] = {.lex_state = 298},
  [263] = {.lex_state = 36},
  [264] = {.lex_state = 36},
  [265] = {.lex_state = 297},
  [266] = {.lex_state = 25},
  [267] = {.lex_state = 25},
  [268] = {.lex_state = 26},
  [269] = {.lex_state = 26},
  [270] = {.lex_state = 27},
  [271] = {.lex_state = 27},
  [272] = {.lex_state = 27},
  [273] = {.lex_state = 25},
  [274] = {.lex_state = 297},
  [275] = {.lex_state = 13},
  [276] = {.lex_state = 297},
  [277] = {.lex_state = 13},
  [278] = {.lex_state = 18},
  [279] = {.lex_state = 29},
  [280] = {.lex_state = 135},
  [281] = {.lex_state = 28},
  [282] = {.lex_state = 275},
  [283] = {.lex_state = 29},
  [284] = {.lex_state = 28},
  [285] = {.lex_state = 13},
  [286] = {.lex_state = 275},
  [287] = {.lex_state = 11},
  [288] = {.lex_state = 19},
  [289] = {.lex_state = 11},
  [290] = {.lex_state = 23},
  [291] = {.lex_state = 6},
  [292] = {.lex_state = 6},
  [293] = {.lex_state = 13},
  [294] = {.lex_state = 218},
  [295] = {.lex_state = 275},
  [296] = {.lex_state = 19},
  [297] = {.lex_state = 13},
  [298] = {.lex_state = 275},
  [299] = {.lex_state = 15},
  [300] = {.lex_state = 13},
  [301] = {.lex_state = 15},
  [302] = {.lex_state = 13},
  [303] = {.lex_state = 275},
  [304] = {.lex_state = 275},
  [305] = {.lex_state = 275},
  [306] = {.lex_state = 275},
  [307] = {.lex_state = 5},
  [308] = {.lex_state = 20},
  [309] = {.lex_state = 20},
  [310] = {.lex_state = 16},
  [311] = {.lex_state = 5},
  [312] = {.lex_state = 16},
  [313] = {.lex_state = 9},
  [314] = {.lex_state = 298},
  [315] = {.lex_state = 275},
  [316] = {.lex_state = 7},
  [317] = {.lex_state = 7},
  [318] = {.lex_state = 298},
  [319] = {.lex_state = 5},
  [320] = {.lex_state = 8},
  [321] = {.lex_state = 8},
  [322] = {.lex_state = 5},
  [323] = {.lex_state = 275},
  [324] = {.lex_state = 275},
  [325] = {.lex_state = 298},
  [326] = {.lex_state = 275},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 275},
  [329] = {.lex_state = 298},
  [330] = {.lex_state = 298},
  [331] = {.lex_state = 298},
  [332] = {.lex_state = 9},
  [333] = {.lex_state = 275},
  [334] = {.lex_state = 5},
  [335] = {.lex_state = 275},
  [336] = {.lex_state = 275},
  [337] = {.lex_state = 5},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 9},
  [340] = {.lex_state = 5},
  [341] = {.lex_state = 275},
  [342] = {.lex_state = 275},
  [343] = {.lex_state = 275},
  [344] = {.lex_state = 275},
  [345] = {.lex_state = 275},
  [346] = {.lex_state = 275},
  [347] = {.lex_state = 275},
  [348] = {.lex_state = 275},
  [349] = {.lex_state = 298},
  [350] = {.lex_state = 275},
  [351] = {.lex_state = 275},
  [352] = {.lex_state = 275},
  [353] = {.lex_state = 275},
  [354] = {.lex_state = 275},
  [355] = {.lex_state = 275},
  [356] = {.lex_state = 275},
  [357] = {.lex_state = 275},
  [358] = {.lex_state = 298},
  [359] = {.lex_state = 296},
  [360] = {.lex_state = 275},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 296},
  [363] = {.lex_state = 275},
  [364] = {.lex_state = 275},
  [365] = {.lex_state = 275},
  [366] = {.lex_state = 13},
  [367] = {.lex_state = 13},
  [368] = {.lex_state = 275},
  [369] = {.lex_state = 275},
  [370] = {.lex_state = 275},
  [371] = {.lex_state = 275},
  [372] = {.lex_state = 275},
  [373] = {.lex_state = 275},
  [374] = {.lex_state = 37},
  [375] = {.lex_state = 37},
  [376] = {.lex_state = 275},
  [377] = {.lex_state = 275},
  [378] = {.lex_state = 275},
  [379] = {.lex_state = 298},
  [380] = {.lex_state = 275},
  [381] = {.lex_state = 275},
  [382] = {.lex_state = 23},
  [383] = {.lex_state = 275},
  [384] = {.lex_state = 275},
  [385] = {.lex_state = 275},
  [386] = {.lex_state = 275},
  [387] = {.lex_state = 275},
  [388] = {.lex_state = 275},
  [389] = {.lex_state = 275},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 275},
  [392] = {.lex_state = 275},
  [393] = {.lex_state = 275},
  [394] = {.lex_state = 275},
  [395] = {.lex_state = 275},
  [396] = {.lex_state = 275},
  [397] = {.lex_state = 23},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 23},
  [401] = {.lex_state = 275},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 14},
  [407] = {.lex_state = 275},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 14},
  [410] = {.lex_state = 298},
  [411] = {.lex_state = 275},
  [412] = {.lex_state = 298},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 275},
  [415] = {.lex_state = 14},
  [416] = {.lex_state = 275},
  [417] = {.lex_state = 275},
  [418] = {.lex_state = 275},
  [419] = {.lex_state = 275},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 298},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 13},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 298},
  [426] = {.lex_state = 298},
  [427] = {.lex_state = 298},
  [428] = {.lex_state = 23},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 298},
  [431] = {.lex_state = 298},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 298},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 298},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 315},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 298},
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
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
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
    [sym_doc] = STATE(467),
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
    STATE(5), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(30), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(245), 2,
      sym_sd_rule,
      sym_add_element_rule,
    STATE(121), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(232), 10,
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
    STATE(4), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(29), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(245), 2,
      sym_sd_rule,
      sym_add_element_rule,
    STATE(121), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(232), 10,
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
    STATE(28), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(50), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(245), 2,
      sym_sd_rule,
      sym_add_element_rule,
    STATE(121), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(232), 10,
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
    STATE(26), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(50), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(245), 2,
      sym_sd_rule,
      sym_add_element_rule,
    STATE(121), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(232), 10,
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
    STATE(40), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(50), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(121), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(232), 10,
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
    STATE(39), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(50), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(121), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(232), 10,
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
    STATE(7), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(43), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(121), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(232), 10,
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
    STATE(265), 1,
      aux_sym_flag_rule_repeat1,
    STATE(456), 1,
      sym_caret_path,
    STATE(68), 2,
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
  [503] = 4,
    ACTIONS(81), 1,
      aux_sym_sequence_token1,
    ACTIONS(83), 1,
      aux_sym_cardinality_token1,
    STATE(13), 1,
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
  [542] = 13,
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
    STATE(265), 1,
      aux_sym_flag_rule_repeat1,
    STATE(456), 1,
      sym_caret_path,
    STATE(68), 2,
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
  [599] = 4,
    ACTIONS(87), 1,
      aux_sym_sequence_token1,
    ACTIONS(90), 1,
      aux_sym_cardinality_token1,
    STATE(13), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 27,
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
    STATE(37), 2,
      sym_mapping_metadata,
      aux_sym_mapping_repeat1,
    STATE(87), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(231), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    STATE(100), 5,
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
  [724] = 1,
    ACTIONS(106), 29,
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
  [756] = 2,
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
  [790] = 11,
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
    STATE(15), 2,
      sym_mapping_metadata,
      aux_sym_mapping_repeat1,
    STATE(93), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(231), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    STATE(100), 5,
      sym_description,
      sym_id,
      sym_source,
      sym_target,
      sym_title,
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
  [842] = 2,
    ACTIONS(114), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
    ACTIONS(106), 26,
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
    ACTIONS(119), 1,
      anon_sym_Instance,
    ACTIONS(117), 27,
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
  [908] = 2,
    ACTIONS(123), 1,
      anon_sym_Instance,
    ACTIONS(121), 27,
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
  [941] = 2,
    ACTIONS(75), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
    ACTIONS(106), 26,
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
  [974] = 11,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(127), 1,
      anon_sym_Instance,
    ACTIONS(129), 1,
      anon_sym_InstanceOf,
    ACTIONS(131), 1,
      anon_sym_Usage,
    ACTIONS(133), 1,
      anon_sym_STAR,
    STATE(48), 2,
      sym_instance_metadata,
      aux_sym_instance_repeat1,
    STATE(111), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(255), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    STATE(118), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(125), 10,
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
  [1024] = 11,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(129), 1,
      anon_sym_InstanceOf,
    ACTIONS(131), 1,
      anon_sym_Usage,
    ACTIONS(133), 1,
      anon_sym_STAR,
    ACTIONS(137), 1,
      anon_sym_Instance,
    STATE(23), 2,
      sym_instance_metadata,
      aux_sym_instance_repeat1,
    STATE(90), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(255), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    STATE(118), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(135), 10,
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
  [1074] = 18,
    ACTIONS(141), 1,
      anon_sym_POUND,
    ACTIONS(143), 1,
      aux_sym_sequence_token1,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(149), 1,
      sym_number,
    ACTIONS(151), 1,
      sym_date,
    ACTIONS(153), 1,
      sym_time,
    ACTIONS(155), 1,
      anon_sym_Reference,
    ACTIONS(157), 1,
      anon_sym_Canonical,
    STATE(108), 1,
      sym_code,
    STATE(139), 1,
      aux_sym_sequence_repeat1,
    STATE(164), 1,
      sym_reference,
    STATE(203), 1,
      sym_quantity,
    STATE(220), 1,
      sym_sequence,
    STATE(234), 1,
      sym_value,
    STATE(438), 1,
      sym_ratio_part,
    ACTIONS(139), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(227), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [1137] = 5,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(27), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(245), 2,
      sym_sd_rule,
      sym_add_element_rule,
    STATE(232), 10,
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
    ACTIONS(159), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1174] = 5,
    ACTIONS(163), 1,
      anon_sym_STAR,
    STATE(27), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(245), 2,
      sym_sd_rule,
      sym_add_element_rule,
    STATE(232), 10,
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
    ACTIONS(161), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1211] = 5,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(27), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(245), 2,
      sym_sd_rule,
      sym_add_element_rule,
    STATE(232), 10,
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
    ACTIONS(166), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1248] = 5,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(27), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(245), 2,
      sym_sd_rule,
      sym_add_element_rule,
    STATE(232), 10,
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
  [1285] = 5,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(27), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(245), 2,
      sym_sd_rule,
      sym_add_element_rule,
    STATE(232), 10,
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
  [1322] = 18,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(151), 1,
      sym_date,
    ACTIONS(153), 1,
      sym_time,
    ACTIONS(155), 1,
      anon_sym_Reference,
    ACTIONS(157), 1,
      anon_sym_Canonical,
    ACTIONS(168), 1,
      anon_sym_POUND,
    ACTIONS(170), 1,
      aux_sym_sequence_token1,
    ACTIONS(172), 1,
      sym_number,
    STATE(108), 1,
      sym_code,
    STATE(113), 1,
      aux_sym_sequence_repeat1,
    STATE(164), 1,
      sym_reference,
    STATE(184), 1,
      sym_sequence,
    STATE(203), 1,
      sym_quantity,
    STATE(217), 1,
      sym_value,
    STATE(472), 1,
      sym_ratio_part,
    ACTIONS(139), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(227), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [1385] = 18,
    ACTIONS(141), 1,
      anon_sym_POUND,
    ACTIONS(143), 1,
      aux_sym_sequence_token1,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(149), 1,
      sym_number,
    ACTIONS(151), 1,
      sym_date,
    ACTIONS(153), 1,
      sym_time,
    ACTIONS(155), 1,
      anon_sym_Reference,
    ACTIONS(157), 1,
      anon_sym_Canonical,
    STATE(108), 1,
      sym_code,
    STATE(139), 1,
      aux_sym_sequence_repeat1,
    STATE(164), 1,
      sym_reference,
    STATE(203), 1,
      sym_quantity,
    STATE(220), 1,
      sym_sequence,
    STATE(240), 1,
      sym_value,
    STATE(438), 1,
      sym_ratio_part,
    ACTIONS(139), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(227), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [1448] = 18,
    ACTIONS(141), 1,
      anon_sym_POUND,
    ACTIONS(143), 1,
      aux_sym_sequence_token1,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(149), 1,
      sym_number,
    ACTIONS(151), 1,
      sym_date,
    ACTIONS(153), 1,
      sym_time,
    ACTIONS(155), 1,
      anon_sym_Reference,
    ACTIONS(157), 1,
      anon_sym_Canonical,
    STATE(108), 1,
      sym_code,
    STATE(139), 1,
      aux_sym_sequence_repeat1,
    STATE(164), 1,
      sym_reference,
    STATE(203), 1,
      sym_quantity,
    STATE(220), 1,
      sym_sequence,
    STATE(254), 1,
      sym_value,
    STATE(438), 1,
      sym_ratio_part,
    ACTIONS(139), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(227), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [1511] = 9,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(176), 1,
      anon_sym_Id,
    ACTIONS(178), 1,
      anon_sym_STAR,
    STATE(35), 2,
      sym_vs_metadata,
      aux_sym_valueset_repeat1,
    STATE(102), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(172), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(237), 3,
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
  [1555] = 9,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(176), 1,
      anon_sym_Id,
    ACTIONS(178), 1,
      anon_sym_STAR,
    STATE(69), 2,
      sym_vs_metadata,
      aux_sym_valueset_repeat1,
    STATE(104), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(172), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(237), 3,
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
  [1599] = 2,
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
  [1628] = 8,
    ACTIONS(188), 1,
      anon_sym_Description,
    ACTIONS(191), 1,
      anon_sym_Id,
    ACTIONS(194), 1,
      anon_sym_Source,
    ACTIONS(197), 1,
      anon_sym_Target,
    ACTIONS(200), 1,
      anon_sym_Title,
    STATE(37), 2,
      sym_mapping_metadata,
      aux_sym_mapping_repeat1,
    STATE(100), 5,
      sym_description,
      sym_id,
      sym_source,
      sym_target,
      sym_title,
    ACTIONS(186), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [1669] = 4,
    ACTIONS(205), 1,
      anon_sym_STAR,
    STATE(38), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(232), 10,
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
    ACTIONS(203), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1702] = 4,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(38), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(232), 10,
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
    ACTIONS(208), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1735] = 4,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(38), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(232), 10,
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
    ACTIONS(210), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1768] = 10,
    ACTIONS(216), 1,
      anon_sym_POUND,
    ACTIONS(218), 1,
      aux_sym_sequence_token1,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    STATE(108), 1,
      sym_code,
    STATE(229), 1,
      sym_vs_filter_value,
    STATE(366), 1,
      aux_sym_sequence_repeat1,
    STATE(487), 1,
      sym_sequence,
    ACTIONS(214), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(228), 2,
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
  [1813] = 2,
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
  [1842] = 4,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(38), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(232), 10,
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
  [1875] = 2,
    ACTIONS(228), 1,
      anon_sym_Instance,
    ACTIONS(226), 22,
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
  [1903] = 9,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(176), 1,
      anon_sym_Id,
    ACTIONS(232), 1,
      anon_sym_STAR,
    STATE(243), 1,
      sym_code_caret_value_rule,
    STATE(64), 2,
      sym_cs_metadata,
      aux_sym_codesystem_repeat1,
    STATE(159), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(170), 3,
      sym_description,
      sym_id,
      sym_title,
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
  [1945] = 9,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(176), 1,
      anon_sym_Id,
    ACTIONS(232), 1,
      anon_sym_STAR,
    STATE(243), 1,
      sym_code_caret_value_rule,
    STATE(45), 2,
      sym_cs_metadata,
      aux_sym_codesystem_repeat1,
    STATE(163), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(170), 3,
      sym_description,
      sym_id,
      sym_title,
    ACTIONS(234), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1987] = 12,
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
    ACTIONS(236), 1,
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
  [2034] = 8,
    ACTIONS(240), 1,
      anon_sym_Instance,
    ACTIONS(242), 1,
      anon_sym_Description,
    ACTIONS(245), 1,
      anon_sym_InstanceOf,
    ACTIONS(248), 1,
      anon_sym_Title,
    ACTIONS(251), 1,
      anon_sym_Usage,
    STATE(48), 2,
      sym_instance_metadata,
      aux_sym_instance_repeat1,
    STATE(118), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(238), 11,
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
  [2073] = 12,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    ACTIONS(256), 1,
      anon_sym_Alias,
    ACTIONS(259), 1,
      anon_sym_Profile,
    ACTIONS(262), 1,
      anon_sym_Extension,
    ACTIONS(265), 1,
      anon_sym_Invariant,
    ACTIONS(268), 1,
      anon_sym_Instance,
    ACTIONS(271), 1,
      anon_sym_ValueSet,
    ACTIONS(274), 1,
      anon_sym_CodeSystem,
    ACTIONS(277), 1,
      anon_sym_Mapping,
    ACTIONS(280), 1,
      anon_sym_Logical,
    ACTIONS(283), 1,
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
  [2120] = 7,
    ACTIONS(288), 1,
      anon_sym_Description,
    ACTIONS(291), 1,
      anon_sym_Id,
    ACTIONS(294), 1,
      anon_sym_Parent,
    ACTIONS(297), 1,
      anon_sym_Title,
    STATE(50), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(121), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    ACTIONS(286), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2157] = 3,
    STATE(51), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(302), 6,
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
  [2185] = 3,
    STATE(56), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(73), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    ACTIONS(305), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2213] = 7,
    ACTIONS(309), 1,
      anon_sym_Description,
    ACTIONS(312), 1,
      anon_sym_Expression,
    ACTIONS(315), 1,
      anon_sym_Severity,
    ACTIONS(318), 1,
      anon_sym_XPath,
    STATE(53), 2,
      sym_invariant_metadata,
      aux_sym_invariant_repeat1,
    STATE(171), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
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
  [2249] = 8,
    ACTIONS(218), 1,
      aux_sym_sequence_token1,
    ACTIONS(323), 1,
      anon_sym_COLON,
    ACTIONS(325), 1,
      anon_sym_POUND,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    STATE(366), 1,
      aux_sym_sequence_repeat1,
    STATE(484), 1,
      sym_sequence,
    STATE(130), 2,
      sym_code,
      sym_unit,
    ACTIONS(321), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2287] = 7,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(331), 1,
      anon_sym_Expression,
    ACTIONS(333), 1,
      anon_sym_Severity,
    ACTIONS(335), 1,
      anon_sym_XPath,
    STATE(53), 2,
      sym_invariant_metadata,
      aux_sym_invariant_repeat1,
    STATE(171), 4,
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
  [2323] = 3,
    STATE(51), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(73), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    ACTIONS(337), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2351] = 3,
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
  [2379] = 3,
    ACTIONS(347), 1,
      anon_sym_STAR,
    ACTIONS(349), 2,
      aux_sym_cardinality_token1,
      anon_sym_STAR2,
    ACTIONS(345), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [2407] = 3,
    STATE(51), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(73), 6,
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
  [2435] = 3,
    STATE(59), 2,
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
  [2463] = 7,
    ACTIONS(168), 1,
      anon_sym_POUND,
    ACTIONS(218), 1,
      aux_sym_sequence_token1,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    STATE(366), 1,
      aux_sym_sequence_repeat1,
    STATE(486), 1,
      sym_sequence,
    STATE(130), 2,
      sym_code,
      sym_unit,
    ACTIONS(323), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2498] = 3,
    STATE(51), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(73), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
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
  [2525] = 3,
    STATE(51), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(73), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    ACTIONS(357), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2552] = 6,
    ACTIONS(361), 1,
      anon_sym_Description,
    ACTIONS(364), 1,
      anon_sym_Id,
    ACTIONS(367), 1,
      anon_sym_Title,
    STATE(64), 2,
      sym_cs_metadata,
      aux_sym_codesystem_repeat1,
    STATE(170), 3,
      sym_description,
      sym_id,
      sym_title,
    ACTIONS(359), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2585] = 2,
    ACTIONS(372), 1,
      anon_sym_Instance,
    ACTIONS(370), 19,
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
  [2610] = 8,
    ACTIONS(218), 1,
      aux_sym_sequence_token1,
    ACTIONS(323), 1,
      anon_sym_COLON,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    ACTIONS(374), 1,
      anon_sym_POUND,
    STATE(366), 1,
      aux_sym_sequence_repeat1,
    STATE(483), 1,
      sym_sequence,
    STATE(130), 2,
      sym_code,
      sym_unit,
    ACTIONS(321), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2647] = 3,
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
      anon_sym_STAR,
  [2674] = 3,
    STATE(51), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(73), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
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
  [2701] = 6,
    ACTIONS(382), 1,
      anon_sym_Description,
    ACTIONS(385), 1,
      anon_sym_Id,
    ACTIONS(388), 1,
      anon_sym_Title,
    STATE(69), 2,
      sym_vs_metadata,
      aux_sym_valueset_repeat1,
    STATE(172), 3,
      sym_description,
      sym_id,
      sym_title,
    ACTIONS(380), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2734] = 3,
    ACTIONS(391), 1,
      aux_sym_sequence_token1,
    STATE(75), 1,
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
  [2760] = 1,
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
  [2782] = 8,
    ACTIONS(218), 1,
      aux_sym_sequence_token1,
    ACTIONS(396), 1,
      anon_sym_POUND,
    ACTIONS(398), 1,
      anon_sym_DQUOTE,
    STATE(92), 1,
      sym_string,
    STATE(236), 1,
      sym_code,
    STATE(366), 1,
      aux_sym_sequence_repeat1,
    STATE(482), 1,
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
  [2818] = 7,
    ACTIONS(141), 1,
      anon_sym_POUND,
    ACTIONS(218), 1,
      aux_sym_sequence_token1,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    STATE(366), 1,
      aux_sym_sequence_repeat1,
    STATE(485), 1,
      sym_sequence,
    STATE(130), 2,
      sym_code,
      sym_unit,
    ACTIONS(323), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2852] = 1,
    ACTIONS(400), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2874] = 3,
    ACTIONS(402), 1,
      aux_sym_sequence_token1,
    STATE(75), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2900] = 1,
    ACTIONS(405), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2922] = 8,
    ACTIONS(218), 1,
      aux_sym_sequence_token1,
    ACTIONS(396), 1,
      anon_sym_POUND,
    ACTIONS(398), 1,
      anon_sym_DQUOTE,
    STATE(109), 1,
      sym_string,
    STATE(235), 1,
      sym_code,
    STATE(366), 1,
      aux_sym_sequence_repeat1,
    STATE(482), 1,
      sym_sequence,
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
      anon_sym_STAR,
  [2958] = 3,
    ACTIONS(409), 1,
      aux_sym_sequence_token1,
    STATE(79), 1,
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
  [2984] = 3,
    ACTIONS(411), 1,
      aux_sym_sequence_token1,
    STATE(79), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3010] = 1,
    ACTIONS(414), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3031] = 2,
    ACTIONS(418), 1,
      aux_sym_sequence_token1,
    ACTIONS(416), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3054] = 4,
    ACTIONS(90), 1,
      anon_sym_Instance,
    ACTIONS(420), 1,
      aux_sym_sequence_token1,
    STATE(82), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 15,
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
  [3081] = 4,
    ACTIONS(83), 1,
      anon_sym_Instance,
    ACTIONS(423), 1,
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
  [3108] = 3,
    ACTIONS(425), 1,
      aux_sym_sequence_token1,
    STATE(84), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3133] = 3,
    ACTIONS(428), 1,
      aux_sym_sequence_token1,
    STATE(84), 1,
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
  [3158] = 3,
    ACTIONS(430), 1,
      aux_sym_sequence_token1,
    STATE(86), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 15,
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
    ACTIONS(104), 1,
      anon_sym_STAR,
    STATE(98), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(231), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
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
  [3208] = 3,
    ACTIONS(435), 1,
      aux_sym_sequence_token1,
    STATE(88), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3232] = 3,
    ACTIONS(438), 1,
      aux_sym_sequence_token1,
    STATE(95), 1,
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
  [3256] = 4,
    ACTIONS(133), 1,
      anon_sym_STAR,
    STATE(101), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(255), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
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
  [3282] = 10,
    ACTIONS(155), 1,
      anon_sym_Reference,
    ACTIONS(157), 1,
      anon_sym_Canonical,
    ACTIONS(440), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(204), 1,
      sym_reference,
    STATE(314), 1,
      sym_target_type,
    STATE(321), 1,
      aux_sym_sequence_repeat1,
    STATE(106), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    STATE(202), 2,
      sym_name,
      sym_canonical,
    ACTIONS(442), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [3320] = 6,
    ACTIONS(218), 1,
      aux_sym_sequence_token1,
    ACTIONS(396), 1,
      anon_sym_POUND,
    STATE(235), 1,
      sym_code,
    STATE(366), 1,
      aux_sym_sequence_repeat1,
    STATE(482), 1,
      sym_sequence,
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
      anon_sym_STAR,
  [3350] = 4,
    ACTIONS(104), 1,
      anon_sym_STAR,
    STATE(98), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(231), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
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
  [3376] = 3,
    ACTIONS(444), 1,
      aux_sym_sequence_token1,
    STATE(94), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3400] = 3,
    ACTIONS(447), 1,
      aux_sym_sequence_token1,
    STATE(95), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3424] = 3,
    ACTIONS(450), 1,
      aux_sym_sequence_token1,
    STATE(94), 1,
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
  [3448] = 3,
    ACTIONS(452), 1,
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
  [3472] = 4,
    ACTIONS(456), 1,
      anon_sym_STAR,
    STATE(98), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(231), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    ACTIONS(454), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3498] = 15,
    ACTIONS(67), 1,
      anon_sym_CARET,
    ACTIONS(459), 1,
      anon_sym_insert,
    ACTIONS(463), 1,
      anon_sym_codes,
    ACTIONS(465), 1,
      anon_sym_system,
    ACTIONS(467), 1,
      anon_sym_POUND,
    ACTIONS(469), 1,
      aux_sym_sequence_token1,
    STATE(108), 1,
      sym_code,
    STATE(162), 1,
      sym_code_string,
    STATE(277), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(287), 1,
      aux_sym_sequence_repeat1,
    STATE(399), 1,
      sym_path,
    STATE(405), 1,
      sym_sequence,
    STATE(461), 1,
      sym_caret_path,
    ACTIONS(461), 2,
      anon_sym_include,
      anon_sym_exclude,
    STATE(242), 2,
      sym_vs_concept_component,
      sym_vs_filter_component,
  [3546] = 1,
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
  [3566] = 4,
    ACTIONS(475), 1,
      anon_sym_STAR,
    STATE(101), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(255), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    ACTIONS(473), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3592] = 4,
    ACTIONS(178), 1,
      anon_sym_STAR,
    STATE(105), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(237), 3,
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
  [3618] = 3,
    ACTIONS(478), 1,
      aux_sym_sequence_token1,
    STATE(88), 1,
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
  [3642] = 4,
    ACTIONS(178), 1,
      anon_sym_STAR,
    STATE(105), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(237), 3,
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
  [3668] = 4,
    ACTIONS(484), 1,
      anon_sym_STAR,
    STATE(105), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(237), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
    ACTIONS(482), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3694] = 10,
    ACTIONS(155), 1,
      anon_sym_Reference,
    ACTIONS(157), 1,
      anon_sym_Canonical,
    ACTIONS(440), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(204), 1,
      sym_reference,
    STATE(321), 1,
      aux_sym_sequence_repeat1,
    STATE(329), 1,
      sym_target_type,
    STATE(202), 2,
      sym_name,
      sym_canonical,
    STATE(256), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(442), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [3732] = 1,
    ACTIONS(487), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3752] = 3,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    STATE(173), 1,
      sym_string,
    ACTIONS(489), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3776] = 6,
    ACTIONS(218), 1,
      aux_sym_sequence_token1,
    ACTIONS(396), 1,
      anon_sym_POUND,
    STATE(252), 1,
      sym_code,
    STATE(366), 1,
      aux_sym_sequence_repeat1,
    STATE(482), 1,
      sym_sequence,
    ACTIONS(491), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [3806] = 1,
    ACTIONS(493), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3826] = 4,
    ACTIONS(133), 1,
      anon_sym_STAR,
    STATE(101), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(255), 3,
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
    ACTIONS(85), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3875] = 3,
    ACTIONS(500), 1,
      aux_sym_sequence_token1,
    STATE(134), 1,
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
  [3898] = 2,
    ACTIONS(504), 1,
      anon_sym_Instance,
    ACTIONS(502), 15,
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
  [3919] = 3,
    ACTIONS(506), 1,
      aux_sym_sequence_token1,
    STATE(116), 1,
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
  [3942] = 3,
    ACTIONS(508), 1,
      aux_sym_sequence_token1,
    STATE(116), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3965] = 2,
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
  [3986] = 2,
    ACTIONS(517), 1,
      anon_sym_Instance,
    ACTIONS(515), 15,
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
  [4007] = 3,
    ACTIONS(519), 1,
      aux_sym_sequence_token1,
    STATE(120), 1,
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
  [4030] = 3,
    ACTIONS(521), 1,
      aux_sym_sequence_token1,
    STATE(120), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 14,
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
  [4053] = 1,
    ACTIONS(524), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [4072] = 3,
    ACTIONS(526), 1,
      aux_sym_sequence_token1,
    STATE(122), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4095] = 3,
    ACTIONS(529), 1,
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
      anon_sym_and,
      anon_sym_where,
  [4118] = 3,
    ACTIONS(531), 1,
      aux_sym_sequence_token1,
    STATE(124), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4141] = 3,
    ACTIONS(534), 1,
      aux_sym_sequence_token1,
    STATE(124), 1,
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
  [4164] = 4,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(251), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(536), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [4189] = 4,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(238), 2,
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
  [4214] = 4,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(248), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(540), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [4239] = 1,
    ACTIONS(542), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [4258] = 3,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    STATE(189), 1,
      sym_string,
    ACTIONS(544), 14,
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
  [4281] = 3,
    ACTIONS(546), 1,
      aux_sym_sequence_token1,
    STATE(133), 1,
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
  [4304] = 3,
    ACTIONS(548), 1,
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
      anon_sym_insert,
      anon_sym_DASH_GT,
  [4327] = 3,
    ACTIONS(550), 1,
      aux_sym_sequence_token1,
    STATE(133), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 14,
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
  [4350] = 3,
    ACTIONS(553), 1,
      aux_sym_sequence_token1,
    STATE(134), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4373] = 3,
    ACTIONS(558), 1,
      anon_sym_and,
    STATE(142), 1,
      aux_sym_obeys_rule_repeat1,
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
      anon_sym_STAR,
      anon_sym_where,
  [4395] = 1,
    ACTIONS(560), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4413] = 3,
    ACTIONS(562), 1,
      aux_sym_sequence_token1,
    STATE(154), 1,
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
  [4435] = 3,
    ACTIONS(564), 1,
      aux_sym_sequence_token1,
    STATE(138), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4457] = 3,
    ACTIONS(567), 1,
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
      anon_sym_POUND,
  [4479] = 3,
    ACTIONS(569), 1,
      aux_sym_sequence_token1,
    STATE(140), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4501] = 3,
    ACTIONS(572), 1,
      aux_sym_sequence_token1,
    STATE(140), 1,
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
  [4523] = 3,
    ACTIONS(576), 1,
      anon_sym_and,
    STATE(142), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(574), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4545] = 3,
    ACTIONS(579), 1,
      aux_sym_sequence_token1,
    STATE(146), 1,
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
  [4567] = 3,
    ACTIONS(558), 1,
      anon_sym_and,
    STATE(135), 1,
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
  [4589] = 2,
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
  [4609] = 3,
    ACTIONS(583), 1,
      aux_sym_sequence_token1,
    STATE(146), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4631] = 2,
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
  [4651] = 1,
    ACTIONS(586), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4669] = 1,
    ACTIONS(588), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4687] = 1,
    ACTIONS(590), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4705] = 1,
    ACTIONS(592), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4723] = 3,
    ACTIONS(594), 1,
      aux_sym_sequence_token1,
    STATE(161), 1,
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
  [4745] = 1,
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
  [4763] = 3,
    ACTIONS(598), 1,
      aux_sym_sequence_token1,
    STATE(154), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4785] = 1,
    ACTIONS(601), 15,
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
  [4803] = 4,
    ACTIONS(605), 1,
      anon_sym_STAR,
    STATE(243), 1,
      sym_code_caret_value_rule,
    STATE(156), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    ACTIONS(603), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [4827] = 2,
    STATE(142), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(556), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4847] = 1,
    ACTIONS(608), 15,
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
  [4865] = 4,
    ACTIONS(232), 1,
      anon_sym_STAR,
    STATE(243), 1,
      sym_code_caret_value_rule,
    STATE(156), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    ACTIONS(610), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [4889] = 2,
    STATE(157), 1,
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
  [4909] = 3,
    ACTIONS(612), 1,
      aux_sym_sequence_token1,
    STATE(161), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4931] = 4,
    ACTIONS(617), 1,
      anon_sym_from,
    ACTIONS(619), 1,
      anon_sym_and,
    STATE(250), 1,
      sym_vs_component_from,
    ACTIONS(615), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [4955] = 4,
    ACTIONS(232), 1,
      anon_sym_STAR,
    STATE(243), 1,
      sym_code_caret_value_rule,
    STATE(156), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
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
  [4979] = 3,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    STATE(212), 1,
      sym_string,
    ACTIONS(321), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5001] = 1,
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
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [5019] = 1,
    ACTIONS(623), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5037] = 1,
    ACTIONS(625), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5055] = 3,
    ACTIONS(627), 1,
      aux_sym_sequence_token1,
    STATE(168), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5077] = 3,
    ACTIONS(630), 1,
      aux_sym_sequence_token1,
    STATE(168), 1,
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
  [5099] = 1,
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
      anon_sym_Id,
      anon_sym_Title,
      anon_sym_STAR,
  [5117] = 1,
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
  [5135] = 1,
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
  [5153] = 1,
    ACTIONS(638), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5171] = 3,
    ACTIONS(642), 1,
      anon_sym_and,
    STATE(181), 1,
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
  [5192] = 3,
    ACTIONS(646), 1,
      anon_sym_and,
    STATE(180), 1,
      aux_sym_obeys_rule_repeat1,
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
  [5213] = 3,
    ACTIONS(650), 1,
      anon_sym_and,
    STATE(176), 1,
      aux_sym_contains_rule_repeat1,
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
  [5234] = 3,
    ACTIONS(655), 1,
      anon_sym_and,
    STATE(182), 1,
      aux_sym_vs_filter_list_repeat1,
    ACTIONS(653), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5255] = 1,
    ACTIONS(657), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5272] = 3,
    ACTIONS(661), 1,
      anon_sym_or,
    STATE(191), 1,
      aux_sym_only_rule_repeat1,
    ACTIONS(659), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5293] = 3,
    ACTIONS(646), 1,
      anon_sym_and,
    STATE(197), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(663), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5314] = 3,
    ACTIONS(642), 1,
      anon_sym_and,
    STATE(176), 1,
      aux_sym_contains_rule_repeat1,
    ACTIONS(665), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5335] = 3,
    ACTIONS(655), 1,
      anon_sym_and,
    STATE(196), 1,
      aux_sym_vs_filter_list_repeat1,
    ACTIONS(667), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5356] = 2,
    STATE(187), 1,
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
  [5375] = 2,
    ACTIONS(669), 1,
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
  [5394] = 3,
    ACTIONS(646), 1,
      anon_sym_and,
    STATE(197), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(556), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5415] = 3,
    ACTIONS(646), 1,
      anon_sym_and,
    STATE(185), 1,
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
  [5436] = 2,
    STATE(197), 1,
      aux_sym_obeys_rule_repeat1,
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
      anon_sym_STAR,
      anon_sym_and,
  [5455] = 3,
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
  [5476] = 1,
    ACTIONS(671), 14,
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
  [5493] = 1,
    ACTIONS(673), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5510] = 3,
    ACTIONS(675), 1,
      anon_sym_or,
    STATE(191), 1,
      aux_sym_only_rule_repeat1,
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
  [5531] = 3,
    ACTIONS(678), 1,
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
  [5552] = 3,
    ACTIONS(680), 1,
      aux_sym_sequence_token1,
    STATE(193), 1,
      aux_sym_sequence_repeat1,
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
      anon_sym_STAR,
  [5573] = 3,
    ACTIONS(55), 1,
      anon_sym_insert,
    ACTIONS(683), 1,
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
  [5594] = 3,
    ACTIONS(646), 1,
      anon_sym_and,
    STATE(197), 1,
      aux_sym_obeys_rule_repeat1,
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
  [5615] = 3,
    ACTIONS(687), 1,
      anon_sym_and,
    STATE(196), 1,
      aux_sym_vs_filter_list_repeat1,
    ACTIONS(685), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5636] = 3,
    ACTIONS(690), 1,
      anon_sym_and,
    STATE(197), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(574), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5657] = 2,
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
  [5676] = 1,
    ACTIONS(574), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5693] = 2,
    ACTIONS(699), 1,
      anon_sym_and,
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
      anon_sym_STAR,
      anon_sym_where,
  [5712] = 2,
    ACTIONS(701), 1,
      anon_sym_and,
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
      anon_sym_STAR,
      anon_sym_where,
  [5731] = 1,
    ACTIONS(703), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5748] = 2,
    ACTIONS(323), 1,
      anon_sym_COLON,
    ACTIONS(321), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5767] = 1,
    ACTIONS(705), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5784] = 3,
    ACTIONS(661), 1,
      anon_sym_or,
    STATE(179), 1,
      aux_sym_only_rule_repeat1,
    ACTIONS(707), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5805] = 2,
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
  [5824] = 2,
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
  [5843] = 3,
    ACTIONS(711), 1,
      anon_sym_LPAREN,
    STATE(233), 1,
      sym_strength,
    ACTIONS(709), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5864] = 3,
    ACTIONS(646), 1,
      anon_sym_and,
    STATE(195), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(713), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5885] = 3,
    ACTIONS(715), 1,
      aux_sym_sequence_token1,
    STATE(210), 1,
      aux_sym_sequence_repeat1,
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
      anon_sym_POUND,
  [5906] = 3,
    ACTIONS(718), 1,
      aux_sym_sequence_token1,
    STATE(210), 1,
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
  [5927] = 1,
    ACTIONS(720), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5943] = 1,
    ACTIONS(722), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5959] = 3,
    ACTIONS(724), 1,
      aux_sym_sequence_token1,
    STATE(214), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [5979] = 1,
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
  [5995] = 2,
    ACTIONS(727), 1,
      anon_sym_and,
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
  [6013] = 2,
    ACTIONS(731), 1,
      anon_sym_LPAREN,
    ACTIONS(729), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6031] = 3,
    ACTIONS(733), 1,
      aux_sym_sequence_token1,
    STATE(214), 1,
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
  [6051] = 2,
    ACTIONS(737), 1,
      anon_sym_where,
    ACTIONS(735), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6069] = 2,
    ACTIONS(739), 1,
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
  [6087] = 2,
    ACTIONS(741), 1,
      anon_sym_and,
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
  [6105] = 1,
    ACTIONS(323), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6121] = 1,
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
  [6137] = 1,
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
  [6153] = 1,
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
  [6169] = 1,
    ACTIONS(685), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6185] = 1,
    ACTIONS(321), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6201] = 1,
    ACTIONS(749), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6217] = 1,
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
      anon_sym_STAR,
      anon_sym_and,
  [6233] = 1,
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
  [6248] = 1,
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
  [6263] = 1,
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
  [6278] = 1,
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
  [6293] = 1,
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
  [6308] = 1,
    ACTIONS(491), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6323] = 1,
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
      anon_sym_STAR,
  [6338] = 1,
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
  [6353] = 1,
    ACTIONS(540), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6368] = 1,
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
  [6383] = 1,
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
  [6398] = 2,
    ACTIONS(771), 1,
      anon_sym_POUND,
    ACTIONS(769), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [6415] = 1,
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
  [6430] = 1,
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
  [6445] = 1,
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
  [6460] = 1,
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
  [6475] = 1,
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
  [6490] = 1,
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
  [6505] = 1,
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
  [6520] = 1,
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
  [6535] = 1,
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
  [6550] = 1,
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
  [6565] = 1,
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
  [6580] = 1,
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
  [6595] = 1,
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
  [6610] = 1,
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
  [6625] = 4,
    ACTIONS(799), 1,
      aux_sym_sequence_token1,
    ACTIONS(300), 2,
      anon_sym_Reference,
      anon_sym_Canonical,
    STATE(256), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(801), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [6645] = 4,
    ACTIONS(341), 1,
      aux_sym_sequence_token1,
    ACTIONS(804), 1,
      aux_sym_cardinality_token1,
    ACTIONS(806), 1,
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
  [6665] = 4,
    ACTIONS(347), 1,
      aux_sym_sequence_token1,
    ACTIONS(808), 1,
      aux_sym_cardinality_token1,
    ACTIONS(810), 1,
      anon_sym_STAR2,
    ACTIONS(345), 8,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [6685] = 1,
    ACTIONS(769), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [6699] = 9,
    ACTIONS(218), 1,
      aux_sym_sequence_token1,
    ACTIONS(463), 1,
      anon_sym_codes,
    ACTIONS(467), 1,
      anon_sym_POUND,
    STATE(108), 1,
      sym_code,
    STATE(162), 1,
      sym_code_string,
    STATE(277), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(366), 1,
      aux_sym_sequence_repeat1,
    STATE(478), 1,
      sym_sequence,
    STATE(247), 2,
      sym_vs_concept_component,
      sym_vs_filter_component,
  [6728] = 6,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(29), 1,
      anon_sym_Id,
    ACTIONS(31), 1,
      anon_sym_Parent,
    ACTIONS(33), 1,
      anon_sym_Title,
    STATE(6), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(121), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
  [6751] = 6,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(331), 1,
      anon_sym_Expression,
    ACTIONS(333), 1,
      anon_sym_Severity,
    ACTIONS(335), 1,
      anon_sym_XPath,
    STATE(55), 2,
      sym_invariant_metadata,
      aux_sym_invariant_repeat1,
    STATE(171), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
  [6774] = 10,
    ACTIONS(67), 1,
      anon_sym_CARET,
    ACTIONS(459), 1,
      anon_sym_insert,
    ACTIONS(465), 1,
      anon_sym_system,
    ACTIONS(812), 1,
      anon_sym_obeys,
    ACTIONS(814), 1,
      aux_sym_sequence_token1,
    STATE(9), 1,
      sym_path,
    STATE(11), 1,
      aux_sym_sequence_repeat1,
    STATE(19), 1,
      sym_sequence,
    STATE(379), 1,
      sym_name,
    STATE(461), 1,
      sym_caret_path,
  [6805] = 10,
    ACTIONS(67), 1,
      anon_sym_CARET,
    ACTIONS(459), 1,
      anon_sym_insert,
    ACTIONS(465), 1,
      anon_sym_system,
    ACTIONS(812), 1,
      anon_sym_obeys,
    ACTIONS(814), 1,
      aux_sym_sequence_token1,
    STATE(11), 1,
      aux_sym_sequence_repeat1,
    STATE(12), 1,
      sym_path,
    STATE(22), 1,
      sym_sequence,
    STATE(379), 1,
      sym_name,
    STATE(461), 1,
      sym_caret_path,
  [6836] = 4,
    ACTIONS(61), 1,
      anon_sym_and,
    STATE(274), 1,
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
  [6855] = 2,
    ACTIONS(816), 1,
      aux_sym_sequence_token1,
    ACTIONS(405), 8,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [6869] = 2,
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
  [6883] = 3,
    ACTIONS(818), 1,
      aux_sym_sequence_token1,
    STATE(268), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 7,
      anon_sym_and,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [6899] = 3,
    ACTIONS(821), 1,
      aux_sym_sequence_token1,
    STATE(268), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 7,
      anon_sym_and,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [6915] = 8,
    ACTIONS(155), 1,
      anon_sym_Reference,
    ACTIONS(157), 1,
      anon_sym_Canonical,
    ACTIONS(440), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(190), 1,
      sym_target_type,
    STATE(204), 1,
      sym_reference,
    STATE(321), 1,
      aux_sym_sequence_repeat1,
    STATE(202), 2,
      sym_name,
      sym_canonical,
  [6941] = 8,
    ACTIONS(155), 1,
      anon_sym_Reference,
    ACTIONS(157), 1,
      anon_sym_Canonical,
    ACTIONS(823), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(143), 1,
      aux_sym_sequence_repeat1,
    STATE(204), 1,
      sym_reference,
    STATE(205), 1,
      sym_target_type,
    STATE(202), 2,
      sym_name,
      sym_canonical,
  [6967] = 8,
    ACTIONS(155), 1,
      anon_sym_Reference,
    ACTIONS(157), 1,
      anon_sym_Canonical,
    ACTIONS(823), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(143), 1,
      aux_sym_sequence_repeat1,
    STATE(190), 1,
      sym_target_type,
    STATE(204), 1,
      sym_reference,
    STATE(202), 2,
      sym_name,
      sym_canonical,
  [6993] = 2,
    ACTIONS(825), 1,
      aux_sym_sequence_token1,
    ACTIONS(400), 8,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7007] = 3,
    ACTIONS(827), 1,
      anon_sym_and,
    STATE(274), 1,
      aux_sym_flag_rule_repeat1,
    ACTIONS(830), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7022] = 7,
    ACTIONS(832), 1,
      anon_sym_POUND,
    ACTIONS(835), 1,
      aux_sym_sequence_token1,
    STATE(108), 1,
      sym_code,
    STATE(275), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(366), 1,
      aux_sym_sequence_repeat1,
    STATE(453), 1,
      sym_code_string,
    STATE(481), 1,
      sym_sequence,
  [7044] = 1,
    ACTIONS(830), 7,
      anon_sym_and,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7054] = 7,
    ACTIONS(218), 1,
      aux_sym_sequence_token1,
    ACTIONS(838), 1,
      anon_sym_POUND,
    STATE(108), 1,
      sym_code,
    STATE(275), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(361), 1,
      sym_code_string,
    STATE(366), 1,
      aux_sym_sequence_repeat1,
    STATE(479), 1,
      sym_sequence,
  [7076] = 7,
    ACTIONS(459), 1,
      anon_sym_insert,
    ACTIONS(465), 1,
      anon_sym_system,
    ACTIONS(840), 1,
      anon_sym_DASH_GT,
    ACTIONS(842), 1,
      aux_sym_sequence_token1,
    STATE(16), 1,
      sym_sequence,
    STATE(132), 1,
      aux_sym_sequence_repeat1,
    STATE(194), 1,
      sym_path,
  [7098] = 3,
    ACTIONS(844), 1,
      aux_sym_sequence_token1,
    STATE(283), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 4,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
  [7111] = 6,
    ACTIONS(459), 1,
      anon_sym_insert,
    ACTIONS(465), 1,
      anon_sym_system,
    ACTIONS(846), 1,
      aux_sym_sequence_token1,
    STATE(16), 1,
      sym_sequence,
    STATE(131), 1,
      aux_sym_sequence_repeat1,
    STATE(188), 1,
      sym_path,
  [7130] = 3,
    ACTIONS(848), 1,
      aux_sym_sequence_token1,
    STATE(281), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 4,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [7143] = 6,
    ACTIONS(851), 1,
      aux_sym_sequence_token1,
    STATE(177), 1,
      sym_vs_filter_definition,
    STATE(249), 1,
      sym_vs_filter_list,
    STATE(290), 1,
      sym_name,
    STATE(400), 1,
      aux_sym_sequence_repeat1,
    STATE(428), 1,
      sym_sequence,
  [7162] = 3,
    ACTIONS(853), 1,
      aux_sym_sequence_token1,
    STATE(283), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 4,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
  [7175] = 3,
    ACTIONS(856), 1,
      aux_sym_sequence_token1,
    STATE(281), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 4,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [7188] = 5,
    ACTIONS(218), 1,
      aux_sym_sequence_token1,
    ACTIONS(858), 1,
      anon_sym_POUND,
    STATE(166), 1,
      sym_code,
    STATE(366), 1,
      aux_sym_sequence_repeat1,
    STATE(469), 1,
      sym_sequence,
  [7204] = 5,
    ACTIONS(860), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(215), 1,
      sym_item,
    STATE(296), 1,
      aux_sym_sequence_repeat1,
    STATE(325), 1,
      sym_name,
  [7220] = 3,
    ACTIONS(862), 1,
      aux_sym_sequence_token1,
    STATE(289), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 3,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_CARET,
  [7232] = 4,
    ACTIONS(90), 1,
      aux_sym_cardinality_token1,
    ACTIONS(864), 1,
      aux_sym_sequence_token1,
    STATE(288), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 2,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [7246] = 3,
    ACTIONS(867), 1,
      aux_sym_sequence_token1,
    STATE(289), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 3,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_CARET,
  [7258] = 5,
    ACTIONS(870), 1,
      anon_sym_EQ,
    ACTIONS(872), 1,
      aux_sym_sequence_token1,
    STATE(41), 1,
      sym_vs_filter_operator,
    STATE(70), 1,
      aux_sym_sequence_repeat1,
    STATE(81), 1,
      sym_sequence,
  [7274] = 3,
    ACTIONS(874), 1,
      aux_sym_sequence_token1,
    STATE(292), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 3,
      anon_sym_from,
      anon_sym_and,
      anon_sym_DQUOTE,
  [7286] = 3,
    ACTIONS(876), 1,
      aux_sym_sequence_token1,
    STATE(292), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 3,
      anon_sym_from,
      anon_sym_and,
      anon_sym_DQUOTE,
  [7298] = 5,
    ACTIONS(218), 1,
      aux_sym_sequence_token1,
    ACTIONS(879), 1,
      anon_sym_POUND,
    STATE(107), 1,
      sym_code,
    STATE(366), 1,
      aux_sym_sequence_repeat1,
    STATE(480), 1,
      sym_sequence,
  [7314] = 5,
    ACTIONS(465), 1,
      anon_sym_system,
    ACTIONS(881), 1,
      aux_sym_sequence_token1,
    STATE(16), 1,
      sym_sequence,
    STATE(269), 1,
      aux_sym_sequence_repeat1,
    STATE(276), 1,
      sym_path,
  [7330] = 5,
    ACTIONS(851), 1,
      aux_sym_sequence_token1,
    STATE(226), 1,
      sym_vs_filter_definition,
    STATE(290), 1,
      sym_name,
    STATE(400), 1,
      aux_sym_sequence_repeat1,
    STATE(428), 1,
      sym_sequence,
  [7346] = 4,
    ACTIONS(83), 1,
      aux_sym_cardinality_token1,
    ACTIONS(883), 1,
      aux_sym_sequence_token1,
    STATE(288), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 2,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [7360] = 5,
    ACTIONS(885), 1,
      anon_sym_POUND,
    ACTIONS(887), 1,
      aux_sym_sequence_token1,
    STATE(211), 1,
      aux_sym_sequence_repeat1,
    STATE(241), 1,
      sym_sequence,
    STATE(259), 1,
      sym_code,
  [7376] = 5,
    ACTIONS(860), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(174), 1,
      sym_item,
    STATE(296), 1,
      aux_sym_sequence_repeat1,
    STATE(325), 1,
      sym_name,
  [7392] = 3,
    ACTIONS(889), 1,
      aux_sym_sequence_token1,
    STATE(299), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE,
  [7404] = 5,
    ACTIONS(218), 1,
      aux_sym_sequence_token1,
    ACTIONS(892), 1,
      anon_sym_POUND,
    STATE(366), 1,
      aux_sym_sequence_repeat1,
    STATE(434), 1,
      sym_code,
    STATE(448), 1,
      sym_sequence,
  [7420] = 3,
    ACTIONS(894), 1,
      aux_sym_sequence_token1,
    STATE(299), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE,
  [7432] = 5,
    ACTIONS(218), 1,
      aux_sym_sequence_token1,
    ACTIONS(896), 1,
      anon_sym_POUND,
    STATE(114), 1,
      sym_code,
    STATE(366), 1,
      aux_sym_sequence_repeat1,
    STATE(477), 1,
      sym_sequence,
  [7448] = 4,
    ACTIONS(898), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(141), 1,
      aux_sym_sequence_repeat1,
    STATE(183), 1,
      sym_name,
  [7461] = 4,
    ACTIONS(898), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(141), 1,
      aux_sym_sequence_repeat1,
    STATE(209), 1,
      sym_name,
  [7474] = 4,
    ACTIONS(900), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(137), 1,
      aux_sym_sequence_repeat1,
    STATE(208), 1,
      sym_name,
  [7487] = 4,
    ACTIONS(902), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(80), 1,
      sym_name,
    STATE(103), 1,
      aux_sym_sequence_repeat1,
  [7500] = 3,
    ACTIONS(904), 1,
      anon_sym_DQUOTE,
    STATE(311), 1,
      aux_sym_string_repeat1,
    ACTIONS(906), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7511] = 4,
    ACTIONS(79), 1,
      anon_sym_DOT_DOT,
    ACTIONS(83), 1,
      aux_sym_cardinality_token1,
    ACTIONS(908), 1,
      aux_sym_sequence_token1,
    STATE(309), 1,
      aux_sym_sequence_repeat1,
  [7524] = 4,
    ACTIONS(85), 1,
      anon_sym_DOT_DOT,
    ACTIONS(90), 1,
      aux_sym_cardinality_token1,
    ACTIONS(910), 1,
      aux_sym_sequence_token1,
    STATE(309), 1,
      aux_sym_sequence_repeat1,
  [7537] = 3,
    ACTIONS(913), 1,
      aux_sym_sequence_token1,
    STATE(312), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [7548] = 3,
    ACTIONS(915), 1,
      anon_sym_DQUOTE,
    STATE(311), 1,
      aux_sym_string_repeat1,
    ACTIONS(917), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7559] = 3,
    ACTIONS(920), 1,
      aux_sym_sequence_token1,
    STATE(312), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [7570] = 3,
    ACTIONS(923), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(339), 1,
      aux_sym_string_repeat1,
    ACTIONS(925), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7581] = 4,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(927), 1,
      anon_sym_or,
    STATE(126), 1,
      sym_string,
    STATE(331), 1,
      aux_sym_only_rule_repeat1,
  [7594] = 4,
    ACTIONS(898), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(141), 1,
      aux_sym_sequence_repeat1,
    STATE(199), 1,
      sym_name,
  [7607] = 3,
    ACTIONS(929), 1,
      aux_sym_sequence_token1,
    STATE(317), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 2,
      anon_sym_and,
      anon_sym_DQUOTE,
  [7618] = 3,
    ACTIONS(931), 1,
      aux_sym_sequence_token1,
    STATE(317), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 2,
      anon_sym_and,
      anon_sym_DQUOTE,
  [7629] = 4,
    ACTIONS(934), 1,
      anon_sym_system,
    ACTIONS(936), 1,
      anon_sym_valueset,
    STATE(216), 1,
      sym_vs_from_valueset,
    STATE(221), 1,
      sym_vs_from_system,
  [7642] = 3,
    ACTIONS(938), 1,
      anon_sym_DQUOTE,
    STATE(322), 1,
      aux_sym_string_repeat1,
    ACTIONS(940), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7653] = 3,
    ACTIONS(942), 1,
      aux_sym_sequence_token1,
    STATE(320), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 2,
      anon_sym_or,
      anon_sym_DQUOTE,
  [7664] = 3,
    ACTIONS(945), 1,
      aux_sym_sequence_token1,
    STATE(320), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 2,
      anon_sym_or,
      anon_sym_DQUOTE,
  [7675] = 3,
    ACTIONS(947), 1,
      anon_sym_DQUOTE,
    STATE(311), 1,
      aux_sym_string_repeat1,
    ACTIONS(906), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7686] = 4,
    ACTIONS(949), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(123), 1,
      aux_sym_sequence_repeat1,
    STATE(199), 1,
      sym_name,
  [7699] = 4,
    ACTIONS(898), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(141), 1,
      aux_sym_sequence_repeat1,
    STATE(178), 1,
      sym_name,
  [7712] = 4,
    ACTIONS(951), 1,
      aux_sym_cardinality_token1,
    ACTIONS(953), 1,
      anon_sym_DOT_DOT,
    ACTIONS(955), 1,
      anon_sym_named,
    STATE(52), 1,
      sym_cardinality,
  [7725] = 4,
    ACTIONS(957), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(83), 1,
      aux_sym_sequence_repeat1,
    STATE(117), 1,
      sym_name,
  [7738] = 4,
    ACTIONS(959), 1,
      anon_sym_RPAREN,
    ACTIONS(961), 1,
      anon_sym_or,
    ACTIONS(963), 1,
      anon_sym_PIPE,
    STATE(413), 1,
      aux_sym_canonical_repeat1,
  [7751] = 4,
    ACTIONS(898), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(141), 1,
      aux_sym_sequence_repeat1,
    STATE(175), 1,
      sym_name,
  [7764] = 4,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(927), 1,
      anon_sym_or,
    STATE(127), 1,
      sym_string,
    STATE(330), 1,
      aux_sym_only_rule_repeat1,
  [7777] = 4,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(927), 1,
      anon_sym_or,
    STATE(128), 1,
      sym_string,
    STATE(410), 1,
      aux_sym_only_rule_repeat1,
  [7790] = 4,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(927), 1,
      anon_sym_or,
    STATE(127), 1,
      sym_string,
    STATE(410), 1,
      aux_sym_only_rule_repeat1,
  [7803] = 3,
    ACTIONS(965), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(313), 1,
      aux_sym_string_repeat1,
    ACTIONS(967), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7814] = 4,
    ACTIONS(949), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(123), 1,
      aux_sym_sequence_repeat1,
    STATE(160), 1,
      sym_name,
  [7827] = 3,
    ACTIONS(969), 1,
      anon_sym_DQUOTE,
    STATE(307), 1,
      aux_sym_string_repeat1,
    ACTIONS(971), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7838] = 4,
    ACTIONS(949), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(123), 1,
      aux_sym_sequence_repeat1,
    STATE(178), 1,
      sym_name,
  [7851] = 4,
    ACTIONS(973), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(78), 1,
      aux_sym_sequence_repeat1,
    STATE(80), 1,
      sym_name,
  [7864] = 3,
    ACTIONS(975), 1,
      anon_sym_DQUOTE,
    STATE(340), 1,
      aux_sym_string_repeat1,
    ACTIONS(977), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7875] = 3,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(44), 2,
      sym_string,
      sym_multiline_string,
  [7886] = 3,
    ACTIONS(915), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(339), 1,
      aux_sym_string_repeat1,
    ACTIONS(979), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7897] = 3,
    ACTIONS(982), 1,
      anon_sym_DQUOTE,
    STATE(311), 1,
      aux_sym_string_repeat1,
    ACTIONS(906), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7908] = 4,
    ACTIONS(984), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(80), 1,
      sym_name,
    STATE(85), 1,
      aux_sym_sequence_repeat1,
  [7921] = 4,
    ACTIONS(984), 1,
      aux_sym_sequence_token1,
    STATE(3), 1,
      sym_name,
    STATE(10), 1,
      sym_sequence,
    STATE(85), 1,
      aux_sym_sequence_repeat1,
  [7934] = 4,
    ACTIONS(984), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(85), 1,
      aux_sym_sequence_repeat1,
    STATE(129), 1,
      sym_name,
  [7947] = 4,
    ACTIONS(984), 1,
      aux_sym_sequence_token1,
    STATE(2), 1,
      sym_name,
    STATE(10), 1,
      sym_sequence,
    STATE(85), 1,
      aux_sym_sequence_repeat1,
  [7960] = 4,
    ACTIONS(973), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(18), 1,
      sym_name,
    STATE(78), 1,
      aux_sym_sequence_repeat1,
  [7973] = 4,
    ACTIONS(986), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(169), 1,
      aux_sym_sequence_repeat1,
    STATE(178), 1,
      sym_name,
  [7986] = 4,
    ACTIONS(949), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(123), 1,
      aux_sym_sequence_repeat1,
    STATE(144), 1,
      sym_name,
  [7999] = 4,
    ACTIONS(988), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(308), 1,
      aux_sym_sequence_repeat1,
    STATE(412), 1,
      sym_name,
  [8012] = 1,
    ACTIONS(990), 4,
      anon_sym_example,
      anon_sym_preferred,
      anon_sym_extensible,
      anon_sym_required,
  [8019] = 4,
    ACTIONS(902), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(46), 1,
      sym_name,
    STATE(103), 1,
      aux_sym_sequence_repeat1,
  [8032] = 4,
    ACTIONS(902), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(34), 1,
      sym_name,
    STATE(103), 1,
      aux_sym_sequence_repeat1,
  [8045] = 4,
    ACTIONS(957), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(24), 1,
      sym_name,
    STATE(83), 1,
      aux_sym_sequence_repeat1,
  [8058] = 4,
    ACTIONS(992), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(262), 1,
      sym_name,
    STATE(284), 1,
      aux_sym_sequence_repeat1,
  [8071] = 4,
    ACTIONS(984), 1,
      aux_sym_sequence_token1,
    STATE(8), 1,
      sym_name,
    STATE(10), 1,
      sym_sequence,
    STATE(85), 1,
      aux_sym_sequence_repeat1,
  [8084] = 4,
    ACTIONS(994), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(261), 1,
      sym_name,
    STATE(279), 1,
      aux_sym_sequence_repeat1,
  [8097] = 4,
    ACTIONS(996), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(178), 1,
      sym_name,
    STATE(192), 1,
      aux_sym_sequence_repeat1,
  [8110] = 4,
    ACTIONS(898), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(141), 1,
      aux_sym_sequence_repeat1,
    STATE(186), 1,
      sym_name,
  [8123] = 4,
    ACTIONS(998), 1,
      anon_sym_system,
    ACTIONS(1000), 1,
      anon_sym_valueset,
    STATE(200), 1,
      sym_vs_from_valueset,
    STATE(201), 1,
      sym_vs_from_system,
  [8136] = 3,
    ACTIONS(1002), 1,
      sym_number,
    STATE(213), 1,
      sym_ratio_part,
    STATE(222), 1,
      sym_quantity,
  [8146] = 3,
    ACTIONS(1004), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(125), 1,
      aux_sym_sequence_repeat1,
  [8156] = 3,
    ACTIONS(617), 1,
      anon_sym_from,
    ACTIONS(619), 1,
      anon_sym_and,
    STATE(239), 1,
      sym_vs_component_from,
  [8166] = 3,
    ACTIONS(1006), 1,
      sym_number,
    STATE(213), 1,
      sym_ratio_part,
    STATE(222), 1,
      sym_quantity,
  [8176] = 3,
    ACTIONS(1008), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(218), 1,
      aux_sym_sequence_repeat1,
  [8186] = 3,
    ACTIONS(1010), 1,
      aux_sym_sequence_token1,
    STATE(382), 1,
      aux_sym_sequence_repeat1,
    STATE(488), 1,
      sym_sequence,
  [8196] = 3,
    ACTIONS(1012), 1,
      aux_sym_sequence_token1,
    STATE(20), 1,
      sym_sequence,
    STATE(115), 1,
      aux_sym_sequence_repeat1,
  [8206] = 3,
    ACTIONS(79), 1,
      anon_sym_POUND,
    ACTIONS(1014), 1,
      aux_sym_sequence_token1,
    STATE(367), 1,
      aux_sym_sequence_repeat1,
  [8216] = 3,
    ACTIONS(85), 1,
      anon_sym_POUND,
    ACTIONS(1016), 1,
      aux_sym_sequence_token1,
    STATE(367), 1,
      aux_sym_sequence_repeat1,
  [8226] = 3,
    ACTIONS(1008), 1,
      aux_sym_sequence_token1,
    STATE(20), 1,
      sym_sequence,
    STATE(218), 1,
      aux_sym_sequence_repeat1,
  [8236] = 3,
    ACTIONS(1012), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(115), 1,
      aux_sym_sequence_repeat1,
  [8246] = 3,
    ACTIONS(1019), 1,
      aux_sym_sequence_token1,
    STATE(20), 1,
      sym_sequence,
    STATE(97), 1,
      aux_sym_sequence_repeat1,
  [8256] = 3,
    ACTIONS(1019), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(97), 1,
      aux_sym_sequence_repeat1,
  [8266] = 3,
    ACTIONS(1021), 1,
      aux_sym_sequence_token1,
    STATE(20), 1,
      sym_sequence,
    STATE(119), 1,
      aux_sym_sequence_repeat1,
  [8276] = 3,
    ACTIONS(1021), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(119), 1,
      aux_sym_sequence_repeat1,
  [8286] = 3,
    ACTIONS(79), 1,
      anon_sym_CARET,
    ACTIONS(1023), 1,
      aux_sym_sequence_token1,
    STATE(375), 1,
      aux_sym_sequence_repeat1,
  [8296] = 3,
    ACTIONS(85), 1,
      anon_sym_CARET,
    ACTIONS(1025), 1,
      aux_sym_sequence_token1,
    STATE(375), 1,
      aux_sym_sequence_repeat1,
  [8306] = 3,
    ACTIONS(1028), 1,
      aux_sym_sequence_token1,
    STATE(301), 1,
      aux_sym_sequence_repeat1,
    STATE(327), 1,
      sym_sequence,
  [8316] = 3,
    ACTIONS(1010), 1,
      aux_sym_sequence_token1,
    STATE(382), 1,
      aux_sym_sequence_repeat1,
    STATE(457), 1,
      sym_sequence,
  [8326] = 3,
    ACTIONS(996), 1,
      aux_sym_sequence_token1,
    STATE(20), 1,
      sym_sequence,
    STATE(192), 1,
      aux_sym_sequence_repeat1,
  [8336] = 3,
    ACTIONS(951), 1,
      aux_sym_cardinality_token1,
    ACTIONS(953), 1,
      anon_sym_DOT_DOT,
    STATE(67), 1,
      sym_cardinality,
  [8346] = 3,
    ACTIONS(996), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(192), 1,
      aux_sym_sequence_repeat1,
  [8356] = 3,
    ACTIONS(1030), 1,
      aux_sym_sequence_token1,
    STATE(20), 1,
      sym_sequence,
    STATE(316), 1,
      aux_sym_sequence_repeat1,
  [8366] = 3,
    ACTIONS(79), 1,
      anon_sym_EQ,
    ACTIONS(1032), 1,
      aux_sym_sequence_token1,
    STATE(397), 1,
      aux_sym_sequence_repeat1,
  [8376] = 3,
    ACTIONS(1030), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(316), 1,
      aux_sym_sequence_repeat1,
  [8386] = 3,
    ACTIONS(1004), 1,
      aux_sym_sequence_token1,
    STATE(20), 1,
      sym_sequence,
    STATE(125), 1,
      aux_sym_sequence_repeat1,
  [8396] = 3,
    ACTIONS(1034), 1,
      aux_sym_sequence_token1,
    STATE(20), 1,
      sym_sequence,
    STATE(152), 1,
      aux_sym_sequence_repeat1,
  [8406] = 3,
    ACTIONS(1034), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(152), 1,
      aux_sym_sequence_repeat1,
  [8416] = 3,
    ACTIONS(973), 1,
      aux_sym_sequence_token1,
    STATE(20), 1,
      sym_sequence,
    STATE(78), 1,
      aux_sym_sequence_repeat1,
  [8426] = 3,
    ACTIONS(973), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(78), 1,
      aux_sym_sequence_repeat1,
  [8436] = 3,
    ACTIONS(1036), 1,
      aux_sym_sequence_token1,
    STATE(20), 1,
      sym_sequence,
    STATE(291), 1,
      aux_sym_sequence_repeat1,
  [8446] = 3,
    ACTIONS(961), 1,
      anon_sym_or,
    ACTIONS(1038), 1,
      anon_sym_RPAREN,
    STATE(398), 1,
      aux_sym_canonical_repeat1,
  [8456] = 3,
    ACTIONS(1036), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(291), 1,
      aux_sym_sequence_repeat1,
  [8466] = 3,
    ACTIONS(1040), 1,
      aux_sym_sequence_token1,
    STATE(310), 1,
      aux_sym_sequence_repeat1,
    STATE(436), 1,
      sym_sequence,
  [8476] = 3,
    ACTIONS(957), 1,
      aux_sym_sequence_token1,
    STATE(20), 1,
      sym_sequence,
    STATE(83), 1,
      aux_sym_sequence_repeat1,
  [8486] = 3,
    ACTIONS(957), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(83), 1,
      aux_sym_sequence_repeat1,
  [8496] = 3,
    ACTIONS(1042), 1,
      aux_sym_sequence_token1,
    STATE(20), 1,
      sym_sequence,
    STATE(89), 1,
      aux_sym_sequence_repeat1,
  [8506] = 3,
    ACTIONS(1042), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(89), 1,
      aux_sym_sequence_repeat1,
  [8516] = 3,
    ACTIONS(85), 1,
      anon_sym_EQ,
    ACTIONS(1044), 1,
      aux_sym_sequence_token1,
    STATE(397), 1,
      aux_sym_sequence_repeat1,
  [8526] = 3,
    ACTIONS(1047), 1,
      anon_sym_RPAREN,
    ACTIONS(1049), 1,
      anon_sym_or,
    STATE(398), 1,
      aux_sym_canonical_repeat1,
  [8536] = 3,
    ACTIONS(55), 1,
      anon_sym_insert,
    ACTIONS(67), 1,
      anon_sym_CARET,
    STATE(456), 1,
      sym_caret_path,
  [8546] = 3,
    ACTIONS(79), 1,
      anon_sym_EQ,
    ACTIONS(1052), 1,
      aux_sym_sequence_token1,
    STATE(397), 1,
      aux_sym_sequence_repeat1,
  [8556] = 3,
    ACTIONS(1055), 1,
      aux_sym_sequence_token1,
    STATE(20), 1,
      sym_sequence,
    STATE(374), 1,
      aux_sym_sequence_repeat1,
  [8566] = 3,
    ACTIONS(961), 1,
      anon_sym_or,
    ACTIONS(1057), 1,
      anon_sym_RPAREN,
    STATE(390), 1,
      aux_sym_canonical_repeat1,
  [8576] = 2,
    ACTIONS(1059), 1,
      anon_sym_PIPE,
    ACTIONS(1047), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [8584] = 3,
    ACTIONS(1061), 1,
      anon_sym_RPAREN,
    ACTIONS(1063), 1,
      anon_sym_or,
    STATE(404), 1,
      aux_sym_reference_repeat1,
  [8594] = 2,
    ACTIONS(1066), 1,
      anon_sym_POUND,
    ACTIONS(106), 2,
      anon_sym_insert,
      anon_sym_CARET,
  [8602] = 3,
    ACTIONS(1068), 1,
      anon_sym_SQUOTE,
    ACTIONS(1070), 1,
      aux_sym_unit_token1,
    STATE(415), 1,
      aux_sym_unit_repeat1,
  [8612] = 3,
    ACTIONS(1055), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(374), 1,
      aux_sym_sequence_repeat1,
  [8622] = 3,
    ACTIONS(1072), 1,
      anon_sym_RPAREN,
    ACTIONS(1074), 1,
      anon_sym_or,
    STATE(420), 1,
      aux_sym_reference_repeat1,
  [8632] = 3,
    ACTIONS(1076), 1,
      anon_sym_SQUOTE,
    ACTIONS(1078), 1,
      aux_sym_unit_token1,
    STATE(406), 1,
      aux_sym_unit_repeat1,
  [8642] = 3,
    ACTIONS(673), 1,
      anon_sym_DQUOTE,
    ACTIONS(1080), 1,
      anon_sym_or,
    STATE(410), 1,
      aux_sym_only_rule_repeat1,
  [8652] = 3,
    ACTIONS(1040), 1,
      aux_sym_sequence_token1,
    STATE(310), 1,
      aux_sym_sequence_repeat1,
    STATE(408), 1,
      sym_sequence,
  [8662] = 3,
    ACTIONS(951), 1,
      aux_sym_cardinality_token1,
    ACTIONS(953), 1,
      anon_sym_DOT_DOT,
    STATE(60), 1,
      sym_cardinality,
  [8672] = 3,
    ACTIONS(961), 1,
      anon_sym_or,
    ACTIONS(1083), 1,
      anon_sym_RPAREN,
    STATE(398), 1,
      aux_sym_canonical_repeat1,
  [8682] = 3,
    ACTIONS(1040), 1,
      aux_sym_sequence_token1,
    STATE(310), 1,
      aux_sym_sequence_repeat1,
    STATE(402), 1,
      sym_sequence,
  [8692] = 3,
    ACTIONS(1085), 1,
      anon_sym_SQUOTE,
    ACTIONS(1087), 1,
      aux_sym_unit_token1,
    STATE(415), 1,
      aux_sym_unit_repeat1,
  [8702] = 3,
    ACTIONS(1090), 1,
      aux_sym_sequence_token1,
    STATE(20), 1,
      sym_sequence,
    STATE(96), 1,
      aux_sym_sequence_repeat1,
  [8712] = 3,
    ACTIONS(1040), 1,
      aux_sym_sequence_token1,
    STATE(310), 1,
      aux_sym_sequence_repeat1,
    STATE(429), 1,
      sym_sequence,
  [8722] = 3,
    ACTIONS(1028), 1,
      aux_sym_sequence_token1,
    STATE(301), 1,
      aux_sym_sequence_repeat1,
    STATE(403), 1,
      sym_sequence,
  [8732] = 3,
    ACTIONS(1090), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(96), 1,
      aux_sym_sequence_repeat1,
  [8742] = 3,
    ACTIONS(1074), 1,
      anon_sym_or,
    ACTIONS(1092), 1,
      anon_sym_RPAREN,
    STATE(404), 1,
      aux_sym_reference_repeat1,
  [8752] = 2,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    STATE(167), 1,
      sym_string,
  [8759] = 2,
    ACTIONS(1094), 1,
      anon_sym_from,
    STATE(219), 1,
      sym_vs_component_from,
  [8766] = 2,
    ACTIONS(1096), 1,
      anon_sym_POUND,
    ACTIONS(1098), 1,
      aux_sym_sequence_token1,
  [8773] = 2,
    ACTIONS(1100), 1,
      anon_sym_system,
    STATE(224), 1,
      sym_vs_from_system,
  [8780] = 2,
    ACTIONS(1102), 1,
      anon_sym_valueset,
    STATE(224), 1,
      sym_vs_from_valueset,
  [8787] = 2,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    STATE(65), 1,
      sym_string,
  [8794] = 2,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    STATE(165), 1,
      sym_string,
  [8801] = 2,
    ACTIONS(75), 1,
      anon_sym_EQ,
    ACTIONS(77), 1,
      aux_sym_sequence_token1,
  [8808] = 1,
    ACTIONS(1061), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [8813] = 2,
    ACTIONS(1104), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      sym_string,
  [8820] = 2,
    ACTIONS(1104), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_string,
  [8827] = 2,
    ACTIONS(1106), 1,
      anon_sym_system,
    STATE(224), 1,
      sym_vs_from_system,
  [8834] = 2,
    ACTIONS(1108), 1,
      anon_sym_valueset,
    STATE(224), 1,
      sym_vs_from_valueset,
  [8841] = 2,
    ACTIONS(67), 1,
      anon_sym_CARET,
    STATE(471), 1,
      sym_caret_path,
  [8848] = 2,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    STATE(110), 1,
      sym_string,
  [8855] = 1,
    ACTIONS(1110), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [8860] = 1,
    ACTIONS(1112), 1,
      anon_sym_LPAREN,
  [8864] = 1,
    ACTIONS(1114), 1,
      anon_sym_COLON,
  [8868] = 1,
    ACTIONS(1116), 1,
      anon_sym_RPAREN,
  [8872] = 1,
    ACTIONS(1118), 1,
      anon_sym_COLON,
  [8876] = 1,
    ACTIONS(1120), 1,
      anon_sym_COLON,
  [8880] = 1,
    ACTIONS(1122), 1,
      sym_time,
  [8884] = 1,
    ACTIONS(1124), 1,
      anon_sym_COLON,
  [8888] = 1,
    ACTIONS(1126), 1,
      anon_sym_COLON,
  [8892] = 1,
    ACTIONS(1128), 1,
      anon_sym_COLON,
  [8896] = 1,
    ACTIONS(1130), 1,
      anon_sym_DOT_DOT,
  [8900] = 1,
    ACTIONS(1132), 1,
      anon_sym_COLON,
  [8904] = 1,
    ACTIONS(1134), 1,
      anon_sym_POUND,
  [8908] = 1,
    ACTIONS(1136), 1,
      anon_sym_COLON,
  [8912] = 1,
    ACTIONS(1138), 1,
      anon_sym_COLON,
  [8916] = 1,
    ACTIONS(1140), 1,
      anon_sym_exactly,
  [8920] = 1,
    ACTIONS(1142), 1,
      anon_sym_COLON,
  [8924] = 1,
    ACTIONS(619), 1,
      anon_sym_and,
  [8928] = 1,
    ACTIONS(1144), 1,
      anon_sym_COLON,
  [8932] = 1,
    ACTIONS(1146), 1,
      anon_sym_COLON,
  [8936] = 1,
    ACTIONS(1148), 1,
      anon_sym_EQ,
  [8940] = 1,
    ACTIONS(1150), 1,
      anon_sym_EQ,
  [8944] = 1,
    ACTIONS(1152), 1,
      anon_sym_COLON,
  [8948] = 1,
    ACTIONS(1154), 1,
      anon_sym_LPAREN,
  [8952] = 1,
    ACTIONS(1156), 1,
      anon_sym_COLON,
  [8956] = 1,
    ACTIONS(1158), 1,
      anon_sym_EQ,
  [8960] = 1,
    ACTIONS(1160), 1,
      anon_sym_COLON,
  [8964] = 1,
    ACTIONS(1162), 1,
      anon_sym_COLON,
  [8968] = 1,
    ACTIONS(1164), 1,
      anon_sym_RPAREN,
  [8972] = 1,
    ACTIONS(1166), 1,
      anon_sym_COLON,
  [8976] = 1,
    ACTIONS(1168), 1,
      anon_sym_COLON,
  [8980] = 1,
    ACTIONS(1170), 1,
      ts_builtin_sym_end,
  [8984] = 1,
    ACTIONS(1172), 1,
      anon_sym_COLON,
  [8988] = 1,
    ACTIONS(1174), 1,
      anon_sym_POUND,
  [8992] = 1,
    ACTIONS(1176), 1,
      anon_sym_COLON,
  [8996] = 1,
    ACTIONS(1178), 1,
      anon_sym_EQ,
  [9000] = 1,
    ACTIONS(1180), 1,
      anon_sym_COLON,
  [9004] = 1,
    ACTIONS(1182), 1,
      anon_sym_COLON,
  [9008] = 1,
    ACTIONS(1184), 1,
      anon_sym_COLON,
  [9012] = 1,
    ACTIONS(1186), 1,
      anon_sym_DOT_DOT,
  [9016] = 1,
    ACTIONS(1188), 1,
      anon_sym_COLON,
  [9020] = 1,
    ACTIONS(1190), 1,
      anon_sym_POUND,
  [9024] = 1,
    ACTIONS(1066), 1,
      anon_sym_POUND,
  [9028] = 1,
    ACTIONS(1192), 1,
      anon_sym_POUND,
  [9032] = 1,
    ACTIONS(1194), 1,
      anon_sym_POUND,
  [9036] = 1,
    ACTIONS(1196), 1,
      anon_sym_POUND,
  [9040] = 1,
    ACTIONS(1198), 1,
      anon_sym_POUND,
  [9044] = 1,
    ACTIONS(1200), 1,
      anon_sym_POUND,
  [9048] = 1,
    ACTIONS(1202), 1,
      anon_sym_POUND,
  [9052] = 1,
    ACTIONS(739), 1,
      anon_sym_POUND,
  [9056] = 1,
    ACTIONS(669), 1,
      anon_sym_POUND,
  [9060] = 1,
    ACTIONS(1204), 1,
      anon_sym_POUND,
  [9064] = 1,
    ACTIONS(1206), 1,
      anon_sym_EQ,
  [9068] = 1,
    ACTIONS(1208), 1,
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
  [SMALL_STATE(12)] = 542,
  [SMALL_STATE(13)] = 599,
  [SMALL_STATE(14)] = 638,
  [SMALL_STATE(15)] = 672,
  [SMALL_STATE(16)] = 724,
  [SMALL_STATE(17)] = 756,
  [SMALL_STATE(18)] = 790,
  [SMALL_STATE(19)] = 842,
  [SMALL_STATE(20)] = 875,
  [SMALL_STATE(21)] = 908,
  [SMALL_STATE(22)] = 941,
  [SMALL_STATE(23)] = 974,
  [SMALL_STATE(24)] = 1024,
  [SMALL_STATE(25)] = 1074,
  [SMALL_STATE(26)] = 1137,
  [SMALL_STATE(27)] = 1174,
  [SMALL_STATE(28)] = 1211,
  [SMALL_STATE(29)] = 1248,
  [SMALL_STATE(30)] = 1285,
  [SMALL_STATE(31)] = 1322,
  [SMALL_STATE(32)] = 1385,
  [SMALL_STATE(33)] = 1448,
  [SMALL_STATE(34)] = 1511,
  [SMALL_STATE(35)] = 1555,
  [SMALL_STATE(36)] = 1599,
  [SMALL_STATE(37)] = 1628,
  [SMALL_STATE(38)] = 1669,
  [SMALL_STATE(39)] = 1702,
  [SMALL_STATE(40)] = 1735,
  [SMALL_STATE(41)] = 1768,
  [SMALL_STATE(42)] = 1813,
  [SMALL_STATE(43)] = 1842,
  [SMALL_STATE(44)] = 1875,
  [SMALL_STATE(45)] = 1903,
  [SMALL_STATE(46)] = 1945,
  [SMALL_STATE(47)] = 1987,
  [SMALL_STATE(48)] = 2034,
  [SMALL_STATE(49)] = 2073,
  [SMALL_STATE(50)] = 2120,
  [SMALL_STATE(51)] = 2157,
  [SMALL_STATE(52)] = 2185,
  [SMALL_STATE(53)] = 2213,
  [SMALL_STATE(54)] = 2249,
  [SMALL_STATE(55)] = 2287,
  [SMALL_STATE(56)] = 2323,
  [SMALL_STATE(57)] = 2351,
  [SMALL_STATE(58)] = 2379,
  [SMALL_STATE(59)] = 2407,
  [SMALL_STATE(60)] = 2435,
  [SMALL_STATE(61)] = 2463,
  [SMALL_STATE(62)] = 2498,
  [SMALL_STATE(63)] = 2525,
  [SMALL_STATE(64)] = 2552,
  [SMALL_STATE(65)] = 2585,
  [SMALL_STATE(66)] = 2610,
  [SMALL_STATE(67)] = 2647,
  [SMALL_STATE(68)] = 2674,
  [SMALL_STATE(69)] = 2701,
  [SMALL_STATE(70)] = 2734,
  [SMALL_STATE(71)] = 2760,
  [SMALL_STATE(72)] = 2782,
  [SMALL_STATE(73)] = 2818,
  [SMALL_STATE(74)] = 2852,
  [SMALL_STATE(75)] = 2874,
  [SMALL_STATE(76)] = 2900,
  [SMALL_STATE(77)] = 2922,
  [SMALL_STATE(78)] = 2958,
  [SMALL_STATE(79)] = 2984,
  [SMALL_STATE(80)] = 3010,
  [SMALL_STATE(81)] = 3031,
  [SMALL_STATE(82)] = 3054,
  [SMALL_STATE(83)] = 3081,
  [SMALL_STATE(84)] = 3108,
  [SMALL_STATE(85)] = 3133,
  [SMALL_STATE(86)] = 3158,
  [SMALL_STATE(87)] = 3182,
  [SMALL_STATE(88)] = 3208,
  [SMALL_STATE(89)] = 3232,
  [SMALL_STATE(90)] = 3256,
  [SMALL_STATE(91)] = 3282,
  [SMALL_STATE(92)] = 3320,
  [SMALL_STATE(93)] = 3350,
  [SMALL_STATE(94)] = 3376,
  [SMALL_STATE(95)] = 3400,
  [SMALL_STATE(96)] = 3424,
  [SMALL_STATE(97)] = 3448,
  [SMALL_STATE(98)] = 3472,
  [SMALL_STATE(99)] = 3498,
  [SMALL_STATE(100)] = 3546,
  [SMALL_STATE(101)] = 3566,
  [SMALL_STATE(102)] = 3592,
  [SMALL_STATE(103)] = 3618,
  [SMALL_STATE(104)] = 3642,
  [SMALL_STATE(105)] = 3668,
  [SMALL_STATE(106)] = 3694,
  [SMALL_STATE(107)] = 3732,
  [SMALL_STATE(108)] = 3752,
  [SMALL_STATE(109)] = 3776,
  [SMALL_STATE(110)] = 3806,
  [SMALL_STATE(111)] = 3826,
  [SMALL_STATE(112)] = 3852,
  [SMALL_STATE(113)] = 3875,
  [SMALL_STATE(114)] = 3898,
  [SMALL_STATE(115)] = 3919,
  [SMALL_STATE(116)] = 3942,
  [SMALL_STATE(117)] = 3965,
  [SMALL_STATE(118)] = 3986,
  [SMALL_STATE(119)] = 4007,
  [SMALL_STATE(120)] = 4030,
  [SMALL_STATE(121)] = 4053,
  [SMALL_STATE(122)] = 4072,
  [SMALL_STATE(123)] = 4095,
  [SMALL_STATE(124)] = 4118,
  [SMALL_STATE(125)] = 4141,
  [SMALL_STATE(126)] = 4164,
  [SMALL_STATE(127)] = 4189,
  [SMALL_STATE(128)] = 4214,
  [SMALL_STATE(129)] = 4239,
  [SMALL_STATE(130)] = 4258,
  [SMALL_STATE(131)] = 4281,
  [SMALL_STATE(132)] = 4304,
  [SMALL_STATE(133)] = 4327,
  [SMALL_STATE(134)] = 4350,
  [SMALL_STATE(135)] = 4373,
  [SMALL_STATE(136)] = 4395,
  [SMALL_STATE(137)] = 4413,
  [SMALL_STATE(138)] = 4435,
  [SMALL_STATE(139)] = 4457,
  [SMALL_STATE(140)] = 4479,
  [SMALL_STATE(141)] = 4501,
  [SMALL_STATE(142)] = 4523,
  [SMALL_STATE(143)] = 4545,
  [SMALL_STATE(144)] = 4567,
  [SMALL_STATE(145)] = 4589,
  [SMALL_STATE(146)] = 4609,
  [SMALL_STATE(147)] = 4631,
  [SMALL_STATE(148)] = 4651,
  [SMALL_STATE(149)] = 4669,
  [SMALL_STATE(150)] = 4687,
  [SMALL_STATE(151)] = 4705,
  [SMALL_STATE(152)] = 4723,
  [SMALL_STATE(153)] = 4745,
  [SMALL_STATE(154)] = 4763,
  [SMALL_STATE(155)] = 4785,
  [SMALL_STATE(156)] = 4803,
  [SMALL_STATE(157)] = 4827,
  [SMALL_STATE(158)] = 4847,
  [SMALL_STATE(159)] = 4865,
  [SMALL_STATE(160)] = 4889,
  [SMALL_STATE(161)] = 4909,
  [SMALL_STATE(162)] = 4931,
  [SMALL_STATE(163)] = 4955,
  [SMALL_STATE(164)] = 4979,
  [SMALL_STATE(165)] = 5001,
  [SMALL_STATE(166)] = 5019,
  [SMALL_STATE(167)] = 5037,
  [SMALL_STATE(168)] = 5055,
  [SMALL_STATE(169)] = 5077,
  [SMALL_STATE(170)] = 5099,
  [SMALL_STATE(171)] = 5117,
  [SMALL_STATE(172)] = 5135,
  [SMALL_STATE(173)] = 5153,
  [SMALL_STATE(174)] = 5171,
  [SMALL_STATE(175)] = 5192,
  [SMALL_STATE(176)] = 5213,
  [SMALL_STATE(177)] = 5234,
  [SMALL_STATE(178)] = 5255,
  [SMALL_STATE(179)] = 5272,
  [SMALL_STATE(180)] = 5293,
  [SMALL_STATE(181)] = 5314,
  [SMALL_STATE(182)] = 5335,
  [SMALL_STATE(183)] = 5356,
  [SMALL_STATE(184)] = 5375,
  [SMALL_STATE(185)] = 5394,
  [SMALL_STATE(186)] = 5415,
  [SMALL_STATE(187)] = 5436,
  [SMALL_STATE(188)] = 5455,
  [SMALL_STATE(189)] = 5476,
  [SMALL_STATE(190)] = 5493,
  [SMALL_STATE(191)] = 5510,
  [SMALL_STATE(192)] = 5531,
  [SMALL_STATE(193)] = 5552,
  [SMALL_STATE(194)] = 5573,
  [SMALL_STATE(195)] = 5594,
  [SMALL_STATE(196)] = 5615,
  [SMALL_STATE(197)] = 5636,
  [SMALL_STATE(198)] = 5657,
  [SMALL_STATE(199)] = 5676,
  [SMALL_STATE(200)] = 5693,
  [SMALL_STATE(201)] = 5712,
  [SMALL_STATE(202)] = 5731,
  [SMALL_STATE(203)] = 5748,
  [SMALL_STATE(204)] = 5767,
  [SMALL_STATE(205)] = 5784,
  [SMALL_STATE(206)] = 5805,
  [SMALL_STATE(207)] = 5824,
  [SMALL_STATE(208)] = 5843,
  [SMALL_STATE(209)] = 5864,
  [SMALL_STATE(210)] = 5885,
  [SMALL_STATE(211)] = 5906,
  [SMALL_STATE(212)] = 5927,
  [SMALL_STATE(213)] = 5943,
  [SMALL_STATE(214)] = 5959,
  [SMALL_STATE(215)] = 5979,
  [SMALL_STATE(216)] = 5995,
  [SMALL_STATE(217)] = 6013,
  [SMALL_STATE(218)] = 6031,
  [SMALL_STATE(219)] = 6051,
  [SMALL_STATE(220)] = 6069,
  [SMALL_STATE(221)] = 6087,
  [SMALL_STATE(222)] = 6105,
  [SMALL_STATE(223)] = 6121,
  [SMALL_STATE(224)] = 6137,
  [SMALL_STATE(225)] = 6153,
  [SMALL_STATE(226)] = 6169,
  [SMALL_STATE(227)] = 6185,
  [SMALL_STATE(228)] = 6201,
  [SMALL_STATE(229)] = 6217,
  [SMALL_STATE(230)] = 6233,
  [SMALL_STATE(231)] = 6248,
  [SMALL_STATE(232)] = 6263,
  [SMALL_STATE(233)] = 6278,
  [SMALL_STATE(234)] = 6293,
  [SMALL_STATE(235)] = 6308,
  [SMALL_STATE(236)] = 6323,
  [SMALL_STATE(237)] = 6338,
  [SMALL_STATE(238)] = 6353,
  [SMALL_STATE(239)] = 6368,
  [SMALL_STATE(240)] = 6383,
  [SMALL_STATE(241)] = 6398,
  [SMALL_STATE(242)] = 6415,
  [SMALL_STATE(243)] = 6430,
  [SMALL_STATE(244)] = 6445,
  [SMALL_STATE(245)] = 6460,
  [SMALL_STATE(246)] = 6475,
  [SMALL_STATE(247)] = 6490,
  [SMALL_STATE(248)] = 6505,
  [SMALL_STATE(249)] = 6520,
  [SMALL_STATE(250)] = 6535,
  [SMALL_STATE(251)] = 6550,
  [SMALL_STATE(252)] = 6565,
  [SMALL_STATE(253)] = 6580,
  [SMALL_STATE(254)] = 6595,
  [SMALL_STATE(255)] = 6610,
  [SMALL_STATE(256)] = 6625,
  [SMALL_STATE(257)] = 6645,
  [SMALL_STATE(258)] = 6665,
  [SMALL_STATE(259)] = 6685,
  [SMALL_STATE(260)] = 6699,
  [SMALL_STATE(261)] = 6728,
  [SMALL_STATE(262)] = 6751,
  [SMALL_STATE(263)] = 6774,
  [SMALL_STATE(264)] = 6805,
  [SMALL_STATE(265)] = 6836,
  [SMALL_STATE(266)] = 6855,
  [SMALL_STATE(267)] = 6869,
  [SMALL_STATE(268)] = 6883,
  [SMALL_STATE(269)] = 6899,
  [SMALL_STATE(270)] = 6915,
  [SMALL_STATE(271)] = 6941,
  [SMALL_STATE(272)] = 6967,
  [SMALL_STATE(273)] = 6993,
  [SMALL_STATE(274)] = 7007,
  [SMALL_STATE(275)] = 7022,
  [SMALL_STATE(276)] = 7044,
  [SMALL_STATE(277)] = 7054,
  [SMALL_STATE(278)] = 7076,
  [SMALL_STATE(279)] = 7098,
  [SMALL_STATE(280)] = 7111,
  [SMALL_STATE(281)] = 7130,
  [SMALL_STATE(282)] = 7143,
  [SMALL_STATE(283)] = 7162,
  [SMALL_STATE(284)] = 7175,
  [SMALL_STATE(285)] = 7188,
  [SMALL_STATE(286)] = 7204,
  [SMALL_STATE(287)] = 7220,
  [SMALL_STATE(288)] = 7232,
  [SMALL_STATE(289)] = 7246,
  [SMALL_STATE(290)] = 7258,
  [SMALL_STATE(291)] = 7274,
  [SMALL_STATE(292)] = 7286,
  [SMALL_STATE(293)] = 7298,
  [SMALL_STATE(294)] = 7314,
  [SMALL_STATE(295)] = 7330,
  [SMALL_STATE(296)] = 7346,
  [SMALL_STATE(297)] = 7360,
  [SMALL_STATE(298)] = 7376,
  [SMALL_STATE(299)] = 7392,
  [SMALL_STATE(300)] = 7404,
  [SMALL_STATE(301)] = 7420,
  [SMALL_STATE(302)] = 7432,
  [SMALL_STATE(303)] = 7448,
  [SMALL_STATE(304)] = 7461,
  [SMALL_STATE(305)] = 7474,
  [SMALL_STATE(306)] = 7487,
  [SMALL_STATE(307)] = 7500,
  [SMALL_STATE(308)] = 7511,
  [SMALL_STATE(309)] = 7524,
  [SMALL_STATE(310)] = 7537,
  [SMALL_STATE(311)] = 7548,
  [SMALL_STATE(312)] = 7559,
  [SMALL_STATE(313)] = 7570,
  [SMALL_STATE(314)] = 7581,
  [SMALL_STATE(315)] = 7594,
  [SMALL_STATE(316)] = 7607,
  [SMALL_STATE(317)] = 7618,
  [SMALL_STATE(318)] = 7629,
  [SMALL_STATE(319)] = 7642,
  [SMALL_STATE(320)] = 7653,
  [SMALL_STATE(321)] = 7664,
  [SMALL_STATE(322)] = 7675,
  [SMALL_STATE(323)] = 7686,
  [SMALL_STATE(324)] = 7699,
  [SMALL_STATE(325)] = 7712,
  [SMALL_STATE(326)] = 7725,
  [SMALL_STATE(327)] = 7738,
  [SMALL_STATE(328)] = 7751,
  [SMALL_STATE(329)] = 7764,
  [SMALL_STATE(330)] = 7777,
  [SMALL_STATE(331)] = 7790,
  [SMALL_STATE(332)] = 7803,
  [SMALL_STATE(333)] = 7814,
  [SMALL_STATE(334)] = 7827,
  [SMALL_STATE(335)] = 7838,
  [SMALL_STATE(336)] = 7851,
  [SMALL_STATE(337)] = 7864,
  [SMALL_STATE(338)] = 7875,
  [SMALL_STATE(339)] = 7886,
  [SMALL_STATE(340)] = 7897,
  [SMALL_STATE(341)] = 7908,
  [SMALL_STATE(342)] = 7921,
  [SMALL_STATE(343)] = 7934,
  [SMALL_STATE(344)] = 7947,
  [SMALL_STATE(345)] = 7960,
  [SMALL_STATE(346)] = 7973,
  [SMALL_STATE(347)] = 7986,
  [SMALL_STATE(348)] = 7999,
  [SMALL_STATE(349)] = 8012,
  [SMALL_STATE(350)] = 8019,
  [SMALL_STATE(351)] = 8032,
  [SMALL_STATE(352)] = 8045,
  [SMALL_STATE(353)] = 8058,
  [SMALL_STATE(354)] = 8071,
  [SMALL_STATE(355)] = 8084,
  [SMALL_STATE(356)] = 8097,
  [SMALL_STATE(357)] = 8110,
  [SMALL_STATE(358)] = 8123,
  [SMALL_STATE(359)] = 8136,
  [SMALL_STATE(360)] = 8146,
  [SMALL_STATE(361)] = 8156,
  [SMALL_STATE(362)] = 8166,
  [SMALL_STATE(363)] = 8176,
  [SMALL_STATE(364)] = 8186,
  [SMALL_STATE(365)] = 8196,
  [SMALL_STATE(366)] = 8206,
  [SMALL_STATE(367)] = 8216,
  [SMALL_STATE(368)] = 8226,
  [SMALL_STATE(369)] = 8236,
  [SMALL_STATE(370)] = 8246,
  [SMALL_STATE(371)] = 8256,
  [SMALL_STATE(372)] = 8266,
  [SMALL_STATE(373)] = 8276,
  [SMALL_STATE(374)] = 8286,
  [SMALL_STATE(375)] = 8296,
  [SMALL_STATE(376)] = 8306,
  [SMALL_STATE(377)] = 8316,
  [SMALL_STATE(378)] = 8326,
  [SMALL_STATE(379)] = 8336,
  [SMALL_STATE(380)] = 8346,
  [SMALL_STATE(381)] = 8356,
  [SMALL_STATE(382)] = 8366,
  [SMALL_STATE(383)] = 8376,
  [SMALL_STATE(384)] = 8386,
  [SMALL_STATE(385)] = 8396,
  [SMALL_STATE(386)] = 8406,
  [SMALL_STATE(387)] = 8416,
  [SMALL_STATE(388)] = 8426,
  [SMALL_STATE(389)] = 8436,
  [SMALL_STATE(390)] = 8446,
  [SMALL_STATE(391)] = 8456,
  [SMALL_STATE(392)] = 8466,
  [SMALL_STATE(393)] = 8476,
  [SMALL_STATE(394)] = 8486,
  [SMALL_STATE(395)] = 8496,
  [SMALL_STATE(396)] = 8506,
  [SMALL_STATE(397)] = 8516,
  [SMALL_STATE(398)] = 8526,
  [SMALL_STATE(399)] = 8536,
  [SMALL_STATE(400)] = 8546,
  [SMALL_STATE(401)] = 8556,
  [SMALL_STATE(402)] = 8566,
  [SMALL_STATE(403)] = 8576,
  [SMALL_STATE(404)] = 8584,
  [SMALL_STATE(405)] = 8594,
  [SMALL_STATE(406)] = 8602,
  [SMALL_STATE(407)] = 8612,
  [SMALL_STATE(408)] = 8622,
  [SMALL_STATE(409)] = 8632,
  [SMALL_STATE(410)] = 8642,
  [SMALL_STATE(411)] = 8652,
  [SMALL_STATE(412)] = 8662,
  [SMALL_STATE(413)] = 8672,
  [SMALL_STATE(414)] = 8682,
  [SMALL_STATE(415)] = 8692,
  [SMALL_STATE(416)] = 8702,
  [SMALL_STATE(417)] = 8712,
  [SMALL_STATE(418)] = 8722,
  [SMALL_STATE(419)] = 8732,
  [SMALL_STATE(420)] = 8742,
  [SMALL_STATE(421)] = 8752,
  [SMALL_STATE(422)] = 8759,
  [SMALL_STATE(423)] = 8766,
  [SMALL_STATE(424)] = 8773,
  [SMALL_STATE(425)] = 8780,
  [SMALL_STATE(426)] = 8787,
  [SMALL_STATE(427)] = 8794,
  [SMALL_STATE(428)] = 8801,
  [SMALL_STATE(429)] = 8808,
  [SMALL_STATE(430)] = 8813,
  [SMALL_STATE(431)] = 8820,
  [SMALL_STATE(432)] = 8827,
  [SMALL_STATE(433)] = 8834,
  [SMALL_STATE(434)] = 8841,
  [SMALL_STATE(435)] = 8848,
  [SMALL_STATE(436)] = 8855,
  [SMALL_STATE(437)] = 8860,
  [SMALL_STATE(438)] = 8864,
  [SMALL_STATE(439)] = 8868,
  [SMALL_STATE(440)] = 8872,
  [SMALL_STATE(441)] = 8876,
  [SMALL_STATE(442)] = 8880,
  [SMALL_STATE(443)] = 8884,
  [SMALL_STATE(444)] = 8888,
  [SMALL_STATE(445)] = 8892,
  [SMALL_STATE(446)] = 8896,
  [SMALL_STATE(447)] = 8900,
  [SMALL_STATE(448)] = 8904,
  [SMALL_STATE(449)] = 8908,
  [SMALL_STATE(450)] = 8912,
  [SMALL_STATE(451)] = 8916,
  [SMALL_STATE(452)] = 8920,
  [SMALL_STATE(453)] = 8924,
  [SMALL_STATE(454)] = 8928,
  [SMALL_STATE(455)] = 8932,
  [SMALL_STATE(456)] = 8936,
  [SMALL_STATE(457)] = 8940,
  [SMALL_STATE(458)] = 8944,
  [SMALL_STATE(459)] = 8948,
  [SMALL_STATE(460)] = 8952,
  [SMALL_STATE(461)] = 8956,
  [SMALL_STATE(462)] = 8960,
  [SMALL_STATE(463)] = 8964,
  [SMALL_STATE(464)] = 8968,
  [SMALL_STATE(465)] = 8972,
  [SMALL_STATE(466)] = 8976,
  [SMALL_STATE(467)] = 8980,
  [SMALL_STATE(468)] = 8984,
  [SMALL_STATE(469)] = 8988,
  [SMALL_STATE(470)] = 8992,
  [SMALL_STATE(471)] = 8996,
  [SMALL_STATE(472)] = 9000,
  [SMALL_STATE(473)] = 9004,
  [SMALL_STATE(474)] = 9008,
  [SMALL_STATE(475)] = 9012,
  [SMALL_STATE(476)] = 9016,
  [SMALL_STATE(477)] = 9020,
  [SMALL_STATE(478)] = 9024,
  [SMALL_STATE(479)] = 9028,
  [SMALL_STATE(480)] = 9032,
  [SMALL_STATE(481)] = 9036,
  [SMALL_STATE(482)] = 9040,
  [SMALL_STATE(483)] = 9044,
  [SMALL_STATE(484)] = 9048,
  [SMALL_STATE(485)] = 9052,
  [SMALL_STATE(486)] = 9056,
  [SMALL_STATE(487)] = 9060,
  [SMALL_STATE(488)] = 9064,
  [SMALL_STATE(489)] = 9068,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 4),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_rule, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(13),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 3),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_name, 1), REDUCE(sym_path, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3, .production_id = 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3, .production_id = 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 2, .production_id = 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 2, .production_id = 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 4),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance, 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 5),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_logical_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_logical_repeat1, 2), SHIFT_REPEAT(263),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 4),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(465),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(476),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(443),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(444),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(450),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat2, 2),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat2, 2), SHIFT_REPEAT(264),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 5),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 5),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_definition, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 4),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instance_repeat1, 2),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(465),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(473),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(450),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(470),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(474),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(458),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(489),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(460),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(440),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(454),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(455),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(462),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(463),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(466),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(465),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(441),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(447),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(450),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2), SHIFT_REPEAT(76),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(465),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(445),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(449),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(452),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ratio_part, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invariant, 4),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 2),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 1),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 5),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_rule, 4),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_rule, 4),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(465),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(468),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(450),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_rule, 3),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_rule, 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(465),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(468),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(450),
  [391] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(75),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 3),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(75),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 4),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(79),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_operator, 1),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vs_filter_operator, 1),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(82),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [425] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(84),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(86),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 5),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(88),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [444] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(94),
  [447] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(95),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_repeat2, 2),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat2, 2), SHIFT_REPEAT(278),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_metadata, 1),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instance_repeat2, 2),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat2, 2), SHIFT_REPEAT(280),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 5),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_valueset_repeat2, 2),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat2, 2), SHIFT_REPEAT(99),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_string, 1),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 5),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 5),
  [497] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(112),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usage, 3),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usage, 3),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [508] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(116),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_of, 3),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance_of, 3),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_metadata, 1),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance_metadata, 1),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [521] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(120),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sd_metadata, 1),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(122),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [531] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(124),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 5),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 6),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 7),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parent, 3),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [550] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(133),
  [553] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(134),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_valueset, 3),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 4),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [564] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(138),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [569] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(140),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2),
  [576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2), SHIFT_REPEAT(323),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_valueset, 2),
  [583] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(146),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 7),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 6),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 5),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 5),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 4),
  [598] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(154),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 3),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat2, 2),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat2, 2), SHIFT_REPEAT(300),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 5),
  [612] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(161),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 1),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_severity, 3),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath, 3),
  [627] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(168),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cs_metadata, 1),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invariant_metadata, 1),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_metadata, 1),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_string, 2),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_rule, 4),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 4),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contains_rule_repeat1, 2),
  [650] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contains_rule_repeat1, 2), SHIFT_REPEAT(286),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_list, 1),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_system, 2),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_only_rule, 5),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 5),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_rule, 5),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_list, 2),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 3),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2),
  [675] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2), SHIFT_REPEAT(272),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [680] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(193),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vs_filter_list_repeat1, 2),
  [687] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vs_filter_list_repeat1, 2), SHIFT_REPEAT(295),
  [690] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2), SHIFT_REPEAT(315),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 1),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component_from, 2),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_type, 1),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_type, 1, .production_id = 4),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_only_rule, 4),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_rule, 4),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 3),
  [715] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(210),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ratio, 3),
  [724] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(214),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_value_rule, 4),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_component, 2),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 3),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component_from, 4),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_value, 1),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_definition, 3),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_value_rule, 7),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_entity_rule, 1),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sd_rule, 1),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_rule, 5),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_value_rule, 4),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_rule, 1),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 3),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_caret_value_rule, 5),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 5, .production_id = 1),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component, 2),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cs_rule, 1),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_rule, 2),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lr_rule, 1),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strength, 3),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component, 3),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 8),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_component, 4),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 2),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 6),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_rule, 3),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_value_rule, 5),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_rule, 1),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2),
  [801] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2), SHIFT_REPEAT(266),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag, 1),
  [818] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(268),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 3),
  [827] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_rule_repeat1, 2), SHIFT_REPEAT(294),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_rule_repeat1, 2),
  [832] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2), SHIFT_REPEAT(383),
  [835] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2), SHIFT_REPEAT(366),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [848] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(281),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [853] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(283),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [864] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(288),
  [867] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(289),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [872] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [876] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(292),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [889] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(299),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [904] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [910] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(309),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [917] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(311),
  [920] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(312),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [931] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(317),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [938] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [942] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(320),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [965] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [975] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [979] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(339),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [1016] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(367),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1023] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [1025] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(375),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1032] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1044] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(397),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 2),
  [1049] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 2), SHIFT_REPEAT(418),
  [1052] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(397),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reference_repeat1, 2),
  [1063] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reference_repeat1, 2), SHIFT_REPEAT(417),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1080] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2), SHIFT_REPEAT(270),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1085] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2),
  [1087] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(415),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2),
  [1098] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 4),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_path, 2),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1170] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
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
