class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;

        for (int i = left; i < (right + 1); i++){
            int temp = i;
            while (temp != 0){
                int unit = temp % 10;

                if ((unit == 0) || (i % unit != 0))
                    break;
                else if (temp / 10 == 0)
                    result.push_back(i);
                
                temp /= 10;
            }
        }
        
        return result;
    }
    // Time complexity - O(n)
};