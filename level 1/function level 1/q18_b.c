// Q18. Write a program in C to increment value by 2 through a function:
// b. call by reference
// [name of the function can be anything but always better to have a name that reflects proper meaning of the subject]


#include<stdio.h>

void Increment(int *x){
    *x+=1;
    printf("Value of X from the function : %d",*x);
}

int main(){
    int x=10;
    Increment(&x);
    printf("\nValue of X from the main : %d",x);
}