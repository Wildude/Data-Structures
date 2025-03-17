// queue linked list test
#include "queue.hpp"
int main(){
    nodequeue<string> strque;
    cout << " peek 0: \n";
    DisplayS(strque.peekF());
    strque.insert("what?");
    cout << " peek 1: \n";
    DisplayS(strque.peekF());
    strque.insert("the");
    cout << " peek 2: \n";
    DisplayS(strque.peekF());
    strque.insert("fuck");
    cout << " peek 3: \n";
    DisplayS(strque.peekF());
    strque.insert("bro");
    cout << " peek 4: \n";
    DisplayS(strque.peekF());
    strque.insert(", why?");
    cout << " peek 5: \n";
    DisplayS(strque.peekF());
    cout << " remove 1: \n";
    DisplayS(strque.remove());
    cout << " remove 2: \n";
    DisplayS(strque.remove());
    cout << " remove 3: \n";
    DisplayS(strque.remove());
    cout << " remove 4: \n";
    DisplayS(strque.remove());
    cout << " remove 5: \n";
    DisplayS(strque.remove());
}