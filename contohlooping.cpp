#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    //deklarasi variabel
    int counter;
    int i;
    int perulanganwhile = 0;
    int perulanganDo = 0;

    //loop with for
    //loop for ascending
    for(counter = 0; counter < 5; counter++) {
        cout << "Nilai Counter = " << counter << "TI UMY" << endl;
    }
    cout << "Nilai counter terakhir = " << counter << endl;
    cout <<endl;

    //loop for descending
    for(counter = 5; counter > 0; counter--) {
        cout << "Nilai Counter = " << counter << "TI UMY" << endl;
    }
    cout << "Nilai counter terakhir = " << counter << endl;
    cout <<endl;
}