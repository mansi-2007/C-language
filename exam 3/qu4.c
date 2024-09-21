#include<stdio.h>
#include<conio.h>
	
	// wirte a pogerm in c to make such a pattern using loop concept..

void main()
{
	int i,j,k;
	
	for(i=5;i<=1;i++)
	{
		for(k=1;k<=4;k++)
		{
			printf(" ");			
		}
		for(j=i;j<=1;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
