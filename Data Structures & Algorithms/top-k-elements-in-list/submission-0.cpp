class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      std::unordered_map<int,int>freq;
      for(int value : nums){
        freq[value]++;
      }
      std::vector<vector<int>>buckets(nums.size()+1);
      for(const auto& [value,count] : freq){
        buckets[count].push_back(value);
      }
      std::vector<int>res;
      for(int count = static_cast<int>(nums.size()); count >= 1; count--){
           
        for(int value : buckets[count]){
            res.push_back(value);
            if(res.size() == static_cast<size_t>(k)){
                return res;
            }
        }

        }
      return res;
    
    }
};
