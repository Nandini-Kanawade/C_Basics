#include<stdio.h>

int main()
{
    int x;
    printf("Enter any number from 1 to 5:=");
    scanf("%d", &x);
    switch(x)
    {
    case 1:
        printf("\nName=Tiramisu.\nPrice=Rs.999/-\n");
        break;
    case 2:
        printf("\nName=Smashed Potatoes.\nPrice=Rs.300/-\n");
        break;
    case 3:
        printf("\nName=Lamb Chops.\nPrice=Rs.999/-\n");
        break;
    case 4:
        printf("\nName=Chicken Shakshuka\nPrice=Rs.1599/-\n");
        break;
    case 5:
        printf("\nName=Brown Sugar-Glazed Salmon.\nPrice=Rs.1999/-\n");
        break;
    default:
        printf("\nName=White Sauce Spaghetti.\nPrice=Rs.799/-\n");
    }
    return 0;
}
