class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> freq;
        for (int i = 0; i < points.size(); i++)
            freq.push_back(points[i][0]);

        sort(freq.begin(), freq.end());
        int temp = INT_MIN;
        for (int i = 0; i < points.size() - 1; i++){
            temp = max(temp, freq[i + 1] - freq[i]);
        }

        return temp;
    }
    // Time complexity - O(n * log n)
};