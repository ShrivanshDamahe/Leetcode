class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int a = prices[0], b = prices[1];

        for (int i = 2; i < prices.size(); i++){
            if (a > prices[i]){
                b = min(a, b);
                a = prices[i];
            }
            else if (b > prices[i])
                b = prices[i];
        }
        
        if (money < a + b)
            return money;
        return money - (a + b);
    }
    // Time complexity - O(n)
};