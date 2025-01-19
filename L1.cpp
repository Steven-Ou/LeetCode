#include <iostream>
using namespace std;
//Problem 1 of leet code
class Solution{
   public: 
        vector<int> TwoSum(vector<int>& nums, int target){
            int n = nums.size(); //initializing a variable and storing the size of nums
            for(int i=0;i<n-1;i++){
                for(int j= i+1; j<n; j++){
                    if(nums[i]+ nums[j]== target){
                        return{i,j};
                    }
                }
            }
            return {};
        }
};

