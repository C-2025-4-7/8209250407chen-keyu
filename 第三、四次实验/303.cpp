#include <iostream>
#include "mytemperature.h"
using namespace std;
int main() {
    system("chcp 65001>nul"); 
    cout << "Celsius    Fahrenheit   |   Fahrenheit       Celsius" << endl;
    cout << "------------------------------------------------------" << endl;
    double celsius = 40.0;
    double fahrenheit = 120.0;
    while (celsius >= 31.0 && fahrenheit >= 30.0) {
        cout  << celsius << "    " << celsius_to_fah(celsius) << "   |   ";   
        cout << fahrenheit << "       ";
        cout << fahrenheit_to_cels(fahrenheit); 
        cout << endl;
        celsius -= 1.0; 
        fahrenheit -= 10.0; 
    }

    return 0;
}