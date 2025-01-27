#include<stdio.h>
int main()
{
	int x ;
	printf("enter the value of the number");
	scanf("%d",&x);
	x=x-(x/10)*10;
	printf("the last diguit is: %d",x);
return 0;
}
