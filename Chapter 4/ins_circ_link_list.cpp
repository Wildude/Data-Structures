// Insertion of a circular linked list (single)
#include "structNode.hpp"
int main(){
    Snode* head = new Snode({"head_node", NULL});
    Snode* temp = new Snode({"new_head", NULL});
    Snode* temp2 = new Snode({"third_head", NULL});
    insertSnode(&head, temp);
    cout << "after insertion 1\n";
    Dats(head);
    insertSnode(&head, temp2, 1);
    cout << "after insertion 2\n";
    Dats(head);
    return 0;
}