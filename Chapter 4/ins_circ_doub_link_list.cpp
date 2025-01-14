// insertion of circular/doubly linked list illustration
#include "structNode.hpp"
int main(){
    Dnode* head = new Dnode({"head_node", NULL, NULL});
    Dnode* temp = new Dnode({"new_head", NULL, NULL});
    Dnode* temp2 = new Dnode({"third_head", NULL, NULL});
    Dnode* temp4 = new Dnode({"fifth_node", NULL, NULL});
    Dnode* temp3 = new Dnode({"fourth_node", NULL, temp4});
    //
    head->next = head->prev = head;
    temp->next = temp->prev = temp;
    temp2->next = temp2->prev = temp2;
    temp3->next = temp3->prev = temp3;
    temp4->next = temp4->prev = temp4;
    //
    Dnode* empty = NULL;
    cout << " insertion operation for a doubly/circular linked list:\n";
    cout << " insertion is done before the index/location\n";
    cout << " to insert after index/location use index value as index + 1\n";
    cout << " ========================================\n";
    cout << " head:\n";
    Display(head);
    cout << " ========================================\n";
    cout << " temp:\n";
    Display(temp);
    cout << " ========================================\n";
    cout << " temp2:\n";
    Display(temp2);
    cout << " ========================================\n";
    cout << " temp3:\n";
    Display(temp3);
    cout << " ========================================\n";
    cout << " temp4:\n";
    Display(temp4);
    cout << " ========================================\n";
    cout << " empty:\n";
    Display(empty);
    

    cout << " ========================================\n";
    cout << " head:\n";
    Display(head);
    cout << " ========================================\n";
    cout << " temp:\n";
    Display(temp);
    cout << " ========================================\n";
    cout << " temp2:\n";
    Display(temp2);
    cout << " ========================================\n";
    cout << " temp3:\n";
    Display(temp3);
    cout << " ========================================\n";
    cout << " temp4:\n";
    Display(temp4);
    cout << " ========================================\n";
    cout << " empty:\n";
    Display(empty);
    insertCDnode(empty, temp);
    cout << " after insertion 2 (inserting temp as head of empty (has one node)\n";
    cout << " ========================================\n";
    cout << " head:\n";
    Display(head);
    cout << " ========================================\n";
    cout << " temp:\n";
    Display(temp);
    cout << " ========================================\n";
    cout << " temp2:\n";
    Display(temp2);
    cout << " ========================================\n";
    cout << " temp3:\n";
    Display(temp3);
    cout << " ========================================\n";
    cout << " temp4:\n";
    Display(temp4);
    cout << " ========================================\n";
    cout << " empty:\n";
    Display(empty);
    insertCDnode(empty, temp2, 1);
    cout << " after insertion 3 (inserting temp2 at 1th position of empty (has two nodes)\n";
    cout << " ========================================\n";
    cout << " head:\n";
    Display(head);
    cout << " ========================================\n";
    cout << " temp:\n";
    Display(temp);
    cout << " ========================================\n";
    cout << " temp2:\n";
    Display(temp2);
    cout << " ========================================\n";
    cout << " temp3:\n";
    Display(temp3);
    cout << " ========================================\n";
    cout << " temp4:\n";
    Display(temp4);
    cout << " ========================================\n";
    cout << " empty:\n";
    Display(empty);
    insertCDnode(empty, temp3, 2);
    cout << " after insertion 4 (inserting temp3 at 2th position of empty (has three nodes)\n";
    cout << " ========================================\n";
    cout << " head:\n";
    Display(head);
    cout << " ========================================\n";
    cout << " temp:\n";
    Display(temp);
    cout << " ========================================\n";
    cout << " temp2:\n";
    Display(temp2);
    cout << " ========================================\n";
    cout << " temp3:\n";
    Display(temp3);
    cout << " ========================================\n";
    cout << " temp4:\n";
    Display(temp4);
    cout << " ========================================\n";
    cout << " empty:\n";
    Display(empty);
    insertCDnode(empty, temp4, 4);
    cout << " after insertion 5 (inserting temp4 at 4th position of empty (has four nodes)\n";
    cout << " ========================================\n";
    cout << " head:\n";
    Display(head);
    cout << " ========================================\n";
    cout << " temp:\n";
    Display(temp);
    cout << " ========================================\n";
    cout << " temp2:\n";
    Display(temp2);
    cout << " ========================================\n";
    cout << " temp3:\n";
    Display(temp3);
    cout << " ========================================\n";
    cout << " temp4:\n";
    Display(temp4);
    cout << " ========================================\n";
    cout << " empty:\n";
    Display(empty);
}