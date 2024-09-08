#include<iostream>
using namespace std;

bool isPrime(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        return true;
    }
    return false;
}

int main(){
    int n = 18;
    int ans = isPrime(n);
    if(ans){
        cout << n << " is a prime number." << endl;
    }
    else{
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}