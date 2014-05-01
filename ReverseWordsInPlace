//Reverse every word inplace


#include<iostream>

using namespace std;

void reverse(char *start, char *end)
{
    char temp;
    while(start<end)
    {
        temp=*start;
        *start++=*end;
        *end--=temp;
    }
    
}

void reverseWords(char *str)
{
    char *start=str;
    char *temp=str;//temp is for the word boundary
    while(*temp)
    {
        temp++;
        if(*temp=='\0')
        {
            reverse(start,temp-1);
        }
        else if(*temp==' ')
        {
            reverse(start,temp-1);
            start=temp+1;
        }
        
    }
}


int main()
{
    char str[]="    Hi this is Manali";
    reverseWords(str);
    cout<<str<<endl;
    
    return 0;
}
