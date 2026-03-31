#include <iostream>
using namespace std;

int main() {
    float celcius, fahrenheit;
    cout << "Masukkan suhu dalam Celcius: ";
    cin >> celcius;
    fahrenheit = (celcius * 9.0/5.0) + 32;
    cout << "Suhu dalam Fahrenheit: " << fahrenheit << endl;
 return 0;
}