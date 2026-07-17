class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res = 0;
        std::unordered_set<int>numset(nums.begin(),nums.end());
        for(int num : nums){
            int streak = 0;
            int curr = num;
                while(numset.find(curr) != numset.end()){
                streak++;
                curr++;
            }
            res = std::max(res,streak);
        }
    return res;
    
    }

};
