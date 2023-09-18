class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(),1);
        int prefi=1;
        for(int i=0;i<nums.size();i++)
        {
            ans[i] =prefi;
            prefi *=nums[i];   
        }
        int n= nums.size();
        int postfi=1;
        for(int i=n-1;i>=0;i--)
        {
            ans[i] *=postfi;
            postfi *=nums[i];
        }
        return ans;
    }
};