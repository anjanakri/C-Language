#include<stdio.h>
int main(){
    printf("Hello User\nThis is a simple calculator that performs Calculation between two operands\nOpertaions performed by this calculator are:\n+ : (addition)\n- : (Substraction)\n* : (Multiplication)\n/ : (Division)\n%% : (Remainder)\n");
    int valid=1;//for checking the validity
    float a,b,r;
    char op;
    printf("Enter the first number: ");
    scanf("%f", &a);
    printf("Enter the operation: ");
    scanf(" %c", &op);
    printf("Enter the second number: ");
    scanf("%f", &b);
    //performing the operation
    switch (op)
    {
    case '+':
        r=a+b;
        break;
    case '-':
        r=a-b;
        break;
        case '*':
        r=a*b;
        break;
        case '%':
        r=(int)a%(int)b;
        break;
        case '/':
        if (b!=0)
        {
            r=a/b;
        }
        else{
            valid=0;
            printf("Error: Division by zero is not allowed. Please enter a non-zero value for the second number.");      }
        break;  
    default:
        valid=0;
        printf("Oops! Looks like you did some mistake.");
        break;
    }
    if (valid==1)
    {
        printf("The value of %.2f %c %.2f = %.2f", a, op, b, r);
    }  
    return 0;
}