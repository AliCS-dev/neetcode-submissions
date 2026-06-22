class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std :: unordered_map<string, vector<string>> anagramGroups;

        for(string s : strs){
            string key = s;
            std :: sort(key.begin(), key.end());
            anagramGroups[key].push_back(s);

        }        
        std :: vector<vector<string>> results;

        for(auto pair : anagramGroups){
            results.push_back(pair.second);
        }
    return results;
    }
};
