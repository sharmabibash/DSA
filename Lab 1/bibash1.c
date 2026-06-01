#include<stdio.h>
#include<ctype.h>
#include<string.h>


// QN: 1
/*#include<stdio.h>
#define MAX 5
int stack[MAX];

int top = -1;

void push(int value){
if(top==MAX -1)
printf("Stack overflow\n");
else{
    stack[++top]=value;
    printf("%d Pushed Sucessfully\n",value);
}
}

void pop(){
    if(top==-1){
        printf("Stack underflow\n");

    }
    else{
        printf("%d Popped Sucess!\n",stack[top--]);
    }
}

int main(){
    push(10);
    push(10);
    push(10);
    push(10);
    push(10);
    push(10);
    pop();
    pop();
    return 0;
}
*/


// QN:-2 ::: A

/*#include<stdio.h>
#include<ctype.h>
#include<string.h>

char stack[100];
int top = -1;

void push(char c){
    stack[++top]=c;
}
char pop(){
    return stack[top--];
}

int precedence(char op){
    if(op=='^') return 3;
    if(op=='*' || op=='/') return 2;
    if(op=='+' || op=='-') return 1;
    return 0;
}

int main(){
    char infix[100], postfix[100];
    int i,j=0;

    printf("Enter the infix expression : ");
    scanf("%s",infix);
for(i=0; infix[i]; i++) {
        char ch = infix[i];

        if(isalnum(ch))
            postfix[j++] = ch;

        else if(ch=='(')
            push(ch);

        else if(ch==')') {
            while(stack[top]!='(')
                postfix[j++] = pop();
            pop();
        }

        else {
            while(top!=-1 && precedence(stack[top]) >= precedence(ch))
                postfix[j++] = pop();
            push(ch);
        }
    }

    while(top!=-1)
        postfix[j++] = pop();

    postfix[j] = '\0';

    printf("Postfix: %s\n", postfix);

    return 0;
}*/


// QN:-2 ::: B

/*void reverse(char str[]){
    int i,j=strlen(str)-1;
    char temp;
    
    for(i=0,j;i<j;i++,j--){
        temp = str[i];
        str[i]=str[j];
        str[j]=temp;
    }
}

int main() {
    char infix[100], prefix[100];

    printf("Enter infix expression: ");
    scanf("%s", infix);

    reverse(infix);

    for(int i=0; infix[i]; i++) {
        if(infix[i]=='(')
            infix[i]=')';
        else if(infix[i]==')')
            infix[i]='(';
    }

    printf("Apply postfix conversion on reversed expression.\n");
    printf("Reverse obtained postfix to get prefix.\n");

    return 0;
}*/



// QN : 3

/*#include <stdio.h>
#include <ctype.h>

int stack[100];
int top = -1;

void push(int x) {
    stack[++top] = x;
}

int pop() {
    return stack[top--];
}

int main() {
    char postfix[100];
    int a, b;

    printf("Enter postfix expression: ");
    scanf("%s", postfix);

    for(int i=0; postfix[i]; i++) {
        if(isdigit(postfix[i]))
            push(postfix[i] - '0');
        else {
            b = pop();
            a = pop();

            switch(postfix[i]) {
                case '+': push(a+b); break;
                case '-': push(a-b); break;
                case '*': push(a*b); break;
                case '/': push(a/b); break;
            }
        }
    }

    printf("Result = %d\n", pop());

    return 0;
}*/


// QN: 4
#include <stdio.h>

char stack[100];
int top = -1;

void push(char ch) {
    stack[++top] = ch;
}

char pop() {
    return stack[top--];
}

int match(char a, char b) {
    return (a=='(' && b==')') ||
           (a=='{' && b=='}') ||
           (a=='[' && b==']');
}

int main() {
    char exp[100];
    int i, flag = 1;

    printf("Enter expression: ");
    scanf("%s", exp);

    for(i=0; exp[i]; i++) {
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
            push(exp[i]);

        else if(exp[i]==')' || exp[i]=='}' || exp[i]==']') {
            if(top==-1 || !match(pop(), exp[i])) {
                flag = 0;
                break;
            }
        }
    }

    if(top!=-1)
        flag = 0;

    if(flag)
        printf("Balanced Parentheses\n");
    else
        printf("Not Balanced\n");

    return 0;
}