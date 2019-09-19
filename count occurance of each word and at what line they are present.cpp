
//convert the file into a file with only a word in each sentence and count the occurance of each word;
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <fstream>
#include <sstream>
#include <iomanip>
string clean(string &word){
    string word_;
   for(int i = 0 ; i < word.length();i++){
    if(word[i]=='.' || word[i]==',' ||word[i]==';') continue;
    word_+=word[i];
   }

   return word_;

}

void part1(){

       ifstream in_file {"./words.txt"};
      // ofstream out_file {"./out.txt"};
       //istringstream ss {};
       string line;
       string word;
       map<string,int> m;
       while(getline(in_file,line)){
       istringstream ss {line};
       while(ss>>word){
            word =clean(word);
            m[word]++;

       }
       }
        for(auto &x: m){
        cout<<setw(15)<<left<<x.first <<x.second<<endl;
       }

}

 void display(map<string,set<int>> m){
     for(auto &x : m){
         cout<<setw(10)<<left<<x.first<< " ";
         for(auto &y :x.second){
             cout<<y<< " ";
         }
         cout<<endl;
     }

}

 void part2(){
 map<string , set<int>> m;
       ifstream in_file {"./words.txt"};
       int line_no=1;
        string line;
       string word;

       while(getline(in_file,line)){
       istringstream ss {line};
       while(ss>>word){
            word =clean(word);
            m[word].insert(line_no);

       }
       line_no++;
       }

       display(m);

 }
int main(){
        part1();
        part2();









}//main
