class Solution {
public:
   int calculate(vector<int> &arr, int div) {
    int n = arr.size(); //size of array
    //Find the summation of division values:
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += ceil((double)(arr[i]) / (double)(div));
    }
    return sum;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1; int high = *max_element(nums.begin(),nums.end()); 
        int n= nums.size(); 
        if(n>threshold) return -1;
        while(low<=high)
        {
            int mid = low+(high-low)/2; 

            if(calculate(nums,mid) <= threshold)
            {
                high=mid-1; 
            }
            else
            {
                low=mid+1; 
            }
        }
        return low;
    }
};