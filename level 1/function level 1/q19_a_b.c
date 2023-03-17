// Q19. Write a program in C to swap values of two variables C and D through a function:
// a. call by value
// b. call by reference
#include<stdio.h>
void wrong_swap(int a, int b){
    a = a + b;
    b = a - b;
    a = a - b;
}
void right_swap(int* a, int* b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b; 
}
int main() {
    int x , y;
    printf("Enter The Value Of x & y: ");
    scanf("%d %d", &x, &y);
    printf("\nThe Value Of x =  %d & y = %d \n",x,y);
    printf("\n\n\ncall by value :- \n");
    wrong_swap(x,y);
    printf("After Wrong Swapping Value Of x Is : %d \n",x);
    printf("After Wrong Swapping Value Of y Is : %d \n",y);
    printf("\n\n\ncall by reference :- \n");

    right_swap( &x, &y);
    printf("After Right Swapping Value Of x Is : %d \n",x);
    printf("After Right Swapping Value Of y Is : %d \n",y);

    return 0;
}
