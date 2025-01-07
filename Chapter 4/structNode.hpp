#include <iostream>
using namespace std;
struct Snode{
    string id;
    Snode* next;
};
struct Dnode{
    string id;
    Dnode* next;
    Dnode* prev;
};
void dats(Snode* Node){
    if(Node){
        cout << " have node: " << Node << "\n";
        cout << " with id: " << Node -> id << "\n pointing to (next): ";
        if(Node->next)cout << Node->next;
        else cout << "NULL";
        cout << endl;
    }
    else{
        cout << " have node: NULL\n";
    }
}
void dats(Dnode* Node){
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
    else{
        cout << " have node: NULL\n";
    }
}
void Dats(Snode* Node){
    if(Node){
        Snode* temp = Node;
        int counter = 0;
        while(true && counter < 5){
            cout << " dats[" << counter<< "]:\n";
            dats(temp);
            cout << " ================================\n";
            counter++;
            if(temp->next == NULL)break;
            temp = temp->next;
        }
    }
    else{
        cout << " have node: NULL\n";
    }
}
void Dats(Dnode* Node){
    if(Node){
        Dnode* temp = Node;
        int counter = 0;
        while(true){
            cout << " dats[" << counter<< "]:\n";
            dats(temp);
            cout << " ================================\n";
            counter++;
            if(temp->next == NULL)break;
            temp = temp->next;
        }
    }
    else{
        cout << " have node: NULL\n";
    }
}
template<class T>
T** nextNode(T** curr, int index = 0){
    return (index ? nextNode(&(*curr)->next, index - 1) : &(*curr));
}
// singly linked list insertion at a location
void insertSnode(Snode** head, Snode* ins, int ind = 0){
    Snode* curr = *head;
    int size = 0;
    for(int i = 0; i < ind; i++){
        if( !curr && !i )break;
        if(curr){
            if(curr->next == NULL){
                size = i + 1;
            }
            else{
                size = i;
            } 
        }
        else if(i == size){
            if(i == ind)break;
            cout << " insertion out of bounds\n\a";
            return;
        }
        curr = curr->next;
    }
    Snode** aff = &curr;
    ins->next = curr;
    *aff = ins;
    *nextNode(head, ind) = curr;
    //Dats(copy);
    //Dats(*head);
}