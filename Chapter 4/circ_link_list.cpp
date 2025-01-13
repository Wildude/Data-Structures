// circular linked list
#include "structNode.hpp"
int main(){
    Snode* head = new Snode({"head_node", NULL});
    Snode* temp = new Snode({"new_node", NULL});
    Snode* empty = NULL;
    head->next = head;
    temp->next = temp;
    cout << " temp: \n";
    Display(temp);
    cout << " head: \n";
    Display(head);
    cout << " empty: \n";
    Display(empty);
    cout << " after insertion 1\n";
    insertCnode(empty, empty, head);
    cout << " empty: \n";
    Display(empty);
    cout << " after insertion 2\n";
    insertCnode(empty, empty, temp);
    cout << " empty: \n";
    Display(empty);
}