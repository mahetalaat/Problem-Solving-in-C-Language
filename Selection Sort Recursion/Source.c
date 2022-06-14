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

int minIdxRec(int arr[], int s, int e)
{
	if (s == e)
		return s;

	int k = minIdxRec(arr, s + 1, e);

	if (arr[s] < arr[k])
		return s;
	else
		return k;
}
void selectionSortRec(int arr[], int size, int index )
{
	if (index == size)
		return;
	int k = minIdxRec(arr, index, size - 1);

	if (k != index)
		swap(&arr[k], &arr[index]);

	selectionSortRec(arr, size, index + 1);
}

void main()
{
	int arr[] = { 50,6,3,90,10 };
	selectionSortRec(arr, 5, 0);
	printf("Sorted Array: ");
	printArray(arr, 5);
}