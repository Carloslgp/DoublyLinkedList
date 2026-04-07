#pragma once
#include "Node.hpp"

template<typename T>
class DoublyLinkedList{

    private:

        Node<T>*  head;
        Node<T>* tail;
        size_t size;

        Node<T>* getNodeAt(size_t index);
    
    public:

        DoublyLinkedList();

        ~DoublyLinkedList();
    
        void pushFront(const T& value);

        void pushBack(const T& value);

        void insert(const T& value, size_t index);

        void remove(size_t index);

        const Node<T>* find(const T& value);

};



