#include<stdio.h>
void main()
{
  int array[3][3], i, j, *ptr;
  printf("\nEnter the elements in the matrix :\n");

  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
	      printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",&array[i][j]);
      }
  }
  ptr=&array[2][2];

  printf("\nThe matrix is : \n");
  for(i=0;i<3;i++)
    {
       printf("\n");
       for(j=0;j<3;j++)
           printf("%d\t", *ptr--);
    }

  printf("\n\n");
  printf("Sum of diagonal elemnts is %d", array[0][0] + array[1][1] + array[2][2]);
  printf("\n\n");
}
