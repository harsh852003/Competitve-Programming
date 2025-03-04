#include<iostream>
using namespace std;

int FindPivotElement(int a[],int n){
    int s =0;
    int e= n-1;
    int mid = s+ (e-s)/2;

    while(s<e){
        if(a[mid]>=a[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
}

int main(){
    int a[10]= {7,9,1,2,3};
    cout<< "pivot index :" << FindPivotElement(a,10)<<endl;
    return 0;
}