#include <iostream>
#include <fstream>
using namespace std;
struct Snode{
    string id;
    Snode* next;
};
struct Dnode{
    string id;
    Dnode* prev;
    Dnode* next;
};
void display(Snode* Node, ostream& os = cout){
    if(Node){
        os << " ========================================\n";
        os << " have node: " << Node << "\n";
        os << " with id: " << Node -> id << "\n pointing to (next): ";
        if(Node->next)os << Node->next;
        else os << "NULL";
        os << "\n ========================================\n";
    }
    else{
        os << " ========================================\n";
        os << " have node: NULL\n";
        os << " ========================================\n";
    }
}
void display(Dnode* Node, ostream& os = cout){
    if(Node){
        os << " ========================================\n";
        os << " have node: " << Node << "\n";
        os << " with id: " << Node -> id << "\n pointing to (prev, next): ";
        if(Node->prev)os << Node->prev;
        else os << "NULL";
        os << ", ";
        if(Node->next)os << Node->next << endl;
        else os << "NULL\n";
        os << " ========================================\n";
    }
    else{
        os << " ========================================\n";
        os << " have node: NULL\n";
        os << " ========================================\n";
    }
}
void Display(Dnode* Node, ostream& os = cout){
    if(Node){
        Dnode* temp = Node;
        int counter = 0;
        while(true){
            os << " display[" << counter<< "]:\n";
            display(temp);
            counter++;
            if(temp == NULL)break;
            else if(temp == temp->next){
                os << " !!SELF-REFERING-NODE!!\n";
                break;
            }
            temp = temp->next;
        }
    }
    else{
        os << " ========================================\n";
        os << " have node: NULL\n";
        os << " ========================================\n";
    }
}
void Display(Snode* Node, ostream& os = cout){
    if(Node){
        Snode* temp = Node;
        int counter = 0;
        while(true){
            os << " display[" << counter<< "]:\n";
            display(temp);
            counter++;
            if(temp == temp->next){
                os << " !!SELF-REFERING-NODE!!\n";
                break;
            }
            else if(temp->next == Node){
                os << " !!TAIL-REACHED!!\n";
                break;
            }
            temp = temp->next;
        }
    }
    else{
        os << " ========================================\n";
        os << " have node: NULL\n";
        os << " ========================================\n";
    }
}
void display(Snode* Node, ofstream& ofs){
    if(Node){
        ofs << " ========================================\n";
        ofs << " have node: " << Node << "\n";
        ofs << " with id: " << Node -> id << "\n pointing to (next): ";
        if(Node->next)ofs << Node->next;
        else ofs << "NULL";
        ofs << "\n ========================================\n";
    }
    else{
        ofs << " ========================================\n";
        ofs << " have node: NULL\n";
        ofs << " ========================================\n";
    }
}
void display(Dnode* Node, ofstream& ofs){
    if(Node){
        ofs << " ========================================\n";
        ofs << " have node: " << Node << "\n";
        ofs << " with id: " << Node -> id << "\n pointing to (prev, next): ";
        if(Node->prev)ofs << Node->prev;
        else ofs << "NULL";
        ofs << ", ";
        if(Node->next)ofs << Node->next << endl;
        else ofs << "NULL\n";
        ofs << " ========================================\n";
    }
    else{
        ofs << " ========================================\n";
        ofs << " have node: NULL\n";
        ofs << " ========================================\n";
    }
}
void Display(Dnode* Node, ofstream& ofs){
    if(Node){
        Dnode* temp = Node;
        int counter = 0;
        while(true){
            ofs << " display[" << counter<< "]:\n";
            display(temp);
            counter++;
            if(temp == NULL)break;
            temp = temp->next;
        }
    }
    else{
        ofs << " ========================================\n";
        ofs << " have node: NULL\n";
        ofs << " ========================================\n";
    }
}
void Display(Snode* Node, ofstream& ofs){
    if(Node){
        Snode* temp = Node;
        int counter = 0;
        while(true){
            ofs << " display[" << counter<< "]:\n";
            display(temp);
            counter++;
            if(temp == temp->next){
                ofs << " !!SELF-REFERING-NODE!!\n";
                break;
            }
            else if(temp->next == Node){
                ofs << " !!TAIL-REACHED!!\n";
                break;
            }
            temp = temp->next;
        }
    }
    else{
        ofs << " ========================================\n";
        ofs << " have node: NULL\n";
        ofs << " ========================================\n";
    }
}
template<class T>
T*& nextNode(T*& curr, int index = 0){
    return (index > 0 ? nextNode(curr->next, index - 1) : curr);
}
template<class T>
void setNextNode(T*& curr){
    curr = curr->next;
}
// singly linked list insertion at a location
void insertSnode(Snode*& head, Snode* ins, int ind = 0){
    Snode* curr = head;
    int size = 0;
    for(int i = 0; i < ind; i++){
        if(!curr && !i){
            if(!ind)break;
            cout << " insertion out of bounds\a\n";
            return;
        }
        if(curr){
            if(curr->next == NULL){
                size = i + 1;
            }
            else{
                size = i;
            } 
        }
        else if(i == size){
            cout << " insertion out of bounds\n\a";
            return;
        }
        curr = curr->next;
    }
    ins->next = curr;
    curr = ins;
    nextNode(head, ind) = curr;
}
// singly linked list deletion at a location
void deleteSnode(Snode*& head, int index = 0){
    if(index < 0){cout << " negative index error in deletion\a\n"; return;}
    Snode* curr = head;
    int size = 0;
    for(int i = 0; i <= index; i++){
        if(!curr && !index){cout << " Linked list is already empty\a\n"; return;}
        if(curr){
            if(curr->next == NULL){
                size = i + 1;
            }
            else{
                size = i;
            } 
        }
        else if(i == size){
            if(i <= index){
                cout << " deletion out of bounds\n\a";
                return;
            }
        }
        if(i != index)curr = curr->next;
    }
    Snode* temp = curr;
    setNextNode(nextNode(head, index));
    delete temp;
}
// simple searching for singly/doubly linked list
template <class T>
T* search(T* head, string id){
    T* curr = head;
    if(!curr){cout << " linked list is empty\a\n";return NULL;}
    while(curr->next != NULL){
        if(curr->id == id)return curr;
        else curr = curr->next;
    }
    cout << " couldn't find id\n\a";
    return NULL;
}
void insertDnode(Dnode*& head, Dnode* ins, int ind = 0){
    Dnode* curr = head;
    int size = 0;
    for(int i = 0; i < ind; i++){
        if(!curr && !i){
            if(!ind)break;
            cout << " insertion out of bounds\a\n";
            return;
        }
        if(curr){
            if(!curr->next){
                size = i + 1;
                if(size == ind){
                    ins->next = NULL;
                    ins->prev = curr;
                    nextNode(head, ind) = ins;
                    return;
                }
            }
            else {
                size = i;
            }
        }
        else if(i == size){
            cout << " insertion out of bounds\a\n";
            return;
        }
        curr = curr->next;
    }
    ins->next = curr;
    ins->prev = curr->prev;
    curr->prev = ins;
    nextNode(head, ind) = ins;
}
void deleteDnode(Dnode*& head, int ind = 0){
    Dnode* curr = head;
    int size = 0;
    for(int i = 0; i <= ind; i++){
        if(!curr && !i){cout << " linked list is already empty\a\n"; return;}
        if(curr){
            if(!curr->next){
                size = i + 1;
            }
            else{
                size = i;
            }
        }
        else if(i == size){
            if(i <= ind){
                cout << " deletion out of bounds\a\n";
                return;
            }
        }
        if(i != ind)curr = curr->next;
    }
    cout << " curr is " << curr << endl;
    Dnode* temp = curr;
    Dnode*& thisNode = nextNode(head, ind);
    if(thisNode->next)thisNode->next->prev = thisNode->prev;
    setNextNode(thisNode);
    cout << " deleting node:\n";
    display(temp);
    delete temp;
}
void insertCnode(Snode*& head, Snode* tail, Snode* ins, int ind = 0){
    if(ind < 0){cout << " negative index error\n"; return;}
    Snode* curr = head;
    int size = 0;
    for(int i = 0; i < ind; i++){
        if(!curr && !i){
            if(!ind)break;
            cout << " insertion out of bounds\a\n";
            return;
        }
        if(curr == tail && !i){size = 1;}
        if(curr && curr != tail){
            if(curr->next == tail){
                size = i + 1;
            }
            else{
                size = i;
            }
        }
        else if(i == size){
            cout << " insertion out of bounds\a\n";
            return;
        }
        curr = curr->next;
    }
    ins->next = (curr ? curr : ins);
    if(curr)curr->next = ins;
    curr = ins;
    nextNode(head, ind) = curr;
}
void insertCnode(Snode*& head, Snode* ins, int ind = 0){
    if(ind < 0){cout << " negative index error\n"; return;}
    Snode* curr = head;
    int size = 0;
    for(int i = 0; i < ind; i++){
        if(!curr && !i){
            if(!ind)break;
            cout << " insertion out of bounds\a\n";
            return;
        }
        if(curr){
            if(curr->next == head){
                size = i + 1;
            }
            else{
                size = i;
            }
        }
        else if(i == size){
            cout << " insertion out of bounds\a\n";
            return;
        }
        curr = curr->next;
    }
    ins->next = (curr ? curr : ins);
    if(curr)curr->next = (curr->next == curr ? ins : curr->next);
    curr = ins;
    nextNode(head, ind) = curr;
}