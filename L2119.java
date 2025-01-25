class Solution{
    public boolean isSameAfterReversals(int num){
        int s = num; 
        int r = 0;  //reversal 1
        while(num!=0){
            int remain = num%10; 
            r = remain + r*10; 
            num = num/10; 
        }
        int r2 = 0; 
        while(r2 !=0){
            int remain = r%10;
            r2 = r2*10 + remain; 
            
        }
    }
}