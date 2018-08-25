#include <cstdlib>
#include <iostream>

#include "LinkedList.h"

LinkedList::LinkedList() {
    this->length = 0;
    this->head = NULL;
}

LinkedList::~LinkedList() {}

void LinkedList::add(int data) {
    Node* node = new Node();

    node->data = data;
    node->next = head;

    this->head = node;
    this->length++;
}

void LinkedList::print() {
    Node* head = this->head;

    int i = 1;
    while(head) {
        std::cout << i << ": " << head->data << std::endl;
        head = head->next;
        i++;
    }
}

Node* LinkedList::find(int data) {
    Node* head = this->head;

    while(head) {
        if (head->data == data)
            return head;
        
        head = head->next;
    }

    return 0;
}