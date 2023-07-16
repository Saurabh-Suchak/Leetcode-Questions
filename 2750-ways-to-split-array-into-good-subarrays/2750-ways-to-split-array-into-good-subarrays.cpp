class Solution {
public:
    int numberOfGoodSubarraySplits(vector<int>& nums) {
    long long ans = 1, count  = 0,m=1e9 + 7;
    int i = 0;
    while(i < nums.size() && nums[i] == 0) i++;
    if(i >= nums.size() ) return 0;
    while(i < nums.size()){
        if(nums[i] == 1){  ans = (ans * (count +1 ))%m;  count = 0; }
        else count++;
        i++;
    }
    return ans;
    }
};