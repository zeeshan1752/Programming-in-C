#include<stdio.h>
int main(){
    int sum=0, i=1;
    do
    {
        sum += i;
        i++;
    } while (i<=10);

    printf("The sum of first 10 natural number is: %d", sum);
    
    return 0;
}