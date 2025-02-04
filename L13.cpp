#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public: 
        int romanToInt(String s){
            int I = 1;
            int V = 5;
            int X = 10;
            int L = 50; 
            int C =100;
            int D = 500;
            int M =1000;
            vector <string> store; 
            for(char i = 0; i< s.length(); i++){
                if(s== "I" || s == "V" || s == X|| s == L|| s == C ||s==D|| s==M){
                    store += s; 
                }
            }
        }
}