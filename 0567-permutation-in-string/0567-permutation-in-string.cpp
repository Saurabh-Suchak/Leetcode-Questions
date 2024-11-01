class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n= s1.size();
        if(s2.size()<s1.size()){
            return false;
        }
        vector<int>mp(26,0),np(26,0);
        for(int i=0;i<s1.size();i++){
            mp[s1[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            np[s2[i]-'a']++;
        }
        if(np==mp){
            return true;
        }
        for(int i=n;i<s2.size();i++){
            np[s2[i-n]-'a']--;
            np[s2[i]-'a']++;
            if(np==mp){
                return true;
            }
        }
        return false;
    }
};