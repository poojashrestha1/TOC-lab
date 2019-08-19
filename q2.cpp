#include<stdio.h>
#include<string.h>
int main()
{
	char state='a', input[20];
	int i;
	printf("Enter the value:");
	gets(input);
	
	for(i=0; i<strlen(input); i++)
	{
	switch(state)
	{
		case 'q0':
			if(input==a)
			state='q1';
			else if (input==b)
			state='q2';
			break;
			
		case 'q1':
			if(input==a)
			state='q1';
			else if (input==b)
			state='q2';
			break;
			
		case 'q2':
			if(input==a)
			state='q3';
			else if (input==b)
			state='q1';
			break;
			
		case 'q3':
			if(input==a) || (input==b)
			state='q3';
			break;
	}
}

if(state=='q1')
		{
			printf("Accepted");
		}
		else if(state=='q3')
		{
			printf("Dead State");
		}
		else
		{
			printf("Rejected");	
		}
		return 0;	
}
