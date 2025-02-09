## But what is grammar here?

Grammar defines structure of the language what tokens are valid and how they should be interpreted.
There are formal notations to define the grammars. The first of the formal notations that are used is BNF (Backus Naur Form).

A BNF is defined by four element tuple, (T, N, P, S)
1. Terminal Symbols: The base vocabulary of the language, operators, if, while statements, in the case of a shell, probably, a pipe `|`, a `;` seperator or `&` something else.
2. Non Terminal Symbols: These are not part of the language but they define how the grammar of the language works in an abstract manner, we enclose them in `<>` angled brackets.
3. Production rules: The rule that relates a nonterminal symbol to expand into it's constituents. 
4. Start or Root: The start root of the parsing, where does it start? what is it labelled? a command? and expression or what?

Example BNF:
```
1. <expr> ::= "(" <expr> ")" | <expr> <operator> <expr> | a | b | c 
2. <operator> ::= "+" | "-" | "/" | "*"

```
Here, 1 and 2 are Production Rules,
`<expr>` is S, a, b, c, +, -, / , * are terminal symbols and `<expr>` and `<operator>` are nonterminals.
