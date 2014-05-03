/*
 Implement an algorithm to determine if a string has all unique characters.  
 
 Time: O(n) where n is the length of the string and O(1) is the space complexity
 
 Algo:
 
 Use a set(for uniqueness of character in the string).
 
 Iterate through the string. Store every charcter in the string and try to find it in the set till beyond the end of the set(hence using set.end())
    If not insert the string in the set else return false;
 
 */


#include<iostream>
#include<cstring>
#include<set>

using namespace std;

bool uniqueString(string s)
{
    set <char> t;
    for(int i=0;i<s.length();i++)
    {
        char c=s[i];
        if(t.find(c)==t.end())
        {
            t.insert(c);
        }
        else
        {
            return false;
        }
    }
     return true;
}

int main()
{
    cout<<uniqueString("mna isa");
    cout<<endl;
}
