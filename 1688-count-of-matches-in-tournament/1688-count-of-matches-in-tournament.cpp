class Solution {
public:
    int numberOfMatches(int n) {
        int match=0;
        while(n!=1){
            if(n==1){
                break;
            }
            if(n%2==0){
                match=match+(n/2);
                n=n/2;
                continue;
            }
            if(n%2!=0){
                match=match+(n-1)/2;
                n=1+ (n-1)/2;
                continue;
                
            }
        }return match;
    }
};