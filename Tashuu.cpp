#include <stdio.h>
#include <math.h>
#include <string.h>

/*int main()
{
	printf("HELLO WORLD");
	return 0;
}*/


/*int main()
{
	int number;
	printf("Enter an integer : ");
	scanf("%d", &number);
	printf("The number is : %d", number);
	return 0;
}*/







/*int main()
{
    float dc;
	printf("Enter a decimal number : ");
	scanf("%f" ,&dc);
	printf("The decimal number is : %f", dc);

return 0;
}*/

/*int main()
{
	char ch;
	printf("Enter a character : ");
	scanf("%c", &ch);
	printf("The character is : %c", ch);
	return 0;
}*/

/*int main()
{
 int n,m;
 float fr;
  printf("Enter a number : ");
  scanf("%d", &n);
  printf("Enter another number : ");
  scanf("%d" , &m);
  fr=n/m;
  printf("The fraction of n/m : %f", fr);
}*/

/*int main()
{
 int n,m;
 int sum,diff,mul,mod;
 printf("Enter a number : ");
 scanf("%d" , &n);
 printf("Enter another number : ");
 scanf("%d", &m);
 sum=n+m;
 diff=n-m;
 mul=n*m;
 mod=n/m;
 printf("\nThe sum is : %d" , sum);
 printf("\nThe difference is : %d" , diff);
 printf("\nThe multiplication is : %d" , mul);
 printf("\nThe divison is : %d" , mod);
 return 0;
}*/

/*int main()
{
	int r,ar;
	printf("Enter the radius of the circle : ");
	scanf("%d" , &r);
	ar=3.14*r*r;
	printf("The area of the circle is : %d" , ar);
	return 0;
	
}*/

/*int main()
{
	int p,t;
	float r,si;
	printf("Enter the principal amount : ");
	scanf("%d" , &p);
	printf("Enter the rate of interest : ");
	scanf("%f" , &r);
	printf("Enter the time period : ");
	scanf("%d" , &t);
	si=(p*r*t)/100;
	printf("The simple interst is : %f" , si);
	return 0;
}*/

/*int main()
{
	int p,m,t;
	float u,cu;
	printf("Enter the principal amount : ");
	scanf("%d" , &p);
	printf("Enter the time period : ");
	scanf("%d" , &t);
	printf("Enter the number of times the interest is applied for : ");
	scanf("%d" , &m);
	printf("Enter the rate of interest : ");
	scanf("%f" , &u);
	cu=p*pow((1+u/m),(t*m));
	printf("The compound interest is : %f" , cu);
	return 0;
	
	
}*/
/*int main()
{
	int bs;
	float ta,da,gs;
	printf("Enter the basic salary : ");
	scanf("%d" , &bs);
	ta=0.12*bs;
	da=0.1*bs;
	gs=bs+ta+da;
	printf("The gross salary is : %f" , gs);
	return 0;
}*/


/*int main()
{
	char ch;
	char cha;
	printf("Enter a character : ");
	scanf("%c" , &ch);
	printf("Enter another character : ");
	scanf("%c" , &cha);
}*/

/*int main()
{
	int i;
	char j;
	float k;
	printf("Enter a number : ");
	scanf("%d" , &i);
	printf("Enter a character : ");
	scanf("%c" , &j);
	printf("\nEnter a decimal number : ");
	scanf("%f" , &k);
	printf("The number is : %d" , i);
	printf("\nThe charcter is : %c" , j);
	printf("The decimal number is : %f" , k);
	return 0;
}*/

/*int main()
{
	char ch;
	printf("Enter a character : ");
	scanf("%c" , &ch);
	printf("The character is : %c" , ch);
	return 0;
}*/




/*int main()
{
	int i,j;
	char ch;
	float k;
	printf("Enter a number : ");
	scanf("%d" , &i);
	printf("Enter another number : ");
	scanf("%d" , &j);
	printf("Enter a decimal number : ");
    scanf("%f" , &k);
    printf("Enter a character : ");
    scanf("%c" ,&ch);
    printf("The number is : %d" , i);
    printf("\nThe another number : %d" , j);
    printf("\nThe decimal number : %f" , k);
    printf("The character is : %c" , ch);
    return 0;
}*/

