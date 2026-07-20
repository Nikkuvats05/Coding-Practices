class Solution {
public:
    string largestOddNumber(string num) {
        string a;
        int n= num.length()-1;
        int e;
        for(int i=n; i>=0; i--){
            if(num[i]%2!=0){
           e=i;
            break;
            }
        }
    for(int i=0; i<=e; i++){
        a.push_back(num[i]);
    }
    return a;
        
    }
};