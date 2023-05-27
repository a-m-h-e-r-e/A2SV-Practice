class Solution {
public:
    string frequencySort(string s) {
        map<char, int> mp;
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }
        priority_queue<pair<int, char>> que;
        for (auto [a, b] : mp) {
            que.push({b, a});
        }
        string ans = "";
        while(que.size()) {
            for (int i = 0; i < que.top().first; i++) 
                ans += que.top().second;
            que.pop();
        }
        return ans;
    }
};
