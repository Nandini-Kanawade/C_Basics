#include<stdio.h>
int main()
{
  int stairs, i, j;

  printf("\nEnter the number of stairs : ");
  scanf("%d",&stairs);
  printf("\n");

  for(i=1; i<=stairs; i++)
  {
      for(j=1; j<=i; j++)
      {
           printf("10");
      }
      printf("\n");
  }

}
