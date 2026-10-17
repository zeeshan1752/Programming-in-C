#include<stdio.h>

int sumNaturalNum(int n);
int sumNaturalNum(int n){
    if (n == 0)
    {
        return 0;
    }
    return n + sumNaturalNum(n-1);
}
int main(){
    int n, sum;
    printf("To find the sum of first n natural number:\nEnter the value of n: ");
    scanf("%d", &n);
    sum = sumNaturalNum(n);
    printf("The sum of first %d natural number is: %d", n, sum);
    return 0;
}