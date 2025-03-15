#include <iostream>
using namespace std;

class Solution{
    public:
        int reverse(int x){
            long long num=0;
            while(x!=0){
                int store = x %10; 
                if((num> INT_MAX/10)||(num<INT_MIN/10)){
                    return 0;
                }
                num = num *10 + store; 
                x/=10; 
            }
            return num; 
        }
};