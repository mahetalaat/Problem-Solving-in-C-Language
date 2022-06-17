#include<stdio.h>


void swap(int* xp, int* yp)
{
	int tmp = *xp;
	*xp = *yp;
	*yp = tmp;
}

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void bubbleSort_Rec(int arr[], int n)
{
    if (n == 1)
        return;

    int count = 0;
    
    for (int i = 0; i < n - 1; i++)
        if (arr[i] > arr[i + 1]) {
            swap(&arr[i], &arr[i + 1]);
            count++;
        }

    if (count == 0)
        return;

    bubbleSort_Rec(arr, n - 1);
}

void main()
{
	int arr[] = { 50,6,3,90,10 };
	bubbleSort_Rec(arr, 5);
	printf("Sorted Array: ");
	printArray(arr, 5);
}