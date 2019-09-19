#include<iostream>
using namespace std;
#include<bits/stdc++.h>

bool checkIdentical(vector<vector<int>> A, vector<vector<int>> B){
         if(A.size()*A[0].size() != B.size()*B[0].size())
         {
             return false;
         }
         for(int i = 0 ; i<A.size();i++){
            for(int j = 0 ;j<A[0].size();j++){
               if(A[i][j] != B[i][j])
                    return false;
            }
        }
    return true;

}

int main(){
     vector<vector<int>> A{
     {1,2,3},
     {4,5,6},
     {7,8,9}
     };

     vector<vector<int>> B{
     {1,2,3},
     {4,5,6}

     };

    cout<<checkIdentical(A,B);

}
