#include<stdio.h>

int fact(int n){
    if (n==0 || n==1)
    return 1;
    else{
        return n*fact(n-1);
    }
}

int main(){
    int n;
    printf("Enter the number to find factorial : ");
    scanf("%d",&n);
    

    int result = fact(n);
    printf("Factorial = %d ",result);

    return 0;
}