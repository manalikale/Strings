/*
 Maximum occuring chaarcter in a string
 */


#include<iostream>
#include<string>
#include<map>
#include<vector>
#include <stdexcept>
#include<algorithm>

using namespace std;

void maxOccuringCharacter(string str)
{
    map<char,int> count;
    if(str.begin()== str.end())
    {
       throw std::logic_error("Empty string!");
    }
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ')
        {
            i++;
        }
        char c=str[i];
        if(count.find(c)==count.end())
        {
            count[c]=1;
        }
        else
        {
            count[c]++;
        }
    }
    // iterator to return most frequent char
    map<char, int>::const_iterator ret = count.begin();
    // find most frequent char
    for(auto it = count.begin(); it != count.end(); ++it)
    {
        if(ret->second <= it->second)
            ret = it;
    }
    cout<<ret->first;
    
}



int main()
{
    maxOccuringCharacter("mana");
    cout<<endl;
    return 0;
}
