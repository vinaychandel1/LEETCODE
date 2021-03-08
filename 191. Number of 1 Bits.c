int hammingWeight(uint32_t n) {
    int a=1,count=0;
    while(n){
        if((n&a)!=0) count++;
        n=n>>1;
    }
    return count;
}
