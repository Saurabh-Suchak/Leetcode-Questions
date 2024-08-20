class Solution {
public:
    string losingPlayer(int x, int y) {
        // required x 1 and y 4
        int win = 1; // 1 -> alice wins
        
        while(x>=1 && y>=4){
            x--;
            y=y-4;
            win = win*-1;
        }
        if(win==1){
            return "Bob";
        }
        return "Alice";
        
        
    }
};