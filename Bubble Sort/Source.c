#include<stdio.h>

void swap(int* xp, int* yp);
void bubbleSort(int arr[], int size);
void printArray(int arr[], int size);

void main()
{
	int arr[] = { 5,2,7,13,3,8 };
	int size = 6;
	bubbleSort(arr, size);
	printf("Array After Sorting: ");
	printArray(arr, size);
}

void swap(int *xp,int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort(int arr[],int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
				swap(&arr[j],&arr[j+1]);
		}
	}
}

void printArray(int arr[], int size)
{
	for (int i=0;i<size;i++)
	{
		printf(" %d",arr[i]);
	}
	printf("\n");
}