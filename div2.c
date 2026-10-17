//Write a program to check if a number is divisible by 2 or not.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d", num%2 == 0);
    return 0;
}