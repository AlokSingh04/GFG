class Solution {
  public:
    bool fun(int n){
        if(n == 1 || n==7) return true;
        
        if(n<10) return false;
        
        int sum = 0;
        while(n){
            sum+=(n%10)*(n%10);
            n/=10;
        }
        
        return fun(sum);
    }
  
    int nextHappy(int N) {
        // code here
        for(int i = N+1; ;i++){
            if(fun(i)) return i;
        }
        
        return -1;
    }
};