class Solution {
public:
    void nextPermutation(vector<int>& nums) {
            // for 1st elem from right side which satisfies arr[i-1]<arr[i]
        int i = nums.size() - 1;
        while (i > 0) {
            if (nums[i] > nums[i - 1]) break;
            i--;
        }

        if (i == 0) {
            reverse(nums.begin(), nums.end());
            return;
        }

        int j = i;
        int swapInd = i;
            //for  rightmost greater element
        while (j < nums.size()) {
            if (nums[j] > nums[i - 1]) {
                swapInd = j;   //
            }
            j++;
        }

        swap(nums[i - 1], nums[swapInd]);
        reverse(nums.begin() + i, nums.end());
    }
};
