#include<stdio.h>
#include<math.h>
int main()
{

int n,num,sum=0,rem;
printf("enter a number");
scanf("%d",&n);
num=n;
while(n!=0)
{
	rem=n%10;
	sum=sum+pow(rem,3);
	n=n/10;
}
if(num==sum)
printf("it is an armstrong number");
else
printf("it is not an armstrong number");
return 0;
}