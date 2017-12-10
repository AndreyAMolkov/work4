#include<stdio.h>
#include<string.h>
#include "task3.h"
int isPalindrome(char * str)
{
	int len,j,i=0,flag=OUT;
	len = strlen(str);
	j = len - 1;
	while (i < j)
	{
		if (str[i] != str[j])
		{
			flag = OUT;
			break;
		}
		flag = IN;
		i++;
		j--;
	}

	if (flag == 0)
	{
		return -1;
	}
	else
	{
		return 1;
	}
}
