
bool isPowerOfTwo(int x) {
	return !(x<=0 || (x & (x - 1)));
}
