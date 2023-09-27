class Solution {
public:
    int trap(vector<int>& height) {
        int i=0;
        int j=height.size()-1;

        int maxL = height[i];
        int maxR = height[j];

        int ans = 0;

        while(i<j)
        {
            if(maxL <= maxR)
            {
                i++;
                maxL= max(maxL,height[i]);
                ans += maxL - height[i];
            }
            else
            {
                j--;
                maxR = max(maxR,height[j]);
                ans += maxR- height[j];
            }
        }
        return ans;
    }
};