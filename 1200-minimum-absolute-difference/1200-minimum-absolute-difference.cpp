class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> output;
        int temp = INT_MAX;

        sort(arr.begin(), arr.end());

        for (int i = 0; i < arr.size() - 1; i++){
            if (temp > arr[i + 1] - arr[i]){
                output.clear();
                output.push_back({arr[i], arr[i + 1]});
                temp = arr[i + 1] - arr[i];
            }
            else if (temp == arr[i + 1] - arr[i])
                output.push_back({arr[i], arr[i + 1]});
        }

        return output;
    }
    // Time complexity - O(n * log n)
};