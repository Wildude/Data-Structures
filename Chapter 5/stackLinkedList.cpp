// linked list test of stack
#include "stacks.hpp"
int main(){
    nodestack<string> strstk;
    cout << " peek 0: \n";
    DisplayS(strstk.peek());
    cout << " peek 1: \n";
    strstk.push("fuck");
    DisplayS(strstk.peek());
    cout << " peek 2: \n";
    strstk.push(" ");
    DisplayS(strstk.peek());
    cout << " peek 3: \n";
    strstk.push("you");
    DisplayS(strstk.peek());
    cout << " peek 4: \n";
    strstk.push(" ");
    DisplayS(strstk.peek());
    cout << " peek 5: \n";
    strstk.push("MotherFucker");
    DisplayS(strstk.peek());
    cout << " pop 1: \n";
    DisplayS(strstk.pop());
    cout << " pop 2: \n";
    DisplayS(strstk.pop());
    cout << " pop 3: \n";
    DisplayS(strstk.pop());
    cout << " pop 4: \n";
    DisplayS(strstk.pop());
    cout << " pop 5: \n";
    DisplayS(strstk.pop());
}