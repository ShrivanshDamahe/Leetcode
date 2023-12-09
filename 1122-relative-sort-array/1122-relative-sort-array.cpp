class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int high = *max_element(arr1.begin(), arr1.end()) + 1;
        vector<int> frequency(high, 0);
        for (int i = 0; i < arr1.size(); i++){
            ++frequency[arr1[i]];
        }

        int itr = 0;
        int i = 0;
        while (i < arr2.size()){
            do {
                arr1[itr] = arr2[i];
                itr++;
                frequency[arr2[i]]--;
            } while (frequency[arr2[i]] != 0);
            i++;
        }

        for (i = 0; i < frequency.size(); i++){
            if (frequency[i] != 0){
                do {
                    arr1[itr] = i;
                    itr++;
                    frequency[i]--;
                } while (frequency[i] != 0);
            }
        }
        return arr1;
    }
    // Time complexity - O(n + m)

    // where:
    // n - size of arr1
    // m - size of arr2
};