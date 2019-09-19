#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define sizes 30
class stacks{
public:

    int arr[sizes];
    int top;

    stacks(){
        top = -1;
    }

    void push(int data);
    int pop();
    int peek();
    void display();

};

void stacks:: push(int data){
      if(top >= sizes-1)cout<<"stack is full";
      arr[++top]=data;
}

int stacks:: peek(){
    return top;
}

int stacks::pop(){
    if(top==-1)cout<<"stack is empty";
    top--;
    return arr[top];}

void stacks:: display(){
      int temp = top;
      if(temp==-1)cout<<"stack is empty"<<endl;
      while(temp>=0){
      cout<<arr[temp--]<<" ";
      }
}

int main(){
    stacks s1;
    s1.display();
    s1.push(22);
    s1.push(11);
    s1.push(32);
    s1.push(45);
    s1.display();
    s1.pop();
    s1.pop();
    s1.display();



}



