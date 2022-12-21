module.exports = grammar({
  name: "fsh",

  // extras: ($) => [$.comment, /[\s\p{Zs}\uFEFF\u2060\u200B]/],

  // TODO: look at sequence conflict
  conflicts: ($) => [[$.path, $.name], [$.sequence]],

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

    invariant: ($) =>
      seq("Invariant", token(":"), $.name, repeat1($.invariant_metadata)),

    instance: ($) =>
      seq(
        "Instance",
        token(":"),
        $.name,
        repeat($.instance_metadata),
        repeat($.instance_rule)
      ),

    valueset: ($) =>
      seq(
        "ValueSet",
        token(":"),
        $.name,
        repeat($.vs_metadata),
        repeat($.vs_rule)
      ),

    codesystem: ($) =>
      seq(
        "CodeSystem",
        token(":"),
        $.name,
        repeat($.cs_metadata),
        repeat($.cs_rule)
      ),

    mapping: ($) =>
      seq(
        "Mapping",
        token(":"),
        $.name,
        repeat($.mapping_metadata),
        repeat($.mapping_entity_rule)
      ),

    logical: ($) =>
      seq(
        "Logical",
        token(":"),
        $.name,
        repeat($.sd_metadata),
        repeat($.lr_rule)
      ),

    resource: ($) =>
      seq(
        "Resource",
        token(":"),
        $.name,
        repeat($.sd_metadata),
        repeat($.lr_rule)
      ),

    /* Metadata */

    sd_metadata: ($) => choice($.parent, $.id, $.title, $.description),
    instance_metadata: ($) =>
      choice($.instance_of, $.title, $.description, $.usage),
    invariant_metadata: ($) =>
      choice($.description, $.expression, $.xpath, $.severity),
    vs_metadata: ($) => choice($.id, $.title, $.description),
    cs_metadata: ($) => choice($.id, $.title, $.description),
    mapping_metadata: ($) =>
      choice($.id, $.source, $.target, $.description, $.title),

    description: ($) =>
      seq("Description", token(":"), choice($.string, $.multiline_string)),
    expression: ($) => seq("Expression", token(":"), $.string),
    id: ($) => seq("Id", token(":"), $.name),
    instance_of: ($) => seq("InstanceOf", token(":"), $.name),
    parent: ($) => seq("Parent", token(":"), $.name),
    severity: ($) => seq("Severity", token(":"), $.code),
    source: ($) => seq("Source", token(":"), $.code),
    target: ($) => seq("Target", token(":"), $.string),
    title: ($) => seq("Title", token(":"), $.string),
    usage: ($) => seq("Usage", token(":"), $.code),
    xpath: ($) => seq("XPath", token(":"), $.string),

    /* Rules */

    sd_rule: ($) =>
      choice(
        $.cardinality_rule,
        $.valueset_rule,
        $.fixed_value_rule,
        $.contains_rule,
        $.caret_value_rule,
        $.obeys_rule,
        $.path_rule,
        $.flag_rule,
        $.only_rule,
        $.insert_rule
      ),

    // TODO:   addCRElementRule;
    lr_rule: ($) => choice($.sd_rule, $.add_element_rule),

    vs_rule: ($) => choice($.caret_value_rule, $.vs_component, $.insert_rule),

    // TODO: concept
    cs_rule: ($) => choice($.code_caret_value_rule, $.code_insert_rule),

    instance_rule: ($) =>
      choice($.fixed_value_rule, $.path_rule, $.insert_rule),

    mapping_entity_rule: ($) =>
      choice($.mapping_rule, $.path_rule, $.insert_rule),

    // TODO:
    // codeInsertRule:     STAR CODE* KW_INSERT (RULESET_REFERENCE | PARAM_RULESET_REFERENCE);
    // addCRElementRule:   STAR path CARD flag* KW_CONTENTREFERENCE (SEQUENCE | CODE) STRING (STRING | MULTILINE_STRING)?;
    cardinality_rule: ($) => seq("*", $.name, $.cardinality, repeat($.flag)),

    // TODO: look at pushMode in grammar for insert keyword
    // TODO: (RULESET_REFERENCE | PARAM_RULESET_REFERENCE);
    code_insert_rule: ($) => seq("*", repeat($.code), "insert"),

    // TODO: look at pushMode in grammar for insert keyword
    // TODO: (RULESET_REFERENCE | PARAM_RULESET_REFERENCE);
    insert_rule: ($) => seq("*", optional($.path), "insert"),

    valueset_rule: ($) =>
      seq("*", $.path, "from", $.name, optional($.strength)),

    fixed_value_rule: ($) =>
      seq("*", $.path, "=", $.value, optional(seq("(", "exactly", ")"))),

    contains_rule: ($) =>
      seq("*", $.path, "contains", $.item, repeat(seq("and", $.item))),

    caret_value_rule: ($) =>
      seq("*", optional($.path), $.caret_path, "=", $.value),

    // TODO: code should be repeatable, but causes conflicts
    code_caret_value_rule: ($) => seq("*", $.code, $.caret_path, "=", $.value),

    obeys_rule: ($) =>
      seq("*", optional($.path), "obeys", $.name, repeat(seq("and", $.name))),

    path_rule: ($) => seq("*", $.path),

    flag_rule: ($) =>
      seq("*", $.path, repeat(seq("and", $.path)), repeat1($.flag)),

    only_rule: ($) =>
      seq("*", $.path, "only", $.target_type, repeat(seq("or", $.target_type))),

    mapping_rule: ($) =>
      seq(
        "*",
        optional($.path),
        "->",
        $.string,
        optional($.string),
        optional($.code)
      ),

    add_element_rule: ($) =>
      seq(
        "*",
        $.path,
        $.cardinality,
        repeat($.flag),
        $.target_type,
        repeat(seq("or", $.target_type)),
        $.string,
        optional(choice($.string, $.multiline_string))
      ),

    /* ValueSet Components */

    vs_component: ($) =>
      seq(
        "*",
        optional(choice("include", "exclude")),
        choice($.vs_concept_component, $.vs_filter_component)
      ),

    vs_concept_component: ($) =>
      choice(
        seq($.code_string, optional($.vs_component_from)),
        seq(
          repeat1(seq($.code_string, "and")),
          $.code_string,
          $.vs_component_from
        )
      ),

    vs_filter_component: ($) =>
      seq(
        "codes",
        $.vs_component_from,
        optional(seq("where", $.vs_filter_list))
      ),

    vs_component_from: ($) =>
      seq(
        "from",
        choice(
          seq($.vs_from_system, optional(seq("and", $.vs_from_valueset))),
          seq($.vs_from_valueset, optional(seq("and", $.vs_from_system)))
        )
      ),

    vs_from_system: ($) => seq("system", $.name),

    // TODO: should this be prec.left?
    vs_from_valueset: ($) =>
      prec.left(1, seq("valueset", $.name, repeat(seq("and", $.name)))),

    vs_filter_list: ($) =>
      seq($.vs_filter_definition, repeat(seq("and", $.vs_filter_definition))),

    vs_filter_definition: ($) =>
      seq($.name, $.vs_filter_operator, optional($.vs_filter_value)),

    vs_filter_operator: ($) => choice("=", $.sequence),

    // TODO: REGEX
    vs_filter_value: ($) => choice($.code_string, "true", "false", $.string),

    //TODO: CONCEPT_STR
    code: ($) =>
      seq(
        optional(alias($.sequence, $.code_system)),
        token("#"),
        alias(choice($.sequence), $.code_value)
      ),

    code_string: ($) => seq($.code, optional($.string)),

    /* Misc */

    sequence: () => repeat1(/[^ \t\r\n\f\u00A0]/),

    caret_path: ($) => seq(token("^"), $.sequence),

    // TODO: | N[+\-]? [0-9]+('.' [0-9]+)?UMBER | KW_MS | KW_SU | KW_TU | KW_NORMATIVE | KW_DRAFT | KW_CODES | KW_VSREFERENCE | KW_SYSTEM;
    name: ($) => choice($.sequence),

    cardinality: () =>
      seq(
        optional(/[0-9]+/),
        "..",
        optional(choice(/[0-9]+/, token(prec(1, "*"))))
      ),

    string: ($) =>
      seq(
        '"',
        repeat(choice($.double_quote_string_fragment, $.escape_sequence)),
        '"'
      ),

    multiline_string: ($) =>
      seq(
        '"""',
        repeat(choice($.double_quote_string_fragment, $.escape_sequence)),
        '"""'
      ),

    double_quote_string_fragment: () => token.immediate(prec(1, /[^"\\]+/)),

    escape_sequence: () =>
      token.immediate(
        seq(
          "\\",
          choice(
            /[^xu0-7]/,
            /[0-7]{1,3}/,
            /x[0-9a-fA-F]{2}/,
            /u[0-9a-fA-F]{4}/,
            /u{[0-9a-fA-F]+}/
          )
        )
      ),

    number: () => /[+-]?[0-9]+(\.[0-9]+)?/,

    date: () => /[0-9][0-9][0-9][0-9](-[0-9][0-9](-[0-9][0-9])?)?/,

    time: () =>
      /[0-9][0-9](:[0-9][0-9](:[0-9][0-9](\.[0-9]+)?)?)?(Z|(\+|-)[0-9][0-9]:[0-9][0-9])?/,

    datetime: ($) => seq($.date, optional(seq(token("T"), $.time))),

    unit: () => seq("'", repeat(/[^\\']/), "'"),

    quantity: ($) => seq($.number, choice($.unit, $.code), optional($.string)),

    ratio_part: ($) => choice($.number, $.quantity),

    ratio: ($) => seq($.ratio_part, token(":"), $.ratio_part),

    bool: () => choice("true", "false"),

    path: ($) => choice($.sequence, "system"),

    strength: () =>
      seq("(", choice("example", "preferred", "extensible", "required"), ")"),

    reference: ($) =>
      seq("Reference", "(", $.sequence, repeat(seq("or", $.sequence)), ")"),

    canonical: ($) =>
      seq(
        "Canonical",
        "(",
        $.sequence,
        optional(seq(token("|"), $.sequence)),
        repeat(seq("or", $.sequence, optional(seq(token("|"), $.sequence)))),
        ")"
      ),

    value: ($) =>
      choice(
        $.quantity, // TODO: 7 'days' shows up as name, not quantity :/
        $.number,
        $.name,
        $.string,
        $.multiline_string,
        $.code_string,
        $.datetime,
        $.time,
        $.ratio,
        $.bool,
        seq($.reference, optional($.string)),
        $.canonical
      ),

    item: ($) =>
      seq(
        $.name,
        optional(seq("named", $.name)),
        $.cardinality,
        repeat($.flag)
      ),

    flag: () => choice("?!", "MS", "SU", "TU", "N", "D"),

    target_type: ($) =>
      choice($.name, alias($.reference, $.reference_type), $.canonical),

    /* Comments */
    comment: () =>
      token(
        choice(seq("//", /.*/), seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"))
      ),
  },
});
