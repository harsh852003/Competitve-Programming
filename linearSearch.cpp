#include <iostream>
using namespace std;

bool search(int a[],int n,int key){
    for(int i=0;i<n;i++){
        if(a[i]==key){
            return 1;
        }
    }
    return 0 ;
}

int main(){

    int a[10]={5,7,-4,-10,22,34,57,90,12,9};
    int key;
    cout << "Enter the search element :"<< endl;
    cin >> key;

    bool found = search(a,10,key);
    if(found){
        cout<<"element found!"<<endl;
    }
    else{
        cout<<"element not found!"<<endl;
    }


  return 0;  
}