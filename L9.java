class Solution{
    public  boolean isPalindrome(int x){
       int a  = x;  //stores x
       long rev = 0; 
       if(x<0){
        return false; 
       }
       while(x!=0){
            int rem = x%10;
            rev = rev * 10 + rem; 
            x/=10;
       }
    }
    
}
