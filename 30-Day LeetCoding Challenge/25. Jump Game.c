

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

