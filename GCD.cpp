#include<bits/stdc++.h>
using namespace std;

string Gcd(string str1, string str2){
    return (str1+str2 == str2 + str1)? str1.substr(0,__gcd(str1.length(),str2.length())):"";
}

int main(){
    string s1 = "ABCABAB";
    string s2 = "AB";
    cout<<Gcd(s1,s2)<<endl;
    return 0;
}

