class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans;
        if(n==1){
            return {0};
        }
        int count=1;
        for(int i=0;i<n/2;i++){
            
            
            // count++;
            ans.push_back(count);
            ans.push_back(count*-1);
            count++;
        }
        if(n%2!=0){
            ans.push_back(0);
        }
        return ans;
    }
};