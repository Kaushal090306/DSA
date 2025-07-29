class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int p=INT_MIN,c=1;
        for(int i=0;i<nums.size();i++){
            c=c*nums[i];
            p=max(p,c);
            if(c==0){
                c=1;
            }

        }
        c=1;
        for(int i=nums.size()-1;i>=0;i--){
            c=c*nums[i];
            p=max(p,c);
            if(c==0){
                c=1;
            }

        }

        return p;
    }
};
