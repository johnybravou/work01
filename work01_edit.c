#include<stdio.h>
int main()
{
    float n1,n2;
    char op;
    printf("Enter both number: ");
    scanf("%f %f",&n1,&n2);
    printf("operator : ");
    scanf(" %c",&op);
    switch (op)
    {
        case '+':
            printf("%f",n1+n2);
            break;
        case '-':
            printf("%f",n1-n2);  
            break;
        case '*':
            printf("%f",n1*n2);
            break;
        case '/':
            printf("%f",n1/n2);
            break;
        default:
            printf("wtf");
            break;
    }
    return 0;
}