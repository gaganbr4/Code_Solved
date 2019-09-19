#include <iostream>
using namespace std;
#include <string.h>



int smallest(int x, int y, int z) {

  int smallest = 99999;

  if (x < smallest)
    smallest=x;
  if (y < smallest)
    smallest=y;
  if(z < smallest)
    smallest=z;

  return smallest;
}


int editd(char* s1, char* s2, int n , int m){

          if(m==0) return n;
          if(n==0) return m;
          if(s1[0]==s2[0]) return editd(s1+1,s2+1,n-1,m-1);

        int  x= editd(s1+1,s2,n-1,m);//delete
        int  y= editd (s1+1,s2+1,n-1,m-1);// update
        int  z= editd(s1,s2+1,n,m-1);//insert

          //return smallest(x,y,z)+1;
          return y+1;

}



int main(){

    char s1[]= "krt";
    char s2[]= "shyam";



    cout<<editd(s1,s2,strlen(s1),strlen(s2));

return 0;}
