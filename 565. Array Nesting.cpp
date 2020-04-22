class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int maxcnt=0;
      for(int i=0;i<nums.size();i++)
      {
        int size=0;
        for(int k=i;nums[k]>=0;size++)
        {
          int ak=nums[k];
          nums[k]=-1;
          k=ak;
        }
        maxcnt=max(maxcnt,size);
      }
      return maxcnt;
    }
};
