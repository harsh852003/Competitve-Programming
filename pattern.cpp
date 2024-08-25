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

void p1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void p2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void p3(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void p4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void p5(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
}
void p6(int n){
   
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void p7(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void p8(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void p9(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void p10(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void p11(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void p12(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<< endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        for(int j=1;j<=n-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void p13(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            if(j==1 || j==2*i-1 || i==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void p14(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            if(j==1 || j==2*i-1 || i==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void p15(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            if(j==1 || j==2*i-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            if(j==1 || j==2*i-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void p16(int n){
    for(int i=1;i<=n;i++){
        int number = 1;
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<number<<" ";
            number = number * (i-j)/j;
        }
        for(int j=1;j<n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void p17(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
       
        for(int j=2;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    };
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        for(int j=2;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void p18(int n){
    int space=0 ;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        space += 2;
        cout<<endl;
    }
    space -= 2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        space -= 2;
        cout<<endl;
    }
}
void p19(int n){
    int space = 2*n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        space -= 2;
        cout<<endl;
    }
    space = 2;
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        space += 2;
        cout<<endl;
    }
}
void p20(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==1 || j==n ||i==1 ||i==n ){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void p21(int n){
    int num = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}
void p22(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2 ==0){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
}
void p23(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            if(j==1 || j==2*i-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for(int j=1;j<=2*(n-i)+1;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            if(j==1 || j==2*i-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
}
void p26(int n){
    int num=1;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }
}

// void p27(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=2*i-1;j>=1;j-=2){
//             cout<<j;
//         }
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }

void p27(int n) {
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print decreasing sequence
        for (int j = 2 * i - 1; j >= 1; j -= 2) {
            cout << j<<" ";
        }
        cout << endl;
    }
}
void p28(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=i;j>=1;j--){
            if(i==1){
                break;
            }
            cout<<j;
        }
        cout<<endl;
    }
}
void p32(int n){
    for(int i=1;i<=n;i++){
        char s = 'E'-i+1;
        for(char j=s;j<='E';j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void p33(int n){
    char small = 'a';
    char capital = 'A';
    for(int i=i;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2 == 0){
                cout<<capital;
                capital++;
                small++;
            }
            else{
                cout<<small;
                small++;
                capital++;
            }
        }
        cout<<endl;
    }

}
void p34(int n) {
    char currentChar = 'a';
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            if (j % 2 == 0) {
                cout << (char)toupper(currentChar) << " ";
            } else {
                cout << (char)tolower(currentChar) << " ";
            }
            currentChar++;
        }
        cout << endl;
    }
}

// void p35(int n){
//     for(int i=n;i>=1;i--){
//         char s = 'A';
//         for(char j='A'+i;j>=s;j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

void p35(int n) {
    for(int i = n; i >= 1; i--) {
        for(char j = 'A' + i-1; j >= 'A'; j--) {
            cout << j;
        }
        cout << endl;
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
    
    // pattern16(5);
    // pattern11(5);
    // p1(5);
    // p2(5);
    // p3(5);
    // p4(5);
    // p5(5);
    // p6(5);
    // p7(5);
    p8(5);
    // p9(5);
    // p10(5);
    // p11(5);
    // p12(5);
    // p13(5);
    // p14(5);
    // p15(5);
    // p16(5);
    // p17(5);
    // p18(4);
    // p19(5);
    // p20(5);
    // p21(5);
    // p22(5);
    // p23(5);
    // p26(5);
    // p28(5);
    // p32(5);
    // p34(5);
    // p35(5);
    return 0;
}