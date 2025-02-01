#include <iostream>
using namespace std; 

class Solution{
    public:
        bool isPalindrome(int x){
            double store =0; 
            int s = x; 
            while(x!=0){
                int remainder = x%10;
                store = remainder + store*10;
                x/=10; 
            }
            if(store != s){
                return false;
            }
            return true; 
        } 
};