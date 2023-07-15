class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        
        for(auto i:intervals){
            if(ans.size()==0 || i[0]>ans.back()[1]){
                ans.push_back(i);
            }
            if(i[0]<=ans.back()[1]){
                ans.back()[1]=max(i[1],ans.back()[1]);
            }
            
            }
        return ans;
        
            
        
    }
};