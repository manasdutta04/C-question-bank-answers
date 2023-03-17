// Q17. Write a program in C to create a function that returns sum of two numbers 
// with following prototypes:- a. void sum()    
#include<stdio.h>
void sum(void) {
    int a, b;
    printf("Enter The value Of a : ");
    scanf("%d",&a);
    printf("Enter The value Of b : ");
    scanf("%d",&b);
    printf("The Sum Of %d And %d Is : %d \n",a,b,(a+b));
}
int main() {
    sum();
    return 0;
}