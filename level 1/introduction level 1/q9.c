// Q9. Write a C program to divide one integer variable by a float variable, display the result.
#include <stdio.h>
int main() {    

    int number1;
    float number2, divide;
    
    printf("Enter one integer & one float variables: \n");
    scanf("%d %f", &number1, &number2);

    // divide one integer & one float
    divide = number1 / number2;      
    
    printf("%d / %f = %f", number1, number2, divide);
    return 0;
}
