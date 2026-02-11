class Solution{
    public String longestCommonPrefix(String[] strs){
        if(strs.length== 0){
            return "";
        }
        String store = strs[0];
        int count = store.length();
        for(char i=0;i<strs.length; i++){
            String Loop = strs[i];
            while(count > Loop.length() || !store.equals(Loop.substring(0,count))){
                count--;
                if(count ==0){
                    return "";
                }
                store = store.substring(0, count);
            }
        }
        return store; 
    }
}