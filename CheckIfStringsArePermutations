/*
Given two strings write a method to check if two strings are permutations of each other.
 
 */


#include<iostream>
#include<cstring>
#include<map>

using namespace std;

bool checkIfPermutation(string s, string t)
{
    size_t  slen=s.length();
    size_t tlen=t.length();
    if(slen!=tlen)
    {
        return false;
    }
    //create a map of character in the string and its count
    map<char, int> p;
    for(int i=0;i<slen;i++)
    {
        char c=s[i];
        if(p.find(c)==p.end())
        {
            p[c]=1;
        }
        else
        {
            p[c]++;
        }
    }
    //For comaprison
    for(int i=0;i<slen;i++)
    {
        char c=t[i];
        if(p.find(c)==p.end())
        {
            return false;
        }
        else
        {
            p[c]--;
            if(p[c]==0)
            {
                p.erase(c);
            }
            
        }
    }
    return true;
}

int main()
{
    cout<<checkIfPermutation("manali","ilanam");
    cout<<endl;
}
