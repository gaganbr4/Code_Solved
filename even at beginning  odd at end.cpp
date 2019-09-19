#include<iostream>
using namespace std;

#include <vector>


void part1(){

vector<int> A {3,2,1,4,5,6,4,3,2,1};
     for(auto &x : A) cout<<x<< "  ";
     cout<<endl;


        int i =0 ;
        int j=1;
        while(i<A.size() && j < A.size()) {

            if(A[i]%2==0){
                i++;

            }

            if(A[j]%2==0){
                int temp = A[i];
                A[i]=A[j];
                A[j]= temp;
            }j++;
        }
         for(auto &x : A) cout<<x<< "  " ;


}

int main(){


   vector<int> A {1,0};
     for(auto &x : A) cout<<x<< "  ";
     cout<<endl;




          int i = 0 ;
        int j = A.size()-1;
        while(i<j){
            if(A[i]%2==0 ) i++;
            if(A[j]%2!=0 ) j--;
            if(A[i]%2!=0 && A[j]%2==0  ){
                int temp = A[i];
                A[i]=A[j];
                A[j]=temp;
                i++;j--;
            }
        }
         for(auto &x : A) cout<<x<< "  " ;







}
