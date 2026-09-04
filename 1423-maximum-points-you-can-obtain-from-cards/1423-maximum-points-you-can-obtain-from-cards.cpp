class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int leftSum = 0;
        int rightSum = 0;
        int maxPoint = INT32_MIN;
        int i = 0;
        while(i<k){
            leftSum += cardPoints[i];
            i++;
        }
        int j = cardPoints.size() -1;
        while (i != 0){
            maxPoint = max((leftSum + rightSum) , maxPoint);
            i--;
            leftSum -= cardPoints[i];
            rightSum += cardPoints[j];
            j--;
        }
        maxPoint = max((leftSum + rightSum) , maxPoint);
        return maxPoint;
    }
};