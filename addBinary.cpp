#include<iostream>
using namespace std;

class Solution{
    public:
    string AddBinary(string a,string b){
        string result = "";
        int carry = 0;

        int i= a.size()-1,j=b.size()-1;
        while(i>=0||j>=0||carry==1){
            carry = carry + ((i>=0)?a[i]-'0':0);
            carry = carry + ((j>=0)?b[j]-'0':0);

            result = char(carry%2+'0')+ result;
            carry = carry/2;
            i--,j--;
        }
        return result;
    }
};
int main(){
    Solution sol;
    string a = "11000";
    string b = "11111";
    
    string ans = sol.AddBinary(a,b);
    cout<<ans;

}