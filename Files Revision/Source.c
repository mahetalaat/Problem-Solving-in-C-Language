#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

#define MaxSize 100

void simplefilewrite()
{
	FILE* fp;
	fp = fopen("test.txt","w"); // w+ read and write // w write only
	if (fp == NULL)
		printf("No file");
	fprintf(fp,"Problem solving hhhjhjkhfkjfkjfklgjlkg\n");
	fputs("Revision\n",fp);
	fputs("Revision2\n", fp);
	fclose(fp);
}

void simplefileread()
{
	FILE* fp;
	char buffer[MaxSize];

	fp = fopen("test.txt","r"); // r read only // w+ read and write
	//fscanf(fp,"%s",buffer); // read from file
	//printf("%s\n",buffer); // print on console screen

	fgets(buffer,MaxSize,fp);
	printf("%s\n", buffer);

	fgets(buffer, MaxSize, fp);
	printf("%s\n", buffer);

	fgets(buffer, MaxSize, fp);
	printf("%s\n", buffer);
}

void read()
{
	FILE* fp;
	char c;
	fp = fopen("test.txt","r");
	while (1)
	{
		c = fgetc(fp);
		if (c == EOF)
			break;
		printf("%c",c);
	}
	fclose(fp);
}

void readwritefromuser()
{
	FILE* fp;
	char ch;
	fp = fopen("user.txt", "w");
	printf("Enter data...");
	while ((ch = getchar()) != EOF) {
		putc(ch, fp);
	}
	fclose(fp);
	fp = fopen("user.txt", "r");

	while ((ch = getc(fp)) != EOF)
		printf("%c", ch);

	// closing the file pointer
	fclose(fp);

}

struct emp
{
	char name[10];
	int age;
};

void readwritefromuserstruct()
{
	FILE* fp;
	struct emp e;
	char ch;
	fp = fopen("user.txt", "a");
	printf("Enter Name and age...");
	scanf("%s %d\n", e.name, &e.age);
	fprintf(fp,"%s %d",e.name,e.age);
}

void main()
{
	//simplefilewrite();
	//simplefileread();
	//read();
	//readwritefromuser();
	readwritefromuserstruct();
}