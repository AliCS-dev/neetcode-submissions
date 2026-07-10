class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_set<char> chars;
        int left = 0;
        int res = 0;
        for(int right = 0; right < s.size(); right++){
            while(chars.count(s[right])){
                chars.erase(s[left]);
                left++;
            }
            chars.insert(s[right]);
            res = std::max(res, right - left + 1);
        }
        return res;
    }
};
