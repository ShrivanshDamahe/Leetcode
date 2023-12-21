class Solution {
public:
    string digitSum(string s, int k) {
        vector<int> temp1;
        vector<int> temp2;

        for (int i = 0; i < s.length(); i++)
            temp1.push_back(s[i] - '0');

        while (temp1.size() > k){
            int sum = 0;
            for (int i = 0; i < temp1.size(); i++){
                cout << temp1[i] << " ";
                sum += temp1[i];
                if ((i + 1) % k == 0){
                    if (sum <= 9)
                        temp2.push_back(sum);
                    else {
                        temp2.push_back(sum / 10);
                        temp2.push_back(sum % 10);
                    }
                    sum = 0;
                }
            }
            if (temp1.size() % k != 0){
                if (sum <= 9)
                    temp2.push_back(sum);
                else {
                    temp2.push_back(sum / 10);
                    temp2.push_back(sum % 10);
                }
            }

            temp1.clear();
            temp1 = temp2;
            temp2.clear();
        }

        string ans = "";
        for (int i = 0; i < temp1.size(); i++)
            ans += to_string(temp1[i]);

        return ans;
    }
};