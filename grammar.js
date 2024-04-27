module.exports = grammar({
  name: "fsh",

  extras: ($) => [$.fsh_comment, /[\s\p{Zs}\uFEFF\u2060\u200B]/],

  // TODO: look at sequence conflict
  // TODO: look at code insert rule conflict
  conflicts: ($) => [
    [$.path, $.name],
    [$.sequence],
    [$.value, $.name],
    [$.insert_rule, $.code_insert_rule],
    [$.code_insert_rule, $.concept, $.code_string],
    [$.caret_value_rule, $.code_caret_value_rule],
  ],

  rules: {
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
          $.resource,
          $.rule_set,
          $.param_rule_set
        )
      ),

    /* Entities */

    alias: ($) =>
      seq(
        "Alias",
        token(":"),
        alias($.sequence, $.alias_name),
        token("="),
        $.sequence
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

    rule_set: ($) =>
      seq(
        "RuleSet",
        token(":"),
        alias($.sequence, $.rule_set_reference),
        repeat1($.rule_set_rule)
      ),

    param_rule_set: ($) =>
      seq(
        "RuleSet",
        token(":"),
        $.param_rule_set_reference,
        repeat1(alias($.rule_set_rule, $.param_rule_set_content))
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

    /** Metadata Fields **/

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

    rule_set_rule: ($) =>
      choice(
        $.sd_rule,
        $.add_element_rule,
        $.add_cre_element_rule,
        $.concept,
        $.code_caret_value_rule,
        $.code_insert_rule,
        $.vs_component,
        $.mapping_rule
      ),

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

    lr_rule: ($) =>
      choice($.sd_rule, $.add_element_rule, $.add_cre_element_rule),

    vs_rule: ($) => choice($.caret_value_rule, $.vs_component, $.insert_rule),

    cs_rule: ($) =>
      choice($.code_caret_value_rule, $.code_insert_rule, $.concept),

    instance_rule: ($) =>
      choice($.fixed_value_rule, $.path_rule, $.insert_rule),

    mapping_entity_rule: ($) =>
      choice($.mapping_rule, $.path_rule, $.insert_rule),

    cardinality_rule: ($) => seq("*", $.name, $.cardinality, repeat($.flag)),

    add_cre_element_rule: ($) =>
      seq(
        "*",
        $.path,
        $.cardinality,
        "contentReference",
        choice($.sequence, $.code),
        $.string,
        optional(choice($.string, $.multiline_string))
      ),

    code_insert_rule: ($) =>
      seq(
        "*",
        repeat($.code),
        "insert",
        choice(
          alias($.sequence, $.rule_set_reference),
          $.param_rule_set_reference
        )
      ),

    insert_rule: ($) =>
      seq(
        "*",
        optional($.path),
        "insert",
        choice(
          alias($.sequence, $.rule_set_reference),
          $.param_rule_set_reference
        )
      ),

    valueset_rule: ($) =>
      seq("*", $.path, "from", $.name, optional($.strength)),

    fixed_value_rule: ($) =>
      seq("*", $.path, "=", $.value, optional(seq("(", "exactly", ")"))),

    contains_rule: ($) =>
      seq("*", $.path, "contains", $.item, repeat(seq("and", $.item))),

    caret_value_rule: ($) =>
      seq("*", optional($.path), $.caret_path, "=", $.value),

    code_caret_value_rule: ($) =>
      seq("*", repeat(prec.left(1, $.code)), $.caret_path, "=", $.value),

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

    vs_from_valueset: ($) =>
      prec.left(1, seq("valueset", $.name, repeat(seq("and", $.name)))),

    vs_filter_list: ($) =>
      seq($.vs_filter_definition, repeat(seq("and", $.vs_filter_definition))),

    vs_filter_definition: ($) =>
      seq($.name, $.vs_filter_operator, optional($.vs_filter_value)),

    vs_filter_operator: ($) => choice("=", $.sequence),

    vs_filter_value: ($) =>
      choice($.code_string, "true", "false", $.string, $.regex),

    /* Misc */

    code: ($) =>
      seq(
        optional(alias($.sequence, $.code_system)),
        token("#"),
        choice(
          alias($.string, $.concept_string),
          alias($.sequence, $.code_value)
        )
      ),

    concept: ($) =>
      seq(
        "*",
        repeat1($.code),
        optional($.string),
        optional(choice($.string, $.multiline_string))
      ),

    code_string: ($) => seq($.code, optional($.string)),

    sequence: ($) =>
      choice(
        repeat1(/[^ \t\r\n\f\u00A0]/),
        alias(/https?:\/\/[a-zA-Z0-9\.\-\/#]+/, $.url)
      ),

    caret_path: ($) => seq(token("^"), $.sequence),

    name: ($) =>
      choice(
        $.sequence,
        $.number,
        "MS",
        "SU",
        "TU",
        "N",
        "D",
        "codes",
        "valueset",
        "system"
      ),

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
            /u\{[0-9a-fA-F]+\}/
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

    strength: ($) =>
      seq(
        "(",
        alias(
          choice("example", "preferred", "extensible", "required"),
          $.strength_value
        ),
        ")"
      ),

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

    param_rule_set_params: () =>
      repeat1(choice(/\\\(|\\\)|\\,/, /[^ \t\r\n\f\u00A0]/)),

    param_rule_set_reference: ($) =>
      seq($.sequence, "(", $.param_rule_set_params, ")"),

    regex: ($) => seq("/", $.regex_pattern, token.immediate("/")),

    regex_pattern: () =>
      token.immediate(
        prec(
          -1,
          repeat1(
            choice(
              seq(
                "[",
                repeat(
                  choice(
                    seq("\\", /./), // escaped character
                    /[^\]\n\\]/ // any character besides ']' or '\n'
                  )
                ),
                "]"
              ), // square-bracket-delimited character class
              seq("\\", /./), // escaped character
              /[^/\\\[\n]/ // any character besides '[', '\', '/', '\n'
            )
          )
        )
      ),

    /* Comments */

    fsh_comment: () =>
      choice(seq("//", /.*/), seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")),
  },
});
