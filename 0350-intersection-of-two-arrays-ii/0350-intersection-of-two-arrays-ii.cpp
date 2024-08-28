class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> frequenciesCount;
        vector<int> result;
        // Count frequencies of elements in nums1, to get number of times pushing each element.
        for (int num : nums1) {
            frequenciesCount[num]++;
        }
        // Find intersection with nums2
        for (int num : nums2) {
            if (frequenciesCount[num] > 0) {
                result.push_back(num);
                frequenciesCount[num]--;  // Decrease count since we've used one occurrence
            }
        }
        return result;
    }
};