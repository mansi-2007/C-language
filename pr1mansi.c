#include<stdio.h>
#include<conio.h>

void main()

{
	int mark ;
	char grade;
	
	
	printf("enter your mark");
	scanf("%d",&mark);
	
	 (mark>=80 && mark<100)
	
	?	printf ("your grade is A\n",grade='A')
	
	:
	
		 (mark>=60 && mark<80)
		
			?printf ("your grade is B\n",grade='B')
		
		:
		
			 (mark>=40 && mark<60)
			
			?	printf("your grade is C\n",grade='C')
			
			:
			
				 (mark>=30 && mark<40)
				
				?	printf("your grade is D\n",grade='D')
				
				:
				
					 (mark>=0 && mark<30)
					
					?	printf("your grade is F\n",grade='F')
					
					:
					
						printf("enter the vaild mark");


 switch(grade)
{
case 'A':printf("Excellent work!");
break;

case 'B':printf("Well done!");
break;

case 'C':printf("Good job!");
break;

case 'D':printf("You are passde,but you could do better!");
break;

case 'F':printf("Soory,you failed!");
break;
}


	if (grade=='A' || grade=='B'|| grade=='C'|| grade=='D')
	{
		printf("You are eligible for the next level.");
	}
	else
	{
		printf("Please try again next time");
	
	}
	

	
}
