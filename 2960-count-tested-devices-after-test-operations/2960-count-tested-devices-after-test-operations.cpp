class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int ans = 1;

        for (int i = 0; i < batteryPercentages.size(); i++){
            if (batteryPercentages[i] == 0 || batteryPercentages[i] < ans)
                continue;
            else
                ans++;
        }

        return ans - 1;
    }
    // Time complexity - O(n)
};