class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>pre,suff;
        int sum=0;
        pre.push_back(0);
        for(int i=1;i<nums.size();i++){
            sum=sum+nums[i-1];
            pre.push_back(sum);
            cout<<"pre "<<sum;
        }
        suff.push_back(0);
        sum=0;
        cout<<endl;
        for(int i=nums.size()-2;i>=0;i--){
            sum=sum+nums[i+1];
            suff.push_back(sum);
            cout<<" suff "<<sum;
        }
        for(int i=0;i<nums.size();i++){
            if(pre[i]==suff[nums.size()-i-1]){
                return i;
            }
        }return -1;
    
    }
};