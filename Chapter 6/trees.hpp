#include "../Chapter 4/structNode.hpp"
#include "../Chapter 5/queue.hpp"
#include "../Chapter 5/stacks.hpp"
// a general tree
template <class T>
class Gtree{
    T id;
    Gtree<T>** children;
};
// an Nary tree
template <class T>
class Ntree : private Gtree<T>{
    public:
    Ntree(int N){
        if(N > 0)Gtree<T>::children = new Ntree*[N];
    }
};
//
// notice that binary trees are basically doubly linked lists
//

// inorder traversal of binary trees
template <class T>
void inorder(Bnode<T>* node){
    if(!node)return;
    inorder(node->prev);
    displayD(node);
    inorder(node->next);
}
template <class T>
void rev_inorder(Bnode<T>* node){
    if(!node)return;
    inorder(node->next);
    displayD(node);
    inorder(node->prev);
}
// making a Binary Search tree
template <class T>
void makeBST(Bnode<T>**& list, int size){
    if(!list || !list[0])return;
    int start = 1, add = 4;
    while(start < size){
        int index = start;
        while(index < size){
            number_list[index]->prev = number_list[index - add / 4];
            int rindex = index + add / 4;
            int counter = 0;
            while(true){
                if(rindex >= size){
                    if(rindex % 2 == 0)break;
                    counter++;
                    rindex -= add / (4 * (counter + 1));
                }
                else {
                    number_list[index]->next = number_list[rindex];
                    break;
                }
            }
            index += add;
        }
        start += add / 2;
        add *= 2;
    }
}