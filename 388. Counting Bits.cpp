/*
Algorithm:-
Subtracting 1 from a decimal number flips all the bits after the rightmost set bit(which is 1) including the rightmost set bit.
for example :
10 in binary is 00001010
9 in binary is 00001001
8 in binary is 00001000
7 in binary is 00000111
So if we subtract a number by 1 and do bitwise & with itself (n & (n-1)), we unset the rightmost set bit. If we do n & (n-1) in a loop and count the no of times loop executes we get the set bit count.
The beauty of this solution is the number of times it loops is equal to the number of set bits in a given integer.
*/
vector<int> countBits(int num) {
        vector<int> ans;
        for(int i=0;i<=num;i++){
            int curr_num=i;
            int count=0;
            while(curr_num){
                curr_num &= (curr_num - 1);
                count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
