// C++ code to demonstrate "to_string()" method 
// to convert number to string. 
#include<iostream> 
#include<string> // for string and to_string() 
using namespace std; 

 int binary(int n){
        string sum {};
        while(n>0){
            sum = sum+ (n%2==0?"0":"1");
        }
        return stoi(sum);
 }
int main() 
{ 
	cout<<binary(4);
} 
