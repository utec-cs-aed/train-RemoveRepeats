#include <iostream>
#include "solution.h"

using namespace std;

int main() {
    DoubleList* list = new DoubleList();
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
