class Solution {
public:
    int lengthOfLastWord(string s) {
        std::reverse(s.begin(),s.end());
        int len = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] != ' '){
                len++;
            }
            else if(len != 0){
                break;
            }
        }
        return len;
    }
};