class Solution {
public:
    inline string smallestSubsequence(string s) {
        unordered_map<char, pair<int, bool> > m;
        string res;
        for(int i = 0; i < s.size(); i++)
            m[s[i]].first++;
        
        for(int i = 0; i < s.size(); i++) {
            m[s[i]].first--;
            
            if(m[s[i]].second) continue;
            
            while(s[i] < res.back() && m[res.back()].first > 0){
                m[res.back()].second = false;
                res.pop_back();
            }
            
            res += s[i];
            m[s[i]].second = true;
        }
        s.clear();
        m.clear();
        return res;
    }
};
