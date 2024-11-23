class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0;
        string ans = "";
        while(i<word1.size() && j<word2.size()){
            ans = ans+word1[i++];
            ans=ans+word2[j++];
        }
        for(int temp=j;temp<word2.size();temp++){
            ans=ans+word2[temp];
        }
        for(int temp=i;temp<word1.size();temp++){
            ans=ans+word1[temp];
        }
        return ans;
    }
};