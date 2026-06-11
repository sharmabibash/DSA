#include<stdio.h>
int sum(int n){
    if(n==1)
    return 1;
    else{
        return n + sum(n-1);
    }
}

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    printf("Sum is : %d", sum(n));

}