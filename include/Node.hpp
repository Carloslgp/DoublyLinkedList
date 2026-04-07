#pragma once

template<typename T>
class Node{
    private:

        T data;
        Node* next;
        Node* previous;
        
    public:

        Node(const T& value);
        ~Node();

        const T& getData() const;
        void setData(const T& value);

        const Node* getPrevious() const;
        void setPrevious(Node* ptr);


        const Node* getNext()const;
        void setNext(Node* ptr);
        
};




