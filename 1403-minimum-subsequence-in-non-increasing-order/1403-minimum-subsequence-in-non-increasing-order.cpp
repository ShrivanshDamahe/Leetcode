class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int> output;
        int total = 0;
        for (int i = 0; i < nums.size() - 1; i++){
            for (int j = i + 1; j < nums.size(); j++){
                if (nums[i] < nums[j]){
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
            total += nums[i];
        }
        total += nums[nums.size() - 1];

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