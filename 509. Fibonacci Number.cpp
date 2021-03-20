int F[1000];
class Solution {
public:
    int fibo(int n){
        if(n<=1) return n;
        if(F[n]!=-1) return F[n];
        F[n]=fibo(n-1)+fibo(n-2);
        return F[n];
    }
    int fib(int n) {
        memset(F,-1,sizeof(F));
        return fibo(n);
    }
};
