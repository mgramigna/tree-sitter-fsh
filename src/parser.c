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
#define STATE_COUNT 400
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 158
#define ALIAS_COUNT 4
#define TOKEN_COUNT 68
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
  anon_sym_POUND = 35,
  aux_sym_sequence_token1 = 36,
  anon_sym_CARET = 37,
  aux_sym_cardinality_token1 = 38,
  anon_sym_DOT_DOT = 39,
  anon_sym_STAR2 = 40,
  anon_sym_DQUOTE = 41,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 42,
  sym_double_quote_string_fragment = 43,
  sym_escape_sequence = 44,
  sym_number = 45,
  sym_date = 46,
  sym_time = 47,
  anon_sym_T = 48,
  anon_sym_SQUOTE = 49,
  aux_sym_unit_token1 = 50,
  anon_sym_true = 51,
  anon_sym_false = 52,
  anon_sym_system = 53,
  anon_sym_example = 54,
  anon_sym_preferred = 55,
  anon_sym_extensible = 56,
  anon_sym_required = 57,
  anon_sym_Reference = 58,
  anon_sym_Canonical = 59,
  anon_sym_PIPE = 60,
  anon_sym_named = 61,
  anon_sym_QMARK_BANG = 62,
  anon_sym_MS = 63,
  anon_sym_SU = 64,
  anon_sym_TU = 65,
  anon_sym_N = 66,
  anon_sym_D = 67,
  sym_doc = 68,
  sym_alias = 69,
  sym_profile = 70,
  sym_extension = 71,
  sym_invariant = 72,
  sym_instance = 73,
  sym_valueset = 74,
  sym_codesystem = 75,
  sym_mapping = 76,
  sym_logical = 77,
  sym_resource = 78,
  sym_sd_metadata = 79,
  sym_instance_metadata = 80,
  sym_invariant_metadata = 81,
  sym_vs_metadata = 82,
  sym_cs_metadata = 83,
  sym_mapping_metadata = 84,
  sym_description = 85,
  sym_expression = 86,
  sym_id = 87,
  sym_instance_of = 88,
  sym_parent = 89,
  sym_severity = 90,
  sym_source = 91,
  sym_target = 92,
  sym_title = 93,
  sym_usage = 94,
  sym_xpath = 95,
  sym_sd_rule = 96,
  sym_lr_rule = 97,
  sym_vs_rule = 98,
  sym_cs_rule = 99,
  sym_instance_rule = 100,
  sym_mapping_entity_rule = 101,
  sym_cardinality_rule = 102,
  sym_valueset_rule = 103,
  sym_fixed_value_rule = 104,
  sym_contains_rule = 105,
  sym_caret_value_rule = 106,
  sym_code_caret_value_rule = 107,
  sym_obeys_rule = 108,
  sym_path_rule = 109,
  sym_flag_rule = 110,
  sym_only_rule = 111,
  sym_mapping_rule = 112,
  sym_add_element_rule = 113,
  sym_code = 114,
  sym_sequence = 115,
  sym_caret_path = 116,
  sym_name = 117,
  sym_cardinality = 118,
  sym_string = 119,
  sym_multiline_string = 120,
  sym_datetime = 121,
  sym_unit = 122,
  sym_quantity = 123,
  sym_ratio_part = 124,
  sym_ratio = 125,
  sym_bool = 126,
  sym_path = 127,
  sym_strength = 128,
  sym_reference = 129,
  sym_canonical = 130,
  sym_value = 131,
  sym_item = 132,
  sym_flag = 133,
  sym_target_type = 134,
  aux_sym_doc_repeat1 = 135,
  aux_sym_profile_repeat1 = 136,
  aux_sym_profile_repeat2 = 137,
  aux_sym_invariant_repeat1 = 138,
  aux_sym_instance_repeat1 = 139,
  aux_sym_instance_repeat2 = 140,
  aux_sym_valueset_repeat1 = 141,
  aux_sym_valueset_repeat2 = 142,
  aux_sym_codesystem_repeat1 = 143,
  aux_sym_codesystem_repeat2 = 144,
  aux_sym_mapping_repeat1 = 145,
  aux_sym_mapping_repeat2 = 146,
  aux_sym_logical_repeat1 = 147,
  aux_sym_cardinality_rule_repeat1 = 148,
  aux_sym_contains_rule_repeat1 = 149,
  aux_sym_obeys_rule_repeat1 = 150,
  aux_sym_flag_rule_repeat1 = 151,
  aux_sym_only_rule_repeat1 = 152,
  aux_sym_sequence_repeat1 = 153,
  aux_sym_string_repeat1 = 154,
  aux_sym_unit_repeat1 = 155,
  aux_sym_reference_repeat1 = 156,
  aux_sym_canonical_repeat1 = 157,
  alias_sym_alias_name = 158,
  alias_sym_code_system = 159,
  alias_sym_code_value = 160,
  alias_sym_reference_type = 161,
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
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_system] = "system",
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
  [sym_code] = "code",
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
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_system] = anon_sym_system,
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
  [sym_code] = sym_code,
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_system] = {
    .visible = true,
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
  [sym_code] = {
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
  [20] = 17,
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
  [67] = 67,
  [68] = 58,
  [69] = 67,
  [70] = 70,
  [71] = 71,
  [72] = 11,
  [73] = 73,
  [74] = 12,
  [75] = 75,
  [76] = 76,
  [77] = 11,
  [78] = 12,
  [79] = 79,
  [80] = 11,
  [81] = 12,
  [82] = 12,
  [83] = 11,
  [84] = 11,
  [85] = 85,
  [86] = 12,
  [87] = 87,
  [88] = 88,
  [89] = 11,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 12,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 11,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 12,
  [104] = 11,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 12,
  [111] = 11,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 12,
  [116] = 116,
  [117] = 11,
  [118] = 11,
  [119] = 119,
  [120] = 120,
  [121] = 18,
  [122] = 122,
  [123] = 123,
  [124] = 19,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 12,
  [129] = 11,
  [130] = 130,
  [131] = 131,
  [132] = 12,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 12,
  [138] = 11,
  [139] = 12,
  [140] = 11,
  [141] = 141,
  [142] = 12,
  [143] = 143,
  [144] = 144,
  [145] = 11,
  [146] = 11,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 12,
  [151] = 151,
  [152] = 12,
  [153] = 153,
  [154] = 12,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 11,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 11,
  [169] = 169,
  [170] = 170,
  [171] = 12,
  [172] = 19,
  [173] = 173,
  [174] = 18,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 177,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 11,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 12,
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
  [212] = 53,
  [213] = 56,
  [214] = 52,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 76,
  [220] = 71,
  [221] = 70,
  [222] = 12,
  [223] = 11,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 225,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 11,
  [232] = 11,
  [233] = 12,
  [234] = 234,
  [235] = 12,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 12,
  [244] = 11,
  [245] = 245,
  [246] = 11,
  [247] = 247,
  [248] = 12,
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
  [259] = 11,
  [260] = 12,
  [261] = 261,
  [262] = 262,
  [263] = 11,
  [264] = 12,
  [265] = 265,
  [266] = 266,
  [267] = 11,
  [268] = 12,
  [269] = 269,
  [270] = 258,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 257,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 258,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 253,
  [284] = 253,
  [285] = 285,
  [286] = 257,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 275,
  [292] = 292,
  [293] = 293,
  [294] = 293,
  [295] = 295,
  [296] = 293,
  [297] = 295,
  [298] = 293,
  [299] = 299,
  [300] = 300,
  [301] = 295,
  [302] = 293,
  [303] = 295,
  [304] = 304,
  [305] = 293,
  [306] = 295,
  [307] = 293,
  [308] = 295,
  [309] = 309,
  [310] = 293,
  [311] = 311,
  [312] = 312,
  [313] = 295,
  [314] = 314,
  [315] = 295,
  [316] = 316,
  [317] = 164,
  [318] = 12,
  [319] = 11,
  [320] = 12,
  [321] = 11,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 295,
  [326] = 326,
  [327] = 299,
  [328] = 293,
  [329] = 329,
  [330] = 330,
  [331] = 295,
  [332] = 12,
  [333] = 333,
  [334] = 293,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 11,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 358,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 357,
  [389] = 382,
  [390] = 390,
  [391] = 369,
  [392] = 357,
  [393] = 382,
  [394] = 382,
  [395] = 382,
  [396] = 382,
  [397] = 382,
  [398] = 382,
  [399] = 382,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(290);
      if (lookahead == '"') ADVANCE(384);
      if (lookahead == '#') ADVANCE(326);
      if (lookahead == '\'') ADVANCE(405);
      if (lookahead == '(') ADVANCE(317);
      if (lookahead == ')') ADVANCE(319);
      if (lookahead == '*') ADVANCE(382);
      if (lookahead == '-') ADVANCE(331);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '=') ADVANCE(293);
      if (lookahead == '?') ADVANCE(328);
      if (lookahead == 'A') ADVANCE(360);
      if (lookahead == 'C') ADVANCE(339);
      if (lookahead == 'D') ADVANCE(424);
      if (lookahead == 'E') ADVANCE(373);
      if (lookahead == 'I') ADVANCE(352);
      if (lookahead == 'L') ADVANCE(365);
      if (lookahead == 'M') ADVANCE(334);
      if (lookahead == 'N') ADVANCE(423);
      if (lookahead == 'P') ADVANCE(342);
      if (lookahead == 'R') ADVANCE(354);
      if (lookahead == 'S') ADVANCE(336);
      if (lookahead == 'T') ADVANCE(404);
      if (lookahead == 'U') ADVANCE(372);
      if (lookahead == 'V') ADVANCE(343);
      if (lookahead == 'X') ADVANCE(332);
      if (lookahead == '^') ADVANCE(379);
      if (lookahead == 'a') ADVANCE(362);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == 'f') ADVANCE(347);
      if (lookahead == 'n') ADVANCE(344);
      if (lookahead == 'o') ADVANCE(350);
      if (lookahead == 's') ADVANCE(376);
      if (lookahead == 't') ADVANCE(371);
      if (lookahead == '|') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(419);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(384);
      if (lookahead == '#') ADVANCE(326);
      if (lookahead == 'C') ADVANCE(338);
      if (lookahead == 'R') ADVANCE(358);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead == 't') ADVANCE(371);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(385);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(386);
      if (lookahead != 0) ADVANCE(387);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(386);
      if (lookahead != 0) ADVANCE(387);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(405);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(406);
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(319);
      if (lookahead == 'o') ADVANCE(369);
      if (lookahead == '|') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(319);
      if (lookahead == 'o') ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(382);
      if (lookahead == '?') ADVANCE(328);
      if (lookahead == 'C') ADVANCE(338);
      if (lookahead == 'D') ADVANCE(424);
      if (lookahead == 'M') ADVANCE(333);
      if (lookahead == 'N') ADVANCE(423);
      if (lookahead == 'R') ADVANCE(358);
      if (lookahead == 'S') ADVANCE(335);
      if (lookahead == 'T') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(331);
      if (lookahead == 's') ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'n') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(381);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(252);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(325);
      END_STATE();
    case 20:
      if (lookahead == '?') ADVANCE(328);
      if (lookahead == 'C') ADVANCE(338);
      if (lookahead == 'D') ADVANCE(424);
      if (lookahead == 'M') ADVANCE(333);
      if (lookahead == 'N') ADVANCE(423);
      if (lookahead == 'R') ADVANCE(358);
      if (lookahead == 'S') ADVANCE(335);
      if (lookahead == 'T') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 21:
      if (lookahead == '?') ADVANCE(328);
      if (lookahead == 'D') ADVANCE(424);
      if (lookahead == 'M') ADVANCE(333);
      if (lookahead == 'N') ADVANCE(423);
      if (lookahead == 'S') ADVANCE(335);
      if (lookahead == 'T') ADVANCE(337);
      if (lookahead == 'a') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 22:
      if (lookahead == 'C') ADVANCE(338);
      if (lookahead == 'R') ADVANCE(358);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 23:
      if (lookahead == 'D') ADVANCE(356);
      if (lookahead == 'E') ADVANCE(374);
      if (lookahead == 'S') ADVANCE(355);
      if (lookahead == 'X') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 24:
      if (lookahead == 'D') ADVANCE(356);
      if (lookahead == 'I') ADVANCE(351);
      if (lookahead == 'P') ADVANCE(341);
      if (lookahead == 'T') ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 25:
      if (lookahead == 'P') ADVANCE(40);
      END_STATE();
    case 26:
      if (lookahead == 'S') ADVANCE(420);
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 27:
      if (lookahead == 'S') ADVANCE(236);
      END_STATE();
    case 28:
      if (lookahead == 'S') ADVANCE(95);
      END_STATE();
    case 29:
      if (lookahead == 'U') ADVANCE(421);
      END_STATE();
    case 30:
      if (lookahead == 'U') ADVANCE(422);
      END_STATE();
    case 31:
      if (lookahead == '^') ADVANCE(379);
      if (lookahead == 'o') ADVANCE(348);
      if (lookahead == 's') ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 32:
      if (lookahead == '^') ADVANCE(379);
      if (lookahead == 's') ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 33:
      if (lookahead == '^') ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 50:
      if (lookahead == 'b') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 51:
      if (lookahead == 'b') ADVANCE(135);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(182);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead == 'm') ADVANCE(173);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(306);
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(321);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(418);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(414);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(412);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(228);
      if (lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 102:
      if (lookahead == 'f') ADVANCE(307);
      END_STATE();
    case 103:
      if (lookahead == 'f') ADVANCE(122);
      END_STATE();
    case 104:
      if (lookahead == 'f') ADVANCE(99);
      END_STATE();
    case 105:
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 106:
      if (lookahead == 'f') ADVANCE(94);
      END_STATE();
    case 107:
      if (lookahead == 'g') ADVANCE(301);
      END_STATE();
    case 108:
      if (lookahead == 'g') ADVANCE(112);
      END_STATE();
    case 109:
      if (lookahead == 'g') ADVANCE(93);
      END_STATE();
    case 110:
      if (lookahead == 'g') ADVANCE(72);
      END_STATE();
    case 111:
      if (lookahead == 'h') ADVANCE(314);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(302);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(416);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(234);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 137:
      if (lookahead == 'm') ADVANCE(316);
      END_STATE();
    case 138:
      if (lookahead == 'm') ADVANCE(410);
      END_STATE();
    case 139:
      if (lookahead == 'm') ADVANCE(300);
      END_STATE();
    case 140:
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(295);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(305);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(304);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 168:
      if (lookahead == 'p') ADVANCE(169);
      END_STATE();
    case 169:
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 170:
      if (lookahead == 'p') ADVANCE(220);
      END_STATE();
    case 171:
      if (lookahead == 'p') ADVANCE(183);
      END_STATE();
    case 172:
      if (lookahead == 'p') ADVANCE(183);
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 173:
      if (lookahead == 'p') ADVANCE(134);
      END_STATE();
    case 174:
      if (lookahead == 'q') ADVANCE(224);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(324);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 191:
      if (lookahead == 's') ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(191)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 192:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(291);
      END_STATE();
    case 194:
      if (lookahead == 's') ADVANCE(322);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(320);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'v') ADVANCE(42);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 199:
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(219);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(221);
      if (lookahead == 'v') ADVANCE(42);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(308);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 222:
      if (lookahead == 'u') ADVANCE(237);
      if (lookahead == 'x') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(390);
      if (lookahead != 0) ADVANCE(388);
      END_STATE();
    case 223:
      if (lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 224:
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 225:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 226:
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 227:
      if (lookahead == 'u') ADVANCE(189);
      END_STATE();
    case 228:
      if (lookahead == 'v') ADVANCE(91);
      END_STATE();
    case 229:
      if (lookahead == 'x') ADVANCE(172);
      END_STATE();
    case 230:
      if (lookahead == 'x') ADVANCE(38);
      END_STATE();
    case 231:
      if (lookahead == 'x') ADVANCE(212);
      END_STATE();
    case 232:
      if (lookahead == 'y') ADVANCE(323);
      END_STATE();
    case 233:
      if (lookahead == 'y') ADVANCE(309);
      END_STATE();
    case 234:
      if (lookahead == 'y') ADVANCE(318);
      END_STATE();
    case 235:
      if (lookahead == 'y') ADVANCE(194);
      END_STATE();
    case 236:
      if (lookahead == 'y') ADVANCE(203);
      END_STATE();
    case 237:
      if (lookahead == '{') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(256);
      END_STATE();
    case 238:
      if (lookahead == '}') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      END_STATE();
    case 239:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(239)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 240:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      END_STATE();
    case 241:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(395);
      END_STATE();
    case 242:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(398);
      END_STATE();
    case 243:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 244:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(401);
      END_STATE();
    case 245:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(397);
      END_STATE();
    case 246:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      END_STATE();
    case 247:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      END_STATE();
    case 248:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(396);
      END_STATE();
    case 249:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      END_STATE();
    case 250:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      END_STATE();
    case 251:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      END_STATE();
    case 252:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      END_STATE();
    case 253:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      END_STATE();
    case 254:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 255:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(400);
      END_STATE();
    case 256:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(259);
      END_STATE();
    case 257:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(388);
      END_STATE();
    case 258:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      END_STATE();
    case 259:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      END_STATE();
    case 260:
      if (eof) ADVANCE(290);
      if (lookahead == '"') ADVANCE(384);
      if (lookahead == '(') ADVANCE(317);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == 'A') ADVANCE(126);
      if (lookahead == 'C') ADVANCE(158);
      if (lookahead == 'D') ADVANCE(96);
      if (lookahead == 'E') ADVANCE(229);
      if (lookahead == 'I') ADVANCE(61);
      if (lookahead == 'L') ADVANCE(159);
      if (lookahead == 'M') ADVANCE(34);
      if (lookahead == 'P') ADVANCE(35);
      if (lookahead == 'R') ADVANCE(97);
      if (lookahead == 'S') ADVANCE(67);
      if (lookahead == 'T') ADVANCE(39);
      if (lookahead == 'U') ADVANCE(192);
      if (lookahead == 'V') ADVANCE(36);
      if (lookahead == 'X') ADVANCE(25);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(260)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      END_STATE();
    case 261:
      if (eof) ADVANCE(290);
      if (lookahead == '"') ADVANCE(384);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '=') ADVANCE(293);
      if (lookahead == '?') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(126);
      if (lookahead == 'C') ADVANCE(158);
      if (lookahead == 'D') ADVANCE(424);
      if (lookahead == 'E') ADVANCE(231);
      if (lookahead == 'I') ADVANCE(157);
      if (lookahead == 'L') ADVANCE(159);
      if (lookahead == 'M') ADVANCE(26);
      if (lookahead == 'N') ADVANCE(423);
      if (lookahead == 'P') ADVANCE(175);
      if (lookahead == 'R') ADVANCE(97);
      if (lookahead == 'S') ADVANCE(29);
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == 'V') ADVANCE(36);
      if (lookahead == '^') ADVANCE(379);
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == 'c') ADVANCE(161);
      if (lookahead == 'f') ADVANCE(178);
      if (lookahead == 'o') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(261)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      END_STATE();
    case 262:
      if (eof) ADVANCE(290);
      if (lookahead == '"') ADVANCE(383);
      if (lookahead == '#') ADVANCE(326);
      if (lookahead == '(') ADVANCE(317);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '=') ADVANCE(293);
      if (lookahead == 'A') ADVANCE(126);
      if (lookahead == 'C') ADVANCE(158);
      if (lookahead == 'D') ADVANCE(96);
      if (lookahead == 'E') ADVANCE(229);
      if (lookahead == 'I') ADVANCE(61);
      if (lookahead == 'L') ADVANCE(159);
      if (lookahead == 'M') ADVANCE(34);
      if (lookahead == 'P') ADVANCE(35);
      if (lookahead == 'R') ADVANCE(97);
      if (lookahead == 'S') ADVANCE(67);
      if (lookahead == 'T') ADVANCE(39);
      if (lookahead == 'U') ADVANCE(192);
      if (lookahead == 'V') ADVANCE(36);
      if (lookahead == 'X') ADVANCE(25);
      if (lookahead == '^') ADVANCE(379);
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == 'n') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(176);
      if (lookahead == 'p') ADVANCE(184);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(262)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      END_STATE();
    case 263:
      if (eof) ADVANCE(290);
      if (lookahead == '"') ADVANCE(383);
      if (lookahead == '#') ADVANCE(326);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == 'A') ADVANCE(360);
      if (lookahead == 'C') ADVANCE(364);
      if (lookahead == 'E') ADVANCE(375);
      if (lookahead == 'I') ADVANCE(363);
      if (lookahead == 'L') ADVANCE(365);
      if (lookahead == 'M') ADVANCE(340);
      if (lookahead == 'P') ADVANCE(368);
      if (lookahead == 'R') ADVANCE(357);
      if (lookahead == 'V') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(263)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 264:
      if (eof) ADVANCE(290);
      if (lookahead == '"') ADVANCE(383);
      if (lookahead == '(') ADVANCE(317);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == 'A') ADVANCE(360);
      if (lookahead == 'C') ADVANCE(364);
      if (lookahead == 'E') ADVANCE(375);
      if (lookahead == 'I') ADVANCE(363);
      if (lookahead == 'L') ADVANCE(365);
      if (lookahead == 'M') ADVANCE(340);
      if (lookahead == 'P') ADVANCE(368);
      if (lookahead == 'R') ADVANCE(357);
      if (lookahead == 'V') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(264)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 265:
      if (eof) ADVANCE(290);
      if (lookahead == '"') ADVANCE(383);
      if (lookahead == '(') ADVANCE(317);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == 'A') ADVANCE(360);
      if (lookahead == 'C') ADVANCE(364);
      if (lookahead == 'E') ADVANCE(375);
      if (lookahead == 'I') ADVANCE(363);
      if (lookahead == 'L') ADVANCE(365);
      if (lookahead == 'M') ADVANCE(340);
      if (lookahead == 'P') ADVANCE(368);
      if (lookahead == 'R') ADVANCE(357);
      if (lookahead == 'V') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(265)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 266:
      if (eof) ADVANCE(290);
      if (lookahead == '"') ADVANCE(383);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == 'A') ADVANCE(360);
      if (lookahead == 'C') ADVANCE(364);
      if (lookahead == 'E') ADVANCE(375);
      if (lookahead == 'I') ADVANCE(363);
      if (lookahead == 'L') ADVANCE(365);
      if (lookahead == 'M') ADVANCE(340);
      if (lookahead == 'P') ADVANCE(368);
      if (lookahead == 'R') ADVANCE(357);
      if (lookahead == 'V') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(266)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 267:
      if (eof) ADVANCE(290);
      if (lookahead == '"') ADVANCE(383);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == 'A') ADVANCE(360);
      if (lookahead == 'C') ADVANCE(364);
      if (lookahead == 'E') ADVANCE(375);
      if (lookahead == 'I') ADVANCE(363);
      if (lookahead == 'L') ADVANCE(365);
      if (lookahead == 'M') ADVANCE(340);
      if (lookahead == 'P') ADVANCE(368);
      if (lookahead == 'R') ADVANCE(357);
      if (lookahead == 'V') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(267)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 268:
      if (eof) ADVANCE(290);
      if (lookahead == '#') ADVANCE(326);
      if (lookahead == '\'') ADVANCE(405);
      if (lookahead == '(') ADVANCE(317);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == 'A') ADVANCE(360);
      if (lookahead == 'C') ADVANCE(364);
      if (lookahead == 'E') ADVANCE(375);
      if (lookahead == 'I') ADVANCE(363);
      if (lookahead == 'L') ADVANCE(365);
      if (lookahead == 'M') ADVANCE(340);
      if (lookahead == 'P') ADVANCE(368);
      if (lookahead == 'R') ADVANCE(357);
      if (lookahead == 'V') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(268)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 269:
      if (eof) ADVANCE(290);
      if (lookahead == '#') ADVANCE(326);
      if (lookahead == '\'') ADVANCE(405);
      if (lookahead == '(') ADVANCE(317);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == 'A') ADVANCE(360);
      if (lookahead == 'C') ADVANCE(364);
      if (lookahead == 'E') ADVANCE(375);
      if (lookahead == 'I') ADVANCE(363);
      if (lookahead == 'L') ADVANCE(365);
      if (lookahead == 'M') ADVANCE(340);
      if (lookahead == 'P') ADVANCE(368);
      if (lookahead == 'R') ADVANCE(357);
      if (lookahead == 'V') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(269)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 270:
      if (eof) ADVANCE(290);
      if (lookahead == '#') ADVANCE(326);
      if (lookahead == '\'') ADVANCE(405);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == 'A') ADVANCE(360);
      if (lookahead == 'C') ADVANCE(364);
      if (lookahead == 'E') ADVANCE(375);
      if (lookahead == 'I') ADVANCE(363);
      if (lookahead == 'L') ADVANCE(365);
      if (lookahead == 'M') ADVANCE(340);
      if (lookahead == 'P') ADVANCE(368);
      if (lookahead == 'R') ADVANCE(357);
      if (lookahead == 'V') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(270)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 271:
      if (eof) ADVANCE(290);
      if (lookahead == '#') ADVANCE(326);
      if (lookahead == '\'') ADVANCE(405);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == 'A') ADVANCE(360);
      if (lookahead == 'C') ADVANCE(364);
      if (lookahead == 'E') ADVANCE(375);
      if (lookahead == 'I') ADVANCE(363);
      if (lookahead == 'L') ADVANCE(365);
      if (lookahead == 'M') ADVANCE(340);
      if (lookahead == 'P') ADVANCE(368);
      if (lookahead == 'R') ADVANCE(357);
      if (lookahead == 'V') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(271)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 272:
      if (eof) ADVANCE(290);
      if (lookahead == '#') ADVANCE(326);
      if (lookahead == '(') ADVANCE(317);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == 'A') ADVANCE(360);
      if (lookahead == 'C') ADVANCE(364);
      if (lookahead == 'E') ADVANCE(375);
      if (lookahead == 'I') ADVANCE(363);
      if (lookahead == 'L') ADVANCE(365);
      if (lookahead == 'M') ADVANCE(340);
      if (lookahead == 'P') ADVANCE(368);
      if (lookahead == 'R') ADVANCE(357);
      if (lookahead == 'V') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(272)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 273:
      if (eof) ADVANCE(290);
      if (lookahead == '#') ADVANCE(326);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == 'A') ADVANCE(360);
      if (lookahead == 'C') ADVANCE(364);
      if (lookahead == 'E') ADVANCE(375);
      if (lookahead == 'I') ADVANCE(363);
      if (lookahead == 'L') ADVANCE(365);
      if (lookahead == 'M') ADVANCE(340);
      if (lookahead == 'P') ADVANCE(368);
      if (lookahead == 'R') ADVANCE(357);
      if (lookahead == 'V') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(273)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 274:
      if (eof) ADVANCE(290);
      if (lookahead == '#') ADVANCE(326);
      if (lookahead == 'A') ADVANCE(360);
      if (lookahead == 'C') ADVANCE(364);
      if (lookahead == 'E') ADVANCE(375);
      if (lookahead == 'I') ADVANCE(363);
      if (lookahead == 'L') ADVANCE(365);
      if (lookahead == 'M') ADVANCE(340);
      if (lookahead == 'P') ADVANCE(368);
      if (lookahead == 'R') ADVANCE(357);
      if (lookahead == 'V') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(274)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 275:
      if (eof) ADVANCE(290);
      if (lookahead == '(') ADVANCE(317);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == 'A') ADVANCE(360);
      if (lookahead == 'C') ADVANCE(364);
      if (lookahead == 'E') ADVANCE(375);
      if (lookahead == 'I') ADVANCE(363);
      if (lookahead == 'L') ADVANCE(365);
      if (lookahead == 'M') ADVANCE(340);
      if (lookahead == 'P') ADVANCE(368);
      if (lookahead == 'R') ADVANCE(357);
      if (lookahead == 'V') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(275)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 276:
      if (eof) ADVANCE(290);
      if (lookahead == '(') ADVANCE(317);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == 'A') ADVANCE(126);
      if (lookahead == 'C') ADVANCE(158);
      if (lookahead == 'E') ADVANCE(231);
      if (lookahead == 'I') ADVANCE(157);
      if (lookahead == 'L') ADVANCE(159);
      if (lookahead == 'M') ADVANCE(34);
      if (lookahead == 'P') ADVANCE(175);
      if (lookahead == 'R') ADVANCE(97);
      if (lookahead == 'T') ADVANCE(403);
      if (lookahead == 'V') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(276)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 277:
      if (eof) ADVANCE(290);
      if (lookahead == '*') ADVANCE(382);
      if (lookahead == '?') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(126);
      if (lookahead == 'C') ADVANCE(158);
      if (lookahead == 'D') ADVANCE(424);
      if (lookahead == 'E') ADVANCE(231);
      if (lookahead == 'I') ADVANCE(157);
      if (lookahead == 'L') ADVANCE(159);
      if (lookahead == 'M') ADVANCE(26);
      if (lookahead == 'N') ADVANCE(423);
      if (lookahead == 'P') ADVANCE(175);
      if (lookahead == 'R') ADVANCE(97);
      if (lookahead == 'S') ADVANCE(29);
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == 'V') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(277)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      END_STATE();
    case 278:
      if (eof) ADVANCE(290);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == '-') ADVANCE(331);
      if (lookahead == 'A') ADVANCE(360);
      if (lookahead == 'C') ADVANCE(364);
      if (lookahead == 'E') ADVANCE(375);
      if (lookahead == 'I') ADVANCE(363);
      if (lookahead == 'L') ADVANCE(365);
      if (lookahead == 'M') ADVANCE(340);
      if (lookahead == 'P') ADVANCE(368);
      if (lookahead == 'R') ADVANCE(357);
      if (lookahead == 'V') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(278)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 279:
      if (eof) ADVANCE(290);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == '=') ADVANCE(293);
      if (lookahead == '?') ADVANCE(328);
      if (lookahead == 'A') ADVANCE(360);
      if (lookahead == 'C') ADVANCE(364);
      if (lookahead == 'D') ADVANCE(424);
      if (lookahead == 'E') ADVANCE(375);
      if (lookahead == 'I') ADVANCE(363);
      if (lookahead == 'L') ADVANCE(365);
      if (lookahead == 'M') ADVANCE(334);
      if (lookahead == 'N') ADVANCE(423);
      if (lookahead == 'P') ADVANCE(368);
      if (lookahead == 'R') ADVANCE(357);
      if (lookahead == 'S') ADVANCE(335);
      if (lookahead == 'T') ADVANCE(337);
      if (lookahead == 'V') ADVANCE(343);
      if (lookahead == '^') ADVANCE(379);
      if (lookahead == 'a') ADVANCE(362);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == 'f') ADVANCE(370);
      if (lookahead == 'o') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(279)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 280:
      if (eof) ADVANCE(290);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == '=') ADVANCE(293);
      if (lookahead == 'A') ADVANCE(360);
      if (lookahead == 'C') ADVANCE(364);
      if (lookahead == 'E') ADVANCE(375);
      if (lookahead == 'I') ADVANCE(363);
      if (lookahead == 'L') ADVANCE(365);
      if (lookahead == 'M') ADVANCE(340);
      if (lookahead == 'P') ADVANCE(368);
      if (lookahead == 'R') ADVANCE(357);
      if (lookahead == 'V') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(280)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 281:
      if (eof) ADVANCE(290);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == 'A') ADVANCE(360);
      if (lookahead == 'C') ADVANCE(364);
      if (lookahead == 'D') ADVANCE(356);
      if (lookahead == 'E') ADVANCE(375);
      if (lookahead == 'I') ADVANCE(361);
      if (lookahead == 'L') ADVANCE(365);
      if (lookahead == 'M') ADVANCE(340);
      if (lookahead == 'P') ADVANCE(368);
      if (lookahead == 'R') ADVANCE(357);
      if (lookahead == 'T') ADVANCE(359);
      if (lookahead == 'U') ADVANCE(372);
      if (lookahead == 'V') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(281)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 282:
      if (eof) ADVANCE(290);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == 'A') ADVANCE(360);
      if (lookahead == 'C') ADVANCE(364);
      if (lookahead == 'D') ADVANCE(356);
      if (lookahead == 'E') ADVANCE(375);
      if (lookahead == 'I') ADVANCE(353);
      if (lookahead == 'L') ADVANCE(365);
      if (lookahead == 'M') ADVANCE(340);
      if (lookahead == 'P') ADVANCE(342);
      if (lookahead == 'R') ADVANCE(357);
      if (lookahead == 'T') ADVANCE(359);
      if (lookahead == 'V') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(282)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 283:
      if (eof) ADVANCE(290);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == 'A') ADVANCE(360);
      if (lookahead == 'C') ADVANCE(364);
      if (lookahead == 'D') ADVANCE(356);
      if (lookahead == 'E') ADVANCE(375);
      if (lookahead == 'I') ADVANCE(353);
      if (lookahead == 'L') ADVANCE(365);
      if (lookahead == 'M') ADVANCE(340);
      if (lookahead == 'P') ADVANCE(368);
      if (lookahead == 'R') ADVANCE(357);
      if (lookahead == 'S') ADVANCE(366);
      if (lookahead == 'T') ADVANCE(345);
      if (lookahead == 'V') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(283)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 284:
      if (eof) ADVANCE(290);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == 'A') ADVANCE(360);
      if (lookahead == 'C') ADVANCE(364);
      if (lookahead == 'D') ADVANCE(356);
      if (lookahead == 'E') ADVANCE(375);
      if (lookahead == 'I') ADVANCE(353);
      if (lookahead == 'L') ADVANCE(365);
      if (lookahead == 'M') ADVANCE(340);
      if (lookahead == 'P') ADVANCE(368);
      if (lookahead == 'R') ADVANCE(357);
      if (lookahead == 'T') ADVANCE(359);
      if (lookahead == 'V') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(284)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 285:
      if (eof) ADVANCE(290);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == 'A') ADVANCE(360);
      if (lookahead == 'C') ADVANCE(364);
      if (lookahead == 'E') ADVANCE(375);
      if (lookahead == 'I') ADVANCE(363);
      if (lookahead == 'L') ADVANCE(365);
      if (lookahead == 'M') ADVANCE(340);
      if (lookahead == 'P') ADVANCE(368);
      if (lookahead == 'R') ADVANCE(357);
      if (lookahead == 'V') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(285)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 286:
      if (eof) ADVANCE(290);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == 'A') ADVANCE(360);
      if (lookahead == 'C') ADVANCE(364);
      if (lookahead == 'E') ADVANCE(375);
      if (lookahead == 'I') ADVANCE(363);
      if (lookahead == 'L') ADVANCE(365);
      if (lookahead == 'M') ADVANCE(340);
      if (lookahead == 'P') ADVANCE(368);
      if (lookahead == 'R') ADVANCE(357);
      if (lookahead == 'V') ADVANCE(343);
      if (lookahead == 'o') ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(286)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 287:
      if (eof) ADVANCE(290);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == 'A') ADVANCE(360);
      if (lookahead == 'C') ADVANCE(364);
      if (lookahead == 'E') ADVANCE(375);
      if (lookahead == 'I') ADVANCE(363);
      if (lookahead == 'L') ADVANCE(365);
      if (lookahead == 'M') ADVANCE(340);
      if (lookahead == 'P') ADVANCE(368);
      if (lookahead == 'R') ADVANCE(357);
      if (lookahead == 'V') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(287)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 288:
      if (eof) ADVANCE(290);
      if (lookahead == 'A') ADVANCE(360);
      if (lookahead == 'C') ADVANCE(364);
      if (lookahead == 'D') ADVANCE(356);
      if (lookahead == 'E') ADVANCE(373);
      if (lookahead == 'I') ADVANCE(363);
      if (lookahead == 'L') ADVANCE(365);
      if (lookahead == 'M') ADVANCE(340);
      if (lookahead == 'P') ADVANCE(368);
      if (lookahead == 'R') ADVANCE(357);
      if (lookahead == 'S') ADVANCE(355);
      if (lookahead == 'V') ADVANCE(343);
      if (lookahead == 'X') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(288)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 289:
      if (eof) ADVANCE(290);
      if (lookahead == 'A') ADVANCE(360);
      if (lookahead == 'C') ADVANCE(364);
      if (lookahead == 'E') ADVANCE(375);
      if (lookahead == 'I') ADVANCE(363);
      if (lookahead == 'L') ADVANCE(365);
      if (lookahead == 'M') ADVANCE(340);
      if (lookahead == 'P') ADVANCE(368);
      if (lookahead == 'R') ADVANCE(357);
      if (lookahead == 'V') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(289)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != 160) ADVANCE(327);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_Alias);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_Profile);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_Extension);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_Invariant);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_Instance);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_Instance);
      if (lookahead == 'O') ADVANCE(102);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_ValueSet);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_CodeSystem);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_Mapping);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_Logical);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_Resource);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_Description);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_Expression);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_Id);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_InstanceOf);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_Parent);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_Severity);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_Source);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_Target);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_Title);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_Usage);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_XPath);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_exactly);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_obeys);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '!') ADVANCE(419);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(381);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(394);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '>') ADVANCE(325);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'P') ADVANCE(40);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'S') ADVANCE(420);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'S') ADVANCE(420);
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'U') ADVANCE(421);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'U') ADVANCE(421);
      if (lookahead == 'e') ADVANCE(228);
      if (lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'U') ADVANCE(422);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'b') ADVANCE(68);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'b') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'b') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == 'r') ADVANCE(324);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(306);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(306);
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(306);
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(324);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(172);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(171);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(212);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'y') ADVANCE(199);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_cardinality_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(387);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(388);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(389);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '.') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(391);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(241);
      if (lookahead == ':') ADVANCE(250);
      if (lookahead == 'Z') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(393);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '-') ADVANCE(254);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(247);
      if (lookahead == 'Z') ADVANCE(398);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(249);
      if (lookahead == ':') ADVANCE(250);
      if (lookahead == 'Z') ADVANCE(398);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(249);
      if (lookahead == ':') ADVANCE(253);
      if (lookahead == 'Z') ADVANCE(398);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(249);
      if (lookahead == 'Z') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_T);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'U') ADVANCE(422);
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(406);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_example);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_preferred);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_extensible);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_Reference);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_Canonical);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_named);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_QMARK_BANG);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_MS);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_SU);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_TU);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 262},
  [3] = {.lex_state = 262},
  [4] = {.lex_state = 262},
  [5] = {.lex_state = 262},
  [6] = {.lex_state = 262},
  [7] = {.lex_state = 262},
  [8] = {.lex_state = 262},
  [9] = {.lex_state = 261},
  [10] = {.lex_state = 262},
  [11] = {.lex_state = 279},
  [12] = {.lex_state = 279},
  [13] = {.lex_state = 261},
  [14] = {.lex_state = 262},
  [15] = {.lex_state = 261},
  [16] = {.lex_state = 262},
  [17] = {.lex_state = 261},
  [18] = {.lex_state = 260},
  [19] = {.lex_state = 260},
  [20] = {.lex_state = 261},
  [21] = {.lex_state = 262},
  [22] = {.lex_state = 262},
  [23] = {.lex_state = 262},
  [24] = {.lex_state = 262},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 262},
  [28] = {.lex_state = 262},
  [29] = {.lex_state = 262},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 262},
  [32] = {.lex_state = 262},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 262},
  [35] = {.lex_state = 262},
  [36] = {.lex_state = 262},
  [37] = {.lex_state = 262},
  [38] = {.lex_state = 262},
  [39] = {.lex_state = 262},
  [40] = {.lex_state = 262},
  [41] = {.lex_state = 262},
  [42] = {.lex_state = 262},
  [43] = {.lex_state = 262},
  [44] = {.lex_state = 262},
  [45] = {.lex_state = 262},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 262},
  [49] = {.lex_state = 262},
  [50] = {.lex_state = 262},
  [51] = {.lex_state = 261},
  [52] = {.lex_state = 277},
  [53] = {.lex_state = 261},
  [54] = {.lex_state = 261},
  [55] = {.lex_state = 262},
  [56] = {.lex_state = 277},
  [57] = {.lex_state = 261},
  [58] = {.lex_state = 268},
  [59] = {.lex_state = 261},
  [60] = {.lex_state = 261},
  [61] = {.lex_state = 262},
  [62] = {.lex_state = 261},
  [63] = {.lex_state = 261},
  [64] = {.lex_state = 262},
  [65] = {.lex_state = 261},
  [66] = {.lex_state = 262},
  [67] = {.lex_state = 269},
  [68] = {.lex_state = 270},
  [69] = {.lex_state = 271},
  [70] = {.lex_state = 261},
  [71] = {.lex_state = 261},
  [72] = {.lex_state = 283},
  [73] = {.lex_state = 263},
  [74] = {.lex_state = 283},
  [75] = {.lex_state = 263},
  [76] = {.lex_state = 261},
  [77] = {.lex_state = 281},
  [78] = {.lex_state = 281},
  [79] = {.lex_state = 262},
  [80] = {.lex_state = 282},
  [81] = {.lex_state = 282},
  [82] = {.lex_state = 284},
  [83] = {.lex_state = 284},
  [84] = {.lex_state = 264},
  [85] = {.lex_state = 20},
  [86] = {.lex_state = 288},
  [87] = {.lex_state = 262},
  [88] = {.lex_state = 262},
  [89] = {.lex_state = 288},
  [90] = {.lex_state = 20},
  [91] = {.lex_state = 273},
  [92] = {.lex_state = 273},
  [93] = {.lex_state = 262},
  [94] = {.lex_state = 264},
  [95] = {.lex_state = 262},
  [96] = {.lex_state = 261},
  [97] = {.lex_state = 262},
  [98] = {.lex_state = 262},
  [99] = {.lex_state = 266},
  [100] = {.lex_state = 261},
  [101] = {.lex_state = 261},
  [102] = {.lex_state = 262},
  [103] = {.lex_state = 272},
  [104] = {.lex_state = 272},
  [105] = {.lex_state = 262},
  [106] = {.lex_state = 262},
  [107] = {.lex_state = 262},
  [108] = {.lex_state = 262},
  [109] = {.lex_state = 262},
  [110] = {.lex_state = 265},
  [111] = {.lex_state = 265},
  [112] = {.lex_state = 262},
  [113] = {.lex_state = 262},
  [114] = {.lex_state = 262},
  [115] = {.lex_state = 266},
  [116] = {.lex_state = 262},
  [117] = {.lex_state = 285},
  [118] = {.lex_state = 267},
  [119] = {.lex_state = 262},
  [120] = {.lex_state = 262},
  [121] = {.lex_state = 263},
  [122] = {.lex_state = 262},
  [123] = {.lex_state = 262},
  [124] = {.lex_state = 263},
  [125] = {.lex_state = 262},
  [126] = {.lex_state = 262},
  [127] = {.lex_state = 262},
  [128] = {.lex_state = 267},
  [129] = {.lex_state = 286},
  [130] = {.lex_state = 262},
  [131] = {.lex_state = 262},
  [132] = {.lex_state = 286},
  [133] = {.lex_state = 262},
  [134] = {.lex_state = 262},
  [135] = {.lex_state = 262},
  [136] = {.lex_state = 262},
  [137] = {.lex_state = 280},
  [138] = {.lex_state = 280},
  [139] = {.lex_state = 278},
  [140] = {.lex_state = 275},
  [141] = {.lex_state = 262},
  [142] = {.lex_state = 275},
  [143] = {.lex_state = 262},
  [144] = {.lex_state = 262},
  [145] = {.lex_state = 278},
  [146] = {.lex_state = 273},
  [147] = {.lex_state = 262},
  [148] = {.lex_state = 262},
  [149] = {.lex_state = 262},
  [150] = {.lex_state = 273},
  [151] = {.lex_state = 262},
  [152] = {.lex_state = 285},
  [153] = {.lex_state = 262},
  [154] = {.lex_state = 274},
  [155] = {.lex_state = 262},
  [156] = {.lex_state = 262},
  [157] = {.lex_state = 262},
  [158] = {.lex_state = 262},
  [159] = {.lex_state = 287},
  [160] = {.lex_state = 262},
  [161] = {.lex_state = 262},
  [162] = {.lex_state = 262},
  [163] = {.lex_state = 262},
  [164] = {.lex_state = 262},
  [165] = {.lex_state = 262},
  [166] = {.lex_state = 262},
  [167] = {.lex_state = 262},
  [168] = {.lex_state = 274},
  [169] = {.lex_state = 262},
  [170] = {.lex_state = 262},
  [171] = {.lex_state = 287},
  [172] = {.lex_state = 273},
  [173] = {.lex_state = 262},
  [174] = {.lex_state = 273},
  [175] = {.lex_state = 276},
  [176] = {.lex_state = 262},
  [177] = {.lex_state = 262},
  [178] = {.lex_state = 262},
  [179] = {.lex_state = 262},
  [180] = {.lex_state = 262},
  [181] = {.lex_state = 262},
  [182] = {.lex_state = 262},
  [183] = {.lex_state = 262},
  [184] = {.lex_state = 262},
  [185] = {.lex_state = 262},
  [186] = {.lex_state = 289},
  [187] = {.lex_state = 262},
  [188] = {.lex_state = 262},
  [189] = {.lex_state = 262},
  [190] = {.lex_state = 289},
  [191] = {.lex_state = 262},
  [192] = {.lex_state = 262},
  [193] = {.lex_state = 262},
  [194] = {.lex_state = 262},
  [195] = {.lex_state = 262},
  [196] = {.lex_state = 262},
  [197] = {.lex_state = 262},
  [198] = {.lex_state = 262},
  [199] = {.lex_state = 262},
  [200] = {.lex_state = 262},
  [201] = {.lex_state = 262},
  [202] = {.lex_state = 262},
  [203] = {.lex_state = 262},
  [204] = {.lex_state = 262},
  [205] = {.lex_state = 262},
  [206] = {.lex_state = 262},
  [207] = {.lex_state = 262},
  [208] = {.lex_state = 262},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 262},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 20},
  [213] = {.lex_state = 12},
  [214] = {.lex_state = 12},
  [215] = {.lex_state = 261},
  [216] = {.lex_state = 262},
  [217] = {.lex_state = 262},
  [218] = {.lex_state = 31},
  [219] = {.lex_state = 20},
  [220] = {.lex_state = 20},
  [221] = {.lex_state = 20},
  [222] = {.lex_state = 21},
  [223] = {.lex_state = 21},
  [224] = {.lex_state = 22},
  [225] = {.lex_state = 22},
  [226] = {.lex_state = 31},
  [227] = {.lex_state = 22},
  [228] = {.lex_state = 261},
  [229] = {.lex_state = 261},
  [230] = {.lex_state = 32},
  [231] = {.lex_state = 23},
  [232] = {.lex_state = 24},
  [233] = {.lex_state = 24},
  [234] = {.lex_state = 13},
  [235] = {.lex_state = 23},
  [236] = {.lex_state = 239},
  [237] = {.lex_state = 8},
  [238] = {.lex_state = 239},
  [239] = {.lex_state = 8},
  [240] = {.lex_state = 8},
  [241] = {.lex_state = 8},
  [242] = {.lex_state = 8},
  [243] = {.lex_state = 14},
  [244] = {.lex_state = 14},
  [245] = {.lex_state = 191},
  [246] = {.lex_state = 10},
  [247] = {.lex_state = 191},
  [248] = {.lex_state = 10},
  [249] = {.lex_state = 262},
  [250] = {.lex_state = 239},
  [251] = {.lex_state = 239},
  [252] = {.lex_state = 239},
  [253] = {.lex_state = 5},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 262},
  [256] = {.lex_state = 239},
  [257] = {.lex_state = 5},
  [258] = {.lex_state = 239},
  [259] = {.lex_state = 15},
  [260] = {.lex_state = 15},
  [261] = {.lex_state = 239},
  [262] = {.lex_state = 239},
  [263] = {.lex_state = 11},
  [264] = {.lex_state = 11},
  [265] = {.lex_state = 239},
  [266] = {.lex_state = 7},
  [267] = {.lex_state = 6},
  [268] = {.lex_state = 6},
  [269] = {.lex_state = 239},
  [270] = {.lex_state = 239},
  [271] = {.lex_state = 262},
  [272] = {.lex_state = 262},
  [273] = {.lex_state = 262},
  [274] = {.lex_state = 5},
  [275] = {.lex_state = 5},
  [276] = {.lex_state = 239},
  [277] = {.lex_state = 7},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 239},
  [280] = {.lex_state = 239},
  [281] = {.lex_state = 239},
  [282] = {.lex_state = 239},
  [283] = {.lex_state = 5},
  [284] = {.lex_state = 5},
  [285] = {.lex_state = 239},
  [286] = {.lex_state = 5},
  [287] = {.lex_state = 239},
  [288] = {.lex_state = 239},
  [289] = {.lex_state = 262},
  [290] = {.lex_state = 239},
  [291] = {.lex_state = 7},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 239},
  [294] = {.lex_state = 239},
  [295] = {.lex_state = 239},
  [296] = {.lex_state = 239},
  [297] = {.lex_state = 239},
  [298] = {.lex_state = 239},
  [299] = {.lex_state = 260},
  [300] = {.lex_state = 239},
  [301] = {.lex_state = 239},
  [302] = {.lex_state = 239},
  [303] = {.lex_state = 239},
  [304] = {.lex_state = 239},
  [305] = {.lex_state = 239},
  [306] = {.lex_state = 239},
  [307] = {.lex_state = 239},
  [308] = {.lex_state = 239},
  [309] = {.lex_state = 262},
  [310] = {.lex_state = 239},
  [311] = {.lex_state = 239},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 239},
  [314] = {.lex_state = 9},
  [315] = {.lex_state = 239},
  [316] = {.lex_state = 239},
  [317] = {.lex_state = 262},
  [318] = {.lex_state = 33},
  [319] = {.lex_state = 33},
  [320] = {.lex_state = 8},
  [321] = {.lex_state = 8},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 9},
  [325] = {.lex_state = 239},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 260},
  [328] = {.lex_state = 239},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 262},
  [331] = {.lex_state = 239},
  [332] = {.lex_state = 18},
  [333] = {.lex_state = 9},
  [334] = {.lex_state = 239},
  [335] = {.lex_state = 239},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 18},
  [339] = {.lex_state = 239},
  [340] = {.lex_state = 239},
  [341] = {.lex_state = 239},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 262},
  [344] = {.lex_state = 262},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 262},
  [348] = {.lex_state = 262},
  [349] = {.lex_state = 262},
  [350] = {.lex_state = 262},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 276},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 262},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
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
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_system] = ACTIONS(1),
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
    [sym_doc] = STATE(375),
    [sym_alias] = STATE(46),
    [sym_profile] = STATE(46),
    [sym_extension] = STATE(46),
    [sym_invariant] = STATE(46),
    [sym_instance] = STATE(46),
    [sym_valueset] = STATE(46),
    [sym_codesystem] = STATE(46),
    [sym_mapping] = STATE(46),
    [sym_logical] = STATE(46),
    [sym_resource] = STATE(46),
    [aux_sym_doc_repeat1] = STATE(46),
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
    STATE(4), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(31), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(210), 2,
      sym_sd_rule,
      sym_add_element_rule,
    STATE(112), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(197), 9,
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
    STATE(5), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(32), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(210), 2,
      sym_sd_rule,
      sym_add_element_rule,
    STATE(112), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(197), 9,
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
    STATE(27), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(48), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(210), 2,
      sym_sd_rule,
      sym_add_element_rule,
    STATE(112), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(197), 9,
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
    STATE(28), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(48), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(210), 2,
      sym_sd_rule,
      sym_add_element_rule,
    STATE(112), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(197), 9,
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
    STATE(7), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(44), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(112), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(197), 9,
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
    STATE(42), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(48), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(112), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(197), 9,
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
    STATE(40), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(48), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(112), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(197), 9,
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
    STATE(85), 1,
      sym_cardinality,
    STATE(215), 1,
      aux_sym_flag_rule_repeat1,
    STATE(372), 1,
      sym_caret_path,
    STATE(65), 2,
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
    ACTIONS(73), 29,
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
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_named,
  [492] = 4,
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
  [530] = 4,
    ACTIONS(86), 1,
      aux_sym_sequence_token1,
    ACTIONS(88), 1,
      aux_sym_cardinality_token1,
    STATE(11), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(84), 26,
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
  [568] = 12,
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
    STATE(215), 1,
      aux_sym_flag_rule_repeat1,
    STATE(372), 1,
      sym_caret_path,
    STATE(65), 2,
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
  [622] = 11,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(92), 1,
      anon_sym_Id,
    ACTIONS(94), 1,
      anon_sym_Source,
    ACTIONS(96), 1,
      anon_sym_Target,
    ACTIONS(98), 1,
      anon_sym_STAR,
    STATE(36), 2,
      sym_mapping_metadata,
      aux_sym_mapping_repeat1,
    STATE(109), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(208), 2,
      sym_path_rule,
      sym_mapping_rule,
    STATE(93), 5,
      sym_description,
      sym_id,
      sym_source,
      sym_target,
      sym_title,
    ACTIONS(90), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [673] = 1,
    ACTIONS(100), 28,
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
  [704] = 11,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(92), 1,
      anon_sym_Id,
    ACTIONS(94), 1,
      anon_sym_Source,
    ACTIONS(96), 1,
      anon_sym_Target,
    ACTIONS(98), 1,
      anon_sym_STAR,
    STATE(14), 2,
      sym_mapping_metadata,
      aux_sym_mapping_repeat1,
    STATE(97), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(208), 2,
      sym_path_rule,
      sym_mapping_rule,
    STATE(93), 5,
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
  [755] = 2,
    ACTIONS(73), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
    ACTIONS(100), 25,
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
  [787] = 2,
    ACTIONS(106), 2,
      anon_sym_Instance,
      anon_sym_DQUOTE,
    ACTIONS(104), 25,
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
      anon_sym_LPAREN,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [819] = 2,
    ACTIONS(110), 2,
      anon_sym_Instance,
      anon_sym_DQUOTE,
    ACTIONS(108), 25,
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
      anon_sym_LPAREN,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [851] = 2,
    ACTIONS(112), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
    ACTIONS(100), 25,
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
  [883] = 11,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(117), 1,
      anon_sym_Instance,
    ACTIONS(119), 1,
      anon_sym_InstanceOf,
    ACTIONS(121), 1,
      anon_sym_Usage,
    ACTIONS(123), 1,
      anon_sym_STAR,
    STATE(49), 2,
      sym_instance_metadata,
      aux_sym_instance_repeat1,
    STATE(113), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(198), 2,
      sym_fixed_value_rule,
      sym_path_rule,
    STATE(108), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(115), 10,
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
  [932] = 2,
    ACTIONS(127), 1,
      anon_sym_Instance,
    ACTIONS(125), 25,
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
      anon_sym_LPAREN,
      anon_sym_CARET,
      anon_sym_DQUOTE,
  [963] = 2,
    ACTIONS(131), 1,
      anon_sym_Instance,
    ACTIONS(129), 25,
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
      anon_sym_LPAREN,
      anon_sym_CARET,
      anon_sym_DQUOTE,
  [994] = 11,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(119), 1,
      anon_sym_InstanceOf,
    ACTIONS(121), 1,
      anon_sym_Usage,
    ACTIONS(123), 1,
      anon_sym_STAR,
    ACTIONS(135), 1,
      anon_sym_Instance,
    STATE(21), 2,
      sym_instance_metadata,
      aux_sym_instance_repeat1,
    STATE(106), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(198), 2,
      sym_fixed_value_rule,
      sym_path_rule,
    STATE(108), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(133), 10,
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
  [1043] = 17,
    ACTIONS(137), 1,
      anon_sym_POUND,
    ACTIONS(139), 1,
      aux_sym_sequence_token1,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(145), 1,
      sym_number,
    ACTIONS(147), 1,
      sym_date,
    ACTIONS(149), 1,
      sym_time,
    ACTIONS(153), 1,
      anon_sym_Reference,
    ACTIONS(155), 1,
      anon_sym_Canonical,
    STATE(150), 1,
      aux_sym_sequence_repeat1,
    STATE(173), 1,
      sym_quantity,
    STATE(181), 1,
      sym_sequence,
    STATE(192), 1,
      sym_value,
    STATE(369), 1,
      sym_ratio_part,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(125), 2,
      sym_code,
      sym_reference,
    STATE(180), 7,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [1103] = 17,
    ACTIONS(137), 1,
      anon_sym_POUND,
    ACTIONS(139), 1,
      aux_sym_sequence_token1,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(145), 1,
      sym_number,
    ACTIONS(147), 1,
      sym_date,
    ACTIONS(149), 1,
      sym_time,
    ACTIONS(153), 1,
      anon_sym_Reference,
    ACTIONS(155), 1,
      anon_sym_Canonical,
    STATE(150), 1,
      aux_sym_sequence_repeat1,
    STATE(173), 1,
      sym_quantity,
    STATE(181), 1,
      sym_sequence,
    STATE(203), 1,
      sym_value,
    STATE(369), 1,
      sym_ratio_part,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(125), 2,
      sym_code,
      sym_reference,
    STATE(180), 7,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [1163] = 5,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(29), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(210), 2,
      sym_sd_rule,
      sym_add_element_rule,
    STATE(197), 9,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(157), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1199] = 5,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(29), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(210), 2,
      sym_sd_rule,
      sym_add_element_rule,
    STATE(197), 9,
      sym_cardinality_rule,
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
  [1235] = 5,
    ACTIONS(163), 1,
      anon_sym_STAR,
    STATE(29), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(210), 2,
      sym_sd_rule,
      sym_add_element_rule,
    STATE(197), 9,
      sym_cardinality_rule,
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
  [1271] = 17,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(147), 1,
      sym_date,
    ACTIONS(149), 1,
      sym_time,
    ACTIONS(153), 1,
      anon_sym_Reference,
    ACTIONS(155), 1,
      anon_sym_Canonical,
    ACTIONS(166), 1,
      anon_sym_POUND,
    ACTIONS(168), 1,
      aux_sym_sequence_token1,
    ACTIONS(170), 1,
      sym_number,
    STATE(103), 1,
      aux_sym_sequence_repeat1,
    STATE(173), 1,
      sym_quantity,
    STATE(177), 1,
      sym_sequence,
    STATE(188), 1,
      sym_value,
    STATE(391), 1,
      sym_ratio_part,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(125), 2,
      sym_code,
      sym_reference,
    STATE(180), 7,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [1331] = 5,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(29), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(210), 2,
      sym_sd_rule,
      sym_add_element_rule,
    STATE(197), 9,
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
  [1367] = 5,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(29), 2,
      sym_lr_rule,
      aux_sym_logical_repeat1,
    STATE(210), 2,
      sym_sd_rule,
      sym_add_element_rule,
    STATE(197), 9,
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
  [1403] = 17,
    ACTIONS(137), 1,
      anon_sym_POUND,
    ACTIONS(139), 1,
      aux_sym_sequence_token1,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(145), 1,
      sym_number,
    ACTIONS(147), 1,
      sym_date,
    ACTIONS(149), 1,
      sym_time,
    ACTIONS(153), 1,
      anon_sym_Reference,
    ACTIONS(155), 1,
      anon_sym_Canonical,
    STATE(150), 1,
      aux_sym_sequence_repeat1,
    STATE(173), 1,
      sym_quantity,
    STATE(181), 1,
      sym_sequence,
    STATE(195), 1,
      sym_value,
    STATE(369), 1,
      sym_ratio_part,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(125), 2,
      sym_code,
      sym_reference,
    STATE(180), 7,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [1463] = 2,
    ACTIONS(174), 1,
      anon_sym_Instance,
    ACTIONS(172), 23,
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
  [1492] = 2,
    ACTIONS(178), 1,
      anon_sym_Instance,
    ACTIONS(176), 23,
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
  [1521] = 8,
    ACTIONS(182), 1,
      anon_sym_Description,
    ACTIONS(185), 1,
      anon_sym_Id,
    ACTIONS(188), 1,
      anon_sym_Source,
    ACTIONS(191), 1,
      anon_sym_Target,
    ACTIONS(194), 1,
      anon_sym_Title,
    STATE(36), 2,
      sym_mapping_metadata,
      aux_sym_mapping_repeat1,
    STATE(93), 5,
      sym_description,
      sym_id,
      sym_source,
      sym_target,
      sym_title,
    ACTIONS(180), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [1562] = 2,
    ACTIONS(199), 1,
      anon_sym_Instance,
    ACTIONS(197), 22,
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
  [1590] = 9,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(203), 1,
      anon_sym_Id,
    ACTIONS(205), 1,
      anon_sym_STAR,
    STATE(201), 1,
      sym_caret_value_rule,
    STATE(43), 2,
      sym_vs_metadata,
      aux_sym_valueset_repeat1,
    STATE(141), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(136), 3,
      sym_description,
      sym_id,
      sym_title,
    ACTIONS(201), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1632] = 9,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(203), 1,
      anon_sym_Id,
    ACTIONS(209), 1,
      anon_sym_STAR,
    STATE(206), 1,
      sym_code_caret_value_rule,
    STATE(45), 2,
      sym_cs_metadata,
      aux_sym_codesystem_repeat1,
    STATE(144), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(143), 3,
      sym_description,
      sym_id,
      sym_title,
    ACTIONS(207), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1674] = 4,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(41), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(197), 9,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(211), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1706] = 4,
    ACTIONS(215), 1,
      anon_sym_STAR,
    STATE(41), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(197), 9,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(213), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1738] = 4,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(41), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(197), 9,
      sym_cardinality_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(218), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1770] = 9,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(203), 1,
      anon_sym_Id,
    ACTIONS(205), 1,
      anon_sym_STAR,
    STATE(201), 1,
      sym_caret_value_rule,
    STATE(66), 2,
      sym_vs_metadata,
      aux_sym_valueset_repeat1,
    STATE(119), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    STATE(136), 3,
      sym_description,
      sym_id,
      sym_title,
    ACTIONS(220), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1812] = 4,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(41), 2,
      sym_sd_rule,
      aux_sym_profile_repeat2,
    STATE(197), 9,
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
  [1844] = 9,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(33), 1,
      anon_sym_Title,
    ACTIONS(203), 1,
      anon_sym_Id,
    ACTIONS(209), 1,
      anon_sym_STAR,
    STATE(206), 1,
      sym_code_caret_value_rule,
    STATE(64), 2,
      sym_cs_metadata,
      aux_sym_codesystem_repeat1,
    STATE(122), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    STATE(143), 3,
      sym_description,
      sym_id,
      sym_title,
    ACTIONS(222), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [1886] = 12,
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
    ACTIONS(224), 1,
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
  [1933] = 12,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
    ACTIONS(228), 1,
      anon_sym_Alias,
    ACTIONS(231), 1,
      anon_sym_Profile,
    ACTIONS(234), 1,
      anon_sym_Extension,
    ACTIONS(237), 1,
      anon_sym_Invariant,
    ACTIONS(240), 1,
      anon_sym_Instance,
    ACTIONS(243), 1,
      anon_sym_ValueSet,
    ACTIONS(246), 1,
      anon_sym_CodeSystem,
    ACTIONS(249), 1,
      anon_sym_Mapping,
    ACTIONS(252), 1,
      anon_sym_Logical,
    ACTIONS(255), 1,
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
  [1980] = 7,
    ACTIONS(260), 1,
      anon_sym_Description,
    ACTIONS(263), 1,
      anon_sym_Id,
    ACTIONS(266), 1,
      anon_sym_Parent,
    ACTIONS(269), 1,
      anon_sym_Title,
    STATE(48), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(112), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
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
      anon_sym_STAR,
  [2017] = 8,
    ACTIONS(274), 1,
      anon_sym_Instance,
    ACTIONS(276), 1,
      anon_sym_Description,
    ACTIONS(279), 1,
      anon_sym_InstanceOf,
    ACTIONS(282), 1,
      anon_sym_Title,
    ACTIONS(285), 1,
      anon_sym_Usage,
    STATE(49), 2,
      sym_instance_metadata,
      aux_sym_instance_repeat1,
    STATE(108), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(272), 11,
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
  [2056] = 7,
    ACTIONS(290), 1,
      anon_sym_Description,
    ACTIONS(293), 1,
      anon_sym_Expression,
    ACTIONS(296), 1,
      anon_sym_Severity,
    ACTIONS(299), 1,
      anon_sym_XPath,
    STATE(50), 2,
      sym_invariant_metadata,
      aux_sym_invariant_repeat1,
    STATE(127), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
    ACTIONS(288), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [2092] = 3,
    STATE(54), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(71), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    ACTIONS(302), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2120] = 3,
    ACTIONS(306), 1,
      anon_sym_STAR,
    ACTIONS(308), 2,
      aux_sym_cardinality_token1,
      anon_sym_STAR2,
    ACTIONS(304), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [2148] = 3,
    STATE(53), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(312), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    ACTIONS(310), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2176] = 3,
    STATE(53), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(71), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    ACTIONS(315), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2204] = 7,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(319), 1,
      anon_sym_Expression,
    ACTIONS(321), 1,
      anon_sym_Severity,
    ACTIONS(323), 1,
      anon_sym_XPath,
    STATE(50), 2,
      sym_invariant_metadata,
      aux_sym_invariant_repeat1,
    STATE(127), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
    ACTIONS(317), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [2240] = 3,
    ACTIONS(327), 1,
      anon_sym_STAR,
    ACTIONS(329), 2,
      aux_sym_cardinality_token1,
      anon_sym_STAR2,
    ACTIONS(325), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [2268] = 3,
    STATE(59), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(71), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    ACTIONS(331), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2296] = 8,
    ACTIONS(335), 1,
      anon_sym_COLON,
    ACTIONS(337), 1,
      anon_sym_POUND,
    ACTIONS(339), 1,
      aux_sym_sequence_token1,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    STATE(320), 1,
      aux_sym_sequence_repeat1,
    STATE(397), 1,
      sym_sequence,
    STATE(107), 2,
      sym_code,
      sym_unit,
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
      anon_sym_STAR,
      anon_sym_LPAREN,
  [2334] = 3,
    STATE(53), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(71), 6,
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
  [2362] = 3,
    STATE(53), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(71), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
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
  [2389] = 2,
    ACTIONS(349), 1,
      anon_sym_Instance,
    ACTIONS(347), 19,
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
  [2414] = 3,
    STATE(53), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(71), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    ACTIONS(351), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2441] = 3,
    STATE(62), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(71), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    ACTIONS(353), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2468] = 6,
    ACTIONS(357), 1,
      anon_sym_Description,
    ACTIONS(360), 1,
      anon_sym_Id,
    ACTIONS(363), 1,
      anon_sym_Title,
    STATE(64), 2,
      sym_cs_metadata,
      aux_sym_codesystem_repeat1,
    STATE(143), 3,
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
  [2501] = 3,
    STATE(53), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(71), 6,
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
  [2528] = 6,
    ACTIONS(370), 1,
      anon_sym_Description,
    ACTIONS(373), 1,
      anon_sym_Id,
    ACTIONS(376), 1,
      anon_sym_Title,
    STATE(66), 2,
      sym_vs_metadata,
      aux_sym_valueset_repeat1,
    STATE(136), 3,
      sym_description,
      sym_id,
      sym_title,
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
  [2561] = 7,
    ACTIONS(166), 1,
      anon_sym_POUND,
    ACTIONS(339), 1,
      aux_sym_sequence_token1,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    STATE(320), 1,
      aux_sym_sequence_repeat1,
    STATE(399), 1,
      sym_sequence,
    STATE(107), 2,
      sym_code,
      sym_unit,
    ACTIONS(335), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2596] = 8,
    ACTIONS(335), 1,
      anon_sym_COLON,
    ACTIONS(339), 1,
      aux_sym_sequence_token1,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(379), 1,
      anon_sym_POUND,
    STATE(320), 1,
      aux_sym_sequence_repeat1,
    STATE(396), 1,
      sym_sequence,
    STATE(107), 2,
      sym_code,
      sym_unit,
    ACTIONS(333), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2633] = 7,
    ACTIONS(137), 1,
      anon_sym_POUND,
    ACTIONS(339), 1,
      aux_sym_sequence_token1,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    STATE(320), 1,
      aux_sym_sequence_repeat1,
    STATE(398), 1,
      sym_sequence,
    STATE(107), 2,
      sym_code,
      sym_unit,
    ACTIONS(335), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [2667] = 1,
    ACTIONS(381), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2689] = 1,
    ACTIONS(325), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [2711] = 3,
    ACTIONS(383), 1,
      aux_sym_sequence_token1,
    STATE(72), 1,
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
  [2737] = 8,
    ACTIONS(339), 1,
      aux_sym_sequence_token1,
    ACTIONS(388), 1,
      anon_sym_POUND,
    ACTIONS(390), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_string,
    STATE(194), 1,
      sym_code,
    STATE(320), 1,
      aux_sym_sequence_repeat1,
    STATE(395), 1,
      sym_sequence,
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
  [2773] = 3,
    ACTIONS(392), 1,
      aux_sym_sequence_token1,
    STATE(72), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(84), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [2799] = 8,
    ACTIONS(339), 1,
      aux_sym_sequence_token1,
    ACTIONS(388), 1,
      anon_sym_POUND,
    ACTIONS(390), 1,
      anon_sym_DQUOTE,
    STATE(92), 1,
      sym_string,
    STATE(202), 1,
      sym_code,
    STATE(320), 1,
      aux_sym_sequence_repeat1,
    STATE(395), 1,
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
  [2835] = 1,
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
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [2857] = 4,
    ACTIONS(82), 1,
      anon_sym_Instance,
    ACTIONS(398), 1,
      aux_sym_sequence_token1,
    STATE(77), 1,
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
  [2884] = 4,
    ACTIONS(88), 1,
      anon_sym_Instance,
    ACTIONS(401), 1,
      aux_sym_sequence_token1,
    STATE(77), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(84), 15,
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
  [2911] = 1,
    ACTIONS(403), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [2932] = 3,
    ACTIONS(405), 1,
      aux_sym_sequence_token1,
    STATE(80), 1,
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
  [2957] = 3,
    ACTIONS(408), 1,
      aux_sym_sequence_token1,
    STATE(80), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(84), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [2982] = 3,
    ACTIONS(410), 1,
      aux_sym_sequence_token1,
    STATE(83), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(84), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3006] = 3,
    ACTIONS(412), 1,
      aux_sym_sequence_token1,
    STATE(83), 1,
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
  [3030] = 3,
    ACTIONS(415), 1,
      aux_sym_sequence_token1,
    STATE(84), 1,
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
  [3054] = 10,
    ACTIONS(153), 1,
      anon_sym_Reference,
    ACTIONS(155), 1,
      anon_sym_Canonical,
    ACTIONS(418), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(160), 1,
      sym_reference,
    STATE(268), 1,
      aux_sym_sequence_repeat1,
    STATE(271), 1,
      sym_target_type,
    STATE(90), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    STATE(176), 2,
      sym_name,
      sym_canonical,
    ACTIONS(420), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [3092] = 3,
    ACTIONS(422), 1,
      aux_sym_sequence_token1,
    STATE(89), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(84), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3116] = 1,
    ACTIONS(424), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3136] = 1,
    ACTIONS(426), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3156] = 3,
    ACTIONS(428), 1,
      aux_sym_sequence_token1,
    STATE(89), 1,
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
  [3180] = 10,
    ACTIONS(153), 1,
      anon_sym_Reference,
    ACTIONS(155), 1,
      anon_sym_Canonical,
    ACTIONS(418), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(160), 1,
      sym_reference,
    STATE(268), 1,
      aux_sym_sequence_repeat1,
    STATE(272), 1,
      sym_target_type,
    STATE(176), 2,
      sym_name,
      sym_canonical,
    STATE(212), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(420), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [3218] = 6,
    ACTIONS(339), 1,
      aux_sym_sequence_token1,
    ACTIONS(388), 1,
      anon_sym_POUND,
    STATE(204), 1,
      sym_code,
    STATE(320), 1,
      aux_sym_sequence_repeat1,
    STATE(395), 1,
      sym_sequence,
    ACTIONS(431), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [3248] = 6,
    ACTIONS(339), 1,
      aux_sym_sequence_token1,
    ACTIONS(388), 1,
      anon_sym_POUND,
    STATE(194), 1,
      sym_code,
    STATE(320), 1,
      aux_sym_sequence_repeat1,
    STATE(395), 1,
      sym_sequence,
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
  [3278] = 1,
    ACTIONS(433), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3298] = 3,
    ACTIONS(435), 1,
      aux_sym_sequence_token1,
    STATE(84), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(84), 15,
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
  [3322] = 2,
    ACTIONS(439), 1,
      anon_sym_Instance,
    ACTIONS(437), 15,
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
  [3343] = 4,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(200), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(441), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [3368] = 4,
    ACTIONS(98), 1,
      anon_sym_STAR,
    STATE(102), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(208), 2,
      sym_path_rule,
      sym_mapping_rule,
    ACTIONS(90), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3393] = 1,
    ACTIONS(443), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3412] = 3,
    ACTIONS(445), 1,
      aux_sym_sequence_token1,
    STATE(99), 1,
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
  [3435] = 4,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(196), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(448), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [3460] = 4,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(193), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(450), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [3485] = 4,
    ACTIONS(454), 1,
      anon_sym_STAR,
    STATE(102), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(208), 2,
      sym_path_rule,
      sym_mapping_rule,
    ACTIONS(452), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3510] = 3,
    ACTIONS(457), 1,
      aux_sym_sequence_token1,
    STATE(104), 1,
      aux_sym_sequence_repeat1,
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
      anon_sym_LPAREN,
      anon_sym_POUND,
  [3533] = 3,
    ACTIONS(459), 1,
      aux_sym_sequence_token1,
    STATE(104), 1,
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
  [3556] = 2,
    ACTIONS(464), 1,
      anon_sym_Instance,
    ACTIONS(462), 15,
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
  [3577] = 4,
    ACTIONS(123), 1,
      anon_sym_STAR,
    STATE(114), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(198), 2,
      sym_fixed_value_rule,
      sym_path_rule,
    ACTIONS(115), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3602] = 3,
    ACTIONS(468), 1,
      anon_sym_DQUOTE,
    STATE(155), 1,
      sym_string,
    ACTIONS(466), 14,
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
  [3625] = 2,
    ACTIONS(472), 1,
      anon_sym_Instance,
    ACTIONS(470), 15,
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
  [3646] = 4,
    ACTIONS(98), 1,
      anon_sym_STAR,
    STATE(102), 2,
      sym_mapping_entity_rule,
      aux_sym_mapping_repeat2,
    STATE(208), 2,
      sym_path_rule,
      sym_mapping_rule,
    ACTIONS(474), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3671] = 3,
    ACTIONS(476), 1,
      aux_sym_sequence_token1,
    STATE(111), 1,
      aux_sym_sequence_repeat1,
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
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [3694] = 3,
    ACTIONS(478), 1,
      aux_sym_sequence_token1,
    STATE(111), 1,
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
  [3717] = 1,
    ACTIONS(481), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [3736] = 4,
    ACTIONS(123), 1,
      anon_sym_STAR,
    STATE(114), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(198), 2,
      sym_fixed_value_rule,
      sym_path_rule,
    ACTIONS(483), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3761] = 4,
    ACTIONS(487), 1,
      anon_sym_STAR,
    STATE(114), 2,
      sym_instance_rule,
      aux_sym_instance_repeat2,
    STATE(198), 2,
      sym_fixed_value_rule,
      sym_path_rule,
    ACTIONS(485), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3786] = 3,
    ACTIONS(490), 1,
      aux_sym_sequence_token1,
    STATE(99), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(84), 14,
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
  [3809] = 1,
    ACTIONS(492), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3827] = 3,
    ACTIONS(494), 1,
      aux_sym_sequence_token1,
    STATE(117), 1,
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
  [3849] = 3,
    ACTIONS(497), 1,
      aux_sym_sequence_token1,
    STATE(118), 1,
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
  [3871] = 4,
    ACTIONS(205), 1,
      anon_sym_STAR,
    STATE(201), 1,
      sym_caret_value_rule,
    STATE(120), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    ACTIONS(500), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3895] = 4,
    ACTIONS(504), 1,
      anon_sym_STAR,
    STATE(201), 1,
      sym_caret_value_rule,
    STATE(120), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    ACTIONS(502), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3919] = 2,
    ACTIONS(106), 1,
      aux_sym_sequence_token1,
    ACTIONS(104), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [3939] = 4,
    ACTIONS(209), 1,
      anon_sym_STAR,
    STATE(206), 1,
      sym_code_caret_value_rule,
    STATE(123), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    ACTIONS(507), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [3963] = 4,
    ACTIONS(511), 1,
      anon_sym_STAR,
    STATE(206), 1,
      sym_code_caret_value_rule,
    STATE(123), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
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
  [3987] = 2,
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
  [4007] = 3,
    ACTIONS(468), 1,
      anon_sym_DQUOTE,
    STATE(184), 1,
      sym_string,
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
      anon_sym_STAR,
      anon_sym_LPAREN,
  [4029] = 1,
    ACTIONS(514), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4047] = 1,
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
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [4065] = 3,
    ACTIONS(518), 1,
      aux_sym_sequence_token1,
    STATE(118), 1,
      aux_sym_sequence_repeat1,
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
      anon_sym_DQUOTE,
  [4087] = 3,
    ACTIONS(520), 1,
      aux_sym_sequence_token1,
    STATE(129), 1,
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
  [4109] = 1,
    ACTIONS(523), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4127] = 1,
    ACTIONS(525), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4145] = 3,
    ACTIONS(527), 1,
      aux_sym_sequence_token1,
    STATE(129), 1,
      aux_sym_sequence_repeat1,
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
      anon_sym_or,
  [4167] = 1,
    ACTIONS(529), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4185] = 1,
    ACTIONS(531), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4203] = 1,
    ACTIONS(533), 15,
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
  [4221] = 1,
    ACTIONS(535), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [4239] = 3,
    ACTIONS(537), 1,
      aux_sym_sequence_token1,
    STATE(138), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(84), 13,
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
  [4261] = 3,
    ACTIONS(539), 1,
      aux_sym_sequence_token1,
    STATE(138), 1,
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
  [4283] = 3,
    ACTIONS(542), 1,
      aux_sym_sequence_token1,
    STATE(145), 1,
      aux_sym_sequence_repeat1,
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
      anon_sym_DASH_GT,
  [4305] = 3,
    ACTIONS(544), 1,
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
      anon_sym_LPAREN,
  [4327] = 4,
    ACTIONS(205), 1,
      anon_sym_STAR,
    STATE(201), 1,
      sym_caret_value_rule,
    STATE(120), 2,
      sym_vs_rule,
      aux_sym_valueset_repeat2,
    ACTIONS(220), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [4351] = 3,
    ACTIONS(547), 1,
      aux_sym_sequence_token1,
    STATE(140), 1,
      aux_sym_sequence_repeat1,
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
      anon_sym_LPAREN,
  [4373] = 1,
    ACTIONS(549), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [4391] = 4,
    ACTIONS(209), 1,
      anon_sym_STAR,
    STATE(206), 1,
      sym_code_caret_value_rule,
    STATE(123), 2,
      sym_cs_rule,
      aux_sym_codesystem_repeat2,
    ACTIONS(222), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [4415] = 3,
    ACTIONS(551), 1,
      aux_sym_sequence_token1,
    STATE(145), 1,
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
  [4437] = 3,
    ACTIONS(554), 1,
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
      anon_sym_POUND,
  [4459] = 1,
    ACTIONS(557), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [4477] = 1,
    ACTIONS(559), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [4495] = 1,
    ACTIONS(561), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [4513] = 3,
    ACTIONS(563), 1,
      aux_sym_sequence_token1,
    STATE(146), 1,
      aux_sym_sequence_repeat1,
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
  [4535] = 1,
    ACTIONS(565), 15,
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
  [4553] = 3,
    ACTIONS(567), 1,
      aux_sym_sequence_token1,
    STATE(117), 1,
      aux_sym_sequence_repeat1,
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
      anon_sym_and,
  [4575] = 3,
    ACTIONS(571), 1,
      anon_sym_and,
    STATE(153), 1,
      aux_sym_obeys_rule_repeat1,
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
      anon_sym_STAR,
  [4596] = 3,
    ACTIONS(574), 1,
      aux_sym_sequence_token1,
    STATE(168), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(84), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
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
  [4617] = 1,
    ACTIONS(576), 14,
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
  [4634] = 3,
    ACTIONS(580), 1,
      anon_sym_and,
    STATE(165), 1,
      aux_sym_obeys_rule_repeat1,
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
      anon_sym_STAR,
  [4655] = 3,
    ACTIONS(584), 1,
      anon_sym_and,
    STATE(167), 1,
      aux_sym_contains_rule_repeat1,
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
      anon_sym_STAR,
  [4676] = 3,
    ACTIONS(588), 1,
      anon_sym_LPAREN,
    STATE(205), 1,
      sym_strength,
    ACTIONS(586), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [4697] = 3,
    ACTIONS(590), 1,
      aux_sym_sequence_token1,
    STATE(159), 1,
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
  [4718] = 1,
    ACTIONS(593), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4735] = 3,
    ACTIONS(597), 1,
      anon_sym_or,
    STATE(164), 1,
      aux_sym_only_rule_repeat1,
    ACTIONS(595), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [4756] = 3,
    ACTIONS(601), 1,
      anon_sym_and,
    STATE(162), 1,
      aux_sym_contains_rule_repeat1,
    ACTIONS(599), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [4777] = 1,
    ACTIONS(604), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [4794] = 3,
    ACTIONS(606), 1,
      anon_sym_or,
    STATE(164), 1,
      aux_sym_only_rule_repeat1,
    ACTIONS(604), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [4815] = 3,
    ACTIONS(580), 1,
      anon_sym_and,
    STATE(153), 1,
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
  [4836] = 3,
    ACTIONS(580), 1,
      anon_sym_and,
    STATE(170), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(611), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [4857] = 3,
    ACTIONS(584), 1,
      anon_sym_and,
    STATE(162), 1,
      aux_sym_contains_rule_repeat1,
    ACTIONS(613), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [4878] = 3,
    ACTIONS(615), 1,
      aux_sym_sequence_token1,
    STATE(168), 1,
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
  [4899] = 3,
    ACTIONS(597), 1,
      anon_sym_or,
    STATE(161), 1,
      aux_sym_only_rule_repeat1,
    ACTIONS(618), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [4920] = 3,
    ACTIONS(580), 1,
      anon_sym_and,
    STATE(153), 1,
      aux_sym_obeys_rule_repeat1,
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
      anon_sym_STAR,
  [4941] = 3,
    ACTIONS(620), 1,
      aux_sym_sequence_token1,
    STATE(159), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(84), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [4962] = 2,
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
  [4981] = 2,
    ACTIONS(335), 1,
      anon_sym_COLON,
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
      anon_sym_STAR,
      anon_sym_LPAREN,
  [5000] = 2,
    ACTIONS(106), 1,
      aux_sym_sequence_token1,
    ACTIONS(104), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5019] = 2,
    ACTIONS(624), 1,
      anon_sym_T,
    ACTIONS(622), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5038] = 1,
    ACTIONS(626), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5055] = 2,
    ACTIONS(628), 1,
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
  [5074] = 1,
    ACTIONS(630), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5090] = 2,
    ACTIONS(632), 1,
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
  [5108] = 1,
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
      anon_sym_STAR,
      anon_sym_LPAREN,
  [5124] = 2,
    ACTIONS(634), 1,
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
  [5142] = 2,
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
  [5160] = 1,
    ACTIONS(569), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5176] = 1,
    ACTIONS(636), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5192] = 1,
    ACTIONS(599), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5208] = 3,
    ACTIONS(638), 1,
      aux_sym_sequence_token1,
    STATE(186), 1,
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
  [5228] = 1,
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
      anon_sym_STAR,
      anon_sym_LPAREN,
  [5244] = 2,
    ACTIONS(645), 1,
      anon_sym_LPAREN,
    ACTIONS(643), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5262] = 1,
    ACTIONS(335), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5278] = 3,
    ACTIONS(647), 1,
      aux_sym_sequence_token1,
    STATE(186), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(84), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [5298] = 1,
    ACTIONS(649), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
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
  [5314] = 1,
    ACTIONS(651), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5329] = 1,
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
  [5344] = 1,
    ACTIONS(431), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5359] = 1,
    ACTIONS(655), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5374] = 1,
    ACTIONS(450), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5389] = 1,
    ACTIONS(657), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5404] = 1,
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
  [5419] = 1,
    ACTIONS(661), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5434] = 1,
    ACTIONS(448), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5449] = 1,
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
  [5464] = 1,
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
  [5479] = 1,
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
  [5494] = 1,
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
  [5509] = 1,
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
  [5524] = 1,
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
  [5539] = 1,
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
  [5554] = 1,
    ACTIONS(675), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_STAR,
  [5569] = 2,
    ACTIONS(679), 1,
      anon_sym_POUND,
    ACTIONS(677), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [5586] = 1,
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
  [5601] = 1,
    ACTIONS(677), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
  [5615] = 4,
    ACTIONS(683), 1,
      aux_sym_sequence_token1,
    ACTIONS(310), 2,
      anon_sym_Reference,
      anon_sym_Canonical,
    STATE(212), 2,
      sym_flag,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(685), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [5635] = 4,
    ACTIONS(327), 1,
      aux_sym_sequence_token1,
    ACTIONS(688), 1,
      aux_sym_cardinality_token1,
    ACTIONS(690), 1,
      anon_sym_STAR2,
    ACTIONS(325), 8,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [5655] = 4,
    ACTIONS(306), 1,
      aux_sym_sequence_token1,
    ACTIONS(692), 1,
      aux_sym_cardinality_token1,
    ACTIONS(694), 1,
      anon_sym_STAR2,
    ACTIONS(304), 8,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [5675] = 4,
    ACTIONS(59), 1,
      anon_sym_and,
    STATE(228), 1,
      aux_sym_flag_rule_repeat1,
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
  [5694] = 6,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(319), 1,
      anon_sym_Expression,
    ACTIONS(321), 1,
      anon_sym_Severity,
    ACTIONS(323), 1,
      anon_sym_XPath,
    STATE(55), 2,
      sym_invariant_metadata,
      aux_sym_invariant_repeat1,
    STATE(127), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
  [5717] = 6,
    ACTIONS(27), 1,
      anon_sym_Description,
    ACTIONS(29), 1,
      anon_sym_Id,
    ACTIONS(31), 1,
      anon_sym_Parent,
    ACTIONS(33), 1,
      anon_sym_Title,
    STATE(8), 2,
      sym_sd_metadata,
      aux_sym_profile_repeat1,
    STATE(112), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
  [5740] = 9,
    ACTIONS(65), 1,
      anon_sym_CARET,
    ACTIONS(696), 1,
      anon_sym_obeys,
    ACTIONS(698), 1,
      aux_sym_sequence_token1,
    ACTIONS(700), 1,
      anon_sym_system,
    STATE(9), 1,
      sym_path,
    STATE(12), 1,
      aux_sym_sequence_repeat1,
    STATE(20), 1,
      sym_sequence,
    STATE(309), 1,
      sym_name,
    STATE(353), 1,
      sym_caret_path,
  [5768] = 2,
    ACTIONS(702), 1,
      aux_sym_sequence_token1,
    ACTIONS(396), 8,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [5782] = 2,
    ACTIONS(327), 1,
      aux_sym_sequence_token1,
    ACTIONS(325), 8,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [5796] = 2,
    ACTIONS(704), 1,
      aux_sym_sequence_token1,
    ACTIONS(381), 8,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [5810] = 3,
    ACTIONS(706), 1,
      aux_sym_sequence_token1,
    STATE(223), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(84), 7,
      anon_sym_and,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [5826] = 3,
    ACTIONS(708), 1,
      aux_sym_sequence_token1,
    STATE(223), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 7,
      anon_sym_and,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [5842] = 8,
    ACTIONS(153), 1,
      anon_sym_Reference,
    ACTIONS(155), 1,
      anon_sym_Canonical,
    ACTIONS(711), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(132), 1,
      aux_sym_sequence_repeat1,
    STATE(160), 1,
      sym_reference,
    STATE(169), 1,
      sym_target_type,
    STATE(176), 2,
      sym_name,
      sym_canonical,
  [5868] = 8,
    ACTIONS(153), 1,
      anon_sym_Reference,
    ACTIONS(155), 1,
      anon_sym_Canonical,
    ACTIONS(711), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(132), 1,
      aux_sym_sequence_repeat1,
    STATE(160), 1,
      sym_reference,
    STATE(163), 1,
      sym_target_type,
    STATE(176), 2,
      sym_name,
      sym_canonical,
  [5894] = 9,
    ACTIONS(65), 1,
      anon_sym_CARET,
    ACTIONS(696), 1,
      anon_sym_obeys,
    ACTIONS(698), 1,
      aux_sym_sequence_token1,
    ACTIONS(700), 1,
      anon_sym_system,
    STATE(12), 1,
      aux_sym_sequence_repeat1,
    STATE(13), 1,
      sym_path,
    STATE(17), 1,
      sym_sequence,
    STATE(309), 1,
      sym_name,
    STATE(353), 1,
      sym_caret_path,
  [5922] = 8,
    ACTIONS(153), 1,
      anon_sym_Reference,
    ACTIONS(155), 1,
      anon_sym_Canonical,
    ACTIONS(418), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(160), 1,
      sym_reference,
    STATE(163), 1,
      sym_target_type,
    STATE(268), 1,
      aux_sym_sequence_repeat1,
    STATE(176), 2,
      sym_name,
      sym_canonical,
  [5948] = 3,
    ACTIONS(713), 1,
      anon_sym_and,
    STATE(228), 1,
      aux_sym_flag_rule_repeat1,
    ACTIONS(716), 6,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [5963] = 1,
    ACTIONS(716), 7,
      anon_sym_and,
      anon_sym_QMARK_BANG,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [5973] = 7,
    ACTIONS(65), 1,
      anon_sym_CARET,
    ACTIONS(700), 1,
      anon_sym_system,
    ACTIONS(718), 1,
      aux_sym_sequence_token1,
    STATE(15), 1,
      sym_sequence,
    STATE(318), 1,
      aux_sym_sequence_repeat1,
    STATE(346), 1,
      sym_path,
    STATE(353), 1,
      sym_caret_path,
  [5995] = 3,
    ACTIONS(720), 1,
      aux_sym_sequence_token1,
    STATE(231), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 4,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [6008] = 3,
    ACTIONS(723), 1,
      aux_sym_sequence_token1,
    STATE(232), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 4,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
  [6021] = 3,
    ACTIONS(726), 1,
      aux_sym_sequence_token1,
    STATE(232), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(84), 4,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
  [6034] = 6,
    ACTIONS(700), 1,
      anon_sym_system,
    ACTIONS(728), 1,
      anon_sym_DASH_GT,
    ACTIONS(730), 1,
      aux_sym_sequence_token1,
    STATE(15), 1,
      sym_sequence,
    STATE(139), 1,
      aux_sym_sequence_repeat1,
    STATE(179), 1,
      sym_path,
  [6053] = 3,
    ACTIONS(732), 1,
      aux_sym_sequence_token1,
    STATE(231), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(84), 4,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [6066] = 5,
    ACTIONS(734), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(157), 1,
      sym_item,
    STATE(243), 1,
      aux_sym_sequence_repeat1,
    STATE(255), 1,
      sym_name,
  [6082] = 5,
    ACTIONS(339), 1,
      aux_sym_sequence_token1,
    ACTIONS(736), 1,
      anon_sym_POUND,
    STATE(105), 1,
      sym_code,
    STATE(320), 1,
      aux_sym_sequence_repeat1,
    STATE(393), 1,
      sym_sequence,
  [6098] = 5,
    ACTIONS(734), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(185), 1,
      sym_item,
    STATE(243), 1,
      aux_sym_sequence_repeat1,
    STATE(255), 1,
      sym_name,
  [6114] = 5,
    ACTIONS(339), 1,
      aux_sym_sequence_token1,
    ACTIONS(738), 1,
      anon_sym_POUND,
    STATE(88), 1,
      sym_code,
    STATE(320), 1,
      aux_sym_sequence_repeat1,
    STATE(394), 1,
      sym_sequence,
  [6130] = 5,
    ACTIONS(339), 1,
      aux_sym_sequence_token1,
    ACTIONS(740), 1,
      anon_sym_POUND,
    STATE(148), 1,
      sym_code,
    STATE(320), 1,
      aux_sym_sequence_repeat1,
    STATE(389), 1,
      sym_sequence,
  [6146] = 5,
    ACTIONS(339), 1,
      aux_sym_sequence_token1,
    ACTIONS(742), 1,
      anon_sym_POUND,
    STATE(320), 1,
      aux_sym_sequence_repeat1,
    STATE(345), 1,
      sym_code,
    STATE(382), 1,
      sym_sequence,
  [6162] = 5,
    ACTIONS(744), 1,
      anon_sym_POUND,
    ACTIONS(746), 1,
      aux_sym_sequence_token1,
    STATE(154), 1,
      aux_sym_sequence_repeat1,
    STATE(209), 1,
      sym_sequence,
    STATE(211), 1,
      sym_code,
  [6178] = 4,
    ACTIONS(88), 1,
      aux_sym_cardinality_token1,
    ACTIONS(748), 1,
      aux_sym_sequence_token1,
    STATE(244), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(84), 2,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [6192] = 4,
    ACTIONS(82), 1,
      aux_sym_cardinality_token1,
    ACTIONS(750), 1,
      aux_sym_sequence_token1,
    STATE(244), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 2,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [6206] = 5,
    ACTIONS(700), 1,
      anon_sym_system,
    ACTIONS(753), 1,
      aux_sym_sequence_token1,
    STATE(15), 1,
      sym_sequence,
    STATE(137), 1,
      aux_sym_sequence_repeat1,
    STATE(182), 1,
      sym_path,
  [6222] = 3,
    ACTIONS(755), 1,
      aux_sym_sequence_token1,
    STATE(246), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE,
  [6234] = 5,
    ACTIONS(700), 1,
      anon_sym_system,
    ACTIONS(758), 1,
      aux_sym_sequence_token1,
    STATE(15), 1,
      sym_sequence,
    STATE(222), 1,
      aux_sym_sequence_repeat1,
    STATE(229), 1,
      sym_path,
  [6250] = 3,
    ACTIONS(760), 1,
      aux_sym_sequence_token1,
    STATE(246), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(84), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE,
  [6262] = 4,
    ACTIONS(468), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      anon_sym_or,
    STATE(101), 1,
      sym_string,
    STATE(317), 1,
      aux_sym_only_rule_repeat1,
  [6275] = 4,
    ACTIONS(764), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(217), 1,
      sym_name,
    STATE(233), 1,
      aux_sym_sequence_repeat1,
  [6288] = 4,
    ACTIONS(766), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(24), 1,
      sym_name,
    STATE(78), 1,
      aux_sym_sequence_repeat1,
  [6301] = 4,
    ACTIONS(768), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(152), 1,
      aux_sym_sequence_repeat1,
    STATE(156), 1,
      sym_name,
  [6314] = 3,
    ACTIONS(770), 1,
      anon_sym_DQUOTE,
    STATE(275), 1,
      aux_sym_string_repeat1,
    ACTIONS(772), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [6325] = 4,
    ACTIONS(774), 1,
      anon_sym_RPAREN,
    ACTIONS(776), 1,
      anon_sym_or,
    ACTIONS(778), 1,
      anon_sym_PIPE,
    STATE(337), 1,
      aux_sym_canonical_repeat1,
  [6338] = 4,
    ACTIONS(780), 1,
      aux_sym_cardinality_token1,
    ACTIONS(782), 1,
      anon_sym_DOT_DOT,
    ACTIONS(784), 1,
      anon_sym_named,
    STATE(51), 1,
      sym_cardinality,
  [6351] = 4,
    ACTIONS(786), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(142), 1,
      aux_sym_sequence_repeat1,
    STATE(158), 1,
      sym_name,
  [6364] = 3,
    ACTIONS(788), 1,
      anon_sym_DQUOTE,
    STATE(253), 1,
      aux_sym_string_repeat1,
    ACTIONS(790), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [6375] = 4,
    ACTIONS(792), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(79), 1,
      sym_name,
    STATE(82), 1,
      aux_sym_sequence_repeat1,
  [6388] = 4,
    ACTIONS(77), 1,
      anon_sym_DOT_DOT,
    ACTIONS(82), 1,
      aux_sym_cardinality_token1,
    ACTIONS(794), 1,
      aux_sym_sequence_token1,
    STATE(259), 1,
      aux_sym_sequence_repeat1,
  [6401] = 4,
    ACTIONS(84), 1,
      anon_sym_DOT_DOT,
    ACTIONS(88), 1,
      aux_sym_cardinality_token1,
    ACTIONS(797), 1,
      aux_sym_sequence_token1,
    STATE(259), 1,
      aux_sym_sequence_repeat1,
  [6414] = 4,
    ACTIONS(799), 1,
      aux_sym_sequence_token1,
    STATE(2), 1,
      sym_name,
    STATE(10), 1,
      sym_sequence,
    STATE(81), 1,
      aux_sym_sequence_repeat1,
  [6427] = 4,
    ACTIONS(799), 1,
      aux_sym_sequence_token1,
    STATE(3), 1,
      sym_name,
    STATE(10), 1,
      sym_sequence,
    STATE(81), 1,
      aux_sym_sequence_repeat1,
  [6440] = 3,
    ACTIONS(801), 1,
      aux_sym_sequence_token1,
    STATE(263), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [6451] = 3,
    ACTIONS(804), 1,
      aux_sym_sequence_token1,
    STATE(263), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(84), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [6462] = 4,
    ACTIONS(799), 1,
      aux_sym_sequence_token1,
    STATE(6), 1,
      sym_name,
    STATE(10), 1,
      sym_sequence,
    STATE(81), 1,
      aux_sym_sequence_repeat1,
  [6475] = 3,
    ACTIONS(806), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(277), 1,
      aux_sym_string_repeat1,
    ACTIONS(808), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [6486] = 3,
    ACTIONS(810), 1,
      aux_sym_sequence_token1,
    STATE(267), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(77), 2,
      anon_sym_or,
      anon_sym_DQUOTE,
  [6497] = 3,
    ACTIONS(813), 1,
      aux_sym_sequence_token1,
    STATE(267), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(84), 2,
      anon_sym_or,
      anon_sym_DQUOTE,
  [6508] = 4,
    ACTIONS(792), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(39), 1,
      sym_name,
    STATE(82), 1,
      aux_sym_sequence_repeat1,
  [6521] = 4,
    ACTIONS(815), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(74), 1,
      aux_sym_sequence_repeat1,
    STATE(79), 1,
      sym_name,
  [6534] = 4,
    ACTIONS(468), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      anon_sym_or,
    STATE(96), 1,
      sym_string,
    STATE(273), 1,
      aux_sym_only_rule_repeat1,
  [6547] = 4,
    ACTIONS(468), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      anon_sym_or,
    STATE(100), 1,
      sym_string,
    STATE(249), 1,
      aux_sym_only_rule_repeat1,
  [6560] = 4,
    ACTIONS(468), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      anon_sym_or,
    STATE(100), 1,
      sym_string,
    STATE(317), 1,
      aux_sym_only_rule_repeat1,
  [6573] = 3,
    ACTIONS(817), 1,
      anon_sym_DQUOTE,
    STATE(283), 1,
      aux_sym_string_repeat1,
    ACTIONS(819), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [6584] = 3,
    ACTIONS(821), 1,
      anon_sym_DQUOTE,
    STATE(275), 1,
      aux_sym_string_repeat1,
    ACTIONS(823), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [6595] = 4,
    ACTIONS(768), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(152), 1,
      aux_sym_sequence_repeat1,
    STATE(183), 1,
      sym_name,
  [6608] = 3,
    ACTIONS(826), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(291), 1,
      aux_sym_string_repeat1,
    ACTIONS(828), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [6619] = 3,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(37), 2,
      sym_string,
      sym_multiline_string,
  [6630] = 4,
    ACTIONS(799), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(79), 1,
      sym_name,
    STATE(81), 1,
      aux_sym_sequence_repeat1,
  [6643] = 4,
    ACTIONS(799), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(81), 1,
      aux_sym_sequence_repeat1,
    STATE(98), 1,
      sym_name,
  [6656] = 4,
    ACTIONS(768), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(152), 1,
      aux_sym_sequence_repeat1,
    STATE(166), 1,
      sym_name,
  [6669] = 4,
    ACTIONS(830), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(216), 1,
      sym_name,
    STATE(235), 1,
      aux_sym_sequence_repeat1,
  [6682] = 3,
    ACTIONS(832), 1,
      anon_sym_DQUOTE,
    STATE(275), 1,
      aux_sym_string_repeat1,
    ACTIONS(772), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [6693] = 3,
    ACTIONS(834), 1,
      anon_sym_DQUOTE,
    STATE(275), 1,
      aux_sym_string_repeat1,
    ACTIONS(772), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [6704] = 4,
    ACTIONS(766), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(78), 1,
      aux_sym_sequence_repeat1,
    STATE(95), 1,
      sym_name,
  [6717] = 3,
    ACTIONS(836), 1,
      anon_sym_DQUOTE,
    STATE(284), 1,
      aux_sym_string_repeat1,
    ACTIONS(838), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [6728] = 4,
    ACTIONS(840), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(260), 1,
      aux_sym_sequence_repeat1,
    STATE(330), 1,
      sym_name,
  [6741] = 4,
    ACTIONS(792), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(38), 1,
      sym_name,
    STATE(82), 1,
      aux_sym_sequence_repeat1,
  [6754] = 1,
    ACTIONS(842), 4,
      anon_sym_example,
      anon_sym_preferred,
      anon_sym_extensible,
      anon_sym_required,
  [6761] = 4,
    ACTIONS(815), 1,
      aux_sym_sequence_token1,
    STATE(10), 1,
      sym_sequence,
    STATE(16), 1,
      sym_name,
    STATE(74), 1,
      aux_sym_sequence_repeat1,
  [6774] = 3,
    ACTIONS(821), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(291), 1,
      aux_sym_string_repeat1,
    ACTIONS(844), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [6785] = 2,
    ACTIONS(849), 1,
      anon_sym_PIPE,
    ACTIONS(847), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [6793] = 3,
    ACTIONS(851), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(86), 1,
      aux_sym_sequence_repeat1,
  [6803] = 3,
    ACTIONS(853), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(94), 1,
      aux_sym_sequence_repeat1,
  [6813] = 3,
    ACTIONS(853), 1,
      aux_sym_sequence_token1,
    STATE(23), 1,
      sym_sequence,
    STATE(94), 1,
      aux_sym_sequence_repeat1,
  [6823] = 3,
    ACTIONS(855), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(115), 1,
      aux_sym_sequence_repeat1,
  [6833] = 3,
    ACTIONS(855), 1,
      aux_sym_sequence_token1,
    STATE(23), 1,
      sym_sequence,
    STATE(115), 1,
      aux_sym_sequence_repeat1,
  [6843] = 3,
    ACTIONS(857), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(171), 1,
      aux_sym_sequence_repeat1,
  [6853] = 3,
    ACTIONS(859), 1,
      sym_number,
    STATE(187), 1,
      sym_ratio_part,
    STATE(189), 1,
      sym_quantity,
  [6863] = 3,
    ACTIONS(861), 1,
      aux_sym_sequence_token1,
    STATE(248), 1,
      aux_sym_sequence_repeat1,
    STATE(254), 1,
      sym_sequence,
  [6873] = 3,
    ACTIONS(857), 1,
      aux_sym_sequence_token1,
    STATE(23), 1,
      sym_sequence,
    STATE(171), 1,
      aux_sym_sequence_repeat1,
  [6883] = 3,
    ACTIONS(863), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(110), 1,
      aux_sym_sequence_repeat1,
  [6893] = 3,
    ACTIONS(863), 1,
      aux_sym_sequence_token1,
    STATE(23), 1,
      sym_sequence,
    STATE(110), 1,
      aux_sym_sequence_repeat1,
  [6903] = 3,
    ACTIONS(865), 1,
      aux_sym_sequence_token1,
    STATE(264), 1,
      aux_sym_sequence_repeat1,
    STATE(326), 1,
      sym_sequence,
  [6913] = 3,
    ACTIONS(867), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(128), 1,
      aux_sym_sequence_repeat1,
  [6923] = 3,
    ACTIONS(867), 1,
      aux_sym_sequence_token1,
    STATE(23), 1,
      sym_sequence,
    STATE(128), 1,
      aux_sym_sequence_repeat1,
  [6933] = 3,
    ACTIONS(815), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(74), 1,
      aux_sym_sequence_repeat1,
  [6943] = 3,
    ACTIONS(815), 1,
      aux_sym_sequence_token1,
    STATE(23), 1,
      sym_sequence,
    STATE(74), 1,
      aux_sym_sequence_repeat1,
  [6953] = 3,
    ACTIONS(780), 1,
      aux_sym_cardinality_token1,
    ACTIONS(782), 1,
      anon_sym_DOT_DOT,
    STATE(63), 1,
      sym_cardinality,
  [6963] = 3,
    ACTIONS(766), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(78), 1,
      aux_sym_sequence_repeat1,
  [6973] = 3,
    ACTIONS(869), 1,
      aux_sym_sequence_token1,
    STATE(332), 1,
      aux_sym_sequence_repeat1,
    STATE(354), 1,
      sym_sequence,
  [6983] = 3,
    ACTIONS(776), 1,
      anon_sym_or,
    ACTIONS(871), 1,
      anon_sym_RPAREN,
    STATE(322), 1,
      aux_sym_canonical_repeat1,
  [6993] = 3,
    ACTIONS(766), 1,
      aux_sym_sequence_token1,
    STATE(23), 1,
      sym_sequence,
    STATE(78), 1,
      aux_sym_sequence_repeat1,
  [7003] = 3,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(875), 1,
      aux_sym_unit_token1,
    STATE(333), 1,
      aux_sym_unit_repeat1,
  [7013] = 3,
    ACTIONS(851), 1,
      aux_sym_sequence_token1,
    STATE(23), 1,
      sym_sequence,
    STATE(86), 1,
      aux_sym_sequence_repeat1,
  [7023] = 3,
    ACTIONS(865), 1,
      aux_sym_sequence_token1,
    STATE(264), 1,
      aux_sym_sequence_repeat1,
    STATE(351), 1,
      sym_sequence,
  [7033] = 3,
    ACTIONS(604), 1,
      anon_sym_DQUOTE,
    ACTIONS(877), 1,
      anon_sym_or,
    STATE(317), 1,
      aux_sym_only_rule_repeat1,
  [7043] = 3,
    ACTIONS(84), 1,
      anon_sym_CARET,
    ACTIONS(880), 1,
      aux_sym_sequence_token1,
    STATE(319), 1,
      aux_sym_sequence_repeat1,
  [7053] = 3,
    ACTIONS(77), 1,
      anon_sym_CARET,
    ACTIONS(882), 1,
      aux_sym_sequence_token1,
    STATE(319), 1,
      aux_sym_sequence_repeat1,
  [7063] = 3,
    ACTIONS(84), 1,
      anon_sym_POUND,
    ACTIONS(885), 1,
      aux_sym_sequence_token1,
    STATE(321), 1,
      aux_sym_sequence_repeat1,
  [7073] = 3,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(887), 1,
      aux_sym_sequence_token1,
    STATE(321), 1,
      aux_sym_sequence_repeat1,
  [7083] = 3,
    ACTIONS(847), 1,
      anon_sym_RPAREN,
    ACTIONS(890), 1,
      anon_sym_or,
    STATE(322), 1,
      aux_sym_canonical_repeat1,
  [7093] = 3,
    ACTIONS(776), 1,
      anon_sym_or,
    ACTIONS(893), 1,
      anon_sym_RPAREN,
    STATE(312), 1,
      aux_sym_canonical_repeat1,
  [7103] = 3,
    ACTIONS(895), 1,
      anon_sym_SQUOTE,
    ACTIONS(897), 1,
      aux_sym_unit_token1,
    STATE(314), 1,
      aux_sym_unit_repeat1,
  [7113] = 3,
    ACTIONS(899), 1,
      aux_sym_sequence_token1,
    STATE(23), 1,
      sym_sequence,
    STATE(190), 1,
      aux_sym_sequence_repeat1,
  [7123] = 3,
    ACTIONS(901), 1,
      anon_sym_RPAREN,
    ACTIONS(903), 1,
      anon_sym_or,
    STATE(336), 1,
      aux_sym_reference_repeat1,
  [7133] = 3,
    ACTIONS(905), 1,
      sym_number,
    STATE(187), 1,
      sym_ratio_part,
    STATE(189), 1,
      sym_quantity,
  [7143] = 3,
    ACTIONS(907), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(318), 1,
      aux_sym_sequence_repeat1,
  [7153] = 3,
    ACTIONS(909), 1,
      anon_sym_RPAREN,
    ACTIONS(911), 1,
      anon_sym_or,
    STATE(329), 1,
      aux_sym_reference_repeat1,
  [7163] = 3,
    ACTIONS(780), 1,
      aux_sym_cardinality_token1,
    ACTIONS(782), 1,
      anon_sym_DOT_DOT,
    STATE(57), 1,
      sym_cardinality,
  [7173] = 3,
    ACTIONS(907), 1,
      aux_sym_sequence_token1,
    STATE(23), 1,
      sym_sequence,
    STATE(318), 1,
      aux_sym_sequence_repeat1,
  [7183] = 3,
    ACTIONS(84), 1,
      anon_sym_EQ,
    ACTIONS(914), 1,
      aux_sym_sequence_token1,
    STATE(338), 1,
      aux_sym_sequence_repeat1,
  [7193] = 3,
    ACTIONS(916), 1,
      anon_sym_SQUOTE,
    ACTIONS(918), 1,
      aux_sym_unit_token1,
    STATE(333), 1,
      aux_sym_unit_repeat1,
  [7203] = 3,
    ACTIONS(899), 1,
      aux_sym_sequence_token1,
    STATE(22), 1,
      sym_sequence,
    STATE(190), 1,
      aux_sym_sequence_repeat1,
  [7213] = 3,
    ACTIONS(865), 1,
      aux_sym_sequence_token1,
    STATE(264), 1,
      aux_sym_sequence_repeat1,
    STATE(342), 1,
      sym_sequence,
  [7223] = 3,
    ACTIONS(903), 1,
      anon_sym_or,
    ACTIONS(921), 1,
      anon_sym_RPAREN,
    STATE(329), 1,
      aux_sym_reference_repeat1,
  [7233] = 3,
    ACTIONS(776), 1,
      anon_sym_or,
    ACTIONS(923), 1,
      anon_sym_RPAREN,
    STATE(322), 1,
      aux_sym_canonical_repeat1,
  [7243] = 3,
    ACTIONS(77), 1,
      anon_sym_EQ,
    ACTIONS(925), 1,
      aux_sym_sequence_token1,
    STATE(338), 1,
      aux_sym_sequence_repeat1,
  [7253] = 3,
    ACTIONS(869), 1,
      aux_sym_sequence_token1,
    STATE(332), 1,
      aux_sym_sequence_repeat1,
    STATE(355), 1,
      sym_sequence,
  [7263] = 3,
    ACTIONS(865), 1,
      aux_sym_sequence_token1,
    STATE(264), 1,
      aux_sym_sequence_repeat1,
    STATE(323), 1,
      sym_sequence,
  [7273] = 3,
    ACTIONS(861), 1,
      aux_sym_sequence_token1,
    STATE(248), 1,
      aux_sym_sequence_repeat1,
    STATE(292), 1,
      sym_sequence,
  [7283] = 1,
    ACTIONS(909), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [7288] = 2,
    ACTIONS(928), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      sym_string,
  [7295] = 2,
    ACTIONS(468), 1,
      anon_sym_DQUOTE,
    STATE(87), 1,
      sym_string,
  [7302] = 2,
    ACTIONS(65), 1,
      anon_sym_CARET,
    STATE(373), 1,
      sym_caret_path,
  [7309] = 2,
    ACTIONS(65), 1,
      anon_sym_CARET,
    STATE(372), 1,
      sym_caret_path,
  [7316] = 2,
    ACTIONS(468), 1,
      anon_sym_DQUOTE,
    STATE(147), 1,
      sym_string,
  [7323] = 2,
    ACTIONS(928), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_string,
  [7330] = 2,
    ACTIONS(468), 1,
      anon_sym_DQUOTE,
    STATE(149), 1,
      sym_string,
  [7337] = 2,
    ACTIONS(468), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      sym_string,
  [7344] = 1,
    ACTIONS(930), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [7349] = 1,
    ACTIONS(932), 1,
      anon_sym_COLON,
  [7353] = 1,
    ACTIONS(934), 1,
      anon_sym_EQ,
  [7357] = 1,
    ACTIONS(936), 1,
      anon_sym_EQ,
  [7361] = 1,
    ACTIONS(938), 1,
      anon_sym_EQ,
  [7365] = 1,
    ACTIONS(940), 1,
      anon_sym_COLON,
  [7369] = 1,
    ACTIONS(942), 1,
      anon_sym_COLON,
  [7373] = 1,
    ACTIONS(944), 1,
      anon_sym_DOT_DOT,
  [7377] = 1,
    ACTIONS(946), 1,
      anon_sym_COLON,
  [7381] = 1,
    ACTIONS(948), 1,
      anon_sym_COLON,
  [7385] = 1,
    ACTIONS(950), 1,
      anon_sym_COLON,
  [7389] = 1,
    ACTIONS(952), 1,
      anon_sym_COLON,
  [7393] = 1,
    ACTIONS(954), 1,
      anon_sym_RPAREN,
  [7397] = 1,
    ACTIONS(956), 1,
      anon_sym_DOT_DOT,
  [7401] = 1,
    ACTIONS(958), 1,
      anon_sym_RPAREN,
  [7405] = 1,
    ACTIONS(960), 1,
      anon_sym_LPAREN,
  [7409] = 1,
    ACTIONS(962), 1,
      anon_sym_COLON,
  [7413] = 1,
    ACTIONS(964), 1,
      anon_sym_COLON,
  [7417] = 1,
    ACTIONS(966), 1,
      anon_sym_COLON,
  [7421] = 1,
    ACTIONS(968), 1,
      anon_sym_COLON,
  [7425] = 1,
    ACTIONS(970), 1,
      anon_sym_LPAREN,
  [7429] = 1,
    ACTIONS(972), 1,
      anon_sym_EQ,
  [7433] = 1,
    ACTIONS(974), 1,
      anon_sym_EQ,
  [7437] = 1,
    ACTIONS(976), 1,
      anon_sym_COLON,
  [7441] = 1,
    ACTIONS(978), 1,
      ts_builtin_sym_end,
  [7445] = 1,
    ACTIONS(980), 1,
      anon_sym_COLON,
  [7449] = 1,
    ACTIONS(982), 1,
      anon_sym_COLON,
  [7453] = 1,
    ACTIONS(984), 1,
      anon_sym_COLON,
  [7457] = 1,
    ACTIONS(986), 1,
      sym_time,
  [7461] = 1,
    ACTIONS(988), 1,
      anon_sym_COLON,
  [7465] = 1,
    ACTIONS(990), 1,
      anon_sym_COLON,
  [7469] = 1,
    ACTIONS(992), 1,
      anon_sym_POUND,
  [7473] = 1,
    ACTIONS(994), 1,
      anon_sym_COLON,
  [7477] = 1,
    ACTIONS(996), 1,
      anon_sym_COLON,
  [7481] = 1,
    ACTIONS(998), 1,
      anon_sym_exactly,
  [7485] = 1,
    ACTIONS(1000), 1,
      anon_sym_COLON,
  [7489] = 1,
    ACTIONS(1002), 1,
      anon_sym_COLON,
  [7493] = 1,
    ACTIONS(1004), 1,
      anon_sym_COLON,
  [7497] = 1,
    ACTIONS(1006), 1,
      anon_sym_POUND,
  [7501] = 1,
    ACTIONS(1008), 1,
      anon_sym_COLON,
  [7505] = 1,
    ACTIONS(1010), 1,
      anon_sym_COLON,
  [7509] = 1,
    ACTIONS(1012), 1,
      anon_sym_COLON,
  [7513] = 1,
    ACTIONS(1014), 1,
      anon_sym_POUND,
  [7517] = 1,
    ACTIONS(1016), 1,
      anon_sym_POUND,
  [7521] = 1,
    ACTIONS(1018), 1,
      anon_sym_POUND,
  [7525] = 1,
    ACTIONS(1020), 1,
      anon_sym_POUND,
  [7529] = 1,
    ACTIONS(1022), 1,
      anon_sym_POUND,
  [7533] = 1,
    ACTIONS(634), 1,
      anon_sym_POUND,
  [7537] = 1,
    ACTIONS(628), 1,
      anon_sym_POUND,
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
  [SMALL_STATE(11)] = 492,
  [SMALL_STATE(12)] = 530,
  [SMALL_STATE(13)] = 568,
  [SMALL_STATE(14)] = 622,
  [SMALL_STATE(15)] = 673,
  [SMALL_STATE(16)] = 704,
  [SMALL_STATE(17)] = 755,
  [SMALL_STATE(18)] = 787,
  [SMALL_STATE(19)] = 819,
  [SMALL_STATE(20)] = 851,
  [SMALL_STATE(21)] = 883,
  [SMALL_STATE(22)] = 932,
  [SMALL_STATE(23)] = 963,
  [SMALL_STATE(24)] = 994,
  [SMALL_STATE(25)] = 1043,
  [SMALL_STATE(26)] = 1103,
  [SMALL_STATE(27)] = 1163,
  [SMALL_STATE(28)] = 1199,
  [SMALL_STATE(29)] = 1235,
  [SMALL_STATE(30)] = 1271,
  [SMALL_STATE(31)] = 1331,
  [SMALL_STATE(32)] = 1367,
  [SMALL_STATE(33)] = 1403,
  [SMALL_STATE(34)] = 1463,
  [SMALL_STATE(35)] = 1492,
  [SMALL_STATE(36)] = 1521,
  [SMALL_STATE(37)] = 1562,
  [SMALL_STATE(38)] = 1590,
  [SMALL_STATE(39)] = 1632,
  [SMALL_STATE(40)] = 1674,
  [SMALL_STATE(41)] = 1706,
  [SMALL_STATE(42)] = 1738,
  [SMALL_STATE(43)] = 1770,
  [SMALL_STATE(44)] = 1812,
  [SMALL_STATE(45)] = 1844,
  [SMALL_STATE(46)] = 1886,
  [SMALL_STATE(47)] = 1933,
  [SMALL_STATE(48)] = 1980,
  [SMALL_STATE(49)] = 2017,
  [SMALL_STATE(50)] = 2056,
  [SMALL_STATE(51)] = 2092,
  [SMALL_STATE(52)] = 2120,
  [SMALL_STATE(53)] = 2148,
  [SMALL_STATE(54)] = 2176,
  [SMALL_STATE(55)] = 2204,
  [SMALL_STATE(56)] = 2240,
  [SMALL_STATE(57)] = 2268,
  [SMALL_STATE(58)] = 2296,
  [SMALL_STATE(59)] = 2334,
  [SMALL_STATE(60)] = 2362,
  [SMALL_STATE(61)] = 2389,
  [SMALL_STATE(62)] = 2414,
  [SMALL_STATE(63)] = 2441,
  [SMALL_STATE(64)] = 2468,
  [SMALL_STATE(65)] = 2501,
  [SMALL_STATE(66)] = 2528,
  [SMALL_STATE(67)] = 2561,
  [SMALL_STATE(68)] = 2596,
  [SMALL_STATE(69)] = 2633,
  [SMALL_STATE(70)] = 2667,
  [SMALL_STATE(71)] = 2689,
  [SMALL_STATE(72)] = 2711,
  [SMALL_STATE(73)] = 2737,
  [SMALL_STATE(74)] = 2773,
  [SMALL_STATE(75)] = 2799,
  [SMALL_STATE(76)] = 2835,
  [SMALL_STATE(77)] = 2857,
  [SMALL_STATE(78)] = 2884,
  [SMALL_STATE(79)] = 2911,
  [SMALL_STATE(80)] = 2932,
  [SMALL_STATE(81)] = 2957,
  [SMALL_STATE(82)] = 2982,
  [SMALL_STATE(83)] = 3006,
  [SMALL_STATE(84)] = 3030,
  [SMALL_STATE(85)] = 3054,
  [SMALL_STATE(86)] = 3092,
  [SMALL_STATE(87)] = 3116,
  [SMALL_STATE(88)] = 3136,
  [SMALL_STATE(89)] = 3156,
  [SMALL_STATE(90)] = 3180,
  [SMALL_STATE(91)] = 3218,
  [SMALL_STATE(92)] = 3248,
  [SMALL_STATE(93)] = 3278,
  [SMALL_STATE(94)] = 3298,
  [SMALL_STATE(95)] = 3322,
  [SMALL_STATE(96)] = 3343,
  [SMALL_STATE(97)] = 3368,
  [SMALL_STATE(98)] = 3393,
  [SMALL_STATE(99)] = 3412,
  [SMALL_STATE(100)] = 3435,
  [SMALL_STATE(101)] = 3460,
  [SMALL_STATE(102)] = 3485,
  [SMALL_STATE(103)] = 3510,
  [SMALL_STATE(104)] = 3533,
  [SMALL_STATE(105)] = 3556,
  [SMALL_STATE(106)] = 3577,
  [SMALL_STATE(107)] = 3602,
  [SMALL_STATE(108)] = 3625,
  [SMALL_STATE(109)] = 3646,
  [SMALL_STATE(110)] = 3671,
  [SMALL_STATE(111)] = 3694,
  [SMALL_STATE(112)] = 3717,
  [SMALL_STATE(113)] = 3736,
  [SMALL_STATE(114)] = 3761,
  [SMALL_STATE(115)] = 3786,
  [SMALL_STATE(116)] = 3809,
  [SMALL_STATE(117)] = 3827,
  [SMALL_STATE(118)] = 3849,
  [SMALL_STATE(119)] = 3871,
  [SMALL_STATE(120)] = 3895,
  [SMALL_STATE(121)] = 3919,
  [SMALL_STATE(122)] = 3939,
  [SMALL_STATE(123)] = 3963,
  [SMALL_STATE(124)] = 3987,
  [SMALL_STATE(125)] = 4007,
  [SMALL_STATE(126)] = 4029,
  [SMALL_STATE(127)] = 4047,
  [SMALL_STATE(128)] = 4065,
  [SMALL_STATE(129)] = 4087,
  [SMALL_STATE(130)] = 4109,
  [SMALL_STATE(131)] = 4127,
  [SMALL_STATE(132)] = 4145,
  [SMALL_STATE(133)] = 4167,
  [SMALL_STATE(134)] = 4185,
  [SMALL_STATE(135)] = 4203,
  [SMALL_STATE(136)] = 4221,
  [SMALL_STATE(137)] = 4239,
  [SMALL_STATE(138)] = 4261,
  [SMALL_STATE(139)] = 4283,
  [SMALL_STATE(140)] = 4305,
  [SMALL_STATE(141)] = 4327,
  [SMALL_STATE(142)] = 4351,
  [SMALL_STATE(143)] = 4373,
  [SMALL_STATE(144)] = 4391,
  [SMALL_STATE(145)] = 4415,
  [SMALL_STATE(146)] = 4437,
  [SMALL_STATE(147)] = 4459,
  [SMALL_STATE(148)] = 4477,
  [SMALL_STATE(149)] = 4495,
  [SMALL_STATE(150)] = 4513,
  [SMALL_STATE(151)] = 4535,
  [SMALL_STATE(152)] = 4553,
  [SMALL_STATE(153)] = 4575,
  [SMALL_STATE(154)] = 4596,
  [SMALL_STATE(155)] = 4617,
  [SMALL_STATE(156)] = 4634,
  [SMALL_STATE(157)] = 4655,
  [SMALL_STATE(158)] = 4676,
  [SMALL_STATE(159)] = 4697,
  [SMALL_STATE(160)] = 4718,
  [SMALL_STATE(161)] = 4735,
  [SMALL_STATE(162)] = 4756,
  [SMALL_STATE(163)] = 4777,
  [SMALL_STATE(164)] = 4794,
  [SMALL_STATE(165)] = 4815,
  [SMALL_STATE(166)] = 4836,
  [SMALL_STATE(167)] = 4857,
  [SMALL_STATE(168)] = 4878,
  [SMALL_STATE(169)] = 4899,
  [SMALL_STATE(170)] = 4920,
  [SMALL_STATE(171)] = 4941,
  [SMALL_STATE(172)] = 4962,
  [SMALL_STATE(173)] = 4981,
  [SMALL_STATE(174)] = 5000,
  [SMALL_STATE(175)] = 5019,
  [SMALL_STATE(176)] = 5038,
  [SMALL_STATE(177)] = 5055,
  [SMALL_STATE(178)] = 5074,
  [SMALL_STATE(179)] = 5090,
  [SMALL_STATE(180)] = 5108,
  [SMALL_STATE(181)] = 5124,
  [SMALL_STATE(182)] = 5142,
  [SMALL_STATE(183)] = 5160,
  [SMALL_STATE(184)] = 5176,
  [SMALL_STATE(185)] = 5192,
  [SMALL_STATE(186)] = 5208,
  [SMALL_STATE(187)] = 5228,
  [SMALL_STATE(188)] = 5244,
  [SMALL_STATE(189)] = 5262,
  [SMALL_STATE(190)] = 5278,
  [SMALL_STATE(191)] = 5298,
  [SMALL_STATE(192)] = 5314,
  [SMALL_STATE(193)] = 5329,
  [SMALL_STATE(194)] = 5344,
  [SMALL_STATE(195)] = 5359,
  [SMALL_STATE(196)] = 5374,
  [SMALL_STATE(197)] = 5389,
  [SMALL_STATE(198)] = 5404,
  [SMALL_STATE(199)] = 5419,
  [SMALL_STATE(200)] = 5434,
  [SMALL_STATE(201)] = 5449,
  [SMALL_STATE(202)] = 5464,
  [SMALL_STATE(203)] = 5479,
  [SMALL_STATE(204)] = 5494,
  [SMALL_STATE(205)] = 5509,
  [SMALL_STATE(206)] = 5524,
  [SMALL_STATE(207)] = 5539,
  [SMALL_STATE(208)] = 5554,
  [SMALL_STATE(209)] = 5569,
  [SMALL_STATE(210)] = 5586,
  [SMALL_STATE(211)] = 5601,
  [SMALL_STATE(212)] = 5615,
  [SMALL_STATE(213)] = 5635,
  [SMALL_STATE(214)] = 5655,
  [SMALL_STATE(215)] = 5675,
  [SMALL_STATE(216)] = 5694,
  [SMALL_STATE(217)] = 5717,
  [SMALL_STATE(218)] = 5740,
  [SMALL_STATE(219)] = 5768,
  [SMALL_STATE(220)] = 5782,
  [SMALL_STATE(221)] = 5796,
  [SMALL_STATE(222)] = 5810,
  [SMALL_STATE(223)] = 5826,
  [SMALL_STATE(224)] = 5842,
  [SMALL_STATE(225)] = 5868,
  [SMALL_STATE(226)] = 5894,
  [SMALL_STATE(227)] = 5922,
  [SMALL_STATE(228)] = 5948,
  [SMALL_STATE(229)] = 5963,
  [SMALL_STATE(230)] = 5973,
  [SMALL_STATE(231)] = 5995,
  [SMALL_STATE(232)] = 6008,
  [SMALL_STATE(233)] = 6021,
  [SMALL_STATE(234)] = 6034,
  [SMALL_STATE(235)] = 6053,
  [SMALL_STATE(236)] = 6066,
  [SMALL_STATE(237)] = 6082,
  [SMALL_STATE(238)] = 6098,
  [SMALL_STATE(239)] = 6114,
  [SMALL_STATE(240)] = 6130,
  [SMALL_STATE(241)] = 6146,
  [SMALL_STATE(242)] = 6162,
  [SMALL_STATE(243)] = 6178,
  [SMALL_STATE(244)] = 6192,
  [SMALL_STATE(245)] = 6206,
  [SMALL_STATE(246)] = 6222,
  [SMALL_STATE(247)] = 6234,
  [SMALL_STATE(248)] = 6250,
  [SMALL_STATE(249)] = 6262,
  [SMALL_STATE(250)] = 6275,
  [SMALL_STATE(251)] = 6288,
  [SMALL_STATE(252)] = 6301,
  [SMALL_STATE(253)] = 6314,
  [SMALL_STATE(254)] = 6325,
  [SMALL_STATE(255)] = 6338,
  [SMALL_STATE(256)] = 6351,
  [SMALL_STATE(257)] = 6364,
  [SMALL_STATE(258)] = 6375,
  [SMALL_STATE(259)] = 6388,
  [SMALL_STATE(260)] = 6401,
  [SMALL_STATE(261)] = 6414,
  [SMALL_STATE(262)] = 6427,
  [SMALL_STATE(263)] = 6440,
  [SMALL_STATE(264)] = 6451,
  [SMALL_STATE(265)] = 6462,
  [SMALL_STATE(266)] = 6475,
  [SMALL_STATE(267)] = 6486,
  [SMALL_STATE(268)] = 6497,
  [SMALL_STATE(269)] = 6508,
  [SMALL_STATE(270)] = 6521,
  [SMALL_STATE(271)] = 6534,
  [SMALL_STATE(272)] = 6547,
  [SMALL_STATE(273)] = 6560,
  [SMALL_STATE(274)] = 6573,
  [SMALL_STATE(275)] = 6584,
  [SMALL_STATE(276)] = 6595,
  [SMALL_STATE(277)] = 6608,
  [SMALL_STATE(278)] = 6619,
  [SMALL_STATE(279)] = 6630,
  [SMALL_STATE(280)] = 6643,
  [SMALL_STATE(281)] = 6656,
  [SMALL_STATE(282)] = 6669,
  [SMALL_STATE(283)] = 6682,
  [SMALL_STATE(284)] = 6693,
  [SMALL_STATE(285)] = 6704,
  [SMALL_STATE(286)] = 6717,
  [SMALL_STATE(287)] = 6728,
  [SMALL_STATE(288)] = 6741,
  [SMALL_STATE(289)] = 6754,
  [SMALL_STATE(290)] = 6761,
  [SMALL_STATE(291)] = 6774,
  [SMALL_STATE(292)] = 6785,
  [SMALL_STATE(293)] = 6793,
  [SMALL_STATE(294)] = 6803,
  [SMALL_STATE(295)] = 6813,
  [SMALL_STATE(296)] = 6823,
  [SMALL_STATE(297)] = 6833,
  [SMALL_STATE(298)] = 6843,
  [SMALL_STATE(299)] = 6853,
  [SMALL_STATE(300)] = 6863,
  [SMALL_STATE(301)] = 6873,
  [SMALL_STATE(302)] = 6883,
  [SMALL_STATE(303)] = 6893,
  [SMALL_STATE(304)] = 6903,
  [SMALL_STATE(305)] = 6913,
  [SMALL_STATE(306)] = 6923,
  [SMALL_STATE(307)] = 6933,
  [SMALL_STATE(308)] = 6943,
  [SMALL_STATE(309)] = 6953,
  [SMALL_STATE(310)] = 6963,
  [SMALL_STATE(311)] = 6973,
  [SMALL_STATE(312)] = 6983,
  [SMALL_STATE(313)] = 6993,
  [SMALL_STATE(314)] = 7003,
  [SMALL_STATE(315)] = 7013,
  [SMALL_STATE(316)] = 7023,
  [SMALL_STATE(317)] = 7033,
  [SMALL_STATE(318)] = 7043,
  [SMALL_STATE(319)] = 7053,
  [SMALL_STATE(320)] = 7063,
  [SMALL_STATE(321)] = 7073,
  [SMALL_STATE(322)] = 7083,
  [SMALL_STATE(323)] = 7093,
  [SMALL_STATE(324)] = 7103,
  [SMALL_STATE(325)] = 7113,
  [SMALL_STATE(326)] = 7123,
  [SMALL_STATE(327)] = 7133,
  [SMALL_STATE(328)] = 7143,
  [SMALL_STATE(329)] = 7153,
  [SMALL_STATE(330)] = 7163,
  [SMALL_STATE(331)] = 7173,
  [SMALL_STATE(332)] = 7183,
  [SMALL_STATE(333)] = 7193,
  [SMALL_STATE(334)] = 7203,
  [SMALL_STATE(335)] = 7213,
  [SMALL_STATE(336)] = 7223,
  [SMALL_STATE(337)] = 7233,
  [SMALL_STATE(338)] = 7243,
  [SMALL_STATE(339)] = 7253,
  [SMALL_STATE(340)] = 7263,
  [SMALL_STATE(341)] = 7273,
  [SMALL_STATE(342)] = 7283,
  [SMALL_STATE(343)] = 7288,
  [SMALL_STATE(344)] = 7295,
  [SMALL_STATE(345)] = 7302,
  [SMALL_STATE(346)] = 7309,
  [SMALL_STATE(347)] = 7316,
  [SMALL_STATE(348)] = 7323,
  [SMALL_STATE(349)] = 7330,
  [SMALL_STATE(350)] = 7337,
  [SMALL_STATE(351)] = 7344,
  [SMALL_STATE(352)] = 7349,
  [SMALL_STATE(353)] = 7353,
  [SMALL_STATE(354)] = 7357,
  [SMALL_STATE(355)] = 7361,
  [SMALL_STATE(356)] = 7365,
  [SMALL_STATE(357)] = 7369,
  [SMALL_STATE(358)] = 7373,
  [SMALL_STATE(359)] = 7377,
  [SMALL_STATE(360)] = 7381,
  [SMALL_STATE(361)] = 7385,
  [SMALL_STATE(362)] = 7389,
  [SMALL_STATE(363)] = 7393,
  [SMALL_STATE(364)] = 7397,
  [SMALL_STATE(365)] = 7401,
  [SMALL_STATE(366)] = 7405,
  [SMALL_STATE(367)] = 7409,
  [SMALL_STATE(368)] = 7413,
  [SMALL_STATE(369)] = 7417,
  [SMALL_STATE(370)] = 7421,
  [SMALL_STATE(371)] = 7425,
  [SMALL_STATE(372)] = 7429,
  [SMALL_STATE(373)] = 7433,
  [SMALL_STATE(374)] = 7437,
  [SMALL_STATE(375)] = 7441,
  [SMALL_STATE(376)] = 7445,
  [SMALL_STATE(377)] = 7449,
  [SMALL_STATE(378)] = 7453,
  [SMALL_STATE(379)] = 7457,
  [SMALL_STATE(380)] = 7461,
  [SMALL_STATE(381)] = 7465,
  [SMALL_STATE(382)] = 7469,
  [SMALL_STATE(383)] = 7473,
  [SMALL_STATE(384)] = 7477,
  [SMALL_STATE(385)] = 7481,
  [SMALL_STATE(386)] = 7485,
  [SMALL_STATE(387)] = 7489,
  [SMALL_STATE(388)] = 7493,
  [SMALL_STATE(389)] = 7497,
  [SMALL_STATE(390)] = 7501,
  [SMALL_STATE(391)] = 7505,
  [SMALL_STATE(392)] = 7509,
  [SMALL_STATE(393)] = 7513,
  [SMALL_STATE(394)] = 7517,
  [SMALL_STATE(395)] = 7521,
  [SMALL_STATE(396)] = 7525,
  [SMALL_STATE(397)] = 7529,
  [SMALL_STATE(398)] = 7533,
  [SMALL_STATE(399)] = 7537,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_rule, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(11),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 4),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_name, 1), REDUCE(sym_path, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 4),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3, .production_id = 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3, .production_id = 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 2, .production_id = 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 2, .production_id = 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 5),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_logical_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_logical_repeat1, 2), SHIFT_REPEAT(218),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(390),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(392),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(360),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(361),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(374),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 5),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat2, 2),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat2, 2), SHIFT_REPEAT(226),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 5),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 4),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 4),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(376),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(352),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(370),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(383),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(386),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(368),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(377),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(359),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(367),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(362),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(390),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(357),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(356),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(374),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instance_repeat1, 2),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(390),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(384),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(374),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(387),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(390),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(378),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(380),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(381),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 1),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2), SHIFT_REPEAT(70),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invariant, 4),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 2),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ratio_part, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 5),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_rule, 4),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_rule, 4),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_rule, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(390),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(388),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(374),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_rule, 3),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(390),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(388),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(374),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 1),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(72),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 4),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 3),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(77),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(80),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [412] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(83),
  [415] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(84),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [428] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(89),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 5),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_metadata, 1),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_of, 3),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance_of, 3),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 5),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parent, 3),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(99),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 6),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 7),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_repeat2, 2),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat2, 2), SHIFT_REPEAT(234),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(104),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usage, 3),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usage, 3),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_metadata, 1),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance_metadata, 1),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 5),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [478] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(111),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sd_metadata, 1),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 5),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instance_repeat2, 2),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat2, 2), SHIFT_REPEAT(245),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 7),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(117),
  [497] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(118),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 5),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_valueset_repeat2, 2),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat2, 2), SHIFT_REPEAT(230),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 5),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat2, 2),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat2, 2), SHIFT_REPEAT(241),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 6),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invariant_metadata, 1),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [520] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(129),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 5),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 5),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 4),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 4),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_metadata, 1),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [539] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(138),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [544] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(140),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cs_metadata, 1),
  [551] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(145),
  [554] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(146),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath, 3),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_severity, 3),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2), SHIFT_REPEAT(276),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 3),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 4),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_rule, 4),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_rule, 4),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [590] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(159),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_type, 1, .production_id = 4),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_only_rule, 5),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contains_rule_repeat1, 2),
  [601] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contains_rule_repeat1, 2), SHIFT_REPEAT(238),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2), SHIFT_REPEAT(225),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 5),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 3),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_rule, 5),
  [615] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(168),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_only_rule, 4),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 1),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_type, 1),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [638] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(186),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ratio, 3),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_value_rule, 4),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 3),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_value_rule, 5),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 8),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_caret_value_rule, 5),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sd_rule, 1),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_rule, 1),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strength, 3),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_rule, 1),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_value_rule, 4),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 6),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_rule, 5),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cs_rule, 1),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_value_rule, 7),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_entity_rule, 1),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 5, .production_id = 1),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lr_rule, 1),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2),
  [685] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2), SHIFT_REPEAT(221),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 3),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag, 1),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [708] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(223),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [713] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_rule_repeat1, 2), SHIFT_REPEAT(247),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_rule_repeat1, 2),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [720] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(231),
  [723] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(232),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [750] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(244),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [755] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(246),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [794] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(259),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [801] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(263),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [810] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(267),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [823] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(275),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [844] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(291),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 2),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [877] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2), SHIFT_REPEAT(227),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [882] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(319),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [887] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(321),
  [890] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 2), SHIFT_REPEAT(341),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reference_repeat1, 2),
  [911] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reference_repeat1, 2), SHIFT_REPEAT(335),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2),
  [918] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(333),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [925] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(338),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 4),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_path, 2),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [978] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
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