/*int main()
{
	int rows;
	printf("Enter the number of rows : ");
	scanf("%d" , &rows);
	for(int i=1;i<=rows;i++)
	{
		for(int j=1;j<=i;j++)
		{
		printf("%d " , j);
	}
	printf("\n");
}
return 0;
}*/

/*int main()
{
	int rows;
	printf("Enter the number of rows : ");
	scanf("%d" , &rows);
	for(int i=5;i>=rows;i--)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d" , j);
		}
		printf("\n");
	}
	return 0;
}*/

/*int main()
{
	int t;
	printf("Enter the value of t : ");
	scanf("%d" , &t);
	for(int i=5;i>=1;i--)
	{
		for(int j=1;j<i;j++)
		{
			printf(" ");
		}
		for(int k=1;k<=t;k++)
		{
			printf("%d" , k);
		}
		printf("\n");
		t++;
	}
	return 0;
}*/


/*int main()
{
	int w;
	printf("Enter the value of w : ");
	scanf("%d" , &w);
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<i;j++)
		{
			printf(" ");
		}
		for(int k=1;k<=w;k++)
		{
			printf("%d" , k);
		}
		printf("\n");
		w--;
	}
	return 0;
}*/


/*int main()
{
	int rows,t;
	printf("Enter the number of rows : ");
	scanf("%d" , &rows);
	printf("Enter the value of t : ");
	scanf("%d" , &t);
	for(int i=1;i<=rows;i+=2)
	{
		for(int j=7;j>=t;j--)
		{
			printf(" ");
		}
		for(int k=1;k<=i;k++)
		{
			printf("%d" , k);
		}
		printf("\n");
		t++;
}
return 0;
}*/


/*int main()
{
	int arr[]={1,2,3,4,5};
	int i;
	for(i=0;i<5;i++)
	{
		printf("The elemet of the array is : %d\n" , arr[i]);
	}
	return 0;
}*/

/*int main()
{
	int i,k,j,p,t=5;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d" , j);
		}
		printf("\n");
	}
		for(k=1;k<5;k++)
		{
			for(p=1;p<t;p++)
			{
				printf("%d" ,p);
			}
			t--;
			printf("\n");
		}
	}*/
	
	int main()
	{
		char ch[]="Tarshdeep Kaur";
		printf("%s" , ch);
		return 0;
}
	
	/*int main()
	{
		char ch[100];
		printf("Enter any string : ");
		scanf("%s" , &ch);
		printf("The string is : %s" , ch);
		return 0;
		
	}*/
	
/*	int main()
	{
		char ch[15];
		int i;
		printf("Enter any 15 characters : ");
		scanf("%s" , &ch);
		for(i=0;i<15;i++)
		{
			printf("The character is : %c\n" ,ch[i]);
		}
		return 0;
	}*/
	
	/*int main()
	{
		char arr[100];
		printf("Enter the elements of array : ");
		scanf("%s" , &arr);
		int i;
		for(i=0;i<15;i++)
		{
			printf("The element of the array is : %c\n" , arr[i]);
		}
		return 0;
}*/

/*int main()
{
	int arr[]={10,22,8,17,18,13,20};
	int i;
	for(i=0;i<7;i++)
	{
		printf("The birthdates are : %d\n" , arr[i]);
	}
	return 0;
}*/

/*int main()
{
	int i,r;
	int sum=0;
	printf("Enter a number : ");
	scanf("%d" , &i);
	int n=i;
	while(i!=0)
	{
	r=i%10;
	sum=sum+(r*r*r);
	i=i/10;	
	}
	if(sum==n)
	{
		printf("%d is an armstrong number" , n);
	}
	else
	{
		printf("%d is not an armstrong number" , n);
	}
	return 0;
}*/

/*int main()
{
	int i,r,rev=0;
	printf("Enter a number : ");
	scanf("%d" , &i);
	int n=i;
	while(i!=0)
	{
	r=i%10;
	i=i/10;
	rev=r+(rev*10);	
	}
	if(rev==n)
	printf("%d is a pallindrome number" , n);
	else
	printf("%d is not a pallindrome number" , n);
	return 0;
}*/

