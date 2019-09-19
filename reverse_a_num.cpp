#include <iostream>
using namespace std;

#include<string.h>

int main(){

int num = 1234556;
int reverse{};
int k = 10;
     while(num>0){
        int temp = num%10;
       reverse =reverse*k+temp;
        num=num/10;
     }
     cout<<reverse;

}
