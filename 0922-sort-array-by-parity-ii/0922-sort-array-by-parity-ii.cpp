class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int even=0;
        int odd=1;
        while(even<nums.size() && odd<nums.size()){
            if(nums[even]%2==0){
                even=even+2;
            }
            if(nums[odd]%2!=0){
                odd=odd+2;
            }
            else if(nums[even]%2!=0 && nums[odd]%2==0){
                swap(nums[even],nums[odd]);
                even=even+2;
                odd=odd+2;
            }
        }return nums;
    }
};