// class Solution {
// public:
//     string reverseWords(string s) {
//         string ans;string temp ="";
//         for(int i=s.size()-1;i>=0;i--){
//             if(s[i]==' '){
//                 while(s[i]==' '){
//                     i--;
//                 }
//                 i++;
//                 reverse(temp.begin(),temp.end());
//                 ans= ans + temp + " ";
//                 temp = "";
//                 continue;
//             }
            
//             temp=temp+s[i];
//         }
//         reverse(temp.begin(),temp.end());
//         ans=ans+temp;
//         return ans;
//     }
// };

class Solution {
public:
    string reverseWords(string s) {
        string ans;
        string temp = "";
        int i = s.size() - 1;

        while (i >= 0) {
            // Skip trailing spaces
            while (i >= 0 && s[i] == ' ') {
                i--;
            }
            
            // Collect a word
            temp = "";
            while (i >= 0 && s[i] != ' ') {
                temp = s[i] + temp; // Reverse while collecting
                i--;
            }
            
            // Append the word if it's not empty
            if (!temp.empty()) {
                if (!ans.empty()) {
                    ans += " ";
                }
                ans += temp;
            }
        }

        return ans;
    }
};
