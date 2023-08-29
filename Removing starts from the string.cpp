class Solution {
public:
    string removeStars(string s) {
        string stk;

        for(int i=0 ; i<s.size();i++){
            char cur = s[i];
            if(cur == '*'){
                stk.pop_back();
            } else{
                stk.push_back(cur);
            }
        }
        return stk;
    }
};
