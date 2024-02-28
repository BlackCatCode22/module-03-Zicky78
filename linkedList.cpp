#include <iostream>
using namespace std;

// Create the struct for the Node
struct Node {
    int data;
    Node *next;
};

void delete(Node** head, int data) {
    // Create a temporary node to traverse
    Node* temp = *head;
    // Create a previous node to keep track of the previous node
    Node* prev = nullptr;

    // If the head is the node to be deleted
    if(temp != nullptr && temp->data == data) {
        *head = temp->next;
        delete temp;
        return;
    }

    // Traverse to the node to be deleted
    while(temp != nullptr && temp->data != data) {
        prev = temp;
        temp = temp->next;
    }

    // If the data is not found
    if(temp == nullptr) {
        return;
    }

    // Delete the node
    prev->next = temp->next;
    delete temp;
}


// Insert a node to the end of the linked list
// Takes a pointer to the head and the data to be inserted
void insert(Node** head, int data) {
    // Create a new node
    Node *newNode = new Node();
    // Set the data
    newNode->data = data;
    newNode->next = nullptr;

    // If the linked list is empty, set the new node as the head
   if(*head == nullptr) {
       *head = newNode;
    // If the linked list is not empty, traverse to the end and insert the new node
    } else {
        // Create a temporary node to traverse
        Node* temp = *head;
        // Traverse to the end
        while(temp->next != nullptr) {
            temp = temp->next;
        }
        // Insert the new node
        temp->next = newNode;
    }
    
}



// Display the linked list
int display(Node *head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    return 0;
}

int main() {

    Node* head = nullptr;
    insert(&head, 5);
    insert(&head, 10);
    insert(&head, 15);
    display(head);

    return 0;

}