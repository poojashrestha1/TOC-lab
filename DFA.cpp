#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char input[20], state='a';
	int i;
	printf("Enter input \n");
	gets(input);
	for(i=0; i<strlen(input); i++)
	{
		switch(state)
		{
			case 'a':
				if(input[i]=='0')
				state='b';
				else if(input[i]=='1')
				state='d';
				break;
			case 'b':
				if(input[i]=='0')
				state='b';
				else if(input[i]=='1')
				state='c';
				break;
			case 'c':
				if(input[i]=='0')
				state='b';
				else if(input[i]=='1')
				state='c';
				break;	
			case 'd':
				if(input[i]=='0'|| input[i]=='1')
				state='d';
				break;	
		}
	}
	
	if(state=='c')
	printf("Accepted");
	else
	printf("Rejected");
	return 0;
}
