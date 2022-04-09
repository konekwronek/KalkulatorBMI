// KalkulatorBMI.cpp
//

#include <iostream>

using namespace std;

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
        cout << "Your BMI is: " << bmi << endl;

        cout << "Again? [y/n]\n";
        cin >> choice;
    };

    return 0;
}