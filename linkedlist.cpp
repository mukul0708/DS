#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insert(int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = NULL;
    if (head == NULL || head->data >= new_node->data) {
        new_node->next = head;
        head = new_node;
    }
    else {
        Node* current = head;
        while (current->next != NULL && current->next->data < new_node->data) {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
    }
}

void deleteNode(int key) {
    Node* temp = head, * prev = NULL;
    if (temp != NULL && temp->data == key) {
        head = temp->next;
        delete temp;
        return;
    }
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) return;
    prev->next = temp->next;
    delete temp;
}

bool search(int key) {
    Node* current = head;
    while (current != NULL) {
        if (current->data == key)
            return true;
        current = current->next;
    }
    return false;
}

void display() {
    struct Node* ptr;
    ptr = head;
    while (ptr != NULL) {
        cout<< ptr->data <<" ";
        ptr = ptr->next;
    }
}

int main() {
    int choice, x;
    do {
        cout<<"\n1.Insert\n2.Delete\n3.Search\n4.Display\n5.Exit\n";
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice) {
            case 1: cout<<"Enter the element to be inserted : ";
                    cin>>x;
                    insert(x);
                    break;
            case 2: cout<<"Enter the element to be deleted : ";
                    cin>>x;
                    deleteNode(x);
                    break;
            case 3: cout<<"Enter the element to be searched : ";
                    cin>>x;
                    if(search(x))
                        cout<<"Element found\n";
                    else
                        cout<<"Element not found\n";
                    break;
            case 4: display();
                    break;
            case 5: break;
            default: cout<<"Invalid choice\n";
        }
    } while(choice != 5);
    return 0;
}
