class Solution {
public:
    int myAtoi(string s) {
     
        int i = 0;
        int n = s.length();
        
        // 1. Skip leading whitespaces
        while (i < n && s[i] == ' ') {
            i++;
        }
        
        // 2. Check sign
        int sign = 1;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') {
                sign = -1;
            }
            i++;
        }
        
        // 3. Convert digits to integer & handle overflow
        long long ans = 0; // Overflow check ke liye long long use kar rahe hain
        while (i < n && s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';
            ans = ans * 10 + digit;
            
            // Rounding if integer is out of 32-bit range
            if (sign == 1 && ans > INT_MAX) {
                return INT_MAX;
            }
            if (sign == -1 && -ans < INT_MIN) {
                return INT_MIN;
            }
            
            i++;
        }
        
        return sign * ans;
    }
};
    