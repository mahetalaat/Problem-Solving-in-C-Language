#include<stdio.h>

int recursiveBinarySearch(int array[], int start_index, int end_index, int element) {
    if (end_index >= start_index) {
        int middle = start_index + (end_index - start_index) / 2;
        if (array[middle] == element)
            return middle;
        if (array[middle] > element)
            return recursiveBinarySearch(array, start_index, middle - 1, element);
        return recursiveBinarySearch(array, middle + 1, end_index, element);
    }
    return -1;
}

void main()
{
	int arr[] = { 50,6,3,90,10 };
    int n = 5;
    int element = 90;
    int found_index = recursiveBinarySearch(arr, 0, n - 1, element);
    if (found_index == -1) {
        printf("Element not found in the array ");
    }
    else {
        printf("Element found at index : %d", found_index);
    }
}