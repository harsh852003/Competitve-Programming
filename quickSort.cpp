#include <iostream>
using namespace std;

// for partitioning part
int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int count = 0;

    for (int i = s + 1; i < e; i++)
    {
        if (arr[i] < pivot)
        {
            count++;
        }
    }

    // to place pivotindex at right position
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    // left part and right part ko sort karne ke liye apan ab logic dalenge
    int i = s;
    int j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int p = partition(arr, s, e);

    // left part ko sort karne ke liye
    quickSort(arr, s, p - 1);

    // right wale part ko sort karne ke liye
    quickSort(arr, p + 1, e);
}

int main()
{
    int arr[10] = {8, 7, 6, 3, 1, 1, 3, 3, 8, 9};
    int n = 10;
    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}