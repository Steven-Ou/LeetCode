class Solution{
    public boolean isSameAfterReversals(int num){
        int s = num; 
        int r = 0;  //reversal 1
        while(num!=0){
            int remain = num%10; 
            r = remain + r*10; 
            num = num/10; 
        }
    }
}