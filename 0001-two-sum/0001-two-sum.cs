public class Solution {
    public int[] TwoSum(int[] nums, int target) {
       int rest = 0;
 int[] indices=new int[2];
for (int i = 0; i < nums.Length; i++)
 {
     rest = target-nums[i];
     if (Array.IndexOf(nums, rest, i + 1)!=-1)
     {
     indices[0]=i;
     indices[1]= Array.IndexOf(nums, rest, i+1);
         break;
     }
 }
 return indices;
    }
}