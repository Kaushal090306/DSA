//Problem : https://leetcode.com/problems/reverse-bits/ 

class Solution {
public:
    int reverseBits(int n) {
        vector<int> binary(32,0);
        int arr[32];
        int ans=0,c=0,i=0;
        while(n!=0){
            binary[31-i]=n%2;
            arr[i]=binary[31-i];
            if(arr[i]==1){
                ans+=pow(2,(31-i));
            }
            n=n/2;
            i++;
            c++;
        }
        return ans;
    }
};
