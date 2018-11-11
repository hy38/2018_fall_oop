#include <iostream>
#include <string>

using namespace std;

template <typename T>
T sum(T a, T b){
    return a+b;
}

int main(void){
    int a = 1, b = 2;

    double d1 = 2.2;
    double d2 = 3.3;

    string s1 = "Show me ";
    string s2 = "The Money 6";

    cout << "sum int :" << sum<int>(a, b) << endl;
    cout << "sum double :" << sum<double>(d1, d2) << endl;
    cout << "sum string :" << sum<string>(s1, s2) << endl;
}