class Solution {
public:
    
    // substr(pos,length) //erase (pos,length)
    int minimumLength(string s) {
       
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int count  =0;
        
        for(auto &i:mp){
            if(i.second%2==0){
                count = count + 2; 
                continue;
            }
            count = count + 1;
        }
        return count;
        
    }
};