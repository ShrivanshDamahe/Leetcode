class Solution {
public:
    string addStrings(string num1, string num2) {
        string output = "";
        int carry = 0;
        for (int i = 0; i < max(num1.length(), num2.length()); i++){
            int a = num1.length() - i - 1, b = num2.length() - i - 1;;
            int temp = 0;

            if (a >= 0 && b >= 0)
                temp = (num1[a] - '0') + (num2[b] - '0') + carry;
            else if (a >= 0)
                temp = (num1[a] - '0') + carry;
            else if (b >= 0)
                temp = (num2[b] - '0') + carry;

            output += to_string(temp % 10);
            carry = temp / 10;
        }
        if (carry != 0)
            output += to_string(carry);
        
        reverse(output.begin(), output.end());

        return output;
    }
    // Time complexity - O(max(m, n))
    // where, m = num1.length()
    // n = num2.length()
};