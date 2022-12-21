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
#define STATE_COUNT 518
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
  anon_sym_MS = 48,
  anon_sym_SU = 49,
  anon_sym_TU = 50,
  anon_sym_N = 51,
  anon_sym_D = 52,
  aux_sym_cardinality_token1 = 53,
  anon_sym_DOT_DOT = 54,
  anon_sym_STAR2 = 55,
  anon_sym_DQUOTE = 56,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 57,
  sym_double_quote_string_fragment = 58,
  sym_escape_sequence = 59,
  sym_number = 60,
  sym_date = 61,
  sym_time = 62,
  anon_sym_T = 63,
  anon_sym_SQUOTE = 64,
  aux_sym_unit_token1 = 65,
  anon_sym_example = 66,
  anon_sym_preferred = 67,
  anon_sym_extensible = 68,
  anon_sym_required = 69,
  anon_sym_Reference = 70,
  anon_sym_Canonical = 71,
  anon_sym_PIPE = 72,
  anon_sym_named = 73,
  anon_sym_QMARK_BANG = 74,
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
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 22,
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
  [67] = 67,
  [68] = 60,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 16,
  [78] = 78,
  [79] = 16,
  [80] = 17,
  [81] = 16,
  [82] = 82,
  [83] = 83,
  [84] = 17,
  [85] = 17,
  [86] = 72,
  [87] = 87,
  [88] = 31,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 17,
  [94] = 92,
  [95] = 16,
  [96] = 96,
  [97] = 16,
  [98] = 16,
  [99] = 24,
  [100] = 17,
  [101] = 17,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 16,
  [109] = 109,
  [110] = 17,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 24,
  [116] = 31,
  [117] = 117,
  [118] = 16,
  [119] = 17,
  [120] = 120,
  [121] = 17,
  [122] = 122,
  [123] = 123,
  [124] = 16,
  [125] = 125,
  [126] = 126,
  [127] = 17,
  [128] = 16,
  [129] = 129,
  [130] = 130,
  [131] = 17,
  [132] = 132,
  [133] = 17,
  [134] = 16,
  [135] = 17,
  [136] = 16,
  [137] = 137,
  [138] = 16,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 16,
  [143] = 17,
  [144] = 16,
  [145] = 16,
  [146] = 17,
  [147] = 147,
  [148] = 16,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 59,
  [154] = 57,
  [155] = 155,
  [156] = 17,
  [157] = 17,
  [158] = 17,
  [159] = 159,
  [160] = 160,
  [161] = 17,
  [162] = 16,
  [163] = 16,
  [164] = 164,
  [165] = 165,
  [166] = 17,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 17,
  [171] = 16,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 16,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 17,
  [182] = 17,
  [183] = 183,
  [184] = 16,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 160,
  [189] = 189,
  [190] = 189,
  [191] = 19,
  [192] = 21,
  [193] = 55,
  [194] = 194,
  [195] = 16,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 160,
  [203] = 203,
  [204] = 204,
  [205] = 189,
  [206] = 206,
  [207] = 75,
  [208] = 208,
  [209] = 160,
  [210] = 78,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 19,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 21,
  [222] = 222,
  [223] = 16,
  [224] = 224,
  [225] = 225,
  [226] = 17,
  [227] = 227,
  [228] = 228,
  [229] = 16,
  [230] = 17,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 189,
  [236] = 236,
  [237] = 186,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 240,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 244,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 17,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 74,
  [261] = 232,
  [262] = 247,
  [263] = 263,
  [264] = 264,
  [265] = 250,
  [266] = 247,
  [267] = 267,
  [268] = 268,
  [269] = 244,
  [270] = 270,
  [271] = 240,
  [272] = 244,
  [273] = 240,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 16,
  [284] = 224,
  [285] = 225,
  [286] = 286,
  [287] = 287,
  [288] = 288,
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
  [323] = 16,
  [324] = 17,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 17,
  [332] = 16,
  [333] = 333,
  [334] = 17,
  [335] = 16,
  [336] = 16,
  [337] = 337,
  [338] = 17,
  [339] = 339,
  [340] = 17,
  [341] = 16,
  [342] = 16,
  [343] = 343,
  [344] = 16,
  [345] = 17,
  [346] = 346,
  [347] = 347,
  [348] = 17,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 17,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 16,
  [358] = 17,
  [359] = 352,
  [360] = 360,
  [361] = 361,
  [362] = 16,
  [363] = 363,
  [364] = 356,
  [365] = 356,
  [366] = 366,
  [367] = 351,
  [368] = 16,
  [369] = 352,
  [370] = 370,
  [371] = 371,
  [372] = 17,
  [373] = 373,
  [374] = 373,
  [375] = 375,
  [376] = 16,
  [377] = 16,
  [378] = 17,
  [379] = 17,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 384,
  [387] = 16,
  [388] = 17,
  [389] = 17,
  [390] = 16,
  [391] = 385,
  [392] = 392,
  [393] = 384,
  [394] = 385,
  [395] = 384,
  [396] = 385,
  [397] = 384,
  [398] = 385,
  [399] = 384,
  [400] = 385,
  [401] = 401,
  [402] = 384,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 385,
  [408] = 385,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 384,
  [416] = 385,
  [417] = 417,
  [418] = 384,
  [419] = 16,
  [420] = 385,
  [421] = 384,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 385,
  [426] = 384,
  [427] = 385,
  [428] = 384,
  [429] = 385,
  [430] = 430,
  [431] = 384,
  [432] = 384,
  [433] = 385,
  [434] = 384,
  [435] = 435,
  [436] = 385,
  [437] = 437,
  [438] = 17,
  [439] = 16,
  [440] = 440,
  [441] = 441,
  [442] = 385,
  [443] = 443,
  [444] = 384,
  [445] = 445,
  [446] = 440,
  [447] = 201,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 14,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 454,
  [461] = 452,
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
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 464,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 494,
  [496] = 471,
  [497] = 497,
  [498] = 498,
  [499] = 466,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 494,
  [504] = 471,
  [505] = 471,
  [506] = 471,
  [507] = 471,
  [508] = 471,
  [509] = 471,
  [510] = 471,
  [511] = 471,
  [512] = 471,
  [513] = 471,
  [514] = 471,
  [515] = 471,
  [516] = 516,
  [517] = 517,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(352);
      if (lookahead == '"') ADVANCE(473);
      if (lookahead == '#') ADVANCE(398);
      if (lookahead == '\'') ADVANCE(494);
      if (lookahead == '(') ADVANCE(381);
      if (lookahead == ')') ADVANCE(383);
      if (lookahead == '*') ADVANCE(471);
      if (lookahead == '+') ADVANCE(460);
      if (lookahead == '-') ADVANCE(406);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(354);
      if (lookahead == '=') ADVANCE(355);
      if (lookahead == '?') ADVANCE(400);
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(414);
      if (lookahead == 'D') ADVANCE(467);
      if (lookahead == 'E') ADVANCE(455);
      if (lookahead == 'I') ADVANCE(428);
      if (lookahead == 'L') ADVANCE(444);
      if (lookahead == 'M') ADVANCE(409);
      if (lookahead == 'N') ADVANCE(466);
      if (lookahead == 'P') ADVANCE(417);
      if (lookahead == 'R') ADVANCE(430);
      if (lookahead == 'S') ADVANCE(411);
      if (lookahead == 'T') ADVANCE(493);
      if (lookahead == 'U') ADVANCE(454);
      if (lookahead == 'V') ADVANCE(418);
      if (lookahead == 'X') ADVANCE(407);
      if (lookahead == '^') ADVANCE(462);
      if (lookahead == 'a') ADVANCE(440);
      if (lookahead == 'c') ADVANCE(446);
      if (lookahead == 'e') ADVANCE(456);
      if (lookahead == 'f') ADVANCE(422);
      if (lookahead == 'i') ADVANCE(439);
      if (lookahead == 'n') ADVANCE(419);
      if (lookahead == 'o') ADVANCE(426);
      if (lookahead == 's') ADVANCE(459);
      if (lookahead == 't') ADVANCE(453);
      if (lookahead == 'v') ADVANCE(423);
      if (lookahead == 'w') ADVANCE(435);
      if (lookahead == '|') ADVANCE(503);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(505);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(473);
      if (lookahead == '#') ADVANCE(398);
      if (lookahead == 'C') ADVANCE(413);
      if (lookahead == 'D') ADVANCE(467);
      if (lookahead == 'M') ADVANCE(408);
      if (lookahead == 'N') ADVANCE(466);
      if (lookahead == 'R') ADVANCE(434);
      if (lookahead == 'S') ADVANCE(410);
      if (lookahead == 'T') ADVANCE(412);
      if (lookahead == 'c') ADVANCE(449);
      if (lookahead == 'f') ADVANCE(421);
      if (lookahead == 's') ADVANCE(459);
      if (lookahead == 't') ADVANCE(453);
      if (lookahead == 'v') ADVANCE(423);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(460);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(474);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(472);
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
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == '?') ADVANCE(400);
      if (lookahead == 'C') ADVANCE(413);
      if (lookahead == 'D') ADVANCE(467);
      if (lookahead == 'M') ADVANCE(408);
      if (lookahead == 'N') ADVANCE(466);
      if (lookahead == 'R') ADVANCE(434);
      if (lookahead == 'S') ADVANCE(410);
      if (lookahead == 'T') ADVANCE(412);
      if (lookahead == 'c') ADVANCE(449);
      if (lookahead == 'o') ADVANCE(451);
      if (lookahead == 's') ADVANCE(459);
      if (lookahead == 'v') ADVANCE(423);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(460);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == '\\') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(475);
      if (lookahead != 0) ADVANCE(476);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == 'a') ADVANCE(440);
      if (lookahead == 'f') ADVANCE(452);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == 'a') ADVANCE(440);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == 'o') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(475);
      if (lookahead != 0) ADVANCE(476);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(398);
      if (lookahead == '^') ADVANCE(462);
      if (lookahead == 'c') ADVANCE(449);
      if (lookahead == 'e') ADVANCE(456);
      if (lookahead == 'i') ADVANCE(439);
      if (lookahead == 's') ADVANCE(459);
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
      if (lookahead == '^') ADVANCE(462);
      if (lookahead == 'i') ADVANCE(441);
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
      if (lookahead == 'c') ADVANCE(449);
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
      if (lookahead == 'i') ADVANCE(441);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(398);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 18:
      if (lookahead == '\'') ADVANCE(494);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(495);
      END_STATE();
    case 19:
      if (lookahead == ')') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(451);
      if (lookahead == '|') ADVANCE(503);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 20:
      if (lookahead == ')') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(471);
      if (lookahead == '?') ADVANCE(400);
      if (lookahead == 'C') ADVANCE(413);
      if (lookahead == 'D') ADVANCE(467);
      if (lookahead == 'M') ADVANCE(408);
      if (lookahead == 'N') ADVANCE(466);
      if (lookahead == 'R') ADVANCE(434);
      if (lookahead == 'S') ADVANCE(410);
      if (lookahead == 'T') ADVANCE(412);
      if (lookahead == 'c') ADVANCE(448);
      if (lookahead == 's') ADVANCE(459);
      if (lookahead == 'v') ADVANCE(423);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(460);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(405);
      if (lookahead == 'i') ADVANCE(441);
      if (lookahead == 's') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'n') ADVANCE(419);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(470);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(307);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(355);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(389);
      END_STATE();
    case 29:
      if (lookahead == '?') ADVANCE(400);
      if (lookahead == 'C') ADVANCE(413);
      if (lookahead == 'D') ADVANCE(467);
      if (lookahead == 'M') ADVANCE(408);
      if (lookahead == 'N') ADVANCE(466);
      if (lookahead == 'R') ADVANCE(434);
      if (lookahead == 'S') ADVANCE(410);
      if (lookahead == 'T') ADVANCE(412);
      if (lookahead == 'c') ADVANCE(449);
      if (lookahead == 's') ADVANCE(459);
      if (lookahead == 'v') ADVANCE(423);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(460);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 30:
      if (lookahead == '?') ADVANCE(400);
      if (lookahead == 'C') ADVANCE(413);
      if (lookahead == 'D') ADVANCE(467);
      if (lookahead == 'M') ADVANCE(408);
      if (lookahead == 'N') ADVANCE(466);
      if (lookahead == 'R') ADVANCE(434);
      if (lookahead == 'S') ADVANCE(410);
      if (lookahead == 'T') ADVANCE(412);
      if (lookahead == 'c') ADVANCE(448);
      if (lookahead == 's') ADVANCE(459);
      if (lookahead == 'v') ADVANCE(423);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(460);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 31:
      if (lookahead == '?') ADVANCE(400);
      if (lookahead == 'D') ADVANCE(467);
      if (lookahead == 'M') ADVANCE(408);
      if (lookahead == 'N') ADVANCE(466);
      if (lookahead == 'S') ADVANCE(410);
      if (lookahead == 'T') ADVANCE(412);
      if (lookahead == 'a') ADVANCE(440);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 32:
      if (lookahead == 'C') ADVANCE(413);
      if (lookahead == 'D') ADVANCE(467);
      if (lookahead == 'M') ADVANCE(408);
      if (lookahead == 'N') ADVANCE(466);
      if (lookahead == 'R') ADVANCE(434);
      if (lookahead == 'S') ADVANCE(410);
      if (lookahead == 'T') ADVANCE(412);
      if (lookahead == 'c') ADVANCE(449);
      if (lookahead == 's') ADVANCE(459);
      if (lookahead == 'v') ADVANCE(423);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(460);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 33:
      if (lookahead == 'D') ADVANCE(467);
      if (lookahead == 'M') ADVANCE(408);
      if (lookahead == 'N') ADVANCE(466);
      if (lookahead == 'S') ADVANCE(410);
      if (lookahead == 'T') ADVANCE(412);
      if (lookahead == '^') ADVANCE(462);
      if (lookahead == 'c') ADVANCE(449);
      if (lookahead == 'i') ADVANCE(441);
      if (lookahead == 'o') ADVANCE(424);
      if (lookahead == 's') ADVANCE(459);
      if (lookahead == 'v') ADVANCE(423);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(460);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 34:
      if (lookahead == 'D') ADVANCE(467);
      if (lookahead == 'M') ADVANCE(408);
      if (lookahead == 'N') ADVANCE(466);
      if (lookahead == 'S') ADVANCE(410);
      if (lookahead == 'T') ADVANCE(412);
      if (lookahead == 'c') ADVANCE(449);
      if (lookahead == 's') ADVANCE(459);
      if (lookahead == 'v') ADVANCE(423);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(460);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 35:
      if (lookahead == 'D') ADVANCE(432);
      if (lookahead == 'E') ADVANCE(457);
      if (lookahead == 'S') ADVANCE(431);
      if (lookahead == 'X') ADVANCE(407);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 36:
      if (lookahead == 'D') ADVANCE(432);
      if (lookahead == 'I') ADVANCE(427);
      if (lookahead == 'P') ADVANCE(416);
      if (lookahead == 'T') ADVANCE(436);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 37:
      if (lookahead == 'P') ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == 'R') ADVANCE(110);
      END_STATE();
    case 39:
      if (lookahead == 'S') ADVANCE(463);
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 40:
      if (lookahead == 'S') ADVANCE(291);
      END_STATE();
    case 41:
      if (lookahead == 'S') ADVANCE(123);
      END_STATE();
    case 42:
      if (lookahead == 'U') ADVANCE(464);
      END_STATE();
    case 43:
      if (lookahead == 'U') ADVANCE(465);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(222);
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(72);
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 'i') ADVANCE(263);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(254);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 61:
      if (lookahead == 'b') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 62:
      if (lookahead == 'b') ADVANCE(171);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(223);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(267);
      if (lookahead == 'm') ADVANCE(214);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(166);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(174);
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(368);
      if (lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(385);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(504);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(500);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(498);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(255);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(283);
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(497);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 134:
      if (lookahead == 'f') ADVANCE(369);
      END_STATE();
    case 135:
      if (lookahead == 'f') ADVANCE(157);
      END_STATE();
    case 136:
      if (lookahead == 'f') ADVANCE(121);
      END_STATE();
    case 137:
      if (lookahead == 'f') ADVANCE(130);
      END_STATE();
    case 138:
      if (lookahead == 'f') ADVANCE(130);
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 139:
      if (lookahead == 'f') ADVANCE(133);
      END_STATE();
    case 140:
      if (lookahead == 'g') ADVANCE(363);
      END_STATE();
    case 141:
      if (lookahead == 'g') ADVANCE(147);
      END_STATE();
    case 142:
      if (lookahead == 'g') ADVANCE(120);
      END_STATE();
    case 143:
      if (lookahead == 'g') ADVANCE(91);
      END_STATE();
    case 144:
      if (lookahead == 'h') ADVANCE(376);
      END_STATE();
    case 145:
      if (lookahead == 'h') ADVANCE(128);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(441);
      if (lookahead == 's') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(149)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(265);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(364);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(502);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(287);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(280);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(289);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 169:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 171:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(278);
      END_STATE();
    case 173:
      if (lookahead == 'l') ADVANCE(279);
      END_STATE();
    case 174:
      if (lookahead == 'l') ADVANCE(281);
      END_STATE();
    case 175:
      if (lookahead == 'm') ADVANCE(380);
      END_STATE();
    case 176:
      if (lookahead == 'm') ADVANCE(394);
      END_STATE();
    case 177:
      if (lookahead == 'm') ADVANCE(362);
      END_STATE();
    case 178:
      if (lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(357);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(367);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(366);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(268);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 208:
      if (lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 209:
      if (lookahead == 'p') ADVANCE(210);
      END_STATE();
    case 210:
      if (lookahead == 'p') ADVANCE(152);
      END_STATE();
    case 211:
      if (lookahead == 'p') ADVANCE(272);
      END_STATE();
    case 212:
      if (lookahead == 'p') ADVANCE(225);
      END_STATE();
    case 213:
      if (lookahead == 'p') ADVANCE(225);
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 214:
      if (lookahead == 'p') ADVANCE(170);
      END_STATE();
    case 215:
      if (lookahead == 'q') ADVANCE(276);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(388);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(258);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 235:
      if (lookahead == 's') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(235)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 236:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 237:
      if (lookahead == 's') ADVANCE(353);
      END_STATE();
    case 238:
      if (lookahead == 's') ADVANCE(392);
      END_STATE();
    case 239:
      if (lookahead == 's') ADVANCE(386);
      END_STATE();
    case 240:
      if (lookahead == 's') ADVANCE(384);
      END_STATE();
    case 241:
      if (lookahead == 's') ADVANCE(266);
      if (lookahead == 'v') ADVANCE(52);
      END_STATE();
    case 242:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 243:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 244:
      if (lookahead == 's') ADVANCE(269);
      END_STATE();
    case 245:
      if (lookahead == 's') ADVANCE(151);
      END_STATE();
    case 246:
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 247:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 248:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 249:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 250:
      if (lookahead == 's') ADVANCE(270);
      END_STATE();
    case 251:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 252:
      if (lookahead == 's') ADVANCE(251);
      END_STATE();
    case 253:
      if (lookahead == 's') ADVANCE(273);
      if (lookahead == 'v') ADVANCE(52);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(370);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(373);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(379);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(361);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(395);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(358);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 274:
      if (lookahead == 'u') ADVANCE(292);
      if (lookahead == 'x') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(479);
      if (lookahead != 0) ADVANCE(477);
      END_STATE();
    case 275:
      if (lookahead == 'u') ADVANCE(220);
      END_STATE();
    case 276:
      if (lookahead == 'u') ADVANCE(160);
      END_STATE();
    case 277:
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 278:
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 279:
      if (lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 280:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 281:
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 282:
      if (lookahead == 'u') ADVANCE(232);
      END_STATE();
    case 283:
      if (lookahead == 'v') ADVANCE(117);
      END_STATE();
    case 284:
      if (lookahead == 'x') ADVANCE(213);
      END_STATE();
    case 285:
      if (lookahead == 'x') ADVANCE(48);
      END_STATE();
    case 286:
      if (lookahead == 'x') ADVANCE(264);
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
      if (lookahead == 'y') ADVANCE(239);
      END_STATE();
    case 291:
      if (lookahead == 'y') ADVANCE(250);
      END_STATE();
    case 292:
      if (lookahead == '{') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(311);
      END_STATE();
    case 293:
      if (lookahead == '}') ADVANCE(477);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      END_STATE();
    case 296:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      END_STATE();
    case 297:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(487);
      END_STATE();
    case 298:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 299:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(490);
      END_STATE();
    case 300:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      END_STATE();
    case 301:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      END_STATE();
    case 302:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      END_STATE();
    case 303:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(485);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      END_STATE();
    case 311:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(314);
      END_STATE();
    case 312:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(477);
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
      if (lookahead == '"') ADVANCE(473);
      if (lookahead == '#') ADVANCE(398);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(443);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead == 'I') ADVANCE(442);
      if (lookahead == 'L') ADVANCE(444);
      if (lookahead == 'M') ADVANCE(415);
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead == 'R') ADVANCE(433);
      if (lookahead == 'V') ADVANCE(418);
      if (lookahead == '^') ADVANCE(462);
      if (lookahead == 'i') ADVANCE(441);
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
      if (lookahead == '"') ADVANCE(473);
      if (lookahead == '#') ADVANCE(398);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(443);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead == 'I') ADVANCE(442);
      if (lookahead == 'L') ADVANCE(444);
      if (lookahead == 'M') ADVANCE(415);
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead == 'R') ADVANCE(433);
      if (lookahead == 'V') ADVANCE(418);
      if (lookahead == 'i') ADVANCE(441);
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
      if (lookahead == '"') ADVANCE(473);
      if (lookahead == '(') ADVANCE(381);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == ':') ADVANCE(354);
      if (lookahead == 'A') ADVANCE(161);
      if (lookahead == 'C') ADVANCE(199);
      if (lookahead == 'D') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(284);
      if (lookahead == 'I') ADVANCE(75);
      if (lookahead == 'L') ADVANCE(200);
      if (lookahead == 'M') ADVANCE(44);
      if (lookahead == 'P') ADVANCE(45);
      if (lookahead == 'R') ADVANCE(124);
      if (lookahead == 'S') ADVANCE(86);
      if (lookahead == 'T') ADVANCE(49);
      if (lookahead == 'U') ADVANCE(236);
      if (lookahead == 'V') ADVANCE(46);
      if (lookahead == 'X') ADVANCE(37);
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == 'f') ADVANCE(219);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(317)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      END_STATE();
    case 318:
      if (eof) ADVANCE(352);
      if (lookahead == '"') ADVANCE(473);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '=') ADVANCE(355);
      if (lookahead == '?') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(161);
      if (lookahead == 'C') ADVANCE(199);
      if (lookahead == 'D') ADVANCE(467);
      if (lookahead == 'E') ADVANCE(286);
      if (lookahead == 'I') ADVANCE(198);
      if (lookahead == 'L') ADVANCE(200);
      if (lookahead == 'M') ADVANCE(39);
      if (lookahead == 'N') ADVANCE(466);
      if (lookahead == 'P') ADVANCE(216);
      if (lookahead == 'R') ADVANCE(124);
      if (lookahead == 'S') ADVANCE(42);
      if (lookahead == 'T') ADVANCE(43);
      if (lookahead == 'V') ADVANCE(46);
      if (lookahead == '^') ADVANCE(462);
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == 'c') ADVANCE(207);
      if (lookahead == 'f') ADVANCE(219);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(318)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(469);
      END_STATE();
    case 319:
      if (eof) ADVANCE(352);
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == '#') ADVANCE(398);
      if (lookahead == '(') ADVANCE(381);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == ':') ADVANCE(354);
      if (lookahead == '=') ADVANCE(355);
      if (lookahead == 'A') ADVANCE(161);
      if (lookahead == 'C') ADVANCE(199);
      if (lookahead == 'D') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(284);
      if (lookahead == 'I') ADVANCE(75);
      if (lookahead == 'L') ADVANCE(200);
      if (lookahead == 'M') ADVANCE(44);
      if (lookahead == 'P') ADVANCE(45);
      if (lookahead == 'R') ADVANCE(124);
      if (lookahead == 'S') ADVANCE(86);
      if (lookahead == 'T') ADVANCE(49);
      if (lookahead == 'U') ADVANCE(236);
      if (lookahead == 'V') ADVANCE(46);
      if (lookahead == 'X') ADVANCE(37);
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == 'f') ADVANCE(219);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead == 'n') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(217);
      if (lookahead == 'p') ADVANCE(228);
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead == 'w') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(319)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(469);
      END_STATE();
    case 320:
      if (eof) ADVANCE(352);
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == '#') ADVANCE(398);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(443);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead == 'I') ADVANCE(442);
      if (lookahead == 'L') ADVANCE(444);
      if (lookahead == 'M') ADVANCE(415);
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead == 'R') ADVANCE(433);
      if (lookahead == 'V') ADVANCE(418);
      if (lookahead == 'a') ADVANCE(440);
      if (lookahead == 'f') ADVANCE(421);
      if (lookahead == 't') ADVANCE(453);
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
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == '#') ADVANCE(398);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(443);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead == 'I') ADVANCE(442);
      if (lookahead == 'L') ADVANCE(444);
      if (lookahead == 'M') ADVANCE(415);
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead == 'R') ADVANCE(433);
      if (lookahead == 'V') ADVANCE(418);
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
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == '(') ADVANCE(381);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == ':') ADVANCE(354);
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(443);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead == 'I') ADVANCE(442);
      if (lookahead == 'L') ADVANCE(444);
      if (lookahead == 'M') ADVANCE(415);
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead == 'R') ADVANCE(433);
      if (lookahead == 'V') ADVANCE(418);
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
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == '(') ADVANCE(381);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(443);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead == 'I') ADVANCE(442);
      if (lookahead == 'L') ADVANCE(444);
      if (lookahead == 'M') ADVANCE(415);
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead == 'R') ADVANCE(433);
      if (lookahead == 'V') ADVANCE(418);
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
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == ':') ADVANCE(354);
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(443);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead == 'I') ADVANCE(442);
      if (lookahead == 'L') ADVANCE(444);
      if (lookahead == 'M') ADVANCE(415);
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead == 'R') ADVANCE(433);
      if (lookahead == 'V') ADVANCE(418);
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
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(443);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead == 'I') ADVANCE(442);
      if (lookahead == 'L') ADVANCE(444);
      if (lookahead == 'M') ADVANCE(415);
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead == 'R') ADVANCE(433);
      if (lookahead == 'V') ADVANCE(418);
      if (lookahead == 'a') ADVANCE(440);
      if (lookahead == 'f') ADVANCE(452);
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
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(443);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead == 'I') ADVANCE(442);
      if (lookahead == 'L') ADVANCE(444);
      if (lookahead == 'M') ADVANCE(415);
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead == 'R') ADVANCE(433);
      if (lookahead == 'V') ADVANCE(418);
      if (lookahead == 'a') ADVANCE(440);
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
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(443);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead == 'I') ADVANCE(442);
      if (lookahead == 'L') ADVANCE(444);
      if (lookahead == 'M') ADVANCE(415);
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead == 'R') ADVANCE(433);
      if (lookahead == 'V') ADVANCE(418);
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
      if (lookahead == '\'') ADVANCE(494);
      if (lookahead == '(') ADVANCE(381);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == ':') ADVANCE(354);
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(443);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead == 'I') ADVANCE(442);
      if (lookahead == 'L') ADVANCE(444);
      if (lookahead == 'M') ADVANCE(415);
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead == 'R') ADVANCE(433);
      if (lookahead == 'V') ADVANCE(418);
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
      if (lookahead == '\'') ADVANCE(494);
      if (lookahead == '(') ADVANCE(381);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(443);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead == 'I') ADVANCE(442);
      if (lookahead == 'L') ADVANCE(444);
      if (lookahead == 'M') ADVANCE(415);
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead == 'R') ADVANCE(433);
      if (lookahead == 'V') ADVANCE(418);
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
      if (lookahead == '\'') ADVANCE(494);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == ':') ADVANCE(354);
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(443);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead == 'I') ADVANCE(442);
      if (lookahead == 'L') ADVANCE(444);
      if (lookahead == 'M') ADVANCE(415);
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead == 'R') ADVANCE(433);
      if (lookahead == 'V') ADVANCE(418);
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
      if (lookahead == '\'') ADVANCE(494);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(443);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead == 'I') ADVANCE(442);
      if (lookahead == 'L') ADVANCE(444);
      if (lookahead == 'M') ADVANCE(415);
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead == 'R') ADVANCE(433);
      if (lookahead == 'V') ADVANCE(418);
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
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(443);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead == 'I') ADVANCE(442);
      if (lookahead == 'L') ADVANCE(444);
      if (lookahead == 'M') ADVANCE(415);
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead == 'R') ADVANCE(433);
      if (lookahead == 'V') ADVANCE(418);
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
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(443);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead == 'I') ADVANCE(442);
      if (lookahead == 'L') ADVANCE(444);
      if (lookahead == 'M') ADVANCE(415);
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead == 'R') ADVANCE(433);
      if (lookahead == 'V') ADVANCE(418);
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
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(443);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead == 'I') ADVANCE(442);
      if (lookahead == 'L') ADVANCE(444);
      if (lookahead == 'M') ADVANCE(415);
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead == 'R') ADVANCE(433);
      if (lookahead == 'V') ADVANCE(418);
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
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(443);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead == 'I') ADVANCE(442);
      if (lookahead == 'L') ADVANCE(444);
      if (lookahead == 'M') ADVANCE(415);
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead == 'R') ADVANCE(433);
      if (lookahead == 'V') ADVANCE(418);
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
      if (lookahead == 'A') ADVANCE(161);
      if (lookahead == 'C') ADVANCE(199);
      if (lookahead == 'E') ADVANCE(286);
      if (lookahead == 'I') ADVANCE(198);
      if (lookahead == 'L') ADVANCE(200);
      if (lookahead == 'M') ADVANCE(44);
      if (lookahead == 'P') ADVANCE(216);
      if (lookahead == 'R') ADVANCE(124);
      if (lookahead == 'T') ADVANCE(492);
      if (lookahead == 'V') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(336)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 337:
      if (eof) ADVANCE(352);
      if (lookahead == '*') ADVANCE(471);
      if (lookahead == '?') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(161);
      if (lookahead == 'C') ADVANCE(199);
      if (lookahead == 'D') ADVANCE(467);
      if (lookahead == 'E') ADVANCE(286);
      if (lookahead == 'I') ADVANCE(198);
      if (lookahead == 'L') ADVANCE(200);
      if (lookahead == 'M') ADVANCE(39);
      if (lookahead == 'N') ADVANCE(466);
      if (lookahead == 'P') ADVANCE(216);
      if (lookahead == 'R') ADVANCE(124);
      if (lookahead == 'S') ADVANCE(42);
      if (lookahead == 'T') ADVANCE(43);
      if (lookahead == 'V') ADVANCE(46);
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(337)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(469);
      END_STATE();
    case 338:
      if (eof) ADVANCE(352);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == '-') ADVANCE(405);
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(443);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead == 'I') ADVANCE(442);
      if (lookahead == 'L') ADVANCE(444);
      if (lookahead == 'M') ADVANCE(415);
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead == 'R') ADVANCE(433);
      if (lookahead == 'V') ADVANCE(418);
      if (lookahead == 'i') ADVANCE(441);
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
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(443);
      if (lookahead == 'D') ADVANCE(467);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead == 'I') ADVANCE(442);
      if (lookahead == 'L') ADVANCE(444);
      if (lookahead == 'M') ADVANCE(409);
      if (lookahead == 'N') ADVANCE(466);
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead == 'R') ADVANCE(433);
      if (lookahead == 'S') ADVANCE(410);
      if (lookahead == 'T') ADVANCE(412);
      if (lookahead == 'V') ADVANCE(418);
      if (lookahead == '^') ADVANCE(462);
      if (lookahead == 'a') ADVANCE(440);
      if (lookahead == 'c') ADVANCE(447);
      if (lookahead == 'f') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(441);
      if (lookahead == 'o') ADVANCE(425);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(339)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(399);
      END_STATE();
    case 340:
      if (eof) ADVANCE(352);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == '=') ADVANCE(355);
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(443);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead == 'I') ADVANCE(442);
      if (lookahead == 'L') ADVANCE(444);
      if (lookahead == 'M') ADVANCE(415);
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead == 'R') ADVANCE(433);
      if (lookahead == 'V') ADVANCE(418);
      if (lookahead == 'i') ADVANCE(441);
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
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(443);
      if (lookahead == 'D') ADVANCE(432);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead == 'I') ADVANCE(438);
      if (lookahead == 'L') ADVANCE(444);
      if (lookahead == 'M') ADVANCE(415);
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead == 'R') ADVANCE(433);
      if (lookahead == 'T') ADVANCE(436);
      if (lookahead == 'U') ADVANCE(454);
      if (lookahead == 'V') ADVANCE(418);
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
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(443);
      if (lookahead == 'D') ADVANCE(432);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead == 'I') ADVANCE(429);
      if (lookahead == 'L') ADVANCE(444);
      if (lookahead == 'M') ADVANCE(415);
      if (lookahead == 'P') ADVANCE(417);
      if (lookahead == 'R') ADVANCE(433);
      if (lookahead == 'T') ADVANCE(436);
      if (lookahead == 'V') ADVANCE(418);
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
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(443);
      if (lookahead == 'D') ADVANCE(432);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead == 'I') ADVANCE(429);
      if (lookahead == 'L') ADVANCE(444);
      if (lookahead == 'M') ADVANCE(415);
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead == 'R') ADVANCE(433);
      if (lookahead == 'S') ADVANCE(445);
      if (lookahead == 'T') ADVANCE(420);
      if (lookahead == 'V') ADVANCE(418);
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
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(443);
      if (lookahead == 'D') ADVANCE(432);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead == 'I') ADVANCE(429);
      if (lookahead == 'L') ADVANCE(444);
      if (lookahead == 'M') ADVANCE(415);
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead == 'R') ADVANCE(433);
      if (lookahead == 'T') ADVANCE(436);
      if (lookahead == 'V') ADVANCE(418);
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
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(443);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead == 'I') ADVANCE(442);
      if (lookahead == 'L') ADVANCE(444);
      if (lookahead == 'M') ADVANCE(415);
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead == 'R') ADVANCE(433);
      if (lookahead == 'V') ADVANCE(418);
      if (lookahead == 'a') ADVANCE(440);
      if (lookahead == 'w') ADVANCE(435);
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
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(443);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead == 'I') ADVANCE(442);
      if (lookahead == 'L') ADVANCE(444);
      if (lookahead == 'M') ADVANCE(415);
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead == 'R') ADVANCE(433);
      if (lookahead == 'V') ADVANCE(418);
      if (lookahead == 'a') ADVANCE(440);
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
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(443);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead == 'I') ADVANCE(442);
      if (lookahead == 'L') ADVANCE(444);
      if (lookahead == 'M') ADVANCE(415);
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead == 'R') ADVANCE(433);
      if (lookahead == 'V') ADVANCE(418);
      if (lookahead == 'o') ADVANCE(451);
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
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(443);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead == 'I') ADVANCE(442);
      if (lookahead == 'L') ADVANCE(444);
      if (lookahead == 'M') ADVANCE(415);
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead == 'R') ADVANCE(433);
      if (lookahead == 'V') ADVANCE(418);
      if (lookahead == 'w') ADVANCE(435);
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
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(443);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead == 'I') ADVANCE(442);
      if (lookahead == 'L') ADVANCE(444);
      if (lookahead == 'M') ADVANCE(415);
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead == 'R') ADVANCE(433);
      if (lookahead == 'V') ADVANCE(418);
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
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(443);
      if (lookahead == 'D') ADVANCE(432);
      if (lookahead == 'E') ADVANCE(455);
      if (lookahead == 'I') ADVANCE(442);
      if (lookahead == 'L') ADVANCE(444);
      if (lookahead == 'M') ADVANCE(415);
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead == 'R') ADVANCE(433);
      if (lookahead == 'S') ADVANCE(431);
      if (lookahead == 'V') ADVANCE(418);
      if (lookahead == 'X') ADVANCE(407);
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
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(443);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead == 'I') ADVANCE(442);
      if (lookahead == 'L') ADVANCE(444);
      if (lookahead == 'M') ADVANCE(415);
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead == 'R') ADVANCE(433);
      if (lookahead == 'V') ADVANCE(418);
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
      if (lookahead == 'O') ADVANCE(134);
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
      if (lookahead == '!') ADVANCE(505);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(470);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(468);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(483);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '>') ADVANCE(389);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '>') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'P') ADVANCE(50);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'S') ADVANCE(463);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'S') ADVANCE(463);
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'U') ADVANCE(464);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'U') ADVANCE(464);
      if (lookahead == 'e') ADVANCE(283);
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'U') ADVANCE(465);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(222);
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 'i') ADVANCE(263);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(164);
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'b') ADVANCE(87);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'b') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'b') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(165);
      if (lookahead == 'r') ADVANCE(388);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(368);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(368);
      if (lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(368);
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'h') ADVANCE(128);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'i') ADVANCE(263);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(388);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(213);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(73);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(212);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(264);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'y') ADVANCE(244);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(469);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_MS);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_SU);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_TU);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_cardinality_token1);
      if (lookahead == '.') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(468);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_cardinality_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(469);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(476);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(476);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(477);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(478);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '.') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(304);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(305);
      if (lookahead == 'Z') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '-') ADVANCE(309);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(304);
      if (lookahead == '.') ADVANCE(302);
      if (lookahead == 'Z') ADVANCE(487);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(304);
      if (lookahead == ':') ADVANCE(305);
      if (lookahead == 'Z') ADVANCE(487);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(304);
      if (lookahead == ':') ADVANCE(308);
      if (lookahead == 'Z') ADVANCE(487);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(304);
      if (lookahead == 'Z') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_T);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'U') ADVANCE(465);
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 'i') ADVANCE(263);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(495);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_example);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_preferred);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_extensible);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_Reference);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_Canonical);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_named);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_QMARK_BANG);
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
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 319},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 318},
  [14] = {.lex_state = 319},
  [15] = {.lex_state = 318},
  [16] = {.lex_state = 339},
  [17] = {.lex_state = 339},
  [18] = {.lex_state = 319},
  [19] = {.lex_state = 317},
  [20] = {.lex_state = 319},
  [21] = {.lex_state = 317},
  [22] = {.lex_state = 318},
  [23] = {.lex_state = 318},
  [24] = {.lex_state = 319},
  [25] = {.lex_state = 319},
  [26] = {.lex_state = 319},
  [27] = {.lex_state = 319},
  [28] = {.lex_state = 319},
  [29] = {.lex_state = 319},
  [30] = {.lex_state = 319},
  [31] = {.lex_state = 319},
  [32] = {.lex_state = 319},
  [33] = {.lex_state = 319},
  [34] = {.lex_state = 319},
  [35] = {.lex_state = 319},
  [36] = {.lex_state = 319},
  [37] = {.lex_state = 319},
  [38] = {.lex_state = 319},
  [39] = {.lex_state = 319},
  [40] = {.lex_state = 319},
  [41] = {.lex_state = 320},
  [42] = {.lex_state = 319},
  [43] = {.lex_state = 319},
  [44] = {.lex_state = 319},
  [45] = {.lex_state = 319},
  [46] = {.lex_state = 318},
  [47] = {.lex_state = 316},
  [48] = {.lex_state = 30},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 319},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 319},
  [53] = {.lex_state = 318},
  [54] = {.lex_state = 318},
  [55] = {.lex_state = 318},
  [56] = {.lex_state = 319},
  [57] = {.lex_state = 337},
  [58] = {.lex_state = 318},
  [59] = {.lex_state = 337},
  [60] = {.lex_state = 328},
  [61] = {.lex_state = 319},
  [62] = {.lex_state = 29},
  [63] = {.lex_state = 318},
  [64] = {.lex_state = 316},
  [65] = {.lex_state = 318},
  [66] = {.lex_state = 318},
  [67] = {.lex_state = 319},
  [68] = {.lex_state = 330},
  [69] = {.lex_state = 319},
  [70] = {.lex_state = 318},
  [71] = {.lex_state = 319},
  [72] = {.lex_state = 329},
  [73] = {.lex_state = 318},
  [74] = {.lex_state = 318},
  [75] = {.lex_state = 318},
  [76] = {.lex_state = 315},
  [77] = {.lex_state = 315},
  [78] = {.lex_state = 318},
  [79] = {.lex_state = 343},
  [80] = {.lex_state = 320},
  [81] = {.lex_state = 320},
  [82] = {.lex_state = 321},
  [83] = {.lex_state = 321},
  [84] = {.lex_state = 343},
  [85] = {.lex_state = 315},
  [86] = {.lex_state = 331},
  [87] = {.lex_state = 33},
  [88] = {.lex_state = 315},
  [89] = {.lex_state = 32},
  [90] = {.lex_state = 319},
  [91] = {.lex_state = 320},
  [92] = {.lex_state = 32},
  [93] = {.lex_state = 316},
  [94] = {.lex_state = 32},
  [95] = {.lex_state = 316},
  [96] = {.lex_state = 33},
  [97] = {.lex_state = 341},
  [98] = {.lex_state = 342},
  [99] = {.lex_state = 315},
  [100] = {.lex_state = 341},
  [101] = {.lex_state = 342},
  [102] = {.lex_state = 319},
  [103] = {.lex_state = 319},
  [104] = {.lex_state = 319},
  [105] = {.lex_state = 319},
  [106] = {.lex_state = 319},
  [107] = {.lex_state = 319},
  [108] = {.lex_state = 322},
  [109] = {.lex_state = 13},
  [110] = {.lex_state = 322},
  [111] = {.lex_state = 333},
  [112] = {.lex_state = 333},
  [113] = {.lex_state = 319},
  [114] = {.lex_state = 319},
  [115] = {.lex_state = 316},
  [116] = {.lex_state = 316},
  [117] = {.lex_state = 319},
  [118] = {.lex_state = 344},
  [119] = {.lex_state = 344},
  [120] = {.lex_state = 319},
  [121] = {.lex_state = 350},
  [122] = {.lex_state = 319},
  [123] = {.lex_state = 319},
  [124] = {.lex_state = 350},
  [125] = {.lex_state = 319},
  [126] = {.lex_state = 319},
  [127] = {.lex_state = 325},
  [128] = {.lex_state = 325},
  [129] = {.lex_state = 319},
  [130] = {.lex_state = 319},
  [131] = {.lex_state = 323},
  [132] = {.lex_state = 318},
  [133] = {.lex_state = 340},
  [134] = {.lex_state = 332},
  [135] = {.lex_state = 332},
  [136] = {.lex_state = 340},
  [137] = {.lex_state = 319},
  [138] = {.lex_state = 345},
  [139] = {.lex_state = 318},
  [140] = {.lex_state = 319},
  [141] = {.lex_state = 319},
  [142] = {.lex_state = 323},
  [143] = {.lex_state = 345},
  [144] = {.lex_state = 338},
  [145] = {.lex_state = 326},
  [146] = {.lex_state = 324},
  [147] = {.lex_state = 318},
  [148] = {.lex_state = 324},
  [149] = {.lex_state = 318},
  [150] = {.lex_state = 319},
  [151] = {.lex_state = 319},
  [152] = {.lex_state = 318},
  [153] = {.lex_state = 21},
  [154] = {.lex_state = 21},
  [155] = {.lex_state = 319},
  [156] = {.lex_state = 326},
  [157] = {.lex_state = 338},
  [158] = {.lex_state = 346},
  [159] = {.lex_state = 319},
  [160] = {.lex_state = 319},
  [161] = {.lex_state = 348},
  [162] = {.lex_state = 348},
  [163] = {.lex_state = 346},
  [164] = {.lex_state = 319},
  [165] = {.lex_state = 6},
  [166] = {.lex_state = 327},
  [167] = {.lex_state = 319},
  [168] = {.lex_state = 319},
  [169] = {.lex_state = 319},
  [170] = {.lex_state = 347},
  [171] = {.lex_state = 347},
  [172] = {.lex_state = 319},
  [173] = {.lex_state = 319},
  [174] = {.lex_state = 34},
  [175] = {.lex_state = 319},
  [176] = {.lex_state = 319},
  [177] = {.lex_state = 333},
  [178] = {.lex_state = 319},
  [179] = {.lex_state = 319},
  [180] = {.lex_state = 319},
  [181] = {.lex_state = 333},
  [182] = {.lex_state = 335},
  [183] = {.lex_state = 319},
  [184] = {.lex_state = 335},
  [185] = {.lex_state = 319},
  [186] = {.lex_state = 319},
  [187] = {.lex_state = 319},
  [188] = {.lex_state = 319},
  [189] = {.lex_state = 319},
  [190] = {.lex_state = 319},
  [191] = {.lex_state = 321},
  [192] = {.lex_state = 321},
  [193] = {.lex_state = 29},
  [194] = {.lex_state = 319},
  [195] = {.lex_state = 327},
  [196] = {.lex_state = 319},
  [197] = {.lex_state = 336},
  [198] = {.lex_state = 319},
  [199] = {.lex_state = 319},
  [200] = {.lex_state = 319},
  [201] = {.lex_state = 319},
  [202] = {.lex_state = 319},
  [203] = {.lex_state = 319},
  [204] = {.lex_state = 319},
  [205] = {.lex_state = 319},
  [206] = {.lex_state = 319},
  [207] = {.lex_state = 30},
  [208] = {.lex_state = 319},
  [209] = {.lex_state = 319},
  [210] = {.lex_state = 30},
  [211] = {.lex_state = 34},
  [212] = {.lex_state = 319},
  [213] = {.lex_state = 319},
  [214] = {.lex_state = 319},
  [215] = {.lex_state = 333},
  [216] = {.lex_state = 319},
  [217] = {.lex_state = 319},
  [218] = {.lex_state = 319},
  [219] = {.lex_state = 319},
  [220] = {.lex_state = 34},
  [221] = {.lex_state = 333},
  [222] = {.lex_state = 319},
  [223] = {.lex_state = 349},
  [224] = {.lex_state = 319},
  [225] = {.lex_state = 319},
  [226] = {.lex_state = 349},
  [227] = {.lex_state = 34},
  [228] = {.lex_state = 319},
  [229] = {.lex_state = 334},
  [230] = {.lex_state = 334},
  [231] = {.lex_state = 319},
  [232] = {.lex_state = 319},
  [233] = {.lex_state = 319},
  [234] = {.lex_state = 319},
  [235] = {.lex_state = 319},
  [236] = {.lex_state = 319},
  [237] = {.lex_state = 319},
  [238] = {.lex_state = 319},
  [239] = {.lex_state = 319},
  [240] = {.lex_state = 34},
  [241] = {.lex_state = 34},
  [242] = {.lex_state = 34},
  [243] = {.lex_state = 34},
  [244] = {.lex_state = 34},
  [245] = {.lex_state = 319},
  [246] = {.lex_state = 319},
  [247] = {.lex_state = 34},
  [248] = {.lex_state = 34},
  [249] = {.lex_state = 34},
  [250] = {.lex_state = 34},
  [251] = {.lex_state = 319},
  [252] = {.lex_state = 319},
  [253] = {.lex_state = 34},
  [254] = {.lex_state = 34},
  [255] = {.lex_state = 351},
  [256] = {.lex_state = 34},
  [257] = {.lex_state = 319},
  [258] = {.lex_state = 34},
  [259] = {.lex_state = 319},
  [260] = {.lex_state = 29},
  [261] = {.lex_state = 319},
  [262] = {.lex_state = 34},
  [263] = {.lex_state = 319},
  [264] = {.lex_state = 319},
  [265] = {.lex_state = 34},
  [266] = {.lex_state = 34},
  [267] = {.lex_state = 34},
  [268] = {.lex_state = 34},
  [269] = {.lex_state = 34},
  [270] = {.lex_state = 34},
  [271] = {.lex_state = 34},
  [272] = {.lex_state = 34},
  [273] = {.lex_state = 34},
  [274] = {.lex_state = 34},
  [275] = {.lex_state = 319},
  [276] = {.lex_state = 319},
  [277] = {.lex_state = 319},
  [278] = {.lex_state = 34},
  [279] = {.lex_state = 34},
  [280] = {.lex_state = 319},
  [281] = {.lex_state = 34},
  [282] = {.lex_state = 319},
  [283] = {.lex_state = 351},
  [284] = {.lex_state = 319},
  [285] = {.lex_state = 319},
  [286] = {.lex_state = 34},
  [287] = {.lex_state = 319},
  [288] = {.lex_state = 319},
  [289] = {.lex_state = 319},
  [290] = {.lex_state = 319},
  [291] = {.lex_state = 319},
  [292] = {.lex_state = 319},
  [293] = {.lex_state = 319},
  [294] = {.lex_state = 319},
  [295] = {.lex_state = 319},
  [296] = {.lex_state = 319},
  [297] = {.lex_state = 319},
  [298] = {.lex_state = 319},
  [299] = {.lex_state = 319},
  [300] = {.lex_state = 319},
  [301] = {.lex_state = 319},
  [302] = {.lex_state = 319},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 319},
  [305] = {.lex_state = 319},
  [306] = {.lex_state = 319},
  [307] = {.lex_state = 319},
  [308] = {.lex_state = 319},
  [309] = {.lex_state = 319},
  [310] = {.lex_state = 319},
  [311] = {.lex_state = 319},
  [312] = {.lex_state = 319},
  [313] = {.lex_state = 319},
  [314] = {.lex_state = 319},
  [315] = {.lex_state = 319},
  [316] = {.lex_state = 319},
  [317] = {.lex_state = 319},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 15},
  [320] = {.lex_state = 319},
  [321] = {.lex_state = 319},
  [322] = {.lex_state = 318},
  [323] = {.lex_state = 31},
  [324] = {.lex_state = 31},
  [325] = {.lex_state = 318},
  [326] = {.lex_state = 17},
  [327] = {.lex_state = 17},
  [328] = {.lex_state = 16},
  [329] = {.lex_state = 22},
  [330] = {.lex_state = 318},
  [331] = {.lex_state = 35},
  [332] = {.lex_state = 35},
  [333] = {.lex_state = 149},
  [334] = {.lex_state = 36},
  [335] = {.lex_state = 36},
  [336] = {.lex_state = 23},
  [337] = {.lex_state = 235},
  [338] = {.lex_state = 14},
  [339] = {.lex_state = 27},
  [340] = {.lex_state = 23},
  [341] = {.lex_state = 14},
  [342] = {.lex_state = 19},
  [343] = {.lex_state = 17},
  [344] = {.lex_state = 8},
  [345] = {.lex_state = 8},
  [346] = {.lex_state = 17},
  [347] = {.lex_state = 17},
  [348] = {.lex_state = 19},
  [349] = {.lex_state = 17},
  [350] = {.lex_state = 17},
  [351] = {.lex_state = 7},
  [352] = {.lex_state = 7},
  [353] = {.lex_state = 10},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 319},
  [356] = {.lex_state = 7},
  [357] = {.lex_state = 20},
  [358] = {.lex_state = 20},
  [359] = {.lex_state = 7},
  [360] = {.lex_state = 319},
  [361] = {.lex_state = 319},
  [362] = {.lex_state = 10},
  [363] = {.lex_state = 12},
  [364] = {.lex_state = 7},
  [365] = {.lex_state = 7},
  [366] = {.lex_state = 12},
  [367] = {.lex_state = 12},
  [368] = {.lex_state = 5},
  [369] = {.lex_state = 7},
  [370] = {.lex_state = 319},
  [371] = {.lex_state = 319},
  [372] = {.lex_state = 9},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 24},
  [377] = {.lex_state = 9},
  [378] = {.lex_state = 5},
  [379] = {.lex_state = 24},
  [380] = {.lex_state = 319},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 294},
  [385] = {.lex_state = 294},
  [386] = {.lex_state = 294},
  [387] = {.lex_state = 17},
  [388] = {.lex_state = 17},
  [389] = {.lex_state = 27},
  [390] = {.lex_state = 27},
  [391] = {.lex_state = 294},
  [392] = {.lex_state = 319},
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
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 294},
  [408] = {.lex_state = 294},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 294},
  [411] = {.lex_state = 294},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 294},
  [414] = {.lex_state = 18},
  [415] = {.lex_state = 294},
  [416] = {.lex_state = 294},
  [417] = {.lex_state = 294},
  [418] = {.lex_state = 294},
  [419] = {.lex_state = 27},
  [420] = {.lex_state = 294},
  [421] = {.lex_state = 294},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 18},
  [424] = {.lex_state = 319},
  [425] = {.lex_state = 294},
  [426] = {.lex_state = 294},
  [427] = {.lex_state = 294},
  [428] = {.lex_state = 294},
  [429] = {.lex_state = 294},
  [430] = {.lex_state = 294},
  [431] = {.lex_state = 294},
  [432] = {.lex_state = 294},
  [433] = {.lex_state = 294},
  [434] = {.lex_state = 294},
  [435] = {.lex_state = 319},
  [436] = {.lex_state = 294},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 11},
  [439] = {.lex_state = 11},
  [440] = {.lex_state = 317},
  [441] = {.lex_state = 294},
  [442] = {.lex_state = 294},
  [443] = {.lex_state = 294},
  [444] = {.lex_state = 294},
  [445] = {.lex_state = 18},
  [446] = {.lex_state = 317},
  [447] = {.lex_state = 319},
  [448] = {.lex_state = 319},
  [449] = {.lex_state = 319},
  [450] = {.lex_state = 319},
  [451] = {.lex_state = 319},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 17},
  [456] = {.lex_state = 27},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 319},
  [459] = {.lex_state = 319},
  [460] = {.lex_state = 0},
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
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 319},
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
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 336},
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
  [517] = {.lex_state = 0},
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
    [sym_doc] = STATE(480),
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
    STATE(3), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(26), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(290), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(137), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(294), 10,
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
    STATE(30), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(52), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(290), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(137), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(294), 10,
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
    STATE(32), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(290), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(137), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(294), 10,
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
    STATE(27), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(52), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(290), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(137), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(294), 10,
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
    STATE(9), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(38), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(137), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(294), 10,
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
    STATE(44), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(52), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(137), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(294), 10,
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
  [350] = 19,
    ACTIONS(53), 1,
      anon_sym_POUND,
    ACTIONS(55), 1,
      aux_sym_sequence_token1,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(61), 1,
      sym_number,
    ACTIONS(63), 1,
      sym_date,
    ACTIONS(65), 1,
      sym_time,
    ACTIONS(67), 1,
      anon_sym_Reference,
    ACTIONS(69), 1,
      anon_sym_Canonical,
    STATE(117), 1,
      sym_code,
    STATE(134), 1,
      aux_sym_sequence_repeat1,
    STATE(194), 1,
      sym_reference,
    STATE(204), 1,
      sym_quantity,
    STATE(232), 1,
      sym_sequence,
    STATE(259), 1,
      sym_value,
    STATE(499), 1,
      sym_ratio_part,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(49), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    STATE(263), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [423] = 10,
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
    STATE(43), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(52), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(137), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(294), 10,
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
    ACTIONS(71), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [478] = 19,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(63), 1,
      sym_date,
    ACTIONS(65), 1,
      sym_time,
    ACTIONS(67), 1,
      anon_sym_Reference,
    ACTIONS(69), 1,
      anon_sym_Canonical,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(75), 1,
      aux_sym_sequence_token1,
    ACTIONS(77), 1,
      sym_number,
    STATE(117), 1,
      sym_code,
    STATE(177), 1,
      aux_sym_sequence_repeat1,
    STATE(194), 1,
      sym_reference,
    STATE(204), 1,
      sym_quantity,
    STATE(261), 1,
      sym_sequence,
    STATE(308), 1,
      sym_value,
    STATE(466), 1,
      sym_ratio_part,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(49), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    STATE(263), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [551] = 19,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(63), 1,
      sym_date,
    ACTIONS(65), 1,
      sym_time,
    ACTIONS(67), 1,
      anon_sym_Reference,
    ACTIONS(69), 1,
      anon_sym_Canonical,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(75), 1,
      aux_sym_sequence_token1,
    ACTIONS(77), 1,
      sym_number,
    STATE(117), 1,
      sym_code,
    STATE(177), 1,
      aux_sym_sequence_repeat1,
    STATE(194), 1,
      sym_reference,
    STATE(204), 1,
      sym_quantity,
    STATE(261), 1,
      sym_sequence,
    STATE(310), 1,
      sym_value,
    STATE(466), 1,
      sym_ratio_part,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(49), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    STATE(263), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [624] = 19,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(63), 1,
      sym_date,
    ACTIONS(65), 1,
      sym_time,
    ACTIONS(67), 1,
      anon_sym_Reference,
    ACTIONS(69), 1,
      anon_sym_Canonical,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(75), 1,
      aux_sym_sequence_token1,
    ACTIONS(77), 1,
      sym_number,
    STATE(117), 1,
      sym_code,
    STATE(177), 1,
      aux_sym_sequence_repeat1,
    STATE(194), 1,
      sym_reference,
    STATE(204), 1,
      sym_quantity,
    STATE(261), 1,
      sym_sequence,
    STATE(292), 1,
      sym_value,
    STATE(466), 1,
      sym_ratio_part,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(49), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    STATE(263), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [697] = 16,
    ACTIONS(81), 1,
      anon_sym_EQ,
    ACTIONS(83), 1,
      anon_sym_insert,
    ACTIONS(85), 1,
      anon_sym_from,
    ACTIONS(87), 1,
      anon_sym_contains,
    ACTIONS(89), 1,
      anon_sym_and,
    ACTIONS(91), 1,
      anon_sym_obeys,
    ACTIONS(93), 1,
      anon_sym_only,
    ACTIONS(95), 1,
      anon_sym_CARET,
    ACTIONS(99), 1,
      aux_sym_cardinality_token1,
    ACTIONS(101), 1,
      anon_sym_DOT_DOT,
    STATE(48), 1,
      sym_cardinality,
    STATE(322), 1,
      aux_sym_flag_rule_repeat1,
    STATE(516), 1,
      sym_caret_path,
    STATE(70), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(97), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
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
  [763] = 2,
    ACTIONS(105), 1,
      anon_sym_Instance,
    ACTIONS(103), 30,
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
  [799] = 13,
    ACTIONS(81), 1,
      anon_sym_EQ,
    ACTIONS(83), 1,
      anon_sym_insert,
    ACTIONS(85), 1,
      anon_sym_from,
    ACTIONS(87), 1,
      anon_sym_contains,
    ACTIONS(89), 1,
      anon_sym_and,
    ACTIONS(91), 1,
      anon_sym_obeys,
    ACTIONS(93), 1,
      anon_sym_only,
    ACTIONS(95), 1,
      anon_sym_CARET,
    STATE(322), 1,
      aux_sym_flag_rule_repeat1,
    STATE(516), 1,
      sym_caret_path,
    STATE(70), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(97), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
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
  [856] = 4,
    ACTIONS(109), 1,
      aux_sym_sequence_token1,
    ACTIONS(111), 1,
      aux_sym_cardinality_token1,
    STATE(17), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(107), 27,
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
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_BANG,
  [895] = 4,
    ACTIONS(115), 1,
      aux_sym_sequence_token1,
    ACTIONS(118), 1,
      aux_sym_cardinality_token1,
    STATE(17), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(113), 27,
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
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_BANG,
  [934] = 11,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(122), 1,
      anon_sym_Id,
    ACTIONS(124), 1,
      anon_sym_Source,
    ACTIONS(126), 1,
      anon_sym_Target,
    ACTIONS(128), 1,
      anon_sym_STAR,
    STATE(20), 2,
      sym_mapping_metadata,
      aux_sym_mapping_repeat1,
    STATE(120), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(311), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    STATE(129), 5,
      sym_description,
      sym_id,
      sym_source,
      sym_target,
      sym_title,
    ACTIONS(120), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [986] = 2,
    ACTIONS(132), 2,
      anon_sym_Instance,
      anon_sym_DQUOTE,
    ACTIONS(130), 27,
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
  [1020] = 11,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(122), 1,
      anon_sym_Id,
    ACTIONS(124), 1,
      anon_sym_Source,
    ACTIONS(126), 1,
      anon_sym_Target,
    ACTIONS(128), 1,
      anon_sym_STAR,
    STATE(37), 2,
      sym_mapping_metadata,
      aux_sym_mapping_repeat1,
    STATE(126), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(311), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    STATE(129), 5,
      sym_description,
      sym_id,
      sym_source,
      sym_target,
      sym_title,
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
  [1072] = 2,
    ACTIONS(138), 2,
      anon_sym_Instance,
      anon_sym_DQUOTE,
    ACTIONS(136), 27,
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
  [1106] = 2,
    ACTIONS(142), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
    ACTIONS(140), 26,
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
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [1139] = 2,
    ACTIONS(103), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
    ACTIONS(140), 26,
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
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [1172] = 2,
    ACTIONS(147), 1,
      anon_sym_Instance,
    ACTIONS(145), 26,
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
  [1204] = 11,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(151), 1,
      anon_sym_Instance,
    ACTIONS(153), 1,
      anon_sym_InstanceOf,
    ACTIONS(155), 1,
      anon_sym_Usage,
    ACTIONS(157), 1,
      anon_sym_STAR,
    STATE(50), 2,
      sym_instance_metadata,
      aux_sym_instance_repeat1,
    STATE(113), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(301), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    STATE(140), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(149), 10,
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
  [1254] = 5,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(28), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(290), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(294), 10,
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
  [1292] = 5,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(28), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(290), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(294), 10,
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
  [1330] = 5,
    ACTIONS(163), 1,
      anon_sym_STAR,
    STATE(28), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(290), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(294), 10,
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
  [1368] = 11,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(153), 1,
      anon_sym_InstanceOf,
    ACTIONS(155), 1,
      anon_sym_Usage,
    ACTIONS(157), 1,
      anon_sym_STAR,
    ACTIONS(168), 1,
      anon_sym_Instance,
    STATE(25), 2,
      sym_instance_metadata,
      aux_sym_instance_repeat1,
    STATE(102), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(301), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    STATE(140), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(166), 10,
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
  [1418] = 5,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(28), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(290), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(294), 10,
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
  [1456] = 2,
    ACTIONS(174), 1,
      anon_sym_Instance,
    ACTIONS(172), 26,
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
  [1488] = 5,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(28), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(290), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(294), 10,
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
  [1526] = 9,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(178), 1,
      anon_sym_Id,
    ACTIONS(180), 1,
      anon_sym_STAR,
    STATE(67), 2,
      sym_vs_metadata,
      aux_sym_valueset_repeat1,
    STATE(122), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(187), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(307), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
    ACTIONS(176), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1570] = 9,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(178), 1,
      anon_sym_Id,
    ACTIONS(184), 1,
      anon_sym_STAR,
    STATE(71), 2,
      sym_cs_metadata,
      aux_sym_codesystem_repeat1,
    STATE(103), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(196), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(312), 3,
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
  [1614] = 9,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(178), 1,
      anon_sym_Id,
    ACTIONS(180), 1,
      anon_sym_STAR,
    STATE(33), 2,
      sym_vs_metadata,
      aux_sym_valueset_repeat1,
    STATE(107), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(187), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(307), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
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
  [1658] = 9,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(178), 1,
      anon_sym_Id,
    ACTIONS(184), 1,
      anon_sym_STAR,
    STATE(34), 2,
      sym_cs_metadata,
      aux_sym_codesystem_repeat1,
    STATE(105), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(196), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(312), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
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
  [1702] = 8,
    ACTIONS(192), 1,
      anon_sym_Description,
    ACTIONS(195), 1,
      anon_sym_Id,
    ACTIONS(198), 1,
      anon_sym_Source,
    ACTIONS(201), 1,
      anon_sym_Target,
    ACTIONS(204), 1,
      anon_sym_Title,
    STATE(37), 2,
      sym_mapping_metadata,
      aux_sym_mapping_repeat1,
    STATE(129), 5,
      sym_description,
      sym_id,
      sym_source,
      sym_target,
      sym_title,
    ACTIONS(190), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [1743] = 4,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(42), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(294), 10,
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
    ACTIONS(71), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1776] = 2,
    ACTIONS(209), 1,
      anon_sym_Instance,
    ACTIONS(207), 23,
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
  [1805] = 2,
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
  [1834] = 10,
    ACTIONS(219), 1,
      anon_sym_POUND,
    ACTIONS(221), 1,
      aux_sym_sequence_token1,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    STATE(117), 1,
      sym_code,
    STATE(245), 1,
      sym_vs_filter_value,
    STATE(387), 1,
      aux_sym_sequence_repeat1,
    STATE(515), 1,
      sym_sequence,
    ACTIONS(217), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(246), 2,
      sym_code_string,
      sym_string,
    ACTIONS(215), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [1879] = 4,
    ACTIONS(227), 1,
      anon_sym_STAR,
    STATE(42), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(294), 10,
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
    ACTIONS(225), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1912] = 4,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(42), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(294), 10,
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
  [1945] = 4,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(42), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(294), 10,
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
  [1978] = 2,
    ACTIONS(236), 1,
      anon_sym_Instance,
    ACTIONS(234), 22,
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
  [2006] = 1,
    ACTIONS(140), 23,
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
      anon_sym_and,
      anon_sym_DASH_GT,
      anon_sym_CARET,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [2032] = 11,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(221), 1,
      aux_sym_sequence_token1,
    ACTIONS(240), 1,
      anon_sym_insert,
    ACTIONS(242), 1,
      anon_sym_POUND,
    STATE(152), 1,
      sym_string,
    STATE(300), 1,
      sym_multiline_string,
    STATE(387), 1,
      aux_sym_sequence_repeat1,
    STATE(507), 1,
      sym_sequence,
    STATE(64), 2,
      sym_code,
      aux_sym_code_insert_rule_repeat1,
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
      anon_sym_STAR,
  [2078] = 14,
    ACTIONS(67), 1,
      anon_sym_Reference,
    ACTIONS(69), 1,
      anon_sym_Canonical,
    ACTIONS(244), 1,
      anon_sym_contentReference,
    ACTIONS(246), 1,
      aux_sym_sequence_token1,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(252), 1,
      anon_sym_QMARK_BANG,
    STATE(14), 1,
      sym_sequence,
    STATE(198), 1,
      sym_reference,
    STATE(361), 1,
      sym_target_type,
    STATE(362), 1,
      aux_sym_sequence_repeat1,
    STATE(62), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    STATE(217), 2,
      sym_name,
      sym_canonical,
    ACTIONS(49), 3,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
    ACTIONS(248), 5,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [2129] = 12,
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
  [2176] = 8,
    ACTIONS(288), 1,
      anon_sym_Instance,
    ACTIONS(290), 1,
      anon_sym_Description,
    ACTIONS(293), 1,
      anon_sym_InstanceOf,
    ACTIONS(296), 1,
      anon_sym_Title,
    ACTIONS(299), 1,
      anon_sym_Usage,
    STATE(50), 2,
      sym_instance_metadata,
      aux_sym_instance_repeat1,
    STATE(140), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(286), 11,
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
  [2215] = 12,
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
    ACTIONS(302), 1,
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
  [2262] = 7,
    ACTIONS(306), 1,
      anon_sym_Description,
    ACTIONS(309), 1,
      anon_sym_Id,
    ACTIONS(312), 1,
      anon_sym_Parent,
    ACTIONS(315), 1,
      anon_sym_Title,
    STATE(52), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(137), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    ACTIONS(304), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2299] = 3,
    STATE(58), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(97), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
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
      anon_sym_and,
  [2327] = 3,
    STATE(55), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(97), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
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
      anon_sym_and,
  [2355] = 3,
    STATE(55), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(324), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
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
      anon_sym_and,
  [2383] = 7,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(329), 1,
      anon_sym_Expression,
    ACTIONS(331), 1,
      anon_sym_Severity,
    ACTIONS(333), 1,
      anon_sym_XPath,
    STATE(61), 2,
      sym_invariant_metadata,
      aux_sym_invariant_repeat1,
    STATE(179), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
    ACTIONS(327), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [2419] = 3,
    ACTIONS(337), 1,
      anon_sym_STAR,
    ACTIONS(339), 2,
      aux_sym_cardinality_token1,
      anon_sym_STAR2,
    ACTIONS(335), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [2447] = 3,
    STATE(55), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(97), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(341), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2475] = 3,
    ACTIONS(345), 1,
      anon_sym_STAR,
    ACTIONS(347), 2,
      aux_sym_cardinality_token1,
      anon_sym_STAR2,
    ACTIONS(343), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [2503] = 8,
    ACTIONS(221), 1,
      aux_sym_sequence_token1,
    ACTIONS(352), 1,
      anon_sym_COLON,
    ACTIONS(354), 1,
      anon_sym_POUND,
    ACTIONS(356), 1,
      anon_sym_SQUOTE,
    STATE(387), 1,
      aux_sym_sequence_repeat1,
    STATE(512), 1,
      sym_sequence,
    STATE(155), 2,
      sym_code,
      sym_unit,
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
      anon_sym_LPAREN,
  [2541] = 7,
    ACTIONS(360), 1,
      anon_sym_Description,
    ACTIONS(363), 1,
      anon_sym_Expression,
    ACTIONS(366), 1,
      anon_sym_Severity,
    ACTIONS(369), 1,
      anon_sym_XPath,
    STATE(61), 2,
      sym_invariant_metadata,
      aux_sym_invariant_repeat1,
    STATE(179), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
    ACTIONS(358), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [2577] = 13,
    ACTIONS(67), 1,
      anon_sym_Reference,
    ACTIONS(69), 1,
      anon_sym_Canonical,
    ACTIONS(246), 1,
      aux_sym_sequence_token1,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(252), 1,
      anon_sym_QMARK_BANG,
    STATE(14), 1,
      sym_sequence,
    STATE(198), 1,
      sym_reference,
    STATE(362), 1,
      aux_sym_sequence_repeat1,
    STATE(380), 1,
      sym_target_type,
    STATE(193), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    STATE(217), 2,
      sym_name,
      sym_canonical,
    ACTIONS(49), 3,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
    ACTIONS(248), 5,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [2625] = 3,
    STATE(54), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(97), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(372), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2653] = 7,
    ACTIONS(376), 1,
      anon_sym_POUND,
    ACTIONS(379), 1,
      aux_sym_sequence_token1,
    ACTIONS(382), 1,
      anon_sym_DQUOTE,
    STATE(387), 1,
      aux_sym_sequence_repeat1,
    STATE(507), 1,
      sym_sequence,
    STATE(64), 2,
      sym_code,
      aux_sym_code_insert_rule_repeat1,
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
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [2689] = 3,
    STATE(55), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(97), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(384), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2716] = 3,
    STATE(65), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(97), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(386), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2743] = 6,
    ACTIONS(390), 1,
      anon_sym_Description,
    ACTIONS(393), 1,
      anon_sym_Id,
    ACTIONS(396), 1,
      anon_sym_Title,
    STATE(67), 2,
      sym_vs_metadata,
      aux_sym_valueset_repeat1,
    STATE(187), 3,
      sym_description,
      sym_id,
      sym_title,
    ACTIONS(388), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2776] = 8,
    ACTIONS(221), 1,
      aux_sym_sequence_token1,
    ACTIONS(352), 1,
      anon_sym_COLON,
    ACTIONS(356), 1,
      anon_sym_SQUOTE,
    ACTIONS(399), 1,
      anon_sym_POUND,
    STATE(387), 1,
      aux_sym_sequence_repeat1,
    STATE(511), 1,
      sym_sequence,
    STATE(155), 2,
      sym_code,
      sym_unit,
    ACTIONS(349), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2813] = 2,
    ACTIONS(403), 1,
      anon_sym_Instance,
    ACTIONS(401), 19,
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
  [2838] = 3,
    STATE(55), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(97), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(405), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2865] = 6,
    ACTIONS(409), 1,
      anon_sym_Description,
    ACTIONS(412), 1,
      anon_sym_Id,
    ACTIONS(415), 1,
      anon_sym_Title,
    STATE(71), 2,
      sym_cs_metadata,
      aux_sym_codesystem_repeat1,
    STATE(196), 3,
      sym_description,
      sym_id,
      sym_title,
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
  [2898] = 7,
    ACTIONS(53), 1,
      anon_sym_POUND,
    ACTIONS(221), 1,
      aux_sym_sequence_token1,
    ACTIONS(356), 1,
      anon_sym_SQUOTE,
    STATE(387), 1,
      aux_sym_sequence_repeat1,
    STATE(514), 1,
      sym_sequence,
    STATE(155), 2,
      sym_code,
      sym_unit,
    ACTIONS(352), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2933] = 3,
    STATE(55), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(97), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(418), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2960] = 1,
    ACTIONS(420), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [2982] = 1,
    ACTIONS(343), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [3004] = 4,
    ACTIONS(95), 1,
      anon_sym_CARET,
    STATE(475), 1,
      sym_caret_path,
    ACTIONS(424), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
    ACTIONS(422), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3032] = 4,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(426), 1,
      aux_sym_sequence_token1,
    STATE(85), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(107), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3060] = 1,
    ACTIONS(429), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [3082] = 3,
    ACTIONS(431), 1,
      aux_sym_sequence_token1,
    STATE(84), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(107), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3108] = 3,
    ACTIONS(433), 1,
      aux_sym_sequence_token1,
    STATE(80), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(113), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3134] = 3,
    ACTIONS(436), 1,
      aux_sym_sequence_token1,
    STATE(80), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(107), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3160] = 8,
    ACTIONS(221), 1,
      aux_sym_sequence_token1,
    ACTIONS(441), 1,
      anon_sym_POUND,
    ACTIONS(443), 1,
      anon_sym_DQUOTE,
    STATE(112), 1,
      sym_string,
    STATE(289), 1,
      sym_code,
    STATE(387), 1,
      aux_sym_sequence_repeat1,
    STATE(510), 1,
      sym_sequence,
    ACTIONS(439), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [3196] = 8,
    ACTIONS(221), 1,
      aux_sym_sequence_token1,
    ACTIONS(441), 1,
      anon_sym_POUND,
    ACTIONS(443), 1,
      anon_sym_DQUOTE,
    STATE(111), 1,
      sym_string,
    STATE(293), 1,
      sym_code,
    STATE(387), 1,
      aux_sym_sequence_repeat1,
    STATE(510), 1,
      sym_sequence,
    ACTIONS(445), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [3232] = 3,
    ACTIONS(447), 1,
      aux_sym_sequence_token1,
    STATE(84), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(113), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3258] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(450), 1,
      aux_sym_sequence_token1,
    STATE(85), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(113), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3286] = 7,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(221), 1,
      aux_sym_sequence_token1,
    ACTIONS(356), 1,
      anon_sym_SQUOTE,
    STATE(387), 1,
      aux_sym_sequence_repeat1,
    STATE(513), 1,
      sym_sequence,
    STATE(155), 2,
      sym_code,
      sym_unit,
    ACTIONS(352), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [3320] = 12,
    ACTIONS(95), 1,
      anon_sym_CARET,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(453), 1,
      anon_sym_insert,
    ACTIONS(455), 1,
      anon_sym_obeys,
    ACTIONS(457), 1,
      anon_sym_system,
    ACTIONS(459), 1,
      aux_sym_sequence_token1,
    STATE(13), 1,
      sym_path,
    STATE(16), 1,
      aux_sym_sequence_repeat1,
    STATE(22), 1,
      sym_sequence,
    STATE(435), 1,
      sym_name,
    STATE(476), 1,
      sym_caret_path,
    ACTIONS(49), 7,
      anon_sym_codes,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [3363] = 2,
    ACTIONS(174), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
    ACTIONS(172), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3386] = 10,
    ACTIONS(67), 1,
      anon_sym_Reference,
    ACTIONS(69), 1,
      anon_sym_Canonical,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(461), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(171), 1,
      aux_sym_sequence_repeat1,
    STATE(198), 1,
      sym_reference,
    STATE(219), 1,
      sym_target_type,
    STATE(217), 2,
      sym_name,
      sym_canonical,
    ACTIONS(49), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [3425] = 1,
    ACTIONS(463), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3446] = 2,
    ACTIONS(467), 1,
      aux_sym_sequence_token1,
    ACTIONS(465), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3469] = 10,
    ACTIONS(67), 1,
      anon_sym_Reference,
    ACTIONS(69), 1,
      anon_sym_Canonical,
    ACTIONS(246), 1,
      aux_sym_sequence_token1,
    ACTIONS(250), 1,
      sym_number,
    STATE(14), 1,
      sym_sequence,
    STATE(198), 1,
      sym_reference,
    STATE(239), 1,
      sym_target_type,
    STATE(362), 1,
      aux_sym_sequence_repeat1,
    STATE(217), 2,
      sym_name,
      sym_canonical,
    ACTIONS(49), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [3508] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(469), 1,
      aux_sym_sequence_token1,
    STATE(93), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(113), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3535] = 10,
    ACTIONS(67), 1,
      anon_sym_Reference,
    ACTIONS(69), 1,
      anon_sym_Canonical,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(461), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(171), 1,
      aux_sym_sequence_repeat1,
    STATE(198), 1,
      sym_reference,
    STATE(239), 1,
      sym_target_type,
    STATE(217), 2,
      sym_name,
      sym_canonical,
    ACTIONS(49), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [3574] = 4,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(472), 1,
      aux_sym_sequence_token1,
    STATE(93), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(107), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3601] = 12,
    ACTIONS(95), 1,
      anon_sym_CARET,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(453), 1,
      anon_sym_insert,
    ACTIONS(455), 1,
      anon_sym_obeys,
    ACTIONS(459), 1,
      aux_sym_sequence_token1,
    ACTIONS(475), 1,
      anon_sym_system,
    STATE(15), 1,
      sym_path,
    STATE(16), 1,
      aux_sym_sequence_repeat1,
    STATE(23), 1,
      sym_sequence,
    STATE(435), 1,
      sym_name,
    STATE(476), 1,
      sym_caret_path,
    ACTIONS(49), 7,
      anon_sym_codes,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [3644] = 4,
    ACTIONS(111), 1,
      anon_sym_Instance,
    ACTIONS(477), 1,
      aux_sym_sequence_token1,
    STATE(100), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(107), 15,
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
  [3671] = 3,
    ACTIONS(479), 1,
      aux_sym_sequence_token1,
    STATE(101), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(107), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3696] = 2,
    ACTIONS(147), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
    ACTIONS(145), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3719] = 4,
    ACTIONS(118), 1,
      anon_sym_Instance,
    ACTIONS(481), 1,
      aux_sym_sequence_token1,
    STATE(100), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(113), 15,
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
  [3746] = 3,
    ACTIONS(484), 1,
      aux_sym_sequence_token1,
    STATE(101), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(113), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3771] = 4,
    ACTIONS(157), 1,
      anon_sym_STAR,
    STATE(114), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(301), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    ACTIONS(149), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3797] = 4,
    ACTIONS(184), 1,
      anon_sym_STAR,
    STATE(130), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(312), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
    ACTIONS(487), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3823] = 1,
    ACTIONS(489), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3843] = 4,
    ACTIONS(184), 1,
      anon_sym_STAR,
    STATE(130), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(312), 3,
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
  [3869] = 1,
    ACTIONS(491), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3889] = 4,
    ACTIONS(180), 1,
      anon_sym_STAR,
    STATE(123), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(307), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
    ACTIONS(176), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3915] = 3,
    ACTIONS(493), 1,
      aux_sym_sequence_token1,
    STATE(110), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(107), 15,
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
  [3939] = 15,
    ACTIONS(95), 1,
      anon_sym_CARET,
    ACTIONS(453), 1,
      anon_sym_insert,
    ACTIONS(497), 1,
      anon_sym_codes,
    ACTIONS(499), 1,
      anon_sym_system,
    ACTIONS(501), 1,
      anon_sym_POUND,
    ACTIONS(503), 1,
      aux_sym_sequence_token1,
    STATE(117), 1,
      sym_code,
    STATE(183), 1,
      sym_code_string,
    STATE(327), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(341), 1,
      aux_sym_sequence_repeat1,
    STATE(382), 1,
      sym_sequence,
    STATE(437), 1,
      sym_path,
    STATE(476), 1,
      sym_caret_path,
    ACTIONS(495), 2,
      anon_sym_include,
      anon_sym_exclude,
    STATE(314), 2,
      sym_vs_concept_component,
      sym_vs_filter_component,
  [3987] = 3,
    ACTIONS(505), 1,
      aux_sym_sequence_token1,
    STATE(110), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(113), 15,
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
  [4011] = 6,
    ACTIONS(221), 1,
      aux_sym_sequence_token1,
    ACTIONS(441), 1,
      anon_sym_POUND,
    STATE(289), 1,
      sym_code,
    STATE(387), 1,
      aux_sym_sequence_repeat1,
    STATE(510), 1,
      sym_sequence,
    ACTIONS(439), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [4041] = 6,
    ACTIONS(221), 1,
      aux_sym_sequence_token1,
    ACTIONS(441), 1,
      anon_sym_POUND,
    STATE(302), 1,
      sym_code,
    STATE(387), 1,
      aux_sym_sequence_repeat1,
    STATE(510), 1,
      sym_sequence,
    ACTIONS(508), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [4071] = 4,
    ACTIONS(157), 1,
      anon_sym_STAR,
    STATE(114), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(301), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    ACTIONS(510), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [4097] = 4,
    ACTIONS(514), 1,
      anon_sym_STAR,
    STATE(114), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(301), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    ACTIONS(512), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [4123] = 2,
    ACTIONS(147), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
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
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [4145] = 2,
    ACTIONS(174), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
    ACTIONS(172), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4167] = 3,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    STATE(175), 1,
      sym_string,
    ACTIONS(517), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4191] = 3,
    ACTIONS(519), 1,
      aux_sym_sequence_token1,
    STATE(119), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(107), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [4215] = 3,
    ACTIONS(521), 1,
      aux_sym_sequence_token1,
    STATE(119), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(113), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [4239] = 4,
    ACTIONS(128), 1,
      anon_sym_STAR,
    STATE(125), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(311), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
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
  [4265] = 3,
    ACTIONS(524), 1,
      aux_sym_sequence_token1,
    STATE(121), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(113), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [4289] = 4,
    ACTIONS(180), 1,
      anon_sym_STAR,
    STATE(123), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(307), 3,
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
  [4315] = 4,
    ACTIONS(531), 1,
      anon_sym_STAR,
    STATE(123), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(307), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
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
  [4341] = 3,
    ACTIONS(534), 1,
      aux_sym_sequence_token1,
    STATE(121), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(107), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [4365] = 4,
    ACTIONS(538), 1,
      anon_sym_STAR,
    STATE(125), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(311), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
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
  [4391] = 4,
    ACTIONS(128), 1,
      anon_sym_STAR,
    STATE(125), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(311), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
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
  [4417] = 3,
    ACTIONS(543), 1,
      aux_sym_sequence_token1,
    STATE(127), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(113), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4441] = 3,
    ACTIONS(546), 1,
      aux_sym_sequence_token1,
    STATE(127), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(107), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4465] = 1,
    ACTIONS(548), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [4485] = 4,
    ACTIONS(552), 1,
      anon_sym_STAR,
    STATE(130), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(312), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
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
  [4511] = 3,
    ACTIONS(555), 1,
      aux_sym_sequence_token1,
    STATE(131), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(113), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4534] = 4,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(295), 2,
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
  [4559] = 3,
    ACTIONS(560), 1,
      aux_sym_sequence_token1,
    STATE(133), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(113), 14,
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
  [4582] = 3,
    ACTIONS(563), 1,
      aux_sym_sequence_token1,
    STATE(135), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(107), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4605] = 3,
    ACTIONS(565), 1,
      aux_sym_sequence_token1,
    STATE(135), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(113), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4628] = 3,
    ACTIONS(568), 1,
      aux_sym_sequence_token1,
    STATE(133), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(107), 14,
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
  [4651] = 1,
    ACTIONS(570), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [4670] = 3,
    ACTIONS(572), 1,
      aux_sym_sequence_token1,
    STATE(143), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(107), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4693] = 4,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(287), 2,
      sym_string,
      sym_multiline_string,
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
  [4718] = 2,
    ACTIONS(578), 1,
      anon_sym_Instance,
    ACTIONS(576), 15,
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
  [4739] = 1,
    ACTIONS(580), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [4758] = 3,
    ACTIONS(582), 1,
      aux_sym_sequence_token1,
    STATE(131), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(107), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4781] = 3,
    ACTIONS(584), 1,
      aux_sym_sequence_token1,
    STATE(143), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(113), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4804] = 3,
    ACTIONS(587), 1,
      aux_sym_sequence_token1,
    STATE(157), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(107), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4827] = 3,
    ACTIONS(589), 1,
      aux_sym_sequence_token1,
    STATE(156), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(107), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4850] = 3,
    ACTIONS(591), 1,
      aux_sym_sequence_token1,
    STATE(146), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(113), 14,
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
  [4873] = 4,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(288), 2,
      sym_string,
      sym_multiline_string,
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
      anon_sym_STAR,
  [4898] = 3,
    ACTIONS(596), 1,
      aux_sym_sequence_token1,
    STATE(146), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(107), 14,
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
  [4921] = 4,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(304), 2,
      sym_string,
      sym_multiline_string,
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
      anon_sym_STAR,
  [4946] = 2,
    ACTIONS(602), 1,
      anon_sym_Instance,
    ACTIONS(600), 15,
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
  [4967] = 2,
    ACTIONS(606), 1,
      anon_sym_Instance,
    ACTIONS(604), 15,
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
  [4988] = 4,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(305), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(608), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5013] = 4,
    ACTIONS(610), 1,
      aux_sym_cardinality_token1,
    ACTIONS(612), 1,
      anon_sym_STAR2,
    ACTIONS(345), 2,
      aux_sym_sequence_token1,
      sym_number,
    ACTIONS(343), 12,
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
  [5038] = 4,
    ACTIONS(614), 1,
      aux_sym_cardinality_token1,
    ACTIONS(616), 1,
      anon_sym_STAR2,
    ACTIONS(337), 2,
      aux_sym_sequence_token1,
      sym_number,
    ACTIONS(335), 12,
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
  [5063] = 3,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    STATE(228), 1,
      sym_string,
    ACTIONS(618), 14,
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
  [5086] = 3,
    ACTIONS(620), 1,
      aux_sym_sequence_token1,
    STATE(156), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(113), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5109] = 3,
    ACTIONS(623), 1,
      aux_sym_sequence_token1,
    STATE(157), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(113), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5132] = 3,
    ACTIONS(626), 1,
      aux_sym_sequence_token1,
    STATE(158), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(113), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5154] = 1,
    ACTIONS(629), 15,
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
  [5172] = 2,
    STATE(186), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(631), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5192] = 3,
    ACTIONS(633), 1,
      aux_sym_sequence_token1,
    STATE(161), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(113), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5214] = 3,
    ACTIONS(636), 1,
      aux_sym_sequence_token1,
    STATE(161), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(107), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5236] = 3,
    ACTIONS(638), 1,
      aux_sym_sequence_token1,
    STATE(158), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(107), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5258] = 1,
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
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_or,
      anon_sym_DQUOTE,
  [5276] = 3,
    ACTIONS(103), 2,
      anon_sym_or,
      anon_sym_DQUOTE,
    ACTIONS(642), 2,
      aux_sym_sequence_token1,
      sym_number,
    ACTIONS(420), 11,
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
  [5298] = 3,
    ACTIONS(644), 1,
      aux_sym_sequence_token1,
    STATE(166), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(113), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5320] = 1,
    ACTIONS(647), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5338] = 1,
    ACTIONS(649), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5356] = 1,
    ACTIONS(651), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5374] = 3,
    ACTIONS(653), 1,
      aux_sym_sequence_token1,
    STATE(170), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(113), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5396] = 3,
    ACTIONS(656), 1,
      aux_sym_sequence_token1,
    STATE(170), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(107), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5418] = 1,
    ACTIONS(658), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5436] = 1,
    ACTIONS(660), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5454] = 8,
    ACTIONS(664), 1,
      aux_sym_sequence_token1,
    ACTIONS(666), 1,
      sym_number,
    STATE(222), 1,
      sym_vs_filter_definition,
    STATE(299), 1,
      sym_vs_filter_list,
    STATE(339), 1,
      sym_name,
    STATE(419), 1,
      aux_sym_sequence_repeat1,
    STATE(456), 1,
      sym_sequence,
    ACTIONS(662), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [5486] = 1,
    ACTIONS(668), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5504] = 1,
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
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_or,
      anon_sym_DQUOTE,
  [5522] = 3,
    ACTIONS(672), 1,
      aux_sym_sequence_token1,
    STATE(181), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(107), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5544] = 1,
    ACTIONS(674), 15,
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
  [5562] = 1,
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
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [5580] = 1,
    ACTIONS(678), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5598] = 3,
    ACTIONS(680), 1,
      aux_sym_sequence_token1,
    STATE(181), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(113), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5620] = 3,
    ACTIONS(683), 1,
      aux_sym_sequence_token1,
    STATE(182), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(113), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5642] = 4,
    ACTIONS(688), 1,
      anon_sym_from,
    ACTIONS(690), 1,
      anon_sym_and,
    STATE(297), 1,
      sym_vs_component_from,
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
  [5666] = 3,
    ACTIONS(692), 1,
      aux_sym_sequence_token1,
    STATE(182), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(107), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5688] = 1,
    ACTIONS(694), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5706] = 3,
    ACTIONS(698), 1,
      anon_sym_and,
    STATE(186), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(696), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5728] = 1,
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
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Title,
      anon_sym_STAR,
  [5746] = 3,
    ACTIONS(703), 1,
      anon_sym_and,
    STATE(186), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(631), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5768] = 3,
    ACTIONS(703), 1,
      anon_sym_and,
    STATE(188), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(705), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5790] = 2,
    STATE(160), 1,
      aux_sym_obeys_rule_repeat1,
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
      anon_sym_and,
      anon_sym_where,
  [5810] = 2,
    ACTIONS(132), 1,
      aux_sym_sequence_token1,
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
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [5830] = 2,
    ACTIONS(138), 1,
      aux_sym_sequence_token1,
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
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [5850] = 4,
    ACTIONS(707), 2,
      aux_sym_sequence_token1,
      sym_number,
    STATE(193), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(322), 5,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_Reference,
      anon_sym_Canonical,
    ACTIONS(709), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [5874] = 3,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    STATE(251), 1,
      sym_string,
    ACTIONS(712), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5896] = 3,
    ACTIONS(714), 1,
      aux_sym_sequence_token1,
    STATE(166), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(107), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5918] = 1,
    ACTIONS(716), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [5936] = 2,
    ACTIONS(720), 1,
      anon_sym_T,
    ACTIONS(718), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5955] = 1,
    ACTIONS(722), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5972] = 3,
    ACTIONS(726), 1,
      anon_sym_and,
    STATE(199), 1,
      aux_sym_vs_filter_list_repeat1,
    ACTIONS(724), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5993] = 3,
    ACTIONS(731), 1,
      anon_sym_or,
    STATE(201), 1,
      aux_sym_only_rule_repeat1,
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
  [6014] = 3,
    ACTIONS(735), 1,
      anon_sym_or,
    STATE(201), 1,
      aux_sym_only_rule_repeat1,
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
  [6035] = 3,
    ACTIONS(738), 1,
      anon_sym_and,
    STATE(237), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(631), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6056] = 3,
    ACTIONS(738), 1,
      anon_sym_and,
    STATE(237), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(740), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6077] = 2,
    ACTIONS(352), 1,
      anon_sym_COLON,
    ACTIONS(712), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6096] = 3,
    ACTIONS(738), 1,
      anon_sym_and,
    STATE(202), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(705), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6117] = 1,
    ACTIONS(742), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6134] = 2,
    ACTIONS(345), 2,
      aux_sym_sequence_token1,
      sym_number,
    ACTIONS(343), 12,
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
  [6153] = 3,
    ACTIONS(746), 1,
      anon_sym_and,
    STATE(238), 1,
      aux_sym_contains_rule_repeat1,
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
  [6174] = 2,
    STATE(237), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(631), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6193] = 2,
    ACTIONS(748), 2,
      aux_sym_sequence_token1,
      sym_number,
    ACTIONS(429), 12,
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
  [6212] = 7,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(750), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(282), 1,
      sym_item,
    STATE(336), 1,
      aux_sym_sequence_repeat1,
    STATE(370), 1,
      sym_name,
    ACTIONS(49), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [6241] = 3,
    ACTIONS(754), 1,
      anon_sym_LPAREN,
    STATE(313), 1,
      sym_strength,
    ACTIONS(752), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6262] = 3,
    ACTIONS(758), 1,
      anon_sym_and,
    STATE(199), 1,
      aux_sym_vs_filter_list_repeat1,
    ACTIONS(756), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6283] = 3,
    ACTIONS(746), 1,
      anon_sym_and,
    STATE(208), 1,
      aux_sym_contains_rule_repeat1,
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
  [6304] = 2,
    ACTIONS(132), 1,
      aux_sym_sequence_token1,
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
      anon_sym_STAR,
      anon_sym_POUND,
  [6323] = 3,
    ACTIONS(738), 1,
      anon_sym_and,
    STATE(203), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(762), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6344] = 1,
    ACTIONS(764), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6361] = 3,
    ACTIONS(738), 1,
      anon_sym_and,
    STATE(237), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(762), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6382] = 3,
    ACTIONS(731), 1,
      anon_sym_or,
    STATE(200), 1,
      aux_sym_only_rule_repeat1,
    ACTIONS(766), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6403] = 7,
    ACTIONS(664), 1,
      aux_sym_sequence_token1,
    ACTIONS(666), 1,
      sym_number,
    STATE(252), 1,
      sym_vs_filter_definition,
    STATE(339), 1,
      sym_name,
    STATE(419), 1,
      aux_sym_sequence_repeat1,
    STATE(456), 1,
      sym_sequence,
    ACTIONS(662), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [6432] = 2,
    ACTIONS(138), 1,
      aux_sym_sequence_token1,
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
      anon_sym_STAR,
      anon_sym_POUND,
  [6451] = 3,
    ACTIONS(758), 1,
      anon_sym_and,
    STATE(213), 1,
      aux_sym_vs_filter_list_repeat1,
    ACTIONS(768), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6472] = 3,
    ACTIONS(770), 1,
      aux_sym_sequence_token1,
    STATE(226), 1,
      aux_sym_sequence_repeat1,
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
      anon_sym_STAR,
  [6493] = 2,
    ACTIONS(774), 1,
      anon_sym_and,
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
      anon_sym_where,
  [6512] = 2,
    ACTIONS(776), 1,
      anon_sym_and,
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
      anon_sym_where,
  [6531] = 3,
    ACTIONS(778), 1,
      aux_sym_sequence_token1,
    STATE(226), 1,
      aux_sym_sequence_repeat1,
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
      anon_sym_STAR,
  [6552] = 7,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(750), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(214), 1,
      sym_item,
    STATE(336), 1,
      aux_sym_sequence_repeat1,
    STATE(370), 1,
      sym_name,
    ACTIONS(49), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [6581] = 1,
    ACTIONS(781), 14,
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
  [6598] = 3,
    ACTIONS(783), 1,
      aux_sym_sequence_token1,
    STATE(230), 1,
      aux_sym_sequence_repeat1,
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
      anon_sym_POUND,
  [6619] = 3,
    ACTIONS(785), 1,
      aux_sym_sequence_token1,
    STATE(230), 1,
      aux_sym_sequence_repeat1,
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
      anon_sym_POUND,
  [6640] = 3,
    ACTIONS(81), 1,
      anon_sym_EQ,
    ACTIONS(83), 1,
      anon_sym_insert,
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
  [6661] = 2,
    ACTIONS(788), 1,
      anon_sym_POUND,
    ACTIONS(103), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6680] = 3,
    ACTIONS(738), 1,
      anon_sym_and,
    STATE(218), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(790), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6701] = 3,
    ACTIONS(83), 1,
      anon_sym_insert,
    ACTIONS(792), 1,
      anon_sym_DASH_GT,
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
  [6722] = 2,
    STATE(209), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(705), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6741] = 1,
    ACTIONS(696), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6758] = 3,
    ACTIONS(794), 1,
      anon_sym_and,
    STATE(237), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(696), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [6779] = 3,
    ACTIONS(799), 1,
      anon_sym_and,
    STATE(238), 1,
      aux_sym_contains_rule_repeat1,
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
  [6800] = 1,
    ACTIONS(733), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [6817] = 6,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(802), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(163), 1,
      aux_sym_sequence_repeat1,
    STATE(235), 1,
      sym_name,
    ACTIONS(49), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [6843] = 6,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(804), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(35), 1,
      sym_name,
    STATE(118), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(49), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [6869] = 6,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(806), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(138), 1,
      aux_sym_sequence_repeat1,
    STATE(190), 1,
      sym_name,
    ACTIONS(49), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [6895] = 6,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(804), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(36), 1,
      sym_name,
    STATE(118), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(49), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [6921] = 6,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(802), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(163), 1,
      aux_sym_sequence_repeat1,
    STATE(206), 1,
      sym_name,
    ACTIONS(49), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [6947] = 1,
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
      anon_sym_STAR,
      anon_sym_and,
  [6963] = 1,
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
      anon_sym_STAR,
      anon_sym_and,
  [6979] = 6,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(804), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(90), 1,
      sym_name,
    STATE(118), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(49), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7005] = 6,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(806), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(138), 1,
      aux_sym_sequence_repeat1,
    STATE(206), 1,
      sym_name,
    ACTIONS(49), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7031] = 6,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(812), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(97), 1,
      aux_sym_sequence_repeat1,
    STATE(150), 1,
      sym_name,
    ACTIONS(49), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7057] = 6,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(806), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(138), 1,
      aux_sym_sequence_repeat1,
    STATE(236), 1,
      sym_name,
    ACTIONS(49), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7083] = 1,
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
      anon_sym_STAR,
      anon_sym_LPAREN,
  [7099] = 1,
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
      anon_sym_and,
  [7115] = 6,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(812), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(29), 1,
      sym_name,
    STATE(97), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(49), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7141] = 6,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(816), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(320), 1,
      sym_name,
    STATE(332), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(49), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7167] = 3,
    ACTIONS(818), 1,
      aux_sym_sequence_token1,
    STATE(255), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(113), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [7187] = 6,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(821), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(376), 1,
      aux_sym_sequence_repeat1,
    STATE(392), 1,
      sym_name,
    ACTIONS(49), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7213] = 1,
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
      anon_sym_STAR,
      anon_sym_where,
  [7229] = 6,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(825), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(18), 1,
      sym_name,
    STATE(79), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(49), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7255] = 2,
    ACTIONS(829), 1,
      anon_sym_LPAREN,
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
  [7273] = 2,
    ACTIONS(642), 2,
      aux_sym_sequence_token1,
      sym_number,
    ACTIONS(420), 11,
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
  [7291] = 2,
    ACTIONS(831), 1,
      anon_sym_POUND,
    ACTIONS(103), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [7309] = 6,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(825), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(79), 1,
      aux_sym_sequence_repeat1,
    STATE(90), 1,
      sym_name,
    ACTIONS(49), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7335] = 1,
    ACTIONS(712), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [7351] = 1,
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
      anon_sym_STAR,
      anon_sym_LPAREN,
  [7367] = 6,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(802), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(163), 1,
      aux_sym_sequence_repeat1,
    STATE(236), 1,
      sym_name,
    ACTIONS(49), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7393] = 6,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(835), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(90), 1,
      sym_name,
    STATE(98), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(49), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7419] = 6,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(837), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(184), 1,
      aux_sym_sequence_repeat1,
    STATE(212), 1,
      sym_name,
    ACTIONS(49), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7445] = 6,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(835), 1,
      aux_sym_sequence_token1,
    STATE(4), 1,
      sym_name,
    STATE(14), 1,
      sym_sequence,
    STATE(98), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(49), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7471] = 6,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(839), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(162), 1,
      aux_sym_sequence_repeat1,
    STATE(206), 1,
      sym_name,
    ACTIONS(49), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7497] = 6,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(802), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(163), 1,
      aux_sym_sequence_repeat1,
    STATE(233), 1,
      sym_name,
    ACTIONS(49), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7523] = 6,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(806), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(138), 1,
      aux_sym_sequence_repeat1,
    STATE(189), 1,
      sym_name,
    ACTIONS(49), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7549] = 6,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(841), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(206), 1,
      sym_name,
    STATE(223), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(49), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7575] = 6,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(802), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(163), 1,
      aux_sym_sequence_repeat1,
    STATE(205), 1,
      sym_name,
    ACTIONS(49), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7601] = 6,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(835), 1,
      aux_sym_sequence_token1,
    STATE(2), 1,
      sym_name,
    STATE(14), 1,
      sym_sequence,
    STATE(98), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(49), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7627] = 1,
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
      anon_sym_STAR,
      anon_sym_LPAREN,
  [7643] = 1,
    ACTIONS(352), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [7659] = 1,
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
      anon_sym_STAR,
      anon_sym_LPAREN,
  [7675] = 6,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(847), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(321), 1,
      sym_name,
    STATE(335), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(49), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7701] = 6,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(835), 1,
      aux_sym_sequence_token1,
    STATE(6), 1,
      sym_name,
    STATE(14), 1,
      sym_sequence,
    STATE(98), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(49), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7727] = 2,
    ACTIONS(851), 1,
      anon_sym_where,
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
  [7745] = 6,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(835), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(98), 1,
      aux_sym_sequence_repeat1,
    STATE(141), 1,
      sym_name,
    ACTIONS(49), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7771] = 1,
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
      anon_sym_STAR,
      anon_sym_and,
  [7787] = 3,
    ACTIONS(853), 1,
      aux_sym_sequence_token1,
    STATE(255), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(107), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [7807] = 2,
    ACTIONS(855), 1,
      anon_sym_and,
    ACTIONS(772), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [7825] = 2,
    ACTIONS(857), 1,
      anon_sym_and,
    ACTIONS(772), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [7843] = 6,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(802), 1,
      aux_sym_sequence_token1,
    STATE(14), 1,
      sym_sequence,
    STATE(163), 1,
      aux_sym_sequence_repeat1,
    STATE(216), 1,
      sym_name,
    ACTIONS(49), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [7869] = 1,
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
  [7884] = 1,
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
  [7899] = 1,
    ACTIONS(508), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [7914] = 1,
    ACTIONS(859), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [7929] = 1,
    ACTIONS(861), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [7944] = 1,
    ACTIONS(863), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [7959] = 1,
    ACTIONS(439), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [7974] = 1,
    ACTIONS(865), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [7989] = 1,
    ACTIONS(867), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [8004] = 1,
    ACTIONS(869), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [8019] = 1,
    ACTIONS(871), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [8034] = 1,
    ACTIONS(873), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [8049] = 1,
    ACTIONS(875), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [8064] = 1,
    ACTIONS(608), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [8079] = 1,
    ACTIONS(877), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [8094] = 1,
    ACTIONS(879), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [8109] = 2,
    ACTIONS(883), 1,
      anon_sym_POUND,
    ACTIONS(881), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [8126] = 1,
    ACTIONS(885), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [8141] = 1,
    ACTIONS(887), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [8156] = 1,
    ACTIONS(889), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [8171] = 1,
    ACTIONS(891), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [8186] = 1,
    ACTIONS(893), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [8201] = 1,
    ACTIONS(895), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [8216] = 1,
    ACTIONS(897), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [8231] = 1,
    ACTIONS(899), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [8246] = 1,
    ACTIONS(901), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [8261] = 1,
    ACTIONS(903), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [8276] = 1,
    ACTIONS(905), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [8291] = 1,
    ACTIONS(907), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [8306] = 1,
    ACTIONS(909), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [8321] = 1,
    ACTIONS(911), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [8336] = 1,
    ACTIONS(881), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [8350] = 9,
    ACTIONS(221), 1,
      aux_sym_sequence_token1,
    ACTIONS(497), 1,
      anon_sym_codes,
    ACTIONS(501), 1,
      anon_sym_POUND,
    STATE(117), 1,
      sym_code,
    STATE(183), 1,
      sym_code_string,
    STATE(327), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(387), 1,
      aux_sym_sequence_repeat1,
    STATE(505), 1,
      sym_sequence,
    STATE(291), 2,
      sym_vs_concept_component,
      sym_vs_filter_component,
  [8379] = 6,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(329), 1,
      anon_sym_Expression,
    ACTIONS(331), 1,
      anon_sym_Severity,
    ACTIONS(333), 1,
      anon_sym_XPath,
    STATE(56), 2,
      sym_invariant_metadata,
      aux_sym_invariant_repeat1,
    STATE(179), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
  [8402] = 6,
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
    STATE(137), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
  [8425] = 4,
    ACTIONS(89), 1,
      anon_sym_and,
    STATE(325), 1,
      aux_sym_flag_rule_repeat1,
    STATE(73), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(97), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [8444] = 3,
    ACTIONS(913), 1,
      aux_sym_sequence_token1,
    STATE(324), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(107), 7,
      anon_sym_and,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [8460] = 3,
    ACTIONS(915), 1,
      aux_sym_sequence_token1,
    STATE(324), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(113), 7,
      anon_sym_and,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [8476] = 3,
    ACTIONS(918), 1,
      anon_sym_and,
    STATE(325), 1,
      aux_sym_flag_rule_repeat1,
    ACTIONS(921), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [8491] = 7,
    ACTIONS(923), 1,
      anon_sym_POUND,
    ACTIONS(926), 1,
      aux_sym_sequence_token1,
    STATE(117), 1,
      sym_code,
    STATE(326), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(387), 1,
      aux_sym_sequence_repeat1,
    STATE(509), 1,
      sym_sequence,
    STATE(517), 1,
      sym_code_string,
  [8513] = 7,
    ACTIONS(221), 1,
      aux_sym_sequence_token1,
    ACTIONS(929), 1,
      anon_sym_POUND,
    STATE(117), 1,
      sym_code,
    STATE(326), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(383), 1,
      sym_code_string,
    STATE(387), 1,
      aux_sym_sequence_repeat1,
    STATE(506), 1,
      sym_sequence,
  [8535] = 7,
    ACTIONS(221), 1,
      aux_sym_sequence_token1,
    ACTIONS(931), 1,
      anon_sym_insert,
    ACTIONS(933), 1,
      anon_sym_POUND,
    STATE(47), 1,
      aux_sym_code_insert_rule_repeat1,
    STATE(76), 1,
      sym_code,
    STATE(387), 1,
      aux_sym_sequence_repeat1,
    STATE(471), 1,
      sym_sequence,
  [8557] = 7,
    ACTIONS(453), 1,
      anon_sym_insert,
    ACTIONS(499), 1,
      anon_sym_system,
    ACTIONS(935), 1,
      anon_sym_DASH_GT,
    ACTIONS(937), 1,
      aux_sym_sequence_token1,
    STATE(46), 1,
      sym_sequence,
    STATE(144), 1,
      aux_sym_sequence_repeat1,
    STATE(234), 1,
      sym_path,
  [8579] = 1,
    ACTIONS(921), 7,
      anon_sym_and,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [8589] = 3,
    ACTIONS(939), 1,
      aux_sym_sequence_token1,
    STATE(331), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(113), 4,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [8602] = 3,
    ACTIONS(942), 1,
      aux_sym_sequence_token1,
    STATE(331), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(107), 4,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [8615] = 6,
    ACTIONS(453), 1,
      anon_sym_insert,
    ACTIONS(499), 1,
      anon_sym_system,
    ACTIONS(944), 1,
      aux_sym_sequence_token1,
    STATE(46), 1,
      sym_sequence,
    STATE(136), 1,
      aux_sym_sequence_repeat1,
    STATE(231), 1,
      sym_path,
  [8634] = 3,
    ACTIONS(946), 1,
      aux_sym_sequence_token1,
    STATE(334), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(113), 4,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
  [8647] = 3,
    ACTIONS(949), 1,
      aux_sym_sequence_token1,
    STATE(334), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(107), 4,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
  [8660] = 4,
    ACTIONS(111), 1,
      aux_sym_cardinality_token1,
    ACTIONS(951), 1,
      aux_sym_sequence_token1,
    STATE(340), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(107), 2,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [8674] = 5,
    ACTIONS(499), 1,
      anon_sym_system,
    ACTIONS(953), 1,
      aux_sym_sequence_token1,
    STATE(46), 1,
      sym_sequence,
    STATE(323), 1,
      aux_sym_sequence_repeat1,
    STATE(330), 1,
      sym_path,
  [8690] = 3,
    ACTIONS(955), 1,
      aux_sym_sequence_token1,
    STATE(338), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(113), 3,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_CARET,
  [8702] = 5,
    ACTIONS(958), 1,
      anon_sym_EQ,
    ACTIONS(960), 1,
      aux_sym_sequence_token1,
    STATE(41), 1,
      sym_vs_filter_operator,
    STATE(81), 1,
      aux_sym_sequence_repeat1,
    STATE(91), 1,
      sym_sequence,
  [8718] = 4,
    ACTIONS(118), 1,
      aux_sym_cardinality_token1,
    ACTIONS(962), 1,
      aux_sym_sequence_token1,
    STATE(340), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(113), 2,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [8732] = 3,
    ACTIONS(965), 1,
      aux_sym_sequence_token1,
    STATE(338), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(107), 3,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_CARET,
  [8744] = 3,
    ACTIONS(967), 1,
      aux_sym_sequence_token1,
    STATE(348), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(107), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE,
  [8756] = 5,
    ACTIONS(969), 1,
      anon_sym_POUND,
    ACTIONS(971), 1,
      aux_sym_sequence_token1,
    STATE(229), 1,
      aux_sym_sequence_repeat1,
    STATE(303), 1,
      sym_sequence,
    STATE(318), 1,
      sym_code,
  [8772] = 3,
    ACTIONS(973), 1,
      aux_sym_sequence_token1,
    STATE(345), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(107), 3,
      anon_sym_from,
      anon_sym_and,
      anon_sym_DQUOTE,
  [8784] = 3,
    ACTIONS(975), 1,
      aux_sym_sequence_token1,
    STATE(345), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(113), 3,
      anon_sym_from,
      anon_sym_and,
      anon_sym_DQUOTE,
  [8796] = 5,
    ACTIONS(221), 1,
      aux_sym_sequence_token1,
    ACTIONS(978), 1,
      anon_sym_POUND,
    STATE(151), 1,
      sym_code,
    STATE(387), 1,
      aux_sym_sequence_repeat1,
    STATE(504), 1,
      sym_sequence,
  [8812] = 5,
    ACTIONS(221), 1,
      aux_sym_sequence_token1,
    ACTIONS(980), 1,
      anon_sym_POUND,
    STATE(168), 1,
      sym_code,
    STATE(387), 1,
      aux_sym_sequence_repeat1,
    STATE(496), 1,
      sym_sequence,
  [8828] = 3,
    ACTIONS(982), 1,
      aux_sym_sequence_token1,
    STATE(348), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(113), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE,
  [8840] = 5,
    ACTIONS(221), 1,
      aux_sym_sequence_token1,
    ACTIONS(985), 1,
      anon_sym_POUND,
    STATE(106), 1,
      sym_code,
    STATE(387), 1,
      aux_sym_sequence_repeat1,
    STATE(508), 1,
      sym_sequence,
  [8856] = 5,
    ACTIONS(987), 1,
      anon_sym_POUND,
    ACTIONS(989), 1,
      aux_sym_sequence_token1,
    STATE(368), 1,
      aux_sym_sequence_repeat1,
    STATE(424), 1,
      sym_sequence,
    STATE(449), 1,
      sym_code,
  [8872] = 3,
    ACTIONS(991), 1,
      anon_sym_DQUOTE,
    STATE(351), 1,
      aux_sym_string_repeat1,
    ACTIONS(993), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [8883] = 3,
    ACTIONS(996), 1,
      anon_sym_DQUOTE,
    STATE(351), 1,
      aux_sym_string_repeat1,
    ACTIONS(998), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [8894] = 3,
    ACTIONS(1000), 1,
      aux_sym_sequence_token1,
    STATE(353), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(113), 2,
      anon_sym_or,
      anon_sym_DQUOTE,
  [8905] = 3,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(45), 2,
      sym_string,
      sym_multiline_string,
  [8916] = 1,
    ACTIONS(1003), 4,
      anon_sym_example,
      anon_sym_preferred,
      anon_sym_extensible,
      anon_sym_required,
  [8923] = 3,
    ACTIONS(1005), 1,
      anon_sym_DQUOTE,
    STATE(369), 1,
      aux_sym_string_repeat1,
    ACTIONS(1007), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [8934] = 3,
    ACTIONS(1009), 1,
      aux_sym_sequence_token1,
    STATE(358), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(107), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [8945] = 3,
    ACTIONS(1011), 1,
      aux_sym_sequence_token1,
    STATE(358), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(113), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [8956] = 3,
    ACTIONS(1014), 1,
      anon_sym_DQUOTE,
    STATE(351), 1,
      aux_sym_string_repeat1,
    ACTIONS(998), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [8967] = 4,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    ACTIONS(1016), 1,
      anon_sym_or,
    STATE(132), 1,
      sym_string,
    STATE(447), 1,
      aux_sym_only_rule_repeat1,
  [8980] = 4,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    ACTIONS(1016), 1,
      anon_sym_or,
    STATE(147), 1,
      sym_string,
    STATE(371), 1,
      aux_sym_only_rule_repeat1,
  [8993] = 3,
    ACTIONS(1018), 1,
      aux_sym_sequence_token1,
    STATE(353), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(107), 2,
      anon_sym_or,
      anon_sym_DQUOTE,
  [9004] = 3,
    ACTIONS(1020), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(366), 1,
      aux_sym_string_repeat1,
    ACTIONS(1022), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [9015] = 3,
    ACTIONS(1024), 1,
      anon_sym_DQUOTE,
    STATE(352), 1,
      aux_sym_string_repeat1,
    ACTIONS(1026), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [9026] = 3,
    ACTIONS(1028), 1,
      anon_sym_DQUOTE,
    STATE(359), 1,
      aux_sym_string_repeat1,
    ACTIONS(1030), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [9037] = 3,
    ACTIONS(1032), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(367), 1,
      aux_sym_string_repeat1,
    ACTIONS(1034), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [9048] = 3,
    ACTIONS(991), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(367), 1,
      aux_sym_string_repeat1,
    ACTIONS(1036), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [9059] = 3,
    ACTIONS(1039), 1,
      aux_sym_sequence_token1,
    STATE(378), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(107), 2,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [9070] = 3,
    ACTIONS(1041), 1,
      anon_sym_DQUOTE,
    STATE(351), 1,
      aux_sym_string_repeat1,
    ACTIONS(998), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [9081] = 4,
    ACTIONS(1043), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1045), 1,
      anon_sym_DOT_DOT,
    ACTIONS(1047), 1,
      anon_sym_named,
    STATE(53), 1,
      sym_cardinality,
  [9094] = 4,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    ACTIONS(1016), 1,
      anon_sym_or,
    STATE(139), 1,
      sym_string,
    STATE(447), 1,
      aux_sym_only_rule_repeat1,
  [9107] = 3,
    ACTIONS(1049), 1,
      aux_sym_sequence_token1,
    STATE(372), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(113), 2,
      anon_sym_and,
      anon_sym_DQUOTE,
  [9118] = 4,
    ACTIONS(1052), 1,
      anon_sym_system,
    ACTIONS(1054), 1,
      anon_sym_valueset,
    STATE(284), 1,
      sym_vs_from_system,
    STATE(285), 1,
      sym_vs_from_valueset,
  [9131] = 4,
    ACTIONS(1056), 1,
      anon_sym_system,
    ACTIONS(1058), 1,
      anon_sym_valueset,
    STATE(224), 1,
      sym_vs_from_system,
    STATE(225), 1,
      sym_vs_from_valueset,
  [9144] = 4,
    ACTIONS(1060), 1,
      anon_sym_RPAREN,
    ACTIONS(1062), 1,
      anon_sym_or,
    ACTIONS(1064), 1,
      anon_sym_PIPE,
    STATE(409), 1,
      aux_sym_canonical_repeat1,
  [9157] = 4,
    ACTIONS(107), 1,
      anon_sym_DOT_DOT,
    ACTIONS(111), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1066), 1,
      aux_sym_sequence_token1,
    STATE(379), 1,
      aux_sym_sequence_repeat1,
  [9170] = 3,
    ACTIONS(1068), 1,
      aux_sym_sequence_token1,
    STATE(372), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(107), 2,
      anon_sym_and,
      anon_sym_DQUOTE,
  [9181] = 3,
    ACTIONS(1070), 1,
      aux_sym_sequence_token1,
    STATE(378), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(113), 2,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [9192] = 4,
    ACTIONS(113), 1,
      anon_sym_DOT_DOT,
    ACTIONS(118), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1073), 1,
      aux_sym_sequence_token1,
    STATE(379), 1,
      aux_sym_sequence_repeat1,
  [9205] = 4,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    ACTIONS(1016), 1,
      anon_sym_or,
    STATE(139), 1,
      sym_string,
    STATE(360), 1,
      aux_sym_only_rule_repeat1,
  [9218] = 3,
    ACTIONS(1062), 1,
      anon_sym_or,
    ACTIONS(1076), 1,
      anon_sym_RPAREN,
    STATE(403), 1,
      aux_sym_canonical_repeat1,
  [9228] = 2,
    ACTIONS(1078), 1,
      anon_sym_POUND,
    ACTIONS(140), 2,
      anon_sym_insert,
      anon_sym_CARET,
  [9236] = 3,
    ACTIONS(688), 1,
      anon_sym_from,
    ACTIONS(690), 1,
      anon_sym_and,
    STATE(315), 1,
      sym_vs_component_from,
  [9246] = 3,
    ACTIONS(1080), 1,
      aux_sym_sequence_token1,
    STATE(31), 1,
      sym_sequence,
    STATE(145), 1,
      aux_sym_sequence_repeat1,
  [9256] = 3,
    ACTIONS(1080), 1,
      aux_sym_sequence_token1,
    STATE(24), 1,
      sym_sequence,
    STATE(145), 1,
      aux_sym_sequence_repeat1,
  [9266] = 3,
    ACTIONS(1082), 1,
      aux_sym_sequence_token1,
    STATE(31), 1,
      sym_sequence,
    STATE(439), 1,
      aux_sym_sequence_repeat1,
  [9276] = 3,
    ACTIONS(107), 1,
      anon_sym_POUND,
    ACTIONS(1084), 1,
      aux_sym_sequence_token1,
    STATE(388), 1,
      aux_sym_sequence_repeat1,
  [9286] = 3,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(1086), 1,
      aux_sym_sequence_token1,
    STATE(388), 1,
      aux_sym_sequence_repeat1,
  [9296] = 3,
    ACTIONS(113), 1,
      anon_sym_EQ,
    ACTIONS(1089), 1,
      aux_sym_sequence_token1,
    STATE(389), 1,
      aux_sym_sequence_repeat1,
  [9306] = 3,
    ACTIONS(107), 1,
      anon_sym_EQ,
    ACTIONS(1092), 1,
      aux_sym_sequence_token1,
    STATE(389), 1,
      aux_sym_sequence_repeat1,
  [9316] = 3,
    ACTIONS(1082), 1,
      aux_sym_sequence_token1,
    STATE(24), 1,
      sym_sequence,
    STATE(439), 1,
      aux_sym_sequence_repeat1,
  [9326] = 3,
    ACTIONS(1043), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1045), 1,
      anon_sym_DOT_DOT,
    STATE(63), 1,
      sym_cardinality,
  [9336] = 3,
    ACTIONS(1094), 1,
      aux_sym_sequence_token1,
    STATE(31), 1,
      sym_sequence,
    STATE(108), 1,
      aux_sym_sequence_repeat1,
  [9346] = 3,
    ACTIONS(1094), 1,
      aux_sym_sequence_token1,
    STATE(24), 1,
      sym_sequence,
    STATE(108), 1,
      aux_sym_sequence_repeat1,
  [9356] = 3,
    ACTIONS(1096), 1,
      aux_sym_sequence_token1,
    STATE(31), 1,
      sym_sequence,
    STATE(148), 1,
      aux_sym_sequence_repeat1,
  [9366] = 3,
    ACTIONS(1096), 1,
      aux_sym_sequence_token1,
    STATE(24), 1,
      sym_sequence,
    STATE(148), 1,
      aux_sym_sequence_repeat1,
  [9376] = 3,
    ACTIONS(1098), 1,
      aux_sym_sequence_token1,
    STATE(31), 1,
      sym_sequence,
    STATE(223), 1,
      aux_sym_sequence_repeat1,
  [9386] = 3,
    ACTIONS(1098), 1,
      aux_sym_sequence_token1,
    STATE(24), 1,
      sym_sequence,
    STATE(223), 1,
      aux_sym_sequence_repeat1,
  [9396] = 3,
    ACTIONS(1100), 1,
      aux_sym_sequence_token1,
    STATE(31), 1,
      sym_sequence,
    STATE(377), 1,
      aux_sym_sequence_repeat1,
  [9406] = 3,
    ACTIONS(1100), 1,
      aux_sym_sequence_token1,
    STATE(24), 1,
      sym_sequence,
    STATE(377), 1,
      aux_sym_sequence_repeat1,
  [9416] = 3,
    ACTIONS(1102), 1,
      aux_sym_sequence_token1,
    STATE(357), 1,
      aux_sym_sequence_repeat1,
    STATE(457), 1,
      sym_sequence,
  [9426] = 3,
    ACTIONS(1104), 1,
      aux_sym_sequence_token1,
    STATE(31), 1,
      sym_sequence,
    STATE(142), 1,
      aux_sym_sequence_repeat1,
  [9436] = 3,
    ACTIONS(1106), 1,
      anon_sym_RPAREN,
    ACTIONS(1108), 1,
      anon_sym_or,
    STATE(403), 1,
      aux_sym_canonical_repeat1,
  [9446] = 3,
    ACTIONS(1062), 1,
      anon_sym_or,
    ACTIONS(1111), 1,
      anon_sym_RPAREN,
    STATE(381), 1,
      aux_sym_canonical_repeat1,
  [9456] = 2,
    ACTIONS(1113), 1,
      anon_sym_PIPE,
    ACTIONS(1106), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [9464] = 3,
    ACTIONS(1115), 1,
      anon_sym_RPAREN,
    ACTIONS(1117), 1,
      anon_sym_or,
    STATE(406), 1,
      aux_sym_reference_repeat1,
  [9474] = 3,
    ACTIONS(1104), 1,
      aux_sym_sequence_token1,
    STATE(24), 1,
      sym_sequence,
    STATE(142), 1,
      aux_sym_sequence_repeat1,
  [9484] = 3,
    ACTIONS(1120), 1,
      aux_sym_sequence_token1,
    STATE(24), 1,
      sym_sequence,
    STATE(283), 1,
      aux_sym_sequence_repeat1,
  [9494] = 3,
    ACTIONS(1062), 1,
      anon_sym_or,
    ACTIONS(1122), 1,
      anon_sym_RPAREN,
    STATE(403), 1,
      aux_sym_canonical_repeat1,
  [9504] = 3,
    ACTIONS(1102), 1,
      aux_sym_sequence_token1,
    STATE(357), 1,
      aux_sym_sequence_repeat1,
    STATE(404), 1,
      sym_sequence,
  [9514] = 3,
    ACTIONS(1124), 1,
      aux_sym_sequence_token1,
    STATE(342), 1,
      aux_sym_sequence_repeat1,
    STATE(405), 1,
      sym_sequence,
  [9524] = 3,
    ACTIONS(1126), 1,
      anon_sym_RPAREN,
    ACTIONS(1128), 1,
      anon_sym_or,
    STATE(406), 1,
      aux_sym_reference_repeat1,
  [9534] = 3,
    ACTIONS(1102), 1,
      aux_sym_sequence_token1,
    STATE(357), 1,
      aux_sym_sequence_repeat1,
    STATE(463), 1,
      sym_sequence,
  [9544] = 3,
    ACTIONS(1130), 1,
      anon_sym_SQUOTE,
    ACTIONS(1132), 1,
      aux_sym_unit_token1,
    STATE(414), 1,
      aux_sym_unit_repeat1,
  [9554] = 3,
    ACTIONS(1135), 1,
      aux_sym_sequence_token1,
    STATE(31), 1,
      sym_sequence,
    STATE(195), 1,
      aux_sym_sequence_repeat1,
  [9564] = 3,
    ACTIONS(1135), 1,
      aux_sym_sequence_token1,
    STATE(24), 1,
      sym_sequence,
    STATE(195), 1,
      aux_sym_sequence_repeat1,
  [9574] = 3,
    ACTIONS(1137), 1,
      aux_sym_sequence_token1,
    STATE(390), 1,
      aux_sym_sequence_repeat1,
    STATE(492), 1,
      sym_sequence,
  [9584] = 3,
    ACTIONS(1139), 1,
      aux_sym_sequence_token1,
    STATE(31), 1,
      sym_sequence,
    STATE(79), 1,
      aux_sym_sequence_repeat1,
  [9594] = 3,
    ACTIONS(107), 1,
      anon_sym_EQ,
    ACTIONS(1141), 1,
      aux_sym_sequence_token1,
    STATE(389), 1,
      aux_sym_sequence_repeat1,
  [9604] = 3,
    ACTIONS(1139), 1,
      aux_sym_sequence_token1,
    STATE(24), 1,
      sym_sequence,
    STATE(79), 1,
      aux_sym_sequence_repeat1,
  [9614] = 3,
    ACTIONS(1144), 1,
      aux_sym_sequence_token1,
    STATE(95), 1,
      aux_sym_sequence_repeat1,
    STATE(116), 1,
      sym_sequence,
  [9624] = 3,
    ACTIONS(1128), 1,
      anon_sym_or,
    ACTIONS(1146), 1,
      anon_sym_RPAREN,
    STATE(412), 1,
      aux_sym_reference_repeat1,
  [9634] = 3,
    ACTIONS(1148), 1,
      anon_sym_SQUOTE,
    ACTIONS(1150), 1,
      aux_sym_unit_token1,
    STATE(414), 1,
      aux_sym_unit_repeat1,
  [9644] = 3,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    ACTIONS(1152), 1,
      anon_sym_POUND,
    STATE(149), 1,
      sym_string,
  [9654] = 3,
    ACTIONS(1144), 1,
      aux_sym_sequence_token1,
    STATE(95), 1,
      aux_sym_sequence_repeat1,
    STATE(115), 1,
      sym_sequence,
  [9664] = 3,
    ACTIONS(1154), 1,
      aux_sym_sequence_token1,
    STATE(31), 1,
      sym_sequence,
    STATE(344), 1,
      aux_sym_sequence_repeat1,
  [9674] = 3,
    ACTIONS(1154), 1,
      aux_sym_sequence_token1,
    STATE(24), 1,
      sym_sequence,
    STATE(344), 1,
      aux_sym_sequence_repeat1,
  [9684] = 3,
    ACTIONS(1156), 1,
      aux_sym_sequence_token1,
    STATE(31), 1,
      sym_sequence,
    STATE(97), 1,
      aux_sym_sequence_repeat1,
  [9694] = 3,
    ACTIONS(1156), 1,
      aux_sym_sequence_token1,
    STATE(24), 1,
      sym_sequence,
    STATE(97), 1,
      aux_sym_sequence_repeat1,
  [9704] = 3,
    ACTIONS(1137), 1,
      aux_sym_sequence_token1,
    STATE(390), 1,
      aux_sym_sequence_repeat1,
    STATE(500), 1,
      sym_sequence,
  [9714] = 3,
    ACTIONS(1120), 1,
      aux_sym_sequence_token1,
    STATE(31), 1,
      sym_sequence,
    STATE(283), 1,
      aux_sym_sequence_repeat1,
  [9724] = 3,
    ACTIONS(1158), 1,
      aux_sym_sequence_token1,
    STATE(31), 1,
      sym_sequence,
    STATE(124), 1,
      aux_sym_sequence_repeat1,
  [9734] = 3,
    ACTIONS(1158), 1,
      aux_sym_sequence_token1,
    STATE(24), 1,
      sym_sequence,
    STATE(124), 1,
      aux_sym_sequence_repeat1,
  [9744] = 3,
    ACTIONS(1160), 1,
      aux_sym_sequence_token1,
    STATE(77), 1,
      aux_sym_sequence_repeat1,
    STATE(88), 1,
      sym_sequence,
  [9754] = 3,
    ACTIONS(1043), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1045), 1,
      anon_sym_DOT_DOT,
    STATE(66), 1,
      sym_cardinality,
  [9764] = 3,
    ACTIONS(1160), 1,
      aux_sym_sequence_token1,
    STATE(77), 1,
      aux_sym_sequence_repeat1,
    STATE(99), 1,
      sym_sequence,
  [9774] = 3,
    ACTIONS(83), 1,
      anon_sym_insert,
    ACTIONS(95), 1,
      anon_sym_CARET,
    STATE(516), 1,
      sym_caret_path,
  [9784] = 3,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(1162), 1,
      aux_sym_sequence_token1,
    STATE(438), 1,
      aux_sym_sequence_repeat1,
  [9794] = 3,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(1165), 1,
      aux_sym_sequence_token1,
    STATE(438), 1,
      aux_sym_sequence_repeat1,
  [9804] = 3,
    ACTIONS(1167), 1,
      sym_number,
    STATE(276), 1,
      sym_quantity,
    STATE(277), 1,
      sym_ratio_part,
  [9814] = 3,
    ACTIONS(1124), 1,
      aux_sym_sequence_token1,
    STATE(342), 1,
      aux_sym_sequence_repeat1,
    STATE(375), 1,
      sym_sequence,
  [9824] = 3,
    ACTIONS(1169), 1,
      aux_sym_sequence_token1,
    STATE(24), 1,
      sym_sequence,
    STATE(128), 1,
      aux_sym_sequence_repeat1,
  [9834] = 3,
    ACTIONS(1102), 1,
      aux_sym_sequence_token1,
    STATE(357), 1,
      aux_sym_sequence_repeat1,
    STATE(422), 1,
      sym_sequence,
  [9844] = 3,
    ACTIONS(1169), 1,
      aux_sym_sequence_token1,
    STATE(31), 1,
      sym_sequence,
    STATE(128), 1,
      aux_sym_sequence_repeat1,
  [9854] = 3,
    ACTIONS(1171), 1,
      anon_sym_SQUOTE,
    ACTIONS(1173), 1,
      aux_sym_unit_token1,
    STATE(423), 1,
      aux_sym_unit_repeat1,
  [9864] = 3,
    ACTIONS(1175), 1,
      sym_number,
    STATE(276), 1,
      sym_quantity,
    STATE(277), 1,
      sym_ratio_part,
  [9874] = 3,
    ACTIONS(733), 1,
      anon_sym_DQUOTE,
    ACTIONS(1177), 1,
      anon_sym_or,
    STATE(447), 1,
      aux_sym_only_rule_repeat1,
  [9884] = 2,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    STATE(104), 1,
      sym_string,
  [9891] = 2,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    STATE(149), 1,
      sym_string,
  [9898] = 2,
    ACTIONS(1180), 1,
      anon_sym_DQUOTE,
    STATE(83), 1,
      sym_string,
  [9905] = 2,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    STATE(169), 1,
      sym_string,
  [9912] = 2,
    ACTIONS(1182), 1,
      anon_sym_system,
    STATE(257), 1,
      sym_vs_from_system,
  [9919] = 2,
    ACTIONS(1184), 1,
      anon_sym_from,
    STATE(280), 1,
      sym_vs_component_from,
  [9926] = 2,
    ACTIONS(1186), 1,
      anon_sym_valueset,
    STATE(257), 1,
      sym_vs_from_valueset,
  [9933] = 2,
    ACTIONS(1188), 1,
      anon_sym_POUND,
    ACTIONS(1190), 1,
      aux_sym_sequence_token1,
  [9940] = 2,
    ACTIONS(103), 1,
      anon_sym_EQ,
    ACTIONS(105), 1,
      aux_sym_sequence_token1,
  [9947] = 1,
    ACTIONS(1192), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [9952] = 2,
    ACTIONS(1180), 1,
      anon_sym_DQUOTE,
    STATE(82), 1,
      sym_string,
  [9959] = 2,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    STATE(167), 1,
      sym_string,
  [9966] = 2,
    ACTIONS(1194), 1,
      anon_sym_valueset,
    STATE(257), 1,
      sym_vs_from_valueset,
  [9973] = 2,
    ACTIONS(1196), 1,
      anon_sym_system,
    STATE(257), 1,
      sym_vs_from_system,
  [9980] = 2,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    STATE(69), 1,
      sym_string,
  [9987] = 1,
    ACTIONS(1115), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [9992] = 1,
    ACTIONS(1198), 1,
      anon_sym_DOT_DOT,
  [9996] = 1,
    ACTIONS(1200), 1,
      anon_sym_COLON,
  [10000] = 1,
    ACTIONS(1202), 1,
      anon_sym_COLON,
  [10004] = 1,
    ACTIONS(1204), 1,
      anon_sym_COLON,
  [10008] = 1,
    ACTIONS(1206), 1,
      anon_sym_LPAREN,
  [10012] = 1,
    ACTIONS(1208), 1,
      anon_sym_COLON,
  [10016] = 1,
    ACTIONS(1210), 1,
      anon_sym_LPAREN,
  [10020] = 1,
    ACTIONS(1212), 1,
      anon_sym_POUND,
  [10024] = 1,
    ACTIONS(1214), 1,
      anon_sym_exactly,
  [10028] = 1,
    ACTIONS(1216), 1,
      anon_sym_COLON,
  [10032] = 1,
    ACTIONS(1218), 1,
      anon_sym_COLON,
  [10036] = 1,
    ACTIONS(1220), 1,
      anon_sym_EQ,
  [10040] = 1,
    ACTIONS(1222), 1,
      anon_sym_EQ,
  [10044] = 1,
    ACTIONS(1224), 1,
      anon_sym_COLON,
  [10048] = 1,
    ACTIONS(1226), 1,
      anon_sym_COLON,
  [10052] = 1,
    ACTIONS(1228), 1,
      anon_sym_RPAREN,
  [10056] = 1,
    ACTIONS(1230), 1,
      ts_builtin_sym_end,
  [10060] = 1,
    ACTIONS(1232), 1,
      anon_sym_RPAREN,
  [10064] = 1,
    ACTIONS(1234), 1,
      anon_sym_COLON,
  [10068] = 1,
    ACTIONS(1236), 1,
      anon_sym_COLON,
  [10072] = 1,
    ACTIONS(1238), 1,
      anon_sym_COLON,
  [10076] = 1,
    ACTIONS(1240), 1,
      anon_sym_DOT_DOT,
  [10080] = 1,
    ACTIONS(1242), 1,
      anon_sym_COLON,
  [10084] = 1,
    ACTIONS(1244), 1,
      anon_sym_COLON,
  [10088] = 1,
    ACTIONS(1246), 1,
      anon_sym_COLON,
  [10092] = 1,
    ACTIONS(1248), 1,
      anon_sym_COLON,
  [10096] = 1,
    ACTIONS(1250), 1,
      anon_sym_COLON,
  [10100] = 1,
    ACTIONS(1252), 1,
      anon_sym_COLON,
  [10104] = 1,
    ACTIONS(1254), 1,
      anon_sym_EQ,
  [10108] = 1,
    ACTIONS(1256), 1,
      anon_sym_COLON,
  [10112] = 1,
    ACTIONS(1258), 1,
      anon_sym_COLON,
  [10116] = 1,
    ACTIONS(1260), 1,
      anon_sym_COLON,
  [10120] = 1,
    ACTIONS(1262), 1,
      anon_sym_POUND,
  [10124] = 1,
    ACTIONS(1264), 1,
      anon_sym_COLON,
  [10128] = 1,
    ACTIONS(1266), 1,
      sym_time,
  [10132] = 1,
    ACTIONS(1268), 1,
      anon_sym_COLON,
  [10136] = 1,
    ACTIONS(1270), 1,
      anon_sym_EQ,
  [10140] = 1,
    ACTIONS(1272), 1,
      anon_sym_COLON,
  [10144] = 1,
    ACTIONS(1274), 1,
      anon_sym_COLON,
  [10148] = 1,
    ACTIONS(1276), 1,
      anon_sym_COLON,
  [10152] = 1,
    ACTIONS(1278), 1,
      anon_sym_POUND,
  [10156] = 1,
    ACTIONS(1078), 1,
      anon_sym_POUND,
  [10160] = 1,
    ACTIONS(1280), 1,
      anon_sym_POUND,
  [10164] = 1,
    ACTIONS(1282), 1,
      anon_sym_POUND,
  [10168] = 1,
    ACTIONS(1284), 1,
      anon_sym_POUND,
  [10172] = 1,
    ACTIONS(1286), 1,
      anon_sym_POUND,
  [10176] = 1,
    ACTIONS(1288), 1,
      anon_sym_POUND,
  [10180] = 1,
    ACTIONS(1290), 1,
      anon_sym_POUND,
  [10184] = 1,
    ACTIONS(1292), 1,
      anon_sym_POUND,
  [10188] = 1,
    ACTIONS(831), 1,
      anon_sym_POUND,
  [10192] = 1,
    ACTIONS(788), 1,
      anon_sym_POUND,
  [10196] = 1,
    ACTIONS(1294), 1,
      anon_sym_POUND,
  [10200] = 1,
    ACTIONS(1296), 1,
      anon_sym_EQ,
  [10204] = 1,
    ACTIONS(690), 1,
      anon_sym_and,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 60,
  [SMALL_STATE(4)] = 120,
  [SMALL_STATE(5)] = 180,
  [SMALL_STATE(6)] = 240,
  [SMALL_STATE(7)] = 295,
  [SMALL_STATE(8)] = 350,
  [SMALL_STATE(9)] = 423,
  [SMALL_STATE(10)] = 478,
  [SMALL_STATE(11)] = 551,
  [SMALL_STATE(12)] = 624,
  [SMALL_STATE(13)] = 697,
  [SMALL_STATE(14)] = 763,
  [SMALL_STATE(15)] = 799,
  [SMALL_STATE(16)] = 856,
  [SMALL_STATE(17)] = 895,
  [SMALL_STATE(18)] = 934,
  [SMALL_STATE(19)] = 986,
  [SMALL_STATE(20)] = 1020,
  [SMALL_STATE(21)] = 1072,
  [SMALL_STATE(22)] = 1106,
  [SMALL_STATE(23)] = 1139,
  [SMALL_STATE(24)] = 1172,
  [SMALL_STATE(25)] = 1204,
  [SMALL_STATE(26)] = 1254,
  [SMALL_STATE(27)] = 1292,
  [SMALL_STATE(28)] = 1330,
  [SMALL_STATE(29)] = 1368,
  [SMALL_STATE(30)] = 1418,
  [SMALL_STATE(31)] = 1456,
  [SMALL_STATE(32)] = 1488,
  [SMALL_STATE(33)] = 1526,
  [SMALL_STATE(34)] = 1570,
  [SMALL_STATE(35)] = 1614,
  [SMALL_STATE(36)] = 1658,
  [SMALL_STATE(37)] = 1702,
  [SMALL_STATE(38)] = 1743,
  [SMALL_STATE(39)] = 1776,
  [SMALL_STATE(40)] = 1805,
  [SMALL_STATE(41)] = 1834,
  [SMALL_STATE(42)] = 1879,
  [SMALL_STATE(43)] = 1912,
  [SMALL_STATE(44)] = 1945,
  [SMALL_STATE(45)] = 1978,
  [SMALL_STATE(46)] = 2006,
  [SMALL_STATE(47)] = 2032,
  [SMALL_STATE(48)] = 2078,
  [SMALL_STATE(49)] = 2129,
  [SMALL_STATE(50)] = 2176,
  [SMALL_STATE(51)] = 2215,
  [SMALL_STATE(52)] = 2262,
  [SMALL_STATE(53)] = 2299,
  [SMALL_STATE(54)] = 2327,
  [SMALL_STATE(55)] = 2355,
  [SMALL_STATE(56)] = 2383,
  [SMALL_STATE(57)] = 2419,
  [SMALL_STATE(58)] = 2447,
  [SMALL_STATE(59)] = 2475,
  [SMALL_STATE(60)] = 2503,
  [SMALL_STATE(61)] = 2541,
  [SMALL_STATE(62)] = 2577,
  [SMALL_STATE(63)] = 2625,
  [SMALL_STATE(64)] = 2653,
  [SMALL_STATE(65)] = 2689,
  [SMALL_STATE(66)] = 2716,
  [SMALL_STATE(67)] = 2743,
  [SMALL_STATE(68)] = 2776,
  [SMALL_STATE(69)] = 2813,
  [SMALL_STATE(70)] = 2838,
  [SMALL_STATE(71)] = 2865,
  [SMALL_STATE(72)] = 2898,
  [SMALL_STATE(73)] = 2933,
  [SMALL_STATE(74)] = 2960,
  [SMALL_STATE(75)] = 2982,
  [SMALL_STATE(76)] = 3004,
  [SMALL_STATE(77)] = 3032,
  [SMALL_STATE(78)] = 3060,
  [SMALL_STATE(79)] = 3082,
  [SMALL_STATE(80)] = 3108,
  [SMALL_STATE(81)] = 3134,
  [SMALL_STATE(82)] = 3160,
  [SMALL_STATE(83)] = 3196,
  [SMALL_STATE(84)] = 3232,
  [SMALL_STATE(85)] = 3258,
  [SMALL_STATE(86)] = 3286,
  [SMALL_STATE(87)] = 3320,
  [SMALL_STATE(88)] = 3363,
  [SMALL_STATE(89)] = 3386,
  [SMALL_STATE(90)] = 3425,
  [SMALL_STATE(91)] = 3446,
  [SMALL_STATE(92)] = 3469,
  [SMALL_STATE(93)] = 3508,
  [SMALL_STATE(94)] = 3535,
  [SMALL_STATE(95)] = 3574,
  [SMALL_STATE(96)] = 3601,
  [SMALL_STATE(97)] = 3644,
  [SMALL_STATE(98)] = 3671,
  [SMALL_STATE(99)] = 3696,
  [SMALL_STATE(100)] = 3719,
  [SMALL_STATE(101)] = 3746,
  [SMALL_STATE(102)] = 3771,
  [SMALL_STATE(103)] = 3797,
  [SMALL_STATE(104)] = 3823,
  [SMALL_STATE(105)] = 3843,
  [SMALL_STATE(106)] = 3869,
  [SMALL_STATE(107)] = 3889,
  [SMALL_STATE(108)] = 3915,
  [SMALL_STATE(109)] = 3939,
  [SMALL_STATE(110)] = 3987,
  [SMALL_STATE(111)] = 4011,
  [SMALL_STATE(112)] = 4041,
  [SMALL_STATE(113)] = 4071,
  [SMALL_STATE(114)] = 4097,
  [SMALL_STATE(115)] = 4123,
  [SMALL_STATE(116)] = 4145,
  [SMALL_STATE(117)] = 4167,
  [SMALL_STATE(118)] = 4191,
  [SMALL_STATE(119)] = 4215,
  [SMALL_STATE(120)] = 4239,
  [SMALL_STATE(121)] = 4265,
  [SMALL_STATE(122)] = 4289,
  [SMALL_STATE(123)] = 4315,
  [SMALL_STATE(124)] = 4341,
  [SMALL_STATE(125)] = 4365,
  [SMALL_STATE(126)] = 4391,
  [SMALL_STATE(127)] = 4417,
  [SMALL_STATE(128)] = 4441,
  [SMALL_STATE(129)] = 4465,
  [SMALL_STATE(130)] = 4485,
  [SMALL_STATE(131)] = 4511,
  [SMALL_STATE(132)] = 4534,
  [SMALL_STATE(133)] = 4559,
  [SMALL_STATE(134)] = 4582,
  [SMALL_STATE(135)] = 4605,
  [SMALL_STATE(136)] = 4628,
  [SMALL_STATE(137)] = 4651,
  [SMALL_STATE(138)] = 4670,
  [SMALL_STATE(139)] = 4693,
  [SMALL_STATE(140)] = 4718,
  [SMALL_STATE(141)] = 4739,
  [SMALL_STATE(142)] = 4758,
  [SMALL_STATE(143)] = 4781,
  [SMALL_STATE(144)] = 4804,
  [SMALL_STATE(145)] = 4827,
  [SMALL_STATE(146)] = 4850,
  [SMALL_STATE(147)] = 4873,
  [SMALL_STATE(148)] = 4898,
  [SMALL_STATE(149)] = 4921,
  [SMALL_STATE(150)] = 4946,
  [SMALL_STATE(151)] = 4967,
  [SMALL_STATE(152)] = 4988,
  [SMALL_STATE(153)] = 5013,
  [SMALL_STATE(154)] = 5038,
  [SMALL_STATE(155)] = 5063,
  [SMALL_STATE(156)] = 5086,
  [SMALL_STATE(157)] = 5109,
  [SMALL_STATE(158)] = 5132,
  [SMALL_STATE(159)] = 5154,
  [SMALL_STATE(160)] = 5172,
  [SMALL_STATE(161)] = 5192,
  [SMALL_STATE(162)] = 5214,
  [SMALL_STATE(163)] = 5236,
  [SMALL_STATE(164)] = 5258,
  [SMALL_STATE(165)] = 5276,
  [SMALL_STATE(166)] = 5298,
  [SMALL_STATE(167)] = 5320,
  [SMALL_STATE(168)] = 5338,
  [SMALL_STATE(169)] = 5356,
  [SMALL_STATE(170)] = 5374,
  [SMALL_STATE(171)] = 5396,
  [SMALL_STATE(172)] = 5418,
  [SMALL_STATE(173)] = 5436,
  [SMALL_STATE(174)] = 5454,
  [SMALL_STATE(175)] = 5486,
  [SMALL_STATE(176)] = 5504,
  [SMALL_STATE(177)] = 5522,
  [SMALL_STATE(178)] = 5544,
  [SMALL_STATE(179)] = 5562,
  [SMALL_STATE(180)] = 5580,
  [SMALL_STATE(181)] = 5598,
  [SMALL_STATE(182)] = 5620,
  [SMALL_STATE(183)] = 5642,
  [SMALL_STATE(184)] = 5666,
  [SMALL_STATE(185)] = 5688,
  [SMALL_STATE(186)] = 5706,
  [SMALL_STATE(187)] = 5728,
  [SMALL_STATE(188)] = 5746,
  [SMALL_STATE(189)] = 5768,
  [SMALL_STATE(190)] = 5790,
  [SMALL_STATE(191)] = 5810,
  [SMALL_STATE(192)] = 5830,
  [SMALL_STATE(193)] = 5850,
  [SMALL_STATE(194)] = 5874,
  [SMALL_STATE(195)] = 5896,
  [SMALL_STATE(196)] = 5918,
  [SMALL_STATE(197)] = 5936,
  [SMALL_STATE(198)] = 5955,
  [SMALL_STATE(199)] = 5972,
  [SMALL_STATE(200)] = 5993,
  [SMALL_STATE(201)] = 6014,
  [SMALL_STATE(202)] = 6035,
  [SMALL_STATE(203)] = 6056,
  [SMALL_STATE(204)] = 6077,
  [SMALL_STATE(205)] = 6096,
  [SMALL_STATE(206)] = 6117,
  [SMALL_STATE(207)] = 6134,
  [SMALL_STATE(208)] = 6153,
  [SMALL_STATE(209)] = 6174,
  [SMALL_STATE(210)] = 6193,
  [SMALL_STATE(211)] = 6212,
  [SMALL_STATE(212)] = 6241,
  [SMALL_STATE(213)] = 6262,
  [SMALL_STATE(214)] = 6283,
  [SMALL_STATE(215)] = 6304,
  [SMALL_STATE(216)] = 6323,
  [SMALL_STATE(217)] = 6344,
  [SMALL_STATE(218)] = 6361,
  [SMALL_STATE(219)] = 6382,
  [SMALL_STATE(220)] = 6403,
  [SMALL_STATE(221)] = 6432,
  [SMALL_STATE(222)] = 6451,
  [SMALL_STATE(223)] = 6472,
  [SMALL_STATE(224)] = 6493,
  [SMALL_STATE(225)] = 6512,
  [SMALL_STATE(226)] = 6531,
  [SMALL_STATE(227)] = 6552,
  [SMALL_STATE(228)] = 6581,
  [SMALL_STATE(229)] = 6598,
  [SMALL_STATE(230)] = 6619,
  [SMALL_STATE(231)] = 6640,
  [SMALL_STATE(232)] = 6661,
  [SMALL_STATE(233)] = 6680,
  [SMALL_STATE(234)] = 6701,
  [SMALL_STATE(235)] = 6722,
  [SMALL_STATE(236)] = 6741,
  [SMALL_STATE(237)] = 6758,
  [SMALL_STATE(238)] = 6779,
  [SMALL_STATE(239)] = 6800,
  [SMALL_STATE(240)] = 6817,
  [SMALL_STATE(241)] = 6843,
  [SMALL_STATE(242)] = 6869,
  [SMALL_STATE(243)] = 6895,
  [SMALL_STATE(244)] = 6921,
  [SMALL_STATE(245)] = 6947,
  [SMALL_STATE(246)] = 6963,
  [SMALL_STATE(247)] = 6979,
  [SMALL_STATE(248)] = 7005,
  [SMALL_STATE(249)] = 7031,
  [SMALL_STATE(250)] = 7057,
  [SMALL_STATE(251)] = 7083,
  [SMALL_STATE(252)] = 7099,
  [SMALL_STATE(253)] = 7115,
  [SMALL_STATE(254)] = 7141,
  [SMALL_STATE(255)] = 7167,
  [SMALL_STATE(256)] = 7187,
  [SMALL_STATE(257)] = 7213,
  [SMALL_STATE(258)] = 7229,
  [SMALL_STATE(259)] = 7255,
  [SMALL_STATE(260)] = 7273,
  [SMALL_STATE(261)] = 7291,
  [SMALL_STATE(262)] = 7309,
  [SMALL_STATE(263)] = 7335,
  [SMALL_STATE(264)] = 7351,
  [SMALL_STATE(265)] = 7367,
  [SMALL_STATE(266)] = 7393,
  [SMALL_STATE(267)] = 7419,
  [SMALL_STATE(268)] = 7445,
  [SMALL_STATE(269)] = 7471,
  [SMALL_STATE(270)] = 7497,
  [SMALL_STATE(271)] = 7523,
  [SMALL_STATE(272)] = 7549,
  [SMALL_STATE(273)] = 7575,
  [SMALL_STATE(274)] = 7601,
  [SMALL_STATE(275)] = 7627,
  [SMALL_STATE(276)] = 7643,
  [SMALL_STATE(277)] = 7659,
  [SMALL_STATE(278)] = 7675,
  [SMALL_STATE(279)] = 7701,
  [SMALL_STATE(280)] = 7727,
  [SMALL_STATE(281)] = 7745,
  [SMALL_STATE(282)] = 7771,
  [SMALL_STATE(283)] = 7787,
  [SMALL_STATE(284)] = 7807,
  [SMALL_STATE(285)] = 7825,
  [SMALL_STATE(286)] = 7843,
  [SMALL_STATE(287)] = 7869,
  [SMALL_STATE(288)] = 7884,
  [SMALL_STATE(289)] = 7899,
  [SMALL_STATE(290)] = 7914,
  [SMALL_STATE(291)] = 7929,
  [SMALL_STATE(292)] = 7944,
  [SMALL_STATE(293)] = 7959,
  [SMALL_STATE(294)] = 7974,
  [SMALL_STATE(295)] = 7989,
  [SMALL_STATE(296)] = 8004,
  [SMALL_STATE(297)] = 8019,
  [SMALL_STATE(298)] = 8034,
  [SMALL_STATE(299)] = 8049,
  [SMALL_STATE(300)] = 8064,
  [SMALL_STATE(301)] = 8079,
  [SMALL_STATE(302)] = 8094,
  [SMALL_STATE(303)] = 8109,
  [SMALL_STATE(304)] = 8126,
  [SMALL_STATE(305)] = 8141,
  [SMALL_STATE(306)] = 8156,
  [SMALL_STATE(307)] = 8171,
  [SMALL_STATE(308)] = 8186,
  [SMALL_STATE(309)] = 8201,
  [SMALL_STATE(310)] = 8216,
  [SMALL_STATE(311)] = 8231,
  [SMALL_STATE(312)] = 8246,
  [SMALL_STATE(313)] = 8261,
  [SMALL_STATE(314)] = 8276,
  [SMALL_STATE(315)] = 8291,
  [SMALL_STATE(316)] = 8306,
  [SMALL_STATE(317)] = 8321,
  [SMALL_STATE(318)] = 8336,
  [SMALL_STATE(319)] = 8350,
  [SMALL_STATE(320)] = 8379,
  [SMALL_STATE(321)] = 8402,
  [SMALL_STATE(322)] = 8425,
  [SMALL_STATE(323)] = 8444,
  [SMALL_STATE(324)] = 8460,
  [SMALL_STATE(325)] = 8476,
  [SMALL_STATE(326)] = 8491,
  [SMALL_STATE(327)] = 8513,
  [SMALL_STATE(328)] = 8535,
  [SMALL_STATE(329)] = 8557,
  [SMALL_STATE(330)] = 8579,
  [SMALL_STATE(331)] = 8589,
  [SMALL_STATE(332)] = 8602,
  [SMALL_STATE(333)] = 8615,
  [SMALL_STATE(334)] = 8634,
  [SMALL_STATE(335)] = 8647,
  [SMALL_STATE(336)] = 8660,
  [SMALL_STATE(337)] = 8674,
  [SMALL_STATE(338)] = 8690,
  [SMALL_STATE(339)] = 8702,
  [SMALL_STATE(340)] = 8718,
  [SMALL_STATE(341)] = 8732,
  [SMALL_STATE(342)] = 8744,
  [SMALL_STATE(343)] = 8756,
  [SMALL_STATE(344)] = 8772,
  [SMALL_STATE(345)] = 8784,
  [SMALL_STATE(346)] = 8796,
  [SMALL_STATE(347)] = 8812,
  [SMALL_STATE(348)] = 8828,
  [SMALL_STATE(349)] = 8840,
  [SMALL_STATE(350)] = 8856,
  [SMALL_STATE(351)] = 8872,
  [SMALL_STATE(352)] = 8883,
  [SMALL_STATE(353)] = 8894,
  [SMALL_STATE(354)] = 8905,
  [SMALL_STATE(355)] = 8916,
  [SMALL_STATE(356)] = 8923,
  [SMALL_STATE(357)] = 8934,
  [SMALL_STATE(358)] = 8945,
  [SMALL_STATE(359)] = 8956,
  [SMALL_STATE(360)] = 8967,
  [SMALL_STATE(361)] = 8980,
  [SMALL_STATE(362)] = 8993,
  [SMALL_STATE(363)] = 9004,
  [SMALL_STATE(364)] = 9015,
  [SMALL_STATE(365)] = 9026,
  [SMALL_STATE(366)] = 9037,
  [SMALL_STATE(367)] = 9048,
  [SMALL_STATE(368)] = 9059,
  [SMALL_STATE(369)] = 9070,
  [SMALL_STATE(370)] = 9081,
  [SMALL_STATE(371)] = 9094,
  [SMALL_STATE(372)] = 9107,
  [SMALL_STATE(373)] = 9118,
  [SMALL_STATE(374)] = 9131,
  [SMALL_STATE(375)] = 9144,
  [SMALL_STATE(376)] = 9157,
  [SMALL_STATE(377)] = 9170,
  [SMALL_STATE(378)] = 9181,
  [SMALL_STATE(379)] = 9192,
  [SMALL_STATE(380)] = 9205,
  [SMALL_STATE(381)] = 9218,
  [SMALL_STATE(382)] = 9228,
  [SMALL_STATE(383)] = 9236,
  [SMALL_STATE(384)] = 9246,
  [SMALL_STATE(385)] = 9256,
  [SMALL_STATE(386)] = 9266,
  [SMALL_STATE(387)] = 9276,
  [SMALL_STATE(388)] = 9286,
  [SMALL_STATE(389)] = 9296,
  [SMALL_STATE(390)] = 9306,
  [SMALL_STATE(391)] = 9316,
  [SMALL_STATE(392)] = 9326,
  [SMALL_STATE(393)] = 9336,
  [SMALL_STATE(394)] = 9346,
  [SMALL_STATE(395)] = 9356,
  [SMALL_STATE(396)] = 9366,
  [SMALL_STATE(397)] = 9376,
  [SMALL_STATE(398)] = 9386,
  [SMALL_STATE(399)] = 9396,
  [SMALL_STATE(400)] = 9406,
  [SMALL_STATE(401)] = 9416,
  [SMALL_STATE(402)] = 9426,
  [SMALL_STATE(403)] = 9436,
  [SMALL_STATE(404)] = 9446,
  [SMALL_STATE(405)] = 9456,
  [SMALL_STATE(406)] = 9464,
  [SMALL_STATE(407)] = 9474,
  [SMALL_STATE(408)] = 9484,
  [SMALL_STATE(409)] = 9494,
  [SMALL_STATE(410)] = 9504,
  [SMALL_STATE(411)] = 9514,
  [SMALL_STATE(412)] = 9524,
  [SMALL_STATE(413)] = 9534,
  [SMALL_STATE(414)] = 9544,
  [SMALL_STATE(415)] = 9554,
  [SMALL_STATE(416)] = 9564,
  [SMALL_STATE(417)] = 9574,
  [SMALL_STATE(418)] = 9584,
  [SMALL_STATE(419)] = 9594,
  [SMALL_STATE(420)] = 9604,
  [SMALL_STATE(421)] = 9614,
  [SMALL_STATE(422)] = 9624,
  [SMALL_STATE(423)] = 9634,
  [SMALL_STATE(424)] = 9644,
  [SMALL_STATE(425)] = 9654,
  [SMALL_STATE(426)] = 9664,
  [SMALL_STATE(427)] = 9674,
  [SMALL_STATE(428)] = 9684,
  [SMALL_STATE(429)] = 9694,
  [SMALL_STATE(430)] = 9704,
  [SMALL_STATE(431)] = 9714,
  [SMALL_STATE(432)] = 9724,
  [SMALL_STATE(433)] = 9734,
  [SMALL_STATE(434)] = 9744,
  [SMALL_STATE(435)] = 9754,
  [SMALL_STATE(436)] = 9764,
  [SMALL_STATE(437)] = 9774,
  [SMALL_STATE(438)] = 9784,
  [SMALL_STATE(439)] = 9794,
  [SMALL_STATE(440)] = 9804,
  [SMALL_STATE(441)] = 9814,
  [SMALL_STATE(442)] = 9824,
  [SMALL_STATE(443)] = 9834,
  [SMALL_STATE(444)] = 9844,
  [SMALL_STATE(445)] = 9854,
  [SMALL_STATE(446)] = 9864,
  [SMALL_STATE(447)] = 9874,
  [SMALL_STATE(448)] = 9884,
  [SMALL_STATE(449)] = 9891,
  [SMALL_STATE(450)] = 9898,
  [SMALL_STATE(451)] = 9905,
  [SMALL_STATE(452)] = 9912,
  [SMALL_STATE(453)] = 9919,
  [SMALL_STATE(454)] = 9926,
  [SMALL_STATE(455)] = 9933,
  [SMALL_STATE(456)] = 9940,
  [SMALL_STATE(457)] = 9947,
  [SMALL_STATE(458)] = 9952,
  [SMALL_STATE(459)] = 9959,
  [SMALL_STATE(460)] = 9966,
  [SMALL_STATE(461)] = 9973,
  [SMALL_STATE(462)] = 9980,
  [SMALL_STATE(463)] = 9987,
  [SMALL_STATE(464)] = 9992,
  [SMALL_STATE(465)] = 9996,
  [SMALL_STATE(466)] = 10000,
  [SMALL_STATE(467)] = 10004,
  [SMALL_STATE(468)] = 10008,
  [SMALL_STATE(469)] = 10012,
  [SMALL_STATE(470)] = 10016,
  [SMALL_STATE(471)] = 10020,
  [SMALL_STATE(472)] = 10024,
  [SMALL_STATE(473)] = 10028,
  [SMALL_STATE(474)] = 10032,
  [SMALL_STATE(475)] = 10036,
  [SMALL_STATE(476)] = 10040,
  [SMALL_STATE(477)] = 10044,
  [SMALL_STATE(478)] = 10048,
  [SMALL_STATE(479)] = 10052,
  [SMALL_STATE(480)] = 10056,
  [SMALL_STATE(481)] = 10060,
  [SMALL_STATE(482)] = 10064,
  [SMALL_STATE(483)] = 10068,
  [SMALL_STATE(484)] = 10072,
  [SMALL_STATE(485)] = 10076,
  [SMALL_STATE(486)] = 10080,
  [SMALL_STATE(487)] = 10084,
  [SMALL_STATE(488)] = 10088,
  [SMALL_STATE(489)] = 10092,
  [SMALL_STATE(490)] = 10096,
  [SMALL_STATE(491)] = 10100,
  [SMALL_STATE(492)] = 10104,
  [SMALL_STATE(493)] = 10108,
  [SMALL_STATE(494)] = 10112,
  [SMALL_STATE(495)] = 10116,
  [SMALL_STATE(496)] = 10120,
  [SMALL_STATE(497)] = 10124,
  [SMALL_STATE(498)] = 10128,
  [SMALL_STATE(499)] = 10132,
  [SMALL_STATE(500)] = 10136,
  [SMALL_STATE(501)] = 10140,
  [SMALL_STATE(502)] = 10144,
  [SMALL_STATE(503)] = 10148,
  [SMALL_STATE(504)] = 10152,
  [SMALL_STATE(505)] = 10156,
  [SMALL_STATE(506)] = 10160,
  [SMALL_STATE(507)] = 10164,
  [SMALL_STATE(508)] = 10168,
  [SMALL_STATE(509)] = 10172,
  [SMALL_STATE(510)] = 10176,
  [SMALL_STATE(511)] = 10180,
  [SMALL_STATE(512)] = 10184,
  [SMALL_STATE(513)] = 10188,
  [SMALL_STATE(514)] = 10192,
  [SMALL_STATE(515)] = 10196,
  [SMALL_STATE(516)] = 10200,
  [SMALL_STATE(517)] = 10204,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_rule, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(17),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_name, 1), REDUCE(sym_path, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 2, .production_id = 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 2, .production_id = 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 4),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance, 4),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 5),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_logical_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_logical_repeat1, 2), SHIFT_REPEAT(87),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 3),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3, .production_id = 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3, .production_id = 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(493),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(503),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(487),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(486),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(491),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_definition, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat2, 2),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat2, 2), SHIFT_REPEAT(96),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 5),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 5),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concept, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(483),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(501),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(484),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(502),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(467),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(469),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(473),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(474),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(477),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(478),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instance_repeat1, 2),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(493),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(489),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(491),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(488),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(493),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(494),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(497),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(491),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 5),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2), SHIFT_REPEAT(74),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invariant, 4),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 1),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 2),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_name, 1), REDUCE(sym_value, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ratio_part, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(493),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(482),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(465),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(490),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2), SHIFT_REPEAT(425),
  [379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2), SHIFT_REPEAT(387),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_rule, 4),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_rule, 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(493),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(495),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(491),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_rule, 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(493),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(495),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(491),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_rule, 4),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_insert_rule_repeat1, 1),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 1),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(85),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 3),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [433] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(80),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(80),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 4),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 3),
  [447] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(84),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(85),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_operator, 1),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vs_filter_operator, 1),
  [469] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(93),
  [472] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(93),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [481] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(100),
  [484] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(101),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 5),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [505] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(110),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 5),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 5),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instance_repeat2, 2),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat2, 2), SHIFT_REPEAT(333),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_string, 1),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [521] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(119),
  [524] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(121),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 5),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_valueset_repeat2, 2),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat2, 2), SHIFT_REPEAT(109),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_repeat2, 2),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat2, 2), SHIFT_REPEAT(329),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 5),
  [543] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(127),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_metadata, 1),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat2, 2),
  [552] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat2, 2), SHIFT_REPEAT(328),
  [555] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(131),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 7),
  [560] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(133),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [565] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(135),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sd_metadata, 1),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 6),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_metadata, 1),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance_metadata, 1),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parent, 3),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [584] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(143),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [591] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(146),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 5),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_cre_element_rule, 6),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_of, 3),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance_of, 3),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usage, 3),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usage, 3),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concept, 3),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [620] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(156),
  [623] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(157),
  [626] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(158),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 3),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_valueset, 3),
  [633] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(161),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 5),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag, 1),
  [644] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(166),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_severity, 3),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath, 3),
  [653] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(170),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 5),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 6),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_string, 2),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 7),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invariant_metadata, 1),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 4),
  [680] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(181),
  [683] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(182),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 1),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 4),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2), SHIFT_REPEAT(250),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_metadata, 1),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_valueset, 2),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2),
  [709] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2), SHIFT_REPEAT(260),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cs_metadata, 1),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 1),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_type, 1, .production_id = 4),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vs_filter_list_repeat1, 2),
  [726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vs_filter_list_repeat1, 2), SHIFT_REPEAT(220),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_only_rule, 5),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2),
  [735] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2), SHIFT_REPEAT(94),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 5),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_system, 2),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_rule, 5),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 3),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_rule, 4),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_list, 2),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_rule, 4),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 4),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_type, 1),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_only_rule, 4),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_list, 1),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component_from, 2),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [778] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(226),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 3),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [785] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(230),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 3),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [794] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2), SHIFT_REPEAT(265),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contains_rule_repeat1, 2),
  [799] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contains_rule_repeat1, 2), SHIFT_REPEAT(211),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_definition, 3),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_value, 1),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [818] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(255),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component_from, 4),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_value_rule, 4),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 3),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ratio, 3),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_component, 2),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lr_rule, 1),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component, 3),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_caret_value_rule, 5),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sd_rule, 1),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 8),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_rule, 2),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 2),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_insert_rule, 3),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_component, 4),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_rule, 1),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 6),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 5, .production_id = 1),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_cre_element_rule, 7),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concept, 4),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_rule, 3),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_rule, 1),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_value_rule, 5),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_insert_rule, 2),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_value_rule, 4),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_entity_rule, 1),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cs_rule, 1),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_rule, 5),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component, 2),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 3),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_value_rule, 7),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strength, 3),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [915] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(324),
  [918] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_rule_repeat1, 2), SHIFT_REPEAT(337),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_rule_repeat1, 2),
  [923] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2), SHIFT_REPEAT(400),
  [926] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2), SHIFT_REPEAT(387),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [939] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(331),
  [942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [946] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(334),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [955] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(338),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [962] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(340),
  [965] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [975] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(345),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [982] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(348),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [991] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [993] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(351),
  [996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1000] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(353),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [1011] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(358),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [1020] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1024] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1028] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1032] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1036] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(367),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1049] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(372),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [1070] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(378),
  [1073] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(379),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1084] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [1086] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(388),
  [1089] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(389),
  [1092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 2),
  [1108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 2), SHIFT_REPEAT(411),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reference_repeat1, 2),
  [1117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reference_repeat1, 2), SHIFT_REPEAT(413),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2),
  [1132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(414),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(389),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(438),
  [1165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2), SHIFT_REPEAT(92),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2),
  [1190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 4),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1230] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_path, 2),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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
