class Solution {
public:
    bool rotateString(string A, string B) {
        string x=A+A; //x=A+A x=abcdabcd
        return(A.length()==B.length() && x.find(B)!=string::npos); // x.find(B)!=string::npos is finding starting index value where "B" occurs
        
    }
};
/*
It is a constant static member value with the highest possible value for an element of type size_t.
It actually means until the end of the string.
It is used as the value for a length parameter in the string’s member functions.
*/
