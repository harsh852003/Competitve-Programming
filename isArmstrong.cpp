#include<iostream>
#include<cmath>
using namespace std;

void Armstrong(int num){
    int originalNumber = num;
    int remainder=0;
    int result =0;
    int count =0;

    while(originalNumber!=0){
        originalNumber = originalNumber/10;
        count ++;
    }
   

    originalNumber = num;
    while(originalNumber!=0){
        remainder = originalNumber%10;
        cout << "reminder is " << remainder << "   ";
        cout << pow(remainder,count) << "   ";
        result = result + pow(remainder,count);
        cout << "result is " << result << endl;
        originalNumber = originalNumber/10;
    }
    if(result == num){
        cout<<num<<" is an Armstrong number"<<endl;
    }
    else{
        cout<<num<<" is not an Armstrong number"<<endl;
    }
    
}

int main(){
    int num = 153;
    Armstrong(num);

    return 0;
}