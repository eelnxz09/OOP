#include <iostream>
using namespace std;
class Car {
    string color;
    string brand;
    string model;
    float mileage;
public:
    Car(string c, string m, float mil, string b = "TATA") {
        color = c;
        model = m;
        mileage = mil;
        brand = b;
    }
    void display() {
        cout << "Color: " << color << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Mileage: " << mileage << endl;
        cout << endl;
    }
};
int main() {
    string c1, m1, c2, m2;
    float mil1, mil2;
    cout << "Enter color, model, mileage for Car 1: ";
    cin >> c1 >> m1 >> mil1;
    cout << "Enter color, model, mileage for Car 2: ";
    cin >> c2 >> m2 >> mil2;
    Car car1(c1, m1, mil1);
    Car car2(c2, m2, mil2);
    car1.display();
    car2.display();
    return 0;
}
