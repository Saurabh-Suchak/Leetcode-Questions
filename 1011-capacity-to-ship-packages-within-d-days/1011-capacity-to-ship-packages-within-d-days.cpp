class Solution {
public:
    // boolesn isPossible()
    int shipWithinDays(vector<int>& weights, int days) {
    
        int l = *max_element(weights.begin(), weights.end()); // should have capacity to carry the maxium weight
        // int l =1;  will not work 
        int r = accumulate(weights.begin(),weights.end(),0);
        int d =1;  
        int ans = 0;// cannot have d=0, minimum possible value is 1
        
        while(l<=r){
            int mid = (l+r)/2;
            int sum = 0,d=1;
            for(int i=0;i<weights.size();i++){
                
                if(sum+weights[i] <= mid){
                     sum=sum+weights[i];
                }
                else {d++;sum=0;sum=sum+weights[i];} // adding weights[i] to sum here else this weight will be missed as it will not be included in other iteration/loop
               
            }
            if(d<=days){
                // ans = mid;
                r = mid - 1; // do r = mid as need to find min possible weight, so r= mid is possibility
            }
            else l=mid+1;
        }return l;
        
    }
    
    
};