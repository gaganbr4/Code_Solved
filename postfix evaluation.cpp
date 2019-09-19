#include <iostream>
using namespace std;
#include<cstring>

#include<bits/stdc++.h>

int main(){
     char x[] ="-+*23*549";
     stack<char> st;

     for(int i = strlen(x)-1 ; i>=0 ;i--){
        if(isdigit(x[i])) st.push(x[i]);
        else{
            int b = (st.top())-'0';
            st.pop();
            int a = (st.top())-'0';
            st.pop();
            int c ={};

            if(x[i]=='*')c = a*b;
            else if (x[i]=='/') c =  a/b;
            else if(x[i]=='+') c= a+b;
            else  if(x[i]=='-') c = b-a;
            st.push(c +'0');
        }
     }

     cout<<st.top()-'0';


}
