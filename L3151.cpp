#include <iostream>
using namespace std;
class Solution{
    public:
        bool isArraySpecial(vector<int>& nums){
            vector <int> s = nums; 
            for(int i =0; i<nums; i++){
                int temp; 
                temp == nums[i];
                if(temp != nums[i+1]){
                    return false;
                }
            }
            return true;
        }
};
int main(){

}