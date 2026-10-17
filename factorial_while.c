#include<stdio.h>
int main(){
    int i, n, factorial=1;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &n);
    i=n;
    while (i>0)
    {
        factorial *= i;
        i--;
    }
    printf("The factorial of %d is: %d", n, factorial);
    return 0;
}