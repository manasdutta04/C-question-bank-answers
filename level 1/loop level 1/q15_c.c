// Q15_c. Write a C program to print 10 whole numbers from the beginning using for loop.
// [Hint: 0 1 2 3 4 5 6 7 8 9 ]

#include<stdio.h>

int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        printf("%d ",i);
    }
    
    return 0;
}