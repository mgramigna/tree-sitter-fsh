[
 "("
 ")"
] @punctuation.bracket

[
 "*"
 "^"
 "="
 ":"
 ".."
] @punctuation.operator

[
 "#"
] @punctuation.special

[
 "Profile"
 "Alias"
 "Extension"
"Invariant"
"Instance"
"ValueSet"
"CodeSystem"
"Mapping"
"Logical"
"Resource"
"Parent"
"Title"
"Description"
"Id"
; "Severity"
; "InstanceOf"
; "Usage"
; "Source"
; "XPath"
; "Target"
] @keyword

(sd_metadata (parent (name))) @type
(string) @string
(multiline_string) @string
(path) @parameter
