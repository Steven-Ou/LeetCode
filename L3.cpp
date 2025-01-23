//Problem 3 of leet code
#include <iostream>
using namespace std;

class Solution {
   public:
    int lengthOfLongestSubstring(string S){
        vector <string> store; 
        string temp; 
        for(int i =0; i< S.length();i++){
            store[i] == S[i];
            temp[i] == store[i];
            for(int j =0; j<S.length();i++){
                if(temp[i] == store[i]){
                    cout<<temp[i];
                }
                
            }
        }
        
    }
};