class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int k=nums.size();
        set<int> s;
      for(int i=0;i<k;i++){
          s.insert(nums[i]);
      }
        cout<<s.size()<<""<<k;
        if(s.size()!=k) return true;
        else return false;  
    }
};
