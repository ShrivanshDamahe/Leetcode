class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int faces = 0;
        // faces = grid.size() + grid[0].size();
        
        for (int i = 0; i < grid.size(); i++){
            int max1 = INT_MIN, max2 = INT_MIN;;
            for (int j = 0; j < grid.size(); j++){
                max1 = max(max1, grid[i][j]);
                max2 = max(max2, grid[j][i]);
                if (grid[i][j] != 0)
                    faces++;
            }
            faces += max1 + max2;
        }
        
        return faces;
    }
    // Time complexity = O(n^2)
};