#include<stdio.h>
void main()
{
int num,rev=0,c,rem=0;
printf("enter the number");
scanf("%d",&num);
c=num;
while(num>0)
{
	rem=num%10;
	rev=rev*10+rem;
	num=num/10;
}
if(c==rev)
{
printf("it is palimdrome");
}
else
{
printf("it is not palimdrome");
}
}
