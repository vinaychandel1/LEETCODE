class Solution {
public:
    string defangIPaddr(string address) {
        
    for (int i=0;i<address.size();i++) {
        if(address[i]=='.') {
            address.replace(i, 1, string("[.]"));
            i+=2;
        }
    }  
        return address;   
    }
       
};

/*
C++ String replace()
This function replaces the portion of string that begins at character position pos and spans len characters.

Syntax
Consider two strings str1 and str2. Syntax would be:

str1.replace(pos,len,str2);  
Parameters
str : str is a string object, whose value to be copied in another string object.
pos : pos defines the position, whose character to be replaced.
len : Number of characters to be replaced by another string object.
subpos : It defines the position of the first character of string object that is to be copied to another object as replacement.
sublen : Number of characters of string object to be copied into another string object.
n : Number of characters to be copied into an another string object.
Return value
This function does not return any value.

Example 1
First example shows how to replace given string by using position and length as parameters.

#include<iostream>  
using namespace std;  
int  main()  
{  
string str1 = "This is C language";  
string str2 = "C++";  
cout << "Before replacement, string is :"<<str1<<'\n';  
str1.replace(8,1,str2);   
cout << "After replacement, string is :"<<str1<<'\n';  
return 0;  
}   
Output:

Before replacement , string is This is C language
After replacement, string is This is C++ language
Example 2
Second example shows how to replace given string using position and length of the string which is to be copied in another string object.

#include<iostream>  
using namespace std;  
int main()  
{  
string str1 ="This is C language"  
 string str3= "java language";  
cout <<"Before replacement, String is "<<str1<<'\n';  
str1.replace(8,1,str3,0,4);   
cout<<"After  replacement,String is "<<str1<<'\n';  
return 0;  
}   
Output:

Before replacement, String is This is C language
After replacement, String is This is java language
Example 3
Third example shows how to replace the string by using string and number of characters to be copied as parameters.

#include<iostream>  
using namespace std;  
int main()  
{  
string str1="This is C language";  
cout<<"Before replacement,string is"<<str1<<'\n';  
str1.replace(8,1,"C##",2);   
cout<<"After replacement,string is"<<str1;  
return 0;  
}   
Output:

Before replacement,string is This is C language
After replacement,string is This is C# language


*/
