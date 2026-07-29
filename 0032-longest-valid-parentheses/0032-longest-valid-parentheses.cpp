class Solution {
public:
    int longestValidParentheses(string s) {
        int ans=0;
        if(s.length()==0 || s.length()==1){
            return 0;
        }
        int maxi=0;
        int left=0;
        int right=0;
       for(int i=0; i<s.length(); i++){
        if(s[i]=='('){
            left++;
       }
       else{
        right++;
       }
       if(left==right){
        maxi=max(maxi, 2*right);
       }
       else if(right>left){
        left=right=0;
       }
       }
       left=right=0;
       for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == '(') left++;
            else right++;

            if (left == right) {
                maxi = max(maxi, 2 * left);
            } else if (left > right) {
                left = right = 0;
            }
        }
       return maxi;
    }
};