class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> temp;
        for(int i=0;n<nums.size();i++,n++){
            temp.push_back(nums[i]);
            temp.push_back(nums[n]);
        }
        return temp;
    }
};