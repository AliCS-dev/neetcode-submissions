class Solution {
public:
    bool isValid(string s) {
        std::stack<char>brackets;
        for(int i = 0; i <s.size(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                brackets.push(s[i]);
            }else{
                if(brackets.empty()){
                    return false;
                }
                char top = brackets.top();
                brackets.pop();
                if(s[i] == ')' && top != '(') return false;
                if(s[i] == ']' && top != '[') return false;
                if(s[i] == '}' && top != '{') return false;
            }
        }
        return brackets.empty();
    }
};
