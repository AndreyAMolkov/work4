#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define OUT 0
#define IN 1
#define END 2
#define SIZE 50
int main()
{
	int i = 0,j=0,countN=0;
	int flagEnt = OUT;// flag end of entered lines
	char ch;
	char *p[SIZE];
	char str[SIZE][SIZE] = { ' ' };
	
	printf("Enter few of line of string:\n");
	
	while (countN<=0 && *(p[i]=fgets(str[i],SIZE,stdin))!='\0')
	{
		
		if (*str[i] == '\n')
			countN++;
		else
			countN = 0;
		i++;
	}

	
	lineSort(p, i);
	printLines(p,i );
	return 0;
}