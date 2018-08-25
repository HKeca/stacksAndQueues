#include <cstdlib>
#include <iostream>

#include "Stack.h"

Stack::Stack() {
    this->top = NULL;
    this->length = 0;
}

Stack::~Stack() {}

bool Stack::isEmpty() {
    return this->top == NULL;
}

void Stack::push(int data) {
    Node* node = new Node();

    node->data = data;
    node->next = this->top;

    this->top = node;
    this->length++;
}

void Stack::pop() {
    if (this->top == NULL) return;

    this->top = this->top->next;
    this->length--;
}

void Stack::peek() {
    if (this->top == NULL) return;

    std::cout << "Peek: " << this->top->data << std::endl;
}

void Stack::print() {
    if (this->top == NULL) return;

    Node* node = this->top;

    while(node) {
        std::cout << node->data << std::endl;
        node = node->next;
    }
}