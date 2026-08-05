class Solution {
public:
    int addDigits(int n) {
        int digit;
        int sum = 0;
        while(n>0){
            
            digit=n%10;
            sum= sum+digit;
            n=n/10;
            if(n==0){
                if(sum >=0 && sum<=9){
                    return sum;
                }
                else{
                    n=sum;
                    sum=0;
                } 
            }
        }
        return sum;
    }
};