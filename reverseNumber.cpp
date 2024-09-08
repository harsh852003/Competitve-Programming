#include<iostream>
using namespace std;

int reverseNumber(int n){
    int result =0;
    while(n!=0){
        result = (result*10) + (n%10);
        n = n/10;
    }
    return result;
}

int main(){
    int n = -123;
    int ans = reverseNumber(n); 
    cout<<ans<<endl;
    return 0;
}