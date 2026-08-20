class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==0 || num==1|| num==4){
            return true;
        }
        int s=1;
        int e= num/2;
        while(s<=e){
            long long mid= s+(e-s)/2;
             if(mid*mid==num){
                return true;
             }
             if(mid*mid> num){
                e= mid-1;
             }
             if(mid*mid<num){
                s= mid+1;
             }
        }
        return false;
        
    }
};