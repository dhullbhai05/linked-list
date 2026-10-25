
#include<iostream>
using namespace std;

class node {
public:
    int data;
    node *next;
    node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Aakhiri mein naya node jodne ke liye function
void insertAtTail(node* &head, node* &tail, int d) {
    node* temp = new node(d);
    if(head == NULL) { // Agar list khali hai
        head = temp;
        tail = temp;
        return;
    }
    tail->next = temp; // Tail ke aage naya node joda
    tail = temp;       // Tail ko aage badha diya
}

// List ko print karne ke liye
void print(node* head) {
    node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    node* head = NULL;
    node* tail = NULL;

    int data;
    cout << "Nodes ka data enter karein (Rokne ke liye -1 dabayein): " << endl;
    cin >> data;

    // Loop tab tak chalega jab tak user -1 enter nahi karta
    while(data != -1) {
        insertAtTail(head, tail, data);
        cin >> data; // Agla data input lene ke liye
    }

    cout << "\nAapki Linked List:" << endl;
    print(head);

    return 0;
}
