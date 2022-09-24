// remove specified characters from string array
#include<iostream>
using namespace std;

class RemoveCharacter
{
    string str = "";
    string strNew = "";

    public:
    RemoveCharacter(string str)
    {
        this->str = str;
    }

    void removeChar(char ch)
    {
        for(int i=0;i<str.length();i++)
        {
            if(str[i] != ch)
            {
                strNew.push_back(str[i]);
            }
        }
    }

    void displayAfterCharRemoval()
    {
        for(int i=0;i<strNew.length();i++)
        {
            cout<<strNew[i];
        }
    }

};

int main()
{
    string name="maliktawkeer";
    RemoveCharacter rc(name);
    rc.removeChar('a');
    rc.displayAfterCharRemoval();
}