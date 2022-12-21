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
#define STATE_COUNT 513
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 182
#define ALIAS_COUNT 4
#define TOKEN_COUNT 75
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
  anon_sym_contentReference = 25,
  anon_sym_insert = 26,
  anon_sym_from = 27,
  anon_sym_LPAREN = 28,
  anon_sym_exactly = 29,
  anon_sym_RPAREN = 30,
  anon_sym_contains = 31,
  anon_sym_and = 32,
  anon_sym_obeys = 33,
  anon_sym_only = 34,
  anon_sym_or = 35,
  anon_sym_DASH_GT = 36,
  anon_sym_include = 37,
  anon_sym_exclude = 38,
  anon_sym_codes = 39,
  anon_sym_where = 40,
  anon_sym_system = 41,
  anon_sym_valueset = 42,
  anon_sym_true = 43,
  anon_sym_false = 44,
  anon_sym_POUND = 45,
  aux_sym_sequence_token1 = 46,
  anon_sym_CARET = 47,
  aux_sym_cardinality_token1 = 48,
  anon_sym_DOT_DOT = 49,
  anon_sym_STAR2 = 50,
  anon_sym_DQUOTE = 51,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 52,
  sym_double_quote_string_fragment = 53,
  sym_escape_sequence = 54,
  sym_number = 55,
  sym_date = 56,
  sym_time = 57,
  anon_sym_T = 58,
  anon_sym_SQUOTE = 59,
  aux_sym_unit_token1 = 60,
  anon_sym_example = 61,
  anon_sym_preferred = 62,
  anon_sym_extensible = 63,
  anon_sym_required = 64,
  anon_sym_Reference = 65,
  anon_sym_Canonical = 66,
  anon_sym_PIPE = 67,
  anon_sym_named = 68,
  anon_sym_QMARK_BANG = 69,
  anon_sym_MS = 70,
  anon_sym_SU = 71,
  anon_sym_TU = 72,
  anon_sym_N = 73,
  anon_sym_D = 74,
  sym_doc = 75,
  sym_alias = 76,
  sym_profile = 77,
  sym_extension = 78,
  sym_invariant = 79,
  sym_instance = 80,
  sym_valueset = 81,
  sym_codesystem = 82,
  sym_mapping = 83,
  sym_logical = 84,
  sym_resource = 85,
  sym_sd_metadata = 86,
  sym_instance_metadata = 87,
  sym_invariant_metadata = 88,
  sym_vs_metadata = 89,
  sym_cs_metadata = 90,
  sym_mapping_metadata = 91,
  sym_description = 92,
  sym_expression = 93,
  sym_id = 94,
  sym_instance_of = 95,
  sym_parent = 96,
  sym_severity = 97,
  sym_source = 98,
  sym_target = 99,
  sym_title = 100,
  sym_usage = 101,
  sym_xpath = 102,
  sym_sd_rule = 103,
  sym_lr_rule = 104,
  sym_vs_rule = 105,
  sym_cs_rule = 106,
  sym_instance_rule = 107,
  sym_mapping_entity_rule = 108,
  sym_cardinality_rule = 109,
  sym_add_cre_element_rule = 110,
  sym_code_insert_rule = 111,
  sym_insert_rule = 112,
  sym_valueset_rule = 113,
  sym_fixed_value_rule = 114,
  sym_contains_rule = 115,
  sym_caret_value_rule = 116,
  sym_code_caret_value_rule = 117,
  sym_obeys_rule = 118,
  sym_path_rule = 119,
  sym_flag_rule = 120,
  sym_only_rule = 121,
  sym_mapping_rule = 122,
  sym_add_element_rule = 123,
  sym_vs_component = 124,
  sym_vs_concept_component = 125,
  sym_vs_filter_component = 126,
  sym_vs_component_from = 127,
  sym_vs_from_system = 128,
  sym_vs_from_valueset = 129,
  sym_vs_filter_list = 130,
  sym_vs_filter_definition = 131,
  sym_vs_filter_operator = 132,
  sym_vs_filter_value = 133,
  sym_code = 134,
  sym_code_string = 135,
  sym_sequence = 136,
  sym_caret_path = 137,
  sym_name = 138,
  sym_cardinality = 139,
  sym_string = 140,
  sym_multiline_string = 141,
  sym_datetime = 142,
  sym_unit = 143,
  sym_quantity = 144,
  sym_ratio_part = 145,
  sym_ratio = 146,
  sym_bool = 147,
  sym_path = 148,
  sym_strength = 149,
  sym_reference = 150,
  sym_canonical = 151,
  sym_value = 152,
  sym_item = 153,
  sym_flag = 154,
  sym_target_type = 155,
  aux_sym_doc_repeat1 = 156,
  aux_sym_profile_repeat1 = 157,
  aux_sym_profile_repeat2 = 158,
  aux_sym_invariant_repeat1 = 159,
  aux_sym_instance_repeat1 = 160,
  aux_sym_instance_repeat2 = 161,
  aux_sym_valueset_repeat1 = 162,
  aux_sym_valueset_repeat2 = 163,
  aux_sym_codesystem_repeat1 = 164,
  aux_sym_codesystem_repeat2 = 165,
  aux_sym_mapping_repeat1 = 166,
  aux_sym_mapping_repeat2 = 167,
  aux_sym_logical_repeat1 = 168,
  aux_sym_cardinality_rule_repeat1 = 169,
  aux_sym_code_insert_rule_repeat1 = 170,
  aux_sym_contains_rule_repeat1 = 171,
  aux_sym_obeys_rule_repeat1 = 172,
  aux_sym_flag_rule_repeat1 = 173,
  aux_sym_only_rule_repeat1 = 174,
  aux_sym_vs_concept_component_repeat1 = 175,
  aux_sym_vs_filter_list_repeat1 = 176,
  aux_sym_sequence_repeat1 = 177,
  aux_sym_string_repeat1 = 178,
  aux_sym_unit_repeat1 = 179,
  aux_sym_reference_repeat1 = 180,
  aux_sym_canonical_repeat1 = 181,
  alias_sym_alias_name = 182,
  alias_sym_code_system = 183,
  alias_sym_code_value = 184,
  alias_sym_reference_type = 185,
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
  [65] = 53,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 67,
  [72] = 72,
  [73] = 11,
  [74] = 74,
  [75] = 75,
  [76] = 11,
  [77] = 12,
  [78] = 78,
  [79] = 12,
  [80] = 80,
  [81] = 11,
  [82] = 12,
  [83] = 83,
  [84] = 11,
  [85] = 12,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 12,
  [90] = 11,
  [91] = 12,
  [92] = 92,
  [93] = 11,
  [94] = 12,
  [95] = 95,
  [96] = 12,
  [97] = 11,
  [98] = 98,
  [99] = 99,
  [100] = 11,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 11,
  [113] = 113,
  [114] = 114,
  [115] = 11,
  [116] = 116,
  [117] = 117,
  [118] = 12,
  [119] = 11,
  [120] = 120,
  [121] = 121,
  [122] = 12,
  [123] = 123,
  [124] = 11,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 11,
  [132] = 12,
  [133] = 12,
  [134] = 12,
  [135] = 12,
  [136] = 11,
  [137] = 11,
  [138] = 12,
  [139] = 11,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 18,
  [144] = 12,
  [145] = 12,
  [146] = 14,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 11,
  [151] = 12,
  [152] = 152,
  [153] = 11,
  [154] = 154,
  [155] = 155,
  [156] = 142,
  [157] = 157,
  [158] = 158,
  [159] = 12,
  [160] = 11,
  [161] = 11,
  [162] = 162,
  [163] = 12,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 12,
  [173] = 141,
  [174] = 11,
  [175] = 175,
  [176] = 176,
  [177] = 11,
  [178] = 11,
  [179] = 12,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 12,
  [184] = 184,
  [185] = 158,
  [186] = 18,
  [187] = 14,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 142,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 141,
  [201] = 201,
  [202] = 202,
  [203] = 142,
  [204] = 204,
  [205] = 205,
  [206] = 141,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 12,
  [214] = 214,
  [215] = 215,
  [216] = 208,
  [217] = 217,
  [218] = 218,
  [219] = 11,
  [220] = 220,
  [221] = 190,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 189,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 59,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 51,
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
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 60,
  [263] = 263,
  [264] = 75,
  [265] = 265,
  [266] = 266,
  [267] = 72,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 11,
  [273] = 74,
  [274] = 12,
  [275] = 275,
  [276] = 275,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 12,
  [287] = 287,
  [288] = 12,
  [289] = 11,
  [290] = 11,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 12,
  [295] = 11,
  [296] = 296,
  [297] = 297,
  [298] = 12,
  [299] = 11,
  [300] = 11,
  [301] = 12,
  [302] = 12,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 11,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 11,
  [312] = 12,
  [313] = 12,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 318,
  [322] = 319,
  [323] = 323,
  [324] = 314,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 318,
  [330] = 319,
  [331] = 331,
  [332] = 323,
  [333] = 314,
  [334] = 325,
  [335] = 11,
  [336] = 12,
  [337] = 11,
  [338] = 317,
  [339] = 339,
  [340] = 22,
  [341] = 12,
  [342] = 11,
  [343] = 21,
  [344] = 11,
  [345] = 12,
  [346] = 318,
  [347] = 347,
  [348] = 319,
  [349] = 331,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 11,
  [355] = 355,
  [356] = 356,
  [357] = 323,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 350,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 12,
  [370] = 370,
  [371] = 371,
  [372] = 325,
  [373] = 11,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 376,
  [379] = 374,
  [380] = 376,
  [381] = 381,
  [382] = 22,
  [383] = 21,
  [384] = 384,
  [385] = 385,
  [386] = 374,
  [387] = 387,
  [388] = 376,
  [389] = 374,
  [390] = 376,
  [391] = 374,
  [392] = 12,
  [393] = 374,
  [394] = 376,
  [395] = 11,
  [396] = 11,
  [397] = 12,
  [398] = 374,
  [399] = 376,
  [400] = 374,
  [401] = 401,
  [402] = 376,
  [403] = 374,
  [404] = 376,
  [405] = 374,
  [406] = 406,
  [407] = 376,
  [408] = 374,
  [409] = 376,
  [410] = 374,
  [411] = 411,
  [412] = 376,
  [413] = 374,
  [414] = 376,
  [415] = 11,
  [416] = 416,
  [417] = 374,
  [418] = 418,
  [419] = 376,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 376,
  [427] = 427,
  [428] = 374,
  [429] = 429,
  [430] = 180,
  [431] = 431,
  [432] = 12,
  [433] = 433,
  [434] = 381,
  [435] = 11,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 374,
  [440] = 440,
  [441] = 376,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 445,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 10,
  [457] = 457,
  [458] = 447,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
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
  [479] = 462,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 484,
  [491] = 491,
  [492] = 492,
  [493] = 491,
  [494] = 459,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 484,
  [499] = 491,
  [500] = 491,
  [501] = 491,
  [502] = 491,
  [503] = 491,
  [504] = 491,
  [505] = 491,
  [506] = 491,
  [507] = 491,
  [508] = 491,
  [509] = 491,
  [510] = 491,
  [511] = 511,
  [512] = 512,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(350);
      if (lookahead == '"') ADVANCE(461);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(482);
      if (lookahead == '(') ADVANCE(379);
      if (lookahead == ')') ADVANCE(381);
      if (lookahead == '*') ADVANCE(459);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == '.') ADVANCE(399);
      if (lookahead == ':') ADVANCE(352);
      if (lookahead == '=') ADVANCE(353);
      if (lookahead == '?') ADVANCE(398);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(409);
      if (lookahead == 'D') ADVANCE(498);
      if (lookahead == 'E') ADVANCE(449);
      if (lookahead == 'I') ADVANCE(422);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'M') ADVANCE(404);
      if (lookahead == 'N') ADVANCE(497);
      if (lookahead == 'P') ADVANCE(412);
      if (lookahead == 'R') ADVANCE(424);
      if (lookahead == 'S') ADVANCE(406);
      if (lookahead == 'T') ADVANCE(481);
      if (lookahead == 'U') ADVANCE(448);
      if (lookahead == 'V') ADVANCE(413);
      if (lookahead == 'X') ADVANCE(402);
      if (lookahead == '^') ADVANCE(456);
      if (lookahead == 'a') ADVANCE(434);
      if (lookahead == 'c') ADVANCE(440);
      if (lookahead == 'e') ADVANCE(450);
      if (lookahead == 'f') ADVANCE(417);
      if (lookahead == 'i') ADVANCE(433);
      if (lookahead == 'n') ADVANCE(414);
      if (lookahead == 'o') ADVANCE(420);
      if (lookahead == 's') ADVANCE(453);
      if (lookahead == 't') ADVANCE(447);
      if (lookahead == 'w') ADVANCE(429);
      if (lookahead == '|') ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(493);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(461);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == 'C') ADVANCE(408);
      if (lookahead == 'R') ADVANCE(428);
      if (lookahead == 'f') ADVANCE(416);
      if (lookahead == 't') ADVANCE(447);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(462);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(460);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(460);
      if (lookahead == '\\') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(463);
      if (lookahead != 0) ADVANCE(464);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(460);
      if (lookahead == 'a') ADVANCE(434);
      if (lookahead == 'f') ADVANCE(446);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(460);
      if (lookahead == 'a') ADVANCE(434);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(460);
      if (lookahead == 'o') ADVANCE(445);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(460);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(463);
      if (lookahead != 0) ADVANCE(464);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '^') ADVANCE(456);
      if (lookahead == 'c') ADVANCE(442);
      if (lookahead == 'e') ADVANCE(450);
      if (lookahead == 'i') ADVANCE(433);
      if (lookahead == 's') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '^') ADVANCE(456);
      if (lookahead == 'i') ADVANCE(435);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == 'c') ADVANCE(442);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == 'i') ADVANCE(435);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(482);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(483);
      END_STATE();
    case 18:
      if (lookahead == ')') ADVANCE(381);
      if (lookahead == 'o') ADVANCE(445);
      if (lookahead == '|') ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 19:
      if (lookahead == ')') ADVANCE(381);
      if (lookahead == 'o') ADVANCE(445);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(459);
      if (lookahead == '?') ADVANCE(398);
      if (lookahead == 'C') ADVANCE(408);
      if (lookahead == 'D') ADVANCE(498);
      if (lookahead == 'M') ADVANCE(403);
      if (lookahead == 'N') ADVANCE(497);
      if (lookahead == 'R') ADVANCE(428);
      if (lookahead == 'S') ADVANCE(405);
      if (lookahead == 'T') ADVANCE(407);
      if (lookahead == 'c') ADVANCE(443);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == 'i') ADVANCE(435);
      if (lookahead == 's') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(399);
      if (lookahead == 'n') ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(458);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(307);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(353);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(387);
      END_STATE();
    case 28:
      if (lookahead == '?') ADVANCE(398);
      if (lookahead == 'C') ADVANCE(408);
      if (lookahead == 'D') ADVANCE(498);
      if (lookahead == 'M') ADVANCE(403);
      if (lookahead == 'N') ADVANCE(497);
      if (lookahead == 'R') ADVANCE(428);
      if (lookahead == 'S') ADVANCE(405);
      if (lookahead == 'T') ADVANCE(407);
      if (lookahead == 'c') ADVANCE(443);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 29:
      if (lookahead == '?') ADVANCE(398);
      if (lookahead == 'C') ADVANCE(408);
      if (lookahead == 'D') ADVANCE(498);
      if (lookahead == 'M') ADVANCE(403);
      if (lookahead == 'N') ADVANCE(497);
      if (lookahead == 'R') ADVANCE(428);
      if (lookahead == 'S') ADVANCE(405);
      if (lookahead == 'T') ADVANCE(407);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 30:
      if (lookahead == '?') ADVANCE(398);
      if (lookahead == 'D') ADVANCE(498);
      if (lookahead == 'M') ADVANCE(403);
      if (lookahead == 'N') ADVANCE(497);
      if (lookahead == 'S') ADVANCE(405);
      if (lookahead == 'T') ADVANCE(407);
      if (lookahead == 'a') ADVANCE(434);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 31:
      if (lookahead == 'C') ADVANCE(408);
      if (lookahead == 'R') ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 32:
      if (lookahead == 'D') ADVANCE(426);
      if (lookahead == 'E') ADVANCE(451);
      if (lookahead == 'S') ADVANCE(425);
      if (lookahead == 'X') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 33:
      if (lookahead == 'D') ADVANCE(426);
      if (lookahead == 'I') ADVANCE(421);
      if (lookahead == 'P') ADVANCE(411);
      if (lookahead == 'T') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 34:
      if (lookahead == 'P') ADVANCE(48);
      END_STATE();
    case 35:
      if (lookahead == 'R') ADVANCE(108);
      END_STATE();
    case 36:
      if (lookahead == 'S') ADVANCE(494);
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 37:
      if (lookahead == 'S') ADVANCE(291);
      END_STATE();
    case 38:
      if (lookahead == 'S') ADVANCE(121);
      END_STATE();
    case 39:
      if (lookahead == 'U') ADVANCE(495);
      END_STATE();
    case 40:
      if (lookahead == 'U') ADVANCE(496);
      END_STATE();
    case 41:
      if (lookahead == '^') ADVANCE(456);
      if (lookahead == 'i') ADVANCE(435);
      if (lookahead == 'o') ADVANCE(418);
      if (lookahead == 's') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 'i') ADVANCE(262);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(253);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(230);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 61:
      if (lookahead == 'b') ADVANCE(169);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(222);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(266);
      if (lookahead == 'm') ADVANCE(213);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(164);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(172);
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(366);
      if (lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(383);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(492);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(488);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(486);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(485);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(487);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 132:
      if (lookahead == 'f') ADVANCE(367);
      END_STATE();
    case 133:
      if (lookahead == 'f') ADVANCE(155);
      END_STATE();
    case 134:
      if (lookahead == 'f') ADVANCE(119);
      END_STATE();
    case 135:
      if (lookahead == 'f') ADVANCE(128);
      END_STATE();
    case 136:
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 137:
      if (lookahead == 'f') ADVANCE(131);
      END_STATE();
    case 138:
      if (lookahead == 'g') ADVANCE(361);
      END_STATE();
    case 139:
      if (lookahead == 'g') ADVANCE(145);
      END_STATE();
    case 140:
      if (lookahead == 'g') ADVANCE(118);
      END_STATE();
    case 141:
      if (lookahead == 'g') ADVANCE(89);
      END_STATE();
    case 142:
      if (lookahead == 'h') ADVANCE(374);
      END_STATE();
    case 143:
      if (lookahead == 'h') ADVANCE(125);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(435);
      if (lookahead == 's') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(147)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(264);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(228);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(362);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(490);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(247);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(287);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(279);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(289);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 169:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(277);
      END_STATE();
    case 171:
      if (lookahead == 'l') ADVANCE(278);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(280);
      END_STATE();
    case 173:
      if (lookahead == 'm') ADVANCE(378);
      END_STATE();
    case 174:
      if (lookahead == 'm') ADVANCE(392);
      END_STATE();
    case 175:
      if (lookahead == 'm') ADVANCE(360);
      END_STATE();
    case 176:
      if (lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(355);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(365);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(364);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(255);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 208:
      if (lookahead == 'p') ADVANCE(209);
      END_STATE();
    case 209:
      if (lookahead == 'p') ADVANCE(150);
      END_STATE();
    case 210:
      if (lookahead == 'p') ADVANCE(271);
      END_STATE();
    case 211:
      if (lookahead == 'p') ADVANCE(224);
      END_STATE();
    case 212:
      if (lookahead == 'p') ADVANCE(224);
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 213:
      if (lookahead == 'p') ADVANCE(168);
      END_STATE();
    case 214:
      if (lookahead == 'q') ADVANCE(275);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(386);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 234:
      if (lookahead == 's') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(234)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 235:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 236:
      if (lookahead == 's') ADVANCE(351);
      END_STATE();
    case 237:
      if (lookahead == 's') ADVANCE(390);
      END_STATE();
    case 238:
      if (lookahead == 's') ADVANCE(384);
      END_STATE();
    case 239:
      if (lookahead == 's') ADVANCE(382);
      END_STATE();
    case 240:
      if (lookahead == 's') ADVANCE(265);
      if (lookahead == 'v') ADVANCE(50);
      END_STATE();
    case 241:
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 242:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 243:
      if (lookahead == 's') ADVANCE(268);
      END_STATE();
    case 244:
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 245:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 246:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 247:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 248:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 249:
      if (lookahead == 's') ADVANCE(269);
      END_STATE();
    case 250:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 251:
      if (lookahead == 's') ADVANCE(250);
      END_STATE();
    case 252:
      if (lookahead == 's') ADVANCE(272);
      if (lookahead == 'v') ADVANCE(50);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(368);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(371);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(377);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(359);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(356);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(393);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 273:
      if (lookahead == 'u') ADVANCE(292);
      if (lookahead == 'x') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(467);
      if (lookahead != 0) ADVANCE(465);
      END_STATE();
    case 274:
      if (lookahead == 'u') ADVANCE(219);
      END_STATE();
    case 275:
      if (lookahead == 'u') ADVANCE(158);
      END_STATE();
    case 276:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 277:
      if (lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 278:
      if (lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 279:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 280:
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 281:
      if (lookahead == 'u') ADVANCE(231);
      END_STATE();
    case 282:
      if (lookahead == 'v') ADVANCE(115);
      END_STATE();
    case 283:
      if (lookahead == 'x') ADVANCE(212);
      END_STATE();
    case 284:
      if (lookahead == 'x') ADVANCE(46);
      END_STATE();
    case 285:
      if (lookahead == 'x') ADVANCE(263);
      END_STATE();
    case 286:
      if (lookahead == 'y') ADVANCE(243);
      END_STATE();
    case 287:
      if (lookahead == 'y') ADVANCE(385);
      END_STATE();
    case 288:
      if (lookahead == 'y') ADVANCE(369);
      END_STATE();
    case 289:
      if (lookahead == 'y') ADVANCE(380);
      END_STATE();
    case 290:
      if (lookahead == 'y') ADVANCE(238);
      END_STATE();
    case 291:
      if (lookahead == 'y') ADVANCE(249);
      END_STATE();
    case 292:
      if (lookahead == '{') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(311);
      END_STATE();
    case 293:
      if (lookahead == '}') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      END_STATE();
    case 294:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(294)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 295:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(469);
      END_STATE();
    case 296:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(472);
      END_STATE();
    case 297:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(475);
      END_STATE();
    case 298:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 299:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      END_STATE();
    case 300:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      END_STATE();
    case 301:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(476);
      END_STATE();
    case 302:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      END_STATE();
    case 303:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(473);
      END_STATE();
    case 304:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      END_STATE();
    case 305:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 306:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      END_STATE();
    case 307:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 308:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(301);
      END_STATE();
    case 309:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 310:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(477);
      END_STATE();
    case 311:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(314);
      END_STATE();
    case 312:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(465);
      END_STATE();
    case 313:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      END_STATE();
    case 314:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(312);
      END_STATE();
    case 315:
      if (eof) ADVANCE(350);
      if (lookahead == '"') ADVANCE(461);
      if (lookahead == '(') ADVANCE(379);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == ':') ADVANCE(352);
      if (lookahead == 'A') ADVANCE(159);
      if (lookahead == 'C') ADVANCE(198);
      if (lookahead == 'D') ADVANCE(120);
      if (lookahead == 'E') ADVANCE(283);
      if (lookahead == 'I') ADVANCE(74);
      if (lookahead == 'L') ADVANCE(199);
      if (lookahead == 'M') ADVANCE(42);
      if (lookahead == 'P') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(84);
      if (lookahead == 'T') ADVANCE(47);
      if (lookahead == 'U') ADVANCE(235);
      if (lookahead == 'V') ADVANCE(44);
      if (lookahead == 'X') ADVANCE(34);
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == 'f') ADVANCE(218);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(315)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(469);
      END_STATE();
    case 316:
      if (eof) ADVANCE(350);
      if (lookahead == '"') ADVANCE(461);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '=') ADVANCE(353);
      if (lookahead == '?') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(159);
      if (lookahead == 'C') ADVANCE(198);
      if (lookahead == 'D') ADVANCE(498);
      if (lookahead == 'E') ADVANCE(285);
      if (lookahead == 'I') ADVANCE(197);
      if (lookahead == 'L') ADVANCE(199);
      if (lookahead == 'M') ADVANCE(36);
      if (lookahead == 'N') ADVANCE(497);
      if (lookahead == 'P') ADVANCE(215);
      if (lookahead == 'R') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(39);
      if (lookahead == 'T') ADVANCE(40);
      if (lookahead == 'V') ADVANCE(44);
      if (lookahead == '^') ADVANCE(456);
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == 'c') ADVANCE(206);
      if (lookahead == 'f') ADVANCE(218);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(316)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(457);
      END_STATE();
    case 317:
      if (eof) ADVANCE(350);
      if (lookahead == '"') ADVANCE(460);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '(') ADVANCE(379);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == ':') ADVANCE(352);
      if (lookahead == '=') ADVANCE(353);
      if (lookahead == 'A') ADVANCE(159);
      if (lookahead == 'C') ADVANCE(198);
      if (lookahead == 'D') ADVANCE(120);
      if (lookahead == 'E') ADVANCE(283);
      if (lookahead == 'I') ADVANCE(74);
      if (lookahead == 'L') ADVANCE(199);
      if (lookahead == 'M') ADVANCE(42);
      if (lookahead == 'P') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(84);
      if (lookahead == 'T') ADVANCE(47);
      if (lookahead == 'U') ADVANCE(235);
      if (lookahead == 'V') ADVANCE(44);
      if (lookahead == 'X') ADVANCE(34);
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead == 'f') ADVANCE(218);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(216);
      if (lookahead == 'p') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(100);
      if (lookahead == 's') ADVANCE(286);
      if (lookahead == 'v') ADVANCE(58);
      if (lookahead == 'w') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(317)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(457);
      END_STATE();
    case 318:
      if (eof) ADVANCE(350);
      if (lookahead == '"') ADVANCE(460);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(437);
      if (lookahead == 'E') ADVANCE(452);
      if (lookahead == 'I') ADVANCE(436);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'M') ADVANCE(410);
      if (lookahead == 'P') ADVANCE(444);
      if (lookahead == 'R') ADVANCE(427);
      if (lookahead == 'V') ADVANCE(413);
      if (lookahead == 'a') ADVANCE(434);
      if (lookahead == 'f') ADVANCE(416);
      if (lookahead == 't') ADVANCE(447);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(318)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 319:
      if (eof) ADVANCE(350);
      if (lookahead == '"') ADVANCE(460);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(437);
      if (lookahead == 'E') ADVANCE(452);
      if (lookahead == 'I') ADVANCE(436);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'M') ADVANCE(410);
      if (lookahead == 'P') ADVANCE(444);
      if (lookahead == 'R') ADVANCE(427);
      if (lookahead == 'V') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(319)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 320:
      if (eof) ADVANCE(350);
      if (lookahead == '"') ADVANCE(460);
      if (lookahead == '(') ADVANCE(379);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == ':') ADVANCE(352);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(437);
      if (lookahead == 'E') ADVANCE(452);
      if (lookahead == 'I') ADVANCE(436);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'M') ADVANCE(410);
      if (lookahead == 'P') ADVANCE(444);
      if (lookahead == 'R') ADVANCE(427);
      if (lookahead == 'V') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(320)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 321:
      if (eof) ADVANCE(350);
      if (lookahead == '"') ADVANCE(460);
      if (lookahead == '(') ADVANCE(379);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(437);
      if (lookahead == 'E') ADVANCE(452);
      if (lookahead == 'I') ADVANCE(436);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'M') ADVANCE(410);
      if (lookahead == 'P') ADVANCE(444);
      if (lookahead == 'R') ADVANCE(427);
      if (lookahead == 'V') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(321)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 322:
      if (eof) ADVANCE(350);
      if (lookahead == '"') ADVANCE(460);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == ':') ADVANCE(352);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(437);
      if (lookahead == 'E') ADVANCE(452);
      if (lookahead == 'I') ADVANCE(436);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'M') ADVANCE(410);
      if (lookahead == 'P') ADVANCE(444);
      if (lookahead == 'R') ADVANCE(427);
      if (lookahead == 'V') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(322)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 323:
      if (eof) ADVANCE(350);
      if (lookahead == '"') ADVANCE(460);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(437);
      if (lookahead == 'E') ADVANCE(452);
      if (lookahead == 'I') ADVANCE(436);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'M') ADVANCE(410);
      if (lookahead == 'P') ADVANCE(444);
      if (lookahead == 'R') ADVANCE(427);
      if (lookahead == 'V') ADVANCE(413);
      if (lookahead == 'a') ADVANCE(434);
      if (lookahead == 'f') ADVANCE(446);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(323)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 324:
      if (eof) ADVANCE(350);
      if (lookahead == '"') ADVANCE(460);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(437);
      if (lookahead == 'E') ADVANCE(452);
      if (lookahead == 'I') ADVANCE(436);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'M') ADVANCE(410);
      if (lookahead == 'P') ADVANCE(444);
      if (lookahead == 'R') ADVANCE(427);
      if (lookahead == 'V') ADVANCE(413);
      if (lookahead == 'a') ADVANCE(434);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(324)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 325:
      if (eof) ADVANCE(350);
      if (lookahead == '"') ADVANCE(460);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(437);
      if (lookahead == 'E') ADVANCE(452);
      if (lookahead == 'I') ADVANCE(436);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'M') ADVANCE(410);
      if (lookahead == 'P') ADVANCE(444);
      if (lookahead == 'R') ADVANCE(427);
      if (lookahead == 'V') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(325)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 326:
      if (eof) ADVANCE(350);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(482);
      if (lookahead == '(') ADVANCE(379);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == ':') ADVANCE(352);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(437);
      if (lookahead == 'E') ADVANCE(452);
      if (lookahead == 'I') ADVANCE(436);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'M') ADVANCE(410);
      if (lookahead == 'P') ADVANCE(444);
      if (lookahead == 'R') ADVANCE(427);
      if (lookahead == 'V') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(326)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 327:
      if (eof) ADVANCE(350);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(482);
      if (lookahead == '(') ADVANCE(379);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(437);
      if (lookahead == 'E') ADVANCE(452);
      if (lookahead == 'I') ADVANCE(436);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'M') ADVANCE(410);
      if (lookahead == 'P') ADVANCE(444);
      if (lookahead == 'R') ADVANCE(427);
      if (lookahead == 'V') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(327)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 328:
      if (eof) ADVANCE(350);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(482);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == ':') ADVANCE(352);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(437);
      if (lookahead == 'E') ADVANCE(452);
      if (lookahead == 'I') ADVANCE(436);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'M') ADVANCE(410);
      if (lookahead == 'P') ADVANCE(444);
      if (lookahead == 'R') ADVANCE(427);
      if (lookahead == 'V') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(328)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 329:
      if (eof) ADVANCE(350);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(482);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(437);
      if (lookahead == 'E') ADVANCE(452);
      if (lookahead == 'I') ADVANCE(436);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'M') ADVANCE(410);
      if (lookahead == 'P') ADVANCE(444);
      if (lookahead == 'R') ADVANCE(427);
      if (lookahead == 'V') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(329)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 330:
      if (eof) ADVANCE(350);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '(') ADVANCE(379);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(437);
      if (lookahead == 'E') ADVANCE(452);
      if (lookahead == 'I') ADVANCE(436);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'M') ADVANCE(410);
      if (lookahead == 'P') ADVANCE(444);
      if (lookahead == 'R') ADVANCE(427);
      if (lookahead == 'V') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(330)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 331:
      if (eof) ADVANCE(350);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(437);
      if (lookahead == 'E') ADVANCE(452);
      if (lookahead == 'I') ADVANCE(436);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'M') ADVANCE(410);
      if (lookahead == 'P') ADVANCE(444);
      if (lookahead == 'R') ADVANCE(427);
      if (lookahead == 'V') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(331)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 332:
      if (eof) ADVANCE(350);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(437);
      if (lookahead == 'E') ADVANCE(452);
      if (lookahead == 'I') ADVANCE(436);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'M') ADVANCE(410);
      if (lookahead == 'P') ADVANCE(444);
      if (lookahead == 'R') ADVANCE(427);
      if (lookahead == 'V') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(332)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 333:
      if (eof) ADVANCE(350);
      if (lookahead == '(') ADVANCE(379);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(437);
      if (lookahead == 'E') ADVANCE(452);
      if (lookahead == 'I') ADVANCE(436);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'M') ADVANCE(410);
      if (lookahead == 'P') ADVANCE(444);
      if (lookahead == 'R') ADVANCE(427);
      if (lookahead == 'V') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(333)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 334:
      if (eof) ADVANCE(350);
      if (lookahead == '(') ADVANCE(379);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == 'A') ADVANCE(159);
      if (lookahead == 'C') ADVANCE(198);
      if (lookahead == 'E') ADVANCE(285);
      if (lookahead == 'I') ADVANCE(197);
      if (lookahead == 'L') ADVANCE(199);
      if (lookahead == 'M') ADVANCE(42);
      if (lookahead == 'P') ADVANCE(215);
      if (lookahead == 'R') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(480);
      if (lookahead == 'V') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(334)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 335:
      if (eof) ADVANCE(350);
      if (lookahead == '*') ADVANCE(459);
      if (lookahead == '?') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(159);
      if (lookahead == 'C') ADVANCE(198);
      if (lookahead == 'D') ADVANCE(498);
      if (lookahead == 'E') ADVANCE(285);
      if (lookahead == 'I') ADVANCE(197);
      if (lookahead == 'L') ADVANCE(199);
      if (lookahead == 'M') ADVANCE(36);
      if (lookahead == 'N') ADVANCE(497);
      if (lookahead == 'P') ADVANCE(215);
      if (lookahead == 'R') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(39);
      if (lookahead == 'T') ADVANCE(40);
      if (lookahead == 'V') ADVANCE(44);
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(335)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(457);
      END_STATE();
    case 336:
      if (eof) ADVANCE(350);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(437);
      if (lookahead == 'E') ADVANCE(452);
      if (lookahead == 'I') ADVANCE(436);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'M') ADVANCE(410);
      if (lookahead == 'P') ADVANCE(444);
      if (lookahead == 'R') ADVANCE(427);
      if (lookahead == 'V') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(435);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(336)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 337:
      if (eof) ADVANCE(350);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == '.') ADVANCE(399);
      if (lookahead == '=') ADVANCE(353);
      if (lookahead == '?') ADVANCE(398);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(437);
      if (lookahead == 'D') ADVANCE(498);
      if (lookahead == 'E') ADVANCE(452);
      if (lookahead == 'I') ADVANCE(436);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'M') ADVANCE(404);
      if (lookahead == 'N') ADVANCE(497);
      if (lookahead == 'P') ADVANCE(444);
      if (lookahead == 'R') ADVANCE(427);
      if (lookahead == 'S') ADVANCE(405);
      if (lookahead == 'T') ADVANCE(407);
      if (lookahead == 'V') ADVANCE(413);
      if (lookahead == '^') ADVANCE(456);
      if (lookahead == 'a') ADVANCE(434);
      if (lookahead == 'c') ADVANCE(441);
      if (lookahead == 'f') ADVANCE(446);
      if (lookahead == 'i') ADVANCE(435);
      if (lookahead == 'o') ADVANCE(419);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(337)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 338:
      if (eof) ADVANCE(350);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == '=') ADVANCE(353);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(437);
      if (lookahead == 'E') ADVANCE(452);
      if (lookahead == 'I') ADVANCE(436);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'M') ADVANCE(410);
      if (lookahead == 'P') ADVANCE(444);
      if (lookahead == 'R') ADVANCE(427);
      if (lookahead == 'V') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(435);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(338)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 339:
      if (eof) ADVANCE(350);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(437);
      if (lookahead == 'D') ADVANCE(426);
      if (lookahead == 'E') ADVANCE(452);
      if (lookahead == 'I') ADVANCE(432);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'M') ADVANCE(410);
      if (lookahead == 'P') ADVANCE(444);
      if (lookahead == 'R') ADVANCE(427);
      if (lookahead == 'T') ADVANCE(430);
      if (lookahead == 'U') ADVANCE(448);
      if (lookahead == 'V') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(339)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 340:
      if (eof) ADVANCE(350);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(437);
      if (lookahead == 'D') ADVANCE(426);
      if (lookahead == 'E') ADVANCE(452);
      if (lookahead == 'I') ADVANCE(423);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'M') ADVANCE(410);
      if (lookahead == 'P') ADVANCE(412);
      if (lookahead == 'R') ADVANCE(427);
      if (lookahead == 'T') ADVANCE(430);
      if (lookahead == 'V') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(340)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 341:
      if (eof) ADVANCE(350);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(437);
      if (lookahead == 'D') ADVANCE(426);
      if (lookahead == 'E') ADVANCE(452);
      if (lookahead == 'I') ADVANCE(423);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'M') ADVANCE(410);
      if (lookahead == 'P') ADVANCE(444);
      if (lookahead == 'R') ADVANCE(427);
      if (lookahead == 'S') ADVANCE(439);
      if (lookahead == 'T') ADVANCE(415);
      if (lookahead == 'V') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(341)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 342:
      if (eof) ADVANCE(350);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(437);
      if (lookahead == 'D') ADVANCE(426);
      if (lookahead == 'E') ADVANCE(452);
      if (lookahead == 'I') ADVANCE(423);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'M') ADVANCE(410);
      if (lookahead == 'P') ADVANCE(444);
      if (lookahead == 'R') ADVANCE(427);
      if (lookahead == 'T') ADVANCE(430);
      if (lookahead == 'V') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(342)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 343:
      if (eof) ADVANCE(350);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(437);
      if (lookahead == 'E') ADVANCE(452);
      if (lookahead == 'I') ADVANCE(436);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'M') ADVANCE(410);
      if (lookahead == 'P') ADVANCE(444);
      if (lookahead == 'R') ADVANCE(427);
      if (lookahead == 'V') ADVANCE(413);
      if (lookahead == 'a') ADVANCE(434);
      if (lookahead == 'w') ADVANCE(429);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(343)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 344:
      if (eof) ADVANCE(350);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(437);
      if (lookahead == 'E') ADVANCE(452);
      if (lookahead == 'I') ADVANCE(436);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'M') ADVANCE(410);
      if (lookahead == 'P') ADVANCE(444);
      if (lookahead == 'R') ADVANCE(427);
      if (lookahead == 'V') ADVANCE(413);
      if (lookahead == 'a') ADVANCE(434);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(344)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 345:
      if (eof) ADVANCE(350);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(437);
      if (lookahead == 'E') ADVANCE(452);
      if (lookahead == 'I') ADVANCE(436);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'M') ADVANCE(410);
      if (lookahead == 'P') ADVANCE(444);
      if (lookahead == 'R') ADVANCE(427);
      if (lookahead == 'V') ADVANCE(413);
      if (lookahead == 'o') ADVANCE(445);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(345)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 346:
      if (eof) ADVANCE(350);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(437);
      if (lookahead == 'E') ADVANCE(452);
      if (lookahead == 'I') ADVANCE(436);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'M') ADVANCE(410);
      if (lookahead == 'P') ADVANCE(444);
      if (lookahead == 'R') ADVANCE(427);
      if (lookahead == 'V') ADVANCE(413);
      if (lookahead == 'w') ADVANCE(429);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(346)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 347:
      if (eof) ADVANCE(350);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(437);
      if (lookahead == 'E') ADVANCE(452);
      if (lookahead == 'I') ADVANCE(436);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'M') ADVANCE(410);
      if (lookahead == 'P') ADVANCE(444);
      if (lookahead == 'R') ADVANCE(427);
      if (lookahead == 'V') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(347)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 348:
      if (eof) ADVANCE(350);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(437);
      if (lookahead == 'D') ADVANCE(426);
      if (lookahead == 'E') ADVANCE(449);
      if (lookahead == 'I') ADVANCE(436);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'M') ADVANCE(410);
      if (lookahead == 'P') ADVANCE(444);
      if (lookahead == 'R') ADVANCE(427);
      if (lookahead == 'S') ADVANCE(425);
      if (lookahead == 'V') ADVANCE(413);
      if (lookahead == 'X') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(348)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 349:
      if (eof) ADVANCE(350);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'C') ADVANCE(437);
      if (lookahead == 'E') ADVANCE(452);
      if (lookahead == 'I') ADVANCE(436);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'M') ADVANCE(410);
      if (lookahead == 'P') ADVANCE(444);
      if (lookahead == 'R') ADVANCE(427);
      if (lookahead == 'V') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(349)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(397);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_Alias);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_Profile);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_Extension);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_Invariant);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_Instance);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_Instance);
      if (lookahead == 'O') ADVANCE(132);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_ValueSet);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_CodeSystem);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_Mapping);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_Logical);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_Resource);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_Description);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_Expression);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_Id);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_InstanceOf);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_Parent);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_Severity);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_Source);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_Target);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_Title);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_Usage);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_XPath);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_contentReference);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_insert);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_exactly);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_obeys);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_exclude);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_codes);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_valueset);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '!') ADVANCE(493);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(458);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '>') ADVANCE(387);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'P') ADVANCE(48);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'S') ADVANCE(494);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'S') ADVANCE(494);
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'U') ADVANCE(495);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'U') ADVANCE(495);
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'U') ADVANCE(496);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 'i') ADVANCE(262);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'b') ADVANCE(85);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'b') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'b') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead == 'r') ADVANCE(386);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(366);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(366);
      if (lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(366);
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'h') ADVANCE(125);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'i') ADVANCE(262);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(386);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(212);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(72);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(211);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(263);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'y') ADVANCE(243);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(457);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(469);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_cardinality_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(457);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(464);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(464);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(465);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(466);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '.') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(469);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(469);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(468);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(304);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(305);
      if (lookahead == 'Z') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(472);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '-') ADVANCE(309);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(304);
      if (lookahead == '.') ADVANCE(302);
      if (lookahead == 'Z') ADVANCE(475);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(304);
      if (lookahead == ':') ADVANCE(305);
      if (lookahead == 'Z') ADVANCE(475);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(304);
      if (lookahead == ':') ADVANCE(308);
      if (lookahead == 'Z') ADVANCE(475);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(304);
      if (lookahead == 'Z') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_T);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'U') ADVANCE(496);
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 'i') ADVANCE(262);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(483);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_example);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_preferred);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_extensible);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_Reference);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_Canonical);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_named);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_QMARK_BANG);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_MS);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_SU);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_TU);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 317},
  [3] = {.lex_state = 317},
  [4] = {.lex_state = 317},
  [5] = {.lex_state = 317},
  [6] = {.lex_state = 317},
  [7] = {.lex_state = 317},
  [8] = {.lex_state = 317},
  [9] = {.lex_state = 316},
  [10] = {.lex_state = 317},
  [11] = {.lex_state = 337},
  [12] = {.lex_state = 337},
  [13] = {.lex_state = 316},
  [14] = {.lex_state = 315},
  [15] = {.lex_state = 316},
  [16] = {.lex_state = 317},
  [17] = {.lex_state = 317},
  [18] = {.lex_state = 315},
  [19] = {.lex_state = 316},
  [20] = {.lex_state = 316},
  [21] = {.lex_state = 317},
  [22] = {.lex_state = 317},
  [23] = {.lex_state = 317},
  [24] = {.lex_state = 317},
  [25] = {.lex_state = 317},
  [26] = {.lex_state = 317},
  [27] = {.lex_state = 317},
  [28] = {.lex_state = 317},
  [29] = {.lex_state = 317},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 317},
  [35] = {.lex_state = 317},
  [36] = {.lex_state = 317},
  [37] = {.lex_state = 317},
  [38] = {.lex_state = 317},
  [39] = {.lex_state = 317},
  [40] = {.lex_state = 318},
  [41] = {.lex_state = 317},
  [42] = {.lex_state = 317},
  [43] = {.lex_state = 317},
  [44] = {.lex_state = 317},
  [45] = {.lex_state = 317},
  [46] = {.lex_state = 317},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 317},
  [49] = {.lex_state = 317},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 335},
  [52] = {.lex_state = 317},
  [53] = {.lex_state = 326},
  [54] = {.lex_state = 316},
  [55] = {.lex_state = 317},
  [56] = {.lex_state = 316},
  [57] = {.lex_state = 316},
  [58] = {.lex_state = 316},
  [59] = {.lex_state = 335},
  [60] = {.lex_state = 316},
  [61] = {.lex_state = 316},
  [62] = {.lex_state = 317},
  [63] = {.lex_state = 316},
  [64] = {.lex_state = 317},
  [65] = {.lex_state = 328},
  [66] = {.lex_state = 316},
  [67] = {.lex_state = 327},
  [68] = {.lex_state = 316},
  [69] = {.lex_state = 317},
  [70] = {.lex_state = 319},
  [71] = {.lex_state = 329},
  [72] = {.lex_state = 316},
  [73] = {.lex_state = 318},
  [74] = {.lex_state = 316},
  [75] = {.lex_state = 316},
  [76] = {.lex_state = 341},
  [77] = {.lex_state = 341},
  [78] = {.lex_state = 319},
  [79] = {.lex_state = 318},
  [80] = {.lex_state = 28},
  [81] = {.lex_state = 340},
  [82] = {.lex_state = 340},
  [83] = {.lex_state = 317},
  [84] = {.lex_state = 339},
  [85] = {.lex_state = 339},
  [86] = {.lex_state = 318},
  [87] = {.lex_state = 331},
  [88] = {.lex_state = 317},
  [89] = {.lex_state = 348},
  [90] = {.lex_state = 348},
  [91] = {.lex_state = 342},
  [92] = {.lex_state = 29},
  [93] = {.lex_state = 320},
  [94] = {.lex_state = 320},
  [95] = {.lex_state = 317},
  [96] = {.lex_state = 323},
  [97] = {.lex_state = 323},
  [98] = {.lex_state = 317},
  [99] = {.lex_state = 317},
  [100] = {.lex_state = 342},
  [101] = {.lex_state = 317},
  [102] = {.lex_state = 317},
  [103] = {.lex_state = 317},
  [104] = {.lex_state = 12},
  [105] = {.lex_state = 317},
  [106] = {.lex_state = 331},
  [107] = {.lex_state = 317},
  [108] = {.lex_state = 317},
  [109] = {.lex_state = 317},
  [110] = {.lex_state = 317},
  [111] = {.lex_state = 317},
  [112] = {.lex_state = 321},
  [113] = {.lex_state = 316},
  [114] = {.lex_state = 317},
  [115] = {.lex_state = 336},
  [116] = {.lex_state = 316},
  [117] = {.lex_state = 317},
  [118] = {.lex_state = 322},
  [119] = {.lex_state = 343},
  [120] = {.lex_state = 316},
  [121] = {.lex_state = 317},
  [122] = {.lex_state = 343},
  [123] = {.lex_state = 317},
  [124] = {.lex_state = 322},
  [125] = {.lex_state = 317},
  [126] = {.lex_state = 317},
  [127] = {.lex_state = 316},
  [128] = {.lex_state = 317},
  [129] = {.lex_state = 317},
  [130] = {.lex_state = 317},
  [131] = {.lex_state = 324},
  [132] = {.lex_state = 338},
  [133] = {.lex_state = 336},
  [134] = {.lex_state = 321},
  [135] = {.lex_state = 330},
  [136] = {.lex_state = 330},
  [137] = {.lex_state = 338},
  [138] = {.lex_state = 324},
  [139] = {.lex_state = 344},
  [140] = {.lex_state = 317},
  [141] = {.lex_state = 317},
  [142] = {.lex_state = 317},
  [143] = {.lex_state = 319},
  [144] = {.lex_state = 344},
  [145] = {.lex_state = 331},
  [146] = {.lex_state = 319},
  [147] = {.lex_state = 317},
  [148] = {.lex_state = 317},
  [149] = {.lex_state = 317},
  [150] = {.lex_state = 331},
  [151] = {.lex_state = 333},
  [152] = {.lex_state = 317},
  [153] = {.lex_state = 333},
  [154] = {.lex_state = 317},
  [155] = {.lex_state = 317},
  [156] = {.lex_state = 317},
  [157] = {.lex_state = 317},
  [158] = {.lex_state = 317},
  [159] = {.lex_state = 345},
  [160] = {.lex_state = 345},
  [161] = {.lex_state = 346},
  [162] = {.lex_state = 317},
  [163] = {.lex_state = 346},
  [164] = {.lex_state = 317},
  [165] = {.lex_state = 317},
  [166] = {.lex_state = 317},
  [167] = {.lex_state = 317},
  [168] = {.lex_state = 317},
  [169] = {.lex_state = 317},
  [170] = {.lex_state = 317},
  [171] = {.lex_state = 317},
  [172] = {.lex_state = 325},
  [173] = {.lex_state = 317},
  [174] = {.lex_state = 325},
  [175] = {.lex_state = 317},
  [176] = {.lex_state = 317},
  [177] = {.lex_state = 347},
  [178] = {.lex_state = 332},
  [179] = {.lex_state = 347},
  [180] = {.lex_state = 317},
  [181] = {.lex_state = 317},
  [182] = {.lex_state = 317},
  [183] = {.lex_state = 332},
  [184] = {.lex_state = 317},
  [185] = {.lex_state = 317},
  [186] = {.lex_state = 331},
  [187] = {.lex_state = 331},
  [188] = {.lex_state = 317},
  [189] = {.lex_state = 317},
  [190] = {.lex_state = 317},
  [191] = {.lex_state = 317},
  [192] = {.lex_state = 317},
  [193] = {.lex_state = 317},
  [194] = {.lex_state = 317},
  [195] = {.lex_state = 317},
  [196] = {.lex_state = 317},
  [197] = {.lex_state = 334},
  [198] = {.lex_state = 317},
  [199] = {.lex_state = 317},
  [200] = {.lex_state = 317},
  [201] = {.lex_state = 317},
  [202] = {.lex_state = 317},
  [203] = {.lex_state = 317},
  [204] = {.lex_state = 317},
  [205] = {.lex_state = 317},
  [206] = {.lex_state = 317},
  [207] = {.lex_state = 317},
  [208] = {.lex_state = 317},
  [209] = {.lex_state = 317},
  [210] = {.lex_state = 317},
  [211] = {.lex_state = 317},
  [212] = {.lex_state = 317},
  [213] = {.lex_state = 349},
  [214] = {.lex_state = 317},
  [215] = {.lex_state = 317},
  [216] = {.lex_state = 317},
  [217] = {.lex_state = 317},
  [218] = {.lex_state = 317},
  [219] = {.lex_state = 349},
  [220] = {.lex_state = 317},
  [221] = {.lex_state = 317},
  [222] = {.lex_state = 317},
  [223] = {.lex_state = 317},
  [224] = {.lex_state = 317},
  [225] = {.lex_state = 317},
  [226] = {.lex_state = 317},
  [227] = {.lex_state = 317},
  [228] = {.lex_state = 317},
  [229] = {.lex_state = 317},
  [230] = {.lex_state = 317},
  [231] = {.lex_state = 317},
  [232] = {.lex_state = 317},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 317},
  [235] = {.lex_state = 317},
  [236] = {.lex_state = 317},
  [237] = {.lex_state = 20},
  [238] = {.lex_state = 317},
  [239] = {.lex_state = 317},
  [240] = {.lex_state = 317},
  [241] = {.lex_state = 317},
  [242] = {.lex_state = 317},
  [243] = {.lex_state = 317},
  [244] = {.lex_state = 20},
  [245] = {.lex_state = 317},
  [246] = {.lex_state = 317},
  [247] = {.lex_state = 317},
  [248] = {.lex_state = 317},
  [249] = {.lex_state = 317},
  [250] = {.lex_state = 317},
  [251] = {.lex_state = 317},
  [252] = {.lex_state = 317},
  [253] = {.lex_state = 317},
  [254] = {.lex_state = 317},
  [255] = {.lex_state = 317},
  [256] = {.lex_state = 317},
  [257] = {.lex_state = 317},
  [258] = {.lex_state = 317},
  [259] = {.lex_state = 317},
  [260] = {.lex_state = 317},
  [261] = {.lex_state = 317},
  [262] = {.lex_state = 29},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 28},
  [265] = {.lex_state = 316},
  [266] = {.lex_state = 14},
  [267] = {.lex_state = 28},
  [268] = {.lex_state = 317},
  [269] = {.lex_state = 317},
  [270] = {.lex_state = 41},
  [271] = {.lex_state = 41},
  [272] = {.lex_state = 30},
  [273] = {.lex_state = 29},
  [274] = {.lex_state = 30},
  [275] = {.lex_state = 31},
  [276] = {.lex_state = 31},
  [277] = {.lex_state = 31},
  [278] = {.lex_state = 316},
  [279] = {.lex_state = 21},
  [280] = {.lex_state = 15},
  [281] = {.lex_state = 15},
  [282] = {.lex_state = 16},
  [283] = {.lex_state = 15},
  [284] = {.lex_state = 16},
  [285] = {.lex_state = 316},
  [286] = {.lex_state = 32},
  [287] = {.lex_state = 147},
  [288] = {.lex_state = 33},
  [289] = {.lex_state = 33},
  [290] = {.lex_state = 32},
  [291] = {.lex_state = 294},
  [292] = {.lex_state = 294},
  [293] = {.lex_state = 294},
  [294] = {.lex_state = 7},
  [295] = {.lex_state = 18},
  [296] = {.lex_state = 234},
  [297] = {.lex_state = 294},
  [298] = {.lex_state = 13},
  [299] = {.lex_state = 13},
  [300] = {.lex_state = 13},
  [301] = {.lex_state = 18},
  [302] = {.lex_state = 22},
  [303] = {.lex_state = 26},
  [304] = {.lex_state = 16},
  [305] = {.lex_state = 13},
  [306] = {.lex_state = 22},
  [307] = {.lex_state = 16},
  [308] = {.lex_state = 16},
  [309] = {.lex_state = 16},
  [310] = {.lex_state = 16},
  [311] = {.lex_state = 7},
  [312] = {.lex_state = 5},
  [313] = {.lex_state = 9},
  [314] = {.lex_state = 6},
  [315] = {.lex_state = 317},
  [316] = {.lex_state = 11},
  [317] = {.lex_state = 317},
  [318] = {.lex_state = 294},
  [319] = {.lex_state = 294},
  [320] = {.lex_state = 317},
  [321] = {.lex_state = 294},
  [322] = {.lex_state = 294},
  [323] = {.lex_state = 6},
  [324] = {.lex_state = 6},
  [325] = {.lex_state = 294},
  [326] = {.lex_state = 294},
  [327] = {.lex_state = 317},
  [328] = {.lex_state = 294},
  [329] = {.lex_state = 294},
  [330] = {.lex_state = 294},
  [331] = {.lex_state = 294},
  [332] = {.lex_state = 6},
  [333] = {.lex_state = 6},
  [334] = {.lex_state = 294},
  [335] = {.lex_state = 23},
  [336] = {.lex_state = 23},
  [337] = {.lex_state = 19},
  [338] = {.lex_state = 317},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 13},
  [341] = {.lex_state = 19},
  [342] = {.lex_state = 5},
  [343] = {.lex_state = 13},
  [344] = {.lex_state = 8},
  [345] = {.lex_state = 8},
  [346] = {.lex_state = 294},
  [347] = {.lex_state = 294},
  [348] = {.lex_state = 294},
  [349] = {.lex_state = 294},
  [350] = {.lex_state = 11},
  [351] = {.lex_state = 294},
  [352] = {.lex_state = 317},
  [353] = {.lex_state = 11},
  [354] = {.lex_state = 9},
  [355] = {.lex_state = 294},
  [356] = {.lex_state = 294},
  [357] = {.lex_state = 6},
  [358] = {.lex_state = 294},
  [359] = {.lex_state = 317},
  [360] = {.lex_state = 294},
  [361] = {.lex_state = 294},
  [362] = {.lex_state = 294},
  [363] = {.lex_state = 6},
  [364] = {.lex_state = 294},
  [365] = {.lex_state = 294},
  [366] = {.lex_state = 294},
  [367] = {.lex_state = 294},
  [368] = {.lex_state = 294},
  [369] = {.lex_state = 15},
  [370] = {.lex_state = 317},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 294},
  [373] = {.lex_state = 15},
  [374] = {.lex_state = 294},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 294},
  [377] = {.lex_state = 317},
  [378] = {.lex_state = 294},
  [379] = {.lex_state = 294},
  [380] = {.lex_state = 294},
  [381] = {.lex_state = 315},
  [382] = {.lex_state = 15},
  [383] = {.lex_state = 15},
  [384] = {.lex_state = 294},
  [385] = {.lex_state = 294},
  [386] = {.lex_state = 294},
  [387] = {.lex_state = 17},
  [388] = {.lex_state = 294},
  [389] = {.lex_state = 294},
  [390] = {.lex_state = 294},
  [391] = {.lex_state = 294},
  [392] = {.lex_state = 26},
  [393] = {.lex_state = 294},
  [394] = {.lex_state = 294},
  [395] = {.lex_state = 26},
  [396] = {.lex_state = 16},
  [397] = {.lex_state = 16},
  [398] = {.lex_state = 294},
  [399] = {.lex_state = 294},
  [400] = {.lex_state = 294},
  [401] = {.lex_state = 294},
  [402] = {.lex_state = 294},
  [403] = {.lex_state = 294},
  [404] = {.lex_state = 294},
  [405] = {.lex_state = 294},
  [406] = {.lex_state = 317},
  [407] = {.lex_state = 294},
  [408] = {.lex_state = 294},
  [409] = {.lex_state = 294},
  [410] = {.lex_state = 294},
  [411] = {.lex_state = 294},
  [412] = {.lex_state = 294},
  [413] = {.lex_state = 294},
  [414] = {.lex_state = 294},
  [415] = {.lex_state = 26},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 294},
  [418] = {.lex_state = 17},
  [419] = {.lex_state = 294},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 294},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 294},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 294},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 294},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 317},
  [431] = {.lex_state = 294},
  [432] = {.lex_state = 10},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 315},
  [435] = {.lex_state = 10},
  [436] = {.lex_state = 317},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 294},
  [439] = {.lex_state = 294},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 294},
  [442] = {.lex_state = 17},
  [443] = {.lex_state = 317},
  [444] = {.lex_state = 317},
  [445] = {.lex_state = 317},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 317},
  [449] = {.lex_state = 317},
  [450] = {.lex_state = 317},
  [451] = {.lex_state = 317},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 317},
  [454] = {.lex_state = 317},
  [455] = {.lex_state = 16},
  [456] = {.lex_state = 26},
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
  [487] = {.lex_state = 334},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 317},
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
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
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
    [sym_doc] = STATE(473),
    [sym_alias] = STATE(50),
    [sym_profile] = STATE(50),
    [sym_extension] = STATE(50),
    [sym_invariant] = STATE(50),
    [sym_instance] = STATE(50),
    [sym_valueset] = STATE(50),
    [sym_codesystem] = STATE(50),
    [sym_mapping] = STATE(50),
    [sym_logical] = STATE(50),
    [sym_resource] = STATE(50),
    [aux_sym_doc_repeat1] = STATE(50),
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
    STATE(29), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(49), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(238), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(128), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(245), 10,
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
  [60] = 11,
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
    STATE(23), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(238), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(128), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(245), 10,
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
  [120] = 11,
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
    STATE(25), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(49), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(238), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(128), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(245), 10,
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
  [180] = 11,
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
    STATE(24), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(238), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(128), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(245), 10,
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
  [240] = 10,
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
    STATE(45), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(128), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(245), 10,
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
  [295] = 10,
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
    STATE(49), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(128), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(245), 10,
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
  [350] = 10,
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
    STATE(36), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(49), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(128), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(245), 10,
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
  [405] = 16,
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
    STATE(80), 1,
      sym_cardinality,
    STATE(265), 1,
      aux_sym_flag_rule_repeat1,
    STATE(480), 1,
      sym_caret_path,
    STATE(61), 2,
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
  [471] = 2,
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
  [507] = 4,
    ACTIONS(81), 1,
      aux_sym_sequence_token1,
    ACTIONS(83), 1,
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
  [546] = 4,
    ACTIONS(87), 1,
      aux_sym_sequence_token1,
    ACTIONS(90), 1,
      aux_sym_cardinality_token1,
    STATE(12), 1,
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
  [585] = 13,
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
    STATE(480), 1,
      sym_caret_path,
    STATE(61), 2,
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
  [642] = 2,
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
  [676] = 1,
    ACTIONS(96), 29,
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
  [708] = 11,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(100), 1,
      anon_sym_Id,
    ACTIONS(102), 1,
      anon_sym_Source,
    ACTIONS(104), 1,
      anon_sym_Target,
    ACTIONS(106), 1,
      anon_sym_STAR,
    STATE(41), 2,
      sym_mapping_metadata,
      aux_sym_mapping_repeat1,
    STATE(98), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(248), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    STATE(105), 5,
      sym_description,
      sym_id,
      sym_source,
      sym_target,
      sym_title,
    ACTIONS(98), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [760] = 11,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(100), 1,
      anon_sym_Id,
    ACTIONS(102), 1,
      anon_sym_Source,
    ACTIONS(104), 1,
      anon_sym_Target,
    ACTIONS(106), 1,
      anon_sym_STAR,
    STATE(16), 2,
      sym_mapping_metadata,
      aux_sym_mapping_repeat1,
    STATE(99), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(248), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    STATE(105), 5,
      sym_description,
      sym_id,
      sym_source,
      sym_target,
      sym_title,
    ACTIONS(108), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [812] = 2,
    ACTIONS(112), 2,
      anon_sym_Instance,
      anon_sym_DQUOTE,
    ACTIONS(110), 27,
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
  [846] = 2,
    ACTIONS(114), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
    ACTIONS(96), 26,
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
  [879] = 2,
    ACTIONS(75), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
    ACTIONS(96), 26,
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
  [912] = 2,
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
  [944] = 2,
    ACTIONS(123), 1,
      anon_sym_Instance,
    ACTIONS(121), 26,
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
  [976] = 5,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(28), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(238), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(245), 10,
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
  [1014] = 5,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(28), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(238), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(245), 10,
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
  [1052] = 5,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(28), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(238), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(245), 10,
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
  [1090] = 11,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(129), 1,
      anon_sym_Instance,
    ACTIONS(131), 1,
      anon_sym_InstanceOf,
    ACTIONS(133), 1,
      anon_sym_Usage,
    ACTIONS(135), 1,
      anon_sym_STAR,
    STATE(27), 2,
      sym_instance_metadata,
      aux_sym_instance_repeat1,
    STATE(103), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(256), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    STATE(121), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(127), 10,
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
  [1140] = 11,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(131), 1,
      anon_sym_InstanceOf,
    ACTIONS(133), 1,
      anon_sym_Usage,
    ACTIONS(135), 1,
      anon_sym_STAR,
    ACTIONS(139), 1,
      anon_sym_Instance,
    STATE(48), 2,
      sym_instance_metadata,
      aux_sym_instance_repeat1,
    STATE(111), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(256), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    STATE(121), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(137), 10,
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
  [1190] = 5,
    ACTIONS(143), 1,
      anon_sym_STAR,
    STATE(28), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(238), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(245), 10,
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
    ACTIONS(141), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1228] = 5,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(28), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(238), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(245), 10,
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
    ACTIONS(146), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1266] = 18,
    ACTIONS(150), 1,
      anon_sym_POUND,
    ACTIONS(152), 1,
      aux_sym_sequence_token1,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(158), 1,
      sym_number,
    ACTIONS(160), 1,
      sym_date,
    ACTIONS(162), 1,
      sym_time,
    ACTIONS(164), 1,
      anon_sym_Reference,
    ACTIONS(166), 1,
      anon_sym_Canonical,
    STATE(107), 1,
      sym_code,
    STATE(149), 1,
      sym_reference,
    STATE(150), 1,
      aux_sym_sequence_repeat1,
    STATE(202), 1,
      sym_quantity,
    STATE(216), 1,
      sym_sequence,
    STATE(243), 1,
      sym_value,
    STATE(459), 1,
      sym_ratio_part,
    ACTIONS(148), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(218), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [1329] = 18,
    ACTIONS(150), 1,
      anon_sym_POUND,
    ACTIONS(152), 1,
      aux_sym_sequence_token1,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(158), 1,
      sym_number,
    ACTIONS(160), 1,
      sym_date,
    ACTIONS(162), 1,
      sym_time,
    ACTIONS(164), 1,
      anon_sym_Reference,
    ACTIONS(166), 1,
      anon_sym_Canonical,
    STATE(107), 1,
      sym_code,
    STATE(149), 1,
      sym_reference,
    STATE(150), 1,
      aux_sym_sequence_repeat1,
    STATE(202), 1,
      sym_quantity,
    STATE(216), 1,
      sym_sequence,
    STATE(258), 1,
      sym_value,
    STATE(459), 1,
      sym_ratio_part,
    ACTIONS(148), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(218), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [1392] = 18,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(160), 1,
      sym_date,
    ACTIONS(162), 1,
      sym_time,
    ACTIONS(164), 1,
      anon_sym_Reference,
    ACTIONS(166), 1,
      anon_sym_Canonical,
    ACTIONS(168), 1,
      anon_sym_POUND,
    ACTIONS(170), 1,
      aux_sym_sequence_token1,
    ACTIONS(172), 1,
      sym_number,
    STATE(107), 1,
      sym_code,
    STATE(136), 1,
      aux_sym_sequence_repeat1,
    STATE(149), 1,
      sym_reference,
    STATE(202), 1,
      sym_quantity,
    STATE(208), 1,
      sym_sequence,
    STATE(214), 1,
      sym_value,
    STATE(494), 1,
      sym_ratio_part,
    ACTIONS(148), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(218), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [1455] = 18,
    ACTIONS(150), 1,
      anon_sym_POUND,
    ACTIONS(152), 1,
      aux_sym_sequence_token1,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(158), 1,
      sym_number,
    ACTIONS(160), 1,
      sym_date,
    ACTIONS(162), 1,
      sym_time,
    ACTIONS(164), 1,
      anon_sym_Reference,
    ACTIONS(166), 1,
      anon_sym_Canonical,
    STATE(107), 1,
      sym_code,
    STATE(149), 1,
      sym_reference,
    STATE(150), 1,
      aux_sym_sequence_repeat1,
    STATE(202), 1,
      sym_quantity,
    STATE(216), 1,
      sym_sequence,
    STATE(260), 1,
      sym_value,
    STATE(459), 1,
      sym_ratio_part,
    ACTIONS(148), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(218), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [1518] = 9,
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
    STATE(102), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(170), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(250), 3,
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
  [1562] = 9,
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
    STATE(110), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(170), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(250), 3,
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
  [1606] = 4,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(44), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(245), 10,
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
  [1639] = 9,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(176), 1,
      anon_sym_Id,
    ACTIONS(186), 1,
      anon_sym_STAR,
    STATE(64), 2,
      sym_cs_metadata,
      aux_sym_codesystem_repeat1,
    STATE(129), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(261), 2,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
    STATE(171), 3,
      sym_description,
      sym_id,
      sym_title,
    ACTIONS(184), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1682] = 9,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(176), 1,
      anon_sym_Id,
    ACTIONS(186), 1,
      anon_sym_STAR,
    STATE(37), 2,
      sym_cs_metadata,
      aux_sym_codesystem_repeat1,
    STATE(117), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(261), 2,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
    STATE(171), 3,
      sym_description,
      sym_id,
      sym_title,
    ACTIONS(188), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1725] = 4,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(44), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(245), 10,
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
    ACTIONS(190), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1758] = 10,
    ACTIONS(196), 1,
      anon_sym_POUND,
    ACTIONS(198), 1,
      aux_sym_sequence_token1,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    STATE(107), 1,
      sym_code,
    STATE(217), 1,
      sym_vs_filter_value,
    STATE(396), 1,
      aux_sym_sequence_repeat1,
    STATE(510), 1,
      sym_sequence,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(220), 2,
      sym_code_string,
      sym_string,
    ACTIONS(192), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [1803] = 8,
    ACTIONS(204), 1,
      anon_sym_Description,
    ACTIONS(207), 1,
      anon_sym_Id,
    ACTIONS(210), 1,
      anon_sym_Source,
    ACTIONS(213), 1,
      anon_sym_Target,
    ACTIONS(216), 1,
      anon_sym_Title,
    STATE(41), 2,
      sym_mapping_metadata,
      aux_sym_mapping_repeat1,
    STATE(105), 5,
      sym_description,
      sym_id,
      sym_source,
      sym_target,
      sym_title,
    ACTIONS(202), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [1844] = 2,
    ACTIONS(221), 1,
      anon_sym_Instance,
    ACTIONS(219), 23,
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
  [1873] = 2,
    ACTIONS(225), 1,
      anon_sym_Instance,
    ACTIONS(223), 23,
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
  [1902] = 4,
    ACTIONS(229), 1,
      anon_sym_STAR,
    STATE(44), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(245), 10,
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
    ACTIONS(227), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1935] = 4,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(44), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(245), 10,
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
  [1968] = 2,
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
  [1996] = 12,
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
  [2043] = 8,
    ACTIONS(270), 1,
      anon_sym_Instance,
    ACTIONS(272), 1,
      anon_sym_Description,
    ACTIONS(275), 1,
      anon_sym_InstanceOf,
    ACTIONS(278), 1,
      anon_sym_Title,
    ACTIONS(281), 1,
      anon_sym_Usage,
    STATE(48), 2,
      sym_instance_metadata,
      aux_sym_instance_repeat1,
    STATE(121), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(268), 11,
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
  [2082] = 7,
    ACTIONS(286), 1,
      anon_sym_Description,
    ACTIONS(289), 1,
      anon_sym_Id,
    ACTIONS(292), 1,
      anon_sym_Parent,
    ACTIONS(295), 1,
      anon_sym_Title,
    STATE(49), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(128), 4,
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
  [2119] = 12,
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
    ACTIONS(298), 1,
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
  [2166] = 3,
    ACTIONS(302), 1,
      anon_sym_STAR,
    ACTIONS(304), 2,
      aux_sym_cardinality_token1,
      anon_sym_STAR2,
    ACTIONS(300), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [2194] = 7,
    ACTIONS(308), 1,
      anon_sym_Description,
    ACTIONS(311), 1,
      anon_sym_Expression,
    ACTIONS(314), 1,
      anon_sym_Severity,
    ACTIONS(317), 1,
      anon_sym_XPath,
    STATE(52), 2,
      sym_invariant_metadata,
      aux_sym_invariant_repeat1,
    STATE(147), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
    ACTIONS(306), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [2230] = 8,
    ACTIONS(198), 1,
      aux_sym_sequence_token1,
    ACTIONS(322), 1,
      anon_sym_COLON,
    ACTIONS(324), 1,
      anon_sym_POUND,
    ACTIONS(326), 1,
      anon_sym_SQUOTE,
    STATE(396), 1,
      aux_sym_sequence_repeat1,
    STATE(507), 1,
      sym_sequence,
    STATE(123), 2,
      sym_code,
      sym_unit,
    ACTIONS(320), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2268] = 3,
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
      anon_sym_and,
  [2296] = 7,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(332), 1,
      anon_sym_Expression,
    ACTIONS(334), 1,
      anon_sym_Severity,
    ACTIONS(336), 1,
      anon_sym_XPath,
    STATE(52), 2,
      sym_invariant_metadata,
      aux_sym_invariant_repeat1,
    STATE(147), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
    ACTIONS(330), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [2332] = 3,
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
    ACTIONS(338), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2360] = 3,
    STATE(54), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(73), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    ACTIONS(340), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2388] = 3,
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
    ACTIONS(342), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2416] = 3,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(348), 2,
      aux_sym_cardinality_token1,
      anon_sym_STAR2,
    ACTIONS(344), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [2444] = 3,
    STATE(60), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(352), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    ACTIONS(350), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2472] = 3,
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
  [2499] = 2,
    ACTIONS(359), 1,
      anon_sym_Instance,
    ACTIONS(357), 19,
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
  [2524] = 3,
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
      anon_sym_STAR,
  [2551] = 6,
    ACTIONS(365), 1,
      anon_sym_Description,
    ACTIONS(368), 1,
      anon_sym_Id,
    ACTIONS(371), 1,
      anon_sym_Title,
    STATE(64), 2,
      sym_cs_metadata,
      aux_sym_codesystem_repeat1,
    STATE(171), 3,
      sym_description,
      sym_id,
      sym_title,
    ACTIONS(363), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2584] = 8,
    ACTIONS(198), 1,
      aux_sym_sequence_token1,
    ACTIONS(322), 1,
      anon_sym_COLON,
    ACTIONS(326), 1,
      anon_sym_SQUOTE,
    ACTIONS(374), 1,
      anon_sym_POUND,
    STATE(396), 1,
      aux_sym_sequence_repeat1,
    STATE(506), 1,
      sym_sequence,
    STATE(123), 2,
      sym_code,
      sym_unit,
    ACTIONS(320), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2621] = 3,
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
  [2648] = 7,
    ACTIONS(168), 1,
      anon_sym_POUND,
    ACTIONS(198), 1,
      aux_sym_sequence_token1,
    ACTIONS(326), 1,
      anon_sym_SQUOTE,
    STATE(396), 1,
      aux_sym_sequence_repeat1,
    STATE(509), 1,
      sym_sequence,
    STATE(123), 2,
      sym_code,
      sym_unit,
    ACTIONS(322), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2683] = 3,
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
  [2710] = 6,
    ACTIONS(382), 1,
      anon_sym_Description,
    ACTIONS(385), 1,
      anon_sym_Id,
    ACTIONS(388), 1,
      anon_sym_Title,
    STATE(69), 2,
      sym_vs_metadata,
      aux_sym_valueset_repeat1,
    STATE(170), 3,
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
  [2743] = 8,
    ACTIONS(198), 1,
      aux_sym_sequence_token1,
    ACTIONS(393), 1,
      anon_sym_POUND,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    STATE(87), 1,
      sym_string,
    STATE(234), 1,
      sym_code,
    STATE(396), 1,
      aux_sym_sequence_repeat1,
    STATE(505), 1,
      sym_sequence,
    ACTIONS(391), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2779] = 7,
    ACTIONS(150), 1,
      anon_sym_POUND,
    ACTIONS(198), 1,
      aux_sym_sequence_token1,
    ACTIONS(326), 1,
      anon_sym_SQUOTE,
    STATE(396), 1,
      aux_sym_sequence_repeat1,
    STATE(508), 1,
      sym_sequence,
    STATE(123), 2,
      sym_code,
      sym_unit,
    ACTIONS(322), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2813] = 1,
    ACTIONS(397), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2835] = 3,
    ACTIONS(399), 1,
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
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [2861] = 1,
    ACTIONS(402), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2883] = 1,
    ACTIONS(300), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2905] = 3,
    ACTIONS(404), 1,
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
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_STAR,
  [2931] = 3,
    ACTIONS(406), 1,
      aux_sym_sequence_token1,
    STATE(77), 1,
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
  [2957] = 8,
    ACTIONS(198), 1,
      aux_sym_sequence_token1,
    ACTIONS(393), 1,
      anon_sym_POUND,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      sym_string,
    STATE(242), 1,
      sym_code,
    STATE(396), 1,
      aux_sym_sequence_repeat1,
    STATE(505), 1,
      sym_sequence,
    ACTIONS(409), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2993] = 3,
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
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [3019] = 11,
    ACTIONS(164), 1,
      anon_sym_Reference,
    ACTIONS(166), 1,
      anon_sym_Canonical,
    ACTIONS(414), 1,
      anon_sym_contentReference,
    ACTIONS(416), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(201), 1,
      sym_reference,
    STATE(354), 1,
      aux_sym_sequence_repeat1,
    STATE(370), 1,
      sym_target_type,
    STATE(92), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    STATE(176), 2,
      sym_name,
      sym_canonical,
    ACTIONS(418), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [3060] = 3,
    ACTIONS(420), 1,
      aux_sym_sequence_token1,
    STATE(82), 1,
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
  [3085] = 3,
    ACTIONS(422), 1,
      aux_sym_sequence_token1,
    STATE(82), 1,
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
  [3110] = 1,
    ACTIONS(425), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3131] = 4,
    ACTIONS(83), 1,
      anon_sym_Instance,
    ACTIONS(427), 1,
      aux_sym_sequence_token1,
    STATE(85), 1,
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
  [3158] = 4,
    ACTIONS(90), 1,
      anon_sym_Instance,
    ACTIONS(429), 1,
      aux_sym_sequence_token1,
    STATE(85), 1,
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
  [3185] = 2,
    ACTIONS(434), 1,
      aux_sym_sequence_token1,
    ACTIONS(432), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3208] = 6,
    ACTIONS(198), 1,
      aux_sym_sequence_token1,
    ACTIONS(393), 1,
      anon_sym_POUND,
    STATE(242), 1,
      sym_code,
    STATE(396), 1,
      aux_sym_sequence_repeat1,
    STATE(505), 1,
      sym_sequence,
    ACTIONS(409), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [3238] = 4,
    ACTIONS(438), 1,
      anon_sym_STAR,
    STATE(88), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(256), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    ACTIONS(436), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3264] = 3,
    ACTIONS(441), 1,
      aux_sym_sequence_token1,
    STATE(89), 1,
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
  [3288] = 3,
    ACTIONS(444), 1,
      aux_sym_sequence_token1,
    STATE(89), 1,
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
  [3312] = 3,
    ACTIONS(446), 1,
      aux_sym_sequence_token1,
    STATE(91), 1,
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
  [3336] = 10,
    ACTIONS(164), 1,
      anon_sym_Reference,
    ACTIONS(166), 1,
      anon_sym_Canonical,
    ACTIONS(416), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(201), 1,
      sym_reference,
    STATE(315), 1,
      sym_target_type,
    STATE(354), 1,
      aux_sym_sequence_repeat1,
    STATE(176), 2,
      sym_name,
      sym_canonical,
    STATE(262), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(418), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [3374] = 3,
    ACTIONS(449), 1,
      aux_sym_sequence_token1,
    STATE(94), 1,
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
  [3398] = 3,
    ACTIONS(451), 1,
      aux_sym_sequence_token1,
    STATE(94), 1,
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
  [3422] = 4,
    ACTIONS(456), 1,
      anon_sym_STAR,
    STATE(95), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(248), 3,
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
  [3448] = 3,
    ACTIONS(459), 1,
      aux_sym_sequence_token1,
    STATE(96), 1,
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
  [3472] = 3,
    ACTIONS(462), 1,
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
      anon_sym_STAR,
      anon_sym_from,
      anon_sym_and,
      anon_sym_DQUOTE,
  [3496] = 4,
    ACTIONS(106), 1,
      anon_sym_STAR,
    STATE(95), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(248), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    ACTIONS(464), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3522] = 4,
    ACTIONS(106), 1,
      anon_sym_STAR,
    STATE(95), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(248), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    ACTIONS(98), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3548] = 3,
    ACTIONS(466), 1,
      aux_sym_sequence_token1,
    STATE(91), 1,
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
  [3572] = 4,
    ACTIONS(470), 1,
      anon_sym_STAR,
    STATE(101), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(250), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
    ACTIONS(468), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3598] = 4,
    ACTIONS(178), 1,
      anon_sym_STAR,
    STATE(101), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(250), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
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
  [3624] = 4,
    ACTIONS(135), 1,
      anon_sym_STAR,
    STATE(88), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(256), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    ACTIONS(137), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3650] = 15,
    ACTIONS(67), 1,
      anon_sym_CARET,
    ACTIONS(475), 1,
      anon_sym_insert,
    ACTIONS(479), 1,
      anon_sym_codes,
    ACTIONS(481), 1,
      anon_sym_system,
    ACTIONS(483), 1,
      anon_sym_POUND,
    ACTIONS(485), 1,
      aux_sym_sequence_token1,
    STATE(107), 1,
      sym_code,
    STATE(165), 1,
      sym_code_string,
    STATE(284), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(299), 1,
      aux_sym_sequence_repeat1,
    STATE(429), 1,
      sym_path,
    STATE(437), 1,
      sym_sequence,
    STATE(478), 1,
      sym_caret_path,
    ACTIONS(477), 2,
      anon_sym_include,
      anon_sym_exclude,
    STATE(254), 2,
      sym_vs_concept_component,
      sym_vs_filter_component,
  [3698] = 1,
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
  [3718] = 6,
    ACTIONS(198), 1,
      aux_sym_sequence_token1,
    ACTIONS(393), 1,
      anon_sym_POUND,
    STATE(259), 1,
      sym_code,
    STATE(396), 1,
      aux_sym_sequence_repeat1,
    STATE(505), 1,
      sym_sequence,
    ACTIONS(489), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [3748] = 3,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    STATE(140), 1,
      sym_string,
    ACTIONS(491), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3772] = 1,
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
  [3792] = 1,
    ACTIONS(495), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3812] = 4,
    ACTIONS(178), 1,
      anon_sym_STAR,
    STATE(101), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(250), 3,
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
  [3838] = 4,
    ACTIONS(135), 1,
      anon_sym_STAR,
    STATE(88), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(256), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    ACTIONS(497), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
    ACTIONS(499), 1,
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
      anon_sym_DQUOTE,
  [3887] = 4,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(241), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(501), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [3912] = 2,
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
  [3933] = 3,
    ACTIONS(507), 1,
      aux_sym_sequence_token1,
    STATE(133), 1,
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
  [3956] = 4,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(257), 2,
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
  [3981] = 4,
    ACTIONS(186), 1,
      anon_sym_STAR,
    STATE(130), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(261), 2,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
    ACTIONS(184), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [4006] = 3,
    ACTIONS(511), 1,
      aux_sym_sequence_token1,
    STATE(118), 1,
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
  [4029] = 3,
    ACTIONS(514), 1,
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
  [4052] = 4,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(232), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(516), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [4077] = 2,
    ACTIONS(520), 1,
      anon_sym_Instance,
    ACTIONS(518), 15,
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
  [4098] = 3,
    ACTIONS(522), 1,
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
  [4121] = 3,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      sym_string,
    ACTIONS(525), 14,
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
  [4144] = 3,
    ACTIONS(527), 1,
      aux_sym_sequence_token1,
    STATE(118), 1,
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
  [4167] = 2,
    ACTIONS(531), 1,
      anon_sym_Instance,
    ACTIONS(529), 15,
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
  [4188] = 1,
    ACTIONS(533), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [4207] = 4,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(240), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(535), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [4232] = 1,
    ACTIONS(537), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [4251] = 4,
    ACTIONS(186), 1,
      anon_sym_STAR,
    STATE(130), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(261), 2,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
    ACTIONS(539), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [4276] = 4,
    ACTIONS(543), 1,
      anon_sym_STAR,
    STATE(130), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(261), 2,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
    ACTIONS(541), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [4301] = 3,
    ACTIONS(546), 1,
      aux_sym_sequence_token1,
    STATE(138), 1,
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
  [4324] = 3,
    ACTIONS(548), 1,
      aux_sym_sequence_token1,
    STATE(132), 1,
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
  [4347] = 3,
    ACTIONS(551), 1,
      aux_sym_sequence_token1,
    STATE(133), 1,
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
  [4370] = 3,
    ACTIONS(554), 1,
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
      anon_sym_DQUOTE,
  [4393] = 3,
    ACTIONS(557), 1,
      aux_sym_sequence_token1,
    STATE(135), 1,
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
  [4416] = 3,
    ACTIONS(560), 1,
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
  [4439] = 3,
    ACTIONS(562), 1,
      aux_sym_sequence_token1,
    STATE(132), 1,
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
  [4462] = 3,
    ACTIONS(564), 1,
      aux_sym_sequence_token1,
    STATE(138), 1,
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
  [4485] = 3,
    ACTIONS(567), 1,
      aux_sym_sequence_token1,
    STATE(144), 1,
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
  [4507] = 1,
    ACTIONS(569), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4525] = 3,
    ACTIONS(573), 1,
      anon_sym_and,
    STATE(158), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(571), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4547] = 3,
    ACTIONS(573), 1,
      anon_sym_and,
    STATE(141), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(575), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4569] = 2,
    ACTIONS(112), 1,
      aux_sym_sequence_token1,
    ACTIONS(110), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4589] = 3,
    ACTIONS(577), 1,
      aux_sym_sequence_token1,
    STATE(144), 1,
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
  [4611] = 3,
    ACTIONS(580), 1,
      aux_sym_sequence_token1,
    STATE(145), 1,
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
  [4633] = 2,
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
  [4653] = 1,
    ACTIONS(583), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [4671] = 1,
    ACTIONS(585), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4689] = 3,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    STATE(222), 1,
      sym_string,
    ACTIONS(320), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4711] = 3,
    ACTIONS(587), 1,
      aux_sym_sequence_token1,
    STATE(145), 1,
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
  [4733] = 3,
    ACTIONS(589), 1,
      aux_sym_sequence_token1,
    STATE(151), 1,
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
  [4755] = 1,
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
  [4773] = 3,
    ACTIONS(594), 1,
      aux_sym_sequence_token1,
    STATE(151), 1,
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
  [4795] = 1,
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
  [4813] = 1,
    ACTIONS(598), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4831] = 2,
    STATE(173), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(575), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4851] = 1,
    ACTIONS(600), 15,
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
  [4869] = 3,
    ACTIONS(604), 1,
      anon_sym_and,
    STATE(158), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(602), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4891] = 3,
    ACTIONS(607), 1,
      aux_sym_sequence_token1,
    STATE(159), 1,
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
  [4913] = 3,
    ACTIONS(610), 1,
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
      anon_sym_or,
  [4935] = 3,
    ACTIONS(612), 1,
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
      anon_sym_where,
  [4957] = 1,
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
  [4975] = 3,
    ACTIONS(616), 1,
      aux_sym_sequence_token1,
    STATE(163), 1,
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
  [4997] = 1,
    ACTIONS(619), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5015] = 4,
    ACTIONS(623), 1,
      anon_sym_from,
    ACTIONS(625), 1,
      anon_sym_and,
    STATE(236), 1,
      sym_vs_component_from,
    ACTIONS(621), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5039] = 1,
    ACTIONS(627), 15,
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
  [5057] = 1,
    ACTIONS(629), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5075] = 1,
    ACTIONS(631), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5093] = 1,
    ACTIONS(633), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5111] = 1,
    ACTIONS(635), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5129] = 1,
    ACTIONS(637), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5147] = 3,
    ACTIONS(639), 1,
      aux_sym_sequence_token1,
    STATE(172), 1,
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
  [5169] = 2,
    STATE(158), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(571), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5189] = 3,
    ACTIONS(642), 1,
      aux_sym_sequence_token1,
    STATE(172), 1,
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
  [5211] = 3,
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
  [5232] = 1,
    ACTIONS(644), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5249] = 3,
    ACTIONS(646), 1,
      aux_sym_sequence_token1,
    STATE(179), 1,
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
  [5270] = 3,
    ACTIONS(648), 1,
      aux_sym_sequence_token1,
    STATE(183), 1,
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
  [5291] = 3,
    ACTIONS(650), 1,
      aux_sym_sequence_token1,
    STATE(179), 1,
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
  [5312] = 3,
    ACTIONS(655), 1,
      anon_sym_or,
    STATE(180), 1,
      aux_sym_only_rule_repeat1,
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
  [5333] = 1,
    ACTIONS(653), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5350] = 3,
    ACTIONS(660), 1,
      anon_sym_and,
    STATE(182), 1,
      aux_sym_contains_rule_repeat1,
    ACTIONS(658), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5371] = 3,
    ACTIONS(663), 1,
      aux_sym_sequence_token1,
    STATE(183), 1,
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
  [5392] = 1,
    ACTIONS(602), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5409] = 3,
    ACTIONS(666), 1,
      anon_sym_and,
    STATE(185), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(602), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5430] = 2,
    ACTIONS(112), 1,
      aux_sym_sequence_token1,
    ACTIONS(110), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5449] = 2,
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
  [5468] = 3,
    ACTIONS(671), 1,
      anon_sym_and,
    STATE(192), 1,
      aux_sym_vs_filter_list_repeat1,
    ACTIONS(669), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5489] = 2,
    ACTIONS(675), 1,
      anon_sym_and,
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
      anon_sym_where,
  [5508] = 2,
    ACTIONS(677), 1,
      anon_sym_and,
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
      anon_sym_where,
  [5527] = 1,
    ACTIONS(679), 14,
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
  [5544] = 3,
    ACTIONS(683), 1,
      anon_sym_and,
    STATE(192), 1,
      aux_sym_vs_filter_list_repeat1,
    ACTIONS(681), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5565] = 3,
    ACTIONS(671), 1,
      anon_sym_and,
    STATE(188), 1,
      aux_sym_vs_filter_list_repeat1,
    ACTIONS(686), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5586] = 3,
    ACTIONS(690), 1,
      anon_sym_and,
    STATE(185), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(688), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5607] = 3,
    ACTIONS(55), 1,
      anon_sym_insert,
    ACTIONS(692), 1,
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
  [5628] = 2,
    STATE(200), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(575), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5647] = 2,
    ACTIONS(696), 1,
      anon_sym_T,
    ACTIONS(694), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5666] = 3,
    ACTIONS(700), 1,
      anon_sym_and,
    STATE(182), 1,
      aux_sym_contains_rule_repeat1,
    ACTIONS(698), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5687] = 3,
    ACTIONS(704), 1,
      anon_sym_or,
    STATE(207), 1,
      aux_sym_only_rule_repeat1,
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
  [5708] = 2,
    STATE(185), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(571), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5727] = 1,
    ACTIONS(706), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5744] = 2,
    ACTIONS(322), 1,
      anon_sym_COLON,
    ACTIONS(320), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5763] = 3,
    ACTIONS(690), 1,
      anon_sym_and,
    STATE(206), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(575), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5784] = 3,
    ACTIONS(690), 1,
      anon_sym_and,
    STATE(194), 1,
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
  [5805] = 1,
    ACTIONS(710), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5822] = 3,
    ACTIONS(690), 1,
      anon_sym_and,
    STATE(185), 1,
      aux_sym_obeys_rule_repeat1,
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
      anon_sym_STAR,
  [5843] = 3,
    ACTIONS(704), 1,
      anon_sym_or,
    STATE(180), 1,
      aux_sym_only_rule_repeat1,
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
  [5864] = 2,
    ACTIONS(714), 1,
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
  [5883] = 3,
    ACTIONS(690), 1,
      anon_sym_and,
    STATE(211), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(688), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5904] = 3,
    ACTIONS(718), 1,
      anon_sym_LPAREN,
    STATE(251), 1,
      sym_strength,
    ACTIONS(716), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5925] = 3,
    ACTIONS(690), 1,
      anon_sym_and,
    STATE(185), 1,
      aux_sym_obeys_rule_repeat1,
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
  [5946] = 3,
    ACTIONS(700), 1,
      anon_sym_and,
    STATE(198), 1,
      aux_sym_contains_rule_repeat1,
    ACTIONS(722), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5967] = 3,
    ACTIONS(724), 1,
      aux_sym_sequence_token1,
    STATE(213), 1,
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
  [5987] = 2,
    ACTIONS(729), 1,
      anon_sym_LPAREN,
    ACTIONS(727), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6005] = 1,
    ACTIONS(731), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6021] = 2,
    ACTIONS(733), 1,
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
  [6039] = 1,
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
      anon_sym_STAR,
      anon_sym_and,
  [6055] = 1,
    ACTIONS(320), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6071] = 3,
    ACTIONS(737), 1,
      aux_sym_sequence_token1,
    STATE(213), 1,
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
  [6091] = 1,
    ACTIONS(739), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6107] = 2,
    ACTIONS(741), 1,
      anon_sym_and,
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
  [6125] = 1,
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
  [6141] = 1,
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
      anon_sym_LPAREN,
  [6157] = 1,
    ACTIONS(681), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6173] = 1,
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
  [6189] = 1,
    ACTIONS(322), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6205] = 1,
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
      anon_sym_LPAREN,
  [6221] = 2,
    ACTIONS(751), 1,
      anon_sym_and,
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
  [6239] = 1,
    ACTIONS(658), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6255] = 2,
    ACTIONS(755), 1,
      anon_sym_where,
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
  [6273] = 1,
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
  [6288] = 1,
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
  [6303] = 2,
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
  [6320] = 1,
    ACTIONS(409), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6335] = 1,
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
  [6350] = 1,
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
  [6365] = 4,
    ACTIONS(346), 1,
      aux_sym_sequence_token1,
    ACTIONS(769), 1,
      aux_sym_cardinality_token1,
    ACTIONS(771), 1,
      anon_sym_STAR2,
    ACTIONS(344), 9,
      anon_sym_contentReference,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [6386] = 1,
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
  [6401] = 1,
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
  [6416] = 1,
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
  [6431] = 1,
    ACTIONS(535), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6446] = 1,
    ACTIONS(489), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6461] = 1,
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
  [6476] = 4,
    ACTIONS(302), 1,
      aux_sym_sequence_token1,
    ACTIONS(781), 1,
      aux_sym_cardinality_token1,
    ACTIONS(783), 1,
      anon_sym_STAR2,
    ACTIONS(300), 9,
      anon_sym_contentReference,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [6497] = 1,
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
  [6512] = 1,
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
  [6527] = 1,
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
  [6542] = 1,
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
  [6557] = 1,
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
  [6572] = 1,
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
  [6587] = 1,
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
  [6602] = 1,
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
  [6617] = 1,
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
  [6632] = 1,
    ACTIONS(803), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6647] = 1,
    ACTIONS(805), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6662] = 1,
    ACTIONS(807), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6677] = 1,
    ACTIONS(501), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6692] = 1,
    ACTIONS(809), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6707] = 1,
    ACTIONS(811), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6722] = 1,
    ACTIONS(813), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6737] = 1,
    ACTIONS(815), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6752] = 4,
    ACTIONS(817), 1,
      aux_sym_sequence_token1,
    ACTIONS(350), 2,
      anon_sym_Reference,
      anon_sym_Canonical,
    STATE(262), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(819), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [6772] = 1,
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
  [6786] = 2,
    ACTIONS(302), 1,
      aux_sym_sequence_token1,
    ACTIONS(300), 9,
      anon_sym_contentReference,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [6801] = 4,
    ACTIONS(61), 1,
      anon_sym_and,
    STATE(278), 1,
      aux_sym_flag_rule_repeat1,
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
  [6820] = 9,
    ACTIONS(198), 1,
      aux_sym_sequence_token1,
    ACTIONS(479), 1,
      anon_sym_codes,
    ACTIONS(483), 1,
      anon_sym_POUND,
    STATE(107), 1,
      sym_code,
    STATE(165), 1,
      sym_code_string,
    STATE(284), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(396), 1,
      aux_sym_sequence_repeat1,
    STATE(500), 1,
      sym_sequence,
    STATE(247), 2,
      sym_vs_concept_component,
      sym_vs_filter_component,
  [6849] = 2,
    ACTIONS(822), 1,
      aux_sym_sequence_token1,
    ACTIONS(397), 9,
      anon_sym_contentReference,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [6864] = 6,
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
    STATE(128), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
  [6887] = 6,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(332), 1,
      anon_sym_Expression,
    ACTIONS(334), 1,
      anon_sym_Severity,
    ACTIONS(336), 1,
      anon_sym_XPath,
    STATE(55), 2,
      sym_invariant_metadata,
      aux_sym_invariant_repeat1,
    STATE(147), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
  [6910] = 10,
    ACTIONS(67), 1,
      anon_sym_CARET,
    ACTIONS(475), 1,
      anon_sym_insert,
    ACTIONS(481), 1,
      anon_sym_system,
    ACTIONS(824), 1,
      anon_sym_obeys,
    ACTIONS(826), 1,
      aux_sym_sequence_token1,
    STATE(9), 1,
      sym_path,
    STATE(11), 1,
      aux_sym_sequence_repeat1,
    STATE(19), 1,
      sym_sequence,
    STATE(406), 1,
      sym_name,
    STATE(478), 1,
      sym_caret_path,
  [6941] = 10,
    ACTIONS(67), 1,
      anon_sym_CARET,
    ACTIONS(475), 1,
      anon_sym_insert,
    ACTIONS(481), 1,
      anon_sym_system,
    ACTIONS(824), 1,
      anon_sym_obeys,
    ACTIONS(826), 1,
      aux_sym_sequence_token1,
    STATE(11), 1,
      aux_sym_sequence_repeat1,
    STATE(13), 1,
      sym_path,
    STATE(20), 1,
      sym_sequence,
    STATE(406), 1,
      sym_name,
    STATE(478), 1,
      sym_caret_path,
  [6972] = 3,
    ACTIONS(828), 1,
      aux_sym_sequence_token1,
    STATE(274), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 7,
      anon_sym_and,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [6988] = 2,
    ACTIONS(830), 1,
      aux_sym_sequence_token1,
    ACTIONS(402), 8,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7002] = 3,
    ACTIONS(832), 1,
      aux_sym_sequence_token1,
    STATE(274), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 7,
      anon_sym_and,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7018] = 8,
    ACTIONS(164), 1,
      anon_sym_Reference,
    ACTIONS(166), 1,
      anon_sym_Canonical,
    ACTIONS(416), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(181), 1,
      sym_target_type,
    STATE(201), 1,
      sym_reference,
    STATE(354), 1,
      aux_sym_sequence_repeat1,
    STATE(176), 2,
      sym_name,
      sym_canonical,
  [7044] = 8,
    ACTIONS(164), 1,
      anon_sym_Reference,
    ACTIONS(166), 1,
      anon_sym_Canonical,
    ACTIONS(835), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(160), 1,
      aux_sym_sequence_repeat1,
    STATE(181), 1,
      sym_target_type,
    STATE(201), 1,
      sym_reference,
    STATE(176), 2,
      sym_name,
      sym_canonical,
  [7070] = 8,
    ACTIONS(164), 1,
      anon_sym_Reference,
    ACTIONS(166), 1,
      anon_sym_Canonical,
    ACTIONS(835), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(160), 1,
      aux_sym_sequence_repeat1,
    STATE(199), 1,
      sym_target_type,
    STATE(201), 1,
      sym_reference,
    STATE(176), 2,
      sym_name,
      sym_canonical,
  [7096] = 3,
    ACTIONS(837), 1,
      anon_sym_and,
    STATE(278), 1,
      aux_sym_flag_rule_repeat1,
    ACTIONS(840), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7111] = 7,
    ACTIONS(475), 1,
      anon_sym_insert,
    ACTIONS(481), 1,
      anon_sym_system,
    ACTIONS(842), 1,
      anon_sym_DASH_GT,
    ACTIONS(844), 1,
      aux_sym_sequence_token1,
    STATE(15), 1,
      sym_sequence,
    STATE(115), 1,
      aux_sym_sequence_repeat1,
    STATE(195), 1,
      sym_path,
  [7133] = 6,
    ACTIONS(198), 1,
      aux_sym_sequence_token1,
    ACTIONS(846), 1,
      anon_sym_insert,
    ACTIONS(848), 1,
      anon_sym_POUND,
    STATE(396), 1,
      aux_sym_sequence_repeat1,
    STATE(502), 1,
      sym_sequence,
    STATE(281), 2,
      sym_code,
      aux_sym_code_insert_rule_repeat1,
  [7153] = 6,
    ACTIONS(850), 1,
      anon_sym_insert,
    ACTIONS(852), 1,
      anon_sym_POUND,
    ACTIONS(855), 1,
      aux_sym_sequence_token1,
    STATE(396), 1,
      aux_sym_sequence_repeat1,
    STATE(502), 1,
      sym_sequence,
    STATE(281), 2,
      sym_code,
      aux_sym_code_insert_rule_repeat1,
  [7173] = 7,
    ACTIONS(858), 1,
      anon_sym_POUND,
    ACTIONS(861), 1,
      aux_sym_sequence_token1,
    STATE(107), 1,
      sym_code,
    STATE(282), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(396), 1,
      aux_sym_sequence_repeat1,
    STATE(482), 1,
      sym_code_string,
    STATE(504), 1,
      sym_sequence,
  [7195] = 7,
    ACTIONS(198), 1,
      aux_sym_sequence_token1,
    ACTIONS(864), 1,
      anon_sym_insert,
    ACTIONS(866), 1,
      anon_sym_POUND,
    STATE(280), 1,
      aux_sym_code_insert_rule_repeat1,
    STATE(305), 1,
      sym_code,
    STATE(396), 1,
      aux_sym_sequence_repeat1,
    STATE(493), 1,
      sym_sequence,
  [7217] = 7,
    ACTIONS(198), 1,
      aux_sym_sequence_token1,
    ACTIONS(868), 1,
      anon_sym_POUND,
    STATE(107), 1,
      sym_code,
    STATE(282), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(396), 1,
      aux_sym_sequence_repeat1,
    STATE(416), 1,
      sym_code_string,
    STATE(501), 1,
      sym_sequence,
  [7239] = 1,
    ACTIONS(840), 7,
      anon_sym_and,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7249] = 3,
    ACTIONS(870), 1,
      aux_sym_sequence_token1,
    STATE(286), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 4,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [7262] = 6,
    ACTIONS(475), 1,
      anon_sym_insert,
    ACTIONS(481), 1,
      anon_sym_system,
    ACTIONS(873), 1,
      aux_sym_sequence_token1,
    STATE(15), 1,
      sym_sequence,
    STATE(137), 1,
      aux_sym_sequence_repeat1,
    STATE(175), 1,
      sym_path,
  [7281] = 3,
    ACTIONS(875), 1,
      aux_sym_sequence_token1,
    STATE(288), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 4,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
  [7294] = 3,
    ACTIONS(878), 1,
      aux_sym_sequence_token1,
    STATE(288), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 4,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
  [7307] = 3,
    ACTIONS(880), 1,
      aux_sym_sequence_token1,
    STATE(286), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 4,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [7320] = 6,
    ACTIONS(882), 1,
      aux_sym_sequence_token1,
    STATE(193), 1,
      sym_vs_filter_definition,
    STATE(246), 1,
      sym_vs_filter_list,
    STATE(303), 1,
      sym_name,
    STATE(415), 1,
      aux_sym_sequence_repeat1,
    STATE(456), 1,
      sym_sequence,
  [7339] = 5,
    ACTIONS(882), 1,
      aux_sym_sequence_token1,
    STATE(224), 1,
      sym_vs_filter_definition,
    STATE(303), 1,
      sym_name,
    STATE(415), 1,
      aux_sym_sequence_repeat1,
    STATE(456), 1,
      sym_sequence,
  [7355] = 5,
    ACTIONS(884), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(229), 1,
      sym_item,
    STATE(306), 1,
      aux_sym_sequence_repeat1,
    STATE(359), 1,
      sym_name,
  [7371] = 3,
    ACTIONS(886), 1,
      aux_sym_sequence_token1,
    STATE(294), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 3,
      anon_sym_from,
      anon_sym_and,
      anon_sym_DQUOTE,
  [7383] = 3,
    ACTIONS(889), 1,
      aux_sym_sequence_token1,
    STATE(301), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE,
  [7395] = 5,
    ACTIONS(481), 1,
      anon_sym_system,
    ACTIONS(891), 1,
      aux_sym_sequence_token1,
    STATE(15), 1,
      sym_sequence,
    STATE(272), 1,
      aux_sym_sequence_repeat1,
    STATE(285), 1,
      sym_path,
  [7411] = 5,
    ACTIONS(884), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(212), 1,
      sym_item,
    STATE(306), 1,
      aux_sym_sequence_repeat1,
    STATE(359), 1,
      sym_name,
  [7427] = 3,
    ACTIONS(893), 1,
      aux_sym_sequence_token1,
    STATE(298), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 3,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_CARET,
  [7439] = 3,
    ACTIONS(896), 1,
      aux_sym_sequence_token1,
    STATE(298), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 3,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_CARET,
  [7451] = 3,
    ACTIONS(898), 1,
      aux_sym_sequence_token1,
    STATE(298), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 3,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_CARET,
  [7463] = 3,
    ACTIONS(901), 1,
      aux_sym_sequence_token1,
    STATE(301), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE,
  [7475] = 4,
    ACTIONS(90), 1,
      aux_sym_cardinality_token1,
    ACTIONS(904), 1,
      aux_sym_sequence_token1,
    STATE(302), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 2,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [7489] = 5,
    ACTIONS(907), 1,
      anon_sym_EQ,
    ACTIONS(909), 1,
      aux_sym_sequence_token1,
    STATE(40), 1,
      sym_vs_filter_operator,
    STATE(73), 1,
      aux_sym_sequence_repeat1,
    STATE(86), 1,
      sym_sequence,
  [7505] = 5,
    ACTIONS(198), 1,
      aux_sym_sequence_token1,
    ACTIONS(911), 1,
      anon_sym_POUND,
    STATE(109), 1,
      sym_code,
    STATE(396), 1,
      aux_sym_sequence_repeat1,
    STATE(503), 1,
      sym_sequence,
  [7521] = 4,
    ACTIONS(67), 1,
      anon_sym_CARET,
    ACTIONS(915), 1,
      aux_sym_sequence_token1,
    STATE(474), 1,
      sym_caret_path,
    ACTIONS(913), 2,
      anon_sym_insert,
      anon_sym_POUND,
  [7535] = 4,
    ACTIONS(83), 1,
      aux_sym_cardinality_token1,
    ACTIONS(917), 1,
      aux_sym_sequence_token1,
    STATE(302), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 2,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [7549] = 5,
    ACTIONS(198), 1,
      aux_sym_sequence_token1,
    ACTIONS(919), 1,
      anon_sym_POUND,
    STATE(168), 1,
      sym_code,
    STATE(396), 1,
      aux_sym_sequence_repeat1,
    STATE(491), 1,
      sym_sequence,
  [7565] = 5,
    ACTIONS(921), 1,
      anon_sym_POUND,
    ACTIONS(923), 1,
      aux_sym_sequence_token1,
    STATE(342), 1,
      aux_sym_sequence_repeat1,
    STATE(436), 1,
      sym_sequence,
    STATE(451), 1,
      sym_code,
  [7581] = 5,
    ACTIONS(925), 1,
      anon_sym_POUND,
    ACTIONS(927), 1,
      aux_sym_sequence_token1,
    STATE(178), 1,
      aux_sym_sequence_repeat1,
    STATE(233), 1,
      sym_sequence,
    STATE(263), 1,
      sym_code,
  [7597] = 5,
    ACTIONS(198), 1,
      aux_sym_sequence_token1,
    ACTIONS(929), 1,
      anon_sym_POUND,
    STATE(125), 1,
      sym_code,
    STATE(396), 1,
      aux_sym_sequence_repeat1,
    STATE(499), 1,
      sym_sequence,
  [7613] = 3,
    ACTIONS(931), 1,
      aux_sym_sequence_token1,
    STATE(294), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 3,
      anon_sym_from,
      anon_sym_and,
      anon_sym_DQUOTE,
  [7625] = 3,
    ACTIONS(933), 1,
      aux_sym_sequence_token1,
    STATE(312), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 2,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [7636] = 3,
    ACTIONS(936), 1,
      aux_sym_sequence_token1,
    STATE(313), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 2,
      anon_sym_or,
      anon_sym_DQUOTE,
  [7647] = 3,
    ACTIONS(939), 1,
      anon_sym_DQUOTE,
    STATE(357), 1,
      aux_sym_string_repeat1,
    ACTIONS(941), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7658] = 4,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    ACTIONS(943), 1,
      anon_sym_or,
    STATE(113), 1,
      sym_string,
    STATE(327), 1,
      aux_sym_only_rule_repeat1,
  [7671] = 3,
    ACTIONS(945), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(353), 1,
      aux_sym_string_repeat1,
    ACTIONS(947), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7682] = 4,
    ACTIONS(949), 1,
      anon_sym_system,
    ACTIONS(951), 1,
      anon_sym_valueset,
    STATE(221), 1,
      sym_vs_from_system,
    STATE(228), 1,
      sym_vs_from_valueset,
  [7695] = 4,
    ACTIONS(953), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(139), 1,
      aux_sym_sequence_repeat1,
    STATE(203), 1,
      sym_name,
  [7708] = 4,
    ACTIONS(955), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(177), 1,
      aux_sym_sequence_repeat1,
    STATE(205), 1,
      sym_name,
  [7721] = 4,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    ACTIONS(943), 1,
      anon_sym_or,
    STATE(113), 1,
      sym_string,
    STATE(430), 1,
      aux_sym_only_rule_repeat1,
  [7734] = 4,
    ACTIONS(957), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(119), 1,
      aux_sym_sequence_repeat1,
    STATE(142), 1,
      sym_name,
  [7747] = 4,
    ACTIONS(959), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(161), 1,
      aux_sym_sequence_repeat1,
    STATE(205), 1,
      sym_name,
  [7760] = 3,
    ACTIONS(961), 1,
      anon_sym_DQUOTE,
    STATE(363), 1,
      aux_sym_string_repeat1,
    ACTIONS(963), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7771] = 3,
    ACTIONS(965), 1,
      anon_sym_DQUOTE,
    STATE(323), 1,
      aux_sym_string_repeat1,
    ACTIONS(967), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7782] = 4,
    ACTIONS(969), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(76), 1,
      aux_sym_sequence_repeat1,
    STATE(83), 1,
      sym_name,
  [7795] = 4,
    ACTIONS(971), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(153), 1,
      aux_sym_sequence_repeat1,
    STATE(210), 1,
      sym_name,
  [7808] = 4,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    ACTIONS(943), 1,
      anon_sym_or,
    STATE(127), 1,
      sym_string,
    STATE(430), 1,
      aux_sym_only_rule_repeat1,
  [7821] = 4,
    ACTIONS(953), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(139), 1,
      aux_sym_sequence_repeat1,
    STATE(209), 1,
      sym_name,
  [7834] = 4,
    ACTIONS(953), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(139), 1,
      aux_sym_sequence_repeat1,
    STATE(196), 1,
      sym_name,
  [7847] = 4,
    ACTIONS(953), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(139), 1,
      aux_sym_sequence_repeat1,
    STATE(205), 1,
      sym_name,
  [7860] = 4,
    ACTIONS(957), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(119), 1,
      aux_sym_sequence_repeat1,
    STATE(184), 1,
      sym_name,
  [7873] = 3,
    ACTIONS(973), 1,
      anon_sym_DQUOTE,
    STATE(363), 1,
      aux_sym_string_repeat1,
    ACTIONS(963), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7884] = 3,
    ACTIONS(975), 1,
      anon_sym_DQUOTE,
    STATE(332), 1,
      aux_sym_string_repeat1,
    ACTIONS(977), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7895] = 4,
    ACTIONS(979), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(83), 1,
      sym_name,
    STATE(100), 1,
      aux_sym_sequence_repeat1,
  [7908] = 4,
    ACTIONS(79), 1,
      anon_sym_DOT_DOT,
    ACTIONS(83), 1,
      aux_sym_cardinality_token1,
    ACTIONS(981), 1,
      aux_sym_sequence_token1,
    STATE(336), 1,
      aux_sym_sequence_repeat1,
  [7921] = 4,
    ACTIONS(85), 1,
      anon_sym_DOT_DOT,
    ACTIONS(90), 1,
      aux_sym_cardinality_token1,
    ACTIONS(983), 1,
      aux_sym_sequence_token1,
    STATE(336), 1,
      aux_sym_sequence_repeat1,
  [7934] = 3,
    ACTIONS(986), 1,
      aux_sym_sequence_token1,
    STATE(341), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [7945] = 4,
    ACTIONS(988), 1,
      anon_sym_system,
    ACTIONS(990), 1,
      anon_sym_valueset,
    STATE(189), 1,
      sym_vs_from_valueset,
    STATE(190), 1,
      sym_vs_from_system,
  [7958] = 4,
    ACTIONS(992), 1,
      anon_sym_RPAREN,
    ACTIONS(994), 1,
      anon_sym_or,
    ACTIONS(996), 1,
      anon_sym_PIPE,
    STATE(421), 1,
      aux_sym_canonical_repeat1,
  [7971] = 2,
    ACTIONS(123), 1,
      aux_sym_sequence_token1,
    ACTIONS(121), 3,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_CARET,
  [7980] = 3,
    ACTIONS(998), 1,
      aux_sym_sequence_token1,
    STATE(341), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [7991] = 3,
    ACTIONS(1001), 1,
      aux_sym_sequence_token1,
    STATE(312), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 2,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [8002] = 2,
    ACTIONS(119), 1,
      aux_sym_sequence_token1,
    ACTIONS(117), 3,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_CARET,
  [8011] = 3,
    ACTIONS(1003), 1,
      aux_sym_sequence_token1,
    STATE(345), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 2,
      anon_sym_and,
      anon_sym_DQUOTE,
  [8022] = 3,
    ACTIONS(1005), 1,
      aux_sym_sequence_token1,
    STATE(345), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 2,
      anon_sym_and,
      anon_sym_DQUOTE,
  [8033] = 4,
    ACTIONS(957), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(119), 1,
      aux_sym_sequence_repeat1,
    STATE(156), 1,
      sym_name,
  [8046] = 4,
    ACTIONS(953), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(139), 1,
      aux_sym_sequence_repeat1,
    STATE(204), 1,
      sym_name,
  [8059] = 4,
    ACTIONS(957), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(119), 1,
      aux_sym_sequence_repeat1,
    STATE(205), 1,
      sym_name,
  [8072] = 4,
    ACTIONS(953), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(139), 1,
      aux_sym_sequence_repeat1,
    STATE(184), 1,
      sym_name,
  [8085] = 3,
    ACTIONS(1008), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(350), 1,
      aux_sym_string_repeat1,
    ACTIONS(1010), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [8096] = 4,
    ACTIONS(1013), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(335), 1,
      aux_sym_sequence_repeat1,
    STATE(377), 1,
      sym_name,
  [8109] = 1,
    ACTIONS(1015), 4,
      anon_sym_example,
      anon_sym_preferred,
      anon_sym_extensible,
      anon_sym_required,
  [8116] = 3,
    ACTIONS(1017), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(350), 1,
      aux_sym_string_repeat1,
    ACTIONS(1019), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [8127] = 3,
    ACTIONS(1021), 1,
      aux_sym_sequence_token1,
    STATE(313), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 2,
      anon_sym_or,
      anon_sym_DQUOTE,
  [8138] = 4,
    ACTIONS(1023), 1,
      aux_sym_sequence_token1,
    STATE(5), 1,
      sym_name,
    STATE(10), 1,
      sym_sequence,
    STATE(81), 1,
      aux_sym_sequence_repeat1,
  [8151] = 4,
    ACTIONS(1023), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(81), 1,
      aux_sym_sequence_repeat1,
    STATE(126), 1,
      sym_name,
  [8164] = 3,
    ACTIONS(1025), 1,
      anon_sym_DQUOTE,
    STATE(363), 1,
      aux_sym_string_repeat1,
    ACTIONS(963), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [8175] = 4,
    ACTIONS(1023), 1,
      aux_sym_sequence_token1,
    STATE(3), 1,
      sym_name,
    STATE(10), 1,
      sym_sequence,
    STATE(81), 1,
      aux_sym_sequence_repeat1,
  [8188] = 4,
    ACTIONS(1027), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1029), 1,
      anon_sym_DOT_DOT,
    ACTIONS(1031), 1,
      anon_sym_named,
    STATE(56), 1,
      sym_cardinality,
  [8201] = 4,
    ACTIONS(969), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(17), 1,
      sym_name,
    STATE(76), 1,
      aux_sym_sequence_repeat1,
  [8214] = 4,
    ACTIONS(979), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(38), 1,
      sym_name,
    STATE(100), 1,
      aux_sym_sequence_repeat1,
  [8227] = 4,
    ACTIONS(1033), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(269), 1,
      sym_name,
    STATE(290), 1,
      aux_sym_sequence_repeat1,
  [8240] = 3,
    ACTIONS(1008), 1,
      anon_sym_DQUOTE,
    STATE(363), 1,
      aux_sym_string_repeat1,
    ACTIONS(1035), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [8251] = 4,
    ACTIONS(1023), 1,
      aux_sym_sequence_token1,
    STATE(6), 1,
      sym_name,
    STATE(10), 1,
      sym_sequence,
    STATE(81), 1,
      aux_sym_sequence_repeat1,
  [8264] = 4,
    ACTIONS(1038), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(268), 1,
      sym_name,
    STATE(289), 1,
      aux_sym_sequence_repeat1,
  [8277] = 4,
    ACTIONS(979), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(35), 1,
      sym_name,
    STATE(100), 1,
      aux_sym_sequence_repeat1,
  [8290] = 4,
    ACTIONS(1040), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(26), 1,
      sym_name,
    STATE(84), 1,
      aux_sym_sequence_repeat1,
  [8303] = 4,
    ACTIONS(1040), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(84), 1,
      aux_sym_sequence_repeat1,
    STATE(114), 1,
      sym_name,
  [8316] = 3,
    ACTIONS(1042), 1,
      aux_sym_sequence_token1,
    STATE(369), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(85), 2,
      anon_sym_insert,
      anon_sym_POUND,
  [8327] = 4,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    ACTIONS(943), 1,
      anon_sym_or,
    STATE(116), 1,
      sym_string,
    STATE(320), 1,
      aux_sym_only_rule_repeat1,
  [8340] = 3,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(46), 2,
      sym_string,
      sym_multiline_string,
  [8351] = 4,
    ACTIONS(1023), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(81), 1,
      aux_sym_sequence_repeat1,
    STATE(83), 1,
      sym_name,
  [8364] = 3,
    ACTIONS(1045), 1,
      aux_sym_sequence_token1,
    STATE(369), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 2,
      anon_sym_insert,
      anon_sym_POUND,
  [8375] = 3,
    ACTIONS(1048), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(90), 1,
      aux_sym_sequence_repeat1,
  [8385] = 3,
    ACTIONS(994), 1,
      anon_sym_or,
    ACTIONS(1050), 1,
      anon_sym_RPAREN,
    STATE(433), 1,
      aux_sym_canonical_repeat1,
  [8395] = 3,
    ACTIONS(1052), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(219), 1,
      aux_sym_sequence_repeat1,
  [8405] = 3,
    ACTIONS(1027), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1029), 1,
      anon_sym_DOT_DOT,
    STATE(57), 1,
      sym_cardinality,
  [8415] = 3,
    ACTIONS(1054), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(131), 1,
      aux_sym_sequence_repeat1,
  [8425] = 3,
    ACTIONS(1054), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(131), 1,
      aux_sym_sequence_repeat1,
  [8435] = 3,
    ACTIONS(1056), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(435), 1,
      aux_sym_sequence_repeat1,
  [8445] = 3,
    ACTIONS(1058), 1,
      sym_number,
    STATE(226), 1,
      sym_quantity,
    STATE(227), 1,
      sym_ratio_part,
  [8455] = 2,
    ACTIONS(123), 1,
      aux_sym_sequence_token1,
    ACTIONS(121), 2,
      anon_sym_insert,
      anon_sym_POUND,
  [8463] = 2,
    ACTIONS(119), 1,
      aux_sym_sequence_token1,
    ACTIONS(117), 2,
      anon_sym_insert,
      anon_sym_POUND,
  [8471] = 3,
    ACTIONS(1060), 1,
      aux_sym_sequence_token1,
    STATE(295), 1,
      aux_sym_sequence_repeat1,
    STATE(339), 1,
      sym_sequence,
  [8481] = 3,
    ACTIONS(1062), 1,
      aux_sym_sequence_token1,
    STATE(337), 1,
      aux_sym_sequence_repeat1,
    STATE(440), 1,
      sym_sequence,
  [8491] = 3,
    ACTIONS(1056), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(435), 1,
      aux_sym_sequence_repeat1,
  [8501] = 3,
    ACTIONS(1064), 1,
      anon_sym_SQUOTE,
    ACTIONS(1066), 1,
      aux_sym_unit_token1,
    STATE(418), 1,
      aux_sym_unit_repeat1,
  [8511] = 3,
    ACTIONS(1068), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(93), 1,
      aux_sym_sequence_repeat1,
  [8521] = 3,
    ACTIONS(1068), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(93), 1,
      aux_sym_sequence_repeat1,
  [8531] = 3,
    ACTIONS(1070), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(124), 1,
      aux_sym_sequence_repeat1,
  [8541] = 3,
    ACTIONS(1070), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(124), 1,
      aux_sym_sequence_repeat1,
  [8551] = 3,
    ACTIONS(85), 1,
      anon_sym_EQ,
    ACTIONS(1072), 1,
      aux_sym_sequence_token1,
    STATE(392), 1,
      aux_sym_sequence_repeat1,
  [8561] = 3,
    ACTIONS(1052), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(219), 1,
      aux_sym_sequence_repeat1,
  [8571] = 3,
    ACTIONS(955), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(177), 1,
      aux_sym_sequence_repeat1,
  [8581] = 3,
    ACTIONS(79), 1,
      anon_sym_EQ,
    ACTIONS(1075), 1,
      aux_sym_sequence_token1,
    STATE(392), 1,
      aux_sym_sequence_repeat1,
  [8591] = 3,
    ACTIONS(79), 1,
      anon_sym_POUND,
    ACTIONS(1077), 1,
      aux_sym_sequence_token1,
    STATE(397), 1,
      aux_sym_sequence_repeat1,
  [8601] = 3,
    ACTIONS(85), 1,
      anon_sym_POUND,
    ACTIONS(1079), 1,
      aux_sym_sequence_token1,
    STATE(397), 1,
      aux_sym_sequence_repeat1,
  [8611] = 3,
    ACTIONS(955), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(177), 1,
      aux_sym_sequence_repeat1,
  [8621] = 3,
    ACTIONS(1082), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(344), 1,
      aux_sym_sequence_repeat1,
  [8631] = 3,
    ACTIONS(1082), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(344), 1,
      aux_sym_sequence_repeat1,
  [8641] = 3,
    ACTIONS(1084), 1,
      aux_sym_sequence_token1,
    STATE(395), 1,
      aux_sym_sequence_repeat1,
    STATE(463), 1,
      sym_sequence,
  [8651] = 3,
    ACTIONS(1086), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(112), 1,
      aux_sym_sequence_repeat1,
  [8661] = 3,
    ACTIONS(1086), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(112), 1,
      aux_sym_sequence_repeat1,
  [8671] = 3,
    ACTIONS(1088), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(174), 1,
      aux_sym_sequence_repeat1,
  [8681] = 3,
    ACTIONS(1088), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(174), 1,
      aux_sym_sequence_repeat1,
  [8691] = 3,
    ACTIONS(1027), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1029), 1,
      anon_sym_DOT_DOT,
    STATE(66), 1,
      sym_cardinality,
  [8701] = 3,
    ACTIONS(969), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(76), 1,
      aux_sym_sequence_repeat1,
  [8711] = 3,
    ACTIONS(969), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(76), 1,
      aux_sym_sequence_repeat1,
  [8721] = 3,
    ACTIONS(1090), 1,
      aux_sym_sequence_token1,
    STATE(373), 1,
      aux_sym_sequence_repeat1,
    STATE(383), 1,
      sym_sequence,
  [8731] = 3,
    ACTIONS(1090), 1,
      aux_sym_sequence_token1,
    STATE(373), 1,
      aux_sym_sequence_repeat1,
    STATE(382), 1,
      sym_sequence,
  [8741] = 3,
    ACTIONS(1084), 1,
      aux_sym_sequence_token1,
    STATE(395), 1,
      aux_sym_sequence_repeat1,
    STATE(481), 1,
      sym_sequence,
  [8751] = 3,
    ACTIONS(1092), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(311), 1,
      aux_sym_sequence_repeat1,
  [8761] = 3,
    ACTIONS(1092), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(311), 1,
      aux_sym_sequence_repeat1,
  [8771] = 3,
    ACTIONS(1040), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(84), 1,
      aux_sym_sequence_repeat1,
  [8781] = 3,
    ACTIONS(79), 1,
      anon_sym_EQ,
    ACTIONS(1094), 1,
      aux_sym_sequence_token1,
    STATE(392), 1,
      aux_sym_sequence_repeat1,
  [8791] = 3,
    ACTIONS(623), 1,
      anon_sym_from,
    ACTIONS(625), 1,
      anon_sym_and,
    STATE(231), 1,
      sym_vs_component_from,
  [8801] = 3,
    ACTIONS(1040), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(84), 1,
      aux_sym_sequence_repeat1,
  [8811] = 3,
    ACTIONS(1097), 1,
      anon_sym_SQUOTE,
    ACTIONS(1099), 1,
      aux_sym_unit_token1,
    STATE(442), 1,
      aux_sym_unit_repeat1,
  [8821] = 3,
    ACTIONS(1048), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(90), 1,
      aux_sym_sequence_repeat1,
  [8831] = 3,
    ACTIONS(1101), 1,
      anon_sym_RPAREN,
    ACTIONS(1103), 1,
      anon_sym_or,
    STATE(420), 1,
      aux_sym_reference_repeat1,
  [8841] = 3,
    ACTIONS(994), 1,
      anon_sym_or,
    ACTIONS(1106), 1,
      anon_sym_RPAREN,
    STATE(433), 1,
      aux_sym_canonical_repeat1,
  [8851] = 3,
    ACTIONS(1062), 1,
      aux_sym_sequence_token1,
    STATE(337), 1,
      aux_sym_sequence_repeat1,
    STATE(427), 1,
      sym_sequence,
  [8861] = 2,
    ACTIONS(1110), 1,
      anon_sym_PIPE,
    ACTIONS(1108), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [8869] = 3,
    ACTIONS(1060), 1,
      aux_sym_sequence_token1,
    STATE(295), 1,
      aux_sym_sequence_repeat1,
    STATE(423), 1,
      sym_sequence,
  [8879] = 3,
    ACTIONS(1112), 1,
      anon_sym_RPAREN,
    ACTIONS(1114), 1,
      anon_sym_or,
    STATE(420), 1,
      aux_sym_reference_repeat1,
  [8889] = 3,
    ACTIONS(1116), 1,
      aux_sym_sequence_token1,
    STATE(300), 1,
      aux_sym_sequence_repeat1,
    STATE(343), 1,
      sym_sequence,
  [8899] = 3,
    ACTIONS(994), 1,
      anon_sym_or,
    ACTIONS(1118), 1,
      anon_sym_RPAREN,
    STATE(375), 1,
      aux_sym_canonical_repeat1,
  [8909] = 3,
    ACTIONS(1116), 1,
      aux_sym_sequence_token1,
    STATE(300), 1,
      aux_sym_sequence_repeat1,
    STATE(340), 1,
      sym_sequence,
  [8919] = 3,
    ACTIONS(55), 1,
      anon_sym_insert,
    ACTIONS(67), 1,
      anon_sym_CARET,
    STATE(480), 1,
      sym_caret_path,
  [8929] = 3,
    ACTIONS(653), 1,
      anon_sym_DQUOTE,
    ACTIONS(1120), 1,
      anon_sym_or,
    STATE(430), 1,
      aux_sym_only_rule_repeat1,
  [8939] = 3,
    ACTIONS(1062), 1,
      aux_sym_sequence_token1,
    STATE(337), 1,
      aux_sym_sequence_repeat1,
    STATE(452), 1,
      sym_sequence,
  [8949] = 3,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(1123), 1,
      aux_sym_sequence_token1,
    STATE(432), 1,
      aux_sym_sequence_repeat1,
  [8959] = 3,
    ACTIONS(1108), 1,
      anon_sym_RPAREN,
    ACTIONS(1126), 1,
      anon_sym_or,
    STATE(433), 1,
      aux_sym_canonical_repeat1,
  [8969] = 3,
    ACTIONS(1129), 1,
      sym_number,
    STATE(226), 1,
      sym_quantity,
    STATE(227), 1,
      sym_ratio_part,
  [8979] = 3,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(1131), 1,
      aux_sym_sequence_token1,
    STATE(432), 1,
      aux_sym_sequence_repeat1,
  [8989] = 3,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    ACTIONS(1133), 1,
      anon_sym_POUND,
    STATE(120), 1,
      sym_string,
  [8999] = 2,
    ACTIONS(1135), 1,
      anon_sym_POUND,
    ACTIONS(96), 2,
      anon_sym_insert,
      anon_sym_CARET,
  [9007] = 3,
    ACTIONS(1062), 1,
      aux_sym_sequence_token1,
    STATE(337), 1,
      aux_sym_sequence_repeat1,
    STATE(446), 1,
      sym_sequence,
  [9017] = 3,
    ACTIONS(1137), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(97), 1,
      aux_sym_sequence_repeat1,
  [9027] = 3,
    ACTIONS(1114), 1,
      anon_sym_or,
    ACTIONS(1139), 1,
      anon_sym_RPAREN,
    STATE(425), 1,
      aux_sym_reference_repeat1,
  [9037] = 3,
    ACTIONS(1137), 1,
      aux_sym_sequence_token1,
    STATE(21), 1,
      sym_sequence,
    STATE(97), 1,
      aux_sym_sequence_repeat1,
  [9047] = 3,
    ACTIONS(1141), 1,
      anon_sym_SQUOTE,
    ACTIONS(1143), 1,
      aux_sym_unit_token1,
    STATE(442), 1,
      aux_sym_unit_repeat1,
  [9057] = 2,
    ACTIONS(1146), 1,
      anon_sym_DQUOTE,
    STATE(78), 1,
      sym_string,
  [9064] = 2,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    STATE(108), 1,
      sym_string,
  [9071] = 2,
    ACTIONS(1148), 1,
      anon_sym_valueset,
    STATE(215), 1,
      sym_vs_from_valueset,
  [9078] = 1,
    ACTIONS(1150), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [9083] = 2,
    ACTIONS(1152), 1,
      anon_sym_system,
    STATE(215), 1,
      sym_vs_from_system,
  [9090] = 2,
    ACTIONS(1154), 1,
      anon_sym_valueset,
    STATE(215), 1,
      sym_vs_from_valueset,
  [9097] = 2,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      sym_string,
  [9104] = 2,
    ACTIONS(1146), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      sym_string,
  [9111] = 2,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    STATE(120), 1,
      sym_string,
  [9118] = 1,
    ACTIONS(1101), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [9123] = 2,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    STATE(169), 1,
      sym_string,
  [9130] = 2,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    STATE(167), 1,
      sym_string,
  [9137] = 2,
    ACTIONS(1156), 1,
      anon_sym_POUND,
    ACTIONS(1158), 1,
      aux_sym_sequence_token1,
  [9144] = 2,
    ACTIONS(75), 1,
      anon_sym_EQ,
    ACTIONS(77), 1,
      aux_sym_sequence_token1,
  [9151] = 2,
    ACTIONS(1160), 1,
      anon_sym_from,
    STATE(230), 1,
      sym_vs_component_from,
  [9158] = 2,
    ACTIONS(1162), 1,
      anon_sym_system,
    STATE(215), 1,
      sym_vs_from_system,
  [9165] = 1,
    ACTIONS(1164), 1,
      anon_sym_COLON,
  [9169] = 1,
    ACTIONS(1166), 1,
      anon_sym_COLON,
  [9173] = 1,
    ACTIONS(1168), 1,
      anon_sym_COLON,
  [9177] = 1,
    ACTIONS(1170), 1,
      anon_sym_DOT_DOT,
  [9181] = 1,
    ACTIONS(1172), 1,
      anon_sym_EQ,
  [9185] = 1,
    ACTIONS(1174), 1,
      anon_sym_COLON,
  [9189] = 1,
    ACTIONS(1176), 1,
      anon_sym_COLON,
  [9193] = 1,
    ACTIONS(1178), 1,
      anon_sym_COLON,
  [9197] = 1,
    ACTIONS(1180), 1,
      anon_sym_COLON,
  [9201] = 1,
    ACTIONS(1182), 1,
      anon_sym_COLON,
  [9205] = 1,
    ACTIONS(1184), 1,
      anon_sym_COLON,
  [9209] = 1,
    ACTIONS(1186), 1,
      anon_sym_COLON,
  [9213] = 1,
    ACTIONS(1188), 1,
      anon_sym_COLON,
  [9217] = 1,
    ACTIONS(1190), 1,
      anon_sym_COLON,
  [9221] = 1,
    ACTIONS(1192), 1,
      ts_builtin_sym_end,
  [9225] = 1,
    ACTIONS(1194), 1,
      anon_sym_EQ,
  [9229] = 1,
    ACTIONS(1196), 1,
      anon_sym_COLON,
  [9233] = 1,
    ACTIONS(1198), 1,
      anon_sym_LPAREN,
  [9237] = 1,
    ACTIONS(1200), 1,
      anon_sym_LPAREN,
  [9241] = 1,
    ACTIONS(1202), 1,
      anon_sym_EQ,
  [9245] = 1,
    ACTIONS(1204), 1,
      anon_sym_DOT_DOT,
  [9249] = 1,
    ACTIONS(1206), 1,
      anon_sym_EQ,
  [9253] = 1,
    ACTIONS(1208), 1,
      anon_sym_EQ,
  [9257] = 1,
    ACTIONS(625), 1,
      anon_sym_and,
  [9261] = 1,
    ACTIONS(1210), 1,
      anon_sym_COLON,
  [9265] = 1,
    ACTIONS(1212), 1,
      anon_sym_COLON,
  [9269] = 1,
    ACTIONS(1214), 1,
      anon_sym_COLON,
  [9273] = 1,
    ACTIONS(1216), 1,
      anon_sym_COLON,
  [9277] = 1,
    ACTIONS(1218), 1,
      sym_time,
  [9281] = 1,
    ACTIONS(1220), 1,
      anon_sym_COLON,
  [9285] = 1,
    ACTIONS(1222), 1,
      anon_sym_exactly,
  [9289] = 1,
    ACTIONS(1224), 1,
      anon_sym_COLON,
  [9293] = 1,
    ACTIONS(1226), 1,
      anon_sym_POUND,
  [9297] = 1,
    ACTIONS(1228), 1,
      anon_sym_COLON,
  [9301] = 1,
    ACTIONS(1230), 1,
      anon_sym_POUND,
  [9305] = 1,
    ACTIONS(1232), 1,
      anon_sym_COLON,
  [9309] = 1,
    ACTIONS(1234), 1,
      anon_sym_RPAREN,
  [9313] = 1,
    ACTIONS(1236), 1,
      anon_sym_COLON,
  [9317] = 1,
    ACTIONS(1238), 1,
      anon_sym_COLON,
  [9321] = 1,
    ACTIONS(1240), 1,
      anon_sym_COLON,
  [9325] = 1,
    ACTIONS(1242), 1,
      anon_sym_POUND,
  [9329] = 1,
    ACTIONS(1135), 1,
      anon_sym_POUND,
  [9333] = 1,
    ACTIONS(1244), 1,
      anon_sym_POUND,
  [9337] = 1,
    ACTIONS(1246), 1,
      anon_sym_POUND,
  [9341] = 1,
    ACTIONS(1248), 1,
      anon_sym_POUND,
  [9345] = 1,
    ACTIONS(1250), 1,
      anon_sym_POUND,
  [9349] = 1,
    ACTIONS(1252), 1,
      anon_sym_POUND,
  [9353] = 1,
    ACTIONS(1254), 1,
      anon_sym_POUND,
  [9357] = 1,
    ACTIONS(1256), 1,
      anon_sym_POUND,
  [9361] = 1,
    ACTIONS(733), 1,
      anon_sym_POUND,
  [9365] = 1,
    ACTIONS(714), 1,
      anon_sym_POUND,
  [9369] = 1,
    ACTIONS(1258), 1,
      anon_sym_POUND,
  [9373] = 1,
    ACTIONS(1260), 1,
      anon_sym_RPAREN,
  [9377] = 1,
    ACTIONS(1262), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 60,
  [SMALL_STATE(4)] = 120,
  [SMALL_STATE(5)] = 180,
  [SMALL_STATE(6)] = 240,
  [SMALL_STATE(7)] = 295,
  [SMALL_STATE(8)] = 350,
  [SMALL_STATE(9)] = 405,
  [SMALL_STATE(10)] = 471,
  [SMALL_STATE(11)] = 507,
  [SMALL_STATE(12)] = 546,
  [SMALL_STATE(13)] = 585,
  [SMALL_STATE(14)] = 642,
  [SMALL_STATE(15)] = 676,
  [SMALL_STATE(16)] = 708,
  [SMALL_STATE(17)] = 760,
  [SMALL_STATE(18)] = 812,
  [SMALL_STATE(19)] = 846,
  [SMALL_STATE(20)] = 879,
  [SMALL_STATE(21)] = 912,
  [SMALL_STATE(22)] = 944,
  [SMALL_STATE(23)] = 976,
  [SMALL_STATE(24)] = 1014,
  [SMALL_STATE(25)] = 1052,
  [SMALL_STATE(26)] = 1090,
  [SMALL_STATE(27)] = 1140,
  [SMALL_STATE(28)] = 1190,
  [SMALL_STATE(29)] = 1228,
  [SMALL_STATE(30)] = 1266,
  [SMALL_STATE(31)] = 1329,
  [SMALL_STATE(32)] = 1392,
  [SMALL_STATE(33)] = 1455,
  [SMALL_STATE(34)] = 1518,
  [SMALL_STATE(35)] = 1562,
  [SMALL_STATE(36)] = 1606,
  [SMALL_STATE(37)] = 1639,
  [SMALL_STATE(38)] = 1682,
  [SMALL_STATE(39)] = 1725,
  [SMALL_STATE(40)] = 1758,
  [SMALL_STATE(41)] = 1803,
  [SMALL_STATE(42)] = 1844,
  [SMALL_STATE(43)] = 1873,
  [SMALL_STATE(44)] = 1902,
  [SMALL_STATE(45)] = 1935,
  [SMALL_STATE(46)] = 1968,
  [SMALL_STATE(47)] = 1996,
  [SMALL_STATE(48)] = 2043,
  [SMALL_STATE(49)] = 2082,
  [SMALL_STATE(50)] = 2119,
  [SMALL_STATE(51)] = 2166,
  [SMALL_STATE(52)] = 2194,
  [SMALL_STATE(53)] = 2230,
  [SMALL_STATE(54)] = 2268,
  [SMALL_STATE(55)] = 2296,
  [SMALL_STATE(56)] = 2332,
  [SMALL_STATE(57)] = 2360,
  [SMALL_STATE(58)] = 2388,
  [SMALL_STATE(59)] = 2416,
  [SMALL_STATE(60)] = 2444,
  [SMALL_STATE(61)] = 2472,
  [SMALL_STATE(62)] = 2499,
  [SMALL_STATE(63)] = 2524,
  [SMALL_STATE(64)] = 2551,
  [SMALL_STATE(65)] = 2584,
  [SMALL_STATE(66)] = 2621,
  [SMALL_STATE(67)] = 2648,
  [SMALL_STATE(68)] = 2683,
  [SMALL_STATE(69)] = 2710,
  [SMALL_STATE(70)] = 2743,
  [SMALL_STATE(71)] = 2779,
  [SMALL_STATE(72)] = 2813,
  [SMALL_STATE(73)] = 2835,
  [SMALL_STATE(74)] = 2861,
  [SMALL_STATE(75)] = 2883,
  [SMALL_STATE(76)] = 2905,
  [SMALL_STATE(77)] = 2931,
  [SMALL_STATE(78)] = 2957,
  [SMALL_STATE(79)] = 2993,
  [SMALL_STATE(80)] = 3019,
  [SMALL_STATE(81)] = 3060,
  [SMALL_STATE(82)] = 3085,
  [SMALL_STATE(83)] = 3110,
  [SMALL_STATE(84)] = 3131,
  [SMALL_STATE(85)] = 3158,
  [SMALL_STATE(86)] = 3185,
  [SMALL_STATE(87)] = 3208,
  [SMALL_STATE(88)] = 3238,
  [SMALL_STATE(89)] = 3264,
  [SMALL_STATE(90)] = 3288,
  [SMALL_STATE(91)] = 3312,
  [SMALL_STATE(92)] = 3336,
  [SMALL_STATE(93)] = 3374,
  [SMALL_STATE(94)] = 3398,
  [SMALL_STATE(95)] = 3422,
  [SMALL_STATE(96)] = 3448,
  [SMALL_STATE(97)] = 3472,
  [SMALL_STATE(98)] = 3496,
  [SMALL_STATE(99)] = 3522,
  [SMALL_STATE(100)] = 3548,
  [SMALL_STATE(101)] = 3572,
  [SMALL_STATE(102)] = 3598,
  [SMALL_STATE(103)] = 3624,
  [SMALL_STATE(104)] = 3650,
  [SMALL_STATE(105)] = 3698,
  [SMALL_STATE(106)] = 3718,
  [SMALL_STATE(107)] = 3748,
  [SMALL_STATE(108)] = 3772,
  [SMALL_STATE(109)] = 3792,
  [SMALL_STATE(110)] = 3812,
  [SMALL_STATE(111)] = 3838,
  [SMALL_STATE(112)] = 3864,
  [SMALL_STATE(113)] = 3887,
  [SMALL_STATE(114)] = 3912,
  [SMALL_STATE(115)] = 3933,
  [SMALL_STATE(116)] = 3956,
  [SMALL_STATE(117)] = 3981,
  [SMALL_STATE(118)] = 4006,
  [SMALL_STATE(119)] = 4029,
  [SMALL_STATE(120)] = 4052,
  [SMALL_STATE(121)] = 4077,
  [SMALL_STATE(122)] = 4098,
  [SMALL_STATE(123)] = 4121,
  [SMALL_STATE(124)] = 4144,
  [SMALL_STATE(125)] = 4167,
  [SMALL_STATE(126)] = 4188,
  [SMALL_STATE(127)] = 4207,
  [SMALL_STATE(128)] = 4232,
  [SMALL_STATE(129)] = 4251,
  [SMALL_STATE(130)] = 4276,
  [SMALL_STATE(131)] = 4301,
  [SMALL_STATE(132)] = 4324,
  [SMALL_STATE(133)] = 4347,
  [SMALL_STATE(134)] = 4370,
  [SMALL_STATE(135)] = 4393,
  [SMALL_STATE(136)] = 4416,
  [SMALL_STATE(137)] = 4439,
  [SMALL_STATE(138)] = 4462,
  [SMALL_STATE(139)] = 4485,
  [SMALL_STATE(140)] = 4507,
  [SMALL_STATE(141)] = 4525,
  [SMALL_STATE(142)] = 4547,
  [SMALL_STATE(143)] = 4569,
  [SMALL_STATE(144)] = 4589,
  [SMALL_STATE(145)] = 4611,
  [SMALL_STATE(146)] = 4633,
  [SMALL_STATE(147)] = 4653,
  [SMALL_STATE(148)] = 4671,
  [SMALL_STATE(149)] = 4689,
  [SMALL_STATE(150)] = 4711,
  [SMALL_STATE(151)] = 4733,
  [SMALL_STATE(152)] = 4755,
  [SMALL_STATE(153)] = 4773,
  [SMALL_STATE(154)] = 4795,
  [SMALL_STATE(155)] = 4813,
  [SMALL_STATE(156)] = 4831,
  [SMALL_STATE(157)] = 4851,
  [SMALL_STATE(158)] = 4869,
  [SMALL_STATE(159)] = 4891,
  [SMALL_STATE(160)] = 4913,
  [SMALL_STATE(161)] = 4935,
  [SMALL_STATE(162)] = 4957,
  [SMALL_STATE(163)] = 4975,
  [SMALL_STATE(164)] = 4997,
  [SMALL_STATE(165)] = 5015,
  [SMALL_STATE(166)] = 5039,
  [SMALL_STATE(167)] = 5057,
  [SMALL_STATE(168)] = 5075,
  [SMALL_STATE(169)] = 5093,
  [SMALL_STATE(170)] = 5111,
  [SMALL_STATE(171)] = 5129,
  [SMALL_STATE(172)] = 5147,
  [SMALL_STATE(173)] = 5169,
  [SMALL_STATE(174)] = 5189,
  [SMALL_STATE(175)] = 5211,
  [SMALL_STATE(176)] = 5232,
  [SMALL_STATE(177)] = 5249,
  [SMALL_STATE(178)] = 5270,
  [SMALL_STATE(179)] = 5291,
  [SMALL_STATE(180)] = 5312,
  [SMALL_STATE(181)] = 5333,
  [SMALL_STATE(182)] = 5350,
  [SMALL_STATE(183)] = 5371,
  [SMALL_STATE(184)] = 5392,
  [SMALL_STATE(185)] = 5409,
  [SMALL_STATE(186)] = 5430,
  [SMALL_STATE(187)] = 5449,
  [SMALL_STATE(188)] = 5468,
  [SMALL_STATE(189)] = 5489,
  [SMALL_STATE(190)] = 5508,
  [SMALL_STATE(191)] = 5527,
  [SMALL_STATE(192)] = 5544,
  [SMALL_STATE(193)] = 5565,
  [SMALL_STATE(194)] = 5586,
  [SMALL_STATE(195)] = 5607,
  [SMALL_STATE(196)] = 5628,
  [SMALL_STATE(197)] = 5647,
  [SMALL_STATE(198)] = 5666,
  [SMALL_STATE(199)] = 5687,
  [SMALL_STATE(200)] = 5708,
  [SMALL_STATE(201)] = 5727,
  [SMALL_STATE(202)] = 5744,
  [SMALL_STATE(203)] = 5763,
  [SMALL_STATE(204)] = 5784,
  [SMALL_STATE(205)] = 5805,
  [SMALL_STATE(206)] = 5822,
  [SMALL_STATE(207)] = 5843,
  [SMALL_STATE(208)] = 5864,
  [SMALL_STATE(209)] = 5883,
  [SMALL_STATE(210)] = 5904,
  [SMALL_STATE(211)] = 5925,
  [SMALL_STATE(212)] = 5946,
  [SMALL_STATE(213)] = 5967,
  [SMALL_STATE(214)] = 5987,
  [SMALL_STATE(215)] = 6005,
  [SMALL_STATE(216)] = 6021,
  [SMALL_STATE(217)] = 6039,
  [SMALL_STATE(218)] = 6055,
  [SMALL_STATE(219)] = 6071,
  [SMALL_STATE(220)] = 6091,
  [SMALL_STATE(221)] = 6107,
  [SMALL_STATE(222)] = 6125,
  [SMALL_STATE(223)] = 6141,
  [SMALL_STATE(224)] = 6157,
  [SMALL_STATE(225)] = 6173,
  [SMALL_STATE(226)] = 6189,
  [SMALL_STATE(227)] = 6205,
  [SMALL_STATE(228)] = 6221,
  [SMALL_STATE(229)] = 6239,
  [SMALL_STATE(230)] = 6255,
  [SMALL_STATE(231)] = 6273,
  [SMALL_STATE(232)] = 6288,
  [SMALL_STATE(233)] = 6303,
  [SMALL_STATE(234)] = 6320,
  [SMALL_STATE(235)] = 6335,
  [SMALL_STATE(236)] = 6350,
  [SMALL_STATE(237)] = 6365,
  [SMALL_STATE(238)] = 6386,
  [SMALL_STATE(239)] = 6401,
  [SMALL_STATE(240)] = 6416,
  [SMALL_STATE(241)] = 6431,
  [SMALL_STATE(242)] = 6446,
  [SMALL_STATE(243)] = 6461,
  [SMALL_STATE(244)] = 6476,
  [SMALL_STATE(245)] = 6497,
  [SMALL_STATE(246)] = 6512,
  [SMALL_STATE(247)] = 6527,
  [SMALL_STATE(248)] = 6542,
  [SMALL_STATE(249)] = 6557,
  [SMALL_STATE(250)] = 6572,
  [SMALL_STATE(251)] = 6587,
  [SMALL_STATE(252)] = 6602,
  [SMALL_STATE(253)] = 6617,
  [SMALL_STATE(254)] = 6632,
  [SMALL_STATE(255)] = 6647,
  [SMALL_STATE(256)] = 6662,
  [SMALL_STATE(257)] = 6677,
  [SMALL_STATE(258)] = 6692,
  [SMALL_STATE(259)] = 6707,
  [SMALL_STATE(260)] = 6722,
  [SMALL_STATE(261)] = 6737,
  [SMALL_STATE(262)] = 6752,
  [SMALL_STATE(263)] = 6772,
  [SMALL_STATE(264)] = 6786,
  [SMALL_STATE(265)] = 6801,
  [SMALL_STATE(266)] = 6820,
  [SMALL_STATE(267)] = 6849,
  [SMALL_STATE(268)] = 6864,
  [SMALL_STATE(269)] = 6887,
  [SMALL_STATE(270)] = 6910,
  [SMALL_STATE(271)] = 6941,
  [SMALL_STATE(272)] = 6972,
  [SMALL_STATE(273)] = 6988,
  [SMALL_STATE(274)] = 7002,
  [SMALL_STATE(275)] = 7018,
  [SMALL_STATE(276)] = 7044,
  [SMALL_STATE(277)] = 7070,
  [SMALL_STATE(278)] = 7096,
  [SMALL_STATE(279)] = 7111,
  [SMALL_STATE(280)] = 7133,
  [SMALL_STATE(281)] = 7153,
  [SMALL_STATE(282)] = 7173,
  [SMALL_STATE(283)] = 7195,
  [SMALL_STATE(284)] = 7217,
  [SMALL_STATE(285)] = 7239,
  [SMALL_STATE(286)] = 7249,
  [SMALL_STATE(287)] = 7262,
  [SMALL_STATE(288)] = 7281,
  [SMALL_STATE(289)] = 7294,
  [SMALL_STATE(290)] = 7307,
  [SMALL_STATE(291)] = 7320,
  [SMALL_STATE(292)] = 7339,
  [SMALL_STATE(293)] = 7355,
  [SMALL_STATE(294)] = 7371,
  [SMALL_STATE(295)] = 7383,
  [SMALL_STATE(296)] = 7395,
  [SMALL_STATE(297)] = 7411,
  [SMALL_STATE(298)] = 7427,
  [SMALL_STATE(299)] = 7439,
  [SMALL_STATE(300)] = 7451,
  [SMALL_STATE(301)] = 7463,
  [SMALL_STATE(302)] = 7475,
  [SMALL_STATE(303)] = 7489,
  [SMALL_STATE(304)] = 7505,
  [SMALL_STATE(305)] = 7521,
  [SMALL_STATE(306)] = 7535,
  [SMALL_STATE(307)] = 7549,
  [SMALL_STATE(308)] = 7565,
  [SMALL_STATE(309)] = 7581,
  [SMALL_STATE(310)] = 7597,
  [SMALL_STATE(311)] = 7613,
  [SMALL_STATE(312)] = 7625,
  [SMALL_STATE(313)] = 7636,
  [SMALL_STATE(314)] = 7647,
  [SMALL_STATE(315)] = 7658,
  [SMALL_STATE(316)] = 7671,
  [SMALL_STATE(317)] = 7682,
  [SMALL_STATE(318)] = 7695,
  [SMALL_STATE(319)] = 7708,
  [SMALL_STATE(320)] = 7721,
  [SMALL_STATE(321)] = 7734,
  [SMALL_STATE(322)] = 7747,
  [SMALL_STATE(323)] = 7760,
  [SMALL_STATE(324)] = 7771,
  [SMALL_STATE(325)] = 7782,
  [SMALL_STATE(326)] = 7795,
  [SMALL_STATE(327)] = 7808,
  [SMALL_STATE(328)] = 7821,
  [SMALL_STATE(329)] = 7834,
  [SMALL_STATE(330)] = 7847,
  [SMALL_STATE(331)] = 7860,
  [SMALL_STATE(332)] = 7873,
  [SMALL_STATE(333)] = 7884,
  [SMALL_STATE(334)] = 7895,
  [SMALL_STATE(335)] = 7908,
  [SMALL_STATE(336)] = 7921,
  [SMALL_STATE(337)] = 7934,
  [SMALL_STATE(338)] = 7945,
  [SMALL_STATE(339)] = 7958,
  [SMALL_STATE(340)] = 7971,
  [SMALL_STATE(341)] = 7980,
  [SMALL_STATE(342)] = 7991,
  [SMALL_STATE(343)] = 8002,
  [SMALL_STATE(344)] = 8011,
  [SMALL_STATE(345)] = 8022,
  [SMALL_STATE(346)] = 8033,
  [SMALL_STATE(347)] = 8046,
  [SMALL_STATE(348)] = 8059,
  [SMALL_STATE(349)] = 8072,
  [SMALL_STATE(350)] = 8085,
  [SMALL_STATE(351)] = 8096,
  [SMALL_STATE(352)] = 8109,
  [SMALL_STATE(353)] = 8116,
  [SMALL_STATE(354)] = 8127,
  [SMALL_STATE(355)] = 8138,
  [SMALL_STATE(356)] = 8151,
  [SMALL_STATE(357)] = 8164,
  [SMALL_STATE(358)] = 8175,
  [SMALL_STATE(359)] = 8188,
  [SMALL_STATE(360)] = 8201,
  [SMALL_STATE(361)] = 8214,
  [SMALL_STATE(362)] = 8227,
  [SMALL_STATE(363)] = 8240,
  [SMALL_STATE(364)] = 8251,
  [SMALL_STATE(365)] = 8264,
  [SMALL_STATE(366)] = 8277,
  [SMALL_STATE(367)] = 8290,
  [SMALL_STATE(368)] = 8303,
  [SMALL_STATE(369)] = 8316,
  [SMALL_STATE(370)] = 8327,
  [SMALL_STATE(371)] = 8340,
  [SMALL_STATE(372)] = 8351,
  [SMALL_STATE(373)] = 8364,
  [SMALL_STATE(374)] = 8375,
  [SMALL_STATE(375)] = 8385,
  [SMALL_STATE(376)] = 8395,
  [SMALL_STATE(377)] = 8405,
  [SMALL_STATE(378)] = 8415,
  [SMALL_STATE(379)] = 8425,
  [SMALL_STATE(380)] = 8435,
  [SMALL_STATE(381)] = 8445,
  [SMALL_STATE(382)] = 8455,
  [SMALL_STATE(383)] = 8463,
  [SMALL_STATE(384)] = 8471,
  [SMALL_STATE(385)] = 8481,
  [SMALL_STATE(386)] = 8491,
  [SMALL_STATE(387)] = 8501,
  [SMALL_STATE(388)] = 8511,
  [SMALL_STATE(389)] = 8521,
  [SMALL_STATE(390)] = 8531,
  [SMALL_STATE(391)] = 8541,
  [SMALL_STATE(392)] = 8551,
  [SMALL_STATE(393)] = 8561,
  [SMALL_STATE(394)] = 8571,
  [SMALL_STATE(395)] = 8581,
  [SMALL_STATE(396)] = 8591,
  [SMALL_STATE(397)] = 8601,
  [SMALL_STATE(398)] = 8611,
  [SMALL_STATE(399)] = 8621,
  [SMALL_STATE(400)] = 8631,
  [SMALL_STATE(401)] = 8641,
  [SMALL_STATE(402)] = 8651,
  [SMALL_STATE(403)] = 8661,
  [SMALL_STATE(404)] = 8671,
  [SMALL_STATE(405)] = 8681,
  [SMALL_STATE(406)] = 8691,
  [SMALL_STATE(407)] = 8701,
  [SMALL_STATE(408)] = 8711,
  [SMALL_STATE(409)] = 8721,
  [SMALL_STATE(410)] = 8731,
  [SMALL_STATE(411)] = 8741,
  [SMALL_STATE(412)] = 8751,
  [SMALL_STATE(413)] = 8761,
  [SMALL_STATE(414)] = 8771,
  [SMALL_STATE(415)] = 8781,
  [SMALL_STATE(416)] = 8791,
  [SMALL_STATE(417)] = 8801,
  [SMALL_STATE(418)] = 8811,
  [SMALL_STATE(419)] = 8821,
  [SMALL_STATE(420)] = 8831,
  [SMALL_STATE(421)] = 8841,
  [SMALL_STATE(422)] = 8851,
  [SMALL_STATE(423)] = 8861,
  [SMALL_STATE(424)] = 8869,
  [SMALL_STATE(425)] = 8879,
  [SMALL_STATE(426)] = 8889,
  [SMALL_STATE(427)] = 8899,
  [SMALL_STATE(428)] = 8909,
  [SMALL_STATE(429)] = 8919,
  [SMALL_STATE(430)] = 8929,
  [SMALL_STATE(431)] = 8939,
  [SMALL_STATE(432)] = 8949,
  [SMALL_STATE(433)] = 8959,
  [SMALL_STATE(434)] = 8969,
  [SMALL_STATE(435)] = 8979,
  [SMALL_STATE(436)] = 8989,
  [SMALL_STATE(437)] = 8999,
  [SMALL_STATE(438)] = 9007,
  [SMALL_STATE(439)] = 9017,
  [SMALL_STATE(440)] = 9027,
  [SMALL_STATE(441)] = 9037,
  [SMALL_STATE(442)] = 9047,
  [SMALL_STATE(443)] = 9057,
  [SMALL_STATE(444)] = 9064,
  [SMALL_STATE(445)] = 9071,
  [SMALL_STATE(446)] = 9078,
  [SMALL_STATE(447)] = 9083,
  [SMALL_STATE(448)] = 9090,
  [SMALL_STATE(449)] = 9097,
  [SMALL_STATE(450)] = 9104,
  [SMALL_STATE(451)] = 9111,
  [SMALL_STATE(452)] = 9118,
  [SMALL_STATE(453)] = 9123,
  [SMALL_STATE(454)] = 9130,
  [SMALL_STATE(455)] = 9137,
  [SMALL_STATE(456)] = 9144,
  [SMALL_STATE(457)] = 9151,
  [SMALL_STATE(458)] = 9158,
  [SMALL_STATE(459)] = 9165,
  [SMALL_STATE(460)] = 9169,
  [SMALL_STATE(461)] = 9173,
  [SMALL_STATE(462)] = 9177,
  [SMALL_STATE(463)] = 9181,
  [SMALL_STATE(464)] = 9185,
  [SMALL_STATE(465)] = 9189,
  [SMALL_STATE(466)] = 9193,
  [SMALL_STATE(467)] = 9197,
  [SMALL_STATE(468)] = 9201,
  [SMALL_STATE(469)] = 9205,
  [SMALL_STATE(470)] = 9209,
  [SMALL_STATE(471)] = 9213,
  [SMALL_STATE(472)] = 9217,
  [SMALL_STATE(473)] = 9221,
  [SMALL_STATE(474)] = 9225,
  [SMALL_STATE(475)] = 9229,
  [SMALL_STATE(476)] = 9233,
  [SMALL_STATE(477)] = 9237,
  [SMALL_STATE(478)] = 9241,
  [SMALL_STATE(479)] = 9245,
  [SMALL_STATE(480)] = 9249,
  [SMALL_STATE(481)] = 9253,
  [SMALL_STATE(482)] = 9257,
  [SMALL_STATE(483)] = 9261,
  [SMALL_STATE(484)] = 9265,
  [SMALL_STATE(485)] = 9269,
  [SMALL_STATE(486)] = 9273,
  [SMALL_STATE(487)] = 9277,
  [SMALL_STATE(488)] = 9281,
  [SMALL_STATE(489)] = 9285,
  [SMALL_STATE(490)] = 9289,
  [SMALL_STATE(491)] = 9293,
  [SMALL_STATE(492)] = 9297,
  [SMALL_STATE(493)] = 9301,
  [SMALL_STATE(494)] = 9305,
  [SMALL_STATE(495)] = 9309,
  [SMALL_STATE(496)] = 9313,
  [SMALL_STATE(497)] = 9317,
  [SMALL_STATE(498)] = 9321,
  [SMALL_STATE(499)] = 9325,
  [SMALL_STATE(500)] = 9329,
  [SMALL_STATE(501)] = 9333,
  [SMALL_STATE(502)] = 9337,
  [SMALL_STATE(503)] = 9341,
  [SMALL_STATE(504)] = 9345,
  [SMALL_STATE(505)] = 9349,
  [SMALL_STATE(506)] = 9353,
  [SMALL_STATE(507)] = 9357,
  [SMALL_STATE(508)] = 9361,
  [SMALL_STATE(509)] = 9365,
  [SMALL_STATE(510)] = 9369,
  [SMALL_STATE(511)] = 9373,
  [SMALL_STATE(512)] = 9377,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_rule, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(12),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 4),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_name, 1), REDUCE(sym_path, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3, .production_id = 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3, .production_id = 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 2, .production_id = 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 2, .production_id = 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 5),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 4),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance, 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_logical_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_logical_repeat1, 2), SHIFT_REPEAT(270),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 4),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 5),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 4),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 5),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_definition, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(483),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(498),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(475),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(469),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(460),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat2, 2),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat2, 2), SHIFT_REPEAT(271),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(471),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(512),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(496),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(486),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(461),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(464),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(465),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(466),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(468),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(472),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instance_repeat1, 2),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(483),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(497),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(460),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(467),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(483),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(484),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(485),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(460),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 2),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(483),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(488),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(492),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(470),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ratio_part, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 5),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invariant, 4),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 1),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2), SHIFT_REPEAT(74),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_rule, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title, 3),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_rule, 4),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(483),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(490),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(460),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_rule, 3),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_rule, 4),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(483),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(490),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(460),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 3),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(79),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 1),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [406] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(77),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 4),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(79),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [422] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(82),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(85),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_operator, 1),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vs_filter_operator, 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instance_repeat2, 2),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat2, 2), SHIFT_REPEAT(287),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(89),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [446] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(91),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [451] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(94),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_repeat2, 2),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat2, 2), SHIFT_REPEAT(279),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(96),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 5),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_valueset_repeat2, 2),
  [470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat2, 2), SHIFT_REPEAT(104),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 5),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_metadata, 1),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 5),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_string, 1),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 5),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 6),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_of, 3),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance_of, 3),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 5),
  [511] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(118),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_cre_element_rule, 6),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_metadata, 1),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance_metadata, 1),
  [522] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(122),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usage, 3),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usage, 3),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parent, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 7),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sd_metadata, 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 5),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat2, 2),
  [543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat2, 2), SHIFT_REPEAT(283),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [548] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(132),
  [551] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(133),
  [554] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(134),
  [557] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(135),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [564] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(138),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_string, 2),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_valueset, 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_valueset, 2),
  [577] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(144),
  [580] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(145),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invariant_metadata, 1),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 7),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [589] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(151),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 6),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 5),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 5),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2),
  [604] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2), SHIFT_REPEAT(331),
  [607] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(159),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 4),
  [616] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(163),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 4),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 1),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 3),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_severity, 3),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath, 3),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_metadata, 1),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cs_metadata, 1),
  [639] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(172),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_type, 1),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [650] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(179),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2), SHIFT_REPEAT(276),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contains_rule_repeat1, 2),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contains_rule_repeat1, 2), SHIFT_REPEAT(293),
  [663] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(183),
  [666] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2), SHIFT_REPEAT(349),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_list, 2),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component_from, 2),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 3),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vs_filter_list_repeat1, 2),
  [683] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vs_filter_list_repeat1, 2), SHIFT_REPEAT(292),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_list, 1),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 4),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 1),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_rule, 5),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_only_rule, 4),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_type, 1, .production_id = 4),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 3),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_system, 2),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_only_rule, 5),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_rule, 4),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 5),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_rule, 4),
  [724] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(213),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_value_rule, 4),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component_from, 4),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_definition, 3),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_value, 1),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 3),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ratio, 3),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_component, 2),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 3),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_cre_element_rule, 7),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 5, .production_id = 1),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_insert_rule, 3),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 2),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lr_rule, 1),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_insert_rule, 2),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 8),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_caret_value_rule, 5),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sd_rule, 1),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_component, 4),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component, 3),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_entity_rule, 1),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_rule, 3),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_rule, 1),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_rule, 5),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strength, 3),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_value_rule, 7),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component, 2),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_rule, 2),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_rule, 1),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_value_rule, 5),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 6),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_value_rule, 4),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cs_rule, 1),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2),
  [819] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2), SHIFT_REPEAT(273),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 3),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag, 1),
  [832] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(274),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [837] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_rule_repeat1, 2), SHIFT_REPEAT(296),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_rule_repeat1, 2),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2),
  [852] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2), SHIFT_REPEAT(410),
  [855] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2), SHIFT_REPEAT(396),
  [858] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2), SHIFT_REPEAT(400),
  [861] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2), SHIFT_REPEAT(396),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [870] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(286),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [875] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(288),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [886] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(294),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [893] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(298),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [898] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(298),
  [901] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(301),
  [904] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(302),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_insert_rule_repeat1, 1),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 1),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [933] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(312),
  [936] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(313),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [965] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [975] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [983] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(336),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [998] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(341),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [1005] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(345),
  [1008] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [1010] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(350),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1035] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(363),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1042] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(369),
  [1045] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(369),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1072] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(392),
  [1075] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [1077] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [1079] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(397),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1094] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(392),
  [1097] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reference_repeat1, 2),
  [1103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reference_repeat1, 2), SHIFT_REPEAT(431),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 2),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2), SHIFT_REPEAT(275),
  [1123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(432),
  [1126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 2), SHIFT_REPEAT(424),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2),
  [1143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(442),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 4),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2),
  [1158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_path, 2),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1192] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
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
