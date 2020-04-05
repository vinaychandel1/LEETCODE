int singleNumber(int* nums, int numsSize){
    int res= 0,i;
        for (int i = 0; i < numsSize; i++) 
            res = res ^ nums[i]; 
  
        return res; 

}

