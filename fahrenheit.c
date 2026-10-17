#include<stdio.h>
float fahrenheit(float c);
float fahrenheit(float c){
    float f = ((9/5)*c)+32;
    return f;
}
int main(){
    float c;
    printf("Enter Celsius temperature to change in Fahrenheit: ");
    scanf("%f", &c);
    float f = fahrenheit(c);
    printf("%.2f degree Celsius temperature in Fahrenheit is: %.2f", c, f);
    return 0;
}