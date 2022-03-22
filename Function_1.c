#include<stdio.h>
int sum();
int main()
{
    int a,result;

    printf("\nEnter the number: ");
    scanf("%d", &a);

    result=sum(a);
    printf("\nSum of digits of %d is = %d\n\n", a,result);
}
int sum(int a)
{
    if(a==0)
        return 0;
    else
        return(a%10+sum(a/10));
}
