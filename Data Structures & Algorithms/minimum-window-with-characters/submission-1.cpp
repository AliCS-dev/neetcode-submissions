class Solution {
public:
    string minWindow(string s, string t) {
        if(t.empty()){
            return " ";
        }
        unordered_map<char,int>countT,window;
        for(char c : t){
            countT[c]++;
        }
        int stock = 0;
        int n = countT.size();
        std::pair<int,int> res = {-1,-1};
        int reslen = INT_MAX;
        int left = 0;
        for(int right = 0; right < s.size(); right++){
            char c = s[right];
            window[c]++;
            if(countT.count(c) && window[c] == countT[c]){
                stock++;
            }
            while(stock == n){
                if((right - left + 1) < reslen){
                    reslen = right - left + 1;
                    res = {left , right};
                }
                window[s[left]]--;
                if(countT.count(s[left]) && window[s[left]] < countT[s[left]]){
                    stock--;
                }
                left++;
            }
        }
    return reslen == INT_MAX ? "" : s.substr(res.first,reslen);
    }
};
