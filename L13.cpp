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

            vector <int> store; 

            for(int i = 0; i< s.length(); i++){
                char ch = s[i];
                
                if(ch == 'I'){
                    store.push_back(I); 
                }
                else if(ch == 'V'){
                    store.push_back(V);
                }
                else if(ch == 'X'){
                    store.push_back(X);
                }
                else if(ch == 'L'){
                    store.push_back(L);
                }
                else if(ch == 'C'){
                    store.push_back(L);
                }
                else if(ch == 'D'){
                    store.push_back(L);
                }
                else if(ch == 'M'){
                    store.push_back(M);
                }
            }
        }
}