class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int first = 0; int n = nums.size();
        while(first < n){
            if(nums[first] == val){
                nums[first] = nums[--n];
            }else{
                first++;
            }
        }
        return n;
    }
};