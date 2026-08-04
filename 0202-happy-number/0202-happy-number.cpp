class Solution {
public:
    bool isHappy(int n) {
        int digit; 
        int sum=0;
        while(n>0){
            digit= n%10;
            sum = sum +(digit*digit);
            n= n/10;
            if(n==0){
                n=sum;
                sum=0;
                if(n>=0 && n<=9){
                    if(n==1 || n==7){
                        return true;
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        if(n==1){
            return true;
        }
        else{
            return false;
        }
        
    }
};