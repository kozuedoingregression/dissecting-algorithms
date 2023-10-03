class Solution {
public:
    int solve(vector<int>&nums,int n,vector<int>& dp)
    {
        if(n<0) return 0;
        if(dp[n]!= -1) return dp[n];
        int rob= nums[n]+solve(nums,n-2,dp);
        int norob= solve(nums,n-1,dp);
        return dp[n]= max(rob, norob);
    }
    int rob(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n=nums.size();
        vector<int> dp(n,-1);
        return solve(nums,n-1,dp);
    }
};