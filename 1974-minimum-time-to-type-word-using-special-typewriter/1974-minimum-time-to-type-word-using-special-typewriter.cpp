class Solution {
public:
    int minTimeToType(string word) {
        int time = word.size();
        
        for (int i = 0; i < word.size(); i++){
            int temp;

            if (i == 0)
                temp = word[i] - 'a';
            else if (word[i] > word[i - 1])
                temp = word[i] - word[i - 1];
            else 
                temp = word[i - 1] - word[i];
            
            time += min(temp, (26 - temp));
        }

        return time;
    }
    // Time complexity - O(n)
};