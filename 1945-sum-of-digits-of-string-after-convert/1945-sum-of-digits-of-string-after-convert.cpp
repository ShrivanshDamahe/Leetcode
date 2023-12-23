class Solution {
public:
    int getLucky(string s, int k) {
        int ans = 0;
        for (int i = 0; i < s.length(); i++){
            int temp = s[i] - 'a' + 1;

            if (temp > 9){
                ans += temp % 10;
                ans += temp / 10;
            }
            else 
                ans += temp;
        }
        k--;

        while (k != 0){
            int curr = 0;
            while (ans != 0){
                curr += ans % 10;
                ans /= 10;
            }
            ans = curr;
            k--;
        }

        return ans;
    }
};