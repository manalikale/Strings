/*Run length encoding
 
 Algorithm:
 Given an input string, write a function that returns the Run Length Encoded string for the input string.
 For example, if the input string is “wwwwaaadexxxxxx”, then the function should return “w4a3d1e1x6″.
 Algorithm:  a) Pick the first character from source string.  b) Append the picked character to the destination string.  c) Count the number of subsequent occurrences of the picked character and append the count to destination string.  d) Pick the next character and repeat steps b) c) and d) if end of string is NOT reached.
 
 Time Complexity: O(n)
 Space Complexity: O(n)
 The value of i is incremented in both for and while loops. So the statements inside the while loop are executed at most O(n) times. Therefore, time complexity is O(n).
 */


#include<iostream>
#include<string>
using namespace std;

std::string runLength(std::string input)
{
    string output;
    int i=0;
    int rlen=0;
    for(i=0;i<input.length();i++)
    {
        output+=input[i];
        rlen=1;
        while(i+1<input.length() && input[i]==input[i+1])
        {
            rlen++;
            i++;
        }
        output+= rlen+'0';//convert a number to a string. Hence +'0'
    }
    //If the compressed length is longer than the original string then add this check else simply return output
      if(output.length()>input.length())
      {
        return input;
      }
      else
      {
        return output;
      }
}
int main()
{
    std::string input="aaaabbc";
    std::cout<<runLength(input);
    std::cout<<endl;
    return 0;
}
