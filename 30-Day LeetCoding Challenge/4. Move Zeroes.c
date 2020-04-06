

void moveZeroes(int* nums, int numsSize){
    
     int n=numsSize;
    int k = 0;

    for (int i = 0; i < numsSize; i++)
    {
        
        if (nums[i] != 0)
            nums[k++] = nums[i];
    }

    for (int i = k; i < n; i++)
        nums[i] = 0;
}

