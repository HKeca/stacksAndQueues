#include <iostream>
#include "LinkedList.h"
#include "Stack.h"

void testList() {
    LinkedList* list = new LinkedList();

    for (int i = 0; i < 5; i++) {
        list->add(rand() % 100);
    }

    list->add(1337);

    list->print();

    std::cout << "List length: " << list->length << std::endl;

    Node* result = list->find(1337);

    if (result != 0)
        std::cout << "Item found: " << result->data << std::endl;

    delete list;
}

void testStack() {
    Stack* stack = new Stack();

    for (int i = 0; i < 5; i++) {
        stack->push(rand() % 100);
    }
    
    stack->print();
    std::cout << "----" << std::endl;
    stack->pop();
    stack->print();
    std::cout << "----" << std::endl;
    stack->pop();
    stack->print();
    std::cout << "----" << std::endl;

    std::cout << "Is empty: " << stack->isEmpty() << std::endl;

    delete stack;
}

int main() {
    //testList();
    testStack();

    return 0;
}