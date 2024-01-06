class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_set<int> dp1;
        unordered_set<int> dp2;

        for (int num : nums1)
            dp1.insert(num);

        for (int num : nums2)
            dp2.insert(num);
        
        for (int element : dp2){
            if (dp1.find(element) != dp1.end())
                ans.push_back(element);
        }

        return ans;
    }
    // Time complexity - O(m + n)
    // Space complexity - O(m + n)
};