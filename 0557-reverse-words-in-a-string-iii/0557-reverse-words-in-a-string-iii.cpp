class Solution {
public:
    string reverseWords(string s) {
        int left = 0;
        for (int i = 0; i < s.length(); i++){
            if (s[i + 1] == ' ' || i == s.length() - 1){
                int right = i;

                while (left < right){
                    swap(s[left], s[right]);
                    left++;
                    right--;
                }

                left = i + 2;
            }
        }

        return s;
    }
    // Time complexity - O(n)
    // Space complexity - O(1)
};