#include<iostream>
using namespace std;

// usinig linear search 
int FirstOccurenceUsingLinearSearch (int a[],int n,int key){
    for(int i= 0;i<n;i++){
        if(a[i]==key){
            return i;
        }
    }
    return 0;
}

int LastOccurenceUsingLinearSearch(int a[],int n,int key){
    for(int i=n-1;i>=0;i--){
        if(a[i]==key){
            return i;
        }
    }
    return 0;
}

//using binary search

int FirstOccurenceUsingBinarySearch(int a[],int n,int key){
    int start= 0,end = n-1;
    int ans = -1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(a[mid]==key){
            ans = mid;
            end = mid -1;
        }
        else if (a[mid]>key){
            end = mid - 1;
        }
        else if(a[mid]<key){
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int LastOccurenceUsingBinarySearch(int a[],int n,int key){
     int start= 0,end = n-1;
    int ans = -1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(a[mid]==key){
            ans = mid;
            start = mid +1;
        }
        else if (a[mid]>key){
            end = mid - 1;
        }
        else if(a[mid]<key){
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main(){
    int a[10] = {1,2,3,3,3,3,3,3,3,4};
    int FirstUsingLinearSearch = FirstOccurenceUsingLinearSearch(a,10,3);
    int LastUsingLinearSearch = LastOccurenceUsingLinearSearch(a,10,3);
    cout<<"First : "<<FirstUsingLinearSearch<<endl;
    cout<< "Last : "<<LastUsingLinearSearch<<endl;
    cout<< "First Usnig Binary Search : "<<FirstOccurenceUsingBinarySearch(a,10,3)<<endl;
    cout<< "Last Using Binary Search :"<<LastOccurenceUsingBinarySearch(a,10,3);

    return 0;
}
