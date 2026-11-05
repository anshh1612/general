
#include<iostream>
using namespace std;

int main(){

    float p, r, t, si, ci, amount;
    int choice;
    char again;

    do{

        cout << "\n===== SMART INTEREST CALCULATOR =====";

        cout << "\nEnter Principal (Rs): ";
        cin >> p;

        cout << "Enter Rate (%): ";
        cin >> r;

        cout << "Enter Time (Years): ";
        cin >> t;

        if(p <= 0 || r < 0 || t <= 0){
            cout << "\n Correct Values Please!";
        }
        else{
            si = (p*r*t)/100;

            amount = p;
            for(int i = 1; i <= t; i++)
                amount += amount*r/100;

            ci = amount-p;

            cout << "\n1. Simple Interest";
            cout << "\n2. Compound Interest";
            cout << "\n3. Compare Both";
            cout << "\n4. Investment Report";

            cout << "\n\nEnter Choice: ";
            cin >> choice;

            if(choice == 1)
                cout << "\nSimple Interest: Rs " << si
                    << "\nTotal Amount: Rs " << p+si;

            else if(choice == 2)
                cout << "\nCompound Interest: Rs " << ci
                    << "\nTotal Amount: Rs " << amount;

            else if(choice == 3)
                cout << "\nSimple Interest: Rs " << si
                    << "\nCompound Interest: Rs " << ci
                    << "\nExtra Earnings: Rs " << ci-si;

            else if(choice == 4){

                cout << "\nYear\tAmount";

                float temp = p;

                for(int i = 1; i <= t; i++){
                    temp += temp*r/100;
                    cout << "\n" << i << "\t" << temp;
                }
            }
            else
                cout << "\nInvalid Choice!";
        }

        cout << "\n\nCalculate Again? (Y/N): ";
        cin >> again;

    }while(again == 'Y' || again == 'y');

    cout << "\nThank You!";

    return 0;
}
