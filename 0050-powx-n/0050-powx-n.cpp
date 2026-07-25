class Solution {
    private:
    double power(double x, long long n){
        if(n==0){
            return 1.0;
        }
        else if(n==1){
            return x;
        }
        double ans= power(x, n/2);
        if(n%2==0){
            return ans*ans;
        }
        else{
            return x*ans*ans;
        }
    }
public:
    double myPow(double x, int n) {
        long long N = n;
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        return  power( x,  N);
    }
};