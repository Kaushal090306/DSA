class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);
        int x=1;

        for(int i=1;i<=n;i++){
            if(x*2==i){
                x=i;
            }
            ans[i]=ans[i-x]+1;
        }
        return ans;

    }
};
