

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize){

    if (numsSize == 1) { 
        
        return 0; 
    } 
    
    int *output = (int *)malloc(numsSize * sizeof(int));
    *returnSize = numsSize;

    int i;
    for (i = 0; i < numsSize; i++) { /* initialize all outputs to 1 */
        output[i] = 1;
    }

    int prodLeft = 1; /* product from left */
    for (i = 1; i < numsSize; i++) {
        prodLeft *= nums[i - 1];
        output[i] *= prodLeft;
    }

    int prodRight = 1; /* product from right */
    for (i = numsSize - 2; i >= 0; i--){
        prodRight *= nums[i + 1];
        output[i] *= prodRight;
    }
    
    return output;
    free(output);
    free(nums);
    free(numsSize);
    free(prodLeft);
    free(i);
    free(prodRight);
    free(returnSize);
    
}

