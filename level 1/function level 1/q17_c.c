// Q17. Write a program in C to create a function that returns sum of two numbers with following
// prototype of function is :-  c. int sum(int,int)
#include<stdio.h>
int sum(int x, int y){
    return (x+y);
}
int main() {
    int a, b;
    printf("Enter Two number a & b : ");
    scanf("%d %d",&a, &b);
    printf("The Sum Of %d & %d Is : %d \n",a,b,sum(a,b));
    return 0;
}