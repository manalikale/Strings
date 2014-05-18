//Remove duplicates from a string


#include <algorithm>
#include <cstddef>
#include <iostream>
#include <string>
#include <map>

using namespace std;
void removeDuplicates(string input)
{
    map<char,int>nonduplicate;
    for(int i=0;i<input.length();i++)
    {
        char c=input[i];
        if(nonduplicate.find(c)==nonduplicate.end())
        {
            nonduplicate[c]=1;
            cout<<c;
        }
        else if (nonduplicate[c]==2)
        {
            nonduplicate.erase(c);
        }
    }
    
}

int main()
{
    string s("abbbbbbbccccaaaaaaaaaaa");
    removeDuplicates(s);
    cout<<endl;
    return 0;

}
