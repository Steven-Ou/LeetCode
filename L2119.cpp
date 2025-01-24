#include <iostream>
using namespace std; 

class Solution{
    public:
        bool isSameAfterReversals(int num){
            int r =0; 
            while(num!=0){
                int remain = num%10;
                r = r *10 + remain;
                num/= 10; 
            }
            while(r!=0){
                
            }
            
        }
};