/*int main()
{
	char ch[100];
	printf("Enter a string : ");
	scanf("%s" , &ch);
	char ch1=strlen(ch);
	printf("%d is the length of %s" ,ch1,ch);
	return 0;
}*/

/*int main()
{
	char ch[100];
	printf("Enter a string : ");
	scanf("%s" , &ch);
	strlwr(ch);
	printf("%s is the lower case of entered word" ,ch);
	return 0;
}*/


/*int main()
{
	char ch[100];
	printf("Enter a string : ");
	scanf("%s" , &ch);
	strupr(ch);
	printf("%s is the upper case of the entered word" , ch);
	return 0;
}*/


/*int main()
{
int A[] = {0,2,4,6,8,10};
int n=6,beg=0,end=n-1,result=-1,mid,x;
printf("\n What elt do you want to search? ");
scanf("%d",&x);
 while(beg<=end)
 {
   mid=(beg+end)/2;
   if(A[mid]<=x) 
   {
   beg = mid+1;
    result = mid;
	}
   else 
   end = mid-1;
}
if(A[result]==x) 
printf("\nFound");
else
 printf("\nNot found");
 return 0;
}*/

/*int main()
{
	int i,j,k,t;
	char ch='*';
	char ch1='$';
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c" , ch);
		}
		printf("\n");
	}
	for(k=5;k>1;k--)
	{
		for(t=1;t<k;t++)
		{
			printf("%c" , ch1);
		}
		printf("\n");
		}
		return 0;	
}*/

/*int main()
{
	int i,r,sum=0;
	printf("Enter a number : ");
	scanf("%d" , &i);
	int n=i;
	while(i!=0)
	{
		r=i%10;
		sum=sum+(r*r*r);
		i=i/10;
	}
	if(sum==n)
	printf("It is an armstrong number");
	else
	printf("It's not an armstrong number");
	return 0;
	}*/
	
	
/*	int main()
	{
		int i,r,sum=0;
		printf("Enter a number : ");
		scanf("%d" , &i);
		int n=i;
		while(i!=0)
		{
			r=i%10;
			sum=r+(sum*10);
			i=i/10;
		}
		if(n==sum)
		printf("It's a pallindrome");
		else
		printf("It's not a pallindrome");
		return 0;
	}*/
	
	/*int main()
	{
		int i,j,k,t=1,n=1,d;
		int h=1;
		for(i=5;i>=1;i--)
		{
			for(j=1;j<i;j++)
			{
				printf(" ");
			}
			d=n;
			for(k=1;k<=t;k++)
			{
				printf("%d" , d);
				d--;
			}
			t++;
			n++;
			printf("\n");
		}
		return 0;
	}*/
	
/*	int main()
	{
		char ch[100];
		printf("Enter a sentence : ");
		scanf("%s" , &ch);
		int ch1=strlen(ch);
		printf("The length of the sentence is : %d" , ch1);
	}*/
	
	/*int main()
	{
	char ch[14];
	int i;
	printf("Enter a sentence : ");
	scanf("%s" , &ch);
	for(i=0;i<=14;i++)
	{
	printf("\nThe letter is : %c", ch[i]);
}
	return 0;	
	}*/
	
/*	int main()
	{
		int n,h,i,sum=0;
		printf("The numbers to be encountered : ");
		scanf("%d" , &n);
		for(i=1;i<=n;i++)
		{
			printf("Enter a number : ");
			scanf("%d" , &h);
			if(h!=999)
			{
				sum=sum+h;
			}
		}
		printf("The sum is : %d" , sum);
		return 0;
	}*/
	
	/*int main()
	{
		int i,d, c=0;
		for(i=1;i<=20;i++)
		{
			printf("Enter a number : ");
			scanf("%d" , &d);
			if(i%2==0)
			{
				c++;
			}
		}
		printf("The count of even numbers is : %d" , c);
		return 0;
	}*/
	
	
/*	int main()
	{
		int i,n,q,w,e,r,t;
		printf("Enter 5 numbers : ");
		scanf("%d %d %d %d %d", &q,&w,&e,&r,&r);
		int avg=(q+w+e+r+t)/5;
		printf("The average is : %d" , avg);
		return 0;
	}*/
	
