#include <iostream>
#include <cstdlib>

using namespace std;

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;

void inputData(int data) {
    struct node *entry = (struct node*) malloc(sizeof(struct node));
    entry->data = data;
    entry->next = NULL;

    if (head == NULL) {
        head = entry;
        tail = entry;
    } else {
        tail->next = entry;
        tail = entry;
    }
}

void inputLast(int data) {
    struct node *newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void insertFirst(int data) {
    struct node *newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
}

void insertAfterIndex(int data, int indexTarget) {
    struct node *newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    struct node *current = head;

    for (int i = 0; i < indexTarget && current != NULL; i++) {
        current = current->next;
    }

    if (current != NULL) {
        newNode->next = current->next;
        current->next = newNode;
    }
}

void deleteFirst() {
    if (head == NULL) {
        cout << "List is empty. Cannot delete." << endl;
        return;
    }

    struct node *current = head;
    head = current->next;
    delete current;
}

void deleteLast() {
    if (head == NULL) {
        cout << "List is empty. Cannot delete." << endl;
        return;
    }

    struct node *current = head;
    struct node *beforeCurr = NULL;

    while (current->next != NULL) {
        beforeCurr = current;
        current = current->next;
    }

    if (beforeCurr != NULL) {
        beforeCurr->next = NULL;
        tail = beforeCurr;
        delete current;
    } else {
        delete head;
        head = NULL;
        tail = NULL;
    }
}

void deleteAfterIndex(int indexTarget) {
    struct node *current = head;
    struct node *beforeCurr = NULL;

    for (int i = 0; i < indexTarget && current != NULL; i++) {
        beforeCurr = current;
        current = current->next;
    }

    if (current != NULL && current->next != NULL) {
        beforeCurr->next = current->next;
        delete current;
    }
}

void printLinkedList() {
    struct node *current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}


int main() {
    inputData(10);
    inputData(20);

    cout << "Linked List setelah inserting 10 dan 20:" << endl;
    printLinkedList();

    insertFirst(5);
    inputLast(7);
    insertAfterIndex(15, 1);

    cout << "Linked List setelah inserting first, last, dan after index:" << endl;
    printLinkedList();

    deleteFirst();

    cout << "Linked List after deleting first node:" << endl;
    printLinkedList();

    deleteAfterIndex(1);

    cout << "Linked List after deleting node after index 1:" << endl;
    printLinkedList();

    deleteLast();

    cout << "Linked List after deleting last node:" << endl;
    printLinkedList();

    return 0;
}
