#ifdef __INTELLISENSE__
#include "DoublyLinkedList.h"
#endif


template<typename T>
DoublyLinkedList<T>::DoublyLinkedList() : head(nullptr), tail(nullptr), size(0) {}




template<typename T>
void DoublyLinkedList<T>::pushFront(const T& value){
    Node* node = new Node(value);
    
    if(this->size == 0){
        this->head = node;
        this->tail = node;

    }else{
        this->head->previous = node;
        node->next = this->head;
        this->head = node;
        
    }

    this->size++;

    return;
}


template<typename T>
void DoublyLinkedList<T>::printNodes(){

    Node* actual = this->head;

    while (actual != nullptr)
    {
        std::cout << actual->data << std::endl;
        actual = actual->next;
    }

}














