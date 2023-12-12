class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<char>> game(3, vector<char> (3, '?'));

        for (int i = 0; i < moves.size(); i++){
            if (i % 2 == 0)
                game[moves[i][0]][moves[i][1]] = 'x';
            else
                game[moves[i][0]][moves[i][1]] = 'o';
        }

        bool A = checkGame(game, 'x');
        bool B = checkGame(game, 'o');

        
        if (A)
            return "A";
        else if (B)
            return "B";
        else if (!A && !B && moves.size() == 9)
            return "Draw";
        return "Pending";
    }

private:
    bool checkGame(vector<vector<char>> game, char c) {
        for (int i = 0; i < 3; i++){
            if (game[0][i] == c && game[1][i] == c && game[2][i] == c){
                cout << "vertical";
                return true;
            }
            else if (game[i][0] == c && game[i][1] == c && game[i][2] == c){
                cout << "horizontal";
                return true;
            }
        }

        if (game[1][1] == c && ((game[0][0] == c && game[2][2] == c) || (game[0][2] == c && game[2][0] == c))){
            cout << "diagonal";
            return true;
        }
        return false;
    }
    // Time complexity - O(1)
};