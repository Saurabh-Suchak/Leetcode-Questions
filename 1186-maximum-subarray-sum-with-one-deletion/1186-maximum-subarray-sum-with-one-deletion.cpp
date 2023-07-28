class Solution {
public:
    
    int kadane(vector<int>& arr){
        int ans=INT_MIN;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum<0){
                sum=0;
            }
            ans=max(ans,sum);
            
        }
        return ans;
    }
    int maximumSum(vector<int>& arr) {
         if(arr.size()==1){
            return arr[0];
        }
        int n=arr.size();
        vector<int>pre(n,0),suff(n,0);
        pre[0]=max(0,arr[0]);
        suff[n-1]=max(0,arr[n-1]);
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+arr[i];
            if(pre[i]<0){
                pre[i]=0;
            }
            cout<<"pre at index "<<i<< "is "<<pre[i]<<endl;
        }
        
        for(int i=n-2;i>=0;i--){
            suff[i]=suff[i+1]+arr[i];
            if(suff[i]<0){
                suff[i]=0;
            }
            cout<<"suff at index "<<i<< "is "<<suff[i]<<endl;
        }
        
        int ans=kadane(arr);
        cout<<"kadane is "<<ans<<endl;
        if(ans==0){
            cout<<"enter";
            int mx=INT_MIN;
            for(int i=0;i<arr.size();i++){
                if(arr[i]>mx){
                    mx=arr[i];
                }
            }
            return mx;
        }
        // int fans=INT_MIN;
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i]<0){
                
                 ans=max(pre[i-1]+suff[i+1],ans);
                cout<<"at pos "<<i<< "ans is "<<ans<<endl;
            }
           
        }
        return ans;
        
        
    }
};