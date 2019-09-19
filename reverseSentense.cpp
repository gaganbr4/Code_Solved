#include<iostream>
using namespace std;
#include<string.h>

void reverse(char* begin, char* end){
      int temp ;
      while(begin<end){
        temp =*begin;
        *begin++ = *end;
        *end-- = temp;
      }
}

void reverseWords(char* s){
   char* word_begin = s;
   char* temp  = s;
   while(*temp){
        temp++;
        if(*temp =='\0'){
            reverse(word_begin,temp-1);
        }
         if(*temp == ' '){
            reverse(word_begin,temp-1);
            word_begin = temp+1;
            }
        }

    reverse(s,temp-1);
   }



int main(){
   char str[] = "This is so good";
   cout<<endl<<str<<endl;
   reverseWords(str);
   cout<<endl<<str<<endl;

}
//
//
//void reverse(char* str){
//      char temp ;
//      int begin=0;
//      int end = strlen(str)-1;
//      while(begin<end){
//        temp = str[begin];
//        str[begin++] = str[end];
//        str[end--]= temp;
//      }
//}
