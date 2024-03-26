#include<iostream>
using namespace std;

// without using any inbuilt function
int Sqrt(int x){
    if(x==0){
        return 0;
    }
    int i= 1;
    int result =1;

    while(result<=x){
        i++;
        result = i*i;
    }
    return i-1;
}

int main(){
    
    int num = 8;
    int ans = Sqrt(num);
    cout<< ans <<endl;
    return 0;
}