#include<iostream>
using namespace std;

int sort(int arr[],int n){
        for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
             if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
           }
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
}

int main(){
    int arr[10]= {2,4,5,6,12,9,7,11,10,8};
    sort(arr,10);
    return 0;
}