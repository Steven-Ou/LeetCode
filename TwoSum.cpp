#include <iostream>
using namespace std;

class Solution{
   public: 
        vector<int> TwoSum(vector<int>& nums, int target){
            int n = nums.size();
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

int main(){
    int n;
    cout<<"enter any amount of number as many times as you want: ";
    while(n< 0 || n != "" ){
        cin>>n;
    }
}