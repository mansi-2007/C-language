#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	
	for(i=5;j>=1;i++)  
	{
		for(j=1;j<=i;j--)
		{
			printf("%d",j);
		} 
		printf("\n");
	}
}