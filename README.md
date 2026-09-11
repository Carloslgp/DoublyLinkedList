# Doubly Linked List in C++

A doubly linked list implemented from scratch in C++, without using `std::list`.

## What it is

Each node holds a value and two pointers: one to the previous node and one to the next. This makes it possible to traverse the list in both directions and to remove an element without scanning from the beginning.

```
nullptr <- [ A ] <-> [ B ] <-> [ C ] -> nullptr
            ^                    ^
           head                 tail
```

## Operations

| Operation | Complexity |
|---|---|
| Insert at front | O(1) |
| Insert at back | O(1) |
| Insert at position | O(n) |
| Remove by value | O(n) |
| Search | O(n) |
| Size | O(1) |

## Building and running

```bash
g++ -std=c++17 -o list main.cpp
./list
```

## Usage example

```cpp
DoublyLinkedList<int> list;

list.pushBack(10);
list.pushBack(20);
list.pushFront(5);

list.print();        // 5 <-> 10 <-> 20
list.printReverse(); // 20 <-> 10 <-> 5

list.remove(10);
std::cout << list.size(); // 2
```

## Structure

```
.
├── main.cpp              # Usage examples
├── DoublyLinkedList.hpp  # List and node declarations
└── README.md
```

## Notes

Each node's memory is freed in the destructor, so there's no need to clear the list manually.
