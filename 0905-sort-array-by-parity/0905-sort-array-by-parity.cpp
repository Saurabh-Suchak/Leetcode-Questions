class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>ans(nums.size(),0);
        int l=0,r=nums.size()-1;
        int i=0;
        while(r>=l){
            if(nums[i]%2==0){
                ans[l]=nums[i];
                l++;
                i++;
                continue;
            }
            ans[r]=nums[i];
            r--;
            i++;
        }
        return ans;
    }
};