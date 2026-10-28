class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() == t.length()){
            int count[26];
            for(int i =0; i<s.length(); i++){
                count[s[i]-'a']++;
            }
            for(int i =0; i<t.length(); i++){
                if(count[t[i]-'a'] == 0) return false;
                else count[t[i]-'a']--;
            }
        } else {
            return false;
        }
        return true;
    }
};