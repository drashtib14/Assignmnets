#include<stdio.h>

//with arg with returntype
int add1(int n1,int n2);
int sub1(int n1,int n2);
int mul1(int n1,int n2);
int div1(int n1,int n2);
//with arg without returntype
void add2(int num1,int num2);
void sub2(int num1,int num2);
void mul2(int num1,int num2);
void div2(int num1,int num2);
//without arg with returntype
int add3();
int sub3();
int mul3();
int div3();
//without arg with returntype
void add4();
void sub4();
void mul4();
void div4();

int main()
{
	int choice,num1,num2,n1,n2,ans;
	printf("\n1. with argument with return type");
	printf("\n2. with argument without return type");
	printf("\n3. without argument with return type");
	printf("\n4. without argument without return type");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\nEnter the value of num1 =");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 =");
			scanf("%d",&num2);
			ans = add1(num1,num2);
			printf("\nThe addition of %d and %d is = %d",num1,num2,ans);
			ans = sub1(num1,num2);
			printf("\nThe subtraction of %d and %d is = %d",num1,num2,ans);
			ans = mul1(num1,num2);
			printf("\nThe multipication of %d and %d is = %d",num1,num2,ans);
			ans = div1(num1,num2);
			printf("\nThe division of %d and %d is = %d",num1,num2,ans);
		break;
		case 2:
			printf("\nenter the value of num1 =");
			scanf("%d",&n1);
			printf("\nenter the value of num2 =");
			scanf("%d",&n2);
			add2(n1,n2);
			sub2(n1,n2);
			mul2(n1,n2);
			div2(n1,n2);
			return 0;
		break; 
		case 3:
			ans=add3();
			printf("\nThe addition is= %d",ans);
			ans=sub3();
			printf("\nThe subtraction is= %d",ans);
			ans=mul3();
			printf("\nThe multiplication is= %d",ans);
			ans=div3();
			printf("\nThe division is= %d",ans);
			return 0;
		break;
		case 4:
		add4();	
		sub4();
		mul4();
		div4();
		return 0;
		break;
		default : printf("\nInvalid input");
	}
	return 0;
}

int add1(int n1,int n2)
	{
		int ans;
		ans= n1+n2;
		return ans;
	}
	int sub1(int n1,int n2)
	{
		int ans;
		ans= n1-n2;
		return ans;
	}
	int mul1(int n1,int n2)
	{
		int ans;
		ans= n1*n2;
		return ans;
	}
	int div1(int n1,int n2)
	{
		int ans;
		ans= n1/n2;
		return ans;
	}
		void add2(int num1,int num2)
		{
			int ans;
			ans = num1 + num2;
			printf("\nThe addition of %d and %d is %d",num1,num2,ans);
		}
		void sub2(int num1,int num2)
		{
			int ans;
			ans = num1 - num2;
			printf("\nThe subtraction of %d and %d is %d",num1,num2,ans);
		}
		void mul2(int num1,int num2)
		{
			int ans;
			ans = num1 * num2;
			printf("\nThe multiplication of %d and %d is %d",num1,num2,ans);
		}
		void div2(int num1,int num2)
		{
			int ans;
			ans = num1 / num2;
			printf("\nThe division  of %d and %d is %d",num1,num2,ans);
		}
		int add3()
		{
			int n1,n2,ans;
			printf("\nEnter the value of num1=");
			scanf("%d",&n1);
			printf("\nEnter the value of num2=");
			scanf("%d",&n2);
			ans = n1+ n2;
			return ans;
			
		}
		int sub3()
		{
			int n1,n2,ans;
			printf("\nEnter the value of num1=");
			scanf("%d",&n1);
			printf("\nEnter the value of num2=");
			scanf("%d",&n2);
			ans = n1- n2;
			return ans;
			
		}
		int mul3()
		{
			int n1,n2,ans;
			printf("\nEnter the value of num1=");
			scanf("%d",&n1);
			printf("\nEnter the value of num2=");
			scanf("%d",&n2);
			ans = n1* n2;
			return ans;
			
		}
		int div3()
		{
			int n1,n2,ans;
			printf("\nEnter the value of num1=");
			scanf("%d",&n1);
			printf("\nEnter the value of num2=");
			scanf("%d",&n2);
			ans = n1/ n2;
			return ans;
			
		}
		void add4()
		{
		int n1,n2,ans;
		printf("\nEnter the value of  num1=");
		scanf("%d",&n1);
		printf("\nEnter the value of  num2=");
		scanf("%d",&n2);
		ans = n1+ n2;
		printf("\n The addition of %d and %d is %d",n1,n2,ans);
	}
	void sub4()
		{
		int n1,n2,ans;
		printf("\nEnter the value of  num1=");
		scanf("%d",&n1);
		printf("\nEnter the value of  num2=");
		scanf("%d",&n2);
		ans = n1- n2;
		printf("\n The subtraction of %d and %d is %d",n1,n2,ans);
	}
	    void mul4()		{
		int n1,n2,ans;
		printf("\nEnter the value of  num1=");
		scanf("%d",&n1);
		printf("\nEnter the value of  num2=");
		scanf("%d",&n2);
		ans = n1* n2;
		printf("\n The multiplication of %d and %d is %d",n1,n2,ans);
	}

    void div4()
		{
		int n1,n2,ans;
		printf("\nEnter the value of  num1=");
		scanf("%d",&n1);
		printf("\nEnter the value of  num2=");
		scanf("%d",&n2);
		ans = n1/ n2;
		printf("\n The division of %d and %d is %d",n1,n2,ans);
	}
