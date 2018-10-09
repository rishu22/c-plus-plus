#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,temp;
	int a[10];
	for(i=0;i<10;i++)
	{
	printf("Enter %d number :- ",i);
	scanf("%d",&a[i]);
	}
	for(i=10;i>0;i--)
		{
			for(j=0;j<i;j++)
			{
				if(a[j]>a[j+1])
					{
						temp=a[j];
						a[j]=a[j+1];
						a[j+1]=temp;
					}
			}
		}

	printf("Sorted array is:-  ");
	for(j=0;j<10;j++)
	{
		printf("\n %d \t",a[j]);
	}
getch();
}