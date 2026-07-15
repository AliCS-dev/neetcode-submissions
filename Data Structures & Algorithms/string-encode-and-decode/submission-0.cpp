class Solution {
public:

    string encode(vector<string>& strs) {
       string encoder;
       for(const string& word : strs){
        encoder += std::to_string(word.size());
        encoder += '#';
        encoder += word;
       }
    
    return encoder;
    }

    vector<string> decode(string s) {
    int i = 0;
    std::vector<string>result;
    while(i < static_cast<int>(s.size())){
        size_t spec_ops = s.find('#',i);
       int len = std::stoi( s.substr(i, spec_ops - i));
        int wordstart = static_cast<int>(spec_ops) + 1;
        string word = s.substr(wordstart,len);
        result.push_back(word);
        i = wordstart + len;
    }
    return result;
    }
};
