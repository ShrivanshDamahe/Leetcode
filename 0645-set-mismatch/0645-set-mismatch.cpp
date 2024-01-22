class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> copy(nums.size(), 0);

        for (int i = 0; i < nums.size(); i++)
            copy[nums[i] - 1]++;

        int num1, num2;
        for (int i = 0; i < copy.size(); i++){
            if (copy[i] == 2)
                num1 = i + 1;

            if (copy[i] == 0)
                num2 = i + 1;
        }

        return {num1, num2};
    }
    // Time complexity - O(n)
    // Space complexity - O(n)
};