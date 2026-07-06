class Solution {
public:
    int reverse(int x) {
       long long org = x;
       long long abs_val = std::abs(org);
       std::string s = std::to_string(abs_val);
       std::reverse(s.begin(),s.end());
       long long res = std::stoll(s);
       if(org < 0){
        res = -res;
       }
       if(res < INT_MIN || res > INT_MAX){
        return 0;
       }
    return res;
    }
};
