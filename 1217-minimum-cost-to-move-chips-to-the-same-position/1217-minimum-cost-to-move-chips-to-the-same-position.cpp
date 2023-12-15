class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int chip_stack = 0;

        for (int i = 0; i < position.size(); i++){
            if (position[i] % 2 == 0)
                chip_stack++;
        }

        return min(chip_stack, static_cast<int>(position.size() - chip_stack));
    }
    // Time complexity - O(position.size())
};