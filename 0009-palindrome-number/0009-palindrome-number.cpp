class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return 0;
        }
        vector <int>v;
        while(x!=0){
            int digit=x%10;
             x=x/10;
            v.push_back(digit);
        }
       int start=0;
       int end=v.size()-1;
       while(start<=end){
        if(v[start]!=v[end]){
            return 0;
        }
        start++;
        end--;
       }
       return 1;
    }
};