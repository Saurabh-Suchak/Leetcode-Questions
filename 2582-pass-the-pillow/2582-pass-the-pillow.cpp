class Solution {
public:
    int passThePillow(int n, int time) {
        int s=1; int dir=1;
        while(time--){
            if(s==1){
                dir=1;
                s++;
                continue;
            }
            if(s==n){
                dir =0;
                s--;
                continue;
            }
            if(dir==1){
                s++;
                continue;
            }
            if(dir==0){
                s--;
                continue;
            }
            
            
            
        }return s;
    }
};