class Solution{
    int val(char t){
        switch (t) {
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
    public int romanToInt(String s){
        int c,n =0; 
       
        for(int i=0;i<s.length();i++){
            c = val(s.charAt(i));
            if(c==-1){
                return -1;
            }
            if(i<s.length()-1 && val(s.charAt(i+1))>c){
                n-=c;
            }
            else{
                n+=c;
            }
        }
        return n;

    }    
}
