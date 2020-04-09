class Solution {
public:
    bool backspaceCompare(string S, string T) {
        vector<char> s1;
        vector<char> s2;
        for(int i = 0; i<S.size();i++){
            if(S[i]=='#' and !s1.empty())
            s1.pop_back();
            else if(S[i]!='#')
                s1.push_back(S[i]);
                
        }
        for(int i = 0; i<T.size(); i++){
            if(T[i]=='#' and !s2.empty())
                s2.pop_back();
            else if(T[i]!='#'){
                s2.push_back(T[i]);
            }
        }
        if (s1==s2) return true;
        else return false;
    
    }
};