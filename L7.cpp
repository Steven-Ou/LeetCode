#include <iostream>
using namespace std;

class Solution{
    public:
        int reverse(int x){
            int num=0;
            while(x!=0){
                int store = x %10; 
                num = num *10 + store; 
                x/=10; 
            }
        }
};