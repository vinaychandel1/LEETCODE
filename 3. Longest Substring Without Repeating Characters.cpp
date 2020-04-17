class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> m(256, -1); //> ASCII at most 256 characters
        
        //> left start from -1, means right - left = length
        //> instead of right - left + 1 = length
        int ans = 0, left = -1;
        
        for (int i = 0; i < s.length(); ++i) {
            //> find the left boundary
            left = max(left, m[s[i]]);
            
            //> update newest index of each character
            m[s[i]] = i;
            
            //> calculate the max length
            ans = max(ans, i - left);
        }
        return ans;
    }
};
/*Using best approach
class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int fi=0,l=0,h=1;
        int n=s.length();
        
        if(n==0||n==1)
            return n;
        
      
        vector<int> v(127,0);    
        v[s[l]]=1;
    
        while(h<s.length())
        {
           // cout<<s[l]<<" "<<s[h]<<" "<<fi<<endl;
            if(v[s[h]]==1)
            {
                fi=max(fi,h-l);
                while(s[l]!=s[h])
                {
                    v[s[l]]=0;
                     l++;
                }
                   
               // if(s[l]==s[h])
                    l++;
                
               // v[s[h]]=1;
            }
                
                else
                    v[s[h]]=1;
            h++;
            
        }
        return max(fi,h-l) ;
        
    }
};*/
