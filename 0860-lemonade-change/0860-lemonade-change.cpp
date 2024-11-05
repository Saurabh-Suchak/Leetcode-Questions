class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int f=0,t=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                f++;
                continue;
            }
            if(bills[i]==10 && f>0){
                t++;
                f--;
                continue;
               
            }
            if(bills[i]==10 && f==0){
                
               return false;
                break;
               
            }
            
             if(bills[i]==20){
                
               int ch = 15;
                if(t && f>=1){
                    ch = 0;
                    t--;
                    f--;
                    ch = 0;
                    continue;
                }
                if(f>=3){
                    f=f-3;
                    ch = 0;
                }
                if(ch>0){
                    return false;
                }
                 
                 
               
            }
        }
        return true;
    }
};