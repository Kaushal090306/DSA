//using Dynamic Programming

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m =prices[0];
        int p=0;
        for(int i=1;i<prices.size();i++){
            int cost = prices[i] - m;
            p=max(p,cost);
            m=min(m,prices[i]);
        }
        return p;
    }
};
