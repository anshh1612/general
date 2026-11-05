
#include<iostream>
#include<cmath>
using namespace std;

int main(){

    float a, b, c, s, area;
    char again;

    do{
        cout << "\n===== TRIANGLE VALIDATOR =====";
        cout << "\nSide 1: ";
        cin >> a;
        cout << "Side 2: ";
        cin >> b;
        cout << "Side 3: ";
        cin >> c;
        if(a <= 0 || b <= 0 || c <= 0){
            cout << "\n Not A Triangle";}

        else if(a+b <= c || a+c <= b || b+c <= a){
            cout << "\n Not A Triangle";}

        else{
            if(a == b && b == c)cout << "\nType: Equilateral";
            else if(a == b || b == c || a == c)cout << "\nType: Isosceles";
            else cout << "\nType: Scalene";

            if(a*a + b*b == c*c ||a*a + c*c == b*b ||b*b + c*c == a*a)cout << "\nAngle: Right-Angled";
            else cout << "\nAngle: Acute or Obtuse";

            cout << "\nPerimeter: " << a+b+c;

            // Area using Heron's Formula
            s = (a+b+c)/2;

            area = sqrt(s*(s-a)*(s-b)*(s-c));

            cout << "\nArea: " << area;

        }

        cout << "\n\n Again? (Y/N): ";
        cin >> again;

    }while(again == 'Y' || again == 'y');

    cout << "\nThanks";

    return 0;
}
