class Solution {
public:
    string reformat(string s) {
        // cout << static_cast<int> ('a') << " " // 97;
        // cout << static_cast<int> ('z') << " " // 122;
        // cout << static_cast<int> ('0') << " " // 48;
        // cout << static_cast<int> ('9') << " " // 57;

        int alpha = 0, num = 0;
        string output = s;

        for (int i = 0; i < s.length(); i++){
            if (s[i] >= 48 && s[i] <= 57)
                num++;
            else
                alpha++;
        }

        if (!(num == alpha || num - alpha == 1 || alpha - num == 1))
            return "";

        int itr1 = 0, itr2 = 1;
        for (int i = 0; i < s.length(); i++){
            if (num >= alpha){
                if (s[i] >= 48 && s[i] <= 57){
                    output[itr1] = s[i];
                    itr1 += 2;
                }
                else {
                    output[itr2] = s[i];
                    itr2 += 2;
                }
            }
            else {
                if (s[i] >= 48 && s[i] <= 57){
                    output[itr2] = s[i];
                    itr2 += 2;
                }
                else {
                    output[itr1] = s[i];
                    itr1 += 2;
                }
            }
        }

        return output;
    }
    // Time complexity - O(n)
};