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




    #include <iostream>
    #include<cstring>
    #include <stack>

    using namespace std;
    
    int isOperand(char x){
        if (x == '+' || x == '-' || x == '*' || x == '/' ||
            x == '^' || x == '(' || x == ')'){
            return 0;
        }
        return 1;
    }
    
    int outPrecedence(char x){
        if (x == '+' || x == '-'){
            return 1;
        } else if (x == '*' || x == '/'){
            return 3;
        } else if (x == '^'){
            return 6;
        } else if (x == '('){
            return 7;
        } else if (x == ')'){
            return 0;
        }
        return -1;
    }
    
    int inPrecedence(char x){
        if (x == '+' || x == '-'){
            return 2;
        } else if (x == '*' || x == '/'){
            return 4;
        } else if (x == '^'){
            return 5;
        } else if (x == '('){
            return 0;
        }
        return -1;
    }
    
    char* convert(char* infix){
        char* postfix = new char [strlen(infix) + 1];
    
        stack<char> stk;
    
        int i = 0;
        int j = 0;
    
        while (infix[i] != '\0'){
            if (isOperand(infix[i])){
                postfix[j++] = infix[i++];
            } else {
                if (stk.empty() || outPrecedence(infix[i]) > inPrecedence(stk.top())){
                    stk.push(infix[i++]);
                } else if (outPrecedence(infix[i]) == inPrecedence(stk.top())){
                    stk.pop();
                }
                else {
                    postfix[j++] = stk.top();
                    stk.pop();
                }
            }
        }
    
        while (! stk.empty() && stk.top() != ')'){
            postfix[j++] = stk.top();
            stk.pop();
        }
    
        postfix[j] = '\0';
    
        return postfix;
    
    }
    
    
    int main() {
    
        char infix[] = "((a+b)*c)-d^e^f";
    
        cout << convert(infix) << endl;
    
    }









/* AB IMPLEMENTATION - INFIX TO POSTFIX USING C

#include <stdio.h>
#include <stdlib.h>
#include<strings.h>
struct Node
{
char data;
struct Node *next;
}*top=NULL;
void push(char x)
{
struct Node *t;
t=(struct Node*)malloc(sizeof(struct Node));
if(t==NULL)
printf("stack is full\n");
else
{
t->data=x;
t->next=top;
top=t;
}
}
char pop()
{
struct Node *t;
char x=-1;
if(top==NULL)
printf("Stack is Empty\n");
else
{
t=top;
top=top->next;x=t->data;
free(t);
}
return x;
}
void Display()
{
struct Node *p;
p=top;
while(p!=NULL)
{
printf("%d ",p->data);
p=p->next;
}
printf("\n");
}
int isBalanced(char *exp)
{
int i;
for(i=0;exp[i]!='\0';i++)
{
if(exp[i]=='(')
push(exp[i]);
else if(exp[i]==')')
{
if(top==NULL)
return 0;
pop();
}
}
if(top==NULL)
return 1;
else
return 0;
}
int pre(char x){
if(x=='+' || x=='-')
return 1;
else if(x=='*' || x=='/')
return 2;
return 0;
}
int isOperand(char x)
{
if(x=='+' || x=='-' || x=='*' || x=='/')
return 0;
else
return 1;
}
char * InToPost(char *infix)
{
int i=0,j=0;
char *postfix;
int len=strlen(infix);
postfix=(char *)malloc((len+2)*sizeof(char));
while(infix[i]!='\0')
{
if(isOperand(infix[i]))
postfix[j++]=infix[i++];
else
{
if(pre(infix[i])>pre(top->data))
push(infix[i++]);
else
{
postfix[j++]=pop();
}
}
}
while(top!=NULL)
postfix[j++]=pop();postfix[j]='\0';
return postfix;
}
int main()
{
char *infix="a+b*c-d/e";
push('#');
char *postfix=InToPost(infix);
printf("%s ",postfix);
return 0;
}


AB IMPLEMENTATION - INFIX TO POSTFIX - USING C++ STL


    #include <iostream>
    #include<cstring>
    #include <stack>

    using namespace std;
    
    int isOperand(char x){
        if (x == '+' || x == '-' || x == '*' || x == '/' ||
            x == '^' || x == '(' || x == ')'){
            return 0;
        }
        return 1;
    }
    
    int outPrecedence(char x){
        if (x == '+' || x == '-'){
            return 1;
        } else if (x == '*' || x == '/'){
            return 3;
        } else if (x == '^'){
            return 6;
        } else if (x == '('){
            return 7;
        } else if (x == ')'){
            return 0;
        }
        return -1;
    }
    
    int inPrecedence(char x){
        if (x == '+' || x == '-'){
            return 2;
        } else if (x == '*' || x == '/'){
            return 4;
        } else if (x == '^'){
            return 5;
        } else if (x == '('){
            return 0;
        }
        return -1;
    }
    
    char* convert(char* infix){
        char* postfix = new char [strlen(infix) + 1];
    
        stack<char> stk;
    
        int i = 0;
        int j = 0;
    
        while (infix[i] != '\0'){
            if (isOperand(infix[i])){
                postfix[j++] = infix[i++];
            } else {
                if (stk.empty() || outPrecedence(infix[i]) > inPrecedence(stk.top())){
                    stk.push(infix[i++]);
                } else if (outPrecedence(infix[i]) == inPrecedence(stk.top())){
                    stk.pop();
                }
                else {
                    postfix[j++] = stk.top();
                    stk.pop();
                }
            }
        }
    
        while (! stk.empty() && stk.top() != ')'){
            postfix[j++] = stk.top();
            stk.pop();
        }
    
        postfix[j] = '\0';
    
        return postfix;
    
    }
    
    
    int main() {
    
        char infix[] = "((a+b)*c)-d^e^f";
    
        cout << convert(infix) << endl;
    
    }





 */

