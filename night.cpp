#include<stdio.h>

/*int main()
{ 
    int n;
    int a=1;
    printf("enter number of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    for(int k=1;k<=n-i;k++)
    {
        printf(" ");
    }
    for(int j=1;j<=a;j++)
    {
        printf("*");
    }
    a=a+2;
    printf("\n");
    }
    
	
}*/

int main()
{
	int a=1;
	for(int i=0;i<4;i++)
	{
		for(int k=0;k<4-i-1;k++)
		{
			printf(" ");
		}
		for(int j=0;j<a;j++)
		{
			printf("%c",'A'+j); 
		
		}
		a=a+2;
		
		printf("\n");
	}
	return 0;
}




