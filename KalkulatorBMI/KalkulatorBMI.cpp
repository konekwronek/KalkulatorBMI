// KalkulatorBMI.cpp
//

#include <iostream>

using namespace std;

string scale(double bmi) {
    if (bmi < 18.5)return "underweight";
    else if (bmi >= 18.5 && bmi < 25)return "normal";
    else if (bmi >= 25 && bmi < 30)return "overweight";
    else if (bmi >= 30 && bmi < 35)return "obse";
    else if (bmi >= 35)return "extrimly obse";
}

int main()
{
    char choice = 'y'; //Again?
    while (choice == 'y' || choice == 'Y') {
        cout << "Enter hight in cm\n";
        double hight; //hight in cm
        cin >> hight;
        cout << "Enter weight in kg\n";
        double weight; //weight in kg
        cin >> weight;

        hight = hight / 100; //hight in meters
        double bmi; //bmi
        bmi = weight / (hight * hight); //bmi counting
        cout << "Your BMI is: " << bmi << " you are " << scale(bmi) << "." << endl;
        cout << "Again? [y/n]\n";
        cin >> choice;
    };

    return 0;
}