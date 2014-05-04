/* 
 
  Function checks if passed strings (str1 and str2) are rotations of each other 
 
 Algo: Check if s2 is a substring of s1s1
 
 */



#include<iostream>
#include<string>


using namespace std;
bool areRotaion(string str1, string str2)
{
    
    size_t str1len=str1.length();
    size_t str2len=str2.length();
    
    if(str1len!=str2len)
    {
        return false;
    }

    str1+=str1;
    if(str1.find(str2)!=-1)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
int main()
{
    cout<<areRotaion("erat","tear")<<endl;
    return 0;
}
