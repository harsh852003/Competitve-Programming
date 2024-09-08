#include<iostream>
#include<vector>
using namespace std;

vector<int> divisor(int n){
    vector<int> res;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            res.push_back(i);
        }
    }
    
    return res;
}
int main(){
    int n = 12;
    vector<int> ans = divisor(n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}