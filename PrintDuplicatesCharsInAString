/*
 Print all duplicates from an input string
 */


#include<iostream>
#include<string>
#include<map>

using namespace std;

void fillCharCountArray(string str)
{
    map<char,int>count;
    for(int i=0;i<str.length();i++)
    {
        //Do not increment the count for the space character
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
            cout<<c<<endl;
            count.erase(c);
        }
    }
}

int main()
{
    fillCharCountArray("we are a family");
    return 0;
}
