#include<iostream>
#include<climits>
using namespace std;

char getMaxOccurenceOfChar(string s){
    //total 26 alphabets so for each alphabet we have initalize spce for store there count or frequency
    int arr[26] ={0};
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        int number;
        number = ch - 'a'; // it will convert each character on number then we add according to number 
        arr[number]++; //add frequency count of arr[number]; 
    }
    int max = -1;
    int ans = 0;
    for(int i=0;i<26;i++){
        if(arr[i]>max){
            ans = i;
            max = arr[i];
        }
    }
    char finalAns = 'a'+ ans;
    return finalAns;
}

int lowerCase(char ch){
    if(ch >='a' && ch <='z'){
        return ch;
    }
    else{
        char ans = ch - 'A'+ 'a';
        return ans;
    }
}
void reverseString(char name[],int n){
    int s =0;
    int e =n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
    
}

int getlength(char name[]){
    int count = 0;
    for(int i=0; name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){

    // char name[20];
    // cin>>name;
    // int n = getlength(name);
    // reverseString(name,n);
    // cout<<name;
    // char ch ;
    // cin>>ch;
    // char result = lowerCase(ch);
    // cout<<result;
    string s;
    cin>>s;
    char result = getMaxOccurenceOfChar(s);
    cout<<result;
    return 0;

}