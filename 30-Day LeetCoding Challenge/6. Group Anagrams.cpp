class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<int, vector<string> > res;
        map<string, int> key;
        int cnt = 0;
        for(int i = 0; i < strs.size(); i++) {
            string cur = strs[i];
            sort(cur.begin(), cur.end());
            if(key.find(cur) == key.end()) {
                key[cur] = cnt;
                res[cnt].push_back(strs[i]);
                cnt++;
            }
            else {
                res[key[cur]].push_back(strs[i]);
            }
        }
        vector<vector<string> > fin;
        for(auto it = res.begin(); it != res.end(); it++) {
            fin.push_back(it->second);
        }
        return fin;
    }
};
