class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        int count=0;
        for(int i=0; i<s.size(); i++){
            for(int j=0; j<t.size(); j++){
                if(s[i]==t[j]){
                    count++;
                    t.erase(t.begin()+j);
                    break;
                }
            }
        }
        if(count==s.size()){
            return true;
        }
        else{
            return false;
        }
        
    }
};