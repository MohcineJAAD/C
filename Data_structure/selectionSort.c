// ===================================================
// implementation of selection sort algorithm
// ===================================================
#include <stdio.h>
// ############# Methode 1 #############
// void selectionSort(int arr[], int size)
// {
//     int min;
//     int temp;
//     for (int i = 0; i < size; i++)
//     {
//         min = arr[i];
//         temp = i;
//         for (int j = i + 1; j < size; j++)
//         {
//             if (min > arr[j])
//             {
//                 min = arr[j];
//                 temp = j;
//             }
//         }
//         arr[temp] = arr[i];
//         arr[i] = min;
//     }
// }
// ############# Methode 2 #############
void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int arr[], int size)
{
    int minIndex;
    for (int i = 0; i < size; i++)
    {
        minIndex = i;
        for (int j = i + 1; j < size; j++)
            if (arr[minIndex] > arr[j])
                minIndex = j;
        swap(&arr[minIndex], &arr[i]);
    }
    
}
// #####################################
int main()
{
    int size;

    size = 6;  
    int arr[] = {20, 12, 10, 35, 25, 0};
    selectionSort(arr, size);
    for (int i = 0; i < size; i++)
        printf("%d ",arr[i]);
}