class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        vector<int> arr{1, 0};
        vector<int> words;

        for (char c : s)
            words.push_back(widths[c - 'a']);

        int line = 0;
        for (int i = 0; i < words.size(); i++){
            line += words[i];
            
            if (line > 100)
                arr[1] = words[i];
            else 
                arr[1] = line;

            if (line == 100){
                line = 0;
                arr[0]++;
            }
            else if (line > 100){
                line = words[i];
                arr[0]++;
            }
        }
        if (arr[1] == 100)
            arr[0]--;
        
        return arr;
    }
    // Time complexity - O(n)
};