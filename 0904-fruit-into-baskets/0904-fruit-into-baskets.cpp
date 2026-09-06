class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int left =0;
        int right =0;
        int maxLength =0;
        unordered_map<int, int> m;
        while(right < fruits.size()){
            if(m.find(fruits[right]) == m.end()){
                m[fruits[right]] = 1;
            } else {
                m[fruits[right]]++;
            }
            if(m.size() > 2){
                m[fruits[left]]--;
                if(m[fruits[left]] == 0){
                    m.erase(fruits[left]);
                }
                left++;
            } else {
                maxLength = max(maxLength, (right - left +1));
            }
            right++;
        }
        return maxLength;
    }
};