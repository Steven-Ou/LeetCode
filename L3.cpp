//Problem 3 of leet code
#include <iostream>
#include <unordered_set>
using namespace std;

class Solution {
   public:
    int lengthOfLongestSubstring(string S){
        unordered_set<char> substring; //Tracking characters in the current substring
        int Mleng =0; //Max length
        int start =0; //goes through every letter in the substring
        for(int i =0; i< S.length();i++){
        //if the character is already in the set, remove character from start
            while(substring.find(S[i])!= substring.end()){
                substring.erase(S[start]);
                start++;
            }
            //Adding the chars into the substring
            substring.insert(S[i]);
            Mleng = max(Mleng, i- start +1); //updating maxLength
        }
        
        return Mleng;
    }
};
int main(){
    Solution solution;
    string s;
    cout<<"enter a string of whatever letters combo you want: "<<endl;
    
}