//Problem: https://leetcode.com/problems/bitwise-ors-of-subarrays/ 

class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        set<int> curr;
        set<int> ans;

        for(int i:arr){
            set<int> next;

            next.insert(i);

            for(int j:curr){
                next.insert(i|j);
            }
            ans.insert(next.begin(),next.end());
            curr=next;
        }
        return ans.size();

    }
};
