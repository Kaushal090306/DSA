//Problem :- https://leetcode.com/problems/maximum-subarray/ 

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,count=INT_MIN;
        for(int i=0;i<nums.size();i++){
                sum = sum+nums[i];
                count=max(count,sum);
                if(sum<=0){
                    sum=0;
                }
        }
        return count;
    }
};
