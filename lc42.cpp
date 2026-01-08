class Solution {
public:
    int trap(vector<int>& height) {
        int maxHL = height[0];
        int maxHR = INT_MIN;

        int i = 0;
        int j = height.size() - 1;
        // lets check max height for left side
        while (i < j) {

            maxHR = max(height[j], maxHR);
            j--;
        }
        int ttlWater = 0;

        for (int i = 0; i < height.size()-1; i++) {

            if (maxHR == height[i]) {
                maxHR = 0;
                int k=height.size()-1;
                while (i < k) {

                    maxHR = max(maxHR, height[k]);

                    k--;
                }
            }
            int waterOnsingleBlock = min(maxHL, maxHR) - height[i];
            if (waterOnsingleBlock <= 0)
                ttlWater += 0;
            if (waterOnsingleBlock > 0)
                ttlWater += waterOnsingleBlock;
            if (maxHL < height[i]) {
                maxHL = height[i];
            }
        }

        return ttlWater;
    }
};
