class Solution {
public:
    int climbStairs(int n) {
        if(n==0||n==1||n==2){
            return n;
        }
        int curr=2,prev=1,sum=0,temp=0;
        for(int i=3;i<=n;i++){
            sum=curr+prev;
            temp=curr;
            curr=curr+prev;
            prev=temp;

        }
        return sum;
    }
};
