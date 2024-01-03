class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0;
        int temp1 = 0;

        for (int i = 0; i < bank.size(); i++){
            int temp2 = 0;
            bool flag = false;

            for (int j = 0; j < bank[i].length(); j++){
                if (bank[i][j] == '1'){
                    temp2++;
                    flag = true;
                }
            }

            if (flag || temp1 == 0){
                ans += temp1 * temp2;
                temp1 = temp2;
            }
        }

        return ans;
    }
    // Time complexity - O(m * n)
};