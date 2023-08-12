#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3, key;
    
    char rep;
    
    do{
    printf("\n");
    printf("----- Recursive Calculator (two numbers) ----- \n");
    printf("\n");
    printf("for addition press 1 \n");
    printf("for substraction press 2 \n");
    printf("for multiplication press 3 \n");
    printf("for division press 4 \n");
    printf("\n");

    scanf("%d", &key);

    switch(key){
        case 1 :
        printf("\n");
        printf("enter first number: ");
        scanf("%d", &num1);
        printf("enter second number: ");
        scanf("%d", &num2);
        printf("addition result: %d \n", num1 + num2);
        printf("\n");
        printf("Continue ? (y/n) ");
        scanf(" %c", &rep);
        printf("\n");
        break;

        case 2 :
        printf("\n");
        printf("enter first number: ");
        scanf("%d", &num1);
        printf("enter second number: ");
        scanf("%d", &num2);
        printf("substraction result: %d \n", num1 - num2);
        printf("\n");
        printf("Continue ? (y/n) ");
        scanf(" %c", &rep);
        printf("\n");
        break;

        case 3 :
        printf("\n");
        printf("enter first number: ");
        scanf("%d", &num1);
        printf("enter second number: ");
        scanf("%d", &num2);
        printf("multiplication result: %d \n", num1 * num2);
        printf("\n");
        printf("Continue ? (y/n) ");
        scanf(" %c", &rep);
        printf("\n");
        break;

        case 4 :
        printf("\n");
        printf("enter first number: ");
        scanf("%d", &num1);
        printf("enter second number: ");
        scanf("%d", &num2);
        printf("division result: %d \n", num1 / num2);
        printf("\n");
        printf("Continue ? (y/n) ");
        scanf(" %c", &rep);
        printf("\n");
        break;

        default :
        break;

    }
    }while(rep == 'y');

    return 0;
}
