#include<iostream>
#include<math.h>
using namespace std;

int armstrong(int n){
    int num = n;
    int remainder =0;
    int count = 0;
    int result = 0;

    while(num!=0){
        num = num /10;
        count++;
    }

    num = n;
    while(num!=0){
        remainder = num %10;
        num = num/10;
        result += pow(remainder,count);
    }



    return result;
}

int main(){
    int n = 371;
    int ans = armstrong(n);
    cout<<ans;


    return 0;
}