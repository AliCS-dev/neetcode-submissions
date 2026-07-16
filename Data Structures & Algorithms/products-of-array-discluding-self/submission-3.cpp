class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        std::vector<int>res(nums.size());
        for(int i = 0; i < static_cast<int>(nums.size()); i++){
            int product = 1;
            for(int j = 0; j < static_cast<int>(nums.size()); j++){
                if(j != i){
                    product *= nums[j];
                }
            }
            res[i] = product;
        }
    return res;
    }
};
