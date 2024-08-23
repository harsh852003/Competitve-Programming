#include<iostream>
#include<stack>
using namespace std;

int main(){
    string name = "Harsh";
    stack<char> s;
    int n = name.size();

    for(int i=0;i<n;i++){
        char ch = name[i];
        s.push(ch);
    }
    string revered = "";
    while(!s.empty()){
        char ch = s.top();
        revered.push_back(ch);
        s.pop();
    }

    cout<<revered;
   

    return 0;
}