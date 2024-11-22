class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        map<int,int>mp;
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            pq.push({it.second,it.first});
        }
        for(int i=0;i<k;i++){
            auto it = pq.top();
         ans.push_back(it.second);
            pq.pop();
        }
        return ans;
    }
};