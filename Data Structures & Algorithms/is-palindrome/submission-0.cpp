class Solution {
public:
    bool isPalindrome(string s) {
        
        s.erase(std::remove_if(s.begin(), s.end(), [](unsigned char c){
            return !std::isalnum(c);
        }), s.end());

       
        for (char &c : s){
            c = std::tolower(c);
        }
    
        int left = 0;
        int right = s.length() - 1;

        while(left < right){
            if(s[left] != s[right]){
                return false;
            }
            left++;
            right--;
        }
    
        return true;
    }
};