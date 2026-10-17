#include<stdio.h>
float average(float x, float y, float z);
float average(float x, float y, float z){
    float avg = (x+y+z)/3;
    return avg;
}
int main(){
    float num1, num2, num3;
    printf("To find the average of three number:\n");
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("Enter third number: ");
    scanf("%f", &num3);
    float avg = average(num1, num2, num3);
    printf("The average of %.2f, %.2f and %.2f is %.2f.", num1, num2, num3, avg);
    return 0;
}