#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int n[10]={0,1,2,3,4,5,6,7,8,9},i,a,m,b,e,f;
  /*	for(i=0;i<10;i++)
	{
	printf("\nEnter no.");
	scanf("%d",&n[i]);
	}*/
	printf("Enter no to find \n");
	scanf("\n %d",&a);
	b=0;
	e=9;
	m=(b+e)/2;
	f=0;
	while(b<=e)
	{
		if(n[m]==a)
		{
		f=1;
		break;
		}
		else if(n[m]<a)
		{
		b=m+1;
		m=(b+e)/2;
		}
		else if(n[m]>a)
		{
		e=m-1;
		m=(b+e)/2;
		}
	}
		if(f==1)
		{
		 printf("no is found");
		}
		else
		{
		printf("no is not found");
		}

getch();
}