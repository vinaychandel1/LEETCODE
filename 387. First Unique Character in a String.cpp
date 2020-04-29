class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> v(26,0);
		for(char c : s) v[c - 'a']++;
		for(int i = 0; i < s.length(); i++){
			if(v[s[i] - 'a'] == 1) return i;
		}
		return -1;
    }
};

/* 
OR
class Solution {
public:
    int firstUniqChar(string s) {        
        const int n = s.length();
        vector<int> count(26, 0);
        for (const auto & ch : s) {
            ++count[ch - 'a'];
        }
        for (int i = 0; i < n; ++i) {
            if (count[s[i] - 'a'] == 1) {
                return i;
            }
        }
        return -1;
    }
};
*/
