//Problem 3 of leet code
#include <iostream>
#include <unordered_set>
using namespace std;

class Solution {
   public:
    int lengthOfLongestSubstring(string S){
        unorder_set<char> substring; //Tracking characters in the current substring
        int Mleng =0; //Max length
        int start =0; //goes through every letter in the substring
        for(int i =0; i< S.length();i++){
            store[i] == S[i];
            temp[i] == store[i];
            for(int j =0; j<S.length();i++){
                if(temp[i] == store[i]){
                    cout<<temp[i];
                }
                cout<<endl;
                break; 
            }
        }
        
    }
};