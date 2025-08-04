class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> res;

        for(int n:nums){
            if(res.empty()||res.back()<n){
                res.push_back(n);
            }
            else{
                int i=binary(res,n);
                res[i]=n;
            }

        }
        return res.size();
    }
    int binary(vector<int>& res,int n){
        int l=0,r=res.size()-1;

        while(l<=r){
            int mid=(l+r)/2;
            if(res[mid]==n) return mid;
            else if(res[mid]>n) r=mid-1;
            else l=mid+1;
        }
        return l;
    }
};
