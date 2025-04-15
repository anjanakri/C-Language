//A program for Simple Interest
#include <stdio.h>
#include <math.h>
float si(float p, float r, float t){
    return (p*r*t)/100;
}
float ci(float p, float r, float t){
    return p*(pow((1+r/100),t))-p;
}
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
//Printing user's choice
int Choice;
calculate:
while (1) { // Infinite loop until the user provides valid input
    printf("\nEnter 1 if you want the Simple Interest\n");
    printf("Enter 2 if you want the Compound Interest");
    printf("\nEnter your Choice: ");
    scanf("%d", &Choice);

    if (Choice == 1) {
        printf("Simple Interest: %.2f\n", si(p, r, t));
        break; // Exit the loop after valid input
    } else if (Choice == 2) {
        printf("Compound Interest: %.2f\n", ci(p, r, t));
        break; // Exit the loop after valid input
    } else {
        printf("Oops! Looks like your choice isn't valid!\n");
        printf("Do you want to try again? Type Y or N: ");
        char ch;
        scanf("%s", &ch);
        if (ch=='Y')
        {
            goto calculate;
        }
        else if (ch =='N') {
            printf("Exiting the program.\n");
            break;} // Exit the loop and program if user doesn't want to retry
        else{
            printf("INVALID!!!! \n exiting the program.");
            break;
        }
        }
    }
return 0;
}