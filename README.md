# 1 comment or not

Read the input String.
Check if the string starts with substring "//" then it is a comment
else check if string starts and end with "/_" and "_/" respectively then
check if there is no other substring "\*/" in the range [2, length-2) then it is a comment
else it is not a comment string.

<hr>

# 2 recognize string under a*, a*b+, abb

By using transition diagram we verify input of the state. If the state recognize the given pattern rule.
Then print string is accepted under a*/ a*b+/ abb. Else print string not accepted.

<hr>

# 3 identiﬁer is valid or not

Read the given input string. Check the initial character of the string is numerical or any special
character except ‘\_’ then print it is not a valid identiﬁer. Otherwise print it as valid identiﬁer if
remaining characters of string are alphabet or digit or underscore.

<hr>

# 4 lexical analyzer for validating operators.

Read the given input. If the given input matches with any operator symbol. Then display in terms of
words of the particular symbol. Else print not
a operator.

<hr>

# 5 Design a lexical analyzer in C

A. Read the input Expression
B. Check whether input is alphabet or digits then store it as identiﬁer
C. If the input is is operator store it as symbol

<hr>

# 6 predictive parse

A predictive parser is a recursive descent parser with no backtracking or backup. It is a topdown
parser that does not require backtracking. At each step, the choice of the rule to be expanded is
made upon the next terminal symbol.
Predictive Parser Algorithm :

1. Make a transition diagram(DFA/NFA) for every rule of grammar.
2. Optimize the DFA by reducing the number of states, yielding the ﬁnal transition diagram.
3. Simulate the string on the transition diagram to parse a string.
4. If the transition diagram reaches an accept state after the input is consumed, it is parsed.

<hr>

# 7 lexical analyzer using JLex, ﬂex

Read the input string. Check whether the string is identiﬁer/ keyword
/symbol by using the rules of identiﬁer and keywords using LEX Tool

<hr>

# 7 lexical analyzer using JLex, ﬂex

Read the input string. Check whether the string is identiﬁer/ keyword
/symbol by using the rules of identiﬁer and keywords using LEX Tool

<hr>

# 8 operator precedence parsing

B. Verify the precedence between terminals and symbols
C. Find the handle enclosed in <.> and reduce it to production symbol.
D. Repeat the process till we reach the start node.

<hr>

# 9 recursive descent parser

A. Read the arithmetic input string.
B. Verify the precedence between terminals and symbols
C. Find the handle enclosed in <.> and reduce it to production symbol.
D. Repeat the process till we reach the start node.

<hr>

# 10 shift reducing parser.

<hr>

# 11 ﬁnd the capital letters in a ﬁle

Rule Section has three rules,

1. ﬁrst rule matches with capital letters
2. second rule matches with any character except newline
3. third rule does not take input after the enter.
   When a capital letter is encountered store and increment the count value.

<hr>

# 12 ﬁnd consonants or vowels.

Approach is very simple.

1. If any vowel is found increase vowel counter,
2. If consonant is found increase consonant counter otherwise do nothing.

<hr>

# 13 remove multiple spaces, lines.

Open input ﬁle in read mode and whenever parser encounters newline (\n), space ( ) or tab (\t)
remove it and write all the other characters in output ﬁle.

<hr>
