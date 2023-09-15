#include <iostream>
#include "stack.cpp"

using namespace std;

int main(){

    Stack stack(5);

    stack.push('a');
    stack.push('c');
    stack.push('p');
    stack.push('j');
    stack.push('e');



    stack.pop();
    stack.pop();
    stack.pop();

    stack.print();

    return 0;
}