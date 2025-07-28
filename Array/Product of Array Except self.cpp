// Problem :- https://leetcode.com/problems/product-of-array-except-self/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> op(nums.size(),1);
        for(int i = 1 ;i<nums.size();i++){
            op[i]=op[i-1]*nums[i-1];
        }
        int s=1;
        for(int i=nums.size()-2;i>=0;i--){
            s=s*nums[i+1];
            op[i]=op[i]*s;
        }
     return op;   
    }
};
