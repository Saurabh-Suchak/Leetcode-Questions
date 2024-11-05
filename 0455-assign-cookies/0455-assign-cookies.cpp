class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if(s.size()==0){
            return 0;
        }
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int count = 0;
        int n = s.size()-1;
        for(int i= g.size()-1;i>=0;i--){
            if(n>=0 && g[i]<=s[n]){
                count++;
                n--;
                continue;
                
            }
            if(n<0){
                break;
            }
            
            
        }
        return count;
    }
};