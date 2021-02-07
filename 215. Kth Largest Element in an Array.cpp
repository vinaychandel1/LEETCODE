class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
         sort(nums.begin(), nums.end(),greater<int>());
        return nums[nums.size() - k];
    }
};

/*class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
         sort(nums.begin(), nums.end(),greater<int>());
        return nums[k-1];
    }
};*/

/*https://www.geeksforgeeks.org/tag/honeywell*/
