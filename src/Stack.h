#pragma once
#include "Node.h"

class Stack {
    private: 
        Node* top;
        int length;

    public:
        Stack();
        ~Stack();

        bool isEmpty();
        void pop();
        void push(int data);
        void peek();
        void print();
};