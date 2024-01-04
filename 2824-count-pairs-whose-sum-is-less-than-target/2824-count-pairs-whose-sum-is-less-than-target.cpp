class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int ans = 0;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 1; i++){
            int j = i + 1;

            while (j < nums.size()){
                if (nums[i] + nums[j] < target){
                    ans++;
                    j++;
                } 
                else 
                    break;
            }
        }
        
        return ans;
    }
    // Time complexity - O(n * log n)
    // Space complexity - O(1)
};