class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.length()==1 && s[0]!=' '){
            return 1;
        }
        if(s.length()==1 && s[0]==' '){
            return 0;
        }
        int j= s.length()-1;
        while(s[j]==' '){
            j--;
        }
        int e=j;
        while(j>=0){
            if(j==0 && s[j]!=' '){
                j=-1;
                break;
            }
            else if(j==0 && s[j]==' '){
                j=-1;
                break;
            }
            j--;
            if(s[j]==' '){
                break;
            }
        }
        int st=j;
        int ans= e-st;
        if(ans==0){
            if(s[0]!=' '){
                return 1;
            }

        }
        return ans;

        
    }
};