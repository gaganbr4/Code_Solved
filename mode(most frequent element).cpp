#include<iostream>
using namespace std;


#include <string>
#include<bits/stdc++.h>



int mode(multiset<int> &s){


    int mode = -1;
    for(auto &x : s){

       int num = s.count(x);
       if(mode<num) mode = num;
    }
    return mode;
}
int main(){

    multiset<int> s {22,22,22,105,105,105,105,33,44,1,2,3,4,22};


    cout<<mode(s);

}
