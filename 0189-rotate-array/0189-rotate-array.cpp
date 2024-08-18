class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> rotated(nums.size());
        for(int i = 0;i<nums.size();i++){
            int index=(i+k)%nums.size();
            rotated[index]=nums[i];
        }
         nums=rotated;
    }
};