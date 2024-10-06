// ===================================================
// implementation of Bubble sort algorithm
// complexité: O(n²)
// ===================================================
#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
int main()
{
    int size;
    size = 9;
    int arr[] = {8, 12, 3, 16, 18, 2, 5, 20, 6};
    bubbleSort(arr, size);
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}