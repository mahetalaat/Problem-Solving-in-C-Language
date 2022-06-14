#include<stdio.h>

void swap(int* xp, int* yp);
void bubbleSort(int arr[], int size);
void printArray(int arr[], int size);
int binarySearch(int arr[], int start, int end, int searchkey);

void main()
{
	int arr[6] = { 64,34,25,12,22,90 };
	int size = 6;
	bubbleSort(arr,size);
	printf("Array after Sorting: \n");
	printArray(arr,size);
	int index=binarySearch(arr,0,6,90);
	if (index == -1)
		printf("Element not found\n");
	else
		printf("Element found at index %d\n",index);
}

void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort(int arr[],int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i - 1;j++)
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
	}
}

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf(" %d", arr[i]);
	}
	printf("\n");
}

int binarySearch(int arr[],int start,int end,int searchkey)
{
	int mid;
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (searchkey == arr[mid])
			return mid;
		else if (searchkey > arr[mid])
			start = mid + 1;
		else
			end = mid - 1;
	}
	return -1;
}