#include<stdio.h>
int main(){
    int n, factorial=1;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &n);
    for (int i = n; i; i--)
    {
        factorial *= i;
    }
    printf("The factorial of %d is: %d", n, factorial);
    
    return 0;
}