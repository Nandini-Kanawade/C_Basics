#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a:= ");
    scanf("%d", &a);
    printf("Enter b:= ");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nSwapped terms \na=%d \nb=%d\n", a,b);
}
