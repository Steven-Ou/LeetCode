#include <iostream>
using namespace std;
class Solution{
    public:
        bool isArraySpecial(vector<int>& nums){
            if(nums.size()<=1 ){
                return true;
            }
            for(int i =0; i<nums.size()-1; i++){
                int temp; 
                temp = nums[i];
                if((temp %2== nums[i+1]%2)){
                    return false;
                }
            }
            return true;
        }
};
int main(){

}