/*USING BINARY SEARCH*/


int search(int* nums, int numsSize, int target){
   int beg=0,end=numsSize-1,mid;
        while(beg<=end)
        {
            mid=(beg+end)/2;
            if(nums[mid]==target)
                return mid;
            if(nums[beg]<=nums[mid])
            {
                if(target<=nums[mid] && target>=nums[beg])
                    end=mid-1;
                else
                    beg=mid+1;
            }
            
            else
            {
                if(target>=nums[mid] && target<=nums[end])
                   beg=mid+1;
                else
                    end=mid-1;
            }
            
        }
        return -1;
}

/* OR 


int search(int* nums, int numsSize, int target){
    int i;
   for(i=0;i<numsSize/2;i++){
        if(target==nums[i]){
            return i;
        }
   }
    for(i=numsSize/2;i<numsSize;i++){
        if(target==nums[i]){
            return i;
        }
    }
    
    return -1;
    

}


*/
