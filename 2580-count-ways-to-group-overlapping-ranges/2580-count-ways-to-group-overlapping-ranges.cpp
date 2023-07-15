class Solution {
public:
    int countWays(vector<vector<int>>& v) {
        // sort(ranges.begin(),ranges.end());
        // vector<vector<int>> answer;
        // for(auto i:ranges){
        //     if(answer.size()==0 || answer.back()[1]<i[0]){
        //         answer.push_back(i);
        //     }
        //     else{
        //         answer.back()[1]=max(i[1],answer.back()[1]);
        //     }
        // }
        // int n=answer.size();
        // long long  count=1;
        // for(int i=1;i<=n;i++){
        //     count=(count*2)%(1e9+7);
        // }return count;
        long long i=0,n=v.size(),mod=1e9+7;
        sort(v.begin(),v.end());
        int mergesize=1; // size=1 because we started to iterate from i=1 i.e. second interval.
        long long ans=1; // distributing the first interval in 2 ways
        //int first = v[0][0];
        int second = -1;
        for(i=0;i<n;i++){
            if(v[i][0]<=second)second = max(second,v[i][1]);
            else{
                mergesize++;
                //first=v[i][0]; (incase,if u want to store the merged intervals)
                second=v[i][1];
                ans=(ans*2)%mod;  // distributing the current unoverlapped interval we got either in group 1 or in group 2.
            }
        }return ans;
    }
};