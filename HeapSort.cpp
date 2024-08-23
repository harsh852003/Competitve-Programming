#include<iostream>
using namespace std;

void heapify(int arr[],int N,int i){
    int largest = i;
    int left = 2*i +1;
    int right = 2*i +2;

    if(left<N && arr[left]>arr[largest]){
        largest = left;
    }

    if(right<N && arr[right]>arr[largest]){
        largest = right;
    }

    if(largest != i){
        swap(arr[i],arr[largest]);
        heapify(arr,N,largest);
    }
}

void heapsort(int arr[],int n){
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }

    for(int i=n-1;i>0;i--){
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}

int main(){
    int arr[8] = {9,87,96,46,24,578,24,88};
    int n = 8;
    heapsort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}