class Solution {
public:
    vector<vector<int>> allsubsets;
   inline void generate(vector<int> &subset,int i,vector<int> &nums){
        if(i==nums.size()){
            allsubsets.push_back(subset);
            return ;
        }
        //ith elemennt not in subset
  generate(subset,i+1,nums);
        // ith element in the subset
            subset.push_back(nums[i]);
        generate(subset,i+1,nums);
        subset.pop_back(); 
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> empty;
        generate(empty,0,nums);
        return allsubsets;
        allsubsets.clear();
        empty.clear();
        nums.clear();
    }
};
/*Tutorial: https://www.youtube.com/watch?v=u0e29JIdxZU*/
