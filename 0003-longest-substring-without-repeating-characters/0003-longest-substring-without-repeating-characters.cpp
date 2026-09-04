class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s == "") return 0;
        int left = 0;
        int right = 0;
        unordered_map<char, int> m;
        int maxLength = INT32_MIN;
        while(right < s.length()){
            if(m.find(s[right]) != m.end() && m[s[right]] >= left) {
                left = (m[s[right]] + 1);
            }
            m[s[right]] = right;
            maxLength = max(maxLength, (right-left+1));
            right++;
        }
        return maxLength;
    }
};