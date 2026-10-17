#include<stdio.h>
int factorial(int n);

int factorial(int n){
    if (n==0 || n==1)
    {
        return 1;
    }
    
    return n*factorial(n-1);
}
int main(){
    int n, f;
    printf("Enter an integer to calculate it's factorial: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("You have entered a negative integer.\nPlease enter a non negative integer");
    }
    f = factorial(n);
    printf("The factorial of %d is %d.", n, f);
    return 0;
}