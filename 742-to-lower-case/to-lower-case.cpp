class Solution {
public:
    string toLowerCase(string s) {
        string temp;
        for(int i=0; i<s.length(); i++){
            if(s[i]>='A' && s[i]<='Z'){
                temp.push_back(s[i]-'A'+'a');
            }
            else{
                temp.push_back(s[i]);
            }
        }
        return temp;
    }
};