// print 1 half of string int uppercase and 2nd half in lower case
#include<iostream>
#include<string>
using namespace std;

class StringUpperLowerCases
{
    string str1 = "Malik Tawkeer MALIK TAWKEER";
    int mid = str1.length()/2;
    string s1="";
    string s2="";
    int m=0,n=0;

    public:
    void convertIntoUpperLowerCase()
    {
        int i;
        for(i=0; i<str1.length();i++)
        {
            if(i<mid)
            {
                s1.push_back(toupper(str1[i]));
                
            }else{
                s2.push_back(tolower(str1[i]));
                
            }
        }
    }

    void displayStrings()
    {
        for(int i=0;i<=s1.length();i++)
        cout<<s1[i];
        cout<<endl;
        for(int i=0;i<s2.length();i++)
        cout<<s2[i];
    }
};

int main()
{
    StringUpperLowerCases str;
    str.convertIntoUpperLowerCase();
    str.displayStrings();
}