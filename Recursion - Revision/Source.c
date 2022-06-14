#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

//write program to calculate sum of numbers between n1 to n2 using recursion
int sumrec(int n1,int n2)
{
	//5-->15   5+6+7+8+9+10+11+12+13+14+15=
	//3-->5   3+4+5
	int res = 0;
	if (n1 == 1)//3 //4 //5 //6
		return 1;
	else if (n1 <= n2)//3<=5 //4<=5 //5<=5 //6<=5
	{
		res = n1 + sumrec(n1 + 1, n2);//call inc or dec, change in value
		//res=3+4+5+sum(6,5)
	}
	else
		return res;

	/*for (int i = n1; n1 <= n2; i++)
	{
		res += i;
	}
	printf("%d",res);*/
}

//write a program to print array elements using recursion
void printarrayrec(int arr[], int s, int e)
{
	if (s >= e)
		return;
	printf("%d ", arr[s]);
	printarrayrec(arr, s + 1, e);

	//2 3 4 5 6 
	//0 1 2 3 4 s=0 e=4 
	//s       e
	//  s     e
	//    s   e
	//      s e
	//        e
	//		  s

	//5
	//s
	//e
}

#define Max_Size 100

//write a program to reverse string using recursion
char* reverserec(char str[])
{
	static int i = 0;
	static char revstr[Max_Size];
	if (*str)
	{
		reverserec(str + 1);
		revstr[i++] = *str;
	}
	return revstr;
}

//write a program to check if the word is palindrome or not using recursion mom 
void checkpalindromerec(char str[], int index)
{
	int len = strlen(str)-1;
	if (str[index] == str[len])
	{
		printf("Word is Palindrome \n");
		return;
		checkpalindromerec(str,index+1);
	}
	else
		printf("Word is not Palindrome \n");
}

void main()
{
	/*
	int n1, n2;
	printf("Enter start of range: ");
	scanf("%d",&n1);
	printf("Enter end of range: ");
	scanf("%d", &n2);
	int s = sumrec(n1, n2);
	printf("Sum of numbers from %d to %d = %d",n1,n2,s);
	*/

	/*
	int arr[Max_Size], size;
	printf("Enter no of elements: ");
	scanf("%d",&size);

	printf("Enter elements: ");
	for (int i = 0; i < size; i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Array Elements are: \n");
	printarrayrec(arr,0,size);
	*/

	
	char str[Max_Size], * revstr;
	printf("Enter string to be reversed: ");
	gets(str);

	revstr = reverserec(str);
	printf("String after reverse %s\n\n",revstr);
	

	/*
	char str[Max_Size];
	printf("Enter Word to check for palindrome: ");
	gets(str);
	checkpalindromerec(str,0);
	*/
}