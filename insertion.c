#include <stdio.h>
#include <stdlib.h>
void insertionSort(int array[], int size)
{
    for (int step = 1; step <= size; step++)
    {
        int key = array[step];
        int j = step - 1;
        while (key < array[j] && j >= 0)
        {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
}
int main()
{

    int i, a[25], n = 15, min = 20, max = 101;

    for (i = 0; i < n; i++)
        a[i] = rand() % (max - min + 1) + min;
    insertionSort(a, n - 1);
    for (i = 0; i < n; i++)
        printf(" %d ", a[i]);
    return 0;
}