#include <iostream>
using namespace std;

class Solution{
    public:
        int reverse(int x){
            if(x<10){
                return x;
            }
            int num; 
            num=x%10;
            x=x/10;  
        }
};