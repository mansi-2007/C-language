#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k;
	
	for(i=5;i>=1;i--)
	{
		for(k=1;k<=i;k++)
		{
			printf(" ");
		}
		for(j=4;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}