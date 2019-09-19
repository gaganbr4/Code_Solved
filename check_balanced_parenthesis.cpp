#include <iostream>
using namespace std;
#include<stack>

bool checkPar(const string &s){
   stack<char> c ;

    for(auto &x: s){
        if(x=='[' || x=='{' || x == '('){
            c.push(x);
        }

    if(x==']' && c.top()=='['){
                c.pop();
            }

        if(x=='}' && c.top()=='{'){
                c.pop();
            }

        if(x==')' && c.top()=='('){
                c.pop();
            }

   }//for

       if(c.empty()) return true;
        else return false;
}//checkpar


int main(){

  string s = "{(a+b)}[]";
  cout<<boolalpha;
  cout<<checkPar(s);
}
