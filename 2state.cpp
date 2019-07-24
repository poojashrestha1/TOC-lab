//length 2
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i;
	char state='a', input[20];
	printf("Enter the value:");
	gets(input);
	for(i=0; i<strlen(input); i++)
	{
		switch(state)
		{
			case 'a':
				if(input[i]=='0')
				state='b';
				else if(input[i]=='1')
				state='b';
				break;
			case 'b':
				if(input[i]=='0')
				state='c';
				else if(input[i]=='1')
				state='c';
				break;
			case 'c':
				if(input[i]=='0'|| input[i]=='1')
				{
					state='d';
				}
		}
	}
			
		if(state=='c')
		{
			printf("Accepted");
		}
		else if(state=='d')
		{
			printf("Rejected");
		}
		else
		{
			printf("Rejected");	
		}
		return 0;
}
