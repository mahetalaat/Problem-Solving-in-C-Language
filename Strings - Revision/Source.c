#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

//write a program to print string character in reverse order
#define MaxSize 100 // constant

void reversestring()
{
	char str[MaxSize];
	int len;

	printf("Enter String to be reveresed: ");
	gets(str,MaxSize); // gets(str, 100); // gets(str,sizeof str);
	//scanf("%s", str);

	len = strlen(str);

	printf("\nString after reverse: ");
	for (int i = len; i >= 0; i--)
	{
		printf("%c ",str[i]);
	}
	printf("\n");
}

//write a program to copy string into another
void copystring()
{
	char str1[MaxSize], str2[MaxSize];
	printf("Enter string: ");
	gets(str1,MaxSize);

	int i = 0;
	
	while (str1[i]!='\0')
	{
		str2[i] = str1[i];

		i++;
	}


	str2[i]='\0';
	
	//strcpy(str2,str1);

	printf("String1 is: %s \n",str1);
	printf("String2 is: %s \n", str2);
	printf("No of Characters: %d\n",i);
}

//write a program to count total number of vowels and constants in a string
void countconstvowel()
{
	char str[MaxSize];
	int len, vowelcount=0, constcount=0;

	printf("Enter string: ");
	gets(str);

	len = strlen(str);

	for (int i = 0; i < len; i++)
	{
		if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' ||
			str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
			vowelcount++;
		else
			constcount++;
	}
	printf("Total no of Vowels: %d\n",vowelcount);
	printf("Total no of Constants: %d\n", constcount);
}

void main()
{
	//reversestring();
	//copystring();
	countconstvowel();
}