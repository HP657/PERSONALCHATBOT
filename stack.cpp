#include <iostream>
using namespace std;

class Stack{
    
    private:

    int top;
    int MaxSize;
    char* stack;

    public:

    Stack(int size);
    bool isFull();
    bool isEmpty();

    void push(char element);
    
    void pop();

    void peek();

};

Stack::Stack(int size){

    MaxSize = size;
    stack = new char[MaxSize];
    top =-1;

}

bool Stack::isFull(){

    if (top == MaxSize -1){
        return true;
    }

    else{
        return false;
    }

}

bool Stack::isEmpty(){

    if (top == -1){
        return true;
    }

    else{
        return false;
    }

}

void Stack::push(char element){

    if (isFull() == true){
        cout << "Full" << endl;
    }

    else{
        stack[++top] = element;
    }

}

void Stack::pop(){

    if (isEmpty() == true){
        cout << "EMPTY" << endl;
    }

    else{
        cout << stack[top--] << endl ;
    }
}

void Stack::peek(){

    for (int i = 0; i < top + 1; i++){

        cout << stack[i] << endl;

    }
}

