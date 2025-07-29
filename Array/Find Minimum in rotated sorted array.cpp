class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0, right = nums.size()-1;
        int mid = (left + right) / 2;
        int min1=INT_MAX;
       
        while(left<right){
            if(nums[mid]<=nums[right])
            {
                right=mid;
            }
            else{
                left=mid+1;
            }
            mid=(right+left)/2;
        }
        return nums[left];

    }
};
