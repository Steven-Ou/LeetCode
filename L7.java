class Solution{
    public int reverse(int x){
        long num =0;
        while(x!=0){
            int store = x%10;
            if(num >(Integer.MAX_VALUE - store))) {
                return 0;
            }
            num = num *10 + store; 
            x/=10;
        }
        return num;
    }
}