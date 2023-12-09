class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if (arr.size() >= 3 && arr[0] < arr[1]){
            int i = 0;
            while (arr[i] < arr[i + 1]){
                i++;
            }

            if (arr[i] == arr[i + 1])
                return false;
            
            while (arr[i] > arr[i + 1]){
                if (i < (arr.size() - 2))
                    i++;
                else 
                    break;
            }
            
            if (i == (arr.size() - 2) && arr[i] > arr[i + 1])
                return true;
        }

        return false;
    }
    // Time complexity - O(n)
};