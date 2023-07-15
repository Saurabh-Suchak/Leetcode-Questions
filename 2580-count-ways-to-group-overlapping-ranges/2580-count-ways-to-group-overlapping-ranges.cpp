class Solution {
public:
    int countWays(vector<vector<int>>& ranges) {
        sort(ranges.begin(),ranges.end());
        long long int mod=1e9+7;
        vector<vector<int>> answer;
        for(auto i:ranges){
            if(answer.size()==0 || answer.back()[1]<i[0]){
                answer.push_back(i);
            }
            else{
                answer.back()[1]=max(i[1],answer.back()[1]);
            }
        }
        int n=answer.size();
        long long  count=1;
        for(long long int i=1;i<=n;i++){
            count=(count*2)%(mod);
        }return count;
        
    }
};