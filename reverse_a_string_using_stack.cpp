#include <iostream>
using namespace std;
#include <bits/stdc++.h>

void reverse(string &s, int len){

stack<char> S;

for(int i = 0 ; i < len;i++)
    S.push(s[i]);
int i = 0;
while(!S.empty()){
    s[i++]=S.top();
    S.pop();
}




}



int main(){

string s = "abcdef";

cout<<s<<endl;
reverse(s,s.length());
cout<<s<<endl;


}
