#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<string.h>

char* removeDuplicate(char str[], int size)
{      int index =0;
       for(int i = 0 ; i < size;i++){
        int j{} ;
        for( j = 0 ; j<i ; j++){
            if(str[i]==str[j])
                break;
        }
        if(j==i){
            str[index++]=str[i];
        }

       }
       return str;

}


int main(){

         char str[] = "geeksforgeeks";
         cout<<str<<endl;
         int sz = sizeof(str)/sizeof(str[0]);
         cout<<sz<<endl;
         cout<<strlen(str)<<endl;
        cout<< removeDuplicate(str, sz)<<endl;//strlen won't work in place of sz here


         cout<<str;



}




/*
   set method to remove duplicates

  char str[]="geeksforgeeks";
   set<char> s;
   for(size_t i = 0 ; i <strlen(str);i++){
        s.insert(str[i]);
   }
    int index = 0;
    int size_ = s.size();
    char str2[size_];
   for(auto &x: s){
    str2[index++]=x;
   }

   cout<<str2;




*/
