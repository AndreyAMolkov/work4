#include "task2.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define OUT 0
#define IN 1
char *reverseWords(char *in, char *out[SIZE])
{
	int i = 0,j=0,len=0,count=0,inWord=OUT;
	char ch = " ";
	while ( (ch=*(in + i)) != '\0')
	{
		if (ch == ' ')
		{
			*(in+i) = '\0';
			inWord = OUT;
		}
		else
		{
			inWord++;
			if (inWord == 1)
				len++;
		}
		
		i++;
	}
	*(out + len) = '\0';
	len--;
	j = i - 1;

	i = 0;
	inWord = 0;

	while (i<=j)
	{
		if (in[i]!='\0')
		{
			inWord++;
			if (inWord == 1)
			{
				out[len] = &in[i];
				len--;
			}
		}
		else
			inWord = OUT;
		
		i++;
		
	}
	return out;
}
