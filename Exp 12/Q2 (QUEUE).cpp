#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> marks;   // queue declared
    marks.push(225);
    marks.push(330);
    marks.push(445);

    int choice, value;

    cout << "Menu:\n";
    cout << "1. Enqueue (Insert)\n";
    cout << "2. Dequeue (Delete)\n";
    cout << "3. Display\n";
    cout << "4. Exit\n";

    do {
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                marks.push(value);
                break;

            case 2:
                if (marks.empty()) {
                    cout << "Queue is empty\n";
                } else {
                    cout << "Dequeued: " << marks.front() << endl;
                    marks.pop();
                }
                break;

            case 3:
                if (marks.empty()) {
                    cout << "Queue is empty\n";
                } else {
                    cout << "Queue elements (front to rear): ";
                    queue<int> temp = marks;
                    while (!temp.empty()) {
                        cout << temp.front() << " ";
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
