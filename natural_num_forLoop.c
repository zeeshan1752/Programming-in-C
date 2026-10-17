#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n to get first n natural number using for loop: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        printf("The value of i is: %d\n", i);
    }
    
    return 0;
}