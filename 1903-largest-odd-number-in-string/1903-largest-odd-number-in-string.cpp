class Solution {
public:
    string largestOddNumber(string num) {
        string ans = "";
        long long int ind = -1;
        for(long long int i=num.size()-1;i>=0;i--){
            if((num[i]-'0')%2 != 0){
                ind = i;
                break;
            }
        }
        if(ind == -1){
            return "";
        }
        
        return num.substr(0,ind+1);
    }
};