#include <iostream>
using namespace std;

int LinearSearch(int a[],int n,int key){
    for(int i=0;i<n;i++){
        if(a[i]==key){
            return i;
        }
    }
    return 0 ;
}

int main(){

    int a[10]={0,1,2,3,4,4,4,4,4,5};
    int key;
    // cout << "Enter the search element :"<< endl;
    // cin >> key;
    int ans = LinearSearch(a,10,4);
    cout<< ans<<endl;


    // bool found = search(a,10,key);
    // if(found){
    //     cout<<"element found!"<<endl;
    // }
    // else{
    //     cout<<"element not found!"<<endl;
    // }


  return 0;  
}