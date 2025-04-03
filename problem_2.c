// Implement a function that finds the factorial of a number using recursion.

#include<stdio.h>

int factorial(int n){
    if(n<2){
        return 1;
    } else{
        return n*factorial(n-1);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int fact=factorial(n);
    printf("%d\n",fact);
    return 0;
}