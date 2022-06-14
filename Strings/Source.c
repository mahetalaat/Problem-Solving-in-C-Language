#define _CRT_SECURE_NO_WARNING

#include<stdio.h>
#include <string.h>

//Write a program in C to print individual characters of string in reverse order.
void reversestring()
{
    char str[100]; /* Declares a string of size 100 */
    int l, i;

    printf("\n\nPrint individual characters of string in reverse order :\n");
    printf("------------------------------------------------------\n");
    printf("Input the string : ");
    gets(str, sizeof str);
    l = strlen(str);
    printf("The characters of the string in reverse are : \n");
    for (i = l; i >= 0; i--)
    {
        printf("%c  ", str[i]);
    }
    printf("\n");
}

//Write a program in C to copy one string to another string.
void copystring()
{
    char str1[100], str2[100];
    int  i;

    printf("\n\nCopy one string into another string :\n");
    printf("-----------------------------------------\n");
    printf("Input the string : ");
    gets(str1, sizeof str1);

    /* Copies string1 to string2 character by character */
    i = 0;
    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }

    //Makes sure that the string is NULL terminated
    str2[i] = '\0';

    printf("\nThe First string is : %s\n", str1);
    printf("The Second string is : %s\n", str2);
    printf("Number of characters copied : %d\n\n", i);
}

#define str_size 100

//Write a program in C to count total number of vowel or consonant in a string.
void countvowel()
{
    char str[str_size];
    int i, len, vowel, cons;

    printf("\n\nCount total number of vowel or consonant :\n");
    printf("----------------------------------------------\n");
    printf("Input the string : ");
    fgets(str, sizeof str, stdin);

    vowel = 0;
    cons = 0;
    len = strlen(str);

    for (i = 0; i < len; i++)
    {

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowel++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            cons++;
        }
    }
    printf("\nThe total number of vowel in the string is : %d\n", vowel);
    printf("The total number of consonant in the string is : %d\n\n", cons);
}

void main()
{
    //reverse();
    //copystring();
    countvowel();
}