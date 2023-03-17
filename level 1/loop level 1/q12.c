// Q12. Write a C program to print your name 10 times.

#include <stdio.h>

int main()
{

        char name[20];
        printf("enter your name: ");
        scanf("%s", name);

        for (int i = 0; i < 10; i++)
        {
                printf("%d: %s\n", i+1, name);
        }

        return 0;
}

// otherwise:
// #include <stdio.h>

// int main()
// {

//         char name[20];

//         scanf("%s", name);

//         for (int i = 0; i < 10; i++)
//         {
//                 printf("%d - %s\n", i+1, name);
//         }

//         return 0;
// }
