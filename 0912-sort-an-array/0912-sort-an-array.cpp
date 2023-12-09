class Solution {
private:
    void Merge(vector<int> &arr, int low, int mid, int high){
        int n1 = mid - low + 1;
        int n2 = high - mid;

        int a[n1];
        for (int i = 0; i < n1; i++){
            a[i] = arr[low + i];
        }

        int b[n2];
        for (int i = 0; i < n2; i++){
            b[i] = arr[mid + 1 + i];
        }

        int itr1 = 0, itr2 = 0;
        for (int i = low; i <= high; i++){
            if ((itr1 == n1) || ((itr2 < n2) && (a[itr1] > b[itr2]))){
                arr[i] = b[itr2];
                itr2++;
            }
            else {
                arr[i] = a[itr1];
                itr1++;
            }
        }
    }

    void Mergesort(vector<int> &arr, int low, int high){
        if (low < high){
            int mid = (low + high) / 2;
            Mergesort(arr, low, mid);
            Mergesort(arr, mid + 1, high);

            Merge(arr, low, mid, high);
        }
    }

public:
    vector<int> sortArray(vector<int>& nums) {
        Mergesort(nums, 0, (nums.size() - 1));
        return nums;
    }
    // Time complexity - O(n*logn)
};