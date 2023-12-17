class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        vector<int> freq(3, 0);

        for (int i = 0; i < bills.size(); i++){
            if (bills[i] == 5)
                freq[0]++;
            else if (bills[i] == 10){
                if (freq[0] >= 1){
                    freq[0]--;
                    freq[1]++;
                }
                else 
                    return 0;
            }
            else if (bills[i] == 20){
                if (freq[0] >= 1 && freq[1] >= 1){
                    freq[0]--;
                    freq[1]--;
                    freq[2]++;
                }
                else if (freq[0] >= 3){
                    freq[0] -= 3;
                    freq[2]++;
                }
                else 
                    return 0;
            }
        }

        return 1;
    }
    // Time complexity - O(n)
};