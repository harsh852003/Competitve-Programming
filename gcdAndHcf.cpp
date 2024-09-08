#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(a==0){
        return b;
    }
    while(a>0 && b>0){
        if(a>b){
            a = a%b;
        }
        else{
            b = b%a;
        }
    }
    return a;
}

int main(){
    int a=17;
    int b=19;
    
    int ans = gcd(a,b);
    cout<<ans<<endl;
    return 0;
}