#include <iostream>
#include "solution.h"

using namespace std;

int main() {
    DoublyList* list = new DoublyList();
    push_back(list, 1);
    push_back(list, 2);
    push_back(list, 1);
    push_back(list, 4);
    push_back(list, 1);
    push_back(list, 3);
    push_back(list, 3);
    
    RemoveRepeats(list);
    display(list); // 1,2,4,3
}