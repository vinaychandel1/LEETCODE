

bool checkValidString(char * s){
    char c;
    int i=0;
        int low = 0; int high = 0;
        for(;c=s[i];i++)
        {
            low += c == '(' ? 1 : -1;
            high += c != ')' ? 1 : -1;
            
            if(high < 0) break;
            if(low>0){
                low=low;
            }
            else low=0;
        }

        return low == 0;
    free(low);
    free(high);
    free(c);
    free(i);
    free(s);

}

