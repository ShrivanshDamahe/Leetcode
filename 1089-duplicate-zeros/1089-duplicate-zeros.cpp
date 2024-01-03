class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int idx = arr.size();
        bool flag = 0;

        for (int i = 0; i < idx; i++){
            if (arr[i] == 0)
                idx--;

            if (i == idx)
                flag = 1;
        }

        if (!flag)
            idx--;

        for (int i = arr.size() - 1; i >= 0; i--){
            if (flag){
                arr[i] = 0;
                idx--;
                flag = 0;
            }
            else if (arr[idx] != 0){
                arr[i] = arr[idx];
                idx--;
            }
            else {
                arr[i] = arr[idx];
                i--;
                arr[i] = arr[idx];
                idx--;
            }
        }
    }
    // Time complexity - O(n)
    // Space complexity - O(1)
};