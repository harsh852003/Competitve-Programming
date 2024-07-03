#include <iostream>
using namespace std;

void PyramidPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void PyramidPatternReverse(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * (n - i) - 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void triangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
void Reversetriangle(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
void pattern10(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void reversepattern10(int n)
{
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern11(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            start = 1;
        }
        else
        {
            start = 0;
        }
        for (int j = 0; j <= i; j++)
        {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}
void pattern12(int n)
{
    int blank = 2 * (n - 1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 0; j <= blank; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 0; j--)
        {
            cout << j;
        }
        cout << endl;
        blank -= 2;
    }
}
void pattern13(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << start << " ";
            start += 1;
        }
        cout << endl;
    }
}
void pattern14(int n){
  
    for (int i = 0; i < n; i++){
        for (char j = 'A'; j <= 'A'+i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern15(int n){
  
    for (int i = n-1; i >=0 ; i--){
        for (char j = 'A'; j <= 'A'+i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern16(int n){
   for(int i=0;i<n;i++){
     char s = 'A'+i;
     for(int j=0;j<=i;j++){
        cout<<s<<" ";
     }
     cout<<endl;
   }
}

int main()
{
    // PyramidPattern(5);
    // PyramidPatternReverse(5);
    // triangle(5);
    // Reversetriangle(5);
    // pattern10(5);
    // reversepattern10(5);
    pattern16(5);
    return 0;
}