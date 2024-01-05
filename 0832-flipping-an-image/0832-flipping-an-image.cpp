class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (auto &row : image){
            reverse(row.begin(), row.end());
            for (auto &element : row){
                if (element == 1)
                    element = 0;
                else 
                    element = 1;
            }
        }

        return image;
    }
    // Time complexity - O(n^2)
    // Space complexity - O(1)
};