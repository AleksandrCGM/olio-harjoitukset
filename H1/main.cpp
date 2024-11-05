#include <iostream>
#include <iomanip>
using namespace std;

//Funktion summan laskemiseen
void calcSum(int a, int b) {
    int summa = a+b;
    cout <<"Summa: " << summa << endl;
}
// Funktion osamäärän laskemiseen
void calcDiv(int a, int b) {
    if (b == 0) {
        cout <<"Virhe: jakaja ei voi olla nolla!" << endl;
    }else{
        float osamaara = static_cast<float>(a)/b;
        cout <<"Osamaara: " << osamaara << endl;
    }
}
// Funktion summan laskemiseen, joka palauttaa arvon
float retSum(int a, int b) {
    return a+b;
}
// Funktion osamäärän laskemiseen, joka palauttaa arvon
int retDiv(int a, int b) {
    if (b == 0) {
        cout <<"Virhe: jakaja ei voi olla nolla!" << endl;
        return 0.0;
    } else {
        return static_cast<float>(a)/b;
    }
}

int main() {
    int a, b;
    // Kysytään käyttäjältä lukuja
    cout <<"Anna ensimmainen luku";
    cin >> a;
    cout <<"Anna toinen luku";
    cin >> b;
    // Lasketaan ja tulostetaan summan ja osamäärän
    calcSum(a, b);
    calcDiv(a, b);
    // Käytetään palauttavia funktioita
    int summa = retSum(a, b);
    float osamaara = retDiv(a, b);
    //Tulostetaan palautetut arvot
    cout <<"Palautettu summa: " << summa << endl;
    cout <<"Palautettu osamaara: " << osamaara << endl;
    return 0;
}
