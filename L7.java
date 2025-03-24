class Solution{
    public int reverse(int x){
        int num =Math.abs(x);
        while(x!=0){
            int store = x%10;
            if(num >(Integer.MAX_VALUE - store)) {
                return 0;
            }
            num = num *10 + store; 
            x/=10;
        }
        return (x<0) ?(-num):num;
    }
}