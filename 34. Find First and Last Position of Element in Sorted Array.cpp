class Solution {
public:
    
    int find(vector<int>& nums, int target, bool left){
        
        int start = 0; int end = nums.size()-1;
        int answer = -1;
        while(start<=end){
            
            int mid = start + (end-start)/2;
            
            if(nums[mid] == target){
                answer = mid;
                
                if(left){
                   // answer = mid;
                    end = mid-1;
                }
                else{
                   // answer = midl
                    start = mid+1;
                }
                
            }
            else if(nums[mid]>target){
                end = mid-1;
            }
            else if(nums[mid]<target){
                start = mid+1;
            }
 
        }
        return answer;
        
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        
        if(nums.size() == 0){
            return {-1,-1};
        }
        
       int first = find(nums, target, true); // first occurence 
        int second = find(nums, target,false); // last occurence
        
        return {first,second};
        
    }
};
