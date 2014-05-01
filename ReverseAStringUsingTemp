/*
 //Reversing a string including reversing the words and printing in opposite direction using temp variable
 
 I/P:This is Manali's reversal
 O/P:lasrever s'ilanaM si sihT
 
 */


#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

char *reverse(char *str)
{
    char temp;
    char *start=str;
    char *end=str+strlen(str);
    for(;start < --end;start++)
    {
        temp=*start;
        *start=*end;
        *end=temp;
    }
    return str;
    
}
int main()
{
	char str[]="This is Manali's reversal";
    cout << reverse(str) <<endl;
	return 0;
}
