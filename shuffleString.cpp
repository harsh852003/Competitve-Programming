#include<iostream>
using namespace std;

string shuffleString(string s, int indices[]){
    string ans(s.length(),' ');
    for(int i=0;i<s.length();i++){
        ans[indices[i]]=s[i];
    }

    return ans;
}

int main(){
    string s1 = {'l','e','e','t','c','o','d','e'};
    int indices[10] = {4,5,6,7,0,1,2,3};
    string result = shuffleString(s1,indices);
    cout<< result<<endl;
    return 0;
}