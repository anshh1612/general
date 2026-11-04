
#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.141592653589793;

double add(double a, double b) {return a + b;}

double subtract(double a, double b) {return a - b;}

double multiply(double a, double b) {return a * b;}

double divide(double a, double b) {return a / b;}

int findmodulus(int a, int b) {return a % b;}

double power(double a, double b) {return pow(a, b);}

double squareRoot(double a) {return sqrt(a);}

double cubeRoot(double a) {return cbrt(a);}

double sine(double a) {return sin(a * PI / 180.0);}

double cosine(double a) {return cos(a * PI / 180.0);}

double tangent(double a) {return tan(a * PI / 180.0);}

double cosecant(double a) {return 1.0 / sine(a);}

double secant(double a) {return 1.0 / cosine(a);}

double cotangent(double a) {return 1.0 / tangent(a);}

double naturalLog(double a) {return log(a);}

double commonLog(double a) {return log10(a);}

double factorial(int n) {
    double fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

double absolute(double a) {return fabs(a);} //fabs is used for float absolute vale , also can use abs()

double exponential(double a) {return exp(a);}

double reciprocal(double a) {return 1.0 / a;}


int main() {
    int choice, n, b;
    double a, x, result;

    while (true) {

        cout << "\n\n================================";
        cout << "\n       SCIENTIFIC CALCULATOR";
        cout << "\n================================";
        cout << "\n\n1. Addition ";
        cout << "2. Subtraction";
        cout << "\n3. Multiplication ";
        cout << "4. Division";
        cout << "\n5. Modulus ";
        cout << "6. Power";
        cout << "\n7. Square Root ";
        cout << "8. Cube Root";
        cout << "\n9. Sin ";
        cout << "10. Cos";
        cout << "\n11. Tan ";
        cout << "12. Cosec";
        cout << "\n13. Sec ";
        cout << "14. Cot";
        cout << "\n15. Natural Log (ln) ";
        cout << "16. Common Log (log10)";
        cout << "\n17. Factorial ";
        cout << "18. Absolute Value";
        cout << "\n19. Exponential (e^x) ";
        cout << "20. Reciprocal (1/x)";

        cout << "\n\n21. Exit";

        cout << "\n\nEnter your choice: ";
        cin >> choice;

        if (choice == 21) {
            cout << "\nThank you for using Scientific Calculator!";
            break;
        }


switch (choice) {

    case 1:
        cout << "Enter two numbers: ";
        cin >> a >> x;
        result = add(a, x);
        break;

    case 2:
        cout << "Enter two numbers: ";
        cin >> a >> x;
        result = subtract(a, x);
        break;

    case 3:
        cout << "Enter two numbers: ";
        cin >> a >> x;
        result = multiply(a, x);
        break;

    case 4:
        cout << "Enter two numbers: ";
        cin >> a >> x;

        if (x == 0) {
            cout << "Cannot divide by zero!";
            break;
        }

        result = divide(a, x);
        break;

    case 5:
        cout << "Enter two integers: ";
        cin >> n >> b;

        if (b == 0) {
            cout << "Modulus by zero not allowed!";
            break;
        }

        result = findmodulus(n, b);
        break;

    case 6:
        cout << "Enter base and exponent: ";
        cin >> a >> x;
        result = power(a, x);
        break;

    case 7:
        cout << "Enter number: ";
        cin >> a;

        if (a < 0) {
            cout << "Invalid input!";
            break;
        }

        result = squareRoot(a);
        break;

    case 8:
        cout << "Enter number: ";
        cin >> a;
        result = cubeRoot(a);
        break;

    case 9:
        cout << "Enter angle: ";
        cin >> a;
        result = sine(a);
        break;

    case 10:
        cout << "Enter angle: ";
        cin >> a;
        result = cosine(a);
        break;

    case 11:
        cout << "Enter angle: ";
        cin >> a;
        result = tangent(a);
        break;

    case 12:
        cout << "Enter angle: ";
        cin >> a;

        if (fabs(sine(a)) < 1e-12) {
            cout << "Undefined!";
            break;
        }

        result = cosecant(a);
        break;

    case 13:
        cout << "Enter angle: ";
        cin >> a;

        if (fabs(cosine(a)) < 1e-12) {
            cout << "Undefined!";
            break;
        }

        result = secant(a);
        break;

    case 14:
        cout << "Enter angle: ";
        cin >> a;

        if (fabs(sine(a)) < 1e-12) {
            cout << "Undefined!";
            break;
        }

        result = cotangent(a);
        break;

    case 15:
        cout << "Enter number: ";
        cin >> a;

        if (a <= 0) {
            cout << "Invalid input!";
            break;
        }

        result = naturalLog(a);
        break;

    case 16:
        cout << "Enter number: ";
        cin >> a;

        if (a <= 0) {
            cout << "Invalid input!";
            break;
        }

        result = commonLog(a);
        break;

    case 17:
        cout << "Enter integer: ";
        cin >> n;

        if (n < 0 || n > 170) {
            cout << "Invalid input!";
            break;
        }

        result = factorial(n);
        break;

    case 18:
        cout << "Enter number: ";
        cin >> a;
        result = absolute(a);
        break;

    case 19:
        cout << "Enter number: ";
        cin >> a;
        result = exponential(a);
        break;

    case 20:
        cout << "Enter number: ";
        cin >> a;

        if (a == 0) {
            cout << "Undefined!";
            break;
        }

        result = reciprocal(a);
        break;

    default:
        cout << "Invalid choice!";
        continue;
}

cout << "\nResult = " << result;

} 

return 0;

} 
