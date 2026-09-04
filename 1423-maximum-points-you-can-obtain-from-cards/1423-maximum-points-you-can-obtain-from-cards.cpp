class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int leftSum = 0;
        int rightSum = 0;
        int i = 0;
        while(i<k){
            leftSum += cardPoints[i];
            i++;
        }
        int maxPoint = leftSum;
        int j = cardPoints.size() -1;
        while (i-- != 0){
            leftSum -= cardPoints[i];
            rightSum += cardPoints[j--];
            maxPoint = max((leftSum + rightSum) , maxPoint);
        }
        return maxPoint;
    }
};