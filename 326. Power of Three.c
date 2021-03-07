bool isPowerOfThree(int n){
if(n==0) return false;
    while(n%3==0)
        n/=3;
   if(n==1) return 1;
    else return 0;
}
