class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans = {1};

        if (rowIndex == 0)
            return ans;

        while (rowIndex){
            vector<int> temp = ans;
            for (int i = 1; i < ans.size(); i++){
                ans[i] = temp[i - 1] + temp[i];
            }

            ans.push_back(1);
            rowIndex--;
        }

        return ans;
    }
    // Time complexity - O(n^2)
    // Space complexity - O(rowIndex)
};