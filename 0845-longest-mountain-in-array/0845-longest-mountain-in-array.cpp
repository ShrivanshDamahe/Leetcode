class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int ans = 0;

        for (int i = 0; i < arr.size() - 1; ){
            int up = 1, down = 0;

            while (i < arr.size() - 1 && arr[i] < arr[i + 1]){
                up++;
                i++;
            }

            while (i < arr.size() - 1 && arr[i] > arr[i + 1]){
                down++;
                i++;
            }

            if (up > 1 && down > 0)
                ans = max(ans, up + down);

            while (i < arr.size() - 1 && arr[i] == arr[i + 1])
                i++;
        }

        return ans;
    }
    // Time complexity - O(n)
};