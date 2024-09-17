class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        string word = "";
        vector<string>ans;
        unordered_map<string,int>mp,mp2;
        
        for(int i=0;i<s1.size();i++){
            if(s1[i]==' '){
                mp[word]++;
                cout<<"word is "<<word<<endl;
                word = "";
                continue;
            }
            word=word + s1[i];
            
            
        }
        mp[word]++;
        word = "";
        for(int i=0;i<s2.size();i++){
            if(s2[i]==' '){
                mp2[word]++;
                word = "";
                continue;
            }
            word=word + s2[i];
            
        }
        mp2[word]++;
        for(auto it:mp){
            cout<<"first "<<it.first<<"  "<<it.second<<endl;
            if(mp2[it.first] == 0 && mp[it.first]==1){
                ans.push_back(it.first);
            }
        }
        for(auto it:mp2){
            if(mp[it.first] == 0 && mp2[it.first]==1){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};