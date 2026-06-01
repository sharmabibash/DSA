#include<stdio.h>
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

