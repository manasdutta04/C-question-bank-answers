// Q18. Write a program in C to increment value by 2 through a function:
// a. call by value
// [hint: int incValue(int) for call by value and int incValue(int*) for call by reference]


#include<stdio.h>

void Increment(int x){
    x+=1;
    printf("Value of X from the function : %d",x);
}

int main(){
    int x=10;
    Increment(x);
    printf("\nValue of X from the main : %d",x);
}