#include <iostream>
using namespace std; 

class Solution{
    public:
        bool isSameAfterReversals(int num){
            int a =num;  //The num will be stored into a so that it can be use to check at the end
            int r =0; 
            while(num!=0){
                int remain = num%10; //Storing the last digit into the remain
                r = r *10 + remain; /
                num/= 10; 
            }
            int n =0;
            while(r!=0){
                int remain = r%10;
                n = n*10 + remain;
                r/=10; 
            }
            if(n == num){
                return true;
            }
            return false; 
        }
};
/* A different solution but it's weird
class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num==0){
            return true;
            
        }
        if(num%10!=0)
        return true;
        else
        return false;
    }
};
*/