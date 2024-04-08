#include<iostream>
using namespace std;

//using linear search
int FindThePeakOfMountainUsingLinearSearch(int a[],int n){
    int peak = 0;
    // time complexity O(n)
    for(int i=0;i<n;i++){
        if(a[i]>a[i+1]){
            peak = i;
            break;
        }
    }
    return peak;
}

//Using Binary Search
int FindThePeakOfMountainUsingBinarySearch(int a[],int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;

    while(start<=end){
        if((a[mid]>a[mid+1]) && (a[mid]>a[mid-1])){
            return mid;
        }
        else if(a[mid]<a[mid+1]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid= start + (end-start)/2;
    }
    return -1;
}

int main(){
    int a[10]= {0,2,1,0};
    cout << "Using Linear Search: " <<FindThePeakOfMountainUsingLinearSearch(a,10)<<endl;
    cout << "Using Binary Search: " << FindThePeakOfMountainUsingBinarySearch(a,10)<<endl;
    return 0;
}