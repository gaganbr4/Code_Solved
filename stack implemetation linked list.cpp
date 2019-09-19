#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;
    node(int d){
        next = nullptr ;
        data = d;
}
};

node* root = nullptr;

class lstack{
    int size = 0;
public:


    void push(int );
    int pop();
    int peek();
    void display();
};

void lstack:: push(int data){
    if(root == nullptr){
        root = new node( data);
    }
    else{    node* temp = new node( data);
    temp->next = root;
    root = temp;
    }
    size++;
}

int lstack:: peek(){
    return root->data;
}

int lstack:: pop(){
    if(root==nullptr) {cout<<"stack is empty"<<endl; return -1;}
    else{
        node* temp = root;
        root = root->next;
        delete temp;
        return root->data;
    }
}
void lstack:: display(){
     if(root == nullptr) cout<<"stack is empty"<<endl;
     node* temp = root;
     while(temp  != nullptr){
        cout<<temp->data<<" " ;
        temp = temp->next ;
     }
     cout<<endl;
     cout<<"size of stack : " <<size<<endl;
}

int main(){
   lstack s1;
   s1.display();
   s1.push(11);
   s1.push(33);
   s1.push(35);
   s1.push(56);
   s1.pop();
   s1.display();
   cout<<"top: " <<s1.peek();
}
