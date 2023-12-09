class Solution {
public:
    int arraySign(vector<int>& nums) {
        int product = 1;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] == 0)
                return 0;
            else if (nums[i] > 0)
                product *= 1;
            else
                product *= -1;
        }

        return product;
    }
    // Time complexity - O(n)
};