#include<stdio.h>
#include<math.h>
/*int main()
{
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	for(int k=5;k>1;k--)
	{
		for(int l=1;l<k;l++)
		{
			printf("%d",l);
		}
		printf("\n");
	}
	return 0;
}*/
/*int main()
{
	for(int i=1;i<=5;i++)
	{
		for(int k=5;k>i;k--)
		{
			printf(" ");
		}
		for (int j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}*/
/*
int main()
{
	float i,b;
	printf("tell me i");
	scanf("%f",&i);
	b=sqrt(i);
	printf("%f",b);
}*/
/*
int main()
{
	float a,b,c,d;
	float root1,root2;
	printf("the equation is ax^2+bx+c=0 ");
	printf("what is a ");
	scanf("%f",&a);
	printf("what is b ");
	scanf("%f",&b);
	printf("what is c ");
	scanf("%f",&c);
	d=(b*b)-4*a*c;
	root1=(-b-sqrt(d))/(2*a);
	root2=(-b+sqrt(d))/(2*a);
	printf("root 1 = %f \n",root1);
	printf("root 2 = %f",root2);
	return 0;
}
*/
/*int main()
{
	printf("tarsh aaj \n pagal\t ho gayi \b hai");
}
int main()
{
	if 
	printf("")
}*/
/*int main()
{
	int a,b,c;
	printf("the value of a ");
	scanf("%d",&a);
	printf("the value of b ");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("a= %d and b= %d",a,b);
}*/
/*int main()
{
	char a=5;
	printf("%d and %d and %d",a,a<<1,a>>1);
}*/
/*int main()
{
	int a;
	printf("enter value of a ");
	scanf("%d",&a);
	(a%2==0)?(printf("even")):(printf("odd"));
	
}*/
/*int main()
{
	char chartype;
	int inttype;
	long int hj; 
	float floattype;
	printf("%d",sizeof(hj));
	



}*/
/*int main()
{
	int a,b;
	printf("enter a ");
	scanf("%d",&a);
	printf("enter b ");
	scanf("%d",&b);
	float div;
	div=a/(float)b;
	printf("%f",div);
	
}*/
/*
int main()
{
	float a,b,sum,sub,mul,div;
	char i;
	printf("enter operator ");
	scanf("%c",&i);
	printf("enter a ");
	scanf("%f",&a);
	printf("enter b ");
	scanf("%f",&b);
	switch(i)
	{		case '+':
			sum = a+b;
			printf(" sum is %f",sum);
			break;
		case '-':
			sub=a-b;
			printf("sub is %f ",sub);
			break;
		case '*':
			mul=a*b;
			printf("mul is %f ",mul);
			break;
		case '/':
			div=a/b;
			printf("div is %f",div);
	}
}
*/
/*
int main()
{
	int n;
	printf("enter  num ");
	scanf("%d",&n);
	if (n%5==0 and n%8==0)
	{
		printf("divisible by both ");
	}
	else if (n%5==0 and n%8!=0)
	{
		printf("divisible by 5 ");
	}
	else if (n%5!=0 and n%8==0)
	{
		printf("divisible by 8");
	}
	else
	{
		printf("not divisible by both");
	}
	
}*/
/*
int main()
{
	int num,fact;
	fact=1;
	printf("enter num ");
	scanf("%d",&num);
	for(int i = 1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("fac is %d ",fact);
}*/
/*
int main()
{
	int num,power,a;
	printf("enter num ");
	scanf("%d",&num);
	a=num;
	printf("enter power");
	scanf("%d",&power);
	for(int i =1;i<power;i++)
	{
		num=a*num;
	}
	printf("%d",num);
}*/
/*
int main()
{
	int num,sum,a;
	int i =1;
	while (i<=500)
	{
		num=i;
		sum=0;
		while(num)
		{
			a=num%10;
			sum=sum+pow(a,3);
			num=num/10;
		}
		if(i==sum)
		{
			printf("%d is an armstrong number \n",i);
			
		}
		i++;
	}
}*/

/*int main()
{
	int n;
	printf("enter n ");
	scanf("%d",&n);
	int a=0,b=1;
	int nexterm=a+b;
	printf("fibo %d%d",a,b);
	for(int i=3;i<=n;i++)
	{
		printf("%d",nexterm);
		a=b;
		b=nexterm;
		nexterm=a+b;
		
	}
}*/
int main()
{	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i-1;j++)
		{
		printf(" ")
		}
		for(int k=0;)
	}
	
}
