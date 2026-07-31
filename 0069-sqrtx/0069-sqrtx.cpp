class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) 
        return 0;
        if(x==1){
            return 1;
        }
        int e= x;
        int s=0;
     
        while(s<e){
            long long mid = s+(e-s)/2;
           
            if(mid*mid==x){
                return mid;
            }
           else if(mid*mid>x){
                e=mid-1;
            }
            else{
                s= mid +1;
            }
        }
        if((s*s)<=x){
            return s;
        }
      return s-1;
     
        
    }
};