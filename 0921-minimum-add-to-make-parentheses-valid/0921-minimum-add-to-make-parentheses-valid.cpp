class Solution {
public:
    int minAddToMakeValid(string s) {
        int op=0, add = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                op++;
                continue;
            }
            if(s[i]==')' && op>0){
                op--;
                continue;
            }
            else add++;
        }
        return add + op;
    }
};