//Print all interleavings of 2 strings
/*Given two strings str1 and str2, write a function that prints all interleavings of the given two strings. You may assume that all characters in both strings are different
Example:
Input: str1 = "AB",  str2 = "CD"
Output:
    ABCD
    ACBD
    ACDB
    CABD
    CADB
    CDAB

Input: str1 = "AB",  str2 = "C"
Output:
    ABC
    ACB
    CAB
An interleaved string of given two strings preserves the order of characters in individual strings. For example, in all the interleavings of above first example, ‘A’ comes before ‘B’ and ‘C’ comes before ‘D’.
Let the length of str1 be m and the length of str2 be n. Let us assume that all characters in str1 and str2 are different. Let count(m, n) be the count of all interleaved strings in such strings. The value of count(m, n) can be written as following.
     count(m, n) = count(m-1, n) + count(m, n-1)
     count(1, 0) = 1 and count(0, 1) = 1
To print all interleavings, we can first fix the first character of str1[0..m-1] in output string, and recursively call for str1[1..m-1] and str2[0..n-1]. And then we can fix the first character of str2[0..n-1] and recursively call for str1[0..m-1] and str2[1..n-1]. Thanks to akash01 for providing following C implementation.
*/

#include<iostream>
#include<string.h>

using namespace std;

void PrintIlsRecur(char *str1, char *str2,char *out,size_t m, size_t n, int i)
{
    if(m==0 && n==0)
    {
        cout<<out;
    }
    if(m!=0)
    {
        out[i]=str1[0];
        PrintIlsRecur(str1+1, str2, out, m-1,n,i+1);
        cout<<"\n";
    }
    if(n!=0)
    {
        out[i]=str2[0];
        PrintIlsRecur(str1, str2+1, out, m,n-1,i+1);
        cout<<"\n";
    }
}

void PrintIls(char *str1, char *str2, size_t m, size_t n)
{
    char *out=(char*)malloc((m+n+1)*sizeof(char));
    
    out[m+n]='\0';
    PrintIlsRecur(str1, str2, out, m, n,0);
    free(out);
}
int main()
{
    char str1[] = "ABE";
    char str2[] = "CDJ";
    PrintIls (str1, str2, strlen(str1), strlen(str2));
    cout<<"\n";
    return 0;
}
