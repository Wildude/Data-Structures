// Insertion of a doubly linked list
#include <iostream>
using namespace std;
struct node{
    string id;
    node* prev;
    node* next;
};
void dats(node* Node){
    if(Node){
        cout << " have node: " << Node << "\n";
        cout << " with id: " << Node -> id << "\n pointing to (prev, next): ";
        if(Node->prev)cout << Node->prev;
        else cout << "NULL";
        cout << ", ";
        if(Node->next)cout << Node->next;
        else cout << "NULL";
        cout << endl;
    }
}
int main(){
    node* head = new node({"head_node", NULL, NULL});
    dats(head);
    node* temp = new node({"new head", NULL, head});
    head->prev = temp;
    dats(head);
    dats(temp);
    return 0;
}