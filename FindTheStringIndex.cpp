#include <iostream>
using namespace std;


    int strMethod1(string haystack, string needle) {
        if(haystack.length()<needle.length()){
            return -1;
        }
        int index = -1;
        int ans = -1;
        for(int i=0;i<haystack.length();i++){
            if(haystack[i]==needle[0]){
                for(int j=0;j<needle.length();j++){
                    if(haystack[i+j]==needle[j]){
                        index = -1;
                        continue;
                    }
                    else{
                        index = 0;
                        break;
                    }
                }
                if(index==0){
                    ans=-1;
                }
                else{
                    ans=i;
                }
            }
        }
        return ans;
    }

//using find method
    int strMethod2(string haystack,string needle){
        if(haystack.find(needle)){
            return haystack.find(needle);
        }
        else{
            return -1;
        }
    }

    int main(){
        string s1 = "Harsh";
        string s2 = "rsh";
        string s3 = "arsh";

        int result1 = strMethod1(s1,s2);
        int result2 = strMethod2(s1,s3);
        cout<<result1<<endl;
        cout<<result2<<endl;
        return 0;
    }