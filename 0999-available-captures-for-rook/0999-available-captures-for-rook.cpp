class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int row, col;
        int ans = 0;

        for (int i = 0; i < 8; i++){
            for (int j = 0; j < 8; j++){
                if (board[i][j] == 'R'){
                    row = i;
                    col = j;
                    break;
                }
            }
        }

        for (int i = row + 1; i < 8; i++){
            if (board[i][col] == 'B')
                break;
            else if (board[i][col] == 'p'){
                ans++;
                break;
            }
        }

        for (int i = row - 1; i >= 0; i--){
            if (board[i][col] == 'B')
                break;
            else if (board[i][col] == 'p'){
                ans++;
                break;
            }
        }

        for (int i = col + 1; i < 8; i++){
            if (board[row][i] == 'B')
                break;
            else if (board[row][i] == 'p'){
                ans++;
                break;
            }
        }

        for (int i = col - 1; i >= 0; i--){
            if (board[row][i] == 'B')
                break;
            else if (board[row][i] == 'p'){
                ans++;
                break;
            }
        }

        return ans;
    }
    // Time complexity - O(1)
    // Space complexity - O(1)
};