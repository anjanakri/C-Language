//A program for Simple Interest
#include <stdio.h>
#include <math.h>
int main(){
    float p,r,t;
    printf("Enter the Principal Amount: ");
    scanf("%f", &p);
//Entering Rate 
    printf("Enter the Rate: ");
    scanf("%f", &r);
//Entering time
    printf("Enter the Time: ");
    scanf("%f", &t);
//Printing user's input
printf("As per the user \n Principal Amount= %.2f \n Rate= %.2f \n Time= %.2f", p, r, t);
float si;
//Calculating & Printing SI
si=(p*r*t)/100;
printf(" \nSimple interest of the given %.2f", si);
    return 0;
}