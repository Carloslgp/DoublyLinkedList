#include "DoublyLinkedList.h"
#include <iostream>


int main(){

    DoublyLinkedList<int> doubleLinkeList; 
    doubleLinkeList.pushFront(2);
    doubleLinkeList.pushFront(3);
    doubleLinkeList.pushFront(4);
    doubleLinkeList.pushFront(5);
    doubleLinkeList.printNodes();


    return 0;
}


