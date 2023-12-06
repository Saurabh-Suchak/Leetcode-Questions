class Solution {
public:
    int totalMoney(int n) {
        int start=1;
        int ans=0;
        int d=n/7;
        for(int i=1;i<=d;i++){
            ans=ans+start*7 + 21;
            start++;
            
        }
        
        d=n%7;
        if(n%7!=0){
            
        n=n%7;
        
            ans=ans+ start*d + (d-1)*(d)/2;
        }
        
        return ans;
        
    }
};