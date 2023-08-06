class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int rem=100-purchaseAmount;
        if(purchaseAmount==0){
            return 100;
        }
        if(purchaseAmount==100){
            return 0;
        }
        if(purchaseAmount%5==0 && purchaseAmount%10!=0){
            rem=rem-5;
        }
        int last=rem%10;
        if(last<5){
            rem=rem/10;
            int num=rem%10;
            return num*10;
        }
        if(last>5){
            rem=rem/10;
            int num=rem%10;
            return num*10 + 10;
        }
        return 0;
    }
};