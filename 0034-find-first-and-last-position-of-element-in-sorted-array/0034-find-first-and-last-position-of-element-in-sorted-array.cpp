class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
     int first=-1;
     int last=-1;
     int n=nums.size();
     for(int i=0;i<n;i++){
        if(nums[i]!=target){
           continue;
        }
       else if(first==-1){
            first=i;
            last=i;
        }
        else{
         last=i;
        }   
     }
        if(first!=-1){
            return {first,last};
        }
        return {-1,-1};
    }
};