class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>left(height.size(),0), right(height.size(),0);
        int l = 0,ans  =0;
        for(int i=0;i<height.size();i++){
            left[i]=max(l,height[i]);
            l=left[i];
        }
        int r =0;
         for(int i=height.size()-1;i>=0;i--){
            right[i]=max(r,height[i]);
            r=right[i];
             // cout<<right[i]<<endl;
        }
        for(int i=0;i<height.size();i++){
            ans+= min(right[i],left[i])-height[i];
        }
        return ans;
    }
};