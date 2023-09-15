class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j= height.size()-1;

        int temp=0;
        int ans=0;

        while(i<j)
        {
            temp= (j-i)*min(height[i],height[j]);
            ans = max(temp,ans);

            if(height[i]<= height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return ans;
    }
};