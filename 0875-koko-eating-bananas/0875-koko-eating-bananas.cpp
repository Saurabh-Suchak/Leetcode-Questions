class Solution {
public:
    int minEatingSpeed(vector<int>& nums, int h) {
        
    
        
        sort(nums.begin(),nums.end());
        int l=1;
        int r=nums[nums.size()-1];
        int k;
        long long int temp=0;
        int ans=-1;
        
        while(l<=r){
            k=l+ (r-l)/2;
            for(int i=0;i<nums.size();i++){
                if(nums[i]%k==0){
                    temp=temp+nums[i]/k;
                }
                else {
                    temp=temp+nums[i]/k + 1;
                }
            }
            cout<<"temp 1 is "<< temp <<" for mid"<<k<<endl;
            if(temp<=h){
                cout<<"k is "<<k<<endl;
                ans=k;
                r=k-1;
                temp=0;
            }
            else {
                l=k+1;
                temp=0;
            }
            
        }return ans;
    }
};