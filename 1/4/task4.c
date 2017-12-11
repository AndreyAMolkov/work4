#include<stdio.h>
compare(const void *a, const void *b)
{
	if (strlen(*(char **)a) <strlen(*(char **)b))
		return 1;
	else
		return-1;
}

void lineSort(char *str[], int size)
{
		qsort(str, size, sizeof(str), compare);
}
void printLinesToFile(const char *str[], int size, FILE *fp)
{
	int i = 0,j=0;
	while (i<size)
	{
		j=fputs(str[i], fp);
		i++;
	}
}