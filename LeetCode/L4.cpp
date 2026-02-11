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
/*
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // Ensure nums1 is the smaller array
    if (nums1.size() > nums2.size()) {
        return findMedianSortedArrays(nums2, nums1);
    }

    int m = nums1.size();
    int n = nums2.size();
    int left = 0, right = m;
    int halfLen = (m + n + 1) / 2; // Total elements in the left half

    while (left <= right) {
        int i = (left + right) / 2; // Partition position in nums1
        int j = halfLen - i;        // Partition position in nums2

        if (i < m && nums2[j - 1] > nums1[i]) {
            // i is too small, move the partition to the right
            left = i + 1;
        } else if (i > 0 && nums1[i - 1] > nums2[j]) {
            // i is too large, move the partition to the left
            right = i - 1;
        } else {
            // Correct partition found
            int maxLeft;
            if (i == 0) {
                maxLeft = nums2[j - 1];
            } else if (j == 0) {
                maxLeft = nums1[i - 1];
            } else {
                maxLeft = max(nums1[i - 1], nums2[j - 1]);
            }

            if ((m + n) % 2 == 1) {
                // If the total number of elements is odd, return the middle element
                return maxLeft;
            }

            int minRight;
            if (i == m) {
                minRight = nums2[j];
            } else if (j == n) {
                minRight = nums1[i];
            } else {
                minRight = min(nums1[i], nums2[j]);
            }

            // If the total number of elements is even, return the average of the two middle elements
            return (maxLeft + minRight) / 2.0;
        }
    }

    return 0.0; // This line is never reached
        
    }
};
*/