#include <iostream>


double power(int base, int downNumber) {

    if (downNumber == 0)

        return 1;
    else if (downNumber < 0)

        return 1.0 / power(base, -downNumber);
    else

        return base * power(base, downNumber - 1);
}
double power(int base, double downNumber) {
    if (downNumber == 0)

        return 1;

    else if (downNumber < 0)

        return 1.0 / power(base, -downNumber);

    else

        return base * power(base, downNumber - 1);

}

double myResult = 0;
void calculateEquation(int n) {

    if (n == 0)
        return;

    double myNumber = power(-1, n+1) / n;

    myResult += myNumber;

    calculateEquation(n - 1);
}

int main() {
    int x ;
    std::cout << "Value for x: ";
    std::cin >> x;
    calculateEquation(x);
    std::cout << "The result is: " << myResult << std::endl;

    return 0;
}