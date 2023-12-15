class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        vector<string> list(paths.size());
        string result;

        for (int i = 0; i < paths.size(); i++)
            list[i] = paths[i][0];

        for (int i = 0; i < paths.size(); i++){
            bool found = 0;
            for (int j = 0; j < list.size(); j++){
                if (paths[i][1] == list[j]){
                    found = 1;
                    break;
                }
            }

            if (found != 1){
                result = paths[i][1];
                break;
            }
        }

        return result;
    }
    // Time complexity - O(path.size() ^ 2)
};