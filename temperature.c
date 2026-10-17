//To change the temperature from celcius to farenheit
#include<stdio.h>
#include<conio.h>
float main()
{
    float c, f;
    printf("Enter temperature in Celciu: ");
    scanf("%f", &c);
    f = (c*9/5)+32;
    printf("The temperature in farenheit when %f in celcius is %.4f", c, f);
    return 0;
}