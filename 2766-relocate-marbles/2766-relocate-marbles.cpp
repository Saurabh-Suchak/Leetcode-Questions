class Solution {
public:
    vector<int> relocateMarbles(vector<int>& nums, vector<int>& moveFrom, vector<int>& moveTo) {
         map<int, int> marbles;
        for(auto &num:nums) marbles[num] = 1;
        
        for(int i = 0; i < moveFrom.size(); i++) {
            marbles[moveFrom[i]] = 0;
            marbles[moveTo[i]] = 1;
        }
        vector<int> ans;
        for(auto &it:marbles) {
            if(it.second) ans.push_back(it.first);
        }
        return ans;
    }
};