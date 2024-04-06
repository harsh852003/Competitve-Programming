#include<iostream>
using namespace std;

int BinarySearch(int a[],int n, int key){
    int start = 0 , end = n-1;
    int mid = (start +end)/2;
    while(start<=end){
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>key){
            end = mid - 1;
        }
        else if(a[mid]<key){
            start = mid +1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int Ans = BinarySearch(a,10,11);
    
    if(Ans == -1){
        cout<< "Element not present in the given data"<<endl;
    }
    else{
        cout<<Ans<<endl;
    }

    return 0;
}