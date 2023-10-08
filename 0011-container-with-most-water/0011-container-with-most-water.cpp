class Solution {
public:
    int maxArea(vector<int>& height) {
        int r=height.size()-1;
        int l=0;
        int ans=INT_MIN;
        int area=0;
        while(r>l){
            area=(r-l)*min(height[r],height[l]);
            ans=max(area,ans);
            if(height[r]>height[l]){
                l++;
                continue;
            }
            r--;
        }
        return ans;
    }
};