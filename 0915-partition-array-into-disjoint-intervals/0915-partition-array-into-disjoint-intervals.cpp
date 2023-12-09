class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int idx;
        int temp = nums.size() - 1;
        int small = INT_MAX;

        while (temp >= 0){
            if (small >= nums[temp]){
                small = nums[temp];
                idx = temp;
            }
            temp--;
        }

        temp = idx;
        int big = INT_MIN;
        while (temp >= 0){
            big = max(big, nums[temp]);
            temp--;
        }

        cout << big << " " << idx;

        temp = idx;
        int bigger = big;
        while (temp < nums.size()){
            bigger = max(bigger, nums[temp]);
            if (nums[temp] < big){
                idx = temp;
                big = bigger;
            }
            temp++;
        }

        return (idx + 1);
    }
    // Time complexity - O(n)
};