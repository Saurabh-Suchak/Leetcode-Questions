class Solution {
public:
    string reorganizeString(string s) {
        map<char, int> mp;
        int mx = 0;

        for (char c : s) {
            mp[c]++;
            mx = max(mx, mp[c]);
        }
        if (mx > (s.size() + 1) / 2) return "";

        priority_queue<pair<int, char>> pq;
        for (auto& it : mp) {
            pq.push({it.second, it.first});
        }

        string ans = "";
        pair<int, char> prev = {0, '#'}; 

        while (!pq.empty()) {
            auto curr = pq.top();
            pq.pop();

            ans += curr.second;
            curr.first--;
            if (prev.first > 0) {
                pq.push(prev);
            }

            prev = curr;
        }

        return ans;
    }
};
