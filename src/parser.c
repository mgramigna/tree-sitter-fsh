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
#define STATE_COUNT 517
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 183
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
  sym_concept = 135,
  sym_code_string = 136,
  sym_sequence = 137,
  sym_caret_path = 138,
  sym_name = 139,
  sym_cardinality = 140,
  sym_string = 141,
  sym_multiline_string = 142,
  sym_datetime = 143,
  sym_unit = 144,
  sym_quantity = 145,
  sym_ratio_part = 146,
  sym_ratio = 147,
  sym_bool = 148,
  sym_path = 149,
  sym_strength = 150,
  sym_reference = 151,
  sym_canonical = 152,
  sym_value = 153,
  sym_item = 154,
  sym_flag = 155,
  sym_target_type = 156,
  aux_sym_doc_repeat1 = 157,
  aux_sym_profile_repeat1 = 158,
  aux_sym_profile_repeat2 = 159,
  aux_sym_invariant_repeat1 = 160,
  aux_sym_instance_repeat1 = 161,
  aux_sym_instance_repeat2 = 162,
  aux_sym_valueset_repeat1 = 163,
  aux_sym_valueset_repeat2 = 164,
  aux_sym_codesystem_repeat1 = 165,
  aux_sym_codesystem_repeat2 = 166,
  aux_sym_mapping_repeat1 = 167,
  aux_sym_mapping_repeat2 = 168,
  aux_sym_logical_repeat1 = 169,
  aux_sym_cardinality_rule_repeat1 = 170,
  aux_sym_code_insert_rule_repeat1 = 171,
  aux_sym_contains_rule_repeat1 = 172,
  aux_sym_obeys_rule_repeat1 = 173,
  aux_sym_flag_rule_repeat1 = 174,
  aux_sym_only_rule_repeat1 = 175,
  aux_sym_vs_concept_component_repeat1 = 176,
  aux_sym_vs_filter_list_repeat1 = 177,
  aux_sym_sequence_repeat1 = 178,
  aux_sym_string_repeat1 = 179,
  aux_sym_unit_repeat1 = 180,
  aux_sym_reference_repeat1 = 181,
  aux_sym_canonical_repeat1 = 182,
  alias_sym_alias_name = 183,
  alias_sym_code_system = 184,
  alias_sym_code_value = 185,
  alias_sym_reference_type = 186,
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
  [66] = 66,
  [67] = 54,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 66,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 13,
  [78] = 12,
  [79] = 13,
  [80] = 12,
  [81] = 12,
  [82] = 82,
  [83] = 13,
  [84] = 84,
  [85] = 85,
  [86] = 13,
  [87] = 12,
  [88] = 88,
  [89] = 27,
  [90] = 29,
  [91] = 12,
  [92] = 13,
  [93] = 12,
  [94] = 13,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 13,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 12,
  [104] = 104,
  [105] = 12,
  [106] = 13,
  [107] = 107,
  [108] = 12,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 27,
  [116] = 116,
  [117] = 29,
  [118] = 13,
  [119] = 12,
  [120] = 120,
  [121] = 13,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 12,
  [127] = 13,
  [128] = 12,
  [129] = 13,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 13,
  [136] = 12,
  [137] = 137,
  [138] = 138,
  [139] = 13,
  [140] = 12,
  [141] = 141,
  [142] = 13,
  [143] = 12,
  [144] = 12,
  [145] = 13,
  [146] = 13,
  [147] = 147,
  [148] = 12,
  [149] = 149,
  [150] = 150,
  [151] = 13,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 13,
  [162] = 12,
  [163] = 163,
  [164] = 164,
  [165] = 12,
  [166] = 13,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 12,
  [173] = 13,
  [174] = 155,
  [175] = 175,
  [176] = 12,
  [177] = 13,
  [178] = 12,
  [179] = 13,
  [180] = 12,
  [181] = 153,
  [182] = 15,
  [183] = 183,
  [184] = 184,
  [185] = 16,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 12,
  [192] = 13,
  [193] = 15,
  [194] = 16,
  [195] = 195,
  [196] = 160,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 12,
  [203] = 203,
  [204] = 204,
  [205] = 153,
  [206] = 13,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 155,
  [214] = 214,
  [215] = 153,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 155,
  [221] = 221,
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
  [235] = 223,
  [236] = 214,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 211,
  [241] = 13,
  [242] = 12,
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
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 56,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 55,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 60,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 84,
  [282] = 73,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 76,
  [288] = 286,
  [289] = 12,
  [290] = 13,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 12,
  [299] = 13,
  [300] = 13,
  [301] = 301,
  [302] = 12,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 12,
  [307] = 13,
  [308] = 12,
  [309] = 309,
  [310] = 13,
  [311] = 311,
  [312] = 312,
  [313] = 12,
  [314] = 13,
  [315] = 12,
  [316] = 316,
  [317] = 13,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 13,
  [327] = 12,
  [328] = 13,
  [329] = 12,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 12,
  [334] = 13,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 12,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 13,
  [347] = 347,
  [348] = 344,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 323,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 337,
  [357] = 343,
  [358] = 345,
  [359] = 337,
  [360] = 12,
  [361] = 361,
  [362] = 343,
  [363] = 355,
  [364] = 13,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 337,
  [369] = 353,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 343,
  [374] = 344,
  [375] = 375,
  [376] = 345,
  [377] = 377,
  [378] = 323,
  [379] = 342,
  [380] = 380,
  [381] = 381,
  [382] = 13,
  [383] = 12,
  [384] = 13,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 389,
  [392] = 390,
  [393] = 389,
  [394] = 390,
  [395] = 389,
  [396] = 390,
  [397] = 389,
  [398] = 390,
  [399] = 389,
  [400] = 390,
  [401] = 389,
  [402] = 390,
  [403] = 403,
  [404] = 404,
  [405] = 389,
  [406] = 390,
  [407] = 389,
  [408] = 408,
  [409] = 390,
  [410] = 410,
  [411] = 389,
  [412] = 412,
  [413] = 389,
  [414] = 414,
  [415] = 415,
  [416] = 390,
  [417] = 389,
  [418] = 13,
  [419] = 419,
  [420] = 420,
  [421] = 390,
  [422] = 389,
  [423] = 390,
  [424] = 424,
  [425] = 425,
  [426] = 389,
  [427] = 390,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 389,
  [432] = 390,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 12,
  [438] = 13,
  [439] = 224,
  [440] = 440,
  [441] = 441,
  [442] = 428,
  [443] = 390,
  [444] = 12,
  [445] = 389,
  [446] = 390,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 451,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 10,
  [460] = 460,
  [461] = 461,
  [462] = 454,
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
  [479] = 479,
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
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 491,
  [495] = 489,
  [496] = 496,
  [497] = 488,
  [498] = 476,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 491,
  [503] = 489,
  [504] = 489,
  [505] = 489,
  [506] = 489,
  [507] = 489,
  [508] = 489,
  [509] = 489,
  [510] = 489,
  [511] = 489,
  [512] = 489,
  [513] = 489,
  [514] = 489,
  [515] = 515,
  [516] = 516,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(352);
      if (lookahead == '"') ADVANCE(463);
      if (lookahead == '#') ADVANCE(398);
      if (lookahead == '\'') ADVANCE(484);
      if (lookahead == '(') ADVANCE(381);
      if (lookahead == ')') ADVANCE(383);
      if (lookahead == '*') ADVANCE(461);
      if (lookahead == '-') ADVANCE(403);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(354);
      if (lookahead == '=') ADVANCE(355);
      if (lookahead == '?') ADVANCE(400);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead == 'C') ADVANCE(411);
      if (lookahead == 'D') ADVANCE(500);
      if (lookahead == 'E') ADVANCE(451);
      if (lookahead == 'I') ADVANCE(424);
      if (lookahead == 'L') ADVANCE(440);
      if (lookahead == 'M') ADVANCE(406);
      if (lookahead == 'N') ADVANCE(499);
      if (lookahead == 'P') ADVANCE(414);
      if (lookahead == 'R') ADVANCE(426);
      if (lookahead == 'S') ADVANCE(408);
      if (lookahead == 'T') ADVANCE(483);
      if (lookahead == 'U') ADVANCE(450);
      if (lookahead == 'V') ADVANCE(415);
      if (lookahead == 'X') ADVANCE(404);
      if (lookahead == '^') ADVANCE(458);
      if (lookahead == 'a') ADVANCE(436);
      if (lookahead == 'c') ADVANCE(442);
      if (lookahead == 'e') ADVANCE(452);
      if (lookahead == 'f') ADVANCE(419);
      if (lookahead == 'i') ADVANCE(435);
      if (lookahead == 'n') ADVANCE(416);
      if (lookahead == 'o') ADVANCE(422);
      if (lookahead == 's') ADVANCE(455);
      if (lookahead == 't') ADVANCE(449);
      if (lookahead == 'w') ADVANCE(431);
      if (lookahead == '|') ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(495);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(463);
      if (lookahead == '#') ADVANCE(398);
      if (lookahead == 'C') ADVANCE(410);
      if (lookahead == 'R') ADVANCE(430);
      if (lookahead == 'f') ADVANCE(418);
      if (lookahead == 't') ADVANCE(449);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(457);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(464);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(462);
      if (lookahead == '#') ADVANCE(398);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(462);
      if (lookahead == '\\') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(465);
      if (lookahead != 0) ADVANCE(466);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(462);
      if (lookahead == 'a') ADVANCE(436);
      if (lookahead == 'f') ADVANCE(448);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(462);
      if (lookahead == 'a') ADVANCE(436);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(462);
      if (lookahead == 'o') ADVANCE(447);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(462);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(465);
      if (lookahead != 0) ADVANCE(466);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(398);
      if (lookahead == '^') ADVANCE(458);
      if (lookahead == 'c') ADVANCE(444);
      if (lookahead == 'e') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(435);
      if (lookahead == 's') ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(398);
      if (lookahead == '^') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(437);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(398);
      if (lookahead == 'c') ADVANCE(444);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(437);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(398);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(485);
      END_STATE();
    case 18:
      if (lookahead == ')') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(447);
      if (lookahead == '|') ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 19:
      if (lookahead == ')') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(447);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(461);
      if (lookahead == '?') ADVANCE(400);
      if (lookahead == 'C') ADVANCE(410);
      if (lookahead == 'D') ADVANCE(500);
      if (lookahead == 'M') ADVANCE(405);
      if (lookahead == 'N') ADVANCE(499);
      if (lookahead == 'R') ADVANCE(430);
      if (lookahead == 'S') ADVANCE(407);
      if (lookahead == 'T') ADVANCE(409);
      if (lookahead == 'c') ADVANCE(445);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(403);
      if (lookahead == 'i') ADVANCE(437);
      if (lookahead == 's') ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'n') ADVANCE(416);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(460);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(307);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(355);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(389);
      END_STATE();
    case 28:
      if (lookahead == '?') ADVANCE(400);
      if (lookahead == 'C') ADVANCE(410);
      if (lookahead == 'D') ADVANCE(500);
      if (lookahead == 'M') ADVANCE(405);
      if (lookahead == 'N') ADVANCE(499);
      if (lookahead == 'R') ADVANCE(430);
      if (lookahead == 'S') ADVANCE(407);
      if (lookahead == 'T') ADVANCE(409);
      if (lookahead == 'c') ADVANCE(445);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 29:
      if (lookahead == '?') ADVANCE(400);
      if (lookahead == 'C') ADVANCE(410);
      if (lookahead == 'D') ADVANCE(500);
      if (lookahead == 'M') ADVANCE(405);
      if (lookahead == 'N') ADVANCE(499);
      if (lookahead == 'R') ADVANCE(430);
      if (lookahead == 'S') ADVANCE(407);
      if (lookahead == 'T') ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 30:
      if (lookahead == '?') ADVANCE(400);
      if (lookahead == 'D') ADVANCE(500);
      if (lookahead == 'M') ADVANCE(405);
      if (lookahead == 'N') ADVANCE(499);
      if (lookahead == 'S') ADVANCE(407);
      if (lookahead == 'T') ADVANCE(409);
      if (lookahead == 'a') ADVANCE(436);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 31:
      if (lookahead == 'C') ADVANCE(410);
      if (lookahead == 'R') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 32:
      if (lookahead == 'D') ADVANCE(428);
      if (lookahead == 'E') ADVANCE(453);
      if (lookahead == 'S') ADVANCE(427);
      if (lookahead == 'X') ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 33:
      if (lookahead == 'D') ADVANCE(428);
      if (lookahead == 'I') ADVANCE(423);
      if (lookahead == 'P') ADVANCE(413);
      if (lookahead == 'T') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 34:
      if (lookahead == 'P') ADVANCE(48);
      END_STATE();
    case 35:
      if (lookahead == 'R') ADVANCE(108);
      END_STATE();
    case 36:
      if (lookahead == 'S') ADVANCE(496);
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 37:
      if (lookahead == 'S') ADVANCE(291);
      END_STATE();
    case 38:
      if (lookahead == 'S') ADVANCE(121);
      END_STATE();
    case 39:
      if (lookahead == 'U') ADVANCE(497);
      END_STATE();
    case 40:
      if (lookahead == 'U') ADVANCE(498);
      END_STATE();
    case 41:
      if (lookahead == '^') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(437);
      if (lookahead == 'o') ADVANCE(420);
      if (lookahead == 's') ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
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
      if (lookahead == 'd') ADVANCE(368);
      if (lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(385);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(494);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(490);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(488);
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
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(491);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(487);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(359);
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
      if (lookahead == 'f') ADVANCE(369);
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
      if (lookahead == 'g') ADVANCE(363);
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
      if (lookahead == 'h') ADVANCE(376);
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
      if (lookahead == 'i') ADVANCE(437);
      if (lookahead == 's') ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(147)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
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
      if (lookahead == 'l') ADVANCE(364);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(492);
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
      if (lookahead == 'm') ADVANCE(380);
      END_STATE();
    case 174:
      if (lookahead == 'm') ADVANCE(394);
      END_STATE();
    case 175:
      if (lookahead == 'm') ADVANCE(362);
      END_STATE();
    case 176:
      if (lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(357);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(367);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(366);
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
      if (lookahead == 'r') ADVANCE(388);
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
      if (lookahead == 's') ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(234)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 235:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 236:
      if (lookahead == 's') ADVANCE(353);
      END_STATE();
    case 237:
      if (lookahead == 's') ADVANCE(392);
      END_STATE();
    case 238:
      if (lookahead == 's') ADVANCE(386);
      END_STATE();
    case 239:
      if (lookahead == 's') ADVANCE(384);
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
      if (lookahead == 't') ADVANCE(370);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(373);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(379);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(361);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(358);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(395);
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
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(469);
      if (lookahead != 0) ADVANCE(467);
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
      if (lookahead == 'y') ADVANCE(387);
      END_STATE();
    case 288:
      if (lookahead == 'y') ADVANCE(371);
      END_STATE();
    case 289:
      if (lookahead == 'y') ADVANCE(382);
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
      if (lookahead == '}') ADVANCE(467);
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
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 295:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      END_STATE();
    case 296:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      END_STATE();
    case 297:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(477);
      END_STATE();
    case 298:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 299:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      END_STATE();
    case 300:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(476);
      END_STATE();
    case 301:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      END_STATE();
    case 302:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      END_STATE();
    case 303:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(475);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      END_STATE();
    case 311:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(314);
      END_STATE();
    case 312:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(467);
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
      if (eof) ADVANCE(352);
      if (lookahead == '"') ADVANCE(463);
      if (lookahead == '#') ADVANCE(398);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(438);
      if (lookahead == 'L') ADVANCE(440);
      if (lookahead == 'M') ADVANCE(412);
      if (lookahead == 'P') ADVANCE(446);
      if (lookahead == 'R') ADVANCE(429);
      if (lookahead == 'V') ADVANCE(415);
      if (lookahead == '^') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(437);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(315)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 316:
      if (eof) ADVANCE(352);
      if (lookahead == '"') ADVANCE(463);
      if (lookahead == '#') ADVANCE(398);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(438);
      if (lookahead == 'L') ADVANCE(440);
      if (lookahead == 'M') ADVANCE(412);
      if (lookahead == 'P') ADVANCE(446);
      if (lookahead == 'R') ADVANCE(429);
      if (lookahead == 'V') ADVANCE(415);
      if (lookahead == 'i') ADVANCE(437);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(316)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 317:
      if (eof) ADVANCE(352);
      if (lookahead == '"') ADVANCE(463);
      if (lookahead == '(') ADVANCE(381);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == ':') ADVANCE(354);
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
          lookahead == ' ') SKIP(317)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      END_STATE();
    case 318:
      if (eof) ADVANCE(352);
      if (lookahead == '"') ADVANCE(463);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '=') ADVANCE(355);
      if (lookahead == '?') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(159);
      if (lookahead == 'C') ADVANCE(198);
      if (lookahead == 'D') ADVANCE(500);
      if (lookahead == 'E') ADVANCE(285);
      if (lookahead == 'I') ADVANCE(197);
      if (lookahead == 'L') ADVANCE(199);
      if (lookahead == 'M') ADVANCE(36);
      if (lookahead == 'N') ADVANCE(499);
      if (lookahead == 'P') ADVANCE(215);
      if (lookahead == 'R') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(39);
      if (lookahead == 'T') ADVANCE(40);
      if (lookahead == 'V') ADVANCE(44);
      if (lookahead == '^') ADVANCE(458);
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == 'c') ADVANCE(206);
      if (lookahead == 'f') ADVANCE(218);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(318)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(459);
      END_STATE();
    case 319:
      if (eof) ADVANCE(352);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead == '#') ADVANCE(398);
      if (lookahead == '(') ADVANCE(381);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == ':') ADVANCE(354);
      if (lookahead == '=') ADVANCE(355);
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
          lookahead == ' ') SKIP(319)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(459);
      END_STATE();
    case 320:
      if (eof) ADVANCE(352);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead == '#') ADVANCE(398);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(438);
      if (lookahead == 'L') ADVANCE(440);
      if (lookahead == 'M') ADVANCE(412);
      if (lookahead == 'P') ADVANCE(446);
      if (lookahead == 'R') ADVANCE(429);
      if (lookahead == 'V') ADVANCE(415);
      if (lookahead == 'a') ADVANCE(436);
      if (lookahead == 'f') ADVANCE(418);
      if (lookahead == 't') ADVANCE(449);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(320)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 321:
      if (eof) ADVANCE(352);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead == '#') ADVANCE(398);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(438);
      if (lookahead == 'L') ADVANCE(440);
      if (lookahead == 'M') ADVANCE(412);
      if (lookahead == 'P') ADVANCE(446);
      if (lookahead == 'R') ADVANCE(429);
      if (lookahead == 'V') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(321)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 322:
      if (eof) ADVANCE(352);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead == '(') ADVANCE(381);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == ':') ADVANCE(354);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(438);
      if (lookahead == 'L') ADVANCE(440);
      if (lookahead == 'M') ADVANCE(412);
      if (lookahead == 'P') ADVANCE(446);
      if (lookahead == 'R') ADVANCE(429);
      if (lookahead == 'V') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(322)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 323:
      if (eof) ADVANCE(352);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead == '(') ADVANCE(381);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(438);
      if (lookahead == 'L') ADVANCE(440);
      if (lookahead == 'M') ADVANCE(412);
      if (lookahead == 'P') ADVANCE(446);
      if (lookahead == 'R') ADVANCE(429);
      if (lookahead == 'V') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(323)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 324:
      if (eof) ADVANCE(352);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == ':') ADVANCE(354);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(438);
      if (lookahead == 'L') ADVANCE(440);
      if (lookahead == 'M') ADVANCE(412);
      if (lookahead == 'P') ADVANCE(446);
      if (lookahead == 'R') ADVANCE(429);
      if (lookahead == 'V') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(324)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 325:
      if (eof) ADVANCE(352);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(438);
      if (lookahead == 'L') ADVANCE(440);
      if (lookahead == 'M') ADVANCE(412);
      if (lookahead == 'P') ADVANCE(446);
      if (lookahead == 'R') ADVANCE(429);
      if (lookahead == 'V') ADVANCE(415);
      if (lookahead == 'a') ADVANCE(436);
      if (lookahead == 'f') ADVANCE(448);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(325)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 326:
      if (eof) ADVANCE(352);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(438);
      if (lookahead == 'L') ADVANCE(440);
      if (lookahead == 'M') ADVANCE(412);
      if (lookahead == 'P') ADVANCE(446);
      if (lookahead == 'R') ADVANCE(429);
      if (lookahead == 'V') ADVANCE(415);
      if (lookahead == 'a') ADVANCE(436);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(326)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 327:
      if (eof) ADVANCE(352);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(438);
      if (lookahead == 'L') ADVANCE(440);
      if (lookahead == 'M') ADVANCE(412);
      if (lookahead == 'P') ADVANCE(446);
      if (lookahead == 'R') ADVANCE(429);
      if (lookahead == 'V') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(327)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 328:
      if (eof) ADVANCE(352);
      if (lookahead == '#') ADVANCE(398);
      if (lookahead == '\'') ADVANCE(484);
      if (lookahead == '(') ADVANCE(381);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == ':') ADVANCE(354);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(438);
      if (lookahead == 'L') ADVANCE(440);
      if (lookahead == 'M') ADVANCE(412);
      if (lookahead == 'P') ADVANCE(446);
      if (lookahead == 'R') ADVANCE(429);
      if (lookahead == 'V') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(328)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 329:
      if (eof) ADVANCE(352);
      if (lookahead == '#') ADVANCE(398);
      if (lookahead == '\'') ADVANCE(484);
      if (lookahead == '(') ADVANCE(381);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(438);
      if (lookahead == 'L') ADVANCE(440);
      if (lookahead == 'M') ADVANCE(412);
      if (lookahead == 'P') ADVANCE(446);
      if (lookahead == 'R') ADVANCE(429);
      if (lookahead == 'V') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(329)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 330:
      if (eof) ADVANCE(352);
      if (lookahead == '#') ADVANCE(398);
      if (lookahead == '\'') ADVANCE(484);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == ':') ADVANCE(354);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(438);
      if (lookahead == 'L') ADVANCE(440);
      if (lookahead == 'M') ADVANCE(412);
      if (lookahead == 'P') ADVANCE(446);
      if (lookahead == 'R') ADVANCE(429);
      if (lookahead == 'V') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(330)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 331:
      if (eof) ADVANCE(352);
      if (lookahead == '#') ADVANCE(398);
      if (lookahead == '\'') ADVANCE(484);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(438);
      if (lookahead == 'L') ADVANCE(440);
      if (lookahead == 'M') ADVANCE(412);
      if (lookahead == 'P') ADVANCE(446);
      if (lookahead == 'R') ADVANCE(429);
      if (lookahead == 'V') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(331)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 332:
      if (eof) ADVANCE(352);
      if (lookahead == '#') ADVANCE(398);
      if (lookahead == '(') ADVANCE(381);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(438);
      if (lookahead == 'L') ADVANCE(440);
      if (lookahead == 'M') ADVANCE(412);
      if (lookahead == 'P') ADVANCE(446);
      if (lookahead == 'R') ADVANCE(429);
      if (lookahead == 'V') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(332)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 333:
      if (eof) ADVANCE(352);
      if (lookahead == '#') ADVANCE(398);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(438);
      if (lookahead == 'L') ADVANCE(440);
      if (lookahead == 'M') ADVANCE(412);
      if (lookahead == 'P') ADVANCE(446);
      if (lookahead == 'R') ADVANCE(429);
      if (lookahead == 'V') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(333)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 334:
      if (eof) ADVANCE(352);
      if (lookahead == '#') ADVANCE(398);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(438);
      if (lookahead == 'L') ADVANCE(440);
      if (lookahead == 'M') ADVANCE(412);
      if (lookahead == 'P') ADVANCE(446);
      if (lookahead == 'R') ADVANCE(429);
      if (lookahead == 'V') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(334)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 335:
      if (eof) ADVANCE(352);
      if (lookahead == '(') ADVANCE(381);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(438);
      if (lookahead == 'L') ADVANCE(440);
      if (lookahead == 'M') ADVANCE(412);
      if (lookahead == 'P') ADVANCE(446);
      if (lookahead == 'R') ADVANCE(429);
      if (lookahead == 'V') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(335)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 336:
      if (eof) ADVANCE(352);
      if (lookahead == '(') ADVANCE(381);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == 'A') ADVANCE(159);
      if (lookahead == 'C') ADVANCE(198);
      if (lookahead == 'E') ADVANCE(285);
      if (lookahead == 'I') ADVANCE(197);
      if (lookahead == 'L') ADVANCE(199);
      if (lookahead == 'M') ADVANCE(42);
      if (lookahead == 'P') ADVANCE(215);
      if (lookahead == 'R') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(482);
      if (lookahead == 'V') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(336)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 337:
      if (eof) ADVANCE(352);
      if (lookahead == '*') ADVANCE(461);
      if (lookahead == '?') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(159);
      if (lookahead == 'C') ADVANCE(198);
      if (lookahead == 'D') ADVANCE(500);
      if (lookahead == 'E') ADVANCE(285);
      if (lookahead == 'I') ADVANCE(197);
      if (lookahead == 'L') ADVANCE(199);
      if (lookahead == 'M') ADVANCE(36);
      if (lookahead == 'N') ADVANCE(499);
      if (lookahead == 'P') ADVANCE(215);
      if (lookahead == 'R') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(39);
      if (lookahead == 'T') ADVANCE(40);
      if (lookahead == 'V') ADVANCE(44);
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(337)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(459);
      END_STATE();
    case 338:
      if (eof) ADVANCE(352);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == '-') ADVANCE(403);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(438);
      if (lookahead == 'L') ADVANCE(440);
      if (lookahead == 'M') ADVANCE(412);
      if (lookahead == 'P') ADVANCE(446);
      if (lookahead == 'R') ADVANCE(429);
      if (lookahead == 'V') ADVANCE(415);
      if (lookahead == 'i') ADVANCE(437);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(338)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 339:
      if (eof) ADVANCE(352);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == '=') ADVANCE(355);
      if (lookahead == '?') ADVANCE(400);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == 'D') ADVANCE(500);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(438);
      if (lookahead == 'L') ADVANCE(440);
      if (lookahead == 'M') ADVANCE(406);
      if (lookahead == 'N') ADVANCE(499);
      if (lookahead == 'P') ADVANCE(446);
      if (lookahead == 'R') ADVANCE(429);
      if (lookahead == 'S') ADVANCE(407);
      if (lookahead == 'T') ADVANCE(409);
      if (lookahead == 'V') ADVANCE(415);
      if (lookahead == '^') ADVANCE(458);
      if (lookahead == 'a') ADVANCE(436);
      if (lookahead == 'c') ADVANCE(443);
      if (lookahead == 'f') ADVANCE(448);
      if (lookahead == 'i') ADVANCE(437);
      if (lookahead == 'o') ADVANCE(421);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(339)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 340:
      if (eof) ADVANCE(352);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == '=') ADVANCE(355);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(438);
      if (lookahead == 'L') ADVANCE(440);
      if (lookahead == 'M') ADVANCE(412);
      if (lookahead == 'P') ADVANCE(446);
      if (lookahead == 'R') ADVANCE(429);
      if (lookahead == 'V') ADVANCE(415);
      if (lookahead == 'i') ADVANCE(437);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(340)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 341:
      if (eof) ADVANCE(352);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == 'D') ADVANCE(428);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(434);
      if (lookahead == 'L') ADVANCE(440);
      if (lookahead == 'M') ADVANCE(412);
      if (lookahead == 'P') ADVANCE(446);
      if (lookahead == 'R') ADVANCE(429);
      if (lookahead == 'T') ADVANCE(432);
      if (lookahead == 'U') ADVANCE(450);
      if (lookahead == 'V') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(341)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 342:
      if (eof) ADVANCE(352);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == 'D') ADVANCE(428);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(425);
      if (lookahead == 'L') ADVANCE(440);
      if (lookahead == 'M') ADVANCE(412);
      if (lookahead == 'P') ADVANCE(414);
      if (lookahead == 'R') ADVANCE(429);
      if (lookahead == 'T') ADVANCE(432);
      if (lookahead == 'V') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(342)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 343:
      if (eof) ADVANCE(352);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == 'D') ADVANCE(428);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(425);
      if (lookahead == 'L') ADVANCE(440);
      if (lookahead == 'M') ADVANCE(412);
      if (lookahead == 'P') ADVANCE(446);
      if (lookahead == 'R') ADVANCE(429);
      if (lookahead == 'S') ADVANCE(441);
      if (lookahead == 'T') ADVANCE(417);
      if (lookahead == 'V') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(343)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 344:
      if (eof) ADVANCE(352);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == 'D') ADVANCE(428);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(425);
      if (lookahead == 'L') ADVANCE(440);
      if (lookahead == 'M') ADVANCE(412);
      if (lookahead == 'P') ADVANCE(446);
      if (lookahead == 'R') ADVANCE(429);
      if (lookahead == 'T') ADVANCE(432);
      if (lookahead == 'V') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(344)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 345:
      if (eof) ADVANCE(352);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(438);
      if (lookahead == 'L') ADVANCE(440);
      if (lookahead == 'M') ADVANCE(412);
      if (lookahead == 'P') ADVANCE(446);
      if (lookahead == 'R') ADVANCE(429);
      if (lookahead == 'V') ADVANCE(415);
      if (lookahead == 'a') ADVANCE(436);
      if (lookahead == 'w') ADVANCE(431);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(345)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 346:
      if (eof) ADVANCE(352);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(438);
      if (lookahead == 'L') ADVANCE(440);
      if (lookahead == 'M') ADVANCE(412);
      if (lookahead == 'P') ADVANCE(446);
      if (lookahead == 'R') ADVANCE(429);
      if (lookahead == 'V') ADVANCE(415);
      if (lookahead == 'a') ADVANCE(436);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(346)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 347:
      if (eof) ADVANCE(352);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(438);
      if (lookahead == 'L') ADVANCE(440);
      if (lookahead == 'M') ADVANCE(412);
      if (lookahead == 'P') ADVANCE(446);
      if (lookahead == 'R') ADVANCE(429);
      if (lookahead == 'V') ADVANCE(415);
      if (lookahead == 'o') ADVANCE(447);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(347)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 348:
      if (eof) ADVANCE(352);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(438);
      if (lookahead == 'L') ADVANCE(440);
      if (lookahead == 'M') ADVANCE(412);
      if (lookahead == 'P') ADVANCE(446);
      if (lookahead == 'R') ADVANCE(429);
      if (lookahead == 'V') ADVANCE(415);
      if (lookahead == 'w') ADVANCE(431);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(348)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 349:
      if (eof) ADVANCE(352);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(438);
      if (lookahead == 'L') ADVANCE(440);
      if (lookahead == 'M') ADVANCE(412);
      if (lookahead == 'P') ADVANCE(446);
      if (lookahead == 'R') ADVANCE(429);
      if (lookahead == 'V') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(349)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 350:
      if (eof) ADVANCE(352);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == 'D') ADVANCE(428);
      if (lookahead == 'E') ADVANCE(451);
      if (lookahead == 'I') ADVANCE(438);
      if (lookahead == 'L') ADVANCE(440);
      if (lookahead == 'M') ADVANCE(412);
      if (lookahead == 'P') ADVANCE(446);
      if (lookahead == 'R') ADVANCE(429);
      if (lookahead == 'S') ADVANCE(427);
      if (lookahead == 'V') ADVANCE(415);
      if (lookahead == 'X') ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(350)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 351:
      if (eof) ADVANCE(352);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(438);
      if (lookahead == 'L') ADVANCE(440);
      if (lookahead == 'M') ADVANCE(412);
      if (lookahead == 'P') ADVANCE(446);
      if (lookahead == 'R') ADVANCE(429);
      if (lookahead == 'V') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(351)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_Alias);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_Profile);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_Extension);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_Invariant);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_Instance);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_Instance);
      if (lookahead == 'O') ADVANCE(132);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_ValueSet);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_CodeSystem);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_Mapping);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_Logical);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_Resource);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_Description);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_Expression);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_Id);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_InstanceOf);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_Parent);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_Severity);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_Source);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_Target);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_Title);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_Usage);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_XPath);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_contentReference);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_insert);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_exactly);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_obeys);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_exclude);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_codes);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_valueset);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '!') ADVANCE(495);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(460);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(473);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '>') ADVANCE(389);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'P') ADVANCE(48);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'S') ADVANCE(496);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'S') ADVANCE(496);
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'U') ADVANCE(497);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'U') ADVANCE(497);
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'U') ADVANCE(498);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 'i') ADVANCE(262);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'b') ADVANCE(85);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'b') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'b') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead == 'r') ADVANCE(388);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(368);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(368);
      if (lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(368);
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'h') ADVANCE(125);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'i') ADVANCE(262);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(388);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(212);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(72);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(211);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(263);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'y') ADVANCE(243);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(459);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_cardinality_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(459);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(467);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(468);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '.') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(304);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(305);
      if (lookahead == 'Z') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(472);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '-') ADVANCE(309);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(304);
      if (lookahead == '.') ADVANCE(302);
      if (lookahead == 'Z') ADVANCE(477);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(304);
      if (lookahead == ':') ADVANCE(305);
      if (lookahead == 'Z') ADVANCE(477);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(304);
      if (lookahead == ':') ADVANCE(308);
      if (lookahead == 'Z') ADVANCE(477);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(304);
      if (lookahead == 'Z') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_T);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'U') ADVANCE(498);
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 'i') ADVANCE(262);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(485);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_example);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_preferred);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_extensible);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_Reference);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_Canonical);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_named);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_QMARK_BANG);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_MS);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_SU);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_TU);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 319},
  [3] = {.lex_state = 319},
  [4] = {.lex_state = 319},
  [5] = {.lex_state = 319},
  [6] = {.lex_state = 319},
  [7] = {.lex_state = 319},
  [8] = {.lex_state = 319},
  [9] = {.lex_state = 318},
  [10] = {.lex_state = 319},
  [11] = {.lex_state = 318},
  [12] = {.lex_state = 339},
  [13] = {.lex_state = 339},
  [14] = {.lex_state = 318},
  [15] = {.lex_state = 317},
  [16] = {.lex_state = 317},
  [17] = {.lex_state = 319},
  [18] = {.lex_state = 319},
  [19] = {.lex_state = 318},
  [20] = {.lex_state = 318},
  [21] = {.lex_state = 319},
  [22] = {.lex_state = 319},
  [23] = {.lex_state = 319},
  [24] = {.lex_state = 319},
  [25] = {.lex_state = 319},
  [26] = {.lex_state = 319},
  [27] = {.lex_state = 319},
  [28] = {.lex_state = 319},
  [29] = {.lex_state = 319},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 319},
  [35] = {.lex_state = 319},
  [36] = {.lex_state = 319},
  [37] = {.lex_state = 319},
  [38] = {.lex_state = 319},
  [39] = {.lex_state = 320},
  [40] = {.lex_state = 319},
  [41] = {.lex_state = 319},
  [42] = {.lex_state = 319},
  [43] = {.lex_state = 319},
  [44] = {.lex_state = 319},
  [45] = {.lex_state = 319},
  [46] = {.lex_state = 316},
  [47] = {.lex_state = 319},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 319},
  [50] = {.lex_state = 319},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 318},
  [53] = {.lex_state = 319},
  [54] = {.lex_state = 328},
  [55] = {.lex_state = 337},
  [56] = {.lex_state = 337},
  [57] = {.lex_state = 318},
  [58] = {.lex_state = 318},
  [59] = {.lex_state = 318},
  [60] = {.lex_state = 318},
  [61] = {.lex_state = 319},
  [62] = {.lex_state = 316},
  [63] = {.lex_state = 318},
  [64] = {.lex_state = 318},
  [65] = {.lex_state = 318},
  [66] = {.lex_state = 329},
  [67] = {.lex_state = 330},
  [68] = {.lex_state = 319},
  [69] = {.lex_state = 318},
  [70] = {.lex_state = 319},
  [71] = {.lex_state = 319},
  [72] = {.lex_state = 331},
  [73] = {.lex_state = 318},
  [74] = {.lex_state = 321},
  [75] = {.lex_state = 315},
  [76] = {.lex_state = 318},
  [77] = {.lex_state = 320},
  [78] = {.lex_state = 343},
  [79] = {.lex_state = 315},
  [80] = {.lex_state = 315},
  [81] = {.lex_state = 320},
  [82] = {.lex_state = 321},
  [83] = {.lex_state = 343},
  [84] = {.lex_state = 318},
  [85] = {.lex_state = 28},
  [86] = {.lex_state = 341},
  [87] = {.lex_state = 341},
  [88] = {.lex_state = 319},
  [89] = {.lex_state = 315},
  [90] = {.lex_state = 315},
  [91] = {.lex_state = 342},
  [92] = {.lex_state = 342},
  [93] = {.lex_state = 316},
  [94] = {.lex_state = 316},
  [95] = {.lex_state = 320},
  [96] = {.lex_state = 319},
  [97] = {.lex_state = 319},
  [98] = {.lex_state = 333},
  [99] = {.lex_state = 322},
  [100] = {.lex_state = 29},
  [101] = {.lex_state = 333},
  [102] = {.lex_state = 319},
  [103] = {.lex_state = 322},
  [104] = {.lex_state = 319},
  [105] = {.lex_state = 350},
  [106] = {.lex_state = 350},
  [107] = {.lex_state = 319},
  [108] = {.lex_state = 325},
  [109] = {.lex_state = 319},
  [110] = {.lex_state = 12},
  [111] = {.lex_state = 319},
  [112] = {.lex_state = 319},
  [113] = {.lex_state = 319},
  [114] = {.lex_state = 319},
  [115] = {.lex_state = 316},
  [116] = {.lex_state = 319},
  [117] = {.lex_state = 316},
  [118] = {.lex_state = 344},
  [119] = {.lex_state = 344},
  [120] = {.lex_state = 319},
  [121] = {.lex_state = 325},
  [122] = {.lex_state = 319},
  [123] = {.lex_state = 319},
  [124] = {.lex_state = 319},
  [125] = {.lex_state = 319},
  [126] = {.lex_state = 340},
  [127] = {.lex_state = 338},
  [128] = {.lex_state = 338},
  [129] = {.lex_state = 340},
  [130] = {.lex_state = 318},
  [131] = {.lex_state = 319},
  [132] = {.lex_state = 319},
  [133] = {.lex_state = 318},
  [134] = {.lex_state = 318},
  [135] = {.lex_state = 332},
  [136] = {.lex_state = 332},
  [137] = {.lex_state = 318},
  [138] = {.lex_state = 318},
  [139] = {.lex_state = 323},
  [140] = {.lex_state = 323},
  [141] = {.lex_state = 319},
  [142] = {.lex_state = 345},
  [143] = {.lex_state = 345},
  [144] = {.lex_state = 324},
  [145] = {.lex_state = 324},
  [146] = {.lex_state = 326},
  [147] = {.lex_state = 319},
  [148] = {.lex_state = 326},
  [149] = {.lex_state = 319},
  [150] = {.lex_state = 319},
  [151] = {.lex_state = 346},
  [152] = {.lex_state = 319},
  [153] = {.lex_state = 319},
  [154] = {.lex_state = 319},
  [155] = {.lex_state = 319},
  [156] = {.lex_state = 319},
  [157] = {.lex_state = 319},
  [158] = {.lex_state = 319},
  [159] = {.lex_state = 319},
  [160] = {.lex_state = 319},
  [161] = {.lex_state = 348},
  [162] = {.lex_state = 348},
  [163] = {.lex_state = 319},
  [164] = {.lex_state = 319},
  [165] = {.lex_state = 327},
  [166] = {.lex_state = 327},
  [167] = {.lex_state = 319},
  [168] = {.lex_state = 319},
  [169] = {.lex_state = 319},
  [170] = {.lex_state = 319},
  [171] = {.lex_state = 319},
  [172] = {.lex_state = 347},
  [173] = {.lex_state = 347},
  [174] = {.lex_state = 319},
  [175] = {.lex_state = 319},
  [176] = {.lex_state = 335},
  [177] = {.lex_state = 335},
  [178] = {.lex_state = 333},
  [179] = {.lex_state = 333},
  [180] = {.lex_state = 346},
  [181] = {.lex_state = 319},
  [182] = {.lex_state = 321},
  [183] = {.lex_state = 319},
  [184] = {.lex_state = 319},
  [185] = {.lex_state = 321},
  [186] = {.lex_state = 319},
  [187] = {.lex_state = 319},
  [188] = {.lex_state = 319},
  [189] = {.lex_state = 319},
  [190] = {.lex_state = 319},
  [191] = {.lex_state = 334},
  [192] = {.lex_state = 334},
  [193] = {.lex_state = 333},
  [194] = {.lex_state = 333},
  [195] = {.lex_state = 319},
  [196] = {.lex_state = 319},
  [197] = {.lex_state = 319},
  [198] = {.lex_state = 319},
  [199] = {.lex_state = 336},
  [200] = {.lex_state = 319},
  [201] = {.lex_state = 319},
  [202] = {.lex_state = 349},
  [203] = {.lex_state = 319},
  [204] = {.lex_state = 319},
  [205] = {.lex_state = 319},
  [206] = {.lex_state = 349},
  [207] = {.lex_state = 319},
  [208] = {.lex_state = 319},
  [209] = {.lex_state = 319},
  [210] = {.lex_state = 319},
  [211] = {.lex_state = 319},
  [212] = {.lex_state = 319},
  [213] = {.lex_state = 319},
  [214] = {.lex_state = 319},
  [215] = {.lex_state = 319},
  [216] = {.lex_state = 319},
  [217] = {.lex_state = 319},
  [218] = {.lex_state = 319},
  [219] = {.lex_state = 319},
  [220] = {.lex_state = 319},
  [221] = {.lex_state = 319},
  [222] = {.lex_state = 319},
  [223] = {.lex_state = 319},
  [224] = {.lex_state = 319},
  [225] = {.lex_state = 319},
  [226] = {.lex_state = 319},
  [227] = {.lex_state = 319},
  [228] = {.lex_state = 319},
  [229] = {.lex_state = 319},
  [230] = {.lex_state = 319},
  [231] = {.lex_state = 319},
  [232] = {.lex_state = 319},
  [233] = {.lex_state = 319},
  [234] = {.lex_state = 319},
  [235] = {.lex_state = 319},
  [236] = {.lex_state = 319},
  [237] = {.lex_state = 319},
  [238] = {.lex_state = 319},
  [239] = {.lex_state = 319},
  [240] = {.lex_state = 319},
  [241] = {.lex_state = 351},
  [242] = {.lex_state = 351},
  [243] = {.lex_state = 319},
  [244] = {.lex_state = 319},
  [245] = {.lex_state = 319},
  [246] = {.lex_state = 319},
  [247] = {.lex_state = 319},
  [248] = {.lex_state = 319},
  [249] = {.lex_state = 319},
  [250] = {.lex_state = 319},
  [251] = {.lex_state = 319},
  [252] = {.lex_state = 319},
  [253] = {.lex_state = 319},
  [254] = {.lex_state = 319},
  [255] = {.lex_state = 319},
  [256] = {.lex_state = 319},
  [257] = {.lex_state = 319},
  [258] = {.lex_state = 319},
  [259] = {.lex_state = 319},
  [260] = {.lex_state = 319},
  [261] = {.lex_state = 20},
  [262] = {.lex_state = 319},
  [263] = {.lex_state = 319},
  [264] = {.lex_state = 319},
  [265] = {.lex_state = 319},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 319},
  [268] = {.lex_state = 20},
  [269] = {.lex_state = 319},
  [270] = {.lex_state = 319},
  [271] = {.lex_state = 319},
  [272] = {.lex_state = 319},
  [273] = {.lex_state = 319},
  [274] = {.lex_state = 319},
  [275] = {.lex_state = 319},
  [276] = {.lex_state = 29},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 318},
  [279] = {.lex_state = 14},
  [280] = {.lex_state = 41},
  [281] = {.lex_state = 28},
  [282] = {.lex_state = 28},
  [283] = {.lex_state = 41},
  [284] = {.lex_state = 319},
  [285] = {.lex_state = 319},
  [286] = {.lex_state = 31},
  [287] = {.lex_state = 29},
  [288] = {.lex_state = 31},
  [289] = {.lex_state = 30},
  [290] = {.lex_state = 30},
  [291] = {.lex_state = 31},
  [292] = {.lex_state = 318},
  [293] = {.lex_state = 318},
  [294] = {.lex_state = 16},
  [295] = {.lex_state = 15},
  [296] = {.lex_state = 21},
  [297] = {.lex_state = 16},
  [298] = {.lex_state = 33},
  [299] = {.lex_state = 32},
  [300] = {.lex_state = 33},
  [301] = {.lex_state = 294},
  [302] = {.lex_state = 32},
  [303] = {.lex_state = 147},
  [304] = {.lex_state = 16},
  [305] = {.lex_state = 16},
  [306] = {.lex_state = 13},
  [307] = {.lex_state = 22},
  [308] = {.lex_state = 22},
  [309] = {.lex_state = 16},
  [310] = {.lex_state = 18},
  [311] = {.lex_state = 16},
  [312] = {.lex_state = 294},
  [313] = {.lex_state = 18},
  [314] = {.lex_state = 13},
  [315] = {.lex_state = 7},
  [316] = {.lex_state = 294},
  [317] = {.lex_state = 7},
  [318] = {.lex_state = 294},
  [319] = {.lex_state = 16},
  [320] = {.lex_state = 234},
  [321] = {.lex_state = 26},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 6},
  [324] = {.lex_state = 319},
  [325] = {.lex_state = 319},
  [326] = {.lex_state = 5},
  [327] = {.lex_state = 5},
  [328] = {.lex_state = 8},
  [329] = {.lex_state = 8},
  [330] = {.lex_state = 294},
  [331] = {.lex_state = 294},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 9},
  [334] = {.lex_state = 9},
  [335] = {.lex_state = 294},
  [336] = {.lex_state = 294},
  [337] = {.lex_state = 294},
  [338] = {.lex_state = 294},
  [339] = {.lex_state = 19},
  [340] = {.lex_state = 294},
  [341] = {.lex_state = 294},
  [342] = {.lex_state = 294},
  [343] = {.lex_state = 294},
  [344] = {.lex_state = 294},
  [345] = {.lex_state = 6},
  [346] = {.lex_state = 19},
  [347] = {.lex_state = 11},
  [348] = {.lex_state = 294},
  [349] = {.lex_state = 294},
  [350] = {.lex_state = 319},
  [351] = {.lex_state = 319},
  [352] = {.lex_state = 6},
  [353] = {.lex_state = 11},
  [354] = {.lex_state = 294},
  [355] = {.lex_state = 319},
  [356] = {.lex_state = 294},
  [357] = {.lex_state = 294},
  [358] = {.lex_state = 6},
  [359] = {.lex_state = 294},
  [360] = {.lex_state = 23},
  [361] = {.lex_state = 294},
  [362] = {.lex_state = 294},
  [363] = {.lex_state = 319},
  [364] = {.lex_state = 23},
  [365] = {.lex_state = 319},
  [366] = {.lex_state = 294},
  [367] = {.lex_state = 294},
  [368] = {.lex_state = 294},
  [369] = {.lex_state = 6},
  [370] = {.lex_state = 294},
  [371] = {.lex_state = 294},
  [372] = {.lex_state = 294},
  [373] = {.lex_state = 294},
  [374] = {.lex_state = 294},
  [375] = {.lex_state = 319},
  [376] = {.lex_state = 6},
  [377] = {.lex_state = 11},
  [378] = {.lex_state = 6},
  [379] = {.lex_state = 294},
  [380] = {.lex_state = 294},
  [381] = {.lex_state = 319},
  [382] = {.lex_state = 16},
  [383] = {.lex_state = 26},
  [384] = {.lex_state = 26},
  [385] = {.lex_state = 319},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 294},
  [388] = {.lex_state = 17},
  [389] = {.lex_state = 294},
  [390] = {.lex_state = 294},
  [391] = {.lex_state = 294},
  [392] = {.lex_state = 294},
  [393] = {.lex_state = 294},
  [394] = {.lex_state = 294},
  [395] = {.lex_state = 294},
  [396] = {.lex_state = 294},
  [397] = {.lex_state = 294},
  [398] = {.lex_state = 294},
  [399] = {.lex_state = 294},
  [400] = {.lex_state = 294},
  [401] = {.lex_state = 294},
  [402] = {.lex_state = 294},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 294},
  [406] = {.lex_state = 294},
  [407] = {.lex_state = 294},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 294},
  [410] = {.lex_state = 294},
  [411] = {.lex_state = 294},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 294},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 294},
  [416] = {.lex_state = 294},
  [417] = {.lex_state = 294},
  [418] = {.lex_state = 26},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 294},
  [422] = {.lex_state = 294},
  [423] = {.lex_state = 294},
  [424] = {.lex_state = 294},
  [425] = {.lex_state = 294},
  [426] = {.lex_state = 294},
  [427] = {.lex_state = 294},
  [428] = {.lex_state = 317},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 294},
  [431] = {.lex_state = 294},
  [432] = {.lex_state = 294},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 294},
  [435] = {.lex_state = 319},
  [436] = {.lex_state = 17},
  [437] = {.lex_state = 10},
  [438] = {.lex_state = 10},
  [439] = {.lex_state = 319},
  [440] = {.lex_state = 17},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 317},
  [443] = {.lex_state = 294},
  [444] = {.lex_state = 16},
  [445] = {.lex_state = 294},
  [446] = {.lex_state = 294},
  [447] = {.lex_state = 319},
  [448] = {.lex_state = 319},
  [449] = {.lex_state = 319},
  [450] = {.lex_state = 319},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 319},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 319},
  [455] = {.lex_state = 319},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 319},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 26},
  [460] = {.lex_state = 16},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 319},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 319},
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
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 336},
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
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
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
    [sym_doc] = STATE(479),
    [sym_alias] = STATE(51),
    [sym_profile] = STATE(51),
    [sym_extension] = STATE(51),
    [sym_invariant] = STATE(51),
    [sym_instance] = STATE(51),
    [sym_valueset] = STATE(51),
    [sym_codesystem] = STATE(51),
    [sym_mapping] = STATE(51),
    [sym_logical] = STATE(51),
    [sym_resource] = STATE(51),
    [aux_sym_doc_repeat1] = STATE(51),
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
    STATE(24), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(50), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(247), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(131), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(250), 10,
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
    STATE(2), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(28), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(247), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(131), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(250), 10,
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
    STATE(5), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(25), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(247), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(131), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(250), 10,
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
    STATE(23), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(50), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(247), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(131), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(250), 10,
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
    STATE(45), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(50), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(131), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(250), 10,
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
    STATE(8), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(41), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(131), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(250), 10,
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
    STATE(40), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(50), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(131), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(250), 10,
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
    STATE(85), 1,
      sym_cardinality,
    STATE(278), 1,
      aux_sym_flag_rule_repeat1,
    STATE(477), 1,
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
  [507] = 13,
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
    STATE(278), 1,
      aux_sym_flag_rule_repeat1,
    STATE(477), 1,
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
  [564] = 4,
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
  [603] = 4,
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
  [642] = 1,
    ACTIONS(92), 29,
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
  [674] = 2,
    ACTIONS(96), 2,
      anon_sym_Instance,
      anon_sym_DQUOTE,
    ACTIONS(94), 27,
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
  [708] = 2,
    ACTIONS(100), 2,
      anon_sym_Instance,
      anon_sym_DQUOTE,
    ACTIONS(98), 27,
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
  [742] = 11,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(104), 1,
      anon_sym_Id,
    ACTIONS(106), 1,
      anon_sym_Source,
    ACTIONS(108), 1,
      anon_sym_Target,
    ACTIONS(110), 1,
      anon_sym_STAR,
    STATE(18), 2,
      sym_mapping_metadata,
      aux_sym_mapping_repeat1,
    STATE(102), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(255), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    STATE(104), 5,
      sym_description,
      sym_id,
      sym_source,
      sym_target,
      sym_title,
    ACTIONS(102), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [794] = 11,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(104), 1,
      anon_sym_Id,
    ACTIONS(106), 1,
      anon_sym_Source,
    ACTIONS(108), 1,
      anon_sym_Target,
    ACTIONS(110), 1,
      anon_sym_STAR,
    STATE(43), 2,
      sym_mapping_metadata,
      aux_sym_mapping_repeat1,
    STATE(114), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(255), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    STATE(104), 5,
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
  [846] = 2,
    ACTIONS(75), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
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
    ACTIONS(114), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
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
  [912] = 5,
    ACTIONS(119), 1,
      anon_sym_STAR,
    STATE(21), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(247), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(250), 10,
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
    ACTIONS(117), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [950] = 11,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(124), 1,
      anon_sym_Instance,
    ACTIONS(126), 1,
      anon_sym_InstanceOf,
    ACTIONS(128), 1,
      anon_sym_Usage,
    ACTIONS(130), 1,
      anon_sym_STAR,
    STATE(49), 2,
      sym_instance_metadata,
      aux_sym_instance_repeat1,
    STATE(96), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(257), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    STATE(132), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(122), 10,
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
  [1000] = 5,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(21), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(247), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(250), 10,
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
    ACTIONS(132), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1038] = 5,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(21), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(247), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(250), 10,
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
    ACTIONS(134), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1076] = 5,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(21), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(247), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(250), 10,
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
  [1114] = 11,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(126), 1,
      anon_sym_InstanceOf,
    ACTIONS(128), 1,
      anon_sym_Usage,
    ACTIONS(130), 1,
      anon_sym_STAR,
    ACTIONS(138), 1,
      anon_sym_Instance,
    STATE(22), 2,
      sym_instance_metadata,
      aux_sym_instance_repeat1,
    STATE(113), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(257), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    STATE(132), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(136), 10,
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
  [1164] = 2,
    ACTIONS(142), 1,
      anon_sym_Instance,
    ACTIONS(140), 26,
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
  [1196] = 5,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(21), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(247), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(250), 10,
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
  [1234] = 2,
    ACTIONS(146), 1,
      anon_sym_Instance,
    ACTIONS(144), 26,
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
    STATE(116), 1,
      sym_code,
    STATE(159), 1,
      sym_reference,
    STATE(179), 1,
      aux_sym_sequence_repeat1,
    STATE(204), 1,
      sym_quantity,
    STATE(235), 1,
      sym_sequence,
    STATE(272), 1,
      sym_value,
    STATE(476), 1,
      sym_ratio_part,
    ACTIONS(148), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(237), 8,
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
    STATE(116), 1,
      sym_code,
    STATE(159), 1,
      sym_reference,
    STATE(179), 1,
      aux_sym_sequence_repeat1,
    STATE(204), 1,
      sym_quantity,
    STATE(235), 1,
      sym_sequence,
    STATE(267), 1,
      sym_value,
    STATE(476), 1,
      sym_ratio_part,
    ACTIONS(148), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(237), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [1392] = 18,
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
    STATE(116), 1,
      sym_code,
    STATE(159), 1,
      sym_reference,
    STATE(179), 1,
      aux_sym_sequence_repeat1,
    STATE(204), 1,
      sym_quantity,
    STATE(235), 1,
      sym_sequence,
    STATE(265), 1,
      sym_value,
    STATE(476), 1,
      sym_ratio_part,
    ACTIONS(148), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(237), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [1455] = 18,
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
    STATE(116), 1,
      sym_code,
    STATE(135), 1,
      aux_sym_sequence_repeat1,
    STATE(159), 1,
      sym_reference,
    STATE(204), 1,
      sym_quantity,
    STATE(223), 1,
      sym_sequence,
    STATE(227), 1,
      sym_value,
    STATE(498), 1,
      sym_ratio_part,
    ACTIONS(148), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(237), 8,
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
    STATE(71), 2,
      sym_vs_metadata,
      aux_sym_valueset_repeat1,
    STATE(122), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(184), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(264), 3,
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
    STATE(109), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(184), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(264), 3,
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
  [1606] = 9,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(176), 1,
      anon_sym_Id,
    ACTIONS(184), 1,
      anon_sym_STAR,
    STATE(37), 2,
      sym_cs_metadata,
      aux_sym_codesystem_repeat1,
    STATE(107), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(186), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(269), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
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
  [1650] = 9,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(176), 1,
      anon_sym_Id,
    ACTIONS(184), 1,
      anon_sym_STAR,
    STATE(70), 2,
      sym_cs_metadata,
      aux_sym_codesystem_repeat1,
    STATE(125), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(186), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(269), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
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
  [1694] = 4,
    ACTIONS(190), 1,
      anon_sym_STAR,
    STATE(38), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(250), 10,
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
  [1727] = 10,
    ACTIONS(197), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      aux_sym_sequence_token1,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    STATE(116), 1,
      sym_code,
    STATE(234), 1,
      sym_vs_filter_value,
    STATE(382), 1,
      aux_sym_sequence_repeat1,
    STATE(514), 1,
      sym_sequence,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(233), 2,
      sym_code_string,
      sym_string,
    ACTIONS(193), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [1772] = 4,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(38), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(250), 10,
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
  [1805] = 4,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(38), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(250), 10,
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
  [1838] = 2,
    ACTIONS(207), 1,
      anon_sym_Instance,
    ACTIONS(205), 23,
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
  [1867] = 8,
    ACTIONS(211), 1,
      anon_sym_Description,
    ACTIONS(214), 1,
      anon_sym_Id,
    ACTIONS(217), 1,
      anon_sym_Source,
    ACTIONS(220), 1,
      anon_sym_Target,
    ACTIONS(223), 1,
      anon_sym_Title,
    STATE(43), 2,
      sym_mapping_metadata,
      aux_sym_mapping_repeat1,
    STATE(104), 5,
      sym_description,
      sym_id,
      sym_source,
      sym_target,
      sym_title,
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
      anon_sym_STAR,
  [1908] = 2,
    ACTIONS(228), 1,
      anon_sym_Instance,
    ACTIONS(226), 23,
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
  [1937] = 4,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(38), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(250), 10,
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
  [1970] = 11,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_sequence_token1,
    ACTIONS(234), 1,
      anon_sym_insert,
    ACTIONS(236), 1,
      anon_sym_POUND,
    STATE(133), 1,
      sym_string,
    STATE(246), 1,
      sym_multiline_string,
    STATE(382), 1,
      aux_sym_sequence_repeat1,
    STATE(506), 1,
      sym_sequence,
    STATE(62), 2,
      sym_code,
      aux_sym_code_insert_rule_repeat1,
    ACTIONS(232), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2016] = 2,
    ACTIONS(240), 1,
      anon_sym_Instance,
    ACTIONS(238), 22,
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
  [2044] = 12,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
    ACTIONS(244), 1,
      anon_sym_Alias,
    ACTIONS(247), 1,
      anon_sym_Profile,
    ACTIONS(250), 1,
      anon_sym_Extension,
    ACTIONS(253), 1,
      anon_sym_Invariant,
    ACTIONS(256), 1,
      anon_sym_Instance,
    ACTIONS(259), 1,
      anon_sym_ValueSet,
    ACTIONS(262), 1,
      anon_sym_CodeSystem,
    ACTIONS(265), 1,
      anon_sym_Mapping,
    ACTIONS(268), 1,
      anon_sym_Logical,
    ACTIONS(271), 1,
      anon_sym_Resource,
    STATE(48), 11,
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
  [2091] = 8,
    ACTIONS(276), 1,
      anon_sym_Instance,
    ACTIONS(278), 1,
      anon_sym_Description,
    ACTIONS(281), 1,
      anon_sym_InstanceOf,
    ACTIONS(284), 1,
      anon_sym_Title,
    ACTIONS(287), 1,
      anon_sym_Usage,
    STATE(49), 2,
      sym_instance_metadata,
      aux_sym_instance_repeat1,
    STATE(132), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(274), 11,
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
  [2130] = 7,
    ACTIONS(292), 1,
      anon_sym_Description,
    ACTIONS(295), 1,
      anon_sym_Id,
    ACTIONS(298), 1,
      anon_sym_Parent,
    ACTIONS(301), 1,
      anon_sym_Title,
    STATE(50), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(131), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    ACTIONS(290), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2167] = 12,
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
    ACTIONS(304), 1,
      ts_builtin_sym_end,
    STATE(48), 11,
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
  [2214] = 3,
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
    ACTIONS(306), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2242] = 7,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(310), 1,
      anon_sym_Expression,
    ACTIONS(312), 1,
      anon_sym_Severity,
    ACTIONS(314), 1,
      anon_sym_XPath,
    STATE(61), 2,
      sym_invariant_metadata,
      aux_sym_invariant_repeat1,
    STATE(152), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
    ACTIONS(308), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [2278] = 8,
    ACTIONS(199), 1,
      aux_sym_sequence_token1,
    ACTIONS(318), 1,
      anon_sym_COLON,
    ACTIONS(320), 1,
      anon_sym_POUND,
    ACTIONS(322), 1,
      anon_sym_SQUOTE,
    STATE(382), 1,
      aux_sym_sequence_repeat1,
    STATE(511), 1,
      sym_sequence,
    STATE(147), 2,
      sym_code,
      sym_unit,
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
      anon_sym_LPAREN,
  [2316] = 3,
    ACTIONS(326), 1,
      anon_sym_STAR,
    ACTIONS(328), 2,
      aux_sym_cardinality_token1,
      anon_sym_STAR2,
    ACTIONS(324), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [2344] = 3,
    ACTIONS(332), 1,
      anon_sym_STAR,
    ACTIONS(334), 2,
      aux_sym_cardinality_token1,
      anon_sym_STAR2,
    ACTIONS(330), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [2372] = 3,
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
    ACTIONS(336), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2400] = 3,
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
  [2428] = 3,
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
  [2456] = 3,
    STATE(60), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(344), 6,
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
  [2484] = 7,
    ACTIONS(349), 1,
      anon_sym_Description,
    ACTIONS(352), 1,
      anon_sym_Expression,
    ACTIONS(355), 1,
      anon_sym_Severity,
    ACTIONS(358), 1,
      anon_sym_XPath,
    STATE(61), 2,
      sym_invariant_metadata,
      aux_sym_invariant_repeat1,
    STATE(152), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
    ACTIONS(347), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [2520] = 7,
    ACTIONS(363), 1,
      anon_sym_POUND,
    ACTIONS(366), 1,
      aux_sym_sequence_token1,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    STATE(382), 1,
      aux_sym_sequence_repeat1,
    STATE(506), 1,
      sym_sequence,
    STATE(62), 2,
      sym_code,
      aux_sym_code_insert_rule_repeat1,
    ACTIONS(361), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [2556] = 3,
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
    ACTIONS(371), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2583] = 3,
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
    ACTIONS(373), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2610] = 3,
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
    ACTIONS(375), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2637] = 7,
    ACTIONS(168), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      aux_sym_sequence_token1,
    ACTIONS(322), 1,
      anon_sym_SQUOTE,
    STATE(382), 1,
      aux_sym_sequence_repeat1,
    STATE(513), 1,
      sym_sequence,
    STATE(147), 2,
      sym_code,
      sym_unit,
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
      anon_sym_STAR,
      anon_sym_LPAREN,
  [2672] = 8,
    ACTIONS(199), 1,
      aux_sym_sequence_token1,
    ACTIONS(318), 1,
      anon_sym_COLON,
    ACTIONS(322), 1,
      anon_sym_SQUOTE,
    ACTIONS(377), 1,
      anon_sym_POUND,
    STATE(382), 1,
      aux_sym_sequence_repeat1,
    STATE(510), 1,
      sym_sequence,
    STATE(147), 2,
      sym_code,
      sym_unit,
    ACTIONS(316), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2709] = 2,
    ACTIONS(381), 1,
      anon_sym_Instance,
    ACTIONS(379), 19,
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
  [2734] = 3,
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
    ACTIONS(383), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2761] = 6,
    ACTIONS(387), 1,
      anon_sym_Description,
    ACTIONS(390), 1,
      anon_sym_Id,
    ACTIONS(393), 1,
      anon_sym_Title,
    STATE(70), 2,
      sym_cs_metadata,
      aux_sym_codesystem_repeat1,
    STATE(186), 3,
      sym_description,
      sym_id,
      sym_title,
    ACTIONS(385), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2794] = 6,
    ACTIONS(398), 1,
      anon_sym_Description,
    ACTIONS(401), 1,
      anon_sym_Id,
    ACTIONS(404), 1,
      anon_sym_Title,
    STATE(71), 2,
      sym_vs_metadata,
      aux_sym_valueset_repeat1,
    STATE(184), 3,
      sym_description,
      sym_id,
      sym_title,
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
      anon_sym_STAR,
  [2827] = 7,
    ACTIONS(150), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      aux_sym_sequence_token1,
    ACTIONS(322), 1,
      anon_sym_SQUOTE,
    STATE(382), 1,
      aux_sym_sequence_repeat1,
    STATE(512), 1,
      sym_sequence,
    STATE(147), 2,
      sym_code,
      sym_unit,
    ACTIONS(318), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2861] = 1,
    ACTIONS(407), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2883] = 8,
    ACTIONS(199), 1,
      aux_sym_sequence_token1,
    ACTIONS(411), 1,
      anon_sym_POUND,
    ACTIONS(413), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      sym_string,
    STATE(273), 1,
      sym_code,
    STATE(382), 1,
      aux_sym_sequence_repeat1,
    STATE(509), 1,
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
  [2919] = 4,
    ACTIONS(67), 1,
      anon_sym_CARET,
    STATE(466), 1,
      sym_caret_path,
    ACTIONS(417), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
    ACTIONS(415), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
      anon_sym_POUND,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [2947] = 1,
    ACTIONS(419), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2969] = 3,
    ACTIONS(421), 1,
      aux_sym_sequence_token1,
    STATE(81), 1,
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
  [2995] = 3,
    ACTIONS(424), 1,
      aux_sym_sequence_token1,
    STATE(78), 1,
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
  [3021] = 4,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(427), 1,
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
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_CARET,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [3049] = 4,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(430), 1,
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
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_CARET,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [3077] = 3,
    ACTIONS(433), 1,
      aux_sym_sequence_token1,
    STATE(81), 1,
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
  [3103] = 8,
    ACTIONS(199), 1,
      aux_sym_sequence_token1,
    ACTIONS(411), 1,
      anon_sym_POUND,
    ACTIONS(413), 1,
      anon_sym_DQUOTE,
    STATE(98), 1,
      sym_string,
    STATE(259), 1,
      sym_code,
    STATE(382), 1,
      aux_sym_sequence_repeat1,
    STATE(509), 1,
      sym_sequence,
    ACTIONS(436), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [3139] = 3,
    ACTIONS(438), 1,
      aux_sym_sequence_token1,
    STATE(78), 1,
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
  [3165] = 1,
    ACTIONS(330), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3187] = 11,
    ACTIONS(164), 1,
      anon_sym_Reference,
    ACTIONS(166), 1,
      anon_sym_Canonical,
    ACTIONS(440), 1,
      anon_sym_contentReference,
    ACTIONS(442), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(218), 1,
      sym_reference,
    STATE(334), 1,
      aux_sym_sequence_repeat1,
    STATE(375), 1,
      sym_target_type,
    STATE(100), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    STATE(217), 2,
      sym_name,
      sym_canonical,
    ACTIONS(444), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [3228] = 4,
    ACTIONS(90), 1,
      anon_sym_Instance,
    ACTIONS(446), 1,
      aux_sym_sequence_token1,
    STATE(87), 1,
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
  [3255] = 4,
    ACTIONS(84), 1,
      anon_sym_Instance,
    ACTIONS(448), 1,
      aux_sym_sequence_token1,
    STATE(87), 1,
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
  [3282] = 1,
    ACTIONS(451), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3303] = 2,
    ACTIONS(142), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
    ACTIONS(140), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
      anon_sym_POUND,
      anon_sym_CARET,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [3326] = 2,
    ACTIONS(146), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
    ACTIONS(144), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
      anon_sym_POUND,
      anon_sym_CARET,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [3349] = 3,
    ACTIONS(453), 1,
      aux_sym_sequence_token1,
    STATE(91), 1,
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
  [3374] = 3,
    ACTIONS(456), 1,
      aux_sym_sequence_token1,
    STATE(91), 1,
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
  [3399] = 4,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(458), 1,
      aux_sym_sequence_token1,
    STATE(93), 1,
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
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [3426] = 4,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(461), 1,
      aux_sym_sequence_token1,
    STATE(93), 1,
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
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [3453] = 2,
    ACTIONS(466), 1,
      aux_sym_sequence_token1,
    ACTIONS(464), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3476] = 4,
    ACTIONS(130), 1,
      anon_sym_STAR,
    STATE(112), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(257), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
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
  [3502] = 4,
    ACTIONS(472), 1,
      anon_sym_STAR,
    STATE(97), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(264), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
    ACTIONS(470), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3528] = 6,
    ACTIONS(199), 1,
      aux_sym_sequence_token1,
    ACTIONS(411), 1,
      anon_sym_POUND,
    STATE(273), 1,
      sym_code,
    STATE(382), 1,
      aux_sym_sequence_repeat1,
    STATE(509), 1,
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
  [3558] = 3,
    ACTIONS(475), 1,
      aux_sym_sequence_token1,
    STATE(103), 1,
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
  [3582] = 10,
    ACTIONS(164), 1,
      anon_sym_Reference,
    ACTIONS(166), 1,
      anon_sym_Canonical,
    ACTIONS(442), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(218), 1,
      sym_reference,
    STATE(324), 1,
      sym_target_type,
    STATE(334), 1,
      aux_sym_sequence_repeat1,
    STATE(217), 2,
      sym_name,
      sym_canonical,
    STATE(276), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(444), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [3620] = 6,
    ACTIONS(199), 1,
      aux_sym_sequence_token1,
    ACTIONS(411), 1,
      anon_sym_POUND,
    STATE(256), 1,
      sym_code,
    STATE(382), 1,
      aux_sym_sequence_repeat1,
    STATE(509), 1,
      sym_sequence,
    ACTIONS(477), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [3650] = 4,
    ACTIONS(110), 1,
      anon_sym_STAR,
    STATE(111), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(255), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
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
  [3676] = 3,
    ACTIONS(479), 1,
      aux_sym_sequence_token1,
    STATE(103), 1,
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
  [3700] = 1,
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
  [3720] = 3,
    ACTIONS(484), 1,
      aux_sym_sequence_token1,
    STATE(105), 1,
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
  [3744] = 3,
    ACTIONS(487), 1,
      aux_sym_sequence_token1,
    STATE(105), 1,
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
  [3768] = 4,
    ACTIONS(184), 1,
      anon_sym_STAR,
    STATE(123), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(269), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
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
  [3794] = 3,
    ACTIONS(489), 1,
      aux_sym_sequence_token1,
    STATE(108), 1,
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
  [3818] = 4,
    ACTIONS(178), 1,
      anon_sym_STAR,
    STATE(97), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(264), 3,
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
  [3844] = 15,
    ACTIONS(67), 1,
      anon_sym_CARET,
    ACTIONS(492), 1,
      anon_sym_insert,
    ACTIONS(496), 1,
      anon_sym_codes,
    ACTIONS(498), 1,
      anon_sym_system,
    ACTIONS(500), 1,
      anon_sym_POUND,
    ACTIONS(502), 1,
      aux_sym_sequence_token1,
    STATE(116), 1,
      sym_code,
    STATE(183), 1,
      sym_code_string,
    STATE(297), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(314), 1,
      aux_sym_sequence_repeat1,
    STATE(403), 1,
      sym_path,
    STATE(404), 1,
      sym_sequence,
    STATE(516), 1,
      sym_caret_path,
    ACTIONS(494), 2,
      anon_sym_include,
      anon_sym_exclude,
    STATE(263), 2,
      sym_vs_concept_component,
      sym_vs_filter_component,
  [3892] = 4,
    ACTIONS(506), 1,
      anon_sym_STAR,
    STATE(111), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(255), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    ACTIONS(504), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3918] = 4,
    ACTIONS(511), 1,
      anon_sym_STAR,
    STATE(112), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(257), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    ACTIONS(509), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3944] = 4,
    ACTIONS(130), 1,
      anon_sym_STAR,
    STATE(112), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(257), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    ACTIONS(122), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3970] = 4,
    ACTIONS(110), 1,
      anon_sym_STAR,
    STATE(111), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(255), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    ACTIONS(514), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3996] = 2,
    ACTIONS(142), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
    ACTIONS(140), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
      anon_sym_POUND,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [4018] = 3,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    STATE(175), 1,
      sym_string,
    ACTIONS(516), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4042] = 2,
    ACTIONS(146), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
    ACTIONS(144), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
      anon_sym_POUND,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [4064] = 3,
    ACTIONS(518), 1,
      aux_sym_sequence_token1,
    STATE(119), 1,
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
  [4088] = 3,
    ACTIONS(520), 1,
      aux_sym_sequence_token1,
    STATE(119), 1,
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
  [4112] = 1,
    ACTIONS(523), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [4132] = 3,
    ACTIONS(525), 1,
      aux_sym_sequence_token1,
    STATE(108), 1,
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
  [4156] = 4,
    ACTIONS(178), 1,
      anon_sym_STAR,
    STATE(97), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(264), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
    ACTIONS(527), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [4182] = 4,
    ACTIONS(531), 1,
      anon_sym_STAR,
    STATE(123), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(269), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
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
  [4208] = 1,
    ACTIONS(534), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [4228] = 4,
    ACTIONS(184), 1,
      anon_sym_STAR,
    STATE(123), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(269), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
    ACTIONS(536), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [4254] = 3,
    ACTIONS(538), 1,
      aux_sym_sequence_token1,
    STATE(126), 1,
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
  [4277] = 3,
    ACTIONS(541), 1,
      aux_sym_sequence_token1,
    STATE(128), 1,
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
  [4300] = 3,
    ACTIONS(543), 1,
      aux_sym_sequence_token1,
    STATE(128), 1,
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
  [4323] = 3,
    ACTIONS(546), 1,
      aux_sym_sequence_token1,
    STATE(126), 1,
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
  [4346] = 4,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(249), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(548), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [4371] = 1,
    ACTIONS(550), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [4390] = 2,
    ACTIONS(554), 1,
      anon_sym_Instance,
    ACTIONS(552), 15,
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
  [4411] = 4,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(258), 2,
      sym_string,
      sym_multiline_string,
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
  [4436] = 4,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(243), 2,
      sym_string,
      sym_multiline_string,
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
      anon_sym_STAR,
  [4461] = 3,
    ACTIONS(560), 1,
      aux_sym_sequence_token1,
    STATE(136), 1,
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
  [4484] = 3,
    ACTIONS(562), 1,
      aux_sym_sequence_token1,
    STATE(136), 1,
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
  [4507] = 4,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(275), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(565), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [4532] = 4,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(274), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(567), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [4557] = 3,
    ACTIONS(569), 1,
      aux_sym_sequence_token1,
    STATE(140), 1,
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
  [4580] = 3,
    ACTIONS(571), 1,
      aux_sym_sequence_token1,
    STATE(140), 1,
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
  [4603] = 1,
    ACTIONS(574), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [4622] = 3,
    ACTIONS(576), 1,
      aux_sym_sequence_token1,
    STATE(143), 1,
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
  [4645] = 3,
    ACTIONS(578), 1,
      aux_sym_sequence_token1,
    STATE(143), 1,
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
  [4668] = 3,
    ACTIONS(581), 1,
      aux_sym_sequence_token1,
    STATE(144), 1,
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
  [4691] = 3,
    ACTIONS(584), 1,
      aux_sym_sequence_token1,
    STATE(144), 1,
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
  [4714] = 3,
    ACTIONS(586), 1,
      aux_sym_sequence_token1,
    STATE(148), 1,
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
  [4737] = 3,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    STATE(190), 1,
      sym_string,
    ACTIONS(588), 14,
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
  [4760] = 3,
    ACTIONS(590), 1,
      aux_sym_sequence_token1,
    STATE(148), 1,
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
  [4783] = 2,
    ACTIONS(595), 1,
      anon_sym_Instance,
    ACTIONS(593), 15,
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
  [4804] = 2,
    ACTIONS(599), 1,
      anon_sym_Instance,
    ACTIONS(597), 15,
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
  [4825] = 3,
    ACTIONS(601), 1,
      aux_sym_sequence_token1,
    STATE(180), 1,
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
  [4847] = 1,
    ACTIONS(603), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [4865] = 2,
    STATE(155), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(605), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4885] = 1,
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
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [4903] = 2,
    STATE(160), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(609), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4923] = 1,
    ACTIONS(611), 15,
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
  [4941] = 1,
    ACTIONS(613), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4959] = 1,
    ACTIONS(615), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4977] = 3,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    STATE(239), 1,
      sym_string,
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
      anon_sym_LPAREN,
  [4999] = 3,
    ACTIONS(619), 1,
      anon_sym_and,
    STATE(160), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(617), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5021] = 3,
    ACTIONS(622), 1,
      aux_sym_sequence_token1,
    STATE(162), 1,
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
  [5043] = 3,
    ACTIONS(624), 1,
      aux_sym_sequence_token1,
    STATE(162), 1,
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
  [5065] = 1,
    ACTIONS(627), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5083] = 1,
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
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_or,
      anon_sym_DQUOTE,
  [5101] = 3,
    ACTIONS(631), 1,
      aux_sym_sequence_token1,
    STATE(165), 1,
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
  [5123] = 3,
    ACTIONS(634), 1,
      aux_sym_sequence_token1,
    STATE(165), 1,
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
  [5145] = 1,
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
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [5163] = 1,
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
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [5181] = 1,
    ACTIONS(640), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5199] = 1,
    ACTIONS(642), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5217] = 1,
    ACTIONS(644), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5235] = 3,
    ACTIONS(646), 1,
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
      anon_sym_or,
  [5257] = 3,
    ACTIONS(649), 1,
      aux_sym_sequence_token1,
    STATE(172), 1,
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
  [5279] = 3,
    ACTIONS(651), 1,
      anon_sym_and,
    STATE(160), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(609), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5301] = 1,
    ACTIONS(653), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5319] = 3,
    ACTIONS(655), 1,
      aux_sym_sequence_token1,
    STATE(176), 1,
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
  [5341] = 3,
    ACTIONS(658), 1,
      aux_sym_sequence_token1,
    STATE(176), 1,
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
  [5363] = 3,
    ACTIONS(660), 1,
      aux_sym_sequence_token1,
    STATE(178), 1,
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
  [5385] = 3,
    ACTIONS(663), 1,
      aux_sym_sequence_token1,
    STATE(178), 1,
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
  [5407] = 3,
    ACTIONS(665), 1,
      aux_sym_sequence_token1,
    STATE(180), 1,
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
  [5429] = 3,
    ACTIONS(651), 1,
      anon_sym_and,
    STATE(174), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(605), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5451] = 2,
    ACTIONS(96), 1,
      aux_sym_sequence_token1,
    ACTIONS(94), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5471] = 4,
    ACTIONS(670), 1,
      anon_sym_from,
    ACTIONS(672), 1,
      anon_sym_and,
    STATE(254), 1,
      sym_vs_component_from,
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
  [5495] = 1,
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
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Title,
      anon_sym_STAR,
  [5513] = 2,
    ACTIONS(100), 1,
      aux_sym_sequence_token1,
    ACTIONS(98), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5533] = 1,
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
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Title,
      anon_sym_STAR,
  [5551] = 3,
    ACTIONS(680), 1,
      anon_sym_and,
    STATE(196), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(678), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5572] = 3,
    ACTIONS(684), 1,
      anon_sym_and,
    STATE(197), 1,
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
  [5593] = 1,
    ACTIONS(617), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5610] = 1,
    ACTIONS(686), 14,
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
  [5627] = 3,
    ACTIONS(688), 1,
      aux_sym_sequence_token1,
    STATE(191), 1,
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
  [5648] = 3,
    ACTIONS(691), 1,
      aux_sym_sequence_token1,
    STATE(191), 1,
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
  [5669] = 2,
    ACTIONS(96), 1,
      aux_sym_sequence_token1,
    ACTIONS(94), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5688] = 2,
    ACTIONS(100), 1,
      aux_sym_sequence_token1,
    ACTIONS(98), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5707] = 3,
    ACTIONS(680), 1,
      anon_sym_and,
    STATE(196), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(693), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5728] = 3,
    ACTIONS(695), 1,
      anon_sym_and,
    STATE(196), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(617), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5749] = 3,
    ACTIONS(684), 1,
      anon_sym_and,
    STATE(210), 1,
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
  [5770] = 3,
    ACTIONS(680), 1,
      anon_sym_and,
    STATE(187), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(700), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5791] = 2,
    ACTIONS(704), 1,
      anon_sym_T,
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
      anon_sym_STAR,
      anon_sym_LPAREN,
  [5810] = 3,
    ACTIONS(708), 1,
      anon_sym_and,
    STATE(221), 1,
      aux_sym_vs_filter_list_repeat1,
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
  [5831] = 3,
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
  [5852] = 3,
    ACTIONS(712), 1,
      aux_sym_sequence_token1,
    STATE(202), 1,
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
  [5873] = 1,
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
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_where,
  [5890] = 2,
    ACTIONS(318), 1,
      anon_sym_COLON,
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
      anon_sym_LPAREN,
  [5909] = 2,
    STATE(213), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(605), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5928] = 3,
    ACTIONS(717), 1,
      aux_sym_sequence_token1,
    STATE(202), 1,
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
  [5949] = 3,
    ACTIONS(721), 1,
      anon_sym_or,
    STATE(224), 1,
      aux_sym_only_rule_repeat1,
    ACTIONS(719), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5970] = 3,
    ACTIONS(725), 1,
      anon_sym_and,
    STATE(208), 1,
      aux_sym_vs_filter_list_repeat1,
    ACTIONS(723), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5991] = 3,
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
  [6012] = 3,
    ACTIONS(730), 1,
      anon_sym_and,
    STATE(210), 1,
      aux_sym_contains_rule_repeat1,
    ACTIONS(728), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6033] = 2,
    ACTIONS(735), 1,
      anon_sym_and,
    ACTIONS(733), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6052] = 3,
    ACTIONS(739), 1,
      anon_sym_LPAREN,
    STATE(262), 1,
      sym_strength,
    ACTIONS(737), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6073] = 2,
    STATE(196), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(609), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6092] = 2,
    ACTIONS(741), 1,
      anon_sym_and,
    ACTIONS(733), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6111] = 3,
    ACTIONS(680), 1,
      anon_sym_and,
    STATE(220), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(605), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6132] = 3,
    ACTIONS(680), 1,
      anon_sym_and,
    STATE(195), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(678), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6153] = 1,
    ACTIONS(743), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6170] = 1,
    ACTIONS(745), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6187] = 3,
    ACTIONS(721), 1,
      anon_sym_or,
    STATE(207), 1,
      aux_sym_only_rule_repeat1,
    ACTIONS(747), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6208] = 3,
    ACTIONS(680), 1,
      anon_sym_and,
    STATE(196), 1,
      aux_sym_obeys_rule_repeat1,
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
      anon_sym_STAR,
  [6229] = 3,
    ACTIONS(708), 1,
      anon_sym_and,
    STATE(208), 1,
      aux_sym_vs_filter_list_repeat1,
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
  [6250] = 1,
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
      anon_sym_STAR,
      anon_sym_or,
      anon_sym_DQUOTE,
  [6267] = 2,
    ACTIONS(753), 1,
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
  [6286] = 3,
    ACTIONS(755), 1,
      anon_sym_or,
    STATE(224), 1,
      aux_sym_only_rule_repeat1,
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
  [6307] = 1,
    ACTIONS(758), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6323] = 2,
    ACTIONS(762), 1,
      anon_sym_where,
    ACTIONS(760), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6341] = 2,
    ACTIONS(766), 1,
      anon_sym_LPAREN,
    ACTIONS(764), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6359] = 1,
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
      anon_sym_STAR,
      anon_sym_and,
  [6375] = 1,
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
      anon_sym_and,
  [6391] = 1,
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
      anon_sym_STAR,
      anon_sym_LPAREN,
  [6407] = 1,
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
      anon_sym_STAR,
      anon_sym_LPAREN,
  [6423] = 1,
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
      anon_sym_STAR,
      anon_sym_LPAREN,
  [6439] = 1,
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
      anon_sym_STAR,
      anon_sym_and,
  [6455] = 1,
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
      anon_sym_STAR,
      anon_sym_and,
  [6471] = 2,
    ACTIONS(776), 1,
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
  [6489] = 2,
    ACTIONS(778), 1,
      anon_sym_and,
    ACTIONS(733), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6507] = 1,
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
      anon_sym_LPAREN,
  [6523] = 1,
    ACTIONS(780), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6539] = 1,
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
      anon_sym_STAR,
      anon_sym_LPAREN,
  [6555] = 2,
    ACTIONS(784), 1,
      anon_sym_and,
    ACTIONS(733), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6573] = 3,
    ACTIONS(786), 1,
      aux_sym_sequence_token1,
    STATE(242), 1,
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
  [6593] = 3,
    ACTIONS(788), 1,
      aux_sym_sequence_token1,
    STATE(242), 1,
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
  [6613] = 1,
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
  [6628] = 1,
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
  [6643] = 1,
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
  [6658] = 1,
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
  [6673] = 1,
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
  [6688] = 1,
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
  [6703] = 1,
    ACTIONS(565), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6718] = 1,
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
  [6733] = 1,
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
  [6748] = 1,
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
  [6763] = 1,
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
  [6778] = 1,
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
  [6793] = 1,
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
  [6808] = 1,
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
  [6823] = 1,
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
  [6838] = 1,
    ACTIONS(817), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6853] = 1,
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
  [6868] = 1,
    ACTIONS(819), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6883] = 4,
    ACTIONS(332), 1,
      aux_sym_sequence_token1,
    ACTIONS(821), 1,
      aux_sym_cardinality_token1,
    ACTIONS(823), 1,
      anon_sym_STAR2,
    ACTIONS(330), 9,
      anon_sym_contentReference,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [6904] = 1,
    ACTIONS(825), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6919] = 1,
    ACTIONS(827), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6934] = 1,
    ACTIONS(829), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6949] = 1,
    ACTIONS(831), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6964] = 2,
    ACTIONS(835), 1,
      anon_sym_POUND,
    ACTIONS(833), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [6981] = 1,
    ACTIONS(837), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6996] = 4,
    ACTIONS(326), 1,
      aux_sym_sequence_token1,
    ACTIONS(839), 1,
      aux_sym_cardinality_token1,
    ACTIONS(841), 1,
      anon_sym_STAR2,
    ACTIONS(324), 9,
      anon_sym_contentReference,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7017] = 1,
    ACTIONS(843), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [7032] = 1,
    ACTIONS(845), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [7047] = 1,
    ACTIONS(847), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [7062] = 1,
    ACTIONS(849), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [7077] = 1,
    ACTIONS(477), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [7092] = 1,
    ACTIONS(851), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [7107] = 1,
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
      anon_sym_STAR,
  [7122] = 4,
    ACTIONS(853), 1,
      aux_sym_sequence_token1,
    ACTIONS(342), 2,
      anon_sym_Reference,
      anon_sym_Canonical,
    STATE(276), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(855), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7142] = 1,
    ACTIONS(833), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [7156] = 4,
    ACTIONS(61), 1,
      anon_sym_and,
    STATE(292), 1,
      aux_sym_flag_rule_repeat1,
    STATE(65), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(73), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7175] = 9,
    ACTIONS(199), 1,
      aux_sym_sequence_token1,
    ACTIONS(496), 1,
      anon_sym_codes,
    ACTIONS(500), 1,
      anon_sym_POUND,
    STATE(116), 1,
      sym_code,
    STATE(183), 1,
      sym_code_string,
    STATE(297), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(382), 1,
      aux_sym_sequence_repeat1,
    STATE(504), 1,
      sym_sequence,
    STATE(271), 2,
      sym_vs_concept_component,
      sym_vs_filter_component,
  [7204] = 10,
    ACTIONS(67), 1,
      anon_sym_CARET,
    ACTIONS(492), 1,
      anon_sym_insert,
    ACTIONS(498), 1,
      anon_sym_system,
    ACTIONS(858), 1,
      anon_sym_obeys,
    ACTIONS(860), 1,
      aux_sym_sequence_token1,
    STATE(9), 1,
      sym_path,
    STATE(13), 1,
      aux_sym_sequence_repeat1,
    STATE(20), 1,
      sym_sequence,
    STATE(385), 1,
      sym_name,
    STATE(516), 1,
      sym_caret_path,
  [7235] = 2,
    ACTIONS(332), 1,
      aux_sym_sequence_token1,
    ACTIONS(330), 9,
      anon_sym_contentReference,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7250] = 2,
    ACTIONS(862), 1,
      aux_sym_sequence_token1,
    ACTIONS(407), 9,
      anon_sym_contentReference,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7265] = 10,
    ACTIONS(67), 1,
      anon_sym_CARET,
    ACTIONS(492), 1,
      anon_sym_insert,
    ACTIONS(498), 1,
      anon_sym_system,
    ACTIONS(858), 1,
      anon_sym_obeys,
    ACTIONS(860), 1,
      aux_sym_sequence_token1,
    STATE(11), 1,
      sym_path,
    STATE(13), 1,
      aux_sym_sequence_repeat1,
    STATE(19), 1,
      sym_sequence,
    STATE(385), 1,
      sym_name,
    STATE(516), 1,
      sym_caret_path,
  [7296] = 6,
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
    STATE(131), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
  [7319] = 6,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(310), 1,
      anon_sym_Expression,
    ACTIONS(312), 1,
      anon_sym_Severity,
    ACTIONS(314), 1,
      anon_sym_XPath,
    STATE(53), 2,
      sym_invariant_metadata,
      aux_sym_invariant_repeat1,
    STATE(152), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
  [7342] = 8,
    ACTIONS(164), 1,
      anon_sym_Reference,
    ACTIONS(166), 1,
      anon_sym_Canonical,
    ACTIONS(864), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(173), 1,
      aux_sym_sequence_repeat1,
    STATE(218), 1,
      sym_reference,
    STATE(222), 1,
      sym_target_type,
    STATE(217), 2,
      sym_name,
      sym_canonical,
  [7368] = 2,
    ACTIONS(866), 1,
      aux_sym_sequence_token1,
    ACTIONS(419), 8,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7382] = 8,
    ACTIONS(164), 1,
      anon_sym_Reference,
    ACTIONS(166), 1,
      anon_sym_Canonical,
    ACTIONS(442), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(218), 1,
      sym_reference,
    STATE(222), 1,
      sym_target_type,
    STATE(334), 1,
      aux_sym_sequence_repeat1,
    STATE(217), 2,
      sym_name,
      sym_canonical,
  [7408] = 3,
    ACTIONS(868), 1,
      aux_sym_sequence_token1,
    STATE(289), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 7,
      anon_sym_and,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7424] = 3,
    ACTIONS(871), 1,
      aux_sym_sequence_token1,
    STATE(289), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 7,
      anon_sym_and,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7440] = 8,
    ACTIONS(164), 1,
      anon_sym_Reference,
    ACTIONS(166), 1,
      anon_sym_Canonical,
    ACTIONS(864), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(173), 1,
      aux_sym_sequence_repeat1,
    STATE(218), 1,
      sym_reference,
    STATE(219), 1,
      sym_target_type,
    STATE(217), 2,
      sym_name,
      sym_canonical,
  [7466] = 3,
    ACTIONS(873), 1,
      anon_sym_and,
    STATE(292), 1,
      aux_sym_flag_rule_repeat1,
    ACTIONS(876), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7481] = 1,
    ACTIONS(876), 7,
      anon_sym_and,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7491] = 7,
    ACTIONS(878), 1,
      anon_sym_POUND,
    ACTIONS(881), 1,
      aux_sym_sequence_token1,
    STATE(116), 1,
      sym_code,
    STATE(294), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(382), 1,
      aux_sym_sequence_repeat1,
    STATE(508), 1,
      sym_sequence,
    STATE(515), 1,
      sym_code_string,
  [7513] = 7,
    ACTIONS(199), 1,
      aux_sym_sequence_token1,
    ACTIONS(884), 1,
      anon_sym_insert,
    ACTIONS(886), 1,
      anon_sym_POUND,
    STATE(46), 1,
      aux_sym_code_insert_rule_repeat1,
    STATE(75), 1,
      sym_code,
    STATE(382), 1,
      aux_sym_sequence_repeat1,
    STATE(489), 1,
      sym_sequence,
  [7535] = 7,
    ACTIONS(492), 1,
      anon_sym_insert,
    ACTIONS(498), 1,
      anon_sym_system,
    ACTIONS(888), 1,
      anon_sym_DASH_GT,
    ACTIONS(890), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(127), 1,
      aux_sym_sequence_repeat1,
    STATE(201), 1,
      sym_path,
  [7557] = 7,
    ACTIONS(199), 1,
      aux_sym_sequence_token1,
    ACTIONS(892), 1,
      anon_sym_POUND,
    STATE(116), 1,
      sym_code,
    STATE(294), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(382), 1,
      aux_sym_sequence_repeat1,
    STATE(386), 1,
      sym_code_string,
    STATE(505), 1,
      sym_sequence,
  [7579] = 3,
    ACTIONS(894), 1,
      aux_sym_sequence_token1,
    STATE(298), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 4,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
  [7592] = 3,
    ACTIONS(897), 1,
      aux_sym_sequence_token1,
    STATE(302), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 4,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [7605] = 3,
    ACTIONS(899), 1,
      aux_sym_sequence_token1,
    STATE(298), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 4,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
  [7618] = 6,
    ACTIONS(901), 1,
      aux_sym_sequence_token1,
    STATE(200), 1,
      sym_vs_filter_definition,
    STATE(270), 1,
      sym_vs_filter_list,
    STATE(321), 1,
      sym_name,
    STATE(418), 1,
      aux_sym_sequence_repeat1,
    STATE(459), 1,
      sym_sequence,
  [7637] = 3,
    ACTIONS(903), 1,
      aux_sym_sequence_token1,
    STATE(302), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 4,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [7650] = 6,
    ACTIONS(492), 1,
      anon_sym_insert,
    ACTIONS(498), 1,
      anon_sym_system,
    ACTIONS(906), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(129), 1,
      aux_sym_sequence_repeat1,
    STATE(209), 1,
      sym_path,
  [7669] = 5,
    ACTIONS(199), 1,
      aux_sym_sequence_token1,
    ACTIONS(908), 1,
      anon_sym_POUND,
    STATE(168), 1,
      sym_code,
    STATE(382), 1,
      aux_sym_sequence_repeat1,
    STATE(495), 1,
      sym_sequence,
  [7685] = 5,
    ACTIONS(910), 1,
      anon_sym_POUND,
    ACTIONS(912), 1,
      aux_sym_sequence_token1,
    STATE(326), 1,
      aux_sym_sequence_repeat1,
    STATE(435), 1,
      sym_sequence,
    STATE(450), 1,
      sym_code,
  [7701] = 3,
    ACTIONS(914), 1,
      aux_sym_sequence_token1,
    STATE(306), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 3,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_CARET,
  [7713] = 4,
    ACTIONS(90), 1,
      aux_sym_cardinality_token1,
    ACTIONS(917), 1,
      aux_sym_sequence_token1,
    STATE(308), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 2,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [7727] = 4,
    ACTIONS(84), 1,
      aux_sym_cardinality_token1,
    ACTIONS(919), 1,
      aux_sym_sequence_token1,
    STATE(308), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 2,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [7741] = 5,
    ACTIONS(199), 1,
      aux_sym_sequence_token1,
    ACTIONS(922), 1,
      anon_sym_POUND,
    STATE(124), 1,
      sym_code,
    STATE(382), 1,
      aux_sym_sequence_repeat1,
    STATE(507), 1,
      sym_sequence,
  [7757] = 3,
    ACTIONS(924), 1,
      aux_sym_sequence_token1,
    STATE(313), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE,
  [7769] = 5,
    ACTIONS(926), 1,
      anon_sym_POUND,
    ACTIONS(928), 1,
      aux_sym_sequence_token1,
    STATE(192), 1,
      aux_sym_sequence_repeat1,
    STATE(266), 1,
      sym_sequence,
    STATE(277), 1,
      sym_code,
  [7785] = 5,
    ACTIONS(930), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(229), 1,
      sym_item,
    STATE(307), 1,
      aux_sym_sequence_repeat1,
    STATE(351), 1,
      sym_name,
  [7801] = 3,
    ACTIONS(932), 1,
      aux_sym_sequence_token1,
    STATE(313), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE,
  [7813] = 3,
    ACTIONS(935), 1,
      aux_sym_sequence_token1,
    STATE(306), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 3,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_CARET,
  [7825] = 3,
    ACTIONS(937), 1,
      aux_sym_sequence_token1,
    STATE(315), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 3,
      anon_sym_from,
      anon_sym_and,
      anon_sym_DQUOTE,
  [7837] = 5,
    ACTIONS(901), 1,
      aux_sym_sequence_token1,
    STATE(228), 1,
      sym_vs_filter_definition,
    STATE(321), 1,
      sym_name,
    STATE(418), 1,
      aux_sym_sequence_repeat1,
    STATE(459), 1,
      sym_sequence,
  [7853] = 3,
    ACTIONS(940), 1,
      aux_sym_sequence_token1,
    STATE(315), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 3,
      anon_sym_from,
      anon_sym_and,
      anon_sym_DQUOTE,
  [7865] = 5,
    ACTIONS(930), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(188), 1,
      sym_item,
    STATE(307), 1,
      aux_sym_sequence_repeat1,
    STATE(351), 1,
      sym_name,
  [7881] = 5,
    ACTIONS(199), 1,
      aux_sym_sequence_token1,
    ACTIONS(942), 1,
      anon_sym_POUND,
    STATE(150), 1,
      sym_code,
    STATE(382), 1,
      aux_sym_sequence_repeat1,
    STATE(503), 1,
      sym_sequence,
  [7897] = 5,
    ACTIONS(498), 1,
      anon_sym_system,
    ACTIONS(944), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(290), 1,
      aux_sym_sequence_repeat1,
    STATE(293), 1,
      sym_path,
  [7913] = 5,
    ACTIONS(946), 1,
      anon_sym_EQ,
    ACTIONS(948), 1,
      aux_sym_sequence_token1,
    STATE(39), 1,
      sym_vs_filter_operator,
    STATE(77), 1,
      aux_sym_sequence_repeat1,
    STATE(95), 1,
      sym_sequence,
  [7929] = 4,
    ACTIONS(950), 1,
      anon_sym_RPAREN,
    ACTIONS(952), 1,
      anon_sym_or,
    ACTIONS(954), 1,
      anon_sym_PIPE,
    STATE(429), 1,
      aux_sym_canonical_repeat1,
  [7942] = 3,
    ACTIONS(956), 1,
      anon_sym_DQUOTE,
    STATE(369), 1,
      aux_sym_string_repeat1,
    ACTIONS(958), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7953] = 4,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    ACTIONS(960), 1,
      anon_sym_or,
    STATE(137), 1,
      sym_string,
    STATE(365), 1,
      aux_sym_only_rule_repeat1,
  [7966] = 4,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    ACTIONS(960), 1,
      anon_sym_or,
    STATE(137), 1,
      sym_string,
    STATE(439), 1,
      aux_sym_only_rule_repeat1,
  [7979] = 3,
    ACTIONS(962), 1,
      aux_sym_sequence_token1,
    STATE(327), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 2,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [7990] = 3,
    ACTIONS(964), 1,
      aux_sym_sequence_token1,
    STATE(327), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 2,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [8001] = 3,
    ACTIONS(967), 1,
      aux_sym_sequence_token1,
    STATE(329), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 2,
      anon_sym_and,
      anon_sym_DQUOTE,
  [8012] = 3,
    ACTIONS(969), 1,
      aux_sym_sequence_token1,
    STATE(329), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 2,
      anon_sym_and,
      anon_sym_DQUOTE,
  [8023] = 4,
    ACTIONS(972), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(284), 1,
      sym_name,
    STATE(300), 1,
      aux_sym_sequence_repeat1,
  [8036] = 4,
    ACTIONS(974), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(177), 1,
      aux_sym_sequence_repeat1,
    STATE(212), 1,
      sym_name,
  [8049] = 3,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(47), 2,
      sym_string,
      sym_multiline_string,
  [8060] = 3,
    ACTIONS(976), 1,
      aux_sym_sequence_token1,
    STATE(333), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 2,
      anon_sym_or,
      anon_sym_DQUOTE,
  [8071] = 3,
    ACTIONS(979), 1,
      aux_sym_sequence_token1,
    STATE(333), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 2,
      anon_sym_or,
      anon_sym_DQUOTE,
  [8082] = 4,
    ACTIONS(981), 1,
      aux_sym_sequence_token1,
    STATE(7), 1,
      sym_name,
    STATE(10), 1,
      sym_sequence,
    STATE(92), 1,
      aux_sym_sequence_repeat1,
  [8095] = 4,
    ACTIONS(983), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(285), 1,
      sym_name,
    STATE(299), 1,
      aux_sym_sequence_repeat1,
  [8108] = 4,
    ACTIONS(985), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(151), 1,
      aux_sym_sequence_repeat1,
    STATE(203), 1,
      sym_name,
  [8121] = 4,
    ACTIONS(987), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(26), 1,
      sym_name,
    STATE(86), 1,
      aux_sym_sequence_repeat1,
  [8134] = 3,
    ACTIONS(989), 1,
      aux_sym_sequence_token1,
    STATE(339), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [8145] = 4,
    ACTIONS(992), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(35), 1,
      sym_name,
    STATE(118), 1,
      aux_sym_sequence_repeat1,
  [8158] = 4,
    ACTIONS(985), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(151), 1,
      aux_sym_sequence_repeat1,
    STATE(216), 1,
      sym_name,
  [8171] = 4,
    ACTIONS(985), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(151), 1,
      aux_sym_sequence_repeat1,
    STATE(189), 1,
      sym_name,
  [8184] = 4,
    ACTIONS(985), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(151), 1,
      aux_sym_sequence_repeat1,
    STATE(205), 1,
      sym_name,
  [8197] = 4,
    ACTIONS(994), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(83), 1,
      aux_sym_sequence_repeat1,
    STATE(88), 1,
      sym_name,
  [8210] = 3,
    ACTIONS(996), 1,
      anon_sym_DQUOTE,
    STATE(323), 1,
      aux_sym_string_repeat1,
    ACTIONS(998), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [8221] = 3,
    ACTIONS(1000), 1,
      aux_sym_sequence_token1,
    STATE(339), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(86), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [8232] = 3,
    ACTIONS(1002), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(353), 1,
      aux_sym_string_repeat1,
    ACTIONS(1004), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [8243] = 4,
    ACTIONS(981), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(88), 1,
      sym_name,
    STATE(92), 1,
      aux_sym_sequence_repeat1,
  [8256] = 4,
    ACTIONS(1006), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(364), 1,
      aux_sym_sequence_repeat1,
    STATE(381), 1,
      sym_name,
  [8269] = 1,
    ACTIONS(1008), 4,
      anon_sym_example,
      anon_sym_preferred,
      anon_sym_extensible,
      anon_sym_required,
  [8276] = 4,
    ACTIONS(1010), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1012), 1,
      anon_sym_DOT_DOT,
    ACTIONS(1014), 1,
      anon_sym_named,
    STATE(57), 1,
      sym_cardinality,
  [8289] = 3,
    ACTIONS(1016), 1,
      anon_sym_DQUOTE,
    STATE(369), 1,
      aux_sym_string_repeat1,
    ACTIONS(958), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [8300] = 3,
    ACTIONS(1018), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(353), 1,
      aux_sym_string_repeat1,
    ACTIONS(1020), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [8311] = 4,
    ACTIONS(981), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(92), 1,
      aux_sym_sequence_repeat1,
    STATE(141), 1,
      sym_name,
  [8324] = 4,
    ACTIONS(1023), 1,
      anon_sym_system,
    ACTIONS(1025), 1,
      anon_sym_valueset,
    STATE(211), 1,
      sym_vs_from_valueset,
    STATE(214), 1,
      sym_vs_from_system,
  [8337] = 4,
    ACTIONS(1027), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(161), 1,
      aux_sym_sequence_repeat1,
    STATE(203), 1,
      sym_name,
  [8350] = 4,
    ACTIONS(1029), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(142), 1,
      aux_sym_sequence_repeat1,
    STATE(181), 1,
      sym_name,
  [8363] = 3,
    ACTIONS(1031), 1,
      anon_sym_DQUOTE,
    STATE(352), 1,
      aux_sym_string_repeat1,
    ACTIONS(1033), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [8374] = 4,
    ACTIONS(1035), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(203), 1,
      sym_name,
    STATE(206), 1,
      aux_sym_sequence_repeat1,
  [8387] = 4,
    ACTIONS(79), 1,
      anon_sym_DOT_DOT,
    ACTIONS(84), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1037), 1,
      aux_sym_sequence_token1,
    STATE(360), 1,
      aux_sym_sequence_repeat1,
  [8400] = 4,
    ACTIONS(987), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(86), 1,
      aux_sym_sequence_repeat1,
    STATE(149), 1,
      sym_name,
  [8413] = 4,
    ACTIONS(985), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(151), 1,
      aux_sym_sequence_repeat1,
    STATE(215), 1,
      sym_name,
  [8426] = 4,
    ACTIONS(1040), 1,
      anon_sym_system,
    ACTIONS(1042), 1,
      anon_sym_valueset,
    STATE(236), 1,
      sym_vs_from_system,
    STATE(240), 1,
      sym_vs_from_valueset,
  [8439] = 4,
    ACTIONS(86), 1,
      anon_sym_DOT_DOT,
    ACTIONS(90), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1044), 1,
      aux_sym_sequence_token1,
    STATE(360), 1,
      aux_sym_sequence_repeat1,
  [8452] = 4,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    ACTIONS(960), 1,
      anon_sym_or,
    STATE(134), 1,
      sym_string,
    STATE(439), 1,
      aux_sym_only_rule_repeat1,
  [8465] = 4,
    ACTIONS(992), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(36), 1,
      sym_name,
    STATE(118), 1,
      aux_sym_sequence_repeat1,
  [8478] = 4,
    ACTIONS(994), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(17), 1,
      sym_name,
    STATE(83), 1,
      aux_sym_sequence_repeat1,
  [8491] = 4,
    ACTIONS(1029), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(142), 1,
      aux_sym_sequence_repeat1,
    STATE(203), 1,
      sym_name,
  [8504] = 3,
    ACTIONS(1018), 1,
      anon_sym_DQUOTE,
    STATE(369), 1,
      aux_sym_string_repeat1,
    ACTIONS(1046), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [8515] = 4,
    ACTIONS(985), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(151), 1,
      aux_sym_sequence_repeat1,
    STATE(198), 1,
      sym_name,
  [8528] = 4,
    ACTIONS(981), 1,
      aux_sym_sequence_token1,
    STATE(4), 1,
      sym_name,
    STATE(10), 1,
      sym_sequence,
    STATE(92), 1,
      aux_sym_sequence_repeat1,
  [8541] = 4,
    ACTIONS(981), 1,
      aux_sym_sequence_token1,
    STATE(3), 1,
      sym_name,
    STATE(10), 1,
      sym_sequence,
    STATE(92), 1,
      aux_sym_sequence_repeat1,
  [8554] = 4,
    ACTIONS(1029), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(142), 1,
      aux_sym_sequence_repeat1,
    STATE(153), 1,
      sym_name,
  [8567] = 4,
    ACTIONS(992), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(88), 1,
      sym_name,
    STATE(118), 1,
      aux_sym_sequence_repeat1,
  [8580] = 4,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    ACTIONS(960), 1,
      anon_sym_or,
    STATE(130), 1,
      sym_string,
    STATE(325), 1,
      aux_sym_only_rule_repeat1,
  [8593] = 3,
    ACTIONS(1049), 1,
      anon_sym_DQUOTE,
    STATE(378), 1,
      aux_sym_string_repeat1,
    ACTIONS(1051), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [8604] = 3,
    ACTIONS(1053), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(347), 1,
      aux_sym_string_repeat1,
    ACTIONS(1055), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [8615] = 3,
    ACTIONS(1057), 1,
      anon_sym_DQUOTE,
    STATE(369), 1,
      aux_sym_string_repeat1,
    ACTIONS(958), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [8626] = 4,
    ACTIONS(1029), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(142), 1,
      aux_sym_sequence_repeat1,
    STATE(189), 1,
      sym_name,
  [8639] = 3,
    ACTIONS(1059), 1,
      aux_sym_sequence_token1,
    STATE(310), 1,
      aux_sym_sequence_repeat1,
    STATE(419), 1,
      sym_sequence,
  [8649] = 3,
    ACTIONS(1010), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1012), 1,
      anon_sym_DOT_DOT,
    STATE(52), 1,
      sym_cardinality,
  [8659] = 3,
    ACTIONS(86), 1,
      anon_sym_POUND,
    ACTIONS(1061), 1,
      aux_sym_sequence_token1,
    STATE(444), 1,
      aux_sym_sequence_repeat1,
  [8669] = 3,
    ACTIONS(79), 1,
      anon_sym_EQ,
    ACTIONS(1063), 1,
      aux_sym_sequence_token1,
    STATE(383), 1,
      aux_sym_sequence_repeat1,
  [8679] = 3,
    ACTIONS(86), 1,
      anon_sym_EQ,
    ACTIONS(1066), 1,
      aux_sym_sequence_token1,
    STATE(383), 1,
      aux_sym_sequence_repeat1,
  [8689] = 3,
    ACTIONS(1010), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1012), 1,
      anon_sym_DOT_DOT,
    STATE(64), 1,
      sym_cardinality,
  [8699] = 3,
    ACTIONS(670), 1,
      anon_sym_from,
    ACTIONS(672), 1,
      anon_sym_and,
    STATE(245), 1,
      sym_vs_component_from,
  [8709] = 3,
    ACTIONS(1068), 1,
      aux_sym_sequence_token1,
    STATE(384), 1,
      aux_sym_sequence_repeat1,
    STATE(493), 1,
      sym_sequence,
  [8719] = 3,
    ACTIONS(1070), 1,
      anon_sym_SQUOTE,
    ACTIONS(1072), 1,
      aux_sym_unit_token1,
    STATE(436), 1,
      aux_sym_unit_repeat1,
  [8729] = 3,
    ACTIONS(1074), 1,
      aux_sym_sequence_token1,
    STATE(29), 1,
      sym_sequence,
    STATE(146), 1,
      aux_sym_sequence_repeat1,
  [8739] = 3,
    ACTIONS(1074), 1,
      aux_sym_sequence_token1,
    STATE(27), 1,
      sym_sequence,
    STATE(146), 1,
      aux_sym_sequence_repeat1,
  [8749] = 3,
    ACTIONS(1076), 1,
      aux_sym_sequence_token1,
    STATE(29), 1,
      sym_sequence,
    STATE(438), 1,
      aux_sym_sequence_repeat1,
  [8759] = 3,
    ACTIONS(1076), 1,
      aux_sym_sequence_token1,
    STATE(27), 1,
      sym_sequence,
    STATE(438), 1,
      aux_sym_sequence_repeat1,
  [8769] = 3,
    ACTIONS(1078), 1,
      aux_sym_sequence_token1,
    STATE(29), 1,
      sym_sequence,
    STATE(99), 1,
      aux_sym_sequence_repeat1,
  [8779] = 3,
    ACTIONS(1078), 1,
      aux_sym_sequence_token1,
    STATE(27), 1,
      sym_sequence,
    STATE(99), 1,
      aux_sym_sequence_repeat1,
  [8789] = 3,
    ACTIONS(1080), 1,
      aux_sym_sequence_token1,
    STATE(29), 1,
      sym_sequence,
    STATE(145), 1,
      aux_sym_sequence_repeat1,
  [8799] = 3,
    ACTIONS(1080), 1,
      aux_sym_sequence_token1,
    STATE(27), 1,
      sym_sequence,
    STATE(145), 1,
      aux_sym_sequence_repeat1,
  [8809] = 3,
    ACTIONS(1035), 1,
      aux_sym_sequence_token1,
    STATE(29), 1,
      sym_sequence,
    STATE(206), 1,
      aux_sym_sequence_repeat1,
  [8819] = 3,
    ACTIONS(1035), 1,
      aux_sym_sequence_token1,
    STATE(27), 1,
      sym_sequence,
    STATE(206), 1,
      aux_sym_sequence_repeat1,
  [8829] = 3,
    ACTIONS(1082), 1,
      aux_sym_sequence_token1,
    STATE(29), 1,
      sym_sequence,
    STATE(328), 1,
      aux_sym_sequence_repeat1,
  [8839] = 3,
    ACTIONS(1082), 1,
      aux_sym_sequence_token1,
    STATE(27), 1,
      sym_sequence,
    STATE(328), 1,
      aux_sym_sequence_repeat1,
  [8849] = 3,
    ACTIONS(1084), 1,
      aux_sym_sequence_token1,
    STATE(29), 1,
      sym_sequence,
    STATE(139), 1,
      aux_sym_sequence_repeat1,
  [8859] = 3,
    ACTIONS(1084), 1,
      aux_sym_sequence_token1,
    STATE(27), 1,
      sym_sequence,
    STATE(139), 1,
      aux_sym_sequence_repeat1,
  [8869] = 3,
    ACTIONS(55), 1,
      anon_sym_insert,
    ACTIONS(67), 1,
      anon_sym_CARET,
    STATE(477), 1,
      sym_caret_path,
  [8879] = 2,
    ACTIONS(1086), 1,
      anon_sym_POUND,
    ACTIONS(92), 2,
      anon_sym_insert,
      anon_sym_CARET,
  [8887] = 3,
    ACTIONS(1088), 1,
      aux_sym_sequence_token1,
    STATE(29), 1,
      sym_sequence,
    STATE(166), 1,
      aux_sym_sequence_repeat1,
  [8897] = 3,
    ACTIONS(1088), 1,
      aux_sym_sequence_token1,
    STATE(27), 1,
      sym_sequence,
    STATE(166), 1,
      aux_sym_sequence_repeat1,
  [8907] = 3,
    ACTIONS(994), 1,
      aux_sym_sequence_token1,
    STATE(29), 1,
      sym_sequence,
    STATE(83), 1,
      aux_sym_sequence_repeat1,
  [8917] = 3,
    ACTIONS(952), 1,
      anon_sym_or,
    ACTIONS(1090), 1,
      anon_sym_RPAREN,
    STATE(412), 1,
      aux_sym_canonical_repeat1,
  [8927] = 3,
    ACTIONS(994), 1,
      aux_sym_sequence_token1,
    STATE(27), 1,
      sym_sequence,
    STATE(83), 1,
      aux_sym_sequence_repeat1,
  [8937] = 3,
    ACTIONS(1092), 1,
      aux_sym_sequence_token1,
    STATE(346), 1,
      aux_sym_sequence_repeat1,
    STATE(456), 1,
      sym_sequence,
  [8947] = 3,
    ACTIONS(1094), 1,
      aux_sym_sequence_token1,
    STATE(29), 1,
      sym_sequence,
    STATE(241), 1,
      aux_sym_sequence_repeat1,
  [8957] = 3,
    ACTIONS(1096), 1,
      anon_sym_RPAREN,
    ACTIONS(1098), 1,
      anon_sym_or,
    STATE(412), 1,
      aux_sym_canonical_repeat1,
  [8967] = 3,
    ACTIONS(1101), 1,
      aux_sym_sequence_token1,
    STATE(94), 1,
      aux_sym_sequence_repeat1,
    STATE(117), 1,
      sym_sequence,
  [8977] = 3,
    ACTIONS(952), 1,
      anon_sym_or,
    ACTIONS(1103), 1,
      anon_sym_RPAREN,
    STATE(408), 1,
      aux_sym_canonical_repeat1,
  [8987] = 3,
    ACTIONS(1068), 1,
      aux_sym_sequence_token1,
    STATE(384), 1,
      aux_sym_sequence_repeat1,
    STATE(464), 1,
      sym_sequence,
  [8997] = 3,
    ACTIONS(1101), 1,
      aux_sym_sequence_token1,
    STATE(94), 1,
      aux_sym_sequence_repeat1,
    STATE(115), 1,
      sym_sequence,
  [9007] = 3,
    ACTIONS(1105), 1,
      aux_sym_sequence_token1,
    STATE(29), 1,
      sym_sequence,
    STATE(317), 1,
      aux_sym_sequence_repeat1,
  [9017] = 3,
    ACTIONS(86), 1,
      anon_sym_EQ,
    ACTIONS(1107), 1,
      aux_sym_sequence_token1,
    STATE(383), 1,
      aux_sym_sequence_repeat1,
  [9027] = 2,
    ACTIONS(1110), 1,
      anon_sym_PIPE,
    ACTIONS(1096), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [9035] = 3,
    ACTIONS(1112), 1,
      anon_sym_RPAREN,
    ACTIONS(1114), 1,
      anon_sym_or,
    STATE(420), 1,
      aux_sym_reference_repeat1,
  [9045] = 3,
    ACTIONS(1105), 1,
      aux_sym_sequence_token1,
    STATE(27), 1,
      sym_sequence,
    STATE(317), 1,
      aux_sym_sequence_repeat1,
  [9055] = 3,
    ACTIONS(987), 1,
      aux_sym_sequence_token1,
    STATE(29), 1,
      sym_sequence,
    STATE(86), 1,
      aux_sym_sequence_repeat1,
  [9065] = 3,
    ACTIONS(987), 1,
      aux_sym_sequence_token1,
    STATE(27), 1,
      sym_sequence,
    STATE(86), 1,
      aux_sym_sequence_repeat1,
  [9075] = 3,
    ACTIONS(1092), 1,
      aux_sym_sequence_token1,
    STATE(346), 1,
      aux_sym_sequence_repeat1,
    STATE(441), 1,
      sym_sequence,
  [9085] = 3,
    ACTIONS(1059), 1,
      aux_sym_sequence_token1,
    STATE(310), 1,
      aux_sym_sequence_repeat1,
    STATE(322), 1,
      sym_sequence,
  [9095] = 3,
    ACTIONS(1117), 1,
      aux_sym_sequence_token1,
    STATE(29), 1,
      sym_sequence,
    STATE(106), 1,
      aux_sym_sequence_repeat1,
  [9105] = 3,
    ACTIONS(1117), 1,
      aux_sym_sequence_token1,
    STATE(27), 1,
      sym_sequence,
    STATE(106), 1,
      aux_sym_sequence_repeat1,
  [9115] = 3,
    ACTIONS(1119), 1,
      sym_number,
    STATE(230), 1,
      sym_ratio_part,
    STATE(231), 1,
      sym_quantity,
  [9125] = 3,
    ACTIONS(952), 1,
      anon_sym_or,
    ACTIONS(1121), 1,
      anon_sym_RPAREN,
    STATE(412), 1,
      aux_sym_canonical_repeat1,
  [9135] = 3,
    ACTIONS(1092), 1,
      aux_sym_sequence_token1,
    STATE(346), 1,
      aux_sym_sequence_repeat1,
    STATE(414), 1,
      sym_sequence,
  [9145] = 3,
    ACTIONS(1123), 1,
      aux_sym_sequence_token1,
    STATE(79), 1,
      aux_sym_sequence_repeat1,
    STATE(90), 1,
      sym_sequence,
  [9155] = 3,
    ACTIONS(1123), 1,
      aux_sym_sequence_token1,
    STATE(79), 1,
      aux_sym_sequence_repeat1,
    STATE(89), 1,
      sym_sequence,
  [9165] = 3,
    ACTIONS(1125), 1,
      anon_sym_RPAREN,
    ACTIONS(1127), 1,
      anon_sym_or,
    STATE(420), 1,
      aux_sym_reference_repeat1,
  [9175] = 3,
    ACTIONS(1092), 1,
      aux_sym_sequence_token1,
    STATE(346), 1,
      aux_sym_sequence_repeat1,
    STATE(461), 1,
      sym_sequence,
  [9185] = 3,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    ACTIONS(1129), 1,
      anon_sym_POUND,
    STATE(138), 1,
      sym_string,
  [9195] = 3,
    ACTIONS(1131), 1,
      anon_sym_SQUOTE,
    ACTIONS(1133), 1,
      aux_sym_unit_token1,
    STATE(440), 1,
      aux_sym_unit_repeat1,
  [9205] = 3,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(1135), 1,
      aux_sym_sequence_token1,
    STATE(437), 1,
      aux_sym_sequence_repeat1,
  [9215] = 3,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(1138), 1,
      aux_sym_sequence_token1,
    STATE(437), 1,
      aux_sym_sequence_repeat1,
  [9225] = 3,
    ACTIONS(751), 1,
      anon_sym_DQUOTE,
    ACTIONS(1140), 1,
      anon_sym_or,
    STATE(439), 1,
      aux_sym_only_rule_repeat1,
  [9235] = 3,
    ACTIONS(1143), 1,
      anon_sym_SQUOTE,
    ACTIONS(1145), 1,
      aux_sym_unit_token1,
    STATE(440), 1,
      aux_sym_unit_repeat1,
  [9245] = 3,
    ACTIONS(1127), 1,
      anon_sym_or,
    ACTIONS(1148), 1,
      anon_sym_RPAREN,
    STATE(433), 1,
      aux_sym_reference_repeat1,
  [9255] = 3,
    ACTIONS(1150), 1,
      sym_number,
    STATE(230), 1,
      sym_ratio_part,
    STATE(231), 1,
      sym_quantity,
  [9265] = 3,
    ACTIONS(1152), 1,
      aux_sym_sequence_token1,
    STATE(27), 1,
      sym_sequence,
    STATE(121), 1,
      aux_sym_sequence_repeat1,
  [9275] = 3,
    ACTIONS(79), 1,
      anon_sym_POUND,
    ACTIONS(1154), 1,
      aux_sym_sequence_token1,
    STATE(444), 1,
      aux_sym_sequence_repeat1,
  [9285] = 3,
    ACTIONS(1152), 1,
      aux_sym_sequence_token1,
    STATE(29), 1,
      sym_sequence,
    STATE(121), 1,
      aux_sym_sequence_repeat1,
  [9295] = 3,
    ACTIONS(1094), 1,
      aux_sym_sequence_token1,
    STATE(27), 1,
      sym_sequence,
    STATE(241), 1,
      aux_sym_sequence_repeat1,
  [9305] = 2,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    STATE(169), 1,
      sym_string,
  [9312] = 2,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    STATE(167), 1,
      sym_string,
  [9319] = 2,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    STATE(120), 1,
      sym_string,
  [9326] = 2,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    STATE(138), 1,
      sym_string,
  [9333] = 2,
    ACTIONS(1157), 1,
      anon_sym_system,
    STATE(225), 1,
      sym_vs_from_system,
  [9340] = 2,
    ACTIONS(1159), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      sym_string,
  [9347] = 2,
    ACTIONS(1161), 1,
      anon_sym_system,
    STATE(225), 1,
      sym_vs_from_system,
  [9354] = 2,
    ACTIONS(1163), 1,
      anon_sym_valueset,
    STATE(225), 1,
      sym_vs_from_valueset,
  [9361] = 2,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      sym_string,
  [9368] = 1,
    ACTIONS(1165), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [9373] = 2,
    ACTIONS(1159), 1,
      anon_sym_DQUOTE,
    STATE(82), 1,
      sym_string,
  [9380] = 2,
    ACTIONS(1167), 1,
      anon_sym_from,
    STATE(226), 1,
      sym_vs_component_from,
  [9387] = 2,
    ACTIONS(75), 1,
      anon_sym_EQ,
    ACTIONS(77), 1,
      aux_sym_sequence_token1,
  [9394] = 2,
    ACTIONS(1169), 1,
      anon_sym_POUND,
    ACTIONS(1171), 1,
      aux_sym_sequence_token1,
  [9401] = 1,
    ACTIONS(1112), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [9406] = 2,
    ACTIONS(1173), 1,
      anon_sym_valueset,
    STATE(225), 1,
      sym_vs_from_valueset,
  [9413] = 1,
    ACTIONS(1175), 1,
      anon_sym_COLON,
  [9417] = 1,
    ACTIONS(1177), 1,
      anon_sym_EQ,
  [9421] = 1,
    ACTIONS(1179), 1,
      anon_sym_COLON,
  [9425] = 1,
    ACTIONS(1181), 1,
      anon_sym_EQ,
  [9429] = 1,
    ACTIONS(1183), 1,
      anon_sym_COLON,
  [9433] = 1,
    ACTIONS(1185), 1,
      anon_sym_COLON,
  [9437] = 1,
    ACTIONS(1187), 1,
      anon_sym_COLON,
  [9441] = 1,
    ACTIONS(1189), 1,
      anon_sym_COLON,
  [9445] = 1,
    ACTIONS(1191), 1,
      anon_sym_exactly,
  [9449] = 1,
    ACTIONS(1193), 1,
      anon_sym_COLON,
  [9453] = 1,
    ACTIONS(1195), 1,
      anon_sym_COLON,
  [9457] = 1,
    ACTIONS(1197), 1,
      anon_sym_COLON,
  [9461] = 1,
    ACTIONS(1199), 1,
      anon_sym_COLON,
  [9465] = 1,
    ACTIONS(1201), 1,
      anon_sym_COLON,
  [9469] = 1,
    ACTIONS(1203), 1,
      anon_sym_EQ,
  [9473] = 1,
    ACTIONS(1205), 1,
      anon_sym_COLON,
  [9477] = 1,
    ACTIONS(1207), 1,
      ts_builtin_sym_end,
  [9481] = 1,
    ACTIONS(1209), 1,
      anon_sym_LPAREN,
  [9485] = 1,
    ACTIONS(1211), 1,
      anon_sym_LPAREN,
  [9489] = 1,
    ACTIONS(1213), 1,
      anon_sym_COLON,
  [9493] = 1,
    ACTIONS(1215), 1,
      anon_sym_COLON,
  [9497] = 1,
    ACTIONS(1217), 1,
      anon_sym_COLON,
  [9501] = 1,
    ACTIONS(1219), 1,
      anon_sym_COLON,
  [9505] = 1,
    ACTIONS(1221), 1,
      anon_sym_COLON,
  [9509] = 1,
    ACTIONS(1223), 1,
      anon_sym_COLON,
  [9513] = 1,
    ACTIONS(1225), 1,
      anon_sym_DOT_DOT,
  [9517] = 1,
    ACTIONS(1227), 1,
      anon_sym_POUND,
  [9521] = 1,
    ACTIONS(1229), 1,
      anon_sym_COLON,
  [9525] = 1,
    ACTIONS(1231), 1,
      anon_sym_COLON,
  [9529] = 1,
    ACTIONS(1233), 1,
      anon_sym_COLON,
  [9533] = 1,
    ACTIONS(1235), 1,
      anon_sym_EQ,
  [9537] = 1,
    ACTIONS(1237), 1,
      anon_sym_COLON,
  [9541] = 1,
    ACTIONS(1239), 1,
      anon_sym_POUND,
  [9545] = 1,
    ACTIONS(1241), 1,
      sym_time,
  [9549] = 1,
    ACTIONS(1243), 1,
      anon_sym_DOT_DOT,
  [9553] = 1,
    ACTIONS(1245), 1,
      anon_sym_COLON,
  [9557] = 1,
    ACTIONS(1247), 1,
      anon_sym_COLON,
  [9561] = 1,
    ACTIONS(1249), 1,
      anon_sym_RPAREN,
  [9565] = 1,
    ACTIONS(1251), 1,
      anon_sym_RPAREN,
  [9569] = 1,
    ACTIONS(1253), 1,
      anon_sym_COLON,
  [9573] = 1,
    ACTIONS(1255), 1,
      anon_sym_POUND,
  [9577] = 1,
    ACTIONS(1086), 1,
      anon_sym_POUND,
  [9581] = 1,
    ACTIONS(1257), 1,
      anon_sym_POUND,
  [9585] = 1,
    ACTIONS(1259), 1,
      anon_sym_POUND,
  [9589] = 1,
    ACTIONS(1261), 1,
      anon_sym_POUND,
  [9593] = 1,
    ACTIONS(1263), 1,
      anon_sym_POUND,
  [9597] = 1,
    ACTIONS(1265), 1,
      anon_sym_POUND,
  [9601] = 1,
    ACTIONS(1267), 1,
      anon_sym_POUND,
  [9605] = 1,
    ACTIONS(1269), 1,
      anon_sym_POUND,
  [9609] = 1,
    ACTIONS(776), 1,
      anon_sym_POUND,
  [9613] = 1,
    ACTIONS(753), 1,
      anon_sym_POUND,
  [9617] = 1,
    ACTIONS(1271), 1,
      anon_sym_POUND,
  [9621] = 1,
    ACTIONS(672), 1,
      anon_sym_and,
  [9625] = 1,
    ACTIONS(1273), 1,
      anon_sym_EQ,
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
  [SMALL_STATE(12)] = 564,
  [SMALL_STATE(13)] = 603,
  [SMALL_STATE(14)] = 642,
  [SMALL_STATE(15)] = 674,
  [SMALL_STATE(16)] = 708,
  [SMALL_STATE(17)] = 742,
  [SMALL_STATE(18)] = 794,
  [SMALL_STATE(19)] = 846,
  [SMALL_STATE(20)] = 879,
  [SMALL_STATE(21)] = 912,
  [SMALL_STATE(22)] = 950,
  [SMALL_STATE(23)] = 1000,
  [SMALL_STATE(24)] = 1038,
  [SMALL_STATE(25)] = 1076,
  [SMALL_STATE(26)] = 1114,
  [SMALL_STATE(27)] = 1164,
  [SMALL_STATE(28)] = 1196,
  [SMALL_STATE(29)] = 1234,
  [SMALL_STATE(30)] = 1266,
  [SMALL_STATE(31)] = 1329,
  [SMALL_STATE(32)] = 1392,
  [SMALL_STATE(33)] = 1455,
  [SMALL_STATE(34)] = 1518,
  [SMALL_STATE(35)] = 1562,
  [SMALL_STATE(36)] = 1606,
  [SMALL_STATE(37)] = 1650,
  [SMALL_STATE(38)] = 1694,
  [SMALL_STATE(39)] = 1727,
  [SMALL_STATE(40)] = 1772,
  [SMALL_STATE(41)] = 1805,
  [SMALL_STATE(42)] = 1838,
  [SMALL_STATE(43)] = 1867,
  [SMALL_STATE(44)] = 1908,
  [SMALL_STATE(45)] = 1937,
  [SMALL_STATE(46)] = 1970,
  [SMALL_STATE(47)] = 2016,
  [SMALL_STATE(48)] = 2044,
  [SMALL_STATE(49)] = 2091,
  [SMALL_STATE(50)] = 2130,
  [SMALL_STATE(51)] = 2167,
  [SMALL_STATE(52)] = 2214,
  [SMALL_STATE(53)] = 2242,
  [SMALL_STATE(54)] = 2278,
  [SMALL_STATE(55)] = 2316,
  [SMALL_STATE(56)] = 2344,
  [SMALL_STATE(57)] = 2372,
  [SMALL_STATE(58)] = 2400,
  [SMALL_STATE(59)] = 2428,
  [SMALL_STATE(60)] = 2456,
  [SMALL_STATE(61)] = 2484,
  [SMALL_STATE(62)] = 2520,
  [SMALL_STATE(63)] = 2556,
  [SMALL_STATE(64)] = 2583,
  [SMALL_STATE(65)] = 2610,
  [SMALL_STATE(66)] = 2637,
  [SMALL_STATE(67)] = 2672,
  [SMALL_STATE(68)] = 2709,
  [SMALL_STATE(69)] = 2734,
  [SMALL_STATE(70)] = 2761,
  [SMALL_STATE(71)] = 2794,
  [SMALL_STATE(72)] = 2827,
  [SMALL_STATE(73)] = 2861,
  [SMALL_STATE(74)] = 2883,
  [SMALL_STATE(75)] = 2919,
  [SMALL_STATE(76)] = 2947,
  [SMALL_STATE(77)] = 2969,
  [SMALL_STATE(78)] = 2995,
  [SMALL_STATE(79)] = 3021,
  [SMALL_STATE(80)] = 3049,
  [SMALL_STATE(81)] = 3077,
  [SMALL_STATE(82)] = 3103,
  [SMALL_STATE(83)] = 3139,
  [SMALL_STATE(84)] = 3165,
  [SMALL_STATE(85)] = 3187,
  [SMALL_STATE(86)] = 3228,
  [SMALL_STATE(87)] = 3255,
  [SMALL_STATE(88)] = 3282,
  [SMALL_STATE(89)] = 3303,
  [SMALL_STATE(90)] = 3326,
  [SMALL_STATE(91)] = 3349,
  [SMALL_STATE(92)] = 3374,
  [SMALL_STATE(93)] = 3399,
  [SMALL_STATE(94)] = 3426,
  [SMALL_STATE(95)] = 3453,
  [SMALL_STATE(96)] = 3476,
  [SMALL_STATE(97)] = 3502,
  [SMALL_STATE(98)] = 3528,
  [SMALL_STATE(99)] = 3558,
  [SMALL_STATE(100)] = 3582,
  [SMALL_STATE(101)] = 3620,
  [SMALL_STATE(102)] = 3650,
  [SMALL_STATE(103)] = 3676,
  [SMALL_STATE(104)] = 3700,
  [SMALL_STATE(105)] = 3720,
  [SMALL_STATE(106)] = 3744,
  [SMALL_STATE(107)] = 3768,
  [SMALL_STATE(108)] = 3794,
  [SMALL_STATE(109)] = 3818,
  [SMALL_STATE(110)] = 3844,
  [SMALL_STATE(111)] = 3892,
  [SMALL_STATE(112)] = 3918,
  [SMALL_STATE(113)] = 3944,
  [SMALL_STATE(114)] = 3970,
  [SMALL_STATE(115)] = 3996,
  [SMALL_STATE(116)] = 4018,
  [SMALL_STATE(117)] = 4042,
  [SMALL_STATE(118)] = 4064,
  [SMALL_STATE(119)] = 4088,
  [SMALL_STATE(120)] = 4112,
  [SMALL_STATE(121)] = 4132,
  [SMALL_STATE(122)] = 4156,
  [SMALL_STATE(123)] = 4182,
  [SMALL_STATE(124)] = 4208,
  [SMALL_STATE(125)] = 4228,
  [SMALL_STATE(126)] = 4254,
  [SMALL_STATE(127)] = 4277,
  [SMALL_STATE(128)] = 4300,
  [SMALL_STATE(129)] = 4323,
  [SMALL_STATE(130)] = 4346,
  [SMALL_STATE(131)] = 4371,
  [SMALL_STATE(132)] = 4390,
  [SMALL_STATE(133)] = 4411,
  [SMALL_STATE(134)] = 4436,
  [SMALL_STATE(135)] = 4461,
  [SMALL_STATE(136)] = 4484,
  [SMALL_STATE(137)] = 4507,
  [SMALL_STATE(138)] = 4532,
  [SMALL_STATE(139)] = 4557,
  [SMALL_STATE(140)] = 4580,
  [SMALL_STATE(141)] = 4603,
  [SMALL_STATE(142)] = 4622,
  [SMALL_STATE(143)] = 4645,
  [SMALL_STATE(144)] = 4668,
  [SMALL_STATE(145)] = 4691,
  [SMALL_STATE(146)] = 4714,
  [SMALL_STATE(147)] = 4737,
  [SMALL_STATE(148)] = 4760,
  [SMALL_STATE(149)] = 4783,
  [SMALL_STATE(150)] = 4804,
  [SMALL_STATE(151)] = 4825,
  [SMALL_STATE(152)] = 4847,
  [SMALL_STATE(153)] = 4865,
  [SMALL_STATE(154)] = 4885,
  [SMALL_STATE(155)] = 4903,
  [SMALL_STATE(156)] = 4923,
  [SMALL_STATE(157)] = 4941,
  [SMALL_STATE(158)] = 4959,
  [SMALL_STATE(159)] = 4977,
  [SMALL_STATE(160)] = 4999,
  [SMALL_STATE(161)] = 5021,
  [SMALL_STATE(162)] = 5043,
  [SMALL_STATE(163)] = 5065,
  [SMALL_STATE(164)] = 5083,
  [SMALL_STATE(165)] = 5101,
  [SMALL_STATE(166)] = 5123,
  [SMALL_STATE(167)] = 5145,
  [SMALL_STATE(168)] = 5163,
  [SMALL_STATE(169)] = 5181,
  [SMALL_STATE(170)] = 5199,
  [SMALL_STATE(171)] = 5217,
  [SMALL_STATE(172)] = 5235,
  [SMALL_STATE(173)] = 5257,
  [SMALL_STATE(174)] = 5279,
  [SMALL_STATE(175)] = 5301,
  [SMALL_STATE(176)] = 5319,
  [SMALL_STATE(177)] = 5341,
  [SMALL_STATE(178)] = 5363,
  [SMALL_STATE(179)] = 5385,
  [SMALL_STATE(180)] = 5407,
  [SMALL_STATE(181)] = 5429,
  [SMALL_STATE(182)] = 5451,
  [SMALL_STATE(183)] = 5471,
  [SMALL_STATE(184)] = 5495,
  [SMALL_STATE(185)] = 5513,
  [SMALL_STATE(186)] = 5533,
  [SMALL_STATE(187)] = 5551,
  [SMALL_STATE(188)] = 5572,
  [SMALL_STATE(189)] = 5593,
  [SMALL_STATE(190)] = 5610,
  [SMALL_STATE(191)] = 5627,
  [SMALL_STATE(192)] = 5648,
  [SMALL_STATE(193)] = 5669,
  [SMALL_STATE(194)] = 5688,
  [SMALL_STATE(195)] = 5707,
  [SMALL_STATE(196)] = 5728,
  [SMALL_STATE(197)] = 5749,
  [SMALL_STATE(198)] = 5770,
  [SMALL_STATE(199)] = 5791,
  [SMALL_STATE(200)] = 5810,
  [SMALL_STATE(201)] = 5831,
  [SMALL_STATE(202)] = 5852,
  [SMALL_STATE(203)] = 5873,
  [SMALL_STATE(204)] = 5890,
  [SMALL_STATE(205)] = 5909,
  [SMALL_STATE(206)] = 5928,
  [SMALL_STATE(207)] = 5949,
  [SMALL_STATE(208)] = 5970,
  [SMALL_STATE(209)] = 5991,
  [SMALL_STATE(210)] = 6012,
  [SMALL_STATE(211)] = 6033,
  [SMALL_STATE(212)] = 6052,
  [SMALL_STATE(213)] = 6073,
  [SMALL_STATE(214)] = 6092,
  [SMALL_STATE(215)] = 6111,
  [SMALL_STATE(216)] = 6132,
  [SMALL_STATE(217)] = 6153,
  [SMALL_STATE(218)] = 6170,
  [SMALL_STATE(219)] = 6187,
  [SMALL_STATE(220)] = 6208,
  [SMALL_STATE(221)] = 6229,
  [SMALL_STATE(222)] = 6250,
  [SMALL_STATE(223)] = 6267,
  [SMALL_STATE(224)] = 6286,
  [SMALL_STATE(225)] = 6307,
  [SMALL_STATE(226)] = 6323,
  [SMALL_STATE(227)] = 6341,
  [SMALL_STATE(228)] = 6359,
  [SMALL_STATE(229)] = 6375,
  [SMALL_STATE(230)] = 6391,
  [SMALL_STATE(231)] = 6407,
  [SMALL_STATE(232)] = 6423,
  [SMALL_STATE(233)] = 6439,
  [SMALL_STATE(234)] = 6455,
  [SMALL_STATE(235)] = 6471,
  [SMALL_STATE(236)] = 6489,
  [SMALL_STATE(237)] = 6507,
  [SMALL_STATE(238)] = 6523,
  [SMALL_STATE(239)] = 6539,
  [SMALL_STATE(240)] = 6555,
  [SMALL_STATE(241)] = 6573,
  [SMALL_STATE(242)] = 6593,
  [SMALL_STATE(243)] = 6613,
  [SMALL_STATE(244)] = 6628,
  [SMALL_STATE(245)] = 6643,
  [SMALL_STATE(246)] = 6658,
  [SMALL_STATE(247)] = 6673,
  [SMALL_STATE(248)] = 6688,
  [SMALL_STATE(249)] = 6703,
  [SMALL_STATE(250)] = 6718,
  [SMALL_STATE(251)] = 6733,
  [SMALL_STATE(252)] = 6748,
  [SMALL_STATE(253)] = 6763,
  [SMALL_STATE(254)] = 6778,
  [SMALL_STATE(255)] = 6793,
  [SMALL_STATE(256)] = 6808,
  [SMALL_STATE(257)] = 6823,
  [SMALL_STATE(258)] = 6838,
  [SMALL_STATE(259)] = 6853,
  [SMALL_STATE(260)] = 6868,
  [SMALL_STATE(261)] = 6883,
  [SMALL_STATE(262)] = 6904,
  [SMALL_STATE(263)] = 6919,
  [SMALL_STATE(264)] = 6934,
  [SMALL_STATE(265)] = 6949,
  [SMALL_STATE(266)] = 6964,
  [SMALL_STATE(267)] = 6981,
  [SMALL_STATE(268)] = 6996,
  [SMALL_STATE(269)] = 7017,
  [SMALL_STATE(270)] = 7032,
  [SMALL_STATE(271)] = 7047,
  [SMALL_STATE(272)] = 7062,
  [SMALL_STATE(273)] = 7077,
  [SMALL_STATE(274)] = 7092,
  [SMALL_STATE(275)] = 7107,
  [SMALL_STATE(276)] = 7122,
  [SMALL_STATE(277)] = 7142,
  [SMALL_STATE(278)] = 7156,
  [SMALL_STATE(279)] = 7175,
  [SMALL_STATE(280)] = 7204,
  [SMALL_STATE(281)] = 7235,
  [SMALL_STATE(282)] = 7250,
  [SMALL_STATE(283)] = 7265,
  [SMALL_STATE(284)] = 7296,
  [SMALL_STATE(285)] = 7319,
  [SMALL_STATE(286)] = 7342,
  [SMALL_STATE(287)] = 7368,
  [SMALL_STATE(288)] = 7382,
  [SMALL_STATE(289)] = 7408,
  [SMALL_STATE(290)] = 7424,
  [SMALL_STATE(291)] = 7440,
  [SMALL_STATE(292)] = 7466,
  [SMALL_STATE(293)] = 7481,
  [SMALL_STATE(294)] = 7491,
  [SMALL_STATE(295)] = 7513,
  [SMALL_STATE(296)] = 7535,
  [SMALL_STATE(297)] = 7557,
  [SMALL_STATE(298)] = 7579,
  [SMALL_STATE(299)] = 7592,
  [SMALL_STATE(300)] = 7605,
  [SMALL_STATE(301)] = 7618,
  [SMALL_STATE(302)] = 7637,
  [SMALL_STATE(303)] = 7650,
  [SMALL_STATE(304)] = 7669,
  [SMALL_STATE(305)] = 7685,
  [SMALL_STATE(306)] = 7701,
  [SMALL_STATE(307)] = 7713,
  [SMALL_STATE(308)] = 7727,
  [SMALL_STATE(309)] = 7741,
  [SMALL_STATE(310)] = 7757,
  [SMALL_STATE(311)] = 7769,
  [SMALL_STATE(312)] = 7785,
  [SMALL_STATE(313)] = 7801,
  [SMALL_STATE(314)] = 7813,
  [SMALL_STATE(315)] = 7825,
  [SMALL_STATE(316)] = 7837,
  [SMALL_STATE(317)] = 7853,
  [SMALL_STATE(318)] = 7865,
  [SMALL_STATE(319)] = 7881,
  [SMALL_STATE(320)] = 7897,
  [SMALL_STATE(321)] = 7913,
  [SMALL_STATE(322)] = 7929,
  [SMALL_STATE(323)] = 7942,
  [SMALL_STATE(324)] = 7953,
  [SMALL_STATE(325)] = 7966,
  [SMALL_STATE(326)] = 7979,
  [SMALL_STATE(327)] = 7990,
  [SMALL_STATE(328)] = 8001,
  [SMALL_STATE(329)] = 8012,
  [SMALL_STATE(330)] = 8023,
  [SMALL_STATE(331)] = 8036,
  [SMALL_STATE(332)] = 8049,
  [SMALL_STATE(333)] = 8060,
  [SMALL_STATE(334)] = 8071,
  [SMALL_STATE(335)] = 8082,
  [SMALL_STATE(336)] = 8095,
  [SMALL_STATE(337)] = 8108,
  [SMALL_STATE(338)] = 8121,
  [SMALL_STATE(339)] = 8134,
  [SMALL_STATE(340)] = 8145,
  [SMALL_STATE(341)] = 8158,
  [SMALL_STATE(342)] = 8171,
  [SMALL_STATE(343)] = 8184,
  [SMALL_STATE(344)] = 8197,
  [SMALL_STATE(345)] = 8210,
  [SMALL_STATE(346)] = 8221,
  [SMALL_STATE(347)] = 8232,
  [SMALL_STATE(348)] = 8243,
  [SMALL_STATE(349)] = 8256,
  [SMALL_STATE(350)] = 8269,
  [SMALL_STATE(351)] = 8276,
  [SMALL_STATE(352)] = 8289,
  [SMALL_STATE(353)] = 8300,
  [SMALL_STATE(354)] = 8311,
  [SMALL_STATE(355)] = 8324,
  [SMALL_STATE(356)] = 8337,
  [SMALL_STATE(357)] = 8350,
  [SMALL_STATE(358)] = 8363,
  [SMALL_STATE(359)] = 8374,
  [SMALL_STATE(360)] = 8387,
  [SMALL_STATE(361)] = 8400,
  [SMALL_STATE(362)] = 8413,
  [SMALL_STATE(363)] = 8426,
  [SMALL_STATE(364)] = 8439,
  [SMALL_STATE(365)] = 8452,
  [SMALL_STATE(366)] = 8465,
  [SMALL_STATE(367)] = 8478,
  [SMALL_STATE(368)] = 8491,
  [SMALL_STATE(369)] = 8504,
  [SMALL_STATE(370)] = 8515,
  [SMALL_STATE(371)] = 8528,
  [SMALL_STATE(372)] = 8541,
  [SMALL_STATE(373)] = 8554,
  [SMALL_STATE(374)] = 8567,
  [SMALL_STATE(375)] = 8580,
  [SMALL_STATE(376)] = 8593,
  [SMALL_STATE(377)] = 8604,
  [SMALL_STATE(378)] = 8615,
  [SMALL_STATE(379)] = 8626,
  [SMALL_STATE(380)] = 8639,
  [SMALL_STATE(381)] = 8649,
  [SMALL_STATE(382)] = 8659,
  [SMALL_STATE(383)] = 8669,
  [SMALL_STATE(384)] = 8679,
  [SMALL_STATE(385)] = 8689,
  [SMALL_STATE(386)] = 8699,
  [SMALL_STATE(387)] = 8709,
  [SMALL_STATE(388)] = 8719,
  [SMALL_STATE(389)] = 8729,
  [SMALL_STATE(390)] = 8739,
  [SMALL_STATE(391)] = 8749,
  [SMALL_STATE(392)] = 8759,
  [SMALL_STATE(393)] = 8769,
  [SMALL_STATE(394)] = 8779,
  [SMALL_STATE(395)] = 8789,
  [SMALL_STATE(396)] = 8799,
  [SMALL_STATE(397)] = 8809,
  [SMALL_STATE(398)] = 8819,
  [SMALL_STATE(399)] = 8829,
  [SMALL_STATE(400)] = 8839,
  [SMALL_STATE(401)] = 8849,
  [SMALL_STATE(402)] = 8859,
  [SMALL_STATE(403)] = 8869,
  [SMALL_STATE(404)] = 8879,
  [SMALL_STATE(405)] = 8887,
  [SMALL_STATE(406)] = 8897,
  [SMALL_STATE(407)] = 8907,
  [SMALL_STATE(408)] = 8917,
  [SMALL_STATE(409)] = 8927,
  [SMALL_STATE(410)] = 8937,
  [SMALL_STATE(411)] = 8947,
  [SMALL_STATE(412)] = 8957,
  [SMALL_STATE(413)] = 8967,
  [SMALL_STATE(414)] = 8977,
  [SMALL_STATE(415)] = 8987,
  [SMALL_STATE(416)] = 8997,
  [SMALL_STATE(417)] = 9007,
  [SMALL_STATE(418)] = 9017,
  [SMALL_STATE(419)] = 9027,
  [SMALL_STATE(420)] = 9035,
  [SMALL_STATE(421)] = 9045,
  [SMALL_STATE(422)] = 9055,
  [SMALL_STATE(423)] = 9065,
  [SMALL_STATE(424)] = 9075,
  [SMALL_STATE(425)] = 9085,
  [SMALL_STATE(426)] = 9095,
  [SMALL_STATE(427)] = 9105,
  [SMALL_STATE(428)] = 9115,
  [SMALL_STATE(429)] = 9125,
  [SMALL_STATE(430)] = 9135,
  [SMALL_STATE(431)] = 9145,
  [SMALL_STATE(432)] = 9155,
  [SMALL_STATE(433)] = 9165,
  [SMALL_STATE(434)] = 9175,
  [SMALL_STATE(435)] = 9185,
  [SMALL_STATE(436)] = 9195,
  [SMALL_STATE(437)] = 9205,
  [SMALL_STATE(438)] = 9215,
  [SMALL_STATE(439)] = 9225,
  [SMALL_STATE(440)] = 9235,
  [SMALL_STATE(441)] = 9245,
  [SMALL_STATE(442)] = 9255,
  [SMALL_STATE(443)] = 9265,
  [SMALL_STATE(444)] = 9275,
  [SMALL_STATE(445)] = 9285,
  [SMALL_STATE(446)] = 9295,
  [SMALL_STATE(447)] = 9305,
  [SMALL_STATE(448)] = 9312,
  [SMALL_STATE(449)] = 9319,
  [SMALL_STATE(450)] = 9326,
  [SMALL_STATE(451)] = 9333,
  [SMALL_STATE(452)] = 9340,
  [SMALL_STATE(453)] = 9347,
  [SMALL_STATE(454)] = 9354,
  [SMALL_STATE(455)] = 9361,
  [SMALL_STATE(456)] = 9368,
  [SMALL_STATE(457)] = 9373,
  [SMALL_STATE(458)] = 9380,
  [SMALL_STATE(459)] = 9387,
  [SMALL_STATE(460)] = 9394,
  [SMALL_STATE(461)] = 9401,
  [SMALL_STATE(462)] = 9406,
  [SMALL_STATE(463)] = 9413,
  [SMALL_STATE(464)] = 9417,
  [SMALL_STATE(465)] = 9421,
  [SMALL_STATE(466)] = 9425,
  [SMALL_STATE(467)] = 9429,
  [SMALL_STATE(468)] = 9433,
  [SMALL_STATE(469)] = 9437,
  [SMALL_STATE(470)] = 9441,
  [SMALL_STATE(471)] = 9445,
  [SMALL_STATE(472)] = 9449,
  [SMALL_STATE(473)] = 9453,
  [SMALL_STATE(474)] = 9457,
  [SMALL_STATE(475)] = 9461,
  [SMALL_STATE(476)] = 9465,
  [SMALL_STATE(477)] = 9469,
  [SMALL_STATE(478)] = 9473,
  [SMALL_STATE(479)] = 9477,
  [SMALL_STATE(480)] = 9481,
  [SMALL_STATE(481)] = 9485,
  [SMALL_STATE(482)] = 9489,
  [SMALL_STATE(483)] = 9493,
  [SMALL_STATE(484)] = 9497,
  [SMALL_STATE(485)] = 9501,
  [SMALL_STATE(486)] = 9505,
  [SMALL_STATE(487)] = 9509,
  [SMALL_STATE(488)] = 9513,
  [SMALL_STATE(489)] = 9517,
  [SMALL_STATE(490)] = 9521,
  [SMALL_STATE(491)] = 9525,
  [SMALL_STATE(492)] = 9529,
  [SMALL_STATE(493)] = 9533,
  [SMALL_STATE(494)] = 9537,
  [SMALL_STATE(495)] = 9541,
  [SMALL_STATE(496)] = 9545,
  [SMALL_STATE(497)] = 9549,
  [SMALL_STATE(498)] = 9553,
  [SMALL_STATE(499)] = 9557,
  [SMALL_STATE(500)] = 9561,
  [SMALL_STATE(501)] = 9565,
  [SMALL_STATE(502)] = 9569,
  [SMALL_STATE(503)] = 9573,
  [SMALL_STATE(504)] = 9577,
  [SMALL_STATE(505)] = 9581,
  [SMALL_STATE(506)] = 9585,
  [SMALL_STATE(507)] = 9589,
  [SMALL_STATE(508)] = 9593,
  [SMALL_STATE(509)] = 9597,
  [SMALL_STATE(510)] = 9601,
  [SMALL_STATE(511)] = 9605,
  [SMALL_STATE(512)] = 9609,
  [SMALL_STATE(513)] = 9613,
  [SMALL_STATE(514)] = 9617,
  [SMALL_STATE(515)] = 9621,
  [SMALL_STATE(516)] = 9625,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 4),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_rule, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(12),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 4),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_name, 1), REDUCE(sym_path, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_logical_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_logical_repeat1, 2), SHIFT_REPEAT(280),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 4),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance, 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 5),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 2, .production_id = 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 2, .production_id = 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3, .production_id = 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3, .production_id = 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 4),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 4),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat2, 2),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat2, 2), SHIFT_REPEAT(283),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_definition, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 5),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(492),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(502),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(473),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(483),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(487),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 5),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concept, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(472),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(490),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(465),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(467),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(468),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(469),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(470),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(474),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(475),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(478),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instance_repeat1, 2),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(492),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(482),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(487),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(463),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(492),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(491),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(499),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(487),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invariant, 4),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ratio_part, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 1),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 2),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 5),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2), SHIFT_REPEAT(76),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(492),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(486),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(485),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(484),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2), SHIFT_REPEAT(416),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2), SHIFT_REPEAT(382),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_rule, 4),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_rule, 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_rule, 4),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_rule, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(492),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(494),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(487),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(492),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(494),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(487),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 3),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 4),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_insert_rule_repeat1, 1),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 1),
  [421] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(81),
  [424] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(78),
  [427] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(80),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(80),
  [433] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(81),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 3),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [448] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(87),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(91),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [458] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(93),
  [461] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(93),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_operator, 1),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vs_filter_operator, 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 5),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_valueset_repeat2, 2),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat2, 2), SHIFT_REPEAT(110),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 5),
  [479] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(103),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_metadata, 1),
  [484] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(105),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [489] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(108),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_repeat2, 2),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat2, 2), SHIFT_REPEAT(296),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instance_repeat2, 2),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat2, 2), SHIFT_REPEAT(303),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 5),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_string, 1),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [520] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(119),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 5),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat2, 2),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat2, 2), SHIFT_REPEAT(295),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 5),
  [538] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(126),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [543] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(128),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 5),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sd_metadata, 1),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_metadata, 1),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance_metadata, 1),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concept, 3),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 7),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [562] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(136),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 6),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_cre_element_rule, 6),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [571] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(140),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parent, 3),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [578] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(143),
  [581] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(144),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [590] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(148),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_of, 3),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance_of, 3),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usage, 3),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usage, 3),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invariant_metadata, 1),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_valueset, 2),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_valueset, 3),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 3),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 4),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 4),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2), SHIFT_REPEAT(379),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [624] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(162),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 5),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 5),
  [631] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(165),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_severity, 3),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath, 3),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 6),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 7),
  [646] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(172),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_string, 2),
  [655] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(176),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [660] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(178),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [665] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(180),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 1),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_metadata, 1),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cs_metadata, 1),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 4),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_rule, 4),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 3),
  [688] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(191),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 5),
  [695] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2), SHIFT_REPEAT(342),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_rule, 5),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 3),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 1),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_list, 1),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [712] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(202),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_system, 2),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_only_rule, 5),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vs_filter_list_repeat1, 2),
  [725] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vs_filter_list_repeat1, 2), SHIFT_REPEAT(316),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contains_rule_repeat1, 2),
  [730] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contains_rule_repeat1, 2), SHIFT_REPEAT(312),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component_from, 2),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_rule, 4),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_type, 1),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_type, 1, .production_id = 4),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_only_rule, 4),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_list, 2),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [755] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2), SHIFT_REPEAT(286),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component_from, 4),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_component, 2),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_value_rule, 4),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ratio, 3),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 3),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_value, 1),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_definition, 3),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [788] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(242),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 8),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strength, 3),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 3),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lr_rule, 1),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_insert_rule, 3),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sd_rule, 1),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_insert_rule, 2),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_rule, 2),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_rule, 3),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 2),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_entity_rule, 1),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 6),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_rule, 1),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concept, 4),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_value_rule, 7),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_rule, 5),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component, 2),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_rule, 1),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_value_rule, 4),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 5, .production_id = 1),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_value_rule, 5),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cs_rule, 1),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_component, 4),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component, 3),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_caret_value_rule, 5),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_cre_element_rule, 7),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2),
  [855] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2), SHIFT_REPEAT(287),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 3),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag, 1),
  [868] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(289),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [873] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_rule_repeat1, 2), SHIFT_REPEAT(320),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_rule_repeat1, 2),
  [878] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2), SHIFT_REPEAT(400),
  [881] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2), SHIFT_REPEAT(382),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [894] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(298),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [903] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(302),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [914] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(306),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [919] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(308),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [932] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(313),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [937] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(315),
  [940] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [948] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [964] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(327),
  [967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [969] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(329),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [976] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(333),
  [979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [989] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(339),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1000] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [1018] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [1020] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(353),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1037] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(360),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [1046] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(369),
  [1049] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1061] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [1063] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(383),
  [1066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1070] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 2),
  [1098] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 2), SHIFT_REPEAT(380),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(383),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reference_repeat1, 2),
  [1114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reference_repeat1, 2), SHIFT_REPEAT(434),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(437),
  [1138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [1140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2), SHIFT_REPEAT(288),
  [1143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2),
  [1145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(440),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(444),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 4),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2),
  [1171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1207] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_path, 2),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
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
