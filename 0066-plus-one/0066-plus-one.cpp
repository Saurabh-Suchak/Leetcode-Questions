class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {
        int n=nums.size()-1;
        // vector<int>ans;
        // long long num=0;
        // for(int i=0;i<nums.size();i++){
        //      num+=nums[i]*pow(10,n);n--;
        // }
        // num++;
        // while(num>0){
        //     int push=num%10;
        //     num=num/10;
        //     ans.push_back(push);
        // }
        // reverse(ans.begin(),ans.end());
        // return ans;
        for(int i=n;i>=0;i--){
            if(nums[i]==9){
                nums[i]=0;
            }
            else {nums[i]++;return nums;}
        }
        // for(int i=0;i<nums.size();i++){
        //     cout<<nums[i];
        // }
        // cout<<nums[i];
        
        nums.push_back(0);
        nums[0]=1;
        return nums;
    }
};