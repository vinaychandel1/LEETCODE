int jump(int* nums, int numsSize)
{
    register int count=0,pos=0,i;
    for(i=1;i<numsSize;i++)
        nums[i]=(i+nums[i]>nums[i-1])?i+nums[i]:nums[i-1];
    while(pos<numsSize-1){
        if(pos>=nums[pos]) return -1;
        if(pos<nums[pos])
        {
            count++;
            pos=nums[pos];
        }
    }
    return count;
}

/*C++
class Solution {
public:
    int jump(vector<int>& A) {
         int len = A.size(), count = 0, pos = 0;
    // At each index update rightmost index that can be reached
    for(int i=1; i<len; i++) 
        A[i] = max(i+A[i], A[i-1]);
    while(pos < len-1) {
        if(pos >= A[pos])    return -1;
        if(pos < A[pos]) {
            count++;
            pos = A[pos];
        }
    }
    return count;
        
        
    }
};
*/
