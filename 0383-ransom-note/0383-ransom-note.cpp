class Solution {
public:
    void sortString(string &str){
        sort(str.begin(), str.end());
    }

    bool canConstruct(string ransomNote, string magazine) {
        sortString(ransomNote);
        sortString(magazine);

        int x = 0, y = 0;
        for (int i = 0; i < magazine.length(); i++){
            if (ransomNote[x] == magazine[y]){
                ++x;
                ++y;
            }
            else if (ransomNote[x] != magazine[y]){
                ++y;
            }
        }

        if (x == ransomNote.length())
            return true;
        else 
            return false;
    }
};