class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> removed;
        removed.push_back(nums[0]);
        for(int i =1;i<nums.size();i++){
            bool accepted = true;
            for(int j =0;j<removed.size();j++){
                if(nums[i]==removed[j]){
                    accepted=false;
                    break;
                }
            }
            if(accepted){
                removed.push_back(nums[i]);

            }
        }
        nums=removed;
        return removed.size();
    }
};
