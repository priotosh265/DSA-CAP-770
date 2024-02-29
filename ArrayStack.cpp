#include <iostream>
using namespace std;

int stack[100], i, j, choice = 0, n, top = -1;

void push();
void pop();
void show();

int main() {
    cout << "Enter the number of elements in the stack: ";
    cin >> n;
    cout << "*********Stack operations using array*********\n";

    while (choice != 4) {
        cout << "Choose one from the below options...\n";
        cout << "1. Push\n2. Pop\n3. Show\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                show();
                break;
            case 4:
                cout << "OK Exiting...\n";
                break;
            default:
                cout << "Please enter a valid choice\n";
        }
    }

    return 0;
}

void push() {
    int val;
    if (top == n - 1)
        cout << "Overflow\n";
    else {
        cout << "Enter the value: ";
        cin >> val;

        top = top + 1;
        stack[top] = val;
    }
}

void pop() {
    if (top == -1)
        cout << "Underflow\n";
    else
        top = top - 1;
}

void show() {
    if (top == -1) {
        cout << "Stack is empty\n";
    } else {
        cout << "Stack elements:\n";
        for (i = top; i >= 0; i--) {
            cout << stack[i] << "\n";
        }
    }
}
