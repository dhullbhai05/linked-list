
#include<iostream>
using namespace std;
class node{
    public:
   int data ;
   node *next ;
   //constructor 
   node(int data){
    this ->data = data ;
    this ->next = NULL;
   }
};
void insertAtTail(node *&  tail, int d ){
    node*temp = new node(d);
    tail ->next = temp ;
    tail = temp;

}
   void insertAthead (node *& head ,int  d ){
           node *temp = new node (d);
           temp ->next = head ;
           head = temp  ;
   }
   void print (node *&head ){
    node *temp = head;
    
    while (temp!= NULL){
        cout << temp ->data <<"->" ;
            temp = temp ->next ;
    }
   }
void insertAtPosition(node*&head ,node*& tail, int position , int d){
    if (position == 1){
        insertAthead (head , d);
    }
    node *temp  = head ;
    int cnt = 1;
    while (cnt <position-1){
temp = temp ->next ;
cnt ++;
    }
    //insert at last position 
    if(temp -> next == NULL){
        insertAtTail(tail,d);
        return ;
    }
    //crreting a node for d
    node* nodetoinsert = new node(d);
    nodetoinsert ->next = temp->next;
    temp ->next = nodetoinsert;
}
int main (){
    node *node1 = new node(10);
    node *head = node1;
    node *node2 = new node(100);
    node *tail= node1;
    print (head);
    cout <<endl;
    insertAthead (head , 12); 
    print (head);
    cout <<endl;
    insertAtPosition(head, tail , 2 , 22);
print (head );
 
    insertAtTail(tail , 1000);
    print (tail);
     cout<<endl;
    return 0;
}