#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <chrono>
using namespace std::chrono;

auto start = high_resolution_clock::now();

////////////////////////////////////---code-below-----///////////////////////////////////////////////////////////////////////////////


class node{
public:
  int data;
    node* next;
    node(int d){
        data = d;
        next= NULL;
    }
};

class linkedlist {
public:

    void append(int data);
    void display();
    void reversell();
    void reverseRecursive(node* a ,node* b ,node* c);
    void displayRecursive(node*);
    void displayRecursiveReverse(node*);
    void reverseRecursive2(node*);
    void reverseusingStack();


};

node* head = NULL;

void linkedlist:: append(int data){

       node* temp = new node(data);
       if(head == NULL){

            head = temp;

            return;

            }//head
        node* temp1 = head;
        while(temp1->next != nullptr){
            temp1 = temp1->next;
        }
        temp1->next = temp;
}//append

void linkedlist:: display(){
        node* temp = head;

        while(temp != NULL){
            cout<<temp->data<< " ";
            temp = temp->next;
        }   cout<<endl;
}//display

void linkedlist:: reversell(){

            node* prev = nullptr;
            node* curr = head;
            node* Next ;

            while(curr!=NULL){
                Next = curr->next;
                curr->next = prev;
                prev = curr;
                curr= Next;

            }
            head = prev;
}

void linkedlist:: reverseRecursive(node* prev = NULL, node* curr= head , node* Next = head->next){

                    if(curr==nullptr){
                        head= prev;
                        return;
                    }
                    Next = curr->next;
                    curr->next = prev;
                    prev = curr;
                    curr=Next;
                    reverseRecursive(prev,curr, Next);


}

void linkedlist:: displayRecursive(node* curr= head){

                    if (curr== NULL) return;

                    cout<<curr->data<<" ";
                    displayRecursive(curr->next);
}

void linkedlist:: displayRecursiveReverse(node* curr = head){
                    if (curr == NULL) return;

                    displayRecursiveReverse(curr->next);
                    cout<<curr->data<<" ";
}

void linkedlist:: reverseRecursive2(node* curr = head){
            if(curr->next== NULL){
                head = curr;
                return ;

            }

            reverseRecursive2(curr->next);
            node* q = curr->next;
            q->next = curr;
            curr->next = NULL;
}

void linkedlist::reverseusingStack(){

                stack<node*> s;
                node* temp = head;
                while(temp!=nullptr){
                    s.push(temp);
                    temp = temp->next;
                }



               head = s.top();
               temp = head;
               s.pop();
               while(!s.empty()){
                temp->next = s.top();
                temp = temp->next;
                s.pop();
               }

               temp->next = nullptr;
}

int main(){
   linkedlist list1;
   list1.append(4);
   list1.append(7);
   list1.append(78);
   list1.append(2);
   list1.append(56);
   list1.display();
   list1.reverseusingStack();
   list1.display();







//----------------------------------------------------------------// Don't wary No need to see further


//main
cout<<endl;cout<<endl;
auto stop = high_resolution_clock::now();
auto duration = duration_cast<microseconds>(stop - start);
cout <<"time "<< duration.count()<<"  microseconds seconds" << endl;


             }//main




