class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> freq;
        int temp = 0;

        sort(arr.begin(), arr.end());

        for (int i = 1; i < arr.size(); i++){
            if(arr[temp] != arr[i]){
                freq.push_back(i - temp);
                temp = i;
            }
        }
        freq.push_back(arr.size() - temp);

        sort(freq.begin(), freq.end());

        for (int i = 0; i < freq.size() - 1; i++){
            if (freq[i] == freq[i + 1])
                return 0;
        }
        return 1;
    }
    // Time complexity - O(n * log n)
    // Spae complexity - O(n)
};