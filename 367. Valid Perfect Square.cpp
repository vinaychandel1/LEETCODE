class Solution {
public:
    bool isPerfectSquare(int num) {
       double x=sqrt(num);
    if((x - floor(x)) == 0){
        return true;
    }
    else 
        return false;

    }
};
