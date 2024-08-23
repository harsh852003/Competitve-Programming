#include<iostream>
using namespace std;

string intToBinary(int n){
        string binary = "";
        while(n>0){
            if(n%2==0){
                binary += "0";
            }
            else{
                binary += "1";
            }
            n= n/2;
        }
        reverse(binary.begin(),binary.end());
        return binary;
    }
    int BinaryToInt(string s){
        reverse(s.begin(),s.end());
        int n = s.size();
        int sum =0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
            sum +=  pow(2,i);
            }
        }
        return sum;
    }
    void bitManipulation(int num, int i) {
        // your code here
        string s = intToBinary(num);
        int bit;
        int new_num;
        int n= s.size();
        int change_bit_number = n-i;
        if(s[change_bit_number]=='0'){
            bit=0;
            s[change_bit_number]='1';
            new_num = BinaryToInt(s);
        }
        else{
            bit=1;
            s[change_bit_number]='0';
            new_num = BinaryToInt(s);
        }
        cout<< bit<<" "<<num<< " "<<new_num;
}