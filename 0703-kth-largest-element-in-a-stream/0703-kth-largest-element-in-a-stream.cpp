class KthLargest {
public:
    int k;
    vector<int> nums;

    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        this->nums = nums;

        sort(this->nums.begin(), this->nums.end(), greater<int>());
    }
    // Time complexity - O(n * log n)
    // Space complexity - O(n)
    
    int add(int val) {
        int temp;
        int i = 0;

        while (i < nums.size()){
            if (val > nums[i]){
                temp = nums[i];
                nums[i] = val;
                val = temp;
            }

            i++;
        }
        nums.push_back(val);

        return nums[k - 1];
    }
    // Time complexity - O(n)
    // Space complexity - O(1)
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */