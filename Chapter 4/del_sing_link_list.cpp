// deletion of singly linked list
#include "structNode.hpp"
int main(){
    Snode* head = new Snode({"head_node", NULL});
    Snode* temp = new Snode({"new_node", NULL});
    Snode* temp2 = new Snode({"third_node", NULL});
    Snode* temp3 = new Snode({"fourth_node", NULL});
    Snode* empty = NULL;
    cout << " deletion of singly linked list:\n";
    cout << " deletion done on the index position\n";
    cout << " if node will be empty after deletion, head is made to point to NULL\n";
    cout << " =====================================\n";
    cout << " temp: \n";
    Display(temp);
    cout << " =====================================\n";
    cout << " temp2: \n";
    Display(temp2);
    cout << " =====================================\n";
    cout << " temp3: \n";
    Display(temp3);
    cout << " =====================================\n";
    cout << " head: \n";
    Display(head);
    cout << " =====================================\n";
    cout << " empty: \n";
    Display(empty);
    cout << " After all insertions\n";
    cout << " 1. head on empty (an empty node)\n";
    cout << " 2. temp on tail of empty (has one node)\n";
    cout << " 3. temp2 on tail of empty (has two nodes)\n";
    cout << " 4. temp3 on the 2th position of empty (has three nodes)\n";
    insertSnode(empty, head);
    insertSnode(empty, temp, 1);
    insertSnode(empty, temp2, 2);
    insertSnode(empty, temp3, 2);
    cout << " =====================================\n";
    cout << " temp: \n";
    Display(temp);
    cout << " =====================================\n";
    cout << " temp2: \n";
    Display(temp2);
    cout << " =====================================\n";
    cout << " temp3: \n";
    Display(temp3);
    cout << " =====================================\n";
    cout << " head: \n";
    Display(head);
    cout << " =====================================\n";
    cout << " empty: \n";
    Display(empty);
    cout << " after deletion 1 (deleting the 2th node)\n";
    deleteSnode(empty, 2);
    cout << " =====================================\n";
    cout << " temp: \n";
    Display(temp);
    cout << " =====================================\n";
    cout << " temp2: \n";
    Display(temp2);
    cout << " =====================================\n";
    cout << " temp3: \n";
    cout << " !!! note that temp3 is now pointing to an unallocated memory (reading temp3 causes abnomral program termination)\n";
    cout << " so point temp3 to NULL\n now temp3 is:\n";
    temp3 = NULL;
    Display(temp3);
    cout << " =====================================\n";
    cout << " head: \n";
    Display(head);
    cout << " =====================================\n";
    cout << " empty: \n";
    Display(empty);
    cout << " after deletion 2 (deleting the 1th node)\n";
    deleteSnode(empty, 1);
    cout << " =====================================\n";
    cout << " temp: \n";
    cout << " !!! note that temp is now pointing to an unallocated memory (reading temp causes abnomral program termination)\n";
    cout << " so point temp to NULL\n now temp is:\n";
    temp = NULL;
    Display(temp);
    cout << " =====================================\n";
    cout << " temp2: \n";
    Display(temp2);
    cout << " =====================================\n";
    cout << " temp3: \n";
    Display(temp3);
    cout << " =====================================\n";
    cout << " head: \n";
    Display(head);
    cout << " =====================================\n";
    cout << " empty: \n";
    Display(empty);
    cout << " after deletion 3 (deleting the head node)\n";
    deleteSnode(empty);
    cout << " =====================================\n";
    cout << " temp: \n";
    Display(temp);
    cout << " =====================================\n";
    cout << " temp2: \n";
    Display(temp2);
    cout << " =====================================\n";
    cout << " temp3: \n";
    Display(temp3);
    cout << " =====================================\n";
    cout << " head: \n";
    cout << " !!! note that head is now pointing to an unallocated memory (reading head causes abnomral program termination)\n";
    cout << " so point head to NULL\n now head is:\n";
    head = NULL;
    Display(head);
    cout << " =====================================\n";
    cout << " empty: \n";
    Display(empty);
    cout << " after deletion 4 (deleting the head node)\n";
    deleteSnode(empty);
    cout << " =====================================\n";
    cout << " temp: \n";
    Display(temp);
    cout << " =====================================\n";
    cout << " temp2: \n";
    cout << " !!! note that temp2 is now pointing to an unallocated memory (reading temp2 causes abnomral program termination)\n";
    cout << " so point temp2 to NULL\n now temp2 is:\n";
    // for some reason the function can't free the memory pointed by temp2, 
    // so one has to explicitly pass temp2 to the delete function.
    deleteSnode(temp2);
    Display(temp2);
    cout << " =====================================\n";
    cout << " temp3: \n";
    Display(temp3);
    cout << " =====================================\n";
    cout << " head: \n";
    Display(head);
    cout << " =====================================\n";
    cout << " empty: \n";
    Display(empty);
}