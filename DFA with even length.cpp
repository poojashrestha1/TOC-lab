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
				if(input[i]=='0'|| input[i]=='1')
				state='b';
				break;
			case 'b':
				if(input[i]=='0'|| input[i]=='1')
				state='a';
				break;
			
		}
	}
	
	if(state=='a')
	printf("Accepted");
	else
	printf("Rejected");
	return 0;
}
