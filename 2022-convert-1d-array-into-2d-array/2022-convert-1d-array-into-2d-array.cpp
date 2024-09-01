class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if(original.size()> (m*n) || original.size()<(m*n)){
            return {};
        }
        vector<int>temp;
        vector<vector<int>>ans;
        for(int i=0;i<original.size();i++){
            temp.push_back(original[i]);
            if(temp.size()==n){
                ans.push_back(temp);
                temp.clear();
            }
        }return ans;
    }
};