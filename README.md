/*
 Print all permutations with repetition of characters
 Given a string of length n, print all permutation of the given string. Repetition of characters is allowed. Print these permutations in lexicographically sorted order  Examples:
 Input: AB
 Ouput: All permutations of AB with repetition are:
 AA
 AB
 BA
 BB
 
 Input: ABC
 Output: All permutations of ABC with repetition are:
 AAA
 AAB
 AAC
 ABA
 ...
 ...
 CCB
 CCC

 For an input string of size n, there will be n^n permutations with repetition allowed. The idea is to fix the first character at first index and recursively call for other subsequent indexes. Once all permutations starting with the first character are printed, fix the second character at first index. Continue these steps till last character
 
 Following is recursion tree for input string “AB”. The purpose of recursion tree is to help in understanding the above implementation as it shows values of different variables.
 output=""
 /         \
 /           \
 depth=0           depth=0
 i=0               i=1
 output="A"           output="B"
 /   \              /    \
 /      \            /      \
 depth=1  depth=1    depth=1    depth=1
 i=0      i=1        i=0        i=1
 output="AA"  output="AB"  output="BA"  output="BB"
 
 */


#include <algorithm>
#include <cstddef>
#include <iostream>
#include <string>
#include <vector>

void permutate(const std::string& s, std::vector<int>& output, std::size_t depth, int& count)
{
    if (depth == s.length())
    {
        ++count;
        for (std::size_t i = 0; i < s.length(); ++i)
        {
            std::cout << s[output[i]];
        }
        std::cout << "\n";
        return;
    }

    for (std::size_t i = 0; i < s.length(); ++i)
    {
        output[depth] = i;
        permutate(s, output, depth+1, count);
    }
    
}

int main()
{
    std::string s("AB");
    
    if (s.find_first_not_of(s.front()) == std::string::npos)
    {
        std::cout << "Only 1 permutation exists";
        return 0;
    }
    
    std::sort(s.begin(), s.end());
    
    std::cout << s << "\n**********\n";
    
    std::vector<int> output(s.length());
    int count = 0;
    
    permutate(s, output, 0, count);
    
    std::cout << "\nTotal permutations with repetitions: " << count;
}
