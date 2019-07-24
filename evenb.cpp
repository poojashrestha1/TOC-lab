#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i;
	char state='1', input[20];
	printf("Enter the value");
	gets(input);
	for(i=0; i<strlen(input); i++)
	{
		switch(state)
		{
			case '1':
				if(input[i]=='a')
				state='2';
				else if(input[i]=='b')
				state='3';
				break;
			case '2':
				if(input[i]=='a')
				state='2';
				else if(input[i]=='b')
				state='3';
				break;
			case '3':
				if(input[i]=='a')
				state='4';
				else if(input[i]=='b')
				state='2';
				break;
		}
	}
	if(state=='2')
	{
		printf("Accepted");
	}
	else if(state=='4')
	{
		printf("Dead");
	}
	else
	{
		printf("Rejected");
	}
	return 0;
}
