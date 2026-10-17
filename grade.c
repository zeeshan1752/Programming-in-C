#include<stdio.h>
int main(){
    int phy, chem, maths;
    printf("Enter the marks of phy: ");
    scanf("%d", &phy);
    printf("Enter the marks of chem: ");
    scanf("%d", &chem);
    printf("Enter the marks of maths: ");
    scanf("%d", &maths);
    if (phy<33 || chem<33 || maths<33){
        printf("You are failed due to your marks is less than 33. For pass, you have to get atleast 33 marks in each subject.");
    }
    else if ((phy+chem+maths)/3 <40) {
        printf("You are failed due to your overall percentage is less than 40.");
    }
    else{
        printf("Congratulations! You are pass.");
    }
    return 0;
}