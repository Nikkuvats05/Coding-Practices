class Solution {
    private:
    bool ispresent(char a, string ans){
        for(int i=0; i<ans.length(); i++){
           if(a==ans[i]){
            return true;
           }
        }
        return false;
    }
public:
    int lengthOfLongestSubstring(string s) {
        int maxcount=0;
        for(int i=0; i<s.length(); i++){
        string ans;
        int count=0;
        for(int j=i; j<s.length(); j++){
           if(ispresent(s[j], ans)){
            break;   
           }
           else{
            count++;
            ans.push_back(s[j]);
           }
          
    }
    maxcount= max(maxcount,count);
        }
     return maxcount;
    }

};