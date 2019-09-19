#include<iostream>
using namespace std;

int main(){
   int r1 = 10 ; int r2 = 100;
   int flag= 0;
   for(int i = r1; i<=r2;i++){
    for(int j = 2 ; j<=i/2;j++)
    {
        if(i%j==0) {flag = 1;break;}
        flag = 0 ;
    }
    if(flag==0) cout<<i<< " ";
   }
}
