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
        sort(v.begin(),v.end()); // 0(nlogn)
        //Find the median and return it
        int n = v.size();//0(n)
        
        return n%2?v[n/2]:(v[n/2-1]+v[n/2])/2.0; 
    }
};