#include<iostream>
using namespace std;


void PyramidPattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void PyramidPatternReverse(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*(n-i)-1;j++){
            cout<<"*";
        }
         for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void triangle(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void Reversetriangle(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}




int main(){
    // PyramidPattern(5);
    // PyramidPatternReverse(5);
    triangle(5);
    Reversetriangle(5);
    return 0;
}