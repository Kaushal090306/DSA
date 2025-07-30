// Problem : https://leetcode.com/problems/longest-subarray-with-maximum-bitwise-and/



class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int m = *max_element(nums.begin(), nums.end());
        int s=0, ms=0;
        cout << m;
        for (int num : nums){
            if(num == m){
                s++;
                if(s > ms){
                    ms = s;
                }
            }else{
                s=0;
            }
        }
        return ms;
}
};
