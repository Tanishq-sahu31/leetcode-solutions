class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int minDiff = INT_MAX;
        int finalSum = 0;
        int n = nums.size();

        for (int i = 0; i < n - 2; i++) {

            int j = i + 1;
            int k = n - 1;

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                int diff = abs(sum - target);

                if (diff < minDiff) {
                    minDiff = diff;
                    finalSum = sum;
                }

                if (sum == target) {
                    return sum;  
                } 
                else if (sum > target) {
                    k--;
                } 
                else {
                    j++;
                }
            }
        }
        return finalSum;
    }
};
