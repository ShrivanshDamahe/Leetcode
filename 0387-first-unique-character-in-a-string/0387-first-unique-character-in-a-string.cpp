class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> box;

        for (char ch : s)
            box[ch]++;

        for (int i = 0; i < s.length(); i++){
            if (box[s[i]] == 1)
                return i;
        }

        return -1;
    }
    // Time complexity - O(n)
    // Space complexity - O(n)
};