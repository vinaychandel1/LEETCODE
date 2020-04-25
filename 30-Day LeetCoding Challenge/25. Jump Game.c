

bool canJump(int* nums, int numsSize){
    int jump=nums[0]; // first jump
        for(int i=1;i<numsSize;i++){
            if(jump<=0) return false; 
            jump--;
            if(jump<=nums[i])
                jump=nums[i]; // update jump - greedy
        }
        if(jump>=0)
            return true;
        return false;
}

/* c++ solution 
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int distance = 0;
        for(int i = 0; i < nums.size() - 1; i++){
            distance = max(distance, i + nums[i]);
            if(distance == i) return false;
        }
        return true;
    }
};
*/

