class Solution {
public:
    string makeFancyString(string s) {
        int count = 1;
        string ans = "";
        char start = s[0];
        ans.push_back(s[0]);
        for(int i=1;i<s.size();i++){
            if(count == 2 && s[i]==start){
                continue;           
            }
            if(s[i]==start){
                count++;
                ans.push_back(s[i]);
                // cout<<"second if "<<ans<<"count "<<count<<endl;
                continue;
            }
            start = s[i];
            count = 1;
            ans.push_back(s[i]);
            // cout<<"out "<<ans<<" count "<<count<<endl;
        }
        return ans;
    }
};