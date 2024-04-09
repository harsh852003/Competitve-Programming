#include<iostream>
using namespace std;

string MergeAlternativeString(string s1, string s2){
    string result = "";
    int Max = max(s1.length(),s2.length());
    for(int i=0;i<Max;i++){
        if(i<s1.length()){
            result += s1[i];
        }

        if(i<s2.length()){
            result += s2[i];
        }
    }
    return result;
}

int main(){
    string s1 = "Harsh";
    string s2 = "Pandya";

    cout<< MergeAlternativeString(s1,s2)<<endl;
    return 0;
}