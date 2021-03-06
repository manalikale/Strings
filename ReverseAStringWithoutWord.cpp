/*

Reverse a string keeping the words as it is

Sample Input:
This is Manali
Sample Output:
Manali is This

Algo:

Reverse the entire string and then reverse the words after encountering a space

*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>


void reverseString(char *start, char *end)
{
    char temp;
    for(;start< --end; start++)
    {
        temp=*start;
        *start=*end;
        *end=temp;
    }
}

int main(int argc, char *argv[])
{
    char str[]= "This is for a programming challenge!";
    reverseString(str, str+strlen(str));
    char *start, *end;
    end=str;
    for(start=str;*start!='\0';start++)
    {
        if(*start==' ')
        {
            reverseString(end,start);
            end=start+1;
        }
    }
    reverseString(end,start);
    
    std::cout << str;
    
    std::cout <<std::endl;
}
