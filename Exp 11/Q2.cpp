#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};

    cout << "Initial Vector: " << endl;
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        cout << *it << " " << endl;
    }

    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        *it = (*it) * 10;
    }

    cout << "New Vector: " << endl;
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        cout << *it << " " << endl;
    }
    
    return 0;
}
