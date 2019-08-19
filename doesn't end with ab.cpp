#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[20], state='0';
	int i;
	printf("Enter the value:");
	gets(input);
	
	for(i=0; i<strlen(input); i++)
	{
		switch(state)
		{
			case '0':
				if(input[i]=='a')
				{
				
				state='1';
				}
				else if(input[i]=='b')
				{
				
				state='1';
				}
				break;
				
			case '1':
				if(input[i]=='a')
				{
				
				state='1';
				}
				else if(input[i]=='b')
				{
				
				state='3';
				}
				break;
				
				
			case '2':
				if(input[i]=='a')
				{
				state='1';
				}
				else if(input[i]=='b')
				{
				
				state='1';
				}
				break;
		}
}

	if(state=='1')
	{
		printf("Accepted");
	}
	else
	{
		printf("Rejected");
	}
	return 0;
}
