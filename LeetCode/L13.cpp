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
                    store.push_back(C);
                }
                else if(ch == 'D'){
                    store.push_back(D);
                }
                else if(ch == 'M'){
                    store.push_back(M);
                }
            }
            
            int total =0;
            for(int i=0; i<store.size();i++){
                if(i<store.size()-1 && store[i]<store[i+1]){
                    total -= store[i];
                }else{
                    total += store[i];
                }
            }

            return total;
        }
};
/*
class Solution {
public:
    int valuess(char t){
        switch(t){
           case 'I': return 1;
           case 'V': return 5;
           case 'X': return 10;
           case 'L': return 50;
           case 'C': return 100;
           case 'D': return 500;
           case 'M': return 1000;
            
        }
        return -1;
    }
    
    int romanToInt(string s) {
        int c,n=0;
        char st;
        for(int i=0;i<s.length();i++){
           c=valuess(s[i]);
           if(c==-1){
            return -1;
           }
           if(valuess(s[i+1])>valuess(s[i])){
            n-=c;
           }
           else{
            n+=c;
           }
        }
        return n;
    }
};
*/