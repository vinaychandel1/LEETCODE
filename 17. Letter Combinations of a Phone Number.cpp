class Solution {
private:
vector<string> mapping={"","","abc","def","ghi","jkl","mno","pqrs","utv","wxyz"};

public:

void solve(string digits,vector<string> &ans,string str,int index){
    if(index==digits.size()){
        ans.push_back(str);
        return;
    }
        
    int j=digits[index]-'0';
    for(int i=0;i<mapping[j].length();i++){
        str.push_back(mapping[j][i]);
        solve(digits,ans,str,index+1);
        str.pop_back();
    }
}
vector<string> letterCombinations(string digits) {
    vector<string> ans;
    string str;
    if(digits.length()==0) //For empty string case
        return ans;
    solve(digits,ans,str,0);
    return ans;
}
};
