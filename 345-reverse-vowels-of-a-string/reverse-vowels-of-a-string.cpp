class Solution {
public:
bool isVowel(char c) {
    c = tolower(c); // Pehle character ko lowercase banaya
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
    string reverseVowels(string s) {
        int st=0;
        int e= s.length()-1;
        while(st<=e){
            if(isVowel(s[st])  && isVowel(s[e])){
            swap(s[st], s[e]);
                st++;
                e--;
            }
           else if(isVowel(s[st]) && !isVowel(s[e])){
                e--;
            }
            else if(!isVowel(s[st]) && isVowel(s[e]) ){
                st++;
            }
            else{
                st++;
                e--;
            }
        }
        return s;        
    }
};