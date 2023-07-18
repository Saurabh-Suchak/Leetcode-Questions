class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int sum=0;
        int lsum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
        int rsum=sum;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            rsum=rsum-nums[i];
            ans.push_back(abs(rsum-lsum));
            lsum=lsum+nums[i];
        }return ans;
    }
};