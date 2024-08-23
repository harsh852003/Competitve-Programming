#include<iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string rearrangeOrder(string s){
    vector<int> number;
    for(int i=0;i<s.size();i+=2){
        number.push_back(s[i] - '0');
    }
    sort(number.begin(),number.end());

    string result = "";
    for(int i=0;i<number.size();i++){
        result += to_string(number[i]);
        if(i<number.size()-1){
            result += "+";
        }
    }

  
    return result;
}   

int main(){
    string s;
    cout<<"enter the sring :"<<endl;
    cin>>s;
    string ans = rearrangeOrder(s);
    cout<<ans;
    return 0;

}