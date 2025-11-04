#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> marks;     // stack declared
    int choice, value;

    cout << "Menu:\n";
    cout << "1. Push\n";
    cout << "2. Pop\n";
    cout << "3. Display\n";
    cout << "4. Exit\n";

    do {
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                marks.push(value);
                break;

            case 2:
                if (marks.empty()) {
                    cout << "Stack is empty\n";
                } else {
                    cout << "Popped: " << marks.top() << endl;
                    marks.pop();
                }
                break;

            case 3:
                if (marks.empty()) {
                    cout << "Stack is empty\n";
                } else {
                    cout << "Stack elements (top to bottom): ";
                    stack<int> temp = marks;
                    while (!temp.empty()) {
                        cout << temp.top() << " ";
                        temp.pop();
                    }
                    cout << endl;
                }
                break;

            case 4:
                exit(0);

            default:
                cout << "Invalid choice\n";
        }

    } while (choice != 4);

    return 0;
}
