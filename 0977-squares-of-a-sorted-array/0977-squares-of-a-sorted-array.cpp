class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;
        int r=nums.size()-1;
        
        int l=0;
        while(r>=l){
            if(abs(nums[r])>abs(nums[l])){
                ans.push_back(nums[r]*nums[r]);
                r--;
                continue;
            }
            ans.push_back(nums[l]*nums[l]);
            l++;
            continue;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};