class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int s= m-1;
//         int t = n-1;
//         int a = m+n-1;
//         while(t>=0){
//             if(s>=0 && nums1[s]>nums2[t] ){
//                 nums1[a]=nums1[s];
//                 s--;
//                 a--;
//                 continue;
//             }
//             nums1[a]=nums2[t];
//             t--;
//             a--;
            
//         }
        
       int t=  m+n-1;
        int r = n-1;
        int l = m-1;
        while(r>=0){
            if(l>=0 && nums1[l]>nums2[r]){
                nums1[t--]=nums1[l--];
                continue;
            }
            nums1[t--]=nums2[r--];
            
        }
        
        
        
    }
};