class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length() != t.length()){
            return false;
        }

        std::unordered_map<char,int> anagram_map;

        for(char letters : s){
            anagram_map[letters]++;
        }
        for(char gr : t){
            anagram_map[gr]--;
            if(anagram_map[gr] < 0){
                return false;
            }
        }
    
        return true;
    }
};
