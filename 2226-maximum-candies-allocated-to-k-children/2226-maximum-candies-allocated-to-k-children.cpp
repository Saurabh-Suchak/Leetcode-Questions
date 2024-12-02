class Solution {
public:
    bool check(vector<int>& candies, long long k, int mid) {
    long long count = 0;
    for (int i = 0; i < candies.size(); i++) {
        count += candies[i] / mid;
        if (count >= k) return true; 
    }
    return false;
}

    int maximumCandies(vector<int>& candies, long long k) {
    int r = *max_element(candies.begin(), candies.end());
    int l = 1; 
    int ret = 0;

    while (l <= r) {
        
        int mid = l + (r - l) / 2;
        // if(mid == 0){
        //     return 0;
        // }

        if (!check(candies, k, mid)) {
            r=mid-1; 
        } else {
            ret = mid;
            l = mid+1;
        }
    }

    return ret;
}

};