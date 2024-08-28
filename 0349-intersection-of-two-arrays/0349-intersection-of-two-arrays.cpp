class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // best Efficient Solution
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> result;
        
        for (int num : nums2) {
            if (set1.find(num) != set1.end()) {
                result.insert(num);
            }
        }
        
        return vector<int>(result.begin(), result.end());
    // less Efficient Solution
    //  vector<int> result;
    //     for (int i = 0; i < nums1.size(); i++) {
    //         for (int j = 0; j < nums2.size(); j++) {
    //             if (nums1[i] == nums2[j]) {
    //                 /*
    //                 * Check if the element is already in the result.
    //                 * If the value is found in the sequence, the iterator to its position is returned.
    //                 * If the value is not found, the iterator to the last position is returned.
    //                 */
    //                 if (find(result.begin(), result.end(), nums1[i]) == result.end()) {
    //                     result.push_back(nums1[i]);
    //                 }
    //             }
    //         }
    //     }
        
    //     return result;
    }
};