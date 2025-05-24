class Solution {
public:
    int binarysearch_first(vector<int>& nums, int target){
        int low=0; int high= nums.size()-1; 
        int first =-1; 

        while(low<=high){
            int mid = low+(high-low)/2; 
            if(nums[mid] == target){
                first =mid;
                high=mid-1;  
            }
            else if(nums[mid] > target){
                high=mid-1;
            }
            else{
                low=mid+1; 
            }
        }
        return first; 
    }; 

      int binarysearch_last(vector<int>& nums, int target){
        int low=0; int high= nums.size()-1; 
        int last =-1; 

        while(low<=high){
            int mid = low+(high-low)/2; 
            if(nums[mid] == target){
                last =mid;
                 low=mid+1; 
               // high=mid-1;  
            }
            else if(nums[mid] < target){
               low=mid+1;
            }
            else{
               high = mid-1;
            }
        }
        return last; 
    }; 


    vector<int> searchRange(vector<int>& nums, int target) {
        int first =binarysearch_first(nums,target); 
        int last =binarysearch_last(nums,target); 
        return {first , last}; 

        
    }
};