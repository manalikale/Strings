/*
Replace white space with %20.

 Algo:
 
 Done in a two scan approach.
 
 In the first scan we count the number of spaces in the input string. In the second scan which is done in the reverse order, we actually edit the string. Whenever, we see a space we insert the %20 into the next spots and reduce the new length by 3. Else if there is no space, then we just copy the original character and reduce the new length by 1.
 */


#include<iostream>
#include<cstring>
#include<map>

using namespace std;

void whiteSpaceRemoval(char *str)
{
    size_t length=strlen(str);
    int spaces=0;
    //Count the number of spaces in the input string
    for(int i=0;i<length;i++)
    {
        if(str[i]==' ')
        {
            spaces++;
        }
    }
    //Allocate space equal to the new length for the modified string
    size_t newlength=length+spaces*2;
    
    //Null terminate the new string
    str[newlength]='\0';
    
    //Iterate from the end of the string
    for(int i=length-1;i>=0;i--)
    {
        if(str[i]==' ')
        {
            str[newlength-1]='0';
            str[newlength-2]='2';
            str[newlength-3]='%';
            newlength=newlength-3;
        }
        else
        {
            str[newlength-1]=str[i];
            newlength=newlength-1;
        }
    }
}

void print(char *str)
{
    size_t length=strlen(str);
    for(int j=0;j<length;j++)
    {
        cout<<str[j];
    }
}

int main()
{
    char str[]="This is a space removal program";
    whiteSpaceRemoval(str);
    print(str);
    cout<<endl;
}
