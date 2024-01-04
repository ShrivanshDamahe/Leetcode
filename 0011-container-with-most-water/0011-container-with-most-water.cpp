class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int s = 0, e = height.size() - 1;

        while (s < e){
            if (height[s] < height[e]){
                ans = max(ans, ((e - s) * height[s]));
                s++;
            }
            else {
                ans = max(ans, ((e - s) * height[e]));
                e--;
            }
        }

        return ans;
    }
    // Time complexity - O(n)
    // Space complexity - O(1)
};