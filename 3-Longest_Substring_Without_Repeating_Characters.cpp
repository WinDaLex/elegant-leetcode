class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int, int> m;
        int res = 0, last = -1;
        for (int i = 0; i < s.length(); i++) {
            if (m.count(s[i])) last = max(last, m[s[i]]);
            m[s[i]] = i;
            res = max(res, i - last);
        }
        return res;
    }
};
