class Solution {
public:
    inline string removeDuplicateLetters(string s) {
        unordered_map<char, pair<int, bool> > m;
        string res;
        
        for(int i = 0; i < s.size(); i++)
            m[s[i]].first++;
        /*for(int i = 0; i < s.size(); i++)
           cout<<m[s[i]].first<<" "<<m[s[i]].second<<endl;    */ 
        
        
        
        for(int i = 0; i < s.size(); i++) {
            m[s[i]].first--;
             //cout<<"before:"<<m[s[i]].first<<" "<<m[s[i]].second<<endl; 
            if(m[s[i]].second) continue;
            
            while(s[i] < res.back() && m[res.back()].first > 0){
                m[res.back()].second = false; cout<<"h";
                res.pop_back();
            }
            
            res += s[i];
            m[s[i]].second = true;
            // cout<<"after:"<<m[s[i]].first<<" "<<m[s[i]].second<<endl;
        }
        s.clear();
        m.clear();
        return res;
    }
};
