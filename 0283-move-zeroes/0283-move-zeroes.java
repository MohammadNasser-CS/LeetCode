class Solution {
    public void moveZeroes(int[] nums) {
        int temps[]=new int[nums.length];

        for(int i=0,j=0;i<nums.length;i++){
            if(nums[i]!=0){
                temps[j]=nums[i];
                j++;
            }
        }
       for (int i = 0; i < nums.length; i++) {
            nums[i] = temps[i];
        }
    }
}