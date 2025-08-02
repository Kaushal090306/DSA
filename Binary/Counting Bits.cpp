//Problem: https://leetcode.com/problems/counting-bits/

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

        //Method 2:
        // vector<int> x(n+1,0);
        // int c=0;
        // for(int i=1;i<=n;i++){
        //     c=0;
        //     int t=i;
        //     while(t!=0){
        //         if((t%2)==1) 
        //             c++;
        //         t=t/2;
        //     }
        //     x[i]=c;
        // }
        // return x;

    }
};
