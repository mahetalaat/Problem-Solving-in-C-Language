#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//Write a program in C to calculate the sum of numbers from n1 to n2 using recursion.
int sumOfRange(int n1,int n2)
{
    int res=0;
    if (n1 == 1)
    {
        return (1);
    }
    else if (n1 <= n2)
    {
        res = n1 + sumOfRange(n1 + 1, n2); //calling the function sumOfRange itself
    }
    else
        return res;
}

#define MAX 100

//Write a program in C to print the array elements using recursion.
void printArrayElement(int arr1[], int st, int l)
{
    if (st >= l)
        return;

    //Prints the current array element
    printf("%d  ", arr1[st]);

    /* Recursively call ArrayElement to print next element in the array */
    printArrayElement(arr1, st + 1, l);//calling the function  ArrayElement itself
}

//Write a program in C to reverse a string using recursion.
char* ReverseOfString(char str1[])
{
    static int i = 0;
    static char revstr[MAX];
    if (*str1)
    {
        ReverseOfString(str1 + 1);//calling the function ReverseOfString itself
        revstr[i++] = *str1;
    }
    return revstr;
}

void checkPalindrome(char wordPal[], int index)
{
    int len = strlen(wordPal) - 1;
    if (wordPal[index] == wordPal[len])
    {
        printf(" The entered word is a palindrome.\n\n");
        return;
        checkPalindrome(wordPal, index + 1);//calling the function itself recursively
    }
    else
    {
        printf(" The entered word is not a palindrome.\n\n");
    }
}

void main()
{
    /*
    int n1,n2;
    printf("\n\n Recursion : calculate the sum of numbers from 1 to n :\n");
    printf("-----------------------------------------------------------\n");

    printf(" Input the first number of the range : ");
    scanf("%d", &n1);
    printf(" Input the last number of the range : ");
    scanf("%d", &n2);

    int sum = sumOfRange(n1,n2);
    printf("\n The sum of numbers from %d to %d : %d\n\n", n1,n2, sum);
    */

    /*
    int arr1[MAX];
    int n, i;
    printf("\n\n Recursion : Print the array elements :\n");
    printf("-------------------------------------------\n");

    printf(" Input the number of elements to be stored in the array :");
    scanf("%d", &n);

    printf(" Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf(" element - %d : ", i);
        scanf("%d", &arr1[i]);
    }

    printf(" The elements in the array are : ");
    printArrayElement(arr1, 0, n);//call the function ArrayElement
    printf("\n\n");
    */

    /*
    char str1[MAX], * revstr;
    printf("\n\n Recursion : Get reverse of a string :\n");
    printf("------------------------------------------\n");

    printf(" Input any string: ");
    gets(str1, sizeof str1);

    revstr = ReverseOfString(str1);//call the function ReverseOfString

    printf(" The reversed string is: %s\n\n", revstr);
    */

    char wordPal[25];
    printf("\n\n Recursion : Check a given string is Palindrome or not :\n");
    printf("----------------------------------------------------------\n");

    printf(" Input  a word to check for palindrome : ");
    scanf("%s", wordPal);
    checkPalindrome(wordPal, 0);//call the function for checking Palindorem
}