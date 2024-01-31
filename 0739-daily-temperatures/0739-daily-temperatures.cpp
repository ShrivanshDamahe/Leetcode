class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size(), 0);
        stack<int> s;

        for (int i = 0; i < temperatures.size(); i++){
            while (!s.empty() && temperatures[s.top()] < temperatures[i]){
                ans[s.top()] = i - s.top();
                s.pop();
            }
                
            s.push(i);
        }

        return ans;
    }
    // Time complexity - O(n)
    // Space complexity - O(n)
};