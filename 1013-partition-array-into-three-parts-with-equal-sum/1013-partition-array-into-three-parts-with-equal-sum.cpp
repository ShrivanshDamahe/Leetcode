class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int total = 0;

        for (int i = 0; i < arr.size(); i++)
            total += arr[i];

        if (total % 3 != 0)
            return 0;
        
        int temp = 0, count = 0;
        for (int i = 0; i < arr.size() - 1; i++){
            temp += arr[i];

            if (temp == total / 3){
                temp = 0;
                count++;
            }
            if (count == 2)
                return 1;
        }

        return 0;
    }
    // Time complexity - O(n)
};