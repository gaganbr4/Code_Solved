#include<iostream>
using namespace std;
#include <unordered_map>
#include <string>

class DoublyLinkedListNode{
public:

    string key;
    int value;
    DoublyLinkedListNode* prev;
    DoublyLinkedListNode* next;

    DoublyLinkedListNode(string key, int value){
    this->key = key;
    this->value = value;
    this->prev = nullptr;
    this->next = nullptr;
    }

    void removeBindings(){//remove node
      if(this->prev != nullptr) this->prev->next = this->next;
      if(this->next !=nullptr)  this->next->prev = this->prev;
      this->prev = nullptr;
      this->next = nullptr;
    }

};


class DoublyLinkedList{
public:
     DoublyLinkedListNode* head;
     DoublyLinkedListNode* tail;

     DoublyLinkedList(){
     this->head = nullptr;
     this->tail = nullptr;
     }

     void setHeadTo(DoublyLinkedListNode* node){
          if(this->head == node){
            return;
          }
          else if(this->head ==nullptr ){
            this->head = node ;
            this->tail = node;
            this->head->next = this->tail;
          }
          else{
            if(this->tail == node){
                this->removeTail();
            }
            node->removeBindings();
            this->head->prev = node ;
            node->next = this->head;
            this->head = node;
          }

     }

     void removeTail(){
        if(this->tail == nullptr) return ;
        if(this->tail == this->head ){
            this->head = nullptr;
            this->tail = nullptr;
            return;
        }
        this->tail= this->tail->prev;
        this->tail->next = nullptr;
     }

};

class LRUcatch {
public:
    unordered_map<string, DoublyLinkedListNode*> cache;
    int maxSize;
    int currentSize;
    DoublyLinkedList listofMostRecent;

    LRUcatch(int maxSize){
    this->maxSize = maxSize>1? maxSize:1;
    this->currentSize= 0 ;
    this->listofMostRecent = DoublyLinkedList();
    }

    void insertKeyValuePair(string key , int value){
    if(this->cache.find(key)== this->cache.end()){
        if(this->currentSize == this->maxSize){
            this->evictLeastRecent();
        }
        else{
            this->currentSize++;
        }
        this->cache[key]= new DoublyLinkedListNode(key,value);
    }else{
     this->replaceKey(key,value);
    }
    this->updateMostRecent(this->cache[key]);
    }

    int* getValueFrom(string key){
        if(this->cache.find(key)==this->cache.end()) return nullptr;
        this->updateMostRecent(this->cache[key]);
        return &this->cache[key]->value;
        }

    string getMostRecent(){
    return this->listofMostRecent.head->key;}

    void evictLeastRecent(){
       string keyToRemove =this->listofMostRecent.tail->key;
       this->listofMostRecent.removeTail();
       this->cache.erase(keyToRemove);

    }

    void updateMostRecent(DoublyLinkedListNode* node){
    this->listofMostRecent.setHeadTo(node);
    }

    void replaceKey(string key , int value){
       if(this->cache.find(key) == this->cache.end()) return ;
       this->cache[key]->value = value;
    }
};

int main(){

}
