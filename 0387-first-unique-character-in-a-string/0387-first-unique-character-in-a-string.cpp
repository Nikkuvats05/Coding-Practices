class Solution {
public:
    int firstUniqChar(string s) {
        if(s.length()==1){
            return 0;
        }
     for(int i=0; i<s.length(); i++){
        for(int j =0; j<s.length(); j++){
            if(i== s.length()-1){
                if(j== s.length()-1){
                return i;
            }
            }
            if(i == j){
                continue;
            }
            if(s[i]==s[j]){
                break;
            }
            if(j== s.length()-1){
                return i;
            }
        }
     }
     return -1;   
    }
};