#include <iostream>
using namespace std;
#include <bits/stdc++.h>

void addEdge(vector<int> adj[],int u , int v ){
          adj[u].push_back(v);
          adj[v].push_back(u);
}
void print(vector<int> adj[],int v){
   for(int i = 0 ; i < v; i++){
        cout<<"edges connected to "<<i <<" are: ";
        for(auto &x: adj[i]){
            cout<<x << " ";
        }
        cout<<endl;

   }
}

int main(){

  vector<int> adj[5] ;//array of vector of size 5 and each array element is a vector with variable size
  addEdge(adj,0,1);
  addEdge(adj,0,4);
  addEdge(adj,1,2);
  addEdge(adj,2,3);
  addEdge(adj,3,4);
  print(adj,5);
}
