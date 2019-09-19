// Section 20
// Challenge 1
// Identifying palindrome strings using a deque
#include <cctype>
#include <deque>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

bool is_palindrome(const std::string& s)
{
    deque<char> d;
    deque<char> d1;
    for(int i=0 ; i < s.length();i++){
        if(int(s[i])>=65 && int(s[i])<=90 || int(s[i])>=97 && int(s[i])<=122)
        d.push_back(toupper(s[i]));
    }

   if(d.size()==1) return true;
   copy(d.begin(),d.end(),front_inserter(d1));

   for(int i =0 ; i < d.size();i++){
    if(d[i]!=d1[i])return false;
        }
   return true;







}






int main()
{
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };

    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s)  << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}
