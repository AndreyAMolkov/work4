#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
int main()
{
	int i = 0, j = 0,count=0;
	char ch = " ";
	//char buf[SIZE] = { 0 };
	char in[SIZE] = {0};
	char *out[SIZE] = {0};
	printf("Enter line of word:\n");
	
	gets(in, SIZE, stdin);

	reverseWords(in, out);
	//while ((word =**(out + i)) != NULL)
	//{
		while (out[j] != '\0')
		{
			fputs(out[j], stdout);
			fputs(" ", stdout);
			j++;
		}
	//}
	return 0;
}
/*Написать программу, которая с помощью массива указателей выводит слова
   строки в обратном порядке. Пример:
   "буря мглою небо кроет" -> "кроет небо мглою буря"
Пояснение
Для входной строки создается массив указателей на char, 
в который заносятся адреса первых символов каждого слова. 
Затем организуется новая строка, при использовании этого массива из указателей.
Массив из указателей должен объявляться внутри функции reverseWords.
остав
рограмма должна состоять из функций:
    - char * reverseWords(char * in, char *out) - функция, переворачивающая слова из in и записывающую их в out
    - main() - организация ввода строки
Создаются три файла: task2.h,task2.c,main2.c.

*/