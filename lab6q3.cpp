#include <iostream>
#include <cmath>

using namespace std;

int factorial(int num) {
    return (num == 0) ? 1 : num * factorial(num - 1);
}

int main() {
    int n, x;
    cout << "Value for n: ";
    cin >> n;
    cout << "Value for x: ";
    cin >> x;

    double* allNumbers = new double[x];

    for (int i = 1; i <= x; i++) {
        allNumbers[i-1] = pow(n, i) / factorial(i);
    }

    double myResult = 1;

    for (int i = 0; i < x; i++) {
        myResult += allNumbers[i];
    }

    cout << "Result is : " << myResult << endl;

    delete[] allNumbers;

    return 0;
}
