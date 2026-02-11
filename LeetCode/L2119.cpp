#include <iostream>
using namespace std; 

class Solution{
    public:
        bool isSameAfterReversals(int num){
            int a =num;  //The num will be stored into a so that it can be use to check at the end
            int r =0; 
            while(num!=0){
                int remain = num%10; //Storing the last digit into the remain
                r = r *10 + remain; //then adding everything all up into the reverse
                num/= 10; //then cut the num to 0 by dividing 
            }
            int n =0;
            while(r!=0){
                int remain = r%10;
                n = n*10 + remain;
                r/=10; 
            }
            if(a == n){ //checks if a is equals to the second reversal
                return true;
            }
            return false; 
        }
};
/*
  bool isSameAfterReversals(int num) {
        if(num==0){
            return true;
        }
        int a=1;
        int digit=num%10;
        if(digit==0){
            a=a+1;
        }
        if(a==1){
            return true;
        }
        return false;

    }
*/