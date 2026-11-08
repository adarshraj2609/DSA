#include<iostream>
using namespace std;
class Node{
public:
   int val;
    Node* next;
    Node(int val){
        this->val=val;

    }
};
void print(Node* head){
     Node* temp=head;
     while(temp!=NULL){
        cout<<temp->val<<" "<<endl;
        temp=temp->next;
     }
}
int main(){
    Node* a=new Node(7);   //head
    Node* b=new Node(0);
    Node* c=new Node(1);
    Node* d=new Node(8);
    Node* e=new Node(2);
    
///attraching
a->next=b;
b->next=c;
c->next=d;
d->next=e;
e->next=NULL;

print(a);

cout<<"All Nodes:"<<endl;
cout<<a->val<<endl;
cout<<a->next->val<<endl;
cout<<a->next->next->val<<endl;   
cout<<(*(c->next)).val<<endl;
cout<<(d->next)->val<<endl;
}