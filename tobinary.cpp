#include<iostream>
using namespace std;
#include <string>
#include<bits/stdc++.h>
#include<sstream>

int binary(int n){
     string s;
     while(n>0){
        s=(n%2==0? "0":"1")+s;
        n=n/2;
     }
     int x = stoi(s);//stoi(string) convert string to integer
     return x;

     //return s ; if return type is string
}

int main(){

    int n = binary(4);
    cout<<n;






}
