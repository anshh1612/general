#include<iostream>
using namespace std;

int main(){

    float a, b, res;
    float min, max;
    int age;
    char gender, choice;

    do{

        cout << "\n====================================";
        cout << "\n       SMART BMI CALCULATOR";
        cout << "\n====================================\n";

        cout << "\nEnter Your Age: ";
        cin >> age;

        cout << "Enter Gender (M/F): ";
        cin >> gender;

        cout << "Enter Height (in meters): ";
        cin >> a;

        cout << "Enter Weight (in kg): ";
        cin >> b;

        if(a <= 0 || b <= 0 || age <= 0 ||
        (gender != 'M' && gender != 'm' &&
            gender != 'F' && gender != 'f')){

            cout << "\n Enter Correct Values !!";

        }

        else{

            res = b/(a*a);

            // Healthy weight range
            min = 18.5 * a * a;
            max = 24.9 * a * a;

            cout << "\n====================================";
            cout << "\n           BMI REPORT";
            cout << "\n====================================";

            cout << "\nAge: " << age;
            cout << "\nGender: " << gender;
            cout << "\nHeight: " << a << " m";
            cout << "\nWeight: " << b << " kg";

            cout << "\nYour BMI: " << res;

            cout << "\n\nStatus: ";

            if(res < 18.5){

                cout << "UNDERWEIGHT";

                cout << "\nSuggestion: Focus on a balanced diet";

                cout << "\nWeight to gain: "
                    << min - b << " kg (approx.)";

            }

            else if(res >= 18.5 && res < 25){

                cout << "HEALTHY WEIGHT";

                cout << "\nSuggestion: Maintain a balanced";
                cout << "\ndiet and regular physical activity.";

                cout << "\nYou are within the healthy BMI range!";

            }

            else if(res >= 25 && res < 30){

                cout << "OVERWEIGHT";

                cout << "\nSuggestion: Focus on balanced";
                cout << "\nnutrition and regular exercise.";

                cout << "\nWeight difference from upper";
                cout << "\nhealthy limit: "
                    << b - max << " kg (approx.)";

            }

            else{

                cout << "OBESE";

                cout << "\nSuggestion: Consider discussing";
                cout << "\nyour health goals with a healthcare";
                cout << "\nprofessional.";

                cout << "\nWeight difference from upper";
                cout << "\nhealthy limit: "
                    << b - max << " kg (approx.)";

            }

            // Ideal Weight Range
            cout << "\n\nHealthy Weight Range: ";
            cout << min << " - " << max << " kg";

            // BMI Chart
            cout << "\n\n========== BMI CHART ==========";
            cout << "\nUnderweight : Below 18.5";
            cout << "\nHealthy     : 18.5 - 24.9";
            cout << "\nOverweight  : 25 - 29.9";
            cout << "\nObese       : 30 and above";
            cout << "\n================================";

            cout << "\n\nNote: BMI is a screening tool,";
            cout << "\nnot a complete health diagnosis.";

        }

        cout << "\n\nDo you want to calculate again? (Y/N): ";
        cin >> choice;

    }while(choice == 'Y' || choice == 'y');

    cout << "\n\nThank you for using SMART BMI CALCULATOR!";
    cout << "\n====================================\n";

    return 0;
}
