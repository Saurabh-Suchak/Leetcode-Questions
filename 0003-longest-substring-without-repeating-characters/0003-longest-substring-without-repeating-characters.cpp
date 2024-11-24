
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 1) return 1; 
        int ans = 0;
        map<char,int>mp;
        int st = 0;
        int end = 0;
        while(end  < s.size()) {
            if(mp[s[end]] >= 1) {
                ans = max(ans, end - st);
                while(mp[s[end]] >= 1) {
                    mp[s[st]]--;
                    st++;
                }
                mp[s[end]] = 1;
            }
            else {
                mp[s[end]] += 1;
            }
            
            end++;
            
            
            
        }
        ans = max(ans, end - st);
//         for(int i=0;i<s.size();i++){
//             if(mp[s[i]]==1){
//                 end = i-1;
                
//                 ans = max(end - st + 1,ans);
//                 st = i;
//                 mp[s[i]]=1;
//             }
//             mp[s[i]]++;
//         }
        return ans;
    }
};