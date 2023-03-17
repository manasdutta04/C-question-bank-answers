// Q14. Write a C program to find the product of 30 natural numbers from the beginning consecutively.
#include<stdio.h>

// Type 1 1

int main() {
    int n; 
    double fact = 1;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i = 1; i <= n ; i++) {
        fact *= i;
    }
    printf("The Factorial Of First %d Number Is : %.0f \n",n,fact);
    return 0;
}



/*
// type 2
#include<stdio.h>

double factorial (int n){
    if(n<2){
        return 1;
    }
    return n * factorial(n-1);
}
int main() {
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    factorial(n);
    printf("The Factorial Of First %d Number Is : %.0f \n",n,factorial(n));
    return 0;
}
*/