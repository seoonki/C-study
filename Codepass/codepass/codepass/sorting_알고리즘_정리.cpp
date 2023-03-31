#include "stdio.h"

// https://namu.wiki/w/%EC%A0%95%EB%A0%AC%20%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98#s-2.2.1


void Bubble_Sort(int arr[], int len)
{
    int i, j, tmp;
    for (i = 0; i < len - 1; ++i)
    {
        for (j = 0; j < len - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}


void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }

        if (min_idx != i)
            swap(&arr[min_idx], &arr[i]);
    }
}


void InsertionSort(int arr[], int n)
{
    int key, i, j;

    for (i = 0; i < n; i++)
    {
        j = i - 1;
        key = arr[i];

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}


int main()
{
    int arr[10] = {10, 8, 9, 6, 3, 2, 4, 1, 5, 7};

    // Bubble_Sort(arr, 10);
    // selectionSort(arr, 10);
    InsertionSort(arr, 10);
    
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    return 0;
    

}