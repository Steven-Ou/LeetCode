#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public: 
        int romanToInt(string s){
            int I = 1;
            int V = 5;
            int X = 10;
            int L = 50; 
            int C =100;
            int D = 500;
            int M =1000;
            vector <string> store; 
            for(int i = 0; i< s.length(); i++){
                if(s[i]== "I" || s[i] == "V" || s[i] == "X"|| s[i] == "L"|| s[i] == "C" ||s[i]=="D"|| s[i]=="M"){
                    store += s; 
                }
            }
        }
}