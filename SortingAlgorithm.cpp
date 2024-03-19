#include <iostream>
using namespace std;

void SelsectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

void BubbleSort(int arr[], int n)
{
    for (int i = n-1; i >= 0; i--)
    {
        for (int j = 0; j <=i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout <<arr[i] << " ";
    }
    cout<<endl;
}

void InsertionSort(int arr[],int n){
    for(int i =0;i<n-1;i++){
        int j=i;
        while (j>0 && arr[j-1]>arr[j])
        {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j]=temp;
            j--;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main()
{
    int arr[] = {10, 5, 4, 23, 48, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    SelsectionSort(arr, n);
    BubbleSort(arr, n);
    InsertionSort(arr,n);
    return 0;
}