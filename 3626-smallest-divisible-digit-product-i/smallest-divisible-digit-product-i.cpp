class Solution {
public:
    int smallestNumber(int n, int t) {
        int d;
        for(int i=n; i<=100; i++){
            if(i>=1 && i<=9){
                if(i%t == 0){
                    return i;
                }
                else{
                    continue;
                } 
            }
            d= i%10;
            int j =n/10;
            int ans= d*j;
            if(ans%t == 0){
                return i;
            }
        }
      return n;  
    }
};