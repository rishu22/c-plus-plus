#include<conio.h>
#include<stdio.h>
main()
{
int i,j,k;
for(k=1;k<=5;k++)
  {

   for(i=5;i>k;i--)
     {
       printf(" ");
     }

   for(j=1;j<=i;j++)
    {
      printf("%d",j);
    }
    printf("\n");
  }
  getch();
  }
