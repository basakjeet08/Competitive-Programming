#include <iostream>
using namespace std;
struct Node{
    int data ;
    struct Node* next ;

};
int main(){
    Node* head = new Node;
    head->data = 10;
    head->next = NULL ;
    Node* tail = new Node ;
    tail->next = NULL ;

    cout << tail->data ;
}