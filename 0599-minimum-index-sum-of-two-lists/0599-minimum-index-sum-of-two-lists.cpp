class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> output;

        for (int sum = 0; sum < list1.size() + list2.size() - 1; sum++){
            for (int i = 0; i <= sum; i++){
                if (i < list1.size() && sum - i < list2.size() && list1[i] == list2[sum - i])
                    output.push_back(list1[i]);
            }

            if (output.size() > 0)
                break;
        }

        return output;
    }
    // Time complexity - O(m * n)
};