// Q15_b. Write a C program to print 10 whole numbers from the beginning using do while loop.
// [Hint: 0 1 2 3 4 5 6 7 8 9 ]

#include<stdio.h>

int main() {
    int i=0,n;
    printf("Enter n: ");
    scanf("%d",&n);
    do{
        printf("%d ",i);
        i++;
    } 
    while(i<=n);

    return 0;
}
