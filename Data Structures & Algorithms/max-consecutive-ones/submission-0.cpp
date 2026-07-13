class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = 0;
        for(int i = 0; i < nums.size(); i++){
            int count = 0;
            for(int j = i; j < nums.size(); j++){
                if(nums[j] == 0) break;
                count++;
            }
          
            res = std::max(res,count);
            
        }
    return res;
    }
};