//Problem : https://leetcode.com/problems/number-of-1-bits/

class Solution {
public:
    int hammingWeight(int n) {
        int c=0;
        while(n!=0){
            if(n%2==1){
                c++;
            }
            n=n/2;
        }
        return c;
    }
};
