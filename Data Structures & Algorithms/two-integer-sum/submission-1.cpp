class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        // i goes from 0 up to size - 1
        for (int i = 0; i < nums.size(); i++) {
            
            // j starts at the very last valid index (size - 1)
            // and stops before it reaches i, ensuring they never overlap!
            for (int j = nums.size() - 1; j > i; j--) {
                
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
