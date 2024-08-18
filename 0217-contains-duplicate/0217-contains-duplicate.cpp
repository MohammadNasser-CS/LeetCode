class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
          unordered_set<int> checker;
    
    for (int num : nums) {
        if (checker.find(num) != checker.end()) {
            return true;
        }
        checker.insert(num);
    }
    
    return false;
    }
};