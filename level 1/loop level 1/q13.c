// Q13. Write a C program to find the sum of 30 natural numbers from the beginning consecutively.
// [Hint: 1+2+3+4+5+...+29+30]

#include<stdio.h>

int main() {
    int n;
    int sum = 0;
    printf("Enter the n : ");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("The Total Sum Of First %d Number Is : %d \n",n,sum);
    return 0;
}