#include<stdio.h>

int RecursiveLinearSearch(int arr[], int value, int index, int n)
{
    if (index >= n)
    {
        return 0;
    }

    else if (arr[index] == value)
    {
        return index;
    }

    else
    {
        return RecursiveLinearSearch(arr, value, index + 1, n);
    }
    return -1;
}

void main()
{
    int arr[] = { 50,6,3,90,10 };
    int n = 5;
    int element = 90;
    int index = RecursiveLinearSearch(arr, element, 0, n);
    if (index != -1)
    {
        printf("Element found at pos %d ", index);
    }
    else
    {
        printf("Element not found");
    }
}