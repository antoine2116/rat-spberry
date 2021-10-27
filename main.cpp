#include <iostream>
#include <wiringPi.h>

using namespace std;

const int redLED = 8;
const int greenLED = 0;

int main() {
    wiringPiSetup();

    pinMode(redLED, OUTPUT);
    pinMode(greenLED, OUTPUT);

    cout << "Press CTRL-C to exit." << endl;

    while (!signal_received) {
        cout << "salut" << endl;

        digitalWrite(redLED, HIGH);
        digitalWrite(greenLED, LOW);
        delay(500);

        digitalWrite(redLED, LOW);
        digitalWrite(greenLED, HIGH);
        delay(500);
    }

    cout << endl << "Completed cleanup of GPIO resources." << endl;

    return 0;
}