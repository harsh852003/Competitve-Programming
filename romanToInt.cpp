#include<iostream>
using namespace std;

int RomanToInt(char ch){
    switch(ch){
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;

        default: return 0;

    }
    return 0;
}

int RomanToIntLogic(string s){
    int sum = 0;
    int n = s.length();
    for(int i=0;i<n;i++){
        if(i<n-1 && RomanToInt(s[i+1])> RomanToInt(s[i])){
            sum = sum - RomanToInt(s[i]);
        }
        else{
            sum = sum + RomanToInt(s[i]);
        }
    }
    return sum;
}

int main(){
    string roman;
    cout<<"Enter roman Number:"<<endl;
    cin>>roman;
    int ans = RomanToIntLogic(roman);
    cout<<ans<<endl;
    return 0;
}