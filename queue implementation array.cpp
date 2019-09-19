#include<iostream>
using namespace std;
#define size 20
class Queue{
    int arr[size];
    int front;
    int rear;
public:
    Queue(){front = -1; rear= -1;}
    void enqueue(int);
    void dequeue();
    void display();

};

void Queue:: enqueue(int data){
        if(rear==size-1){
                cout<<"queue is full " <<endl;
        return;
        }
        else if(front==-1 && rear == -1){
            front = 0 ;
            rear = 0 ;
        }
        else{

            arr[++rear]=data;
        }

}

void Queue:: display(){
    if(front == -1 && rear == -1) cout<<"queue is empty"<<endl;
    else{
        int temp = front;
        while(temp<=rear){
        cout<<arr[temp++]<<" " <<endl;
        }
    }
}

void Queue:: dequeue(){
       if(front == -1 && rear == -1)return;
       if(front==0 and rear==0){
        front = -1;
        rear = -1;
       }
       else front++;
    }

int main(){
    Queue q;
    q.display();
    q.enqueue(11);
    q.enqueue(13);
    q.enqueue(14);
    q.enqueue(44);
    q.dequeue();
    q.display();


}
