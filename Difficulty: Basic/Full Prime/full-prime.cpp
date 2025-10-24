// User function template for C++

class Solution {
  public:
    bool isPrime(int n){
        if(n <= 1) return 0;

        for(int i=2; i*i<=n; i++) if(n%i==0) return 0;

        return 1;
    }
  
    int fullPrime(int N) {
        int temp = N;
        while(temp > 0){
            int dig = temp%10;
            if(dig!=2 && dig!=3 && dig!=5 && dig!=7) return 0;
            
            temp/=10;
        }
        
        return isPrime(N);
    }
};
