class Solution {
public:
   inline vector<int> grayCode(int n) {
        vector<int> v;
        long long int p=pow(2,n);
        for(int i=0; i<p; i++){
            v.push_back(i^(i/2));
        }
        return v;
    }
};
