#include<stdio.h>
int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		if(n%2!=0)
		sum =sum+i;
		else
		sum=sum-i;
	}
	printf("sum of series is %d",sum);
	return 0;
}