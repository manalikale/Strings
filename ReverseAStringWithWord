/*
 //Reversing a string including reversing the words and printing in opposite direction using XOR
 //Time complexity: O(n/2)==O(n) and space complexity os O(n)
 
 
 I/P:This is Manali's reversal
 O/P:lasrever s'ilanaM si sihT
 
 */


#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

char *rev(char *str)
{
    size_t start=0;
	size_t end=strlen(str);
    for(; start<--end;start++)
    {
        str[start] ^= str[end];
        str[end] ^= str[start];
        str[start]^= str[end];
    }
    return str;
}
int main() {
	
	char str[]="This is Manali's reversal";
    cout << rev(str) <<endl;
	return 0;
}
