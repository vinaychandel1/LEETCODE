uint32_t reverseBits(uint32_t n) {
    uint32_t t=32,ans=0;
        while(t>0){
            ans=(ans<<1|(n&1));
            n=n>>1;
            t--;
        }
        
        return ans;
}
