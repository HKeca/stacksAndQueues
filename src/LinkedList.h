#pragma once
#include "Node.h"

class LinkedList {
    public:
        int length;
        Node* head;

        LinkedList();
        ~LinkedList();

        void add(int data);
        void print();
        Node* find(int data);
};