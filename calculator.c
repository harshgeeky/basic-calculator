#include <stdio.h>
void main()
{
    int x,y,z;
    char ch;
    printf("Enter number x :");
    scanf("%d", &x);
    printf("Enter number y : ");
    scanf("%d", &y);
    printf("Enter Operator : + , -, *,/ \n ");
    scanf(" %c", &ch);
    switch(ch)
    {
        case '+' : z = x+y;
        printf("Result is : %d",z);
        break;
        case '-' : z = x-y;
        printf("Result is : %d",z);
        break;
        case '*' : z = x*y;
        printf("Result is : %d",z);
        break;
        case '/' : z = x/y;
        printf("Result is : %d",z);
        break;
        default : printf("Wrong Entry");
    }
}
