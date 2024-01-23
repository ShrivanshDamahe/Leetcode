class Solution {
private:
    void dfs(vector<string>& arr, int idx, int& result, string str) {
        if (norepeat(str))
            result = max(result, static_cast<int> (str.length()));

        if (!norepeat(str) || idx == arr.size())
            return;

        for (int i = idx; i < arr.size(); i++)
            dfs(arr, i + 1, result, str + arr[i]);
    }

    bool norepeat(string str) {
        unordered_set<char> box;

        for (char c: str){
            if (box.count(c) > 0)
                return false;

            box.insert(c);
        }

        return true;
    }

public:
    int maxLength(vector<string>& arr) {
        int result = 0;
        dfs(arr, 0, result, "");
        return result;
    }
};