#include<stdio.h>
int main(){
    int sum=0, i=1;
    while (i<=10)
    {
        sum += i;
        i++;
    }
    printf("The sum of first 10 natural number using while loop is: %d", sum);
    return 0;
}