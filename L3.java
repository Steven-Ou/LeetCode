import java.util.HashSet;
import java.util.Set;

class Solution{
    public int lengthOfLongestSubstring(String s){
        int n = s.length(); 
        int MaxL = 0; 
        Set<Character> Sub = new HashSet<>();
        int first =0; 
        
        for(int i =0; i<n; i++){
            if(!Sub.contains(s.charAt(i))){
                Sub.add(s.charAt(i));
                MaxL = Math.max(MaxL, i- first +1);
            }else{
                while(Sub.contains(s.charAt(i))){

                }
            }
        }
    }   
}
