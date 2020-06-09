
bool isPowerOfTwo(int x) {
	return !(x<=0 || (x & (x - 1)));
}
/*or
isPowerOfTwo(int n) {
        if(n < 1)
            return false;
        if(n == 1)
            return true;
        if(n %2 ==1)
            return false;
        return (isPowerOfTwo(n/2));
    }
*/
/*OR
n = n&(n-1);
return n==0;
*/
