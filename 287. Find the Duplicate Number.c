int comparator (const void * p1, const void * p2)
{
  return (*(int*)p1 - *(int*)p2);
}

int findDuplicate(int* nums, int numsSize){
    int i;
   qsort(nums, numsSize, sizeof(int), comparator);
for (i=1;i<numsSize;i++)
{
if (nums[i]==nums[i-1])
return nums[i];
}
return -1;
free(nums);
}

/* C++ solution
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       unordered_map<int,int> dup;
        for(int i=0;i<nums.size();i++)
        {
            dup[nums[i]]++;    
        }
        
        for(auto itr:dup)
        {
            if(itr.second > 1)
            {
                return itr.first;
                
            }
        }
        return -1;
       
    }
};
*/
