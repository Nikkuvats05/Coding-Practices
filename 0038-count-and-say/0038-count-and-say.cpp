class Solution {
public:
    string countAndSay(int n) {

        string ans = "1";
        
        for (int i = 2; i <= n; i++) {
            string temp = "";
            int len = ans.length();

            for (int j = 0; j < len; j++) {
                int count = 1;

               
                while (j + 1 < len && ans[j] == ans[j + 1]) {
                    count++;
                    j++; 
                }
                temp += to_string(count);
                temp += ans[j];
            }

            ans = temp;
        }

        return ans;
    }
};