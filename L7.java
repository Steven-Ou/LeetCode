class Solution{
    public int reverse(int x){
        int num =Math.abs(x);
        int reverse =0; 
        while(num!=0){
            int store = num%10;
            if(reverse >(Integer.MAX_VALUE - store)/10) {
                return 0;
            }
            reverse = reverse *10 + store; 
            num/=10;
        }
        return (x<0) ?(-reverse):reverse;
    }
}