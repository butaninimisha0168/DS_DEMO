#include <stdio.h>
#include <conio.h>

int i, j, n = 10, a[10] = {12, 32, 55, 10, 4, 45, 22, 13, 90, 35}, low = 0, high, mid, x;
void buble_sort()
{
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        printf("\t %d", a[j]);
    }
}
int binary_serch()
{
    buble_sort();
    printf("\n Enter to be search:");
    scanf("%d", &x);

    mid = (low + high) / 2;
    while (low < high)
    {

        if (mid == x)
        {
            return mid + 1;
        }
        else if (mid > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    printf("\n position of serched element is:a[%d]", a[mid+1]);
}
int main()
{
    // buble_sort();
    binary_serch();
}