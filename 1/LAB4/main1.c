#include<stdio.h>
#include<stdlib.h>
#define OUT 0
#define IN 1
#define END 2
#define SIZE 50
int main()
{
	int i = 0,j=0;
	int flagEnt = OUT;// flag end of entered lines
	char ch;
	char buf[SIZE][SIZE] = { ' ' };
	printf("Enter few of line of string:\n");
	
	while (flagEnt != END)
	{
		ch = getc(stdin);
		if (ch != '\n' && flagEnt == OUT)
		{
			buf[j][i] = ch;
			i++;
			continue;
		}
		
		if (ch == '\n' && flagEnt == OUT)
		{
			flagEnt = IN;
			buf[j][i] = '\0';
		}
		if (ch != "\n" && flagEnt == IN)// make string in buf after new line
		{
			i = 0;
			flagEnt = OUT;
			buf[j][i] = ch;
		}
		if ((ch == '\n') && (flagEnt = IN))
		{
			flagEnt = END;
		}
	
		;



	}




	return 0;
}