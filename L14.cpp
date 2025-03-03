#include <iostream>
#include <vector>
using namespace std;
class Solution{
    public:
        string longestCommonPrefix(vector<string>& strs){
            if(strs.empty()){
                return "";
            }
            
            string store = strs[0]; 

            for(char i =0; i<strs.size(); i++){
                while(strs[i].find(store)!=0){
                    store = store.substr(0,)
                }
            }
        }
  
};

