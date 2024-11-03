class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>cpy;
        int n= nums.size();
        for(int i=0;i<nums.size();i++){
            cpy.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            nums[(i+k)%n] = cpy[i];
        }
    }
};