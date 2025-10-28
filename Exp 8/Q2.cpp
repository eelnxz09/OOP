#include <iostream>
#include <string>
using namespace std;

// Base class
class I_login {
protected:
    string name;

public:
    // Virtual function for accepting input, allowing derived classes to override
    virtual void accept() {
        cout << "\nEnter Name: ";
        cin >> name;
    }

    // Virtual function for displaying output, allowing derived classes to override
    virtual void display() {
        cout << "\nName: " << name << endl;
    }
};

// Derived class 1 (Intermediate)
class email_login : public I_login {
protected:
    string email;
    string password;

public:
    void accept() override {
        I_login::accept(); // Call base class accept
        cout << "Enter Email: ";
        cin >> email;
        cout << "Enter Password: ";
        cin >> password;
    }

    void display() override {
        I_login::display(); // Call base class display
        cout << "Email: " << email << endl;
        cout << "Password: " << password << endl;
    }
};

// Derived class 2 (Final)
class membership_login : public email_login {
    int member_id;

public:
    void accept() override {
        email_login::accept(); // Call intermediate class accept
        cout << "Enter Member ID: ";
        cin >> member_id;
    }

    void display() override {
        cout << "\nMembership Login Details: " << endl;
        email_login::display(); // Call intermediate class display
        cout << "Member ID: " << member_id << endl;
    }
};

int main() {
    // Create an object of the final derived class
    membership_login m;
    m.accept();
    m.display();

    // Demonstrate polymorphism using a base class pointer
    I_login* login = new membership_login();
    login->accept();
    login->display();
    delete login;

    // Another example of object usage
    email_login e;
    e.accept();
    e.display();

    return 0;
}
