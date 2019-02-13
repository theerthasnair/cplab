#include<stdio.h>
void main()
{int num,sum=0,c,rem=0;
printf("enter the number");
scanf("%d",&num);
c=num;
while(num>0)
{
	rem=num%10;
	sum=sum+(rem*rem*rem);
	num=num/10;
}
if(c==sum)
{
printf("the number and its armsrtong number are same");
}
else
{
printf("thenumber and its armstrong number are not same");
}

}
