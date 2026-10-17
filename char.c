#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character to check it is lowercase or uppercase: ");
    scanf("%c", &ch);
    if (ch>='a'&& ch<='z')
    {
        printf("The character '%c' is a lowercase.", ch);
    }
    else{
        printf("The character '%c' is an uppercase.", ch);
    }
    return 0;
}