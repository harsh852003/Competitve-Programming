#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


 class Solution{
    public:
    vector<bool> kidsWithGreatestNumberOfCandies(vector<int>&candies,int extraCandies){
        vector<bool> result;
        int MaxCandies = *max_element(candies.begin(),candies.end());
        for(int i = 0;i<candies.size();i++){
            if(candies[i]+extraCandies >= MaxCandies){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        return result;
    }
 };

 int main(){
    Solution sol;
    vector<int> candies = {2,3,5,1,3};
    int extraCandies = 3;
    vector<bool> ans = sol.kidsWithGreatestNumberOfCandies(candies,extraCandies);
    for(int i=0;i<candies.size();i++){
        cout<< ans[i] << endl;
    }
    return 0;
 }

