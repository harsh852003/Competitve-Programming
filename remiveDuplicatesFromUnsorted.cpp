#include<iostream>
#include "unordered_map"
using namespace std;

void removeDuplicateFromUnsorted(int arr[],int n){
    unordered_map <int , bool> ans;
    for(int i=0;i<n;i++){
        if(ans.find(arr[i])==ans.end()){
            cout<<arr[i]<<" ";
        }
        ans[arr[i]]=true;
    }
    
}

int main(){
    int arr[10] = {1,1,2,3,4,4,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    removeDuplicateFromUnsorted(arr,n);
    return 0;
}