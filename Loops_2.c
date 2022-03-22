#include<stdio.h>
int main()
{
    int x,a,b,c,num=1;

    printf("\nEnter the number of rows : ");
    scanf("%d",&x);
    printf("\n");

    for (a=0 ; a<x ;a++)
    {
        for (b=1 ; b<=x-a ; b++)
        {
            printf(" ");
        }
        for (c=0 ; c<=a ; c++)
        {
           if( a==0 || c==0)
            num=1;
           else
            num=num*(a - c + 1)/c;
           printf("%d ",num);
        }
        printf("\n");

    }
}
