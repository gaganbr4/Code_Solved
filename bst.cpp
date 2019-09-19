#include <iostream>
using namespace std;

#include<string.h>

class node{
public:
     node* left ;
     node* right;
     int data;

};

node* root = nullptr;

node* newnode(int data){
      node* temp  = new node();
      temp->left = nullptr;
      temp->right = nullptr;
      temp->data = data;

      return temp;
   }


node* insert(node* root ,int data){
      if(root==nullptr){
        root = newnode(data);
      }

      else if(root->data >= data){
         root->left = insert(root->left, data);
      }
      else {
        root->right = insert(root->right,data);
      }

      return root;

}


void traverse(node* root){
       if(root==nullptr) return;

       cout<<root->data << " ";
       traverse(root->left);
       traverse(root->right);
}




int main(){

   root =  insert(root,10);
   root = insert(root,5);
   root = insert(root,11);
   root = insert(root,13);

    traverse(root);


}
