class Solution {
public:
    string reverseWords(string s) {
        string ans;string temp = "";
        int i = s.size()-1;
        while(s[i]==' '){
            i--;
        }
        int t = 0;
        while(s[t]==' '){
            t++;
        }
        int last = 0;
        for(i;i>=t;i--){
            
            if(last == 1 && s[i]==' '){
                continue;
            }
            if(s[i]!=' '){
                last = 0;
            }
           
            if(s[i]==' '){
                last =1;
                
                 reverse(temp.begin(),temp.end());
            
                ans=ans+temp+" ";
                temp="";continue;
               
            }
            
            temp = temp + s[i];
        }
        reverse(temp.begin(),temp.end());
                ans=ans+temp;
                return ans;
            }
};