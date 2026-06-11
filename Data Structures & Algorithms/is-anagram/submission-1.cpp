class Solution {
public:
    bool isAnagram(string s, string t) {
          if (s.length() != t.length()) {
            return false;
        }
        int count[26] = {0};
        for(char letters : s){
            count[letters - 'a']++;

        }
        for(char gr : t){
            count[gr - 'a']--;
            if(count[gr - 'a'] < 0){
                return false;
            }
        }

        return true;
    }
};
