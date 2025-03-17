//A program for finding the max and min from the three numbers
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the 1st no ");
    scanf("%d",&a);
    printf("Enter the 2nd no ");
    scanf("%d",&b);
    printf("Enter the 3rd no ");
    scanf("%d",&c);
    printf(" %d, %d, %d", a, b, c);
    int max, min;
//finding max
    if ((a>b)&&(a>c)){
        max=a;  
    }
    else if ((b>a)&&(b>c))
    {
        max=b;
    }else{
        max=c;
    }
//finding min
    if ((a<b)&&(a<c)){
        min=a;  
    }
    else if ((b<a)&&(b<c))
    {
        min=b;
    }else{
        min=c;
    }
    printf("\nThe maximum no. is %d", max);
    printf("\nThe minimum no. is %d", min);
    return 0;
}