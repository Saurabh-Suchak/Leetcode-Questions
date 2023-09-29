class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int t=-1;
        if(nums.size()==1){
            return true;
        }
        
        int last=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==last){
                last=nums[i];
                continue;
            }
            if(nums[i]>last){
                if(t==0){
                    return false;
                }
                last=nums[i];
                t=1;
                continue;
            }
            if(nums[i]<last){
                last=nums[i];
                if(t==1){
                    return false;
                }
                t=0;
            }
        }
        return true;
    }
};