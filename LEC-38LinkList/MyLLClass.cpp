#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class MyLLClass {
    private:
       Node* head;
    Node* tail;
    int length;
public:
    MyLLClass() {
        head = tail = NULL;
        length = 0;
    }

    void display() {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }

        cout << endl;
    }

    // Insert at Tail
    void insertAtTail(int val) {
        Node* n = new Node(val);

        if (head == NULL) {
            head = tail = n;
        }
        else {
            tail->next = n;
            tail = n;
        }

        length++;
    }

    // Insert at Head
    void insertAtHead(int val) {
        Node* n = new Node(val);

        if (length == 0) {
            head = tail = n;
        }
        else {
            n->next = head;
            head = n;
        }

        length++;
    }

    // Remove from Head
    void removeAtHead() {
        if (length == 0) {
            cout << "List is empty!" << endl;
            return;
        }

        Node* temp = head;
        head = head->next;

        delete temp;
        length--;

        // If list becomes empty
        if (length == 0) {
            tail = NULL;
        }
    }
int size(){
        return length;
    }
};

int main() {
    MyLLClass list;

    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);

    list.display();

    list.insertAtHead(40);
    list.display();

    list.removeAtHead();
    list.display();

    cout<<list.size()<<endl;

    return 0;
}

