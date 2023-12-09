class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long sum = 0;
        while (nums.size() != 0){
            if (nums.size() >= 2){
                int temp1 = 0;
                int temp2 = nums[nums.size() - 1];
                while (temp2 != 0){
                    temp1++;
                    temp2 /= 10;
                }

                int multiplier = 1;
                for (int i = 0; i < temp1; i++){
                    multiplier *= 10;
                }

                sum += (static_cast<long long>(nums[0]) * multiplier) + nums[nums.size() - 1];
                nums.erase(nums.begin());
                nums.pop_back();
            }
            else {
                sum += static_cast<long long>(nums[0]);
                nums.erase(nums.begin());
            }
        }
        
        return sum;
    }
    // Time complexity - O(n * d)
    // where, n - number of elements in the vector nums
    //        d - digits in the last element of the vector
};