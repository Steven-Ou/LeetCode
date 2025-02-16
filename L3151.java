class Solution{
    public boolean isArraySpecial(int[] nums){
        if(nums.length<=1){
            return true;
        }
        for(int i=0; i<nums.length-1;i++){
            int temp;
            temp =nums[i];
            if(temp%2 == nums[i+1]%2){
                return false;
            }
        }
        return true;
    }
}