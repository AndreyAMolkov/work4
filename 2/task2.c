#include "task2.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
char *reverseWords(char *in, char *out)
{
	int i = 0,j=0,len=0;
	char ch = " ";
	while (in[i]!='\0')
	{
		i+=SIZE;
	}
	while (i>=0)
	{
		out[j] = &in[i];
		;
		i-=SIZE;
		j++;

	}
	
	return out;
}
