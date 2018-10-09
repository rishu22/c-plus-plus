#include<stdio.h>
#include<conio.h>
void main()
{
int a[10]={3,1,2,6,5,7,4,8,10,9};
int b,e,m,temp,next;
do
{
clrscr();
b=0;
e=9;
printf("Enter Item");
scanf("%d",&temp);
while(1)
{
m=(b+e)/2;
if(b>e)
{
printf("Not Found");
break;
}
else if(temp>a[m])
{
b=m+1;
}
else if(temp<a[m])
{
e=m-1;
}
else
{
printf("%d",m);
break;
}
}
printf("\n\n Do you want to search for next item \n\n");
printf("0 for Exit\n\n");
printf("1 for Next Item \n\n");
scanf("%d",next);
}
while(next==1);
}
