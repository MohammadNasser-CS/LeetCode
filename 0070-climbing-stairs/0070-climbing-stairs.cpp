class Solution {
public:
    int climbStairs(int n) {
        if(n==1)return 1;
        vector<int> ways(n,0);
        ways[0]=1;
        ways[1]=2;
        for(int i=2;i<n;i++){
            ways[i]=ways[i-1]+ways[i-2];
        }
        return ways[n-1];
    }
};