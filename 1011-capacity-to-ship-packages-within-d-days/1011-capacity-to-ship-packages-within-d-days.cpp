class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
    
        int l = *max_element(weights.begin(), weights.end());
        // int l =1;
        int r = accumulate(weights.begin(),weights.end(),0);
        int d =1;
        
        while(l<r){
            int mid = (l+r)/2;
            int sum = 0,d=1;
            for(int i=0;i<weights.size();i++){
                
                if(sum+weights[i] <= mid){
                     sum=sum+weights[i];
                }
                else {d++;sum=0;sum=sum+weights[i];}
               
            }
            if(d<=days){
                r = mid;
            }
            else l=mid+1;
        }return l;
        
    }
};