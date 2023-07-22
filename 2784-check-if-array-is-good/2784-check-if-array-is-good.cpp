class Solution {
public:
    bool isGood(vector<int>& nums) {
        map<int,int>mp;
        sort(nums.begin(),nums.end());
        int n=nums[nums.size()-1];
        int j=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==j){
                j++;
                continue;
            }
            return false;
        }
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        for(auto it:mp){
            if(it.second==1 && it.first!=n){
                continue;
            }
            if(it.second!=1 && it.first!=n){
                return false;
            }
            if(it.first==n && it.second!=2){
                return false;
            }
        }return true;
        
    }
};