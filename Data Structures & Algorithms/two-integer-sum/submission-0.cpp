#include <unordered_map>
class Solution {
public:
    vector<int> twoSum(std::vector<int>& nums, int target) {
        std :: unordered_map<int,int>my_map;
        for(int i = 0; i < nums.size(); i++){
            int complement = target - nums[i];
            if(my_map.find(complement) != my_map.end()){
                return{my_map[complement], i};
            }
            my_map[nums[i]] = i;
        }
        return {};
    }
};
