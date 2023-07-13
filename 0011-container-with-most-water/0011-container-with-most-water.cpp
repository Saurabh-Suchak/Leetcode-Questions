class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int ans=INT_MIN;
        int area;
        while(r>l){
            area=(r-l)*min(height[l],height[r]);
            ans=max(area,ans);
            if(height[l]>height[r]){
                r--;
                continue;
            }
            l++;
        }return ans;
    }
};