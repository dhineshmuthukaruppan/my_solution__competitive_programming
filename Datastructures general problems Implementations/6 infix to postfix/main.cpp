/* rules for converting infix to postfix expression

    - fully parenthesis the expression using any explicity paranthesis and the arithmetic
    precedence - multiply and divide before add and subtract
    - change all infix notations in each parenthesis to postfix notation, starting from 
    the innermost expressions. conversion to postfix notation is done by moving the 
    operator to the location of the expression's closing parenthesis
    - remove all parenthesis

    a * b =  ab*
    a*b+c = ab*c+
    a+b*c = abc*+
    a+b*c-d/e = abc*+de/-

    priority 2 - * /
    priority 1 - + -
    priority 0 - ()
 */