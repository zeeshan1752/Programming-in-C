#include<stdio.h>
float forceByGravity(float mass);
float forceByGravity(float mass){
    float force = mass*9.8;
    return force;
}
int main(){
    float m, f;
    printf("Enter mass to calculate the force exerted by earth or gravity (in Kg): ");
    scanf("%f", &m);
    f = forceByGravity(m);
    printf("The force exerted by earth on mass %.2f is: %.2f Newton", m, f);
    return 0;
}