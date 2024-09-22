// ===================================================
// implementation of insertion sort algorithm
// ===================================================
#include <stdio.h>
void insertionSort(int arr[], int size)
{
    int temp;
    int j;

    for (int i = 1; i < size; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
            arr[j + 1] = arr[j--];
        arr[++j] = temp;
    }
}
int main()
{
    int size;
    size = 9;
    int arr[] = {8, 12, 3, 16, 18, 2, 5, 20, 6};
    insertionSort(arr, size);
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}