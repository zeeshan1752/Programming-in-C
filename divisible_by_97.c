#include<stdio.h>
int main(){
    int a;
    printf("Enter any number to check it is divisible by 97 or not: ");
    scanf("%d", &a);
    if (a%97==0)
    {
        printf("%d is divisible by 97.\n", a);
    }
    else{
        printf("%d is not divisible by 97 and leaves %d as a reminder\n", a, a%97);
    }
    return 0;
}