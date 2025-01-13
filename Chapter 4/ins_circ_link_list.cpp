// Insertion of a circular linked list (single)
#include "structNode.hpp"
int main(){
    Snode* head = new Snode({"head_node", NULL});
    Snode* temp = new Snode({"new_head", NULL});
    Snode* temp2 = new Snode({"third_head", NULL});
    Snode* temp3 = new Snode({"fourth_node", NULL});
    Snode* empty = new Snode({"empty_node", NULL});
    insertSnode(head, temp);
    //cout << "after insertion 1\n";
    //Display(head);
    insertSnode(head, temp2, 1);
    //cout << "after insertion 2\n";
    //Display(head);
    //Display(empty);
    //cout << "after insertion 3\n";
    insertSnode(head, temp3, 3);
    Display(head);
    /*
    display(search(head, "new_head"));
    cout << "after deletion 1\n";
    deleteSnode(head);
    display(search(head, "new_head"));
    */
    //Display(head);
    cout << "after deletion x\n";
    deleteSnode(head, 10);
    //Display(head);
    //cout << "after deletion 3\n";
    //deleteSnode(head, 2);
    //Display(head);
    return 0;
}