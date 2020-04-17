class Solution {
public:
    string stringShift(string s, vector<vector<int>>& rotation) {
        int n = s.size(), cnt = 0;
        for (auto t : rotation) 
            cnt += (1 - t[0] * 2) * t[1];
        cnt %= n;
        if (cnt < 0) cnt += n;
        s = s + s;
        return s.substr(cnt, n);
    }
};
/*
class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
       int total=0;
        for(int i=0;i<shift.size();i++){
            int direction =shift[i][0];
            int amount=shift[i][1];
            if(direction==0){
                total-=amount; 
            }
            else{
                total+=amount;
            }
        }
            //performing shift
        string newFront;
        string newBack;
        if(total<0){
            total=abs(total)%s.size();
            //left shift
            newFront=s.substr(total);
                newBack=s.substr(0,total);
        }
            else if(total>0){
                total=total%s.size();
               //right shift
                newFront=s.substr(s.size()-total,total);
                newBack=s.substr(0,s.size()-total);
                
            }
            else {
                return s;
            }
        
        return newFront+newBack;
                         
        }
        
};
*/
