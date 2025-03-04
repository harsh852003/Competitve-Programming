#include <iostream>
#include <climits>
using namespace std;

int getMax(int a[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}

int getMin(int a[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}

int main()
{
    int size;
    cin >> size;

    int a[100];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
        cout << a[i] << endl;
    }

    cout << "The min value is" << getMin(a, size) << endl;

    cout << "The max value is" << getMax(a, size) << endl;

    return 0;
}