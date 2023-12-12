class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        vector<int> cars(100, 0);

        for (int i = 0; i < nums.size(); i++){
            for (int j = nums[i][0]; j <= nums[i][1]; j++){
                cars[j - 1] = 1;
            }
        }

        int result = 0;
        for (int i = 0; i < cars.size(); i++){
            if (cars[i] == 1)
                result++;
        }

        return result;
    }
    // Time complexity - O(n^2) - worst case
};