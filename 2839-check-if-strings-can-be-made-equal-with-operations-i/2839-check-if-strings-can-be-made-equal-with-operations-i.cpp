class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        int i=0;
        int j=1;
        
        if(s1==s2){
            return true;
        }
        swap(s1[i],s1[i+2]);
        if(s1==s2){
            return true;
        }
        swap(s1[i],s1[i+2]);
        swap(s1[j],s1[j+2]);
        if(s1==s2){
            return true;
        }
        swap(s1[j],s1[j+2]);
        
        swap(s1[i],s1[i+2]);
        swap(s1[j+2],s1[j]);
        if(s1==s2){
            return true;
        }
        return false;
    }
};