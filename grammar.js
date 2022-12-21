module.exports = grammar({
  name: "fsh",

  rules: {
    // TODO:  ruleSet | paramRuleSet
    doc: ($) =>
      repeat(
        choice(
          $.alias,
          $.profile,
          $.extension,
          $.invariant,
          $.instance,
          $.valueset,
          $.codesystem,
          $.mapping,
          $.logical,
          $.resource
        )
      ),

    /* Entities */

    alias: ($) =>
      seq(
        "Alias",
        token(":"),
        alias($.sequence, $.alias_name),
        token("="),
        choice($.sequence, $.code)
      ),

    profile: ($) =>
      seq(
        "Profile",
        token(":"),
        $.name,
        repeat1($.sd_metadata),
        repeat($.sd_rule)
      ),

    extension: ($) =>
      seq(
        "Extension",
        token(":"),
        $.name,
        repeat($.sd_metadata),
        repeat($.sd_rule)
      ),

    // TODO: invariantMetadata+;
    invariant: ($) => seq("Invariant", token(":"), $.name),

    // TODO: instanceMetadata* instanceRule*;
    instance: ($) => seq("Instance", token(":"), $.name),

    // TODO: vsMetadata* vsRule*;
    valueset: ($) => seq("ValueSet", token(":"), $.name),

    // TODO: csMetadata* csRule*;
    codesystem: ($) => seq("CodeSystem", token(":"), $.name),

    // TODO: mappingMetadata* mappingEntityRule*;
    mapping: ($) => seq("Mapping", token(":"), $.name),

    // TODO:  lrRule*;
    logical: ($) => seq("Logical", token(":"), $.name, repeat($.sd_metadata)),

    // TODO:  lrRule*;
    resource: ($) => seq("Resource", token(":"), $.name, repeat($.sd_metadata)),

    /* Metadata */
    // TODO: title description, expression, xpath, target

    // TODO: title, description
    sd_metadata: ($) => choice($.parent, $.id),
    parent: ($) => seq("Parent", token(":"), $.name),
    id: ($) => seq("Id", token(":"), $.name),
    severity: ($) => seq("Severity", token(":"), $.code),
    instance_of: ($) => seq("InstanceOf", token(":"), $.name),
    usage: ($) => seq("Usage", token(":"), $.code),
    source: ($) => seq("Source", token(":"), $.code),

    /* Rules */

    // TODO:  flagRule  | onlyRule |   insertRule
    sd_rule: ($) =>
      choice(
        $.cardinality_rule,
        $.valueset_rule,
        $.fixed_value_rule,
        $.contains_rule,
        $.caret_value_rule,
        $.obeys_rule,
        $.path_rule
      ),

    // TODO: flag
    cardinality_rule: ($) => seq("*", $.name, $.cardinality),

    valueset_rule: ($) =>
      seq("*", $.path, "from", $.name, optional($.strength)),

    fixed_value_rule: ($) =>
      seq("*", $.path, "=", $.value, optional(seq("(", "exactly", ")"))),

    contains_rule: ($) =>
      seq("*", $.path, "contains", $.item, repeat(seq("and", $.item))),

    caret_value_rule: ($) =>
      seq("*", optional($.path), $.caret_path, "=", $.value),

    obeys_rule: ($) =>
      seq("*", optional($.path), "obeys", $.name, repeat(seq("and", $.name))),

    path_rule: ($) => seq("*", $.path),

    //TODO: CONCEPT_STR
    code: ($) =>
      seq(
        optional(alias($.sequence, $.code_system)),
        token("#"),
        alias(choice($.sequence), $.code_value)
      ),

    /* Misc */

    sequence: () => repeat1(/[^ \t\r\n\f\u00A0]/),

    caret_path: ($) => seq(token("^"), $.sequence),

    // TODO: | NUMBER | KW_MS | KW_SU | KW_TU | KW_NORMATIVE | KW_DRAFT | KW_CODES | KW_VSREFERENCE | KW_SYSTEM;
    name: ($) => choice($.sequence),

    cardinality: () =>
      seq(
        optional(/[0-9]+/),
        "..",
        optional(choice(/[0-9]+/, token(prec(1, "*"))))
      ),

    // TODO: escaped strings
    string: ($) =>
      seq('"', repeat(choice($.double_quote_string_fragment)), '"'),

    double_quote_string_fragment: () => token.immediate(prec(1, /[^"\\]+/)),

    path: ($) => choice($.sequence, "system"),
    strength: () =>
      seq("(", choice("example", "preferred", "extensible", "required"), ")"),

    // TODO: | MULTILINE_STRING | NUMBER | DATETIME | TIME | reference | canonical | code | quantity | ratio | bool
    value: ($) => choice($.name, $.string),

    // TODO: flag
    item: ($) => seq($.name, optional(seq("named", $.name)), $.cardinality),
  },
});
