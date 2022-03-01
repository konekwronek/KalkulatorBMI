// KalkulatorBMI.cpp
//

#include <iostream>

using namespace std;

int main()
{
    char wybor = 't';
    do {
        cout << "Podaj wzrost w cm\n";
        double wzrost; //wzrost w cm
        cin >> wzrost;
        cout << "Podaj mase ciala w kg\n";
        double masa; //masa w kg
        cin >> masa;

        wzrost = wzrost / 100; //wzrost w metrach
        double bmi; //bmi
        bmi = masa / (wzrost * wzrost); //obliczenie bmi
        cout << "Twoje BMI to: " << bmi << endl;

        cout << "Jeszcze raz? [t/n]\n";
        cin >> wybor;
    } while (wybor == 't' || wybor == 'T');

    system("pause");
    return 0;
}