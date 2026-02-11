//Problem 1 of leet code
class Solution{
    public int[] TwoSum(int[] nums, int target){
        for(int i=0; i<nums.length-1;i++){ //Two loops
            //The first loop will iterate through the array
            //The second loop will iterate through the array starting from the next index of the first loop
            for(int j=i+1;j<nums.length;j++){
                if(nums[i]+nums[j]==target){
                    return new int[] {i,j};
                }
            }
        }
            return new int[] {};  
    }
}
/*
 * A even faster solution
 * class Solution {
    public int[] twoSum(int[] nums, int target) {
        for (int i=1; i<nums.length; i++)
            for(int j=i;j<nums.length; j++)
                if((nums[j]+nums[j-i]) == target)
                    return new int[]{j,j-i};
        return null; 
    }
        
}
 */