// ===================================================
// implementation of Heap sort algorithm
// complexité: O(nlog(n))
// ===================================================
#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int arr[], int size, int index)
{
    int maxIdx;
    int left;
    int right;

    maxIdx = index;
    left = index * 2 + 1;
    right = index * 2 + 2;

    if (left < size && arr[left] > arr[maxIdx])
        maxIdx = left;
    if (right < size && arr[right] > arr[maxIdx])
        maxIdx = right;
    if (maxIdx != index)
    {
        swap(&arr[index], &arr[maxIdx]);
        heapify(arr, size, maxIdx);
    }
}
void heapSort(int arr[], int size)
{
    for (int i = size / 2 - 1; i >= 0; i--)
        heapify(arr, size, i);
    for (int i = size - 1; i >= 0; i--)
    {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}
int main()
{
    int size;

    size = 6;  
    int arr[] = {20, 12, 10, 35, 25, 0};
    heapSort(arr, size);
    for (int i = 0; i < size; i++)
        printf("%d ",arr[i]);
}