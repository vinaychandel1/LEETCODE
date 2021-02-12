class Solution {
public:
    int clumsy(int n) {
        if(n==1){
            return 1;
        }
        if(n==2){
            return 2;
        }
        if(n==3){
            return 6;
        }
        int ans=n*(n-1)/(n-2);
        n-=3;
        while(n>3){
            ans+=n;
            n--;
            ans-=n*(n-1)/(n-2);
            n-=3;
        }
        if(n<=3 && n>0){
            ans++;
        }
        return ans;
    }
};
