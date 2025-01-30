#include <iostream>
#include <vector>
using namespace std; 
class Solution { 
    public: 
    double findMedianSortedArrays(vector<int> num1, vector<int> num2){
        vector<int>v;
        //storing each nums into an array
        for(auto num:num1){
            v.push_back(num);
        }
        for(auto num:num2){
            v.push_back(num2);
        }
        //Sorting to find median
        sort(v.begin(),v.end());
    }
};