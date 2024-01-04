class Solution {
public:
    int minOperations(vector<int>& nums) {
        int op=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        // for(auto it:mp){
        //     cout<<"map is "<<it.first<<" "<<it.second<<endl;
        // }
        for(auto& it:mp){
            while(1){
                if(it.second==0){
                    break;
                }
                cout<<" consider ing first element as "<<it.first<<endl;
                if(it.second-3 >=2 || it.second-3==0){
                    it.second=it.second-3;
                    cout<<" it.second is "<<it.second<<endl;
                    op++;
                    continue;
                }
                cout<<"tem pp "<<it.second<<endl;
                it.second=it.second-2;
                op++;
                cout<<"op i s  "<<op<<" for "<<it.second<<endl;
                if(it.second<0){
                    return -1;
                }
                if(it.second==0){
                    break;
                }
            }
        }
        return op;
    }
};