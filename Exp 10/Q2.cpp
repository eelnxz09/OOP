#include<iostream>
using namespace std;

template<class T>
T square(T x){
    T sum = 0;
    sum = x * x;
    return sum;
}

template<>
string square<string>(string ss){
    return (ss + ss);
}

int main(){
    int i = 2, ii;
    string ww = "MIT";
    ii = square<int>(i);

    cout << "Square of 2 is: " << ii << endl;
    cout << "Square of given string is: " << square<string>(ww) << endl;

    return 0;
}
