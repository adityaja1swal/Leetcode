class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int universal =1;
        int maxi = INT_MIN;
        int product =1;
        for(int i =0; i<nums.size(); i++){
            universal *= nums[i];
            maxi = max(universal, maxi);
            if(universal == 0) {
                universal =1;
            }
        }
        universal =1;
        for(int i =nums.size()-1; i>=0; i--){
            universal *= nums[i];
            maxi = max(universal, maxi);
            if(universal == 0) {
                universal =1;
            }
        }
        return maxi;
    }
};