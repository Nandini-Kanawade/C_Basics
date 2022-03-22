#include<stdio.h>
int LCM(int, int);
int main()
{
    int a, b, result;

    printf("\nEnter two numbers:= ");
    scanf("%d %d", &a, &b);
    result=LCM(a, b);
    printf("The LCM of %d and %d is := %d", a, b, result);
    return 0;
}
int LCM(int a, int b)
{
    static int x=1;
    if(x%a==0 && x%b==0)
    {
        return x;
    }
    x++;
    LCM(a, b);
    return x;

}
