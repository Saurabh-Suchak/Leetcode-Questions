class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l=0,r = nums.size()-1;
        while(l<r){
            if(nums[l]+nums[r]==target){
                return {l+1,r+1};
            }
            if(nums[l]+nums[r]>target){
                r--;
            }
            else l++;
        }
        return {-1,-1};
    }
};