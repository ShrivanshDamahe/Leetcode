class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int rows = img.size();
        int cols = img[0].size();
        vector<vector<int>> output(rows, vector<int>(cols, 0));

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                int sum = 0;
                int count = 0;

                for (int x = max(0, i - 1); x <= min(rows - 1, i + 1); ++x) {
                    for (int y = max(0, j - 1); y <= min(cols - 1, j + 1); ++y) {
                        sum += img[x][y];
                        count++;
                    }
                }

                output[i][j] = sum / count;
            }
        }

        return output;
    }
    // Time complexity - O(m * n)
};