//implement stack push ,pop,top,display
#include <iostream>
using namespace std;

class Stack {
private:
    int top;
    int size;
    int *arr;
public:
    Stack(int n) {
        size = n;
        top = -1;
        arr = new int[size];
    }
    void push(int x) {
        if (top == size - 1) {
            cout << "Stack Overflow" << endl;
        } else {
            top++;
            arr[top] = x;
        }
    }
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;
        } else {
            top--;
        }
    }
    int peek() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return -1;
        } else {
            return arr[top];
        }
    }
    void display() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Stack elements are: ";
            for (int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }

    }


};
int main() {
    Stack s(5);

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    cout << "Top element: " << s.peek() << endl;

    s.pop();

    s.display();

    return 0;
}
