class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int lim = n/2;
        int ans = 0;
        
        map<int, int> hash;
        
        for(int i=0; i<n; i++) {
            hash[nums[i]]++;
        }
        
        for(auto h:hash) {
            if(h.second>lim) {
                ans = h.first;
            }
        } return ans;
        nums.clear();
        hash.clear();
    }
};
