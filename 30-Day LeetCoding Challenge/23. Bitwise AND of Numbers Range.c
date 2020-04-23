

int rangeBitwiseAnd(int m, int n){
 return (n > m) ? (rangeBitwiseAnd(m/2, n/2) << 1) : m;
}

/*OR


int rangeBitwiseAnd(int m, int n){
int c=0;
	while(m!=n){
		m>>=1;
		n>>=1;
		++c;
	}
	return n<<c;
}


*/

