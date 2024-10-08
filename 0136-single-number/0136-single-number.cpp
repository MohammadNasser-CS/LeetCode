class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // Best Solution:
        int singleNum = 0;
        for (int num : nums) {
            singleNum ^= num;  // XOR all numbers
        }
        return singleNum;
        // first Solution:
        // int singleNum=nums[0],i=0,j=1;
        // bool flag=false;
        // for(int i=0;i<nums.size();i++){
        //     flag=false;
        //      for(int j=0;j<nums.size();j++){
        //     if(nums[i]==nums[j]&&i!=j){
        //      flag=true;
        //      }
        //     }
        //     if(!flag){
        //         return nums[i];
        //     }
        // }
        // return nums[0];
       
    }
};