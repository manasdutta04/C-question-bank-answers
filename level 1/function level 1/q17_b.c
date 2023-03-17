// Q17. Write a program in C to create a function that returns sum of two numbers with following
// prototype of function is :-  b. void sum(int,int)
#include<stdio.h>
void sum(int a, int b) {
    printf("The Sum Of %d & %d Is : %d \n",a,b,(a+b));
}
int main() {
    int x,y;
    printf("Enter The Value Of x : ");
    scanf("%d",&x);
    printf("Enter The Value Of y : ");
    scanf("%d",&y);
    sum(x,y);
    return 0;
}