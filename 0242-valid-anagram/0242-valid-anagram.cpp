class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
       vector<int>s1(s.length());
       vector<int>t1(s.length());
       for(int i=0; i<s.length(); i++){
        s1.push_back(s[i]-'a');
        t1.push_back(t[i]-'a');
       }
       sort(s1.begin(), s1.end());
       sort(t1.begin(), t1.end());
       for(int i=0; i<s1.size(); i++){
        if(s1[i]!=t1[i]){
            return false;
        }
       }
       return true;
        
    }
};