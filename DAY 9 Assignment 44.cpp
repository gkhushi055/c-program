#include<stdio.h>

int sumofSquares(int n){
	int sum=0;
	for(int i =1; i<=n;i++){
		sum=sum+(i*i);
	}
	return sum;
}
int main(){
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("Sum of squares of first %d natural numbers is: %d\n",n,sumofSquares(n));
	return 0;
}
