class Solution {
public:
    int captureForts(vector<int>& forts) {
        int ans = 0;
        int last = -1;
        
        for (int i = 0; i < forts.size(); i++){
            if (forts[i] != 0){
                if (last != -1 && forts[i] * forts[last] == -1)
                    ans = max(ans, i - last - 1);

                last = i;
            }
        }

        return ans;
    }
    // Time complexity - O(n)
    // Space complexity - O(1)
};