/*	int main()
	{
			int i,n,q,w,e,r,t;
		printf("Enter 5 numbers : ");
		scanf("%d %d %d %d %d", &q,&w,&e,&r,&t);
		if(q>>w&&q>>e&&q>>r&&q>>t)
		{
		printf("The greatest number is : %d", q);	
	}
		else if(w>>e&&w>>r&&w>>t)
		{
			printf("The greatest number is : %d", w);
		}
		else if(e>>r&&e>>t)
		{
		printf("The greatest number is : %d", e);	
		}
		else if(r>>t)
		{
			printf("The greatest number is : %d", r);
		}
		else
		printf("The greatest number is : %d", t);
		return 0;
	}*/
	
	
/*	int main()
	{
		int sum=0,i,y,d=1;
		for(i=1;i<=500;i++)
		{
			y=d;
			while(y!=0)
			{
				int r=y%10;
				sum=sum+(r*r*r);
				y=y/10;
			}
			if(d==sum)
			{
				printf("\nIt's an armstrong number : %d" , d);
			}
			else
			{
			printf("\nIt's not an armstrong number : %d" , d);
		}
		d++;
		sum=0;
	}
	return 0;
	}*/
	
/*	int main()
	{
		int i,sum=0,d=1,r,n;
		for(i=1;i<=500;i++)
		{
		n=d;
		while(n!=0)	
		{
			r=n%10;
			sum=sum+(r*r*r);
			n=n/10;
		}
		if(d==sum)
		{
		printf("\nIt's a pallindrome number : %d" , d);
	}
		else
		{
		printf("\nIt's not a pallindrome number : %d" , d);
		}
		d++;
		sum=0;
	}
	return 0;
	}*/
	
/*	int main()
	{
		int i,rev=0,y,d=1,r;
		for(i=1;i<=500;i++)
		{
		y=d;
		while(y!=0)
		{
			r=y%10;
			rev=r+(rev*10);
			y=y/10;
		}
		if(rev==d)
		printf("\nIt's a pallindrome : %d" , d);
		else
		{
			printf("\nIt's not a pallindrome : %d" , d);
		}
		rev=0;
		d++;
		}
		return 0;
	}*/
	
/*	int main()
	{
		int i,j,t=4,k;
		for(i=1;i<=9;i+=2)
		{
			for(k=1;k<=t;k++)
			{
				printf(" ");
			}
			for(j=1;j<=i;j++)
			{
				printf("%d" , j);
			}
			printf("\n");
			t--;
		}
		return 0;
	}*/
	
	/*int main()
	{
		int rows,coef=1,space,i,j;
		printf("Enter number of rows : ");
		scanf("%d", &rows);
		for(i=0;i<rows;i++)
		{
			for(space=1;space<=rows-i;space++)
			{
				printf(" ");
			}
			for(j=0;j<=i;j++)
			{
				if(j==0||i==0)
				coef=1;
				else
				coef=coef*(i-j+1)/j;
			printf("%4d" ,coef);
		}
		printf("\n");
		}
		return 0;
	}*/
	
	/*int main()
	{
		double a,b;
		printf("Enter the value of a : ");
		scanf("%lf" , &a);
		double pi=3.14;
		double d=pi/180;
		b=tan(a*d);
		printf("The value of sin is %lf" , b);
		return 0;
	}*/
	
	/*int main()
	{
		double a,b;
			printf("Enter the value of a : ");
		scanf("%lf" , &a);
		b=sqrt(a);
		printf("The value of b is : %lf" , b);
		return 0;
	}*/
	
/*	int main()
	{
		float e,h;
		float d,a,b,c;
			printf("Enter the value of a : ");
		scanf("%f" , &a);
			printf("Enter the value of b : ");
		scanf("%f" , &b);
			printf("Enter the value of c : ");
		scanf("%f" , &c);
		d=(b*b)-4*a*c;
		e=(-b+sqrt(d))/(2*a);
		h=(-b-sqrt(d))/(2*a);
		printf("%f\n" , e);
		printf("%f" , h);
		return 0;
	}*/
	
	/*int main()
	{
		printf("hello\n");
		printf("How are u\n");
		printf("How is everyone\n");
		printf("How is\teveryone\n");
		printf("How is \b eve\bryone");
		return 0;
}*/	
	
		


