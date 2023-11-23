#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* GetNewNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node* Insert(Node* root, int data) {
    if(root == NULL) {
        root = GetNewNode(data);
    }
    else if(data <= root->data) {
        root->left = Insert(root->left, data);
    }
    else {
        root->right = Insert(root->right, data);
    }
    return root;
}

bool Search(Node* root, int data) {
    if(root == NULL) {
        return false;
    }
    else if(root->data == data) {
        return true;
    }
    else if(data <= root->data) {
        return Search(root->left, data);
    }
    else {
        return Search(root->right, data);
    }
}

void Display(Node* root) {
    if(root != NULL) {
        Display(root->left);
        cout<<root->data<<" ";
        Display(root->right);
    }
}

int main() {
    Node* root = NULL;
    int choice, x;
    do {
        cout<<"\n1.Insert\n2.Search\n3.Display\n4.Exit\n";
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice) {
            case 1: cout<<"Enter the element to be inserted : ";
                    cin>>x;
                    root = Insert(root, x);
                    break;
            case 2: cout<<"Enter the element to be searched : ";
                    cin>>x;
                    if(Search(root, x))
                        cout<<"Element found\n";
                    else
                        cout<<"Element not found\n";
                    break;
            case 3: Display(root);
                    break;
            case 4: break;
            default: cout<<"Invalid choice\n";
        }
    } while(choice != 4);
    return 0;
}
