#include<stdio.h>
#include<stdlib.h>
#define SIZE 20
#define N 20
#include<string.h>
int main()
{
	int i = 0, j = 0, number = 0,age=0,maxAge=0,minAge=900,k=0,z=0;
	char list[SIZE][N] = {' '};
	char Name[SIZE] = { 0 };
	char *pName;
	char *word[SIZE] = { ' ' };
	char ch = ' ';
	printf("Enter quantity person' your relativels: ");
	fgets(word,2,stdin);
	number = atoi(word);
	fflush(stdin);
	//number = ch-'0';
	i = 1;
	while (i<=number)
	{
		printf("\nEnter %i person' your relativels: ",i);
		fgets(list[i], 20, stdin);

		while (j<strlen(list[i]))
		{
			if (((ch= list[i][z]) >= '0') && (ch <= '9'))
			{
				age = age * 10 + (ch - '0');

			} else if (ch!=' ')
			{
				
				Name[k] = ch;
					k++;
			}
			j++;
			z++;
		}
		Name[k] = '\0';
		if (age > maxAge)
			pName[1] = Name;
		if(age < minAge)
			pName[0] = Name;
		k = 0;
		age = 0;i++;
		fflush(stdin);
	}
	printf("Old is : %s\n", pName[1]);
	printf("Yong is : %s\n", pName[0]);

	return 0;
}

/* Написать программу, которая запрашивает количество родственников в семье,
   а потом позволяет ввести имя родственника и его возраст. Программа должна
   определить самого молодого и самого старого родственника и вывести их имена
Пояснение

Нужно завести массив строк для хранения имён и два указателя: young и old,
которые по мере ввода, связывать с нужными строками.
Также необходимы три числовые переменные для:

Ввода текущего возраста
Хранения максимального возраста
Хранения минимального возраста
Состав

Программа должна состоять из функций:

    - main()
Файлы: main5.c.

*/