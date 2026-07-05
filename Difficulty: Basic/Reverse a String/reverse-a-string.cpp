class Solution {
  public:
    string reverseString(string& s) {
        // code here
        int i=0;
        int e=s.length()-1;
        while(i<=e){
            swap(s[i],s[e]);
            i++;
            e--;
        }
        return s;
    }
};
