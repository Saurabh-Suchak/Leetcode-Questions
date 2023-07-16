class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int r=nums.size()-1;
        vector<int>ans;
        int l=0;
        while(r>l){
            if(nums[r]+nums[l]==target){
                
                ans.push_back(l+1);
                ans.push_back(r+1);
                return ans;
                
            }
            if(nums[r]+nums[l]>target){
                r--;
            }
            if(nums[r]+nums[l]<target){
                l++;
            }
        }
        return ans;
    }
};