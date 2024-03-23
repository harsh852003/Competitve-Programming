#include<iostream>
using namespace std;

int LengthOfLastWord(string s){
    int ans =0;
    int flag=0;  // it is require for not counting the extra space 
    for(int i= s.size()-1;i>=0;i--){
        if(s[i]==' ' && flag){
            break;
        }
        if(s[i] !=' '){
            flag =1;
            ans++;
        }

    }
    return ans;


}

int main(){
    string a =" hello  i  am Harsh    ";
    int len = LengthOfLastWord(a);
    cout<<len;


    return 0;
}