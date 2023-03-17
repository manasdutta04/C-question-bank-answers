// Q15_a. Write a C program to print 10 whole numbers from the beginning using while loop.
// [Hint: 0 1 2 3 4 5 6 7 8 9 ]

#include<stdio.h>

int main() {
    int num;
    printf("Enter The Num : ");
    scanf("%d",&num);
    int i = 1;
    while(i <= num){
        printf("%d  ",i);
        i++;
    }
    return 0;
}