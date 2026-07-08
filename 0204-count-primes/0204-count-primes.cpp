class Solution {
public:
    int countPrimes(int n) {
        if(n<2){
            return 0;
        }
        int count=0;
    vector<bool>prime(n,true); 
    for(int i=2; i<n; i++){
        if(prime[i]){
            count++;
        
            for(long long j=(long long) i*i; j<n; j=j+i){
                prime[j]=0;
            }
        }
    }
    return count;
    }
};