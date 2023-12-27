class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans = 0, i;

        for (i = 0; i < colors.length() - 1; i++){
            if (colors[i] == colors[i + 1]){
                int temp = neededTime[i], sum = neededTime[i];

                while (colors[i] == colors[i + 1] && i < colors.length() - 1){
                    sum += neededTime[i + 1];
                    temp = max(temp, neededTime[i + 1]);
                    i++;
                }
                
                ans += sum - temp;
                temp = INT_MIN;
            }
        }

        return ans;
    }
    // Time complexity - O(n)
};