class Solution {
public:
    bool isHappy(int n) {
        if (n == 0 || n == 1)
            return true;
        
        vector<int> storage;
        int copy = n;

        while (n != 1){
            int sum = 0;
            while (n != 0){
                int temp = n % 10;
                sum += temp * temp;
                n /= 10;
            }
            
            for (int i = 0; i < storage.size(); i++){
                if (sum == storage[i])
                    return false;
            }
            storage.push_back(sum);
            n = sum;
        }

        return true;
    }
    // Time complexity - O()
};