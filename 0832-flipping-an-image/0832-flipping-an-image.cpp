class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (auto &row : image){
            int j = row.size() - 1;
            for (int i = 0; i <= j; i++){
                int temp = !row[i] ;
                row[i] = !row[j];
                row[j] = temp;
                
                j--;
            }
        }

        return image;
    }
    // Time complexity - O(m * n)
    // Space complexity - O(1)
};