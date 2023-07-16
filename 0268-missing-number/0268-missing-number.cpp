class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int a=0;
        int sum=nums.size()*(nums.size()+1)/2;
        for(int i=0;i<nums.size();i++){
            a=a+nums[i];
        }
        return sum-a;
    }
};