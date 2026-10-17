#include<stdio.h>

int fibonacci(int n);
int fibonacci(int n){
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return (fibonacci(n-1) + fibonacci (n-2));
}

int main(){
    int n, nth;
    printf("To find the Fibonacci series upto n terms.\nPlease enter the value of n: ");
    scanf("%d", &n);

    printf("The fibonacci series upto %d terms is:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    nth = fibonacci(n-1);
    printf("The %dth terms of a Fibonacci series is: %d", n, nth);
    return 0;
}