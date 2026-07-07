class Solution {
public:
void lowercase(string& s){
    for(int i=0; i<s.length(); i++){
        if(s[i]>='a' && s[i]<='z' || s[i]>='0' && s[i]<='9'){
        }
   else if(s[i]>='A' && s[i]<='Z'){  
        s[i]=s[i]-'A'+'a';     
    }
    else {
        s.erase(s.begin()+i);
        i--;
    } 
    }
}
    bool isPalindrome(string s) {
        lowercase(s);
        string temp;
        temp=s;
       int i=0;
       int e=s.length()-1;
       while(i<=e){
        swap(temp[i],temp[e]);
        i++;
        e--;
       }
       if(temp==s){
        return 1;
       }
       return 0;
        }
        
    
};