#pragma once

template<typename T>
class DoublyLinkedList{

    private:

        struct Node {
            T data;
            Node* next;
            Node* previous;
            Node(const T& value) : data(value), next(nullptr), previous(nullptr) {}
            ~Node(){}
        };

        Node*  head;
        Node* tail;
        size_t size;

        Node* getNodeAt(size_t index);
    
    public:

        DoublyLinkedList();

        ~DoublyLinkedList();
    
        void pushFront(const T& value);

        void pushBack(const T& value);

        void insert(const T& value, size_t index);

        void remove(size_t index);

        size_t find(const T& value);

};



