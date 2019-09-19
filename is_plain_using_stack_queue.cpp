#include <cctype>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <stack>
#include <queue>
using namespace std;

bool is_palindrome(const std::string& s)
{
    stack<char> ss;
    queue<char> q;
    for(auto &c:s){
        if(isalpha(c)){
            q.push(toupper(c));
            ss.push(toupper(c));
        }
    }
    while(ss.size()>=1){
        if(ss.top() != q.front()) return false;
        ss.pop();
        q.pop();
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
