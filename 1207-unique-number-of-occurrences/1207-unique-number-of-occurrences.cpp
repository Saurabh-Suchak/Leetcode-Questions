class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        vector<pair<int,int>>p;
        for(auto it:mp){
            p.push_back({it.second,it.first});
        }
        sort(p.begin(),p.end());
        for(int i=0;i<p.size()-1;i++){
            if(p[i].first==p[i+1].first){
                return false;
            }
        }
        return true;
    }
};