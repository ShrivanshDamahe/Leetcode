class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> output(m, (vector<int> (n, 0)));
    
        for (int i = 0; i < indices.size(); i++){
            for (int j = 0; j < m; j++)
                output[j][indices[i][1]]++;
            
            for (int j = 0; j < n; j++)
                output[indices[i][0]][j]++;
        }

        int count = 0;
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                if (output[i][j] & 1)
                    count++;
            }
        }

        return count;
    }
    // Time complexity - O(m * n)
};