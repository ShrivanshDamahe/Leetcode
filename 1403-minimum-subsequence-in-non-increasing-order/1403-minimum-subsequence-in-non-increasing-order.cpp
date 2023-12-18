class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int> output;
        int total = 0;

        sort(nums.begin(), nums.end(), greater<int>());
        for (int i = 0; i < nums.size(); i++){
            total += nums[i];
        }

        int temp = 0;
        for (int i = 0; i < nums.size(); i++){
            output.push_back(nums[i]);
            temp += nums[i];

            if (temp > (total - temp))
                break;
        }

        return output;
    }
    // Time complexity - O(n * log n)
};