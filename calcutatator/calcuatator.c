#include<stdio.h>
#include<conio.h>

int sum (int a,int b)
{
	return a+b;
	
}
int sub (int a,int b)
{
	return a-b;
	
}
int multiply(int a,int b)
{
	return a*b;
	
}
int division(int a,int b)
{
	return a/b;
}
int modul(int a,int b)
{
	return a%b;
	
}

void main()

{
	int choice ,r,h,result,i=1,j,n;
	
	while(i==1)
	{
		printf("\n\npress 1 for +\n");
		printf("press 2 for -\n");
		printf("press 3 for *\n");
		printf("press 4 for /\n");
		printf("press 5 for %\n");
		printf("press 6 for exit \n\n");
		
		
	printf("enter your choice:");
	scanf("%d",&choice);
	
	if(choice==6)
	{
		break;
	}
	
	printf("enter the 1st number:");
	scanf("%d",&r);
	printf("enter the 2nd number:");
	scanf("%d",&h);
	
	switch (choice)
	{
		case 1:
			result=sum(r,h);
			printf("sum of %d and %d is %d",r,h,result);
			break;
			
			case 2:
			result=sub(r,h);
			printf("sub of %d and %d is %d",r,h,result);
			break;
			
			case 3:
			result=multiply(r,h);
			printf("multiply  of %d and %d is %d",r,h,result);
			break;
			
			case 4:
			result=division(r,h);
			printf("division of %d and %d is %d",r,h,result);
			break;
			
			case 5:
			result=modul(r,h);
			printf("modul of %d and %d is %d",r,h,result);
			break;
			
			
			
			default:
				printf("exit");
			
	}
	
		
	}
